/*
 * tinysh.c
 *
 *  Created on: Apr 4, 2022
 *      Author: madop
 */

#include <tinysh.h>
#include "main.h"


#ifdef SHELL_CMD

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 	256
#endif
#ifndef HISTORY_DEPTH
#define HISTORY_DEPTH 	10		// 16
#endif
#ifndef MAX_ARGS
#define MAX_ARGS 		10		// 16
#endif
#ifndef PROMPT_SIZE
#define PROMPT_SIZE 	8 		// 16
#endif
#ifndef TOPCHAR
#define TOPCHAR 		'/'
#endif

typedef unsigned char uchar;

/* redefine some useful and maybe missing utilities to avoid conflicts */
#define	strlen	tinysh_strlen
#define	puts	tinysh_puts
#define putchar tinysh_char_out

static void help_fnt(int argc, char **argv);
static tinysh_cmd_t help_cmd={  0,"HELP","	   	[NONE]","[NONE]",help_fnt,0,0,0 };
static int strlen(uchar *s);
static void puts(char *s);

static uchar 		input_buffers[HISTORY_DEPTH][BUFFER_SIZE+1] = {0};
static uchar 		trash_buffer[BUFFER_SIZE+1] ={0};
static int 	 		cur_buf_index=0;
static uchar 		context_buffer[BUFFER_SIZE+1] ={0};
static int 	 		cur_context=0;
static int 	 		cur_index=0;
static int 	 		echo=1;
static char  		prompt[PROMPT_SIZE+1]="$ ";
static tinysh_cmd_t *root_cmd=&help_cmd;
static tinysh_cmd_t *cur_cmd_ctx=0;
static void 		*tinysh_arg=0;


///UART PORT
extern UART_HandleTypeDef huart3;
extern struct fwCfg_t userConfig;
extern struct fwCfg_t *fwCfgp;
extern int16_t afe_raw_data[TX_LEN][RX_LEN];



/**************************************
 * FLASH ERASE COMMAND	  			  *
 * FERASE [NONE]					  *
 * Used to erase flash storage area   *
 **************************************/
static void fEraseCMD(int argc, char **argv)
{
	if (argc > 1){
		puts("FERASE invalid arguments!\r\n");
		return;
	}else{
		flashErase();
		puts("FERASE finish!\r\n");
	}
}


/****************************************************
 * FLASH WRITE COMMAND	  			  				*
 * FERASE [NONE]					  				*
 * Used to save values into flash storage area		*
 ****************************************************/
static void fWriteCMD(int argc, char **argv)
{
	if (argc != 2){
		puts("FWRITE invalid arguments!\r\n");
		return;
	}else{

		uint8_t len = strlen((uchar*)&argv[1][0]);
		//printf("FWRITE: %s (%d)\r\n", (uchar*)&argv[1][0], len);

		uint32_t value = (uint32_t)tinysh_dec((char*)&argv[1][0]);
		printf("DEC (%d): %ld \r\n", len, value);


		HAL_StatusTypeDef status = flashWrite(FLASH_USER_START_ADDR, value);
		if(status == HAL_OK){
			puts("FWRITE complete!");
		}else{
			puts("FWRITE fail!");
		}

	}
}


/****************************************************
 * FLASH READ COMMAND	  			  				*
 * FREAD [NONE]						  				*
 * Used to read values from flash storage area		*
 ****************************************************/
static void fReadCMD(int argc, char **argv)
{
	if (argc > 1){
		//puts(argumentNotmatch);
		return;
	}else{
		uint32_t addr = FLASH_USER_START_ADDR;
		uint32_t value;
		puts("FLASH READ First 60 byte in data area\r\n");
		for(uint8_t x = 0; x < 60; x+=4){
			value = flashRead(addr);
			printf("4 byte: %ld, %d:x%02lX, %d:x%02lX, %d:x%02lX, %d:x%02lX\r\n",
					value, x, (value & 0x000000ff), x+1, (value & 0x0000ff00)>>8 , x+2, (value & 0x00ff0000)>>16, x+3, (value & 0xff000000) >> 24);
			addr +=4;
		}

	}
}



/************************************************
 * RAM READ COMMAND	  			      			*
 * RAMREAD [NONE]					  			*
 * Used to read values from RAM storage area	*
 ************************************************/
static void ram2ReadCMD(int argc, char **argv)
{
	uint32_t data32;

	data32 = *(__IO uint32_t *)RAM_USER_START_ADDR;
	printf("x%lx: %ld\r\n", RAM_USER_START_ADDR, data32);

	data32 = *(__IO uint32_t *)RAM_USER_START_ADDR+4;
	printf("x%lx: %ld\r\n", RAM_USER_START_ADDR+4, data32);

	data32 = *(__IO uint32_t *)RAM_USER_START_ADDR+8;
	printf("x%lx: %ld\r\n", RAM_USER_START_ADDR+8, data32);

	printf("userConfig: %ld %ld %ld %ld \r\n", userConfig.u32_crc, userConfig.u32_len, userConfig.u32_crcN, userConfig.u32_lenN);
}


/**************************************
 * RAM WRITE COMMAND	  			  *
 * RAMWRITE
 **************************************/
static void ram2WriteCMD(int argc, char **argv)
{
	if (argc != 2){
		puts("RAMWRITE accept 2 arg\r\n");
		return;
	}else{

		uint8_t len = strlen((uchar*)&argv[1][0]);
		//printf("FWRITE: %s (%d)\r\n", (uchar*)&argv[1][0], len);

		uint32_t value = (uint32_t)tinysh_dec((char*)&argv[1][0]);
		printf("DEC (%d): %ld \r\n", len, value);


		volatile int *point = (int *)RAM_USER_START_ADDR;
		*point = value;

		puts("RAMWRITE complete!");
	}
}


/**************************************
 * CONFIG RAM WRITE COMMAND	  		  *
 * CFGWRITE
 **************************************/
static void configWriteCMD(int argc, char **argv)
{
	if (argc != 7){
		printf("CFGWRITE accept 7 arg. (%d)\r\n", argc);
		return;
	}else{
		uint8_t len = strlen((uchar*)&argv[1][0]);
		uint32_t value = (uint32_t)tinysh_dec((char*)&argv[1][0]);
		printf("New CRC value (%d): %ld \r\n", len, value);
		userConfig.u32_crc = value;

		len = strlen((uchar*)&argv[2][0]);
		value = (uint32_t)tinysh_dec((char*)&argv[2][0]);
		printf("New LEN value (%d): %ld \r\n", len, value);
		userConfig.u32_len = value;

		len = strlen((uchar*)&argv[3][0]);
		value = (uint32_t)tinysh_dec((char*)&argv[3][0]);
		printf("New crcN value (%d): %ld \r\n", len, value);
		userConfig.u32_crcN = value;

		len = strlen((uchar*)&argv[4][0]);
		value = (uint32_t)tinysh_dec((char*)&argv[4][0]);
		printf("New lenN value (%d): %ld \r\n", len, value);
		userConfig.u32_lenN = value;

		len = strlen((uchar*)&argv[5][0]);
		value = (uint32_t)tinysh_dec((char*)&argv[5][0]);
		printf("New CFG ProID value (%d): %ld \r\n", len, value);
		CFG_U32_CRC = value;

		len = strlen((uchar*)&argv[6][0]);
		value = (uint32_t)tinysh_dec((char*)&argv[6][0]);
		printf("New CFG VER value (%d): %ld \r\n", len, value);
		CFG_U16_CFG_VER = value;
	}
}


/**************************************
 * CONFIG VARIABLE READ COMMAND	  	  *
 * CFGREAD							  *
 **************************************/
static void configReadCMD(int argc, char **argv)
{
#if 1
	printf("CONFIG:\r\nCRC: %ld LEN: %ld CRCN: %ld LENN: %ld CFGID: %d, CFGVer: %d\r\n",
			userConfig.u32_crc, userConfig.u32_len, userConfig.u32_crcN, userConfig.u32_lenN, userConfig.u16_cfgProjectId, userConfig.u16_cfgVer);

	printf("PartID: %d cfgAfeVer: %d res016: %d res017: %d\r\n"
			"extRelB0: %d, extRelB1: %d, extRelB2: %d, extRelB3: %d\r\n"
			"extRelB4: %d, extRelB5: %d, extRelB6: %d, extRelB7: %d\r\n",
				userConfig.u8_cfgPartId, userConfig.u8_cfgAfeVer, userConfig.u8_reserved016, userConfig.u8_reserved017,
				userConfig.u8_extReleaseByte0, userConfig.u8_extReleaseByte1, userConfig.u8_extReleaseByte2, userConfig.u8_extReleaseByte3,
				userConfig.u8_extReleaseByte4, userConfig.u8_extReleaseByte5, userConfig.u8_extReleaseByte6, userConfig.u8_extReleaseByte7);

	printf("sense0: %d sense1: %d sense2: %d sense3: %d\r\n"
			"sense4: %d, sense5: %d, sense6: %d, sense7: %d\r\n"
			"force0En: %d, force1En: %d, force2En: %d, force3En: %d\r\n"
			"force4En: %d, force5En: %d, force6En: %d, force7En: %d\r\n",
				userConfig.u8_sense0En, userConfig.u8_sense1En, userConfig.u8_sense2En, userConfig.u8_sense3En,
				userConfig.u8_sense4En, userConfig.u8_sense5En, userConfig.u8_sense6En, userConfig.u8_sense7En,
				userConfig.u8_force0En, userConfig.u8_force1En, userConfig.u8_force2En, userConfig.u8_force3En,
				userConfig.u8_force4En, userConfig.u8_force5En, userConfig.u8_force6En, userConfig.u8_force7En);

	printf("senseLen: %d forceLen: %d scrXRes: %d scrYRes: %d\r\n"
			"b_orSwap: %d, b_orForce: %d, b_orSense: %d, b_rptResScaleEn: %d\r\n"
			"b_res036_4_7: %d, rptXRes: %d, rptYRes: %d, scrPpi: %d\r\n"
			"orientRawdata: %d, scrMultiple: %d, res03F: %d, b_acalEn: %d, b1_acalIdleSsEn: %d, b6_reserved040_2_7: %d\r\n",
				userConfig.u8_senseLen, userConfig.u8_forceLen, userConfig.u16_scrXRes, userConfig.u16_scrYRes,
				userConfig.b1_orientSwap, userConfig.b1_orientForce, userConfig.b1_orientSense, userConfig.b1_rptResScaleEn,
				userConfig.b4_reserved036_4_7, userConfig.u16_rptXRes, userConfig.u16_rptYRes, userConfig.u16_scrPpi,
				userConfig.u8_orientRawdata, userConfig.u8_scrMultiple, userConfig.u8_reserved03F, userConfig.b1_acalEn, userConfig.b1_acalIdleSsEn, userConfig.b6_reserved040_2_7);

	printf("\r\n\nu16_acalMsKeyUpThres: x%X, u16_acalMsKeyLowThres: x%X,  b4_acalMsScrWgh: x%X,  b1_acalEn: x%X \r\n",
				userConfig.u16_acalMsKeyUpThres, userConfig.u16_acalMsKeyLowThres,userConfig.b4_acalMsScrWgh, userConfig.b1_acalEn);

	printf("\r\n\nuu16_adcCoef418: x%X, u16_bdrRejTopCoor: x%X,  b1_bdrRejCfg: x%X,  b7_reserved9FA_1_7: x%X \r\n",
				userConfig.u16_adcCoef418, userConfig.u16_bdrRejTopCoor, userConfig.b1_bdrRejCfg, userConfig.b7_reserved9FA_1_7);

	printf("\r\n\nb1_msFltUpdownChkEn: x%X, b1_msFltLeftrightChkEn: x%X,  u8_grpEdgeBigThumbAreaTotal: x%X,  u16_grpEdgeBigThumbSumEccen: x%X \r\n",
				userConfig.b1_msFltUpdownChkEn, userConfig.b1_msFltLeftrightChkEn, userConfig.u8_grpEdgeBigThumbAreaTotal, userConfig.u16_grpEdgeBigThumbSumEccen);

	printf("sizeof userConfig: x%X bytes\r\n", sizeof(userConfig));
#endif
}


/**************************************************************
 * READ FLASH in particular sector  						  *
 * PRINTFLASH												  *
 * usecase: Read stored config value in FLASH_USER_START_ADDR *
 **************************************************************/
static void flashAreaReadCMD(int argc, char **argv)
{
	flashAreaRead(FLASH_USER_START_ADDR, 1000);
}


/********************************************************
 * Print RAM value 										*
 * PRINTRAM												*
 * usecase: read RAM on addr 0x2001F000 (fw config)		*
 ********************************************************/
static void printRAMCMD(int argc, char **argv)
{
	printRAMvalue (RAM_USER_START_ADDR, 1000);

	puts("PRINTRAM FINISH\r\n");
}


/********************************************************
 * Copy Config data from Flash Area to RAM area			*
 * COPYTORAM											*
 ********************************************************/
static void copyToRamCMD(int argc, char **argv)
{
#if 1
	if(copyFlashToRAM(FLASH_USER_START_ADDR, RAM_USER_START_ADDR, sizeof(fwCfg_t)) == HAL_OK){
		puts("Copy Flash to RAM OK !!!\r\n");
	}else{
		puts("Copy Flash to RAM FAIL !!!\r\n");
	}
#endif
}


/********************************************************
 * 	Copy config data from RAM area to Flash Area    	*
 * 	COPYTOFLASH											*
 ********************************************************/
static void copyToFlashCMD(int argc, char **argv)
{
	if(copyRamToFlash(RAM_USER_START_ADDR, FLASH_USER_START_ADDR, sizeof(fwCfg_t)) == HAL_OK){
		puts("Copy RAM to FLASH OK !!!\r\n");
	}else{
		puts("Copy RAM to FLASH FAIL !!!\r\n");
	}
}


/********************************************************
 * 	Change Spesific Config Value   						*
 * 	VARCHANGE											*
 ********************************************************/
static void changeCfgCMD(int argc, char **argv)
{
	if (argc != 3){
		puts("Change Config invalid arguments!\r\n");
		return;
	}else{

		//uint8_t len = strlen((uchar*)&argv[1][0]);
		uint32_t offset = (uint32_t)tinysh_dec((char*)&argv[1][0]);
		//printf("Offset value (%d): %ld \r\n", len, offset);

		//len = strlen((uchar*)&argv[2][0]);
		uint32_t value = (uint32_t)tinysh_dec((char*)&argv[2][0]);
		//printf("Value (%d): %ld \r\n", len, value);

		uint32_t RAMaddr = RAM_USER_START_ADDR + offset;
		volatile int *point = (int *)RAMaddr;
		*point = value;

		//printf("Config Value Updated !!!\r\n");

		uint32_t dataReadBack  = *(__IO uint32_t *)RAMaddr;
		printf("%ld,%ld,%ld,%ld\r\n",
			(dataReadBack & 0x000000ff), (dataReadBack & 0x0000ff00)>>8 , (dataReadBack & 0x00ff0000)>>16, (dataReadBack & 0xff000000) >> 24);
	}
}


/********************************************************
 * 	Read Spesific Config Value   						*
 * 	VARREAD												*
 ********************************************************/
static void readCfgCMD(int argc, char **argv)
{
	if (argc != 2){
		puts("Read Config invalid arguments!\r\n");
		return;
	}else{

		uint32_t offset = (uint32_t)tinysh_dec((char*)&argv[1][0]);
		offset += RAM_USER_START_ADDR;
		uint32_t dataReadBack  = *(__IO uint32_t *)offset;
//		printf("Read 4 bytes of addr (%ld): %ld \r\n", 0x2001F000 + offset, dataReadBack);
//		printf("Data[0]: %ld, [1]: %ld, [2]: %ld, [3]: %ld  \r\n",
//				(dataReadBack & 0x000000ff), (dataReadBack & 0x0000ff00)>>8 , (dataReadBack & 0x00ff0000)>>16, (dataReadBack & 0xff000000) >> 24);


		printf("%ld,%ld,%ld,%ld\r\n",
			  (dataReadBack & 0x000000ff), (dataReadBack & 0x0000ff00)>>8 , (dataReadBack & 0x00ff0000)>>16, (dataReadBack & 0xff000000) >> 24);
	}
}


/********************************************************
 * 	AFE RAW Data Input			   						*
 * 	AFE													*
 ********************************************************/
static void afeCfgCMD(int argc, char **argv)
{
	if (argc != 3){
		puts("AFE invalid arguments!\r\n");
		return;
	}else{
		uint32_t txNum = (uint32_t)tinysh_dec((char*)&argv[1][0]);
		if(txNum >= 40){
			puts("TX cannot bigger than 39\r\n");
			return;
		}

		//printf("TxNum: %ld\r\n",txNum);
		printf("RX: %s\r\n",&argv[2][0]);
		tinysh_afe((char*)&argv[2][0], txNum);

	}
}


/********************************************************
 * 	RAW Data Show				   						*
 * 	RAW													*
 ********************************************************/
static void rawCfgCMD(int argc, char **argv)
{
	if (argc != 1){
		puts("RAW invalid arguments!\r\n");
		return;
	}else{
		for (uint8_t tx = 0; tx < TX_LEN; tx++){
			printf("\r\nTX[%.2d]:\t",tx);
			for (uint8_t rx = 0; rx < RX_LEN; rx++){
				printf("%d\t",afe_raw_data[tx][rx]);
			}
		}
		printf("\r\n");
	}
}




static tinysh_cmd_t fwritecmd={0,"FWRITE","		[NONE]","[NONE]",fWriteCMD,0,0,0};
static tinysh_cmd_t freadcmd={0,"FREAD","		[NONE]","[NONE]",fReadCMD,0,0,0};
static tinysh_cmd_t ferasecmd={0,"FERASE","		[NONE]","[NONE]",fEraseCMD,0,0,0};
static tinysh_cmd_t ram2readcmd={0,"RAMREAD","		[NONE]","[NONE]",ram2ReadCMD,0,0,0};
static tinysh_cmd_t ram2writecmd={0,"RAMWRITE","		[NONE]","[NONE]",ram2WriteCMD,0,0,0};
static tinysh_cmd_t configWritecmd={0,"CFGWRITE","		[NONE]","[NONE]",configWriteCMD,0,0,0};
static tinysh_cmd_t configReadcmd={0,"CFGREAD","		[NONE]","[NONE]",configReadCMD,0,0,0};
static tinysh_cmd_t printFlashcmd={0,"PRINTFLASH","		[NONE]","[NONE]",flashAreaReadCMD,0,0,0};
static tinysh_cmd_t printRAMcmd={0,"PRINTRAM","		[NONE]","[NONE]",printRAMCMD,0,0,0};
static tinysh_cmd_t copyToRAMcmd={0,"COPYTORAM","		[NONE]","[NONE]",copyToRamCMD,0,0,0};
static tinysh_cmd_t copyToFlashcmd={0,"COPYTOFLASH","		[NONE]","[NONE]",copyToFlashCMD,0,0,0};
static tinysh_cmd_t changeCfgcmd={0,"VARCHANGE","		[OFFEST	VALUE]","[2 Arguments]",changeCfgCMD,0,0,0};
static tinysh_cmd_t readCfgcmd={0,"VARREAD","		[OFFSET]","[1 Arguments]",readCfgCMD,0,0,0};
static tinysh_cmd_t afeCfgcmd={0,"AFE","		[1TX 20RX]","[2 Arguments]",afeCfgCMD,0,0,0};
static tinysh_cmd_t rawCfgcmd={0,"RAW","		[NONE]","[NONE]",rawCfgCMD,0,0,0};

void tinysh_init(void)
{
	puts("\e[1;1H\e[2J");
	puts("\r\n");
	puts("=========================| CONSOLE CMD |=============================\r\n");
	puts("type '?' or HELP for Manual\r\n");

	tinysh_set_prompt("\r\n\nVT> ");
	tinysh_add_command(&fwritecmd);
	tinysh_add_command(&freadcmd);
	tinysh_add_command(&ferasecmd);
	tinysh_add_command(&ram2readcmd);
	tinysh_add_command(&ram2writecmd);
	tinysh_add_command(&configWritecmd);
	tinysh_add_command(&configReadcmd);
	tinysh_add_command(&printFlashcmd);
	tinysh_add_command(&printRAMcmd);
	tinysh_add_command(&copyToRAMcmd);
	tinysh_add_command(&copyToFlashcmd);
	tinysh_add_command(&changeCfgcmd);
	tinysh_add_command(&readCfgcmd);
	tinysh_add_command(&afeCfgcmd);
	tinysh_add_command(&rawCfgcmd);
}



/* few useful utilities that may be missing */
void tinysh_char_out(unsigned char c)
{
  HAL_UART_Transmit(&huart3, (uint8_t *)&c, 1, 0xFFFF);	//Use UART1
}

static int strlen(uchar *s)	{
	int i;
	for(i=0;*s;s++,i++);
	return i;
}

static void puts(char *s)
{
	while(*s)
	    putchar(*s++);
}


/* callback for help function */
static void help_fnt(int argc, char **argv)
{
  puts("\e[1;1H\e[2J");
  puts("\r\n");
  puts("=========================| HELP PAGE |=================================\r\n");
  puts("[COMMANDS]?				CMD Help.\r\n");
  puts("CTRL-P or N				Previous/Next CMD.\r\n");
  puts("TAB					Auto complete.\r\n\n");
  puts("COMMANDS:       ARGUMENTS:	        NOTE:\r\n");
  puts("========================================================================\r\n");
  puts("PRINTRAM	NONE			Display 60 bytes value of RAM @x2001F000\r\n");
  puts("PRINTFLASH	NONE			Display 60 bytes value of Flash Data Area\r\n");
  puts("COPYTORAM	NONE			Copy Value Flash Data Area to RAM @x2001F000\r\n");
  puts("COPYTOFLASH	NONE			Copy Value RAM @x2001F000 to Flash Data Area\r\n");
  puts("CFGREAD		NONE			Display Config Value\r\n");
  puts("VARCHANGE	OFFSET & VALUE		Change Config Value\r\n");
  puts("VARREAD		OFFSET			Read Config Value\r\n");
  puts("AFE		TX RX			input TX and RX Data(RX separated by comma)\r\n");
  puts("\r\n");

}

/*
 */

enum { NULLMATCH,FULLMATCH,PARTMATCH,UNMATCH,MATCH,AMBIG };

/* verify if the non-spaced part of s2 is included at the begining
 * of s1.
 * return FULLMATCH if s2 equal to s1, PARTMATCH if s1 starts with s2
 * but there are remaining chars in s1, UNMATCH if s1 does not start with
 * s2
 */
int strstart(uchar *s1, uchar *s2)
{
	while(*s1 && *s1==*s2) { s1++; s2++; }

	if(*s2==' ' || *s2==0)
	{
	  if(*s1==0)
		return FULLMATCH; /* full match */
	  else
		return PARTMATCH; /* partial match */
	}
	else
	return UNMATCH;     /* no match */
}

/*
 * check commands at given level with input string.
 * _cmd: point to first command at this level, return matched cmd
 * _str: point to current unprocessed input, return next unprocessed
 */
static int parse_command(tinysh_cmd_t **_cmd, uchar **_str)
{
  uchar *str=*_str;
  tinysh_cmd_t *cmd;
  tinysh_cmd_t *matched_cmd=0;

  /* first eliminate first blanks */
  while(*str==' ') str++;
  if(!*str)
    {
      *_str=str;
      return NULLMATCH; /* end of input */
    }

  /* first pass: count matches */
  for(cmd=*_cmd;cmd;cmd=cmd->next)
    {
      int ret=strstart((uchar*)cmd->name,str);

      if(ret==FULLMATCH)
        {
          /* found full match */
          while(*str && *str!=' ') str++;
          while(*str==' ') str++;
          *_str=str;
          *_cmd=cmd;
          return MATCH;
        }
      else if (ret==PARTMATCH)
        {
          if(matched_cmd)
            {
              *_cmd=matched_cmd;
              return AMBIG;
            }
          else
            {
              matched_cmd=cmd;
            }
        }
      else /* UNMATCH */
        {
        }
    }
  if(matched_cmd)
    {
      while(*str && *str!=' ') str++;
      while(*str==' ') str++;
      *_cmd=matched_cmd;
      *_str=str;
      return MATCH;
    }
  else
    return UNMATCH;
}

/* create a context from current input line
 */
static void do_context(tinysh_cmd_t *cmd, uchar *str)
{
  while(*str)
    context_buffer[cur_context++]=*str++;
  context_buffer[cur_context]=0;
  cur_cmd_ctx=cmd;
}

/* execute the given command by calling callback with appropriate
 * arguments
 */
static void exec_command(tinysh_cmd_t *cmd, uchar *str)
{
  char *argv[MAX_ARGS];
  int argc=0;
  int i;

  /* copy command line to preserve it for history */
  for(i=0;i<BUFFER_SIZE;i++)
    trash_buffer[i]=str[i];
  str=trash_buffer;

  /* cut into arguments */
  argv[argc++]=cmd->name;
  while(*str && argc<MAX_ARGS)
    {
      while(*str==' ') str++;
      if(*str==0)
        break;
      argv[argc++]=(char*)str;
      while(*str!=' ' && *str) str++;
      if(!*str) break;
      *str++=0;
    }
  /* call command function if present */
  if(cmd->function)
    {
      tinysh_arg=cmd->arg;
      cmd->function(argc,&argv[0]);
    }
}

/* try to execute the current command line
 */
static int exec_command_line(tinysh_cmd_t *cmd, uchar *_str)
{
  uchar *str=_str;

  while(1)
    {
      int ret;
      ret=parse_command(&cmd,&str);
      if(ret==MATCH) /* found unique match */
        {
          if(cmd)
            {
              if(!cmd->child) /* no sub-command, execute */
                {
                  puts("\r\n");
                  exec_command(cmd,str);
                  return 0;
                }
              else
                {
                  if(*str==0) /* no more input, this is a context */
                    {
                      do_context(cmd,_str);
                      return 0;
                    }
                  else /* process next command word */
                    {
                      cmd=cmd->child;
                    }
                }
            }
          else /* cmd == 0 */
            {
              puts("\r\n");
              return 0;
            }
        }
      else if(ret==AMBIG)
        {
          puts("AMBIGUITY: ");
          puts((char*)str);
          puts("\r\n");
          return 0;
        }
      else if(ret==UNMATCH) /* UNMATCH */
        {
          puts("\r\n  NO MATCH: ");
          puts((char*)str);
          puts("\r\n");
          return 0;
        }
      else /* NULLMATCH */
        return 0;
    }
}

/* display help for list of commands
*/
static void display_child_help(tinysh_cmd_t *cmd)
{
  tinysh_cmd_t *cm;
  int len=0;

  putchar('\n');
  for(cm=cmd;cm;cm=cm->next)
    if(len<strlen((uchar*)cm->name))
      len=strlen((uchar*)cm->name);
  for(cm=cmd;cm;cm=cm->next)
    if(cm->help)
      {
        int i;
        puts(cm->name);
        for(i=strlen((uchar*)cm->name);i<len+2;i++)
          putchar(' ');
        puts(cm->help);
        puts("\r\n");
      }
}

/* try to display help for current comand line
 */
static int help_command_line(tinysh_cmd_t *cmd, uchar *_str)
{
	uchar *str=_str;

	while(1)
	{
	  int ret;
	  ret=parse_command(&cmd,&str);
	  if(ret==MATCH && *str==0) 				/* found unique match or empty line */
	  {
		  if(cmd->child) 						/* display sub-commands help */
		  {
			  display_child_help(cmd->child);
			  return 0;
		  }
		  else  								/* no sub-command, show single help */
		  {
			  if(*(str-1)!=' ')
				  putchar(' ');
			  if(cmd->usage)
				  puts(cmd->usage);
			  puts(": ");
			  if(cmd->help)
				  puts(cmd->help);
			  else
				  puts("no help available");
			  	  putchar('\n');
		  }
		  return 0;
	  }
	  else if(ret==MATCH && *str)
	  {
		  /* continue processing the line */
	  cmd=cmd->child;
	}
	  else if(ret==AMBIG)
		{
		  puts("\r\nambiguity: ");
		  puts((char*)str);
		  puts("\r\n");
		  return 0;
		}
	  else if(ret==UNMATCH)
		{
		  puts("\r\nno match: ");
		  puts((char*)str);
		  puts("\r\n");
		  return 0;
		}
	  else /* NULLMATCH */
		{
		  if(cur_cmd_ctx)
			display_child_help(cur_cmd_ctx->child);
		  else
			display_child_help(root_cmd);
		  return 0;
		}
	}
}

/* try to complete current command line
 */
static int complete_command_line(tinysh_cmd_t *cmd, uchar *_str)
{
  uchar *str=_str;

  while(1)
  {
      int ret;
      int common_len=BUFFER_SIZE;
      int _str_len;
      int i;
      uchar *__str=str;

      ret=parse_command(&cmd,&str);
      for(_str_len=0;__str[_str_len]&&__str[_str_len]!=' ';_str_len++);
      if(ret==MATCH && *str){
          cmd=cmd->child;

  	  }else if(ret==AMBIG || ret==MATCH || ret==NULLMATCH)
        {
          tinysh_cmd_t *cm;
          tinysh_cmd_t *matched_cmd=0;
          int nb_match=0;

          for(cm=cmd;cm;cm=cm->next)
            {
              int r=strstart((uchar*)cm->name,__str);
              if(r==FULLMATCH)
                {
                  for(i=_str_len;cmd->name[i];i++)
                    tinysh_char_in(cmd->name[i]);
                  if(*(str-1)!=' ')
                    tinysh_char_in(' ');
                  if(!cmd->child)
                    {
                      if(cmd->usage)
                        {
                          puts(cmd->usage);
                          puts("\r\n");
                          return 1;
                        }
                      else
                        return 0;
                    }
                  else
                    {
                      cmd=cmd->child;
                      break;
                    }
                }
              else if(r==PARTMATCH)
                {
                  nb_match++;
                  if(!matched_cmd)
                    {
                      matched_cmd=cm;
                      common_len=strlen((uchar*)cm->name);
                    }
                  else
                    {
                      for(i=_str_len;cm->name[i] && i<common_len &&
                            cm->name[i]==matched_cmd->name[i];i++);
                      if(i<common_len)
                        common_len=i;
                    }
                }
            }
          if(cm)
            continue;
          if(matched_cmd)
            {
              if(_str_len==common_len)
                {
                  puts("\r\n");
                  for(cm=cmd;cm;cm=cm->next)
                    {
                      int r=strstart((uchar*)cm->name,__str);
                      if(r==FULLMATCH || r==PARTMATCH)
                        {
						  puts("  ");
						  puts(cm->name);
                          puts("\r\n");
                        }
                    }
                  return 1;
                }
              else
                {
                  for(i=_str_len;i<common_len;i++)
                    tinysh_char_in(matched_cmd->name[i]);
                  if(nb_match==1)
                    tinysh_char_in(' ');
                }
            }
          return 0;
        }
      else /* UNMATCH */
        {
          return 0;
        }
    }
}

/* start a new line
 */
static void start_of_line()
{
  /* display start of new line */
  puts(prompt);
  if(cur_context)
  {
     puts((char*)context_buffer);
     puts("> ");
  }
  cur_index=0;
}

/* character input
 */
static void _tinysh_char_in(uchar c)
{
  uchar *line=input_buffers[cur_buf_index];

  if(c=='\n' || c=='\r') /* validate command */
  {
      tinysh_cmd_t *cmd;

	  /* first, echo the newline */
      if(echo)
        putchar(c);

      while(*line && *line==' ') line++;
      if(*line) /* not empty line */
        {
          cmd=cur_cmd_ctx?cur_cmd_ctx->child:root_cmd;
          exec_command_line(cmd,line);
          cur_buf_index=(cur_buf_index+1)%HISTORY_DEPTH;
          cur_index=0;
          input_buffers[cur_buf_index][0]=0;
        }
      start_of_line();
  }
  else if(c==TOPCHAR) 			// return to top level //
  {
	//if(echo)
	//  putchar(c);
	//cur_context=0;
	//cur_cmd_ctx=0;

	  putchar('\r');
	  puts("VT> ");

	  while(cur_index > 0){
		  puts(" ");
		  cur_index--;
	  }
	  putchar('\r');
	  puts("VT> ");
	  cur_index=0;
	  line[cur_index]=0;
  }
  else if(c==8 || c==127) 		/* backspace */
  {
    if(cur_index>0)
    {
       puts("\b");
       puts("  ");
       puts("\b\b");
       cur_index--;
       line[cur_index]=0;
    }
  }
  else if(c==16) /* CTRL-P: back in history */
  {
      int prevline=(cur_buf_index+HISTORY_DEPTH-1)%HISTORY_DEPTH;

      if(input_buffers[prevline][0])
        {
          line=input_buffers[prevline];
          /* fill the rest of the line with spaces */
          while(cur_index-->strlen(line))
            puts("\b \b");
          putchar('\r');
          puts("VT> ");
          puts((char*)line);
          cur_index=strlen(line);
          cur_buf_index=prevline;
        }
  }

  else if(c==14) /* CTRL-N: next in history */
  {

	  int nextline=(cur_buf_index+1)%HISTORY_DEPTH;

	  if(input_buffers[nextline][0])
	  {
		  line=input_buffers[nextline];
		  /* fill the rest of the line with spaces */
		  while(cur_index-->strlen(line))
			puts("\b \b");
		  putchar('\r');
		  //start_of_line();
		  puts("VT> ");
		  puts((char*)line);
		  cur_index=strlen(line);
		  cur_buf_index=nextline;
	  }
  }

  else if(c=='?') 			// display help //
    {
	  puts("\r\n\n");
	  tinysh_cmd_t *cmd;
      cmd=cur_cmd_ctx?cur_cmd_ctx->child:root_cmd;
      help_command_line(cmd,line);
      start_of_line();
      puts((char*)line);
      cur_index=strlen(line);
    }
  else if(c==9) 			/* TAB: autocompletion */
  {
	  tinysh_cmd_t *cmd;
      cmd=cur_cmd_ctx?cur_cmd_ctx->child:root_cmd;
      if(complete_command_line(cmd,line))
      {
         start_of_line();
         puts((char*)line);
      }
      cur_index=strlen(line);
  }
  else /* any input character */
  {
    if(cur_index<BUFFER_SIZE)
    {
       if(echo)
         putchar(c);
       line[cur_index++]=c;
       line[cur_index]=0;
    }
  }
}

/* new character input */
void tinysh_char_in(uchar c)
{
  /*
   * filter characters here
   */
  _tinysh_char_in(c);
}

/* add a new command */
void tinysh_add_command(tinysh_cmd_t *cmd)
{
  tinysh_cmd_t *cm;

  if(cmd->parent)
    {
      cm=cmd->parent->child;
      if(!cm)
        {
          cmd->parent->child=cmd;
        }
      else
        {
          while(cm->next) cm=cm->next;
          cm->next=cmd;
        }
    }
  else if(!root_cmd)
    {
      root_cmd=cmd;
    }
  else
    {
      cm=root_cmd;
      while(cm->next) cm=cm->next;
      cm->next=cmd;
    }
}

/* modify shell prompt */
void tinysh_set_prompt(char *str)
{
  int i;
  for(i=0;str[i] && i<PROMPT_SIZE;i++)
    prompt[i]=str[i];

  prompt[i]=0;
  /* force prompt display by generating empty command */
  tinysh_char_in('\r');
}

/* return current command argument
 */
void *tinysh_get_arg()
{
  return tinysh_arg;
}


#endif 	//SHELL_CMD

/*********************************************************************
 * @name	: tinysh_longhex
 * @brief	: string to decimal/hexadecimal conversion
 *********************************************************************/
unsigned long tinysh_atoxi(char *s)
{
  int ishex=0;
  unsigned long res=0;

  if(*s==0) return 0;

  if(*s=='0' && *(s+1)=='x')
  {
      ishex=1;
      s+=2;
  }


  while(*s)
  {
	  if(ishex)
		  res*=16;
	  else
		  res*=10;

      if(*s>='0' && *s<='9')
    	  res+=*s-'0';
      else if(ishex && *s>='a' && *s<='f')
    	  res+=*s+10-'a';
      else if(ishex && *s>='A' && *s<='F')
    	  res+=*s+10-'A';
      else
    	  break;

      s++;
  }

  return res;
}


/*********************************************************************
 * @name	: tinysh_afe
 * @brief	:
 *********************************************************************/
void tinysh_afe(char *s, uint8_t txNum)
{
  int32_t res=0;
  uint8_t sign	= 0;


  for(uint8_t rx = 0; rx < RX_LEN; rx++){
	while(*s){
		//printf("- %c\r\n", *s);
		if(*s == '-'){
			sign  = 1;
			res   = 0;
		}else if(*s>='0' && *s<='9'){
			res*=10;
			res+=*s-'0';
		}else if(*s ==','){
			break;
		}else{
			break;
		}
		s++;
	}
	if(sign){
		res *= -1;
	}

	printf("[%d] res: %ld\r\n", rx, res);
	afe_raw_data[txNum][rx] = res;

	res	 = 0;
	sign = 0;
	s++;
  }

}


/*********************************************************************
 * @name	: tinysh_dec
 * @brief	: string to decimal conversion (1 bytes only)
 *********************************************************************/
unsigned long tinysh_dec(char *s)
{
  unsigned long res=0;
  uint8_t index = 0;

  while(*s)
  {
	  //printf("%c\r\n",*s);

	  res*=10;

	  if((*s == '0')&&(index == 0))
		  res = 0;
	  else if(*s>='0' && *s<='9')
		  res+=*s-'0';
	  else
		  break;

	  s++;
	  index++;

	  if(index > 10){
		 break;
	  }
  }

  return res;
}


/*********************************************************************
 * @name	: tinysh_longhex
 * @brief	: string to hexadecimal conversion (2 bytes only)
 *********************************************************************/
unsigned long tinysh_hex(char *s)
{
  //puts(s);
  unsigned long res=0;
  uint8_t index = 0;
  int ishex=1;

  while(*s)
  {
	  if(index >= 2){
		  break;
	  }

	  res*=16;

	  if((*s == '0')&&(index == 0))
		  res = 0;
	  else if(*s>='0' && *s<='9')
		  res+=*s-'0';
	  else if(ishex && *s>='a' && *s<='f')
		  res+=*s+10-'a';
	  else if(ishex && *s>='A' && *s<='F')
		  res+=*s+10-'A';
	  else
		  break;

      s++;
      index++;
  }

  return res;
}


/************************************************************
 * @name	: tinysh_longhex
 * @brief	: string to hexadecimal conversion (long)
 ************************************************************/
uint32_t tinysh_longhex(char *s)
{
	int ishex=1;
	unsigned long res=0;


	if(*s=='0')
	{
	  s+=1;
	}


	while(*s)
	{
	  res*=16;

	  if(*s>='0' && *s<='9')
		  res+=*s-'0';
	  else if(ishex && *s>='a' && *s<='f')
		  res+=*s+10-'a';
	  else if(ishex && *s>='A' && *s<='F')
		  res+=*s+10-'A';
	  else
		  break;

	  s++;
	}

	return res;
}



