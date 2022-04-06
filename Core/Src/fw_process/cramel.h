/*
 * cramel.h
 *
 *  Created on: Mar 23, 2022
 *      Author: pudja
 */

#ifndef SRC_MODULES_CRAMEL_H_
#define SRC_MODULES_CRAMEL_H_

#include "fw_data.h"

typedef struct
{
  int64_t s64_c0;
  int64_t s64_c1;
  int64_t s64_c2;
  uint8_t u8_scale;
} curfitCoef_t;

void vFunc_CurfitEstimation(int16_t *s16p_data, curfitCoef_t *p_curfitCoef, uint8_t u8_len, uint64_t u64_bitMap);
void vFunc_GetCurveFitLine(int16_t *s16p_dest, curfitCoef_t *p_curfitCoef, uint8_t u8_len);
#endif /* SRC_MODULES_CRAMEL_H_ */
