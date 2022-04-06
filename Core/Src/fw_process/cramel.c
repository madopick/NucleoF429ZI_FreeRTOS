/*
 * cramel.c
 *
 *  Created on: Mar 23, 2022
 *      Author: pudja
 */

#include "cramel.h"
#include <string.h>
#include "cmsis_gcc.h"

static uint8_t vFunc_GetMinVal(uint8_t *u8p_src, uint8_t u8_len)
{
  uint8_t u8_minVal;
  u8_minVal = UINT8_MAX;

  for (uint32_t i = u8_len; i--;)
  {
    u8_minVal = (u8_minVal < *(u8p_src + i)) ? u8_minVal : *(u8p_src + i);
  }

  return u8_minVal;
}

/*
 *   @brief Computes determinant 3x3 matrix
 *
 *   3x3 matrix arrangement format
 *   [ 0 1 2 ]
 *   [ 3 4 5 ]
 *   [ 6 7 8 ]
 */
static int64_t vFunc_GetMtrxDet3x3(int32_t *s32p_mtrx)
{
  int64_t s64_retVal;
  int64_t s64_sumP, s64_sumN;

  s64_sumP = (int64_t) s32p_mtrx[0] * (int64_t) s32p_mtrx[4] * (int64_t) s32p_mtrx[8];
  s64_sumP += (int64_t) s32p_mtrx[1] * (int64_t) s32p_mtrx[5] * (int64_t) s32p_mtrx[6];
  s64_sumP += (int64_t) s32p_mtrx[2] * (int64_t) s32p_mtrx[3] * (int64_t) s32p_mtrx[7];

  s64_sumN = (int64_t) s32p_mtrx[0] * (int64_t) s32p_mtrx[5] * (int64_t) s32p_mtrx[7];
  s64_sumN += (int64_t) s32p_mtrx[1] * (int64_t) s32p_mtrx[3] * (int64_t) s32p_mtrx[8];
  s64_sumN += (int64_t) s32p_mtrx[2] * (int64_t) s32p_mtrx[4] * (int64_t) s32p_mtrx[6];

  s64_retVal = (int64_t) (s64_sumP - s64_sumN);
  return s64_retVal;
}

static void vFunc_GetCoefByCramersRule(int32_t *s32p_arrA,
                                       int32_t *s32p_arrB,
                                       curfitCoef_t *p_curfitCoef)
{
  int32_t s32_matrix[9];
  int64_t s64_detA, s64_detC0, s64_detC1, s64_detC2;
  int8_t s8_signC[3];
  uint8_t u8_lzc[3]; //to store smallest number of leading zero count for the determinant
  uint8_t u8_bsCnt; // The number of bit shift

  // Calculate for Matrix A determinant
  s64_detA = vFunc_GetMtrxDet3x3(s32p_arrA);

  // Calculate for Matrix C0 determinant
  memcpy(s32_matrix, s32p_arrA, sizeof(s32_matrix));

  s32_matrix[0] = s32p_arrB[0];
  s32_matrix[3] = s32p_arrB[1];
  s32_matrix[6] = s32p_arrB[2];
  s64_detC0 = vFunc_GetMtrxDet3x3(s32_matrix);

  // Calculate for Matrix C1 determinant
  memcpy(s32_matrix, s32p_arrA, sizeof(s32_matrix));
  s32_matrix[1] = s32p_arrB[0];
  s32_matrix[4] = s32p_arrB[1];
  s32_matrix[7] = s32p_arrB[2];
  s64_detC1 = vFunc_GetMtrxDet3x3(s32_matrix);

  // Calculate for Matrix C2 determinant
  memcpy(s32_matrix, s32p_arrA, sizeof(s32_matrix));
  s32_matrix[2] = s32p_arrB[0];
  s32_matrix[5] = s32p_arrB[1];
  s32_matrix[8] = s32p_arrB[2];
  s64_detC2 = vFunc_GetMtrxDet3x3(s32_matrix);

  // Keep Sign information
  s8_signC[0] = 1;
  s8_signC[1] = 1;
  s8_signC[2] = 1;
  if (s64_detC0 < 0)
  {
    s64_detC0 = s64_detC0 * -1;
    s8_signC[0] = -1;
  }

  if (s64_detC1 < 0)
  {
    s64_detC1 = s64_detC1 * -1;
    s8_signC[1] = -1;
  }

  if (s64_detC2 < 0)
  {
    s64_detC2 = s64_detC2 * -1;
    s8_signC[2] = -1;
  }

  // Scale
  u8_lzc[0] = __CLZ ((uint32_t) (s64_detC0 >> 32));
  u8_lzc[1] = __CLZ ((uint32_t) (s64_detC1 >> 32));
  u8_lzc[2] = __CLZ ((uint32_t) (s64_detC2 >> 32));

  u8_bsCnt = vFunc_GetMinVal(u8_lzc, 3) - 1; //minus 1 to avoid overflow to sign bit

  // Revert back the sign and scale up
  s64_detC0 = s8_signC[0] * (s64_detC0 << u8_bsCnt);
  s64_detC1 = s8_signC[1] * (s64_detC1 << u8_bsCnt);
  s64_detC2 = s8_signC[2] * (s64_detC2 << u8_bsCnt);

  p_curfitCoef->s64_c0 = s64_detC0 / s64_detA;
  p_curfitCoef->s64_c1 = s64_detC1 / s64_detA;
  p_curfitCoef->s64_c2 = s64_detC2 / s64_detA;
  p_curfitCoef->u8_scale = u8_bsCnt;
}

void vFunc_CurfitEstimation(int16_t *s16p_data, curfitCoef_t *p_curfitCoef, uint8_t u8_len, uint64_t u64_bitMap)
{
  uint32_t u32_x = 0;
  int32_t s32_arrA[9];
  int32_t s32_arrB[3];

  memset(s32_arrA, 0, sizeof(s32_arrA));
  memset(s32_arrB, 0, sizeof(s32_arrB));

  for (uint32_t u32_i = 0; u32_i < u8_len; u32_i++)
  {
    if (0 != (u64_bitMap & (uint64_t) (1) << u32_i))
    {
      // count of points (n)
      s32_arrA[0]++;

      // X
      u32_x = u32_i;

      // sum of x values.
      s32_arrA[1] += u32_x;
      s32_arrA[3] = s32_arrA[1];

      // sum of y values.
      s32_arrB[0] += (int32_t) s16p_data[u32_i];

      // sum of xy values.
      s32_arrB[1] += ((uint32_t) s16p_data[u32_i] * u32_x);

      // x^2
      u32_x = (u32_x * u32_i);

      // sum of x^2 values.
      s32_arrA[2] += u32_x;
      s32_arrA[4] = s32_arrA[2];
      s32_arrA[6] = s32_arrA[2];

      // sum of x2y values.
      s32_arrB[2] += (s16p_data[u32_i] * (int32_t) (u32_x));

      // x^3
      u32_x = u32_x * u32_i;

      // sum of x^3 values
      s32_arrA[5] += u32_x;
      s32_arrA[7] = s32_arrA[5];

      // x^4
      u32_x = u32_x * u32_i;

      // sum of x^4 values
      s32_arrA[8] += u32_x;
    }
  }

  vFunc_GetCoefByCramersRule(s32_arrA, s32_arrB, p_curfitCoef);
}

void vFunc_GetCurveFitLine(int16_t *s16p_dest, curfitCoef_t *p_curfitCoef, uint8_t u8_len)
{
  int64_t s64_temp;

  for (int32_t u32_i = u8_len; u32_i--;)
  {
    s64_temp = p_curfitCoef->s64_c0 + (p_curfitCoef->s64_c1 * u32_i) + (p_curfitCoef->s64_c2 * u32_i * u32_i);
    s16p_dest[u32_i] = (int16_t) (s64_temp >> p_curfitCoef->u8_scale);
  }
}

