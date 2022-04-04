/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file         stm32f4xx_hal_msp.c
  * @brief        This file provides code for the MSP Initialization
  *               and de-Initialization codes.
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
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */
extern DMA_HandleTypeDef hdma_i2c1_rx;
extern DMA_HandleTypeDef hdma_i2c1_tx;
extern DMA_HandleTypeDef hdma_spi1_rx;
extern DMA_HandleTypeDef hdma_spi1_tx;
extern DMA_HandleTypeDef hdma_usart3_rx;
extern DMA_HandleTypeDef hdma_usart3_tx;

/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/


/* Private function prototypes -----------------------------------------------*/

/* External functions --------------------------------------------------------*/



/********************************************************
  * Initializes the Global MSP.
  *******************************************************/
void HAL_MspInit(void)
{
  __HAL_RCC_SYSCFG_CLK_ENABLE();
  __HAL_RCC_PWR_CLK_ENABLE();

  /* System interrupt init*/
  /* PendSV_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(PendSV_IRQn, 15, 0);
}

/********************************************************
* @brief CRC MSP Initialization
* This function configures the hardware resources used in this example
* @param hcrc: CRC handle pointer
* @retval None
*******************************************************/
void HAL_CRC_MspInit(CRC_HandleTypeDef* hcrc)
{
  if(hcrc->Instance==CRC)
  {
    /* Peripheral clock enable */
    __HAL_RCC_CRC_CLK_ENABLE();
  }

}

/********************************************************
* @brief CRC MSP De-Initialization
* This function freeze the hardware resources used in this example
* @param hcrc: CRC handle pointer
* @retval None
*******************************************************/
void HAL_CRC_MspDeInit(CRC_HandleTypeDef* hcrc)
{
  if(hcrc->Instance==CRC)
  {
    /* Peripheral clock disable */
    __HAL_RCC_CRC_CLK_DISABLE();
  }

}


/************************************************************************
* @brief TIM_Base MSP Initialization
* This function configures the hardware resources used in this example
* @param htim_base: TIM_Base handle pointer
* @retval None
*************************************************************************/
void HAL_TIM_Base_MspInit(TIM_HandleTypeDef* htim_base)
{
  if(htim_base->Instance==TIM3)
  {
	  __HAL_RCC_TIM3_CLK_ENABLE();
	  HAL_NVIC_SetPriority(TIM3_IRQn, 0, 1);
	  HAL_NVIC_EnableIRQ(TIM3_IRQn);
  }

}

/***********************************************************************
* @brief TIM_Base MSP De-Initialization
* This function freeze the hardware resources used in this example
* @param htim_base: TIM_Base handle pointer
* @retval None
************************************************************************/
void HAL_TIM_Base_MspDeInit(TIM_HandleTypeDef* htim_base)
{
  if(htim_base->Instance==TIM3)
  {
	  __HAL_RCC_TIM3_CLK_DISABLE();
	  HAL_NVIC_DisableIRQ(TIM3_IRQn);
  }
}



/********************************************************
* @brief I2C MSP Initialization
* This function configures the hardware resources used in this example
* @param hi2c: I2C handle pointer
* @retval None
*******************************************************/
void HAL_I2C_MspInit(I2C_HandleTypeDef* hi2c)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
  if(hi2c->Instance==I2C1)
  {
    __HAL_RCC_GPIOB_CLK_ENABLE();
    /**I2C1 GPIO Configuration
    PB6     ------> I2C1_SCL
    PB9     ------> I2C1_SDA
    */
    GPIO_InitStruct.Pin 		= GPIO_PIN_6|GPIO_PIN_9;
    GPIO_InitStruct.Mode 		= GPIO_MODE_AF_OD;
    GPIO_InitStruct.Pull 		= GPIO_NOPULL;
    GPIO_InitStruct.Speed 		= GPIO_SPEED_FREQ_VERY_HIGH;
    GPIO_InitStruct.Alternate 	= GPIO_AF4_I2C1;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    /* Peripheral clock enable */
    __HAL_RCC_I2C1_CLK_ENABLE();

    /* I2C1 DMA Init */
    /* I2C1_RX Init */
    hdma_i2c1_rx.Instance 					= DMA1_Stream0;
    hdma_i2c1_rx.Init.Channel 				= DMA_CHANNEL_1;
    hdma_i2c1_rx.Init.Direction 			= DMA_PERIPH_TO_MEMORY;
    hdma_i2c1_rx.Init.PeriphInc 			= DMA_PINC_DISABLE;
    hdma_i2c1_rx.Init.MemInc 				= DMA_MINC_ENABLE;
    hdma_i2c1_rx.Init.PeriphDataAlignment 	= DMA_PDATAALIGN_BYTE;
    hdma_i2c1_rx.Init.MemDataAlignment 		= DMA_MDATAALIGN_BYTE;
    hdma_i2c1_rx.Init.Mode 					= DMA_NORMAL;
    hdma_i2c1_rx.Init.Priority 				= DMA_PRIORITY_LOW;
    hdma_i2c1_rx.Init.FIFOMode 				= DMA_FIFOMODE_DISABLE;
    if (HAL_DMA_Init(&hdma_i2c1_rx) != HAL_OK)
    {
    	Error_Handler(__FILE__, __LINE__);
    }

    __HAL_LINKDMA(hi2c,hdmarx,hdma_i2c1_rx);

    /* I2C1_TX Init */
    hdma_i2c1_tx.Instance 					= DMA1_Stream6;
    hdma_i2c1_tx.Init.Channel 				= DMA_CHANNEL_1;
    hdma_i2c1_tx.Init.Direction 			= DMA_MEMORY_TO_PERIPH;
    hdma_i2c1_tx.Init.PeriphInc 			= DMA_PINC_DISABLE;
    hdma_i2c1_tx.Init.MemInc 				= DMA_MINC_ENABLE;
    hdma_i2c1_tx.Init.PeriphDataAlignment 	= DMA_PDATAALIGN_BYTE;
    hdma_i2c1_tx.Init.MemDataAlignment 		= DMA_MDATAALIGN_BYTE;
    hdma_i2c1_tx.Init.Mode 					= DMA_NORMAL;
    hdma_i2c1_tx.Init.Priority 				= DMA_PRIORITY_LOW;
    hdma_i2c1_tx.Init.FIFOMode 				= DMA_FIFOMODE_DISABLE;
    if (HAL_DMA_Init(&hdma_i2c1_tx) != HAL_OK)
    {
    	Error_Handler(__FILE__, __LINE__);
    }

    __HAL_LINKDMA(hi2c,hdmatx,hdma_i2c1_tx);

    /* I2C1 interrupt Init */
    HAL_NVIC_SetPriority(I2C1_EV_IRQn, 5, 0);
    HAL_NVIC_EnableIRQ(I2C1_EV_IRQn);
    HAL_NVIC_SetPriority(I2C1_ER_IRQn, 5, 0);
    HAL_NVIC_EnableIRQ(I2C1_ER_IRQn);
  }

}

/********************************************************
* @brief I2C MSP De-Initialization
* This function freeze the hardware resources used in this example
* @param hi2c: I2C handle pointer
* @retval None
*******************************************************/
void HAL_I2C_MspDeInit(I2C_HandleTypeDef* hi2c)
{
  if(hi2c->Instance==I2C1)
  {
    /* Peripheral clock disable */
    __HAL_RCC_I2C1_CLK_DISABLE();

    /**I2C1 GPIO Configuration
    PB6     ------> I2C1_SCL
    PB9     ------> I2C1_SDA
    */
    HAL_GPIO_DeInit(GPIOB, GPIO_PIN_6);

    HAL_GPIO_DeInit(GPIOB, GPIO_PIN_9);

    /* I2C1 DMA DeInit */
    HAL_DMA_DeInit(hi2c->hdmarx);
    HAL_DMA_DeInit(hi2c->hdmatx);

    /* I2C1 interrupt DeInit */
    HAL_NVIC_DisableIRQ(I2C1_EV_IRQn);
    HAL_NVIC_DisableIRQ(I2C1_ER_IRQn);
  }

}

/********************************************************
* @brief SPI MSP Initialization
* This function configures the hardware resources used in this example
* @param hspi: SPI handle pointer
* @retval None
*******************************************************/
void HAL_SPI_MspInit(SPI_HandleTypeDef* hspi)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
  if(hspi->Instance==SPI1)
  {
    /* Peripheral clock enable */
    __HAL_RCC_SPI1_CLK_ENABLE();

    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_GPIOB_CLK_ENABLE();
    /**SPI1 GPIO Configuration
    PA5     ------> SPI1_SCK
    PA6     ------> SPI1_MISO
    PB5     ------> SPI1_MOSI
    */
    GPIO_InitStruct.Pin 		= GPIO_PIN_5|GPIO_PIN_6;
    GPIO_InitStruct.Mode 		= GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull 		= GPIO_NOPULL;
    GPIO_InitStruct.Speed 		= GPIO_SPEED_FREQ_VERY_HIGH;
    GPIO_InitStruct.Alternate 	= GPIO_AF5_SPI1;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    GPIO_InitStruct.Pin 		= GPIO_PIN_5;
    GPIO_InitStruct.Mode 		= GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull 		= GPIO_NOPULL;
    GPIO_InitStruct.Speed 		= GPIO_SPEED_FREQ_VERY_HIGH;
    GPIO_InitStruct.Alternate 	= GPIO_AF5_SPI1;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    /* SPI1 DMA Init */
    /* SPI1_RX Init */
    hdma_spi1_rx.Instance 					= DMA2_Stream0;
    hdma_spi1_rx.Init.Channel 				= DMA_CHANNEL_3;
    hdma_spi1_rx.Init.Direction 			= DMA_PERIPH_TO_MEMORY;
    hdma_spi1_rx.Init.PeriphInc 			= DMA_PINC_DISABLE;
    hdma_spi1_rx.Init.MemInc 				= DMA_MINC_ENABLE;
    hdma_spi1_rx.Init.PeriphDataAlignment 	= DMA_PDATAALIGN_BYTE;
    hdma_spi1_rx.Init.MemDataAlignment 		= DMA_MDATAALIGN_BYTE;
    hdma_spi1_rx.Init.Mode 					= DMA_CIRCULAR;
    hdma_spi1_rx.Init.Priority 				= DMA_PRIORITY_LOW;
    hdma_spi1_rx.Init.FIFOMode 				= DMA_FIFOMODE_DISABLE;
    if (HAL_DMA_Init(&hdma_spi1_rx) != HAL_OK)
    {
    	Error_Handler(__FILE__, __LINE__);
    }

    __HAL_LINKDMA(hspi,hdmarx,hdma_spi1_rx);

    /* SPI1_TX Init */
    hdma_spi1_tx.Instance 					= DMA2_Stream3;
    hdma_spi1_tx.Init.Channel 				= DMA_CHANNEL_3;
    hdma_spi1_tx.Init.Direction 			= DMA_MEMORY_TO_PERIPH;
    hdma_spi1_tx.Init.PeriphInc 			= DMA_PINC_DISABLE;
    hdma_spi1_tx.Init.MemInc 				= DMA_MINC_ENABLE;
    hdma_spi1_tx.Init.PeriphDataAlignment 	= DMA_PDATAALIGN_BYTE;
    hdma_spi1_tx.Init.MemDataAlignment 		= DMA_MDATAALIGN_BYTE;
    hdma_spi1_tx.Init.Mode 					= DMA_CIRCULAR;
    hdma_spi1_tx.Init.Priority 				= DMA_PRIORITY_LOW;
    hdma_spi1_tx.Init.FIFOMode 				= DMA_FIFOMODE_DISABLE;
    if (HAL_DMA_Init(&hdma_spi1_tx) != HAL_OK)
    {
    	Error_Handler(__FILE__, __LINE__);
    }

    __HAL_LINKDMA(hspi,hdmatx,hdma_spi1_tx);

    /* SPI1 interrupt Init */
    HAL_NVIC_SetPriority(SPI1_IRQn, 5, 0);
    HAL_NVIC_EnableIRQ(SPI1_IRQn);
  }

}

/********************************************************
* @brief SPI MSP De-Initialization
* This function freeze the hardware resources used in this example
* @param hspi: SPI handle pointer
* @retval None
*******************************************************/
void HAL_SPI_MspDeInit(SPI_HandleTypeDef* hspi)
{
  if(hspi->Instance==SPI1)
  {
    /* Peripheral clock disable */
    __HAL_RCC_SPI1_CLK_DISABLE();

    /**SPI1 GPIO Configuration
    PA5     ------> SPI1_SCK
    PA6     ------> SPI1_MISO
    PB5     ------> SPI1_MOSI
    */
    HAL_GPIO_DeInit(GPIOA, GPIO_PIN_5|GPIO_PIN_6);
    HAL_GPIO_DeInit(GPIOB, GPIO_PIN_5);

    /* SPI1 DMA DeInit */
    HAL_DMA_DeInit(hspi->hdmarx);
    HAL_DMA_DeInit(hspi->hdmatx);

    /* SPI1 interrupt DeInit */
    HAL_NVIC_DisableIRQ(SPI1_IRQn);
  }

}


/********************************************************
* @brief UART MSP Initialization
* This function configures the hardware resources used in this example
* @param huart: UART handle pointer
* @retval None
*******************************************************/
void HAL_UART_MspInit(UART_HandleTypeDef* huart)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
  if(huart->Instance==USART3)
  {
    /* Peripheral clock enable */
    __HAL_RCC_USART3_CLK_ENABLE();
    __HAL_RCC_GPIOD_CLK_ENABLE();
    /**USART3 GPIO Configuration
    PD8     ------> USART3_TX
    PD9     ------> USART3_RX
    */
    GPIO_InitStruct.Pin 		= STLK_RX_Pin|STLK_TX_Pin;
    GPIO_InitStruct.Mode 		= GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull 		= GPIO_NOPULL;
    GPIO_InitStruct.Speed 		= GPIO_SPEED_FREQ_VERY_HIGH;
    GPIO_InitStruct.Alternate 	= GPIO_AF7_USART3;
    HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

    /* USART3 DMA Init */
    /* USART3_RX Init */
    hdma_usart3_rx.Instance 		= DMA1_Stream1;
    hdma_usart3_rx.Init.Channel 	= DMA_CHANNEL_4;
    hdma_usart3_rx.Init.Direction 	= DMA_PERIPH_TO_MEMORY;
    hdma_usart3_rx.Init.PeriphInc 	= DMA_PINC_DISABLE;
    hdma_usart3_rx.Init.MemInc 		= DMA_MINC_ENABLE;
    hdma_usart3_rx.Init.PeriphDataAlignment = DMA_PDATAALIGN_BYTE;
    hdma_usart3_rx.Init.MemDataAlignment 	= DMA_MDATAALIGN_BYTE;
    hdma_usart3_rx.Init.Mode 		= DMA_NORMAL;
    hdma_usart3_rx.Init.Priority 	= DMA_PRIORITY_LOW;
    hdma_usart3_rx.Init.FIFOMode 	= DMA_FIFOMODE_DISABLE;
    if (HAL_DMA_Init(&hdma_usart3_rx) != HAL_OK)
    {
    	Error_Handler(__FILE__, __LINE__);
    }

    __HAL_LINKDMA(huart,hdmarx,hdma_usart3_rx);

    /* USART3_TX Init */
    hdma_usart3_tx.Instance 		= DMA1_Stream3;
    hdma_usart3_tx.Init.Channel 	= DMA_CHANNEL_4;
    hdma_usart3_tx.Init.Direction 	= DMA_MEMORY_TO_PERIPH;
    hdma_usart3_tx.Init.PeriphInc 	= DMA_PINC_DISABLE;
    hdma_usart3_tx.Init.MemInc 		= DMA_MINC_ENABLE;
    hdma_usart3_tx.Init.PeriphDataAlignment = DMA_PDATAALIGN_BYTE;
    hdma_usart3_tx.Init.MemDataAlignment 	= DMA_MDATAALIGN_BYTE;
    hdma_usart3_tx.Init.Mode 		= DMA_NORMAL;
    hdma_usart3_tx.Init.Priority 	= DMA_PRIORITY_LOW;
    hdma_usart3_tx.Init.FIFOMode 	= DMA_FIFOMODE_DISABLE;
    if (HAL_DMA_Init(&hdma_usart3_tx) != HAL_OK)
    {
    	Error_Handler(__FILE__, __LINE__);
    }

    __HAL_LINKDMA(huart,hdmatx,hdma_usart3_tx);


	/* UART2 interrupt Init */
	HAL_NVIC_SetPriority(USART3_IRQn, 15, 0);
	HAL_NVIC_EnableIRQ(USART3_IRQn);
  }

}

/********************************************************
* @brief UART MSP De-Initialization
* This function freeze the hardware resources used in this example
* @param huart: UART handle pointer
* @retval None
*******************************************************/
void HAL_UART_MspDeInit(UART_HandleTypeDef* huart)
{
  if(huart->Instance==USART3)
  {
    /* Peripheral clock disable */
    __HAL_RCC_USART3_CLK_DISABLE();

    /**USART3 GPIO Configuration
    PD8     ------> USART3_TX
    PD9     ------> USART3_RX
    */
    HAL_GPIO_DeInit(GPIOD, STLK_RX_Pin|STLK_TX_Pin);

    /* USART3 DMA DeInit */
    HAL_DMA_DeInit(huart->hdmarx);
    HAL_DMA_DeInit(huart->hdmatx);
  }

}



/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
