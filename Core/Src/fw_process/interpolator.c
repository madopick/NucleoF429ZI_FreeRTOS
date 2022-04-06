/*
 * interpolator.c
 *
 *  Created on: Feb 25, 2022
 *      Author: pujak
 */
#include "interpolator.h"

/* Private function declarations */
static float32_t _GetDeterminant3x3(float32_t mat[3][3]);
static void _GetIntermediateMatrix(uint8_t len,
                                   float32_t X[RX_SZ],
                                   float32_t Y[RX_SZ],
                                   float32_t A[COEFF_CNT][COEFF_CNT],
                                   float32_t B[COEFF_CNT]);

/* Public function definitions */
/**
 * @brief Get coefficient from known x & y values using transpose & inverse algorithm
 * @param len Length of known values
 * @param[in] kx Vector to known x values
 * @param[in] ky Vector to known x values
 * @param[out] coeff Vector to the calculated coefficients
 * @return HAL status
 */
HAL_StatusTypeDef IPOL_GetCoeff(uint8_t len,
                                float32_t kx[RX_SZ],
                                float32_t ky[RX_SZ],
                                float32_t coeff[COEFF_CNT])
{
  uint8_t err = 0;
  /* Allocate (1D) array in stack */
  float32_t X[len][COEFF_CNT];
  float32_t XT[COEFF_CNT][len];
  float32_t XTX[COEFF_CNT][COEFF_CNT];
  float32_t XTXI[COEFF_CNT][COEFF_CNT];
  float32_t XTXIXT[COEFF_CNT][len];

  arm_matrix_instance_f32 x;
  arm_matrix_instance_f32 xt;
  arm_matrix_instance_f32 xtx;
  arm_matrix_instance_f32 xtxi;
  arm_matrix_instance_f32 xtxixt;

  arm_mat_init_f32(&x, len, COEFF_CNT, (float32_t*) X);
  arm_mat_init_f32(&xt, COEFF_CNT, len, (float32_t*) XT);
  arm_mat_init_f32(&xtx, COEFF_CNT, COEFF_CNT, (float32_t*) XTX);
  arm_mat_init_f32(&xtxi, COEFF_CNT, COEFF_CNT, (float32_t*) XTXI);
  arm_mat_init_f32(&xtxixt, COEFF_CNT, len, (float32_t*) XTXIXT);

#ifndef USE_TRANSPOSE_ALGO
  for (uint8_t i = 0; i < len; i++) {
    X[i][0] = kx[i] * kx[i];
    X[i][1] = kx[i];
    X[i][2] = 1;
  }

  err += arm_mat_trans_f32(&x, &xt) < 0;
#else
  arm_fill_f32(1.0f, (float32_t*) &XT[2], len);
  arm_copy_f32(kx, (float32_t*) &XT[1], len);
  arm_mult_f32(kx, kx, (float32_t*) &XT[0], len);

  err += arm_mat_trans_f32(&xt, &x) < 0;
#endif

  err += arm_mat_mult_f32(&xt, &x, &xtx) < 0;
  err += arm_mat_inverse_f32(&xtx, &xtxi) < 0;
  err += arm_mat_mult_f32(&xtxi, &xt, &xtxixt) < 0;

  for (uint8_t c = 0; c < COEFF_CNT; c++)
    arm_dot_prod_f32((float32_t*) &XTXIXT[c], (float32_t*) ky, len, (float32_t*) &coeff[COEFF_CNT - 1 - c]);

  return (err ? HAL_ERROR : HAL_OK);
}

/**
 * @brief Get coefficient from known x & y values using alternative 1 (inverse) algorithm
 * @param len Length of known values
 * @param[in] kx Vector to known x values
 * @param[in] ky Vector to known x values
 * @param[out] coeff Vector to the calculated coefficients
 * @return HAL status
 */
HAL_StatusTypeDef IPOL_GetCoeffAlt1(uint8_t len,
                                    float32_t kx[RX_SZ],
                                    float32_t ky[RX_SZ],
                                    float32_t coeff[COEFF_CNT])
{
  /* Allocate (1D) array in stack */
  float32_t AI[COEFF_CNT][COEFF_CNT];
  float32_t A[COEFF_CNT][COEFF_CNT];
  float32_t B[COEFF_CNT] = { 0 };

  arm_matrix_instance_f32 ai;
  arm_matrix_instance_f32 a;
  arm_matrix_instance_f32 c;

  arm_mat_init_f32(&ai, COEFF_CNT, COEFF_CNT, (float32_t*) AI);
  arm_mat_init_f32(&a, COEFF_CNT, COEFF_CNT, (float32_t*) A);
  arm_mat_init_f32(&c, 1, COEFF_CNT, (float32_t*) coeff);

  _GetIntermediateMatrix(len, kx, ky, A, B);

  arm_mat_inverse_f32(&a, &ai);

  for (uint8_t i = 0; i < COEFF_CNT; i++)
    arm_dot_prod_f32((float32_t*) &AI[i], B, COEFF_CNT, &c.pData[i]);

  return (HAL_OK);
}

/**
 * @brief Get coefficient from known x & y values using alternative 2 (cramel) algorithm
 * @param len Length of known values
 * @param[in] kx Vector to known x values
 * @param[in] ky Vector to known x values
 * @param[out] coeff Vector to the calculated coefficients
 * @return HAL status
 */
HAL_StatusTypeDef IPOL_GetCoeffAlt2(uint8_t len,
                                    float32_t kx[RX_SZ],
                                    float32_t ky[RX_SZ],
                                    float32_t coeff[COEFF_CNT])
{
  /* Allocate (1D) array in stack */
  float32_t A[COEFF_CNT][COEFF_CNT];
  float32_t C[COEFF_CNT][COEFF_CNT];
  float32_t B[COEFF_CNT] = { 0 };
  float32_t detA;

  _GetIntermediateMatrix(len, kx, ky, A, B);
  detA = _GetDeterminant3x3(A);

  for (uint8_t i = 0; i < COEFF_CNT; i++) {
    arm_copy_f32((float32_t*) A, (float32_t*) C, COEFF_CNT * COEFF_CNT);
    arm_copy_f32(B, C[i], COEFF_CNT);
    coeff[i] = _GetDeterminant3x3(C) / detA;
  }

  return (HAL_OK);
}

/**
 * @brief Estimate y values by x value
 * @param x The x value to find
 * @param[in] coeff Vector to the calculated coefficients
 * @return The y value
 */
float32_t IPOL_Estimate(uint8_t x, float32_t *coeff)
{
  return (coeff[COEFF_2] * x * x + coeff[COEFF_1] * x + coeff[COEFF_0]);
}

/* Private function definitions */
/**
 * @brief Calculate matrix 3x3 determinant value
 * @param[in] mat Pointer to 3x3 matrix
 * @return Determinant value
 */
static float32_t _GetDeterminant3x3(float32_t mat[3][3])
{
  float32_t det;

  /* @formatter:off */
  det = ((mat[0][0] * mat[1][1] * mat[2][2]) + (mat[0][1] * mat[1][2] * mat[2][0]) + (mat[0][2] * mat[1][0] * mat[2][1])) -
        ((mat[0][2] * mat[1][1] * mat[2][0]) + (mat[0][0] * mat[1][2] * mat[2][1]) + (mat[0][1] * mat[1][0] * mat[2][2]));
                                                                                                                                                                                                                                                                                                                                                                /* @formatter:on */

  return (det);
}

/**
 * @brief Get intermediate matrix of A[3][3] and B[3]
 * @param len Length of known values
 * @param[in] X Vector to known x values
 * @param[in] Y Vector to known x values
 * @param[out] A Pointer to matrix A[3][3]
 * @param[out] B Pointer to matrix B[3]
 */
static void _GetIntermediateMatrix(uint8_t len,
                                   float32_t X[RX_SZ],
                                   float32_t Y[RX_SZ],
                                   float32_t A[COEFF_CNT][COEFF_CNT],
                                   float32_t B[COEFF_CNT])
{
  /* Allocate (1D) array in stack */
  float32_t X2[len];
  float32_t X3[len];
  float32_t X4[len];
  float32_t XY[len];
  float32_t X2Y[len];
  float32_t sum[4] = { 0 };

  arm_mult_f32(X, X, X2, len);
  arm_mult_f32(X2, X, X3, len);
  arm_mult_f32(X3, X, X4, len);
  arm_mult_f32(X, Y, XY, len);
  arm_mult_f32(X2, Y, X2Y, len);

  for (uint8_t i = 0; i < len; i++) {
    sum[0] += X[i];
    sum[1] += X2[i];
    sum[2] += X3[i];
    sum[3] += X4[i];
    B[0] += Y[i];
    B[1] += XY[i];
    B[2] += X2Y[i];
  }

  A[0][0] = len;
  A[0][1] = sum[0];
  A[0][2] = sum[1];
  A[1][0] = sum[0];
  A[1][1] = sum[1];
  A[1][2] = sum[2];
  A[2][0] = sum[1];
  A[2][1] = sum[2];
  A[2][2] = sum[3];
}
