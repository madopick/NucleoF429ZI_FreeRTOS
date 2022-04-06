/*
 * interpolator.h
 *
 *  Created on: Feb 25, 2022
 *      Author: pujak
 */

#ifndef SRC_PROCESSOR_INTERPOLATOR_H_
#define SRC_PROCESSOR_INTERPOLATOR_H_

#include "fw_data.h"

/* Public macros */
//#define USE_TRANSPOSE_ALGO
/* Public types */
enum CoeffType {
  COEFF_0,
  COEFF_1,
  COEFF_2,
  COEFF_CNT,
};

/* Public function definitions */
HAL_StatusTypeDef IPOL_GetCoeff(uint8_t len,
                                float32_t kx[RX_SZ],
                                float32_t ky[RX_SZ],
                                float32_t coeff[COEFF_CNT]);

HAL_StatusTypeDef IPOL_GetCoeffAlt1(uint8_t len,
                                    float32_t kx[RX_SZ],
                                    float32_t ky[RX_SZ],
                                    float32_t coeff[COEFF_CNT]);

HAL_StatusTypeDef IPOL_GetCoeffAlt2(uint8_t len,
                                    float32_t kx[RX_SZ],
                                    float32_t ky[RX_SZ],
                                    float32_t coeff[COEFF_CNT]);

float32_t IPOL_Estimate(uint8_t x, float32_t *coeff);

#endif /* SRC_PROCESSOR_INTERPOLATOR_H_ */
