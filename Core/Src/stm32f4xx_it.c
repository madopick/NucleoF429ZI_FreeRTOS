
/**
  ******************************************************************************
  * @file    stm32f4xx_it.c
  * @brief   Interrupt Service Routines.
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
#include "stm32f4xx_it.h"

/* Private includes ----------------------------------------------------------*/

/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Private user code ---------------------------------------------------------*/

/* External variables --------------------------------------------------------*/
extern DMA_HandleTypeDef hdma_i2c1_rx;
extern DMA_HandleTypeDef hdma_i2c1_tx;
extern I2C_HandleTypeDef hi2c1;
extern DMA_HandleTypeDef hdma_spi1_rx;
extern DMA_HandleTypeDef hdma_spi1_tx;
extern SPI_HandleTypeDef hspi1;
extern TIM_HandleTypeDef htim1;




/******************************************************************************/
/*           Cortex-M4 Processor Interruption and Exception Handlers          */
/******************************************************************************/
/************************************************************
  * @brief This function handles Non maskable interrupt.
  ***********************************************************/
void NMI_Handler(void)
{
  while (1)
  {
  }
}

/************************************************************
  * @brief This function handles Hard fault interrupt.
  ***********************************************************/
void HardFault_Handler(void)
{
  while (1)
  {

  }
}

/************************************************************
  * @brief This function handles Memory management fault.
  ***********************************************************/
void MemManage_Handler(void)
{
  while (1)
  {

  }
}

/************************************************************
  * @brief This function handles Pre-fetch fault, memory access fault.
  ***********************************************************/
void BusFault_Handler(void)
{
  while (1)
  {

  }
}

/************************************************************
  * @brief This function handles Undefined instruction or illegal state.
  ***********************************************************/
void UsageFault_Handler(void)
{
  while (1)
  {

  }
}

/************************************************************
  * @brief This function handles Debug monitor.
  ***********************************************************/
void DebugMon_Handler(void)
{

}



/******************************************************************************/
/* STM32F4xx Peripheral Interrupt Handlers                                    */
/* Add here the Interrupt Handlers for the used peripherals.                  */
/* For the available peripheral interrupt handler names,                      */
/* please refer to the startup file (startup_stm32f4xx.s).                    */
/******************************************************************************/

/******************************************************************************
  * @brief  This function handles external lines 15 to 10 interrupt request.
  * @param  None
  * @retval None
  *****************************************************************************/
void EXTI15_10_IRQHandler(void)
{
	HAL_GPIO_EXTI_IRQHandler(USER_Btn_Pin);
}

/************************************************************
  * @brief This function handles DMA1 stream0 global interrupt.
  ************************************************************/
void DMA1_Stream0_IRQHandler(void)
{
  HAL_DMA_IRQHandler(&hdma_i2c1_rx);
}

/*************************************************************
  * @brief This function handles DMA1 stream6 global interrupt.
  ************************************************************/
void DMA1_Stream6_IRQHandler(void)
{
  HAL_DMA_IRQHandler(&hdma_i2c1_tx);
}

/*************************************************************
  * @brief This function handles TIM1 update interrupt and TIM10 global interrupt.
  ************************************************************/
void TIM1_UP_TIM10_IRQHandler(void)
{
  HAL_TIM_IRQHandler(&htim1);
}

/**************************************************************
  * @brief This function handles I2C1 event interrupt.
  *************************************************************/
void I2C1_EV_IRQHandler(void)
{
  HAL_I2C_EV_IRQHandler(&hi2c1);
}

/**************************************************************
  * @brief This function handles I2C1 error interrupt.
  *************************************************************/
void I2C1_ER_IRQHandler(void)
{
  HAL_I2C_ER_IRQHandler(&hi2c1);
}

/**************************************************************
  * @brief This function handles SPI1 global interrupt.
  *************************************************************/
void SPI1_IRQHandler(void)
{
  HAL_SPI_IRQHandler(&hspi1);
}

/**************************************************************
  * @brief This function handles DMA2 stream0 global interrupt.
  *************************************************************/
void DMA2_Stream0_IRQHandler(void)
{
  HAL_DMA_IRQHandler(&hdma_spi1_rx);
}

/**************************************************************
  * @brief This function handles DMA2 stream3 global interrupt.
  *************************************************************/
void DMA2_Stream3_IRQHandler(void)
{
  HAL_DMA_IRQHandler(&hdma_spi1_tx);
}










/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
