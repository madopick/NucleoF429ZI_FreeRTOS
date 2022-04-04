/*
 * uart_drv.c
 *
 *  Created on: Apr 4, 2022
 *      Author: madop
 */


#include "uart_drv.h"
#include "tinysh.h"


///UART Function
static void vFunc_uart_init(uint32_t baud);
static uint8_t u8Func__uart_receive(UARTPeriphCallback callback, uint32_t timeout);
static uint8_t u8Func__uart_send(uint8_t *data, uint16_t length, uint32_t timeout);


///UART Peripheral Structure
const struct UARTPeriph_s UARTPeriph =
{
        .init 	 = vFunc_uart_init,
        .receive = u8Func__uart_receive,
        .send 	 = u8Func__uart_send
};


///Global Variable
UART_HandleTypeDef huart3;
uint8_t uart3Rcv_buff[UART3_RX_BUFFER_SIZE];                		// UART3 RCV
uint8_t uart3_buff_len;												// UART3 RCv Length




///DEBUG
#ifdef SWO_DEBUG
	//make sure SWV core clock MHz same as CPU clock.
	//SWV viewer setting debug port 1 are checked, and started
	int _write(int file, char *ptr, int len)
	{
		int i=0;
		for(i=0; i<len; i++){
			ITM_SendChar(*ptr++);
		}
		return len;
	}

#else
	#ifdef __GNUC__
		/* With GCC, small printf (option LD Linker->Libraries->Small printf set to 'Yes') calls __io_putchar() */
		#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
	#else
		#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
	#endif /* __GNUC__ */

	/******************************************************************
	  * @name   PUTCHAR_PROTOTYPE
	  * @brief  Retargets the C library printf function to the USART.
	  *****************************************************************/
	PUTCHAR_PROTOTYPE
	{
		HAL_UART_Transmit(&huart3, (uint8_t *)&ch, 1, 0xFFFF);				//Use USART3
		return ch;
	}

#endif


extern xQueueHandle delay_queue;
extern xQueueHandle msg_queue;


/********************************************
  * @name   vFunc_uart_init
  * @brief 	UART Initialization Function
  *******************************************/
static void vFunc_uart_init(uint32_t baud)
{
	huart3.Instance 				= USART3;
	huart3.Init.BaudRate 			= baud;
	huart3.Init.WordLength 			= UART_WORDLENGTH_8B;
	huart3.Init.StopBits 			= UART_STOPBITS_1;
	huart3.Init.Parity 				= UART_PARITY_NONE;
	huart3.Init.Mode 				= UART_MODE_TX_RX;
	huart3.Init.HwFlowCtl 			= UART_HWCONTROL_NONE;
	huart3.Init.OverSampling 		= UART_OVERSAMPLING_16;

	if (HAL_UART_Init(&huart3) != HAL_OK)
	{
		Error_Handler(__FILE__, __LINE__);
	}

	__HAL_UART_ENABLE_IT(&huart3, UART_IT_IDLE);
	HAL_UART_Receive_DMA(&huart3, (uint8_t*)uart3Rcv_buff, UART3_RX_BUFFER_SIZE);

	tinysh_init();

}


/********************************************
  * @name   uart2_receive
  * @brief 	UART1 Receive Function
  *******************************************/
static uint8_t u8Func__uart_receive(UARTPeriphCallback callback, uint32_t timeout)
{
	return HAL_OK;
}

/********************************************
  * @name   _puart2_send
  * @brief 	LPUART1 Send Function
  *******************************************/
static uint8_t u8Func__uart_send(uint8_t *data, uint16_t length, uint32_t timeout)
{
	if (HAL_UART_Transmit(&huart3, data, length, timeout)!= HAL_OK)
	{
		return HAL_ERROR;
	}
	return HAL_OK;
}


/************************************************************
  * @brief  UART thread
  * @param  semaphore
  * @retval None
  ************************************************************/
void UART_Thread(void *argument)
{
	struct PrintMessage rcv_msg;
	uint32_t TickDelay = pdMS_TO_TICKS(1);

	for(;;)
	{
		// check message in the queue
		if (xQueueReceive(msg_queue, (void *)&rcv_msg, portMAX_DELAY) != pdTRUE) {
			printf("UART QUEUE Error\r\n\n");
		}else{

#ifdef SHELL_CMD
			for(int i = 0; i<uart3_buff_len; i++){
			  uint8_t single_char = uart3Rcv_buff[i];
			  tinysh_char_in((unsigned char)single_char);
			}

			//Zero Receiving Buffer
			memset(uart3Rcv_buff, '\0', sizeof(uart3Rcv_buff));
			uart3_buff_len = 0;

			//Restart to start DMA transmission of 255 bytes of data at a time
			HAL_UART_Receive_DMA(&huart3, (uint8_t*)uart3Rcv_buff, UART3_RX_BUFFER_SIZE);

#else
			printf("UART Thread RUN from %s\r\n\n",rcv_msg.body);
#endif
		}

		vTaskDelay(TickDelay);
	}


}




