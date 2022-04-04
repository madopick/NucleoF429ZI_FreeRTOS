/*
 * flashReadWrite.h
 *
 *  Created on: Apr 4, 2022
 *      Author: madop
 */

#ifndef SRC_FLASH_FLASHREADWRITE_H_
#define SRC_FLASH_FLASHREADWRITE_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f4xx_hal.h"

/* Base address of the Flash sectors */
#define ADDR_FLASH_SECTOR_0     ((uint32_t)0x08000000) /* Base address of Sector 0, 16 Kbytes */
#define ADDR_FLASH_SECTOR_1     ((uint32_t)0x08004000) /* Base address of Sector 1, 16 Kbytes */
#define ADDR_FLASH_SECTOR_2     ((uint32_t)0x08008000) /* Base address of Sector 2, 16 Kbytes */
#define ADDR_FLASH_SECTOR_3     ((uint32_t)0x0800C000) /* Base address of Sector 3, 16 Kbytes */
#define ADDR_FLASH_SECTOR_4     ((uint32_t)0x08010000) /* Base address of Sector 4, 64 Kbytes */
#define ADDR_FLASH_SECTOR_5     ((uint32_t)0x08020000) /* Base address of Sector 5, 128 Kbytes */
#define ADDR_FLASH_SECTOR_6     ((uint32_t)0x08040000) /* Base address of Sector 6, 128 Kbytes */
#define ADDR_FLASH_SECTOR_7     ((uint32_t)0x08060000) /* Base address of Sector 7, 128 Kbytes */


#define FLASH_USER_START_ADDR   ADDR_FLASH_SECTOR_4   											/* Start @ of user Flash area */
#define FLASH_USER_END_ADDR     ADDR_FLASH_SECTOR_4  +  GetSectorSize(ADDR_FLASH_SECTOR_4) -1 	/* End @ of user Flash area : sector start address + sector size -1 */


#define RAM_USER_START_ADDR		((uint32_t)0x2002f000)

uint32_t flashRead(uint32_t addr);
HAL_StatusTypeDef flashWrite(uint32_t addr, uint32_t data);
HAL_StatusTypeDef flashErase(void);
HAL_StatusTypeDef flashAreaRead(uint32_t addr, uint16_t len);
HAL_StatusTypeDef printRAMvalue (uint32_t addr, uint16_t len);
HAL_StatusTypeDef copyFlashToRAM (uint32_t FLASHaddr, uint32_t RAMaddr, uint16_t len);
HAL_StatusTypeDef copyRamToFlash (uint32_t RAMaddr, uint32_t FLASHaddr, uint16_t len);
HAL_StatusTypeDef copyFlashToRAM (uint32_t FLASHaddr, uint32_t RAMaddr, uint16_t len);
HAL_StatusTypeDef copyRamToFlash (uint32_t RAMaddr, uint32_t FLASHaddr, uint16_t len);

#ifdef __cplusplus
}
#endif



#endif /* SRC_FLASH_FLASHREADWRITE_H_ */
