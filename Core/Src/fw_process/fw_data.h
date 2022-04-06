/*
 * fw_data.h
 *
 *  Created on: Apr 5, 2022
 *      Author: madop
 */

#ifndef SRC_FW_PROCESS_FW_DATA_H_
#define SRC_FW_PROCESS_FW_DATA_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"
#include "arm_math.h"


/* Exported macros */
#define TX_SZ               (16)
#define RX_SZ               (30)
#define TR_SZ               (TX_SZ*RX_SZ)

/* Exported variables */
extern const float32_t DIFF_BASELINE[TX_SZ][RX_SZ];
extern const float32_t RAWDATA[TX_SZ][RX_SZ];
extern const float32_t FILTERED_REF[TX_SZ][RX_SZ];


void AFE_Thread(void *argument);


#ifdef __cplusplus
}
#endif

#endif /* SRC_FW_PROCESS_FW_DATA_H_ */
