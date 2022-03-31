
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "cmsis_os.h"					// temporary disable using CMSIS API



/* Private includes ----------------------------------------------------------*/


/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/
#define BIT_0	( 1 << 0 )
#define BIT_4	( 1 << 4 )
#define BIT_5	( 1 << 5 )
/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/
CRC_HandleTypeDef hcrc;

ETH_HandleTypeDef heth;

I2C_HandleTypeDef hi2c1;
DMA_HandleTypeDef hdma_i2c1_rx;
DMA_HandleTypeDef hdma_i2c1_tx;

SPI_HandleTypeDef hspi1;
DMA_HandleTypeDef hdma_spi1_rx;
DMA_HandleTypeDef hdma_spi1_tx;
DMA_HandleTypeDef hdma_usart3_tx;
DMA_HandleTypeDef hdma_usart3_rx;

UART_HandleTypeDef huart3;
uint8_t uart3Rcv_buff[UART3_RX_BUFFER_SIZE];                		// UART3 RCV
uint8_t uart3_buff_len;												// UART3 RCv Length

///FRERTOS
/*************** Task Handlers (osThreadId) 	***************/
xTaskHandle defaultThreadHandle;
xTaskHandle ButtonThreadHandle;
xTaskHandle UARTThreadHandle;
xTaskHandle LEDThreadHandle;

/*************** Queue Handlers (QueueHandle_t) ***************/
xQueueHandle delay_queue 	= NULL;
xQueueHandle msg_queue 		= NULL;

/*************** Semaphore Handlers (osSemaphoreId) ***************/
SemaphoreHandle_t osSemaphore;

/*************** EventGroupHandle_t Handlers ***************/
EventGroupHandle_t xEventGroup = 0;


static const uint8_t delay_queue_len 	= 5;   	 // Size of delay_queue
static const uint8_t msg_queue_len 		= 5;     // Size of msg_queue
uint8_t sMsgcounter = 0;

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_DMA_Init(void);
static void MX_CRC_Init(void);
static void MX_I2C1_Init(void);
static void MX_USART3_UART_Init(void);
static void MX_SPI1_Init(void);


/*************** Task Function ***************/
void Default_Thread(void *argument);
void LED_Thread(void *argument);
void UART_Thread(void *argument);
void Button_Thread(void const *argument);


/* Private user code ---------------------------------------------------------*/
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





/************************************************************
  * @brief  The application entry point.
  * @retval int
  ***********************************************************/
int main(void)
{
  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* Configure the system clock (HSE- PLL 180 MHz) */
  SystemClock_Config();

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_DMA_Init();
  MX_CRC_Init();
  MX_I2C1_Init();
  MX_USART3_UART_Init();
  MX_SPI1_Init();

  printf("\r\nHW Initialization OK\r\n");

  /* Event Group */

  xEventGroup = xEventGroupCreate();
  if( xEventGroup == NULL )
  {
	  printf("Event Group Fail!!!\r\n");
  }

  /* RTOS_SEMAPHORES */
  osSemaphore = xSemaphoreCreateBinary();
  if( osSemaphore == NULL )
  {
	  printf("Semaphore creation Fail!!!\r\n");
  }

  /* RTOS_QUEUE */
  delay_queue 	= xQueueCreate(delay_queue_len, sizeof(PrintMessage));
  msg_queue 	= xQueueCreate(msg_queue_len, sizeof(PrintMessage));
  if( ( delay_queue == NULL ) || ( msg_queue == NULL ) )
  {
	  printf("Queue creation Fail!!!\r\n");
  }else{
	  printf("Queue creation OK\r\n");
  }

  /* RTOS TASKS */
  xTaskCreate(Default_Thread, "DEFAULT_TASK", 128, NULL, osPriorityBelowNormal, &defaultThreadHandle);
  xTaskCreate(LED_Thread, "LED_TASK", configMINIMAL_STACK_SIZE, NULL, osPriorityHigh, &LEDThreadHandle);
  xTaskCreate(UART_Thread, "UART_TASK", configMINIMAL_STACK_SIZE, NULL, osPriorityAboveNormal, &UARTThreadHandle);

  /* Button Thread definition */
  osThreadDef(ButtonTask, Button_Thread, osPriorityNormal, 0, configMINIMAL_STACK_SIZE);
  ButtonThreadHandle = osThreadCreate (osThread(ButtonTask), (void *) osSemaphore);

  /* Start scheduler */
  osKernelStart();

  /* Infinite loop */
  while (1)
  {

  }
}



//============================================= RTOS TASK =================================================//
//=============================================  SECTION  =================================================//


/************************************************************
  * @brief  LED thread
  * @param  semaphore
  * @retval None
  ************************************************************/
void UART_Thread(void *argument)
{
	struct PrintMessage rcv_msg;
	uint32_t TickDelay = pdMS_TO_TICKS(3000);

	for(;;)
	{
		// check message in the queue
		if (xQueueReceive(msg_queue, (void *)&rcv_msg, portMAX_DELAY) != pdTRUE) {
			printf("Error in Receiving from Queue\r\n\n");

		}else{

			printf("UART Thread RUN from %s\r\n\n",rcv_msg.body);
		}

		vTaskDelay(TickDelay);
	}


}


/************************************************************
  * @brief  LED thread
  * @param  semaphore
  * @retval None
  ************************************************************/
void LED_Thread(void *argument)
{
  uint32_t count = 0;
  const TickType_t xTicksToWait = 100 / portTICK_PERIOD_MS;
  EventBits_t uxBits;

  for(;;)
  {
    count = 0;

    //printf("blink LED1 for 2S \r\n");
    while (count <= 20)
    {
    	HAL_GPIO_TogglePin(LD1_GPIO_Port, LD1_Pin);
    	osDelay(200);
    	count++;
    }

    /* Turn off LED */
    HAL_GPIO_WritePin(LD1_GPIO_Port, LD1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin, GPIO_PIN_RESET);


    vTaskDelay(2000);


    /* Wait a maximum of 100ms for either bit 0,4 or bit 5 in event group.  Clear the bits before exiting. */
	uxBits = xEventGroupWaitBits(
			xEventGroup,   		/* The event group being tested. */
			BIT_0 | BIT_4, 		/* The bits within the event group to wait for. */
			pdFALSE,        	/* BIT_0 & BIT_4 not cleared before returning. */
			pdFALSE,       		/* Don't wait for both bits, either bit will do. */
			xTicksToWait );		/* Wait a maximum of 100ms for either bit to be set. */

	if( uxBits  == ( BIT_0 | BIT_4 ) )
	{
		/*both bits were set. */
		//printf("Both set (LED2 ON)\r\n\n\n");
		count = 0;
		while (count <= 10)
		{
			HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
			vTaskDelay(200);
			count++;
		}

		HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);
		uxBits = xEventGroupClearBits( xEventGroup,  BIT_0 | BIT_4 );

		// Construct message and send
		PrintMessage msg;
		strcpy(msg.body, "LED Thread");
		msg.count = 1;

		if (xQueueSend(msg_queue, &msg, portMAX_DELAY) == pdPASS){
			printf("\r\n\nsent msg queue\r\n");
		}

		uint32_t TickDelay = pdMS_TO_TICKS(2000);
		vTaskDelay(TickDelay);

	}
	else if( ( uxBits & BIT_0 ) != 0 )
	{
		/* BIT_0 was set. */
		uxBits = xEventGroupSetBits(xEventGroup, BIT_4);
		//printf("BIT0 set \r\n\n\n");
	}
	else if( ( uxBits & BIT_4 ) != 0 )
	{
		/* BIT_4 was set. */
		uxBits = xEventGroupSetBits(xEventGroup, BIT_0);
		//printf("BIT4 set \r\n\n\n");
	}
	else if( ( uxBits & BIT_5 ) != 0 )
	{
		/* BIT_5 was set. */
		uxBits = xEventGroupClearBits(xEventGroup,  BIT_5);

		count = 0;
		while (count <= 10)
		{
			HAL_GPIO_TogglePin(LD3_GPIO_Port, LD3_Pin);
			vTaskDelay(200);
			count++;
		}

		HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin, GPIO_PIN_RESET);
	}
	else
	{
		/* Timeout */
		//printf("timeout xEventGroup\r\n\n\n");
		uxBits = xEventGroupSetBits(xEventGroup,BIT_0);
	}

  }
}



/************************************************************
  * @brief  Button thread
  * @param  semaphore
  * @retval None
  ************************************************************/
void Button_Thread(void const *argument)
{
  for(;;)
  {
	if (osSemaphore != NULL)
	{
		/* Try to obtain the semaphore. */
		if( xSemaphoreTake( osSemaphore,portMAX_DELAY ) == pdTRUE ){
			printf("run button interrupt\r\n");
			xEventGroupSetBits(xEventGroup,BIT_5);

		}
		vTaskDelay(100);
	}

  }
}


/************************************************************
  * @brief  Function implementing the defaultTask thread.
  * @param  argument: Not used
  * @retval None
  ***********************************************************/

void Default_Thread(void * argument)
{
  /* Infinite loop */
  for(;;)
  {
    osDelay(100);
  }
}



//============================================= HW Init =================================================//
//============================================= SECTION =================================================//

/************************************************************
  * @brief System Clock Configuration
  * @retval None
  ************************************************************/
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage*/
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /** Initializes the RCC Oscillators */
  RCC_OscInitStruct.OscillatorType 	= RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState 		= RCC_HSE_BYPASS;
  RCC_OscInitStruct.PLL.PLLState	= RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource 	= RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM 		= 4;
  RCC_OscInitStruct.PLL.PLLN 		= 180;
  RCC_OscInitStruct.PLL.PLLP 		= RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ 		= 7;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Activate the Over-Drive mode */
  if (HAL_PWREx_EnableOverDrive() != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocksm */
  RCC_ClkInitStruct.ClockType 		= RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              	  	  |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource 	= RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider 	= RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider 	= RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider 	= RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5) != HAL_OK)
  {
    Error_Handler();
  }
}


/************************************************************
  * @brief 	CRC Initialization Function
  * @param 	None
  * @retval None
  ************************************************************/
static void MX_CRC_Init(void)
{
  hcrc.Instance = CRC;
  if (HAL_CRC_Init(&hcrc) != HAL_OK)
  {
    Error_Handler();
  }
}


/************************************************************
  * @brief 	I2C1 Initialization Function
  * @param 	None
  * @retval None
  ************************************************************/
static void MX_I2C1_Init(void)
{
  hi2c1.Instance 				= I2C1;
  hi2c1.Init.ClockSpeed 		= 100000;
  hi2c1.Init.DutyCycle 			= I2C_DUTYCYCLE_2;
  hi2c1.Init.OwnAddress1 		= 0;
  hi2c1.Init.AddressingMode 	= I2C_ADDRESSINGMODE_7BIT;
  hi2c1.Init.DualAddressMode 	= I2C_DUALADDRESS_DISABLE;
  hi2c1.Init.OwnAddress2 		= 0;
  hi2c1.Init.GeneralCallMode 	= I2C_GENERALCALL_DISABLE;
  hi2c1.Init.NoStretchMode 		= I2C_NOSTRETCH_DISABLE;
  if (HAL_I2C_Init(&hi2c1) != HAL_OK)
  {
    Error_Handler();
  }

  /** Configure Analogue filter*/
  if (HAL_I2CEx_ConfigAnalogFilter(&hi2c1, I2C_ANALOGFILTER_ENABLE) != HAL_OK)
  {
    Error_Handler();
  }

  /** Configure Digital filter*/
  if (HAL_I2CEx_ConfigDigitalFilter(&hi2c1, 0) != HAL_OK)
  {
    Error_Handler();
  }
}


/************************************************************
  * @brief 	SPI1 Initialization Function
  * @param 	None
  * @retval None
  ************************************************************/
static void MX_SPI1_Init(void)
{
  /* SPI1 parameter configuration*/
  hspi1.Instance 					= SPI1;
  hspi1.Init.Mode 					= SPI_MODE_SLAVE;
  hspi1.Init.Direction 				= SPI_DIRECTION_2LINES;
  hspi1.Init.DataSize 				= SPI_DATASIZE_8BIT;
  hspi1.Init.CLKPolarity 			= SPI_POLARITY_LOW;
  hspi1.Init.CLKPhase 				= SPI_PHASE_1EDGE;
  hspi1.Init.NSS 					= SPI_NSS_SOFT;
  hspi1.Init.FirstBit 				= SPI_FIRSTBIT_MSB;
  hspi1.Init.TIMode 				= SPI_TIMODE_DISABLE;
  hspi1.Init.CRCCalculation 		= SPI_CRCCALCULATION_DISABLE;
  hspi1.Init.CRCPolynomial 			= 10;
  if (HAL_SPI_Init(&hspi1) != HAL_OK)
  {
    Error_Handler();
  }
}


/************************************************************
  * @brief USART3 Initialization Function
  * @param None
  * @retval None
  ************************************************************/
static void MX_USART3_UART_Init(void)
{
  huart3.Instance 				= USART3;
  huart3.Init.BaudRate 			= 115200;
  huart3.Init.WordLength 		= UART_WORDLENGTH_8B;
  huart3.Init.StopBits 			= UART_STOPBITS_1;
  huart3.Init.Parity 			= UART_PARITY_NONE;
  huart3.Init.Mode 				= UART_MODE_TX_RX;
  huart3.Init.HwFlowCtl 		= UART_HWCONTROL_NONE;
  huart3.Init.OverSampling 		= UART_OVERSAMPLING_16;
  if (HAL_UART_Init(&huart3) != HAL_OK)
  {
    Error_Handler();
  }

  __HAL_UART_ENABLE_IT(&huart3, UART_IT_IDLE);
  HAL_UART_Receive_DMA(&huart3, (uint8_t*)uart3Rcv_buff, UART3_RX_BUFFER_SIZE);
}


/************************************************************
  * Enable DMA controller clock
  ************************************************************/
static void MX_DMA_Init(void)
{

  /* DMA controller clock enable */
  __HAL_RCC_DMA1_CLK_ENABLE();
  __HAL_RCC_DMA2_CLK_ENABLE();

  /* DMA interrupt init */
  /* DMA1_Stream0_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA1_Stream0_IRQn, 5, 0);
  HAL_NVIC_EnableIRQ(DMA1_Stream0_IRQn);
  /* DMA1_Stream6_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA1_Stream6_IRQn, 5, 0);
  HAL_NVIC_EnableIRQ(DMA1_Stream6_IRQn);
  /* DMA2_Stream0_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA2_Stream0_IRQn, 5, 0);
  HAL_NVIC_EnableIRQ(DMA2_Stream0_IRQn);
  /* DMA2_Stream3_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA2_Stream3_IRQn, 5, 0);
  HAL_NVIC_EnableIRQ(DMA2_Stream3_IRQn);

}


/************************************************************
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  ************************************************************/
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();
  __HAL_RCC_GPIOG_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LD1_Pin|LD3_Pin|LD2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin : USER_Btn_Pin */
  GPIO_InitStruct.Pin 	= USER_Btn_Pin;
  GPIO_InitStruct.Mode 	= GPIO_MODE_IT_RISING;
  GPIO_InitStruct.Pull 	= GPIO_NOPULL;
  HAL_GPIO_Init(USER_Btn_GPIO_Port, &GPIO_InitStruct);

  /* Enable and set EXTI lines 15 to 10 Interrupt */
  HAL_NVIC_SetPriority(EXTI15_10_IRQn, 15, 0);
  HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);

  /*Configure GPIO pins : LD1_Pin LD3_Pin LD2_Pin */
  GPIO_InitStruct.Pin 	= LD1_Pin|LD3_Pin|LD2_Pin;
  GPIO_InitStruct.Mode 	= GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull 	= GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  HAL_GPIO_WritePin(LD1_GPIO_Port, LD1_Pin, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin, GPIO_PIN_RESET);

}

/************************************************************
  * @brief EXTI line detection callbacks
  * @param GPIO_Pin: Specifies the pins connected EXTI line
  * @retval None
  ***********************************************************/
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
  if (GPIO_Pin == USER_Btn_Pin)
  {
	  BaseType_t xHigherPriorityTaskWoken = pdFALSE;

	  /* Unblock the task by releasing the semaphore. */
	  xSemaphoreGiveFromISR( osSemaphore, &xHigherPriorityTaskWoken );

	  /* If xHigherPriorityTaskWoken was set to true, we should yield.  */
	  portYIELD_FROM_ISR( xHigherPriorityTaskWoken );

  }
}





/************************************************************
  * @brief  Period elapsed callback in non blocking mode
  * @note   This function is called  when TIM1 interrupt took place, inside
  * HAL_TIM_IRQHandler(). It makes a direct call to HAL_IncTick() to increment
  * a global variable "uwTick" used as application time base.
  * @param  htim : TIM handle
  * @retval None
  ************************************************************/
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  if (htim->Instance == TIM1) {
    HAL_IncTick();
  }
}

/************************************************************
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  ************************************************************/
void Error_Handler(void)
{
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
