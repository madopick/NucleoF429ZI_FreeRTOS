/*
 * measure.c
 *
 *  Created on: Apr 1, 2022
 *      Author: pudja
 */

#include "measure.h"
#include <math.h>

/* Private macro */
#define IS_NAN(__X__) (((*(int*) (__X__)) == 0x7FC00000))

/**
 * @brief Calculate Signal to Noise Ratio (SNR) of two array
 * @param pRef Pointer to reference buffer
 * @param pTest Pointer to test buffer
 * @param len Length of the buffer
 * @return SNR value (in dB)
 */
float arm_snr_f32(float *pRef, float *pTest, uint32_t len)
{
  float EnergySignal = 0.0;
  float EnergyError = 0.0;
  float SNR;

  for (uint32_t i = 0; i < len; i++)
  {
    /* Checking for a NAN value in pRef array */
    if (IS_NAN(&pRef[i]))
      return (0);

    /* Checking for a NAN value in pTest array */
    if (IS_NAN(&pTest[i]))
      return (0);

    /* Sum of Energy Signal & Errors */
    EnergySignal += pRef[i] * pRef[i];
    EnergyError += (pRef[i] - pTest[i]) * (pRef[i] - pTest[i]);
  }

  /* Checking for a NAN value in EnergyError */
  if (IS_NAN(&EnergyError))
    return (0);

  /* Convert to dB */
  SNR = 10 * log10(EnergySignal / EnergyError);

  return (SNR);
}

/**
 * @brief Calculate Mean Square Error (MSE) of two array
 * @param pRef Pointer to reference buffer
 * @param pTest Pointer to test buffer
 * @param len Length of the buffer
 * @return MSE value
 */
float arm_mse_f32(float *pRef, float *pTest, uint32_t len)
{
  float EnergyError = 0.0;
  float MSE;

  for (uint32_t i = 0; i < len; i++)
  {
    /* Checking for a NAN value in pRef array */
    if (IS_NAN(&pRef[i]))
      return (0);

    /* Checking for a NAN value in pTest array */
    if (IS_NAN(&pTest[i]))
      return (0);

    /* Sum of square errors */
    EnergyError += (pRef[i] - pTest[i]) * (pRef[i] - pTest[i]);
  }

  /* Checking for a NAN value in EnergyError */
  if (IS_NAN(&EnergyError))
    return (0);

  /* Average the errors */
  MSE = EnergyError / len;

  return (MSE);

}

/**
 * @brief Calculate Root Mean Square Error (RMSE) of two array
 * @param pRef Pointer to reference buffer
 * @param pTest Pointer to test buffer
 * @param len Length of the buffer
 * @return RMSE value
 */
float arm_rmse_f32(float *pRef, float *pTest, uint32_t len)
{
  float MSE, RMSE;

  /* Calculate MSE */
  MSE = arm_mse_f32(pRef, pTest, len);

  /* Checking for a NAN value */
  if (IS_NAN(&MSE))
    return (0);

  /* Square root */
  RMSE = sqrtf(MSE);

  return (RMSE);

}

/**
 * @brief Calculate Mean Absolute Error (MAE) of two array
 * @param pRef Pointer to reference buffer
 * @param pTest Pointer to test buffer
 * @param len Length of the buffer
 * @return MAE value
 */
float arm_mae_f32(float *pRef, float *pTest, uint32_t len)
{
  float EnergyError = 0.0;
  float MAE;

  for (uint32_t i = 0; i < len; i++)
  {
    /* Checking for a NAN value in pRef array */
    if (IS_NAN(&pRef[i]))
      return (0);

    /* Checking for a NAN value in pTest array */
    if (IS_NAN(&pTest[i]))
      return (0);

    /* Sum of absolute errors */
    EnergyError += fabsf(pRef[i] - pTest[i]);
  }

  /* Checking for a NAN value in EnergyError */
  if (IS_NAN(&EnergyError))
    return (0);

  /* Average the errors */
  MAE = EnergyError / len;

  return (MAE);

}

/**
 * @brief Calculate R-Square (R2) or Coefficient Determination of two array
 * @param pRef Pointer to reference buffer
 * @param pTest Pointer to test buffer
 * @param len Length of the buffer
 * @return R-Square value
 */
float arm_rsquare_f32(float *pRef, float *pTest, uint32_t len)
{
  float RSS = 0.0;
  float TSS = 0.0;
  float mean = 0.0;
  float R2;

  /* Find reference signal mean */
  for (uint32_t i = 0; i < len; i++)
  {
    mean += pRef[i];
  }
  mean /= len;

  for (uint32_t i = 0; i < len; i++)
  {
    /* Checking for a NAN value in pRef array */
    if (IS_NAN(&pRef[i]))
      return (0);

    /* Checking for a NAN value in pTest array */
    if (IS_NAN(&pTest[i]))
      return (0);

    /* Sum of squares */
    RSS += (pRef[i] - pTest[i]) * (pRef[i] - pTest[i]);
    TSS += (pRef[i] - mean) * (pRef[i] - mean);
  }

  /* Checking for a NAN value in Sum of Squares of Residuals */
  if (IS_NAN(&RSS))
    return (0);

  /* Checking for a NAN value in Total Sum of Squares */
  if (IS_NAN(&TSS))
    return (0);

  /* Calculate R-Square */
  R2 = 1.0f - (RSS / TSS);

  return (R2);
}
