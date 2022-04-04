/*
 * flashReadWrite.c
 *
 *  Created on: Apr 4, 2022
 *      Author: madop
 */


#include "flashReadWrite.h"
#include "fw_cfg.h"
#include "main.h"

/* Private define ------------------------------------------------------------*/


/* Private variables ---------------------------------------------------------*/
uint32_t FirstSector = 0, NbOfSectors = 0;
uint32_t Address = 0, SECTORError = 0;
__IO uint32_t data32 = 0 , MemoryProgramStatus = 0;

/*Variable used for Erase procedure*/
static FLASH_EraseInitTypeDef EraseInitStruct;


/**************************************************
 *  @name 	GetSectorSize
  * @brief  Gets sector Size
  * @param  None
  * @retval The size of a given sector
  *************************************************/
static uint32_t GetSectorSize(uint32_t Sector)
{
  uint32_t sectorsize = 0x00;

  if((Sector == FLASH_SECTOR_0) || (Sector == FLASH_SECTOR_1) || (Sector == FLASH_SECTOR_2) || (Sector == FLASH_SECTOR_3))
  {
    sectorsize = 16 * 1024;
  }
  else if(Sector == FLASH_SECTOR_4)
  {
    sectorsize = 64 * 1024;
  }
  else
  {
    sectorsize = 128 * 1024;
  }
  return sectorsize;
}


/*************************************************
  * @brief  Gets the sector of a given address
  * @param  None
  * @retval The sector of a given address
  ************************************************/
static uint32_t GetSector(uint32_t Address)
{
  uint32_t sector = 0;

  if((Address < ADDR_FLASH_SECTOR_1) && (Address >= ADDR_FLASH_SECTOR_0))
  {
    sector = FLASH_SECTOR_0;
  }
  else if((Address < ADDR_FLASH_SECTOR_2) && (Address >= ADDR_FLASH_SECTOR_1))
  {
    sector = FLASH_SECTOR_1;
  }
  else if((Address < ADDR_FLASH_SECTOR_3) && (Address >= ADDR_FLASH_SECTOR_2))
  {
    sector = FLASH_SECTOR_2;
  }
  else if((Address < ADDR_FLASH_SECTOR_4) && (Address >= ADDR_FLASH_SECTOR_3))
  {
    sector = FLASH_SECTOR_3;
  }
  else if((Address < ADDR_FLASH_SECTOR_5) && (Address >= ADDR_FLASH_SECTOR_4))
  {
    sector = FLASH_SECTOR_4;
  }
  else if((Address < ADDR_FLASH_SECTOR_6) && (Address >= ADDR_FLASH_SECTOR_5))
  {
    sector = FLASH_SECTOR_5;
  }
  else if((Address < ADDR_FLASH_SECTOR_7) && (Address >= ADDR_FLASH_SECTOR_6))
  {
    sector = FLASH_SECTOR_6;
  }
  else /* (Address < FLASH_END_ADDR) && (Address >= ADDR_FLASH_SECTOR_7) */
  {
    sector = FLASH_SECTOR_7;
  }

  return sector;
}



/*************************************************************************
 * @name   copyFlashToRAM
 * @brief
 *
 *************************************************************************/
HAL_StatusTypeDef copyFlashToRAM (uint32_t FLASHaddr, uint32_t RAMaddr, uint16_t len)
{
	HAL_StatusTypeDef retval = HAL_OK;
	uint32_t dataReadBack;

	for(uint16_t x = 0; x < len; x += 4){
		dataReadBack  = *(__IO uint32_t *)FLASHaddr;

		volatile int *point = (int *)RAMaddr;
		*point = dataReadBack;

		RAMaddr   += 4;
		FLASHaddr += 4;
	}

	return retval;
}



/*************************************************************************
 * @name   copyRamToFlash
 * @brief
 *
 *************************************************************************/
HAL_StatusTypeDef copyRamToFlash (uint32_t RAMaddr, uint32_t FLASHaddr, uint16_t len)
{
	HAL_StatusTypeDef retval = HAL_OK;
	uint32_t dataReadBack;
	uint32_t dataReadFlash;

	uint8_t retry = 0;

	/// Unlock the Flash to enable the flash control register access
	while(HAL_FLASH_Unlock() != HAL_OK){
		HAL_Delay(20);
		if(retry > 5){
			printf("Flash unlock fail !!!\r\n");
			break;
		}
		retry++;
	}

	for(uint16_t x = 0; x < len; x += 4){
		dataReadBack  = *(__IO uint32_t *)RAMaddr;

		if (HAL_FLASH_Program(FLASH_TYPEPROGRAM_WORD, FLASHaddr, dataReadBack) == HAL_OK){
			dataReadFlash = *(__IO uint32_t *)FLASHaddr;
			if (dataReadBack == dataReadFlash){
				RAMaddr   += 4;
				FLASHaddr += 4;
				printf("x: %d\r\n",x);
			}else{
				printf("Data not equal\r\n");
				retval = HAL_ERROR;
				return retval;
			}
		}else{
			printf("Write Fail\r\n");
			retval = HAL_ERROR;
			return retval;
		}
	}

	return retval;
}



/*************************************************************************
 * @name   printRAMvalue
 * @brief
 *
 *************************************************************************/
HAL_StatusTypeDef printRAMvalue (uint32_t addr, uint16_t len)
{
	HAL_StatusTypeDef retval = HAL_OK;
	uint32_t dataReadBack;

	//printf("Display RAM value @x%lX for %d bytes\r\n", addr, len);

	for(uint16_t x = 0; x < len; x += 4){
		dataReadBack  = *(__IO uint32_t *)addr;
		addr += 4;

		//little endian
		//printf("Data[%d], 0: %ld, 1: %ld, 2: %ld, 3: %ld  \r\n",
		//		x, (dataReadBack & 0x000000ff), (dataReadBack & 0x0000ff00)>>8 , (dataReadBack & 0x00ff0000)>>16, (dataReadBack & 0xff000000) >> 24);

		printf("%ld,%ld,%ld,%ld\r\n",
			  (dataReadBack & 0x000000ff), (dataReadBack & 0x0000ff00)>>8 , (dataReadBack & 0x00ff0000)>>16, (dataReadBack & 0xff000000) >> 24);
	}

	return retval;
}


/*************************************************************************
 * @name   flashAreaRead
 * @brief  Read Flash Area to Flash area word by word
 *
 *************************************************************************/
HAL_StatusTypeDef flashAreaRead(uint32_t addr, uint16_t len)
{
	HAL_StatusTypeDef retval = HAL_ERROR;
	uint32_t dataReadBack;

	printf("Display Flash value @x%lX for %d bytes\r\n", addr, len);

	for(uint16_t x = 0; x < len; x += 4){
		dataReadBack  = *(__IO uint32_t *)addr;
		addr += 4;

		//little endian
		printf("Data[%d], 0: %ld, 1: %ld, 2: %ld, 3: %ld  \r\n",
				x, (dataReadBack & 0x000000ff), (dataReadBack & 0x0000ff00)>>8 , (dataReadBack & 0x00ff0000)>>16, (dataReadBack & 0xff000000) >> 24);
	}

	return retval;
}


/***************************************
 * @name   flashRead
 * @brief  read flash.
 ***************************************/
uint32_t flashRead(uint32_t addr)
{
	return (*(__IO uint32_t *)addr);
}


/*************************************************************************
 * @name   flashWrite
 * @brief  Write flash Flash area word by word
 * 		   Area defined by FLASH_USER_START_ADDR and FLASH_USER_END_ADDR
 *************************************************************************/
HAL_StatusTypeDef flashWrite(uint32_t addr, uint32_t data)
{
	HAL_StatusTypeDef retval = HAL_ERROR;
	uint32_t data32;

	Address = FLASH_USER_START_ADDR;

	if (HAL_FLASH_Program(FLASH_TYPEPROGRAM_WORD, Address, data) == HAL_OK)
	{
		data32 = *(__IO uint32_t *)Address;

		if(data32 == data){
			/****************************************************************************
			 * Lock the Flash to disable the flash control register access (recommended
			 * to protect the FLASH memory against possible unwanted operation)
			 ****************************************************************************/
			HAL_FLASH_Lock();
			retval = HAL_OK;
		}
	}


#if 0
	while (Address < FLASH_USER_END_ADDR)
	{
		if (HAL_FLASH_Program(FLASH_TYPEPROGRAM_WORD, Address, DATA_32) == HAL_OK)
		{
			Address = Address + 4;
		}
		else
		{
			/* Error occurred while writing data in Flash memory.
		 	   User can add here some code to deal with this error */
			while (1)
			{
				Error_Handler(__FILE__, __LINE__);
			}
		}
	}


	/****************************************************************************
	 * Lock the Flash to disable the flash control register access (recommended
	 * to protect the FLASH memory against possible unwanted operation)
	 ****************************************************************************/
	  HAL_FLASH_Lock();

	/***********************************************************************
	* Check if the programmed data is OK
	* MemoryProgramStatus = 0: data programmed correctly
	* MemoryProgramStatus != 0: number of words not programmed correctly
	***********************************************************************/
	Address = FLASH_USER_START_ADDR;
	MemoryProgramStatus = 0x0;

	while (Address < FLASH_USER_END_ADDR)
	{
	  data32 = *(__IO uint32_t *)Address;

	  if (data32 != DATA_32)
	  {
		MemoryProgramStatus++;
	  }
	  Address = Address + 4;
	}



	/*Check if there is an issue to program data*/
	if (MemoryProgramStatus == 0)
	{
	  /* No error detected. Switch on LED1*/
	  //BSP_LED_On(LED1);
	  retval = HAL_OK;
	}
	else
	{
	  /* Error detected. Switch on LED3*/
	  //BSP_LED_On(LED3);
	  while(1);
	}
#endif



	return retval;
}


/***************************************
 * @name   flashErase
 * @brief  Erase flash.
 ***************************************/
HAL_StatusTypeDef flashErase(void)
{
	static uint8_t retry;
	HAL_StatusTypeDef retval = HAL_ERROR;

	/// Unlock the Flash to enable the flash control register access
	while(HAL_FLASH_Unlock() != HAL_OK){
		HAL_Delay(20);
		if(retry > 5){
			break;
		}
		retry++;
	}

	if(retry > 5)
		return retval;

	/*********************************************************************************************
	 * Erase the user Flash area
	 * area defined by FLASH_USER_START_ADDR and FLASH_USER_END_ADDR
	 *********************************************************************************************/
	FirstSector = GetSector(FLASH_USER_START_ADDR);							// Get the 1st sector to erase
	NbOfSectors = GetSector(FLASH_USER_END_ADDR) - FirstSector + 1;			// Get the number of sector to erase from 1st sector

	/* Fill EraseInit structure*/
	EraseInitStruct.TypeErase     = FLASH_TYPEERASE_SECTORS;
	EraseInitStruct.VoltageRange  = FLASH_VOLTAGE_RANGE_3;
	EraseInitStruct.Sector        = FirstSector;
	EraseInitStruct.NbSectors     = NbOfSectors;

	if (HAL_FLASHEx_Erase(&EraseInitStruct, &SECTORError) != HAL_OK)
	{
		/*	Error occurred while sector erase.
	  	    SECTORError will contain the faulty sector and then to know the code error on this sector, user can call function 'HAL_FLASH_GetError()'
		 */

		/* Infinite loop */
		Error_Handler(__FILE__, __LINE__);
	}


	/********************************************************************************************************
	 * Note: If an erase operation in Flash memory also concerns data in the data or instruction cache,
	 *		 you have to make sure that these data are rewritten before they are accessed during code
	 *		 execution. If this cannot be done safely, it is recommended to flush the caches by setting the
	 *		 DCRST and ICRST bits in the FLASH_CR register.
	 ********************************************************************************************************/
	  __HAL_FLASH_DATA_CACHE_DISABLE();
	  __HAL_FLASH_INSTRUCTION_CACHE_DISABLE();

	  __HAL_FLASH_DATA_CACHE_RESET();
	  __HAL_FLASH_INSTRUCTION_CACHE_RESET();

	  __HAL_FLASH_INSTRUCTION_CACHE_ENABLE();
	  __HAL_FLASH_DATA_CACHE_ENABLE();


	return retval;
}
