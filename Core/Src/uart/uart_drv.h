/*
 * uart_drv.h
 *
 *  Created on: Apr 4, 2022
 *      Author: madop
 */

#ifndef SRC_UART_UART_DRV_H_
#define SRC_UART_UART_DRV_H_

#include "main.h"



/************************************************************
 * @brief   UART callback typedef
 *
 * @param   data The data pointer
 * @param   length The data length
 ************************************************************/
typedef void (*UARTPeriphCallback)(uint8_t *data, uint16_t length);

/************************************************************
 * @brief   UART peripheral structure.
 *
 * There several instance of UART in this application:
 * UART1 :
 * LUART1:
 ************************************************************/
extern const struct UARTPeriph_s
{
    void (*init)(uint32_t baud);
    uint8_t (*receive)(UARTPeriphCallback callback, uint32_t timeout);
    uint8_t (*send)(uint8_t *data, uint16_t length, uint32_t timeout);
}UARTPeriph;


void UART_Thread(void *argument);


#endif /* SRC_UART_UART_DRV_H_ */
