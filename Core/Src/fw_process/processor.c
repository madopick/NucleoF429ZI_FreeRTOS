/*
 * processor.c
 *
 *  Created on: Feb 24, 2022
 *      Author: pujak
 */

#include "processor.h"
#include "measure.h"
#include "dwt_counter.h"
#include <stdlib.h>
#include "main.h"
#include "fw_data.h"
#include "math_helper.h"

/* Private function declarations */
static uint8_t compact_array(struct Processor *p, uint8_t tx, float32_t *kx, float32_t *ky);
static void print_array_f32(float *pData, uint8_t u8_numRows, uint8_t u8_numCols);
static float get_duration_ms(struct Processor *p);

/* Public function definitions */

/**************************************************
 * @brief 	Initialize Processor instance
 * @param 	p Pointer to Processor instance
 * @return 	HAL Status
 *************************************************/
HAL_StatusTypeDef PROC_Init(struct Processor *p)
{
  float32_t *ptr;

  /* Initialize matrix */
  do
  {
    if ((ptr = calloc(TR_SZ, sizeof(float32_t))) == NULL)
      break;
    p->diff_strength = ptr;

    if ((ptr = calloc(TR_SZ, sizeof(float32_t))) == NULL)
      break;
    p->integrated = ptr;

    if ((ptr = calloc(TR_SZ, sizeof(float32_t))) == NULL)
      break;
    p->average[0] = ptr;

    if ((ptr = calloc(TR_SZ, sizeof(float32_t))) == NULL)
      break;
    p->average[1] = ptr;

    if ((ptr = calloc(TR_SZ, sizeof(float32_t))) == NULL)
      break;
    p->average[2] = ptr;

    if ((ptr = calloc(TR_SZ, sizeof(float32_t))) == NULL)
      break;
    p->reconstructed = ptr;

    if ((ptr = calloc(TR_SZ, sizeof(float32_t))) == NULL)
      break;
    p->curvefit[0] = ptr;

    if ((ptr = calloc(TR_SZ, sizeof(float32_t))) == NULL)
      break;
    p->curvefit[1] = ptr;

    if ((ptr = calloc(TR_SZ, sizeof(float32_t))) == NULL)
      break;
    p->curvefit[2] = ptr;

    if ((ptr = calloc(TR_SZ, sizeof(float32_t))) == NULL)
      break;
    p->filtered = ptr;

#ifdef USE_TRANSPOSE_ALGO
    if ((ptr = calloc(TR_SZ, sizeof(float32_t))) == NULL)
      break;
    p->transpose[0] = ptr;

    if ((ptr = calloc(TR_SZ, sizeof(float32_t))) == NULL)
      break;
    p->transpose[1] = ptr;

    if ((ptr = calloc(TR_SZ, sizeof(float32_t))) == NULL)
      break;
    p->transpose[2] = ptr;
#endif

    /* Set default */
    PROC_SetThreshold(p, 200, 50, 50);
    PROC_SetData(p, (float32_t*) RAWDATA, (float32_t*) DIFF_BASELINE);

    return (HAL_OK);
  } while (0);

  /* De-allocate */
  PROC_DeInit(p);
  return (HAL_ERROR);
}


/**************************************************
 * @brief 	De-Initilaize Processor instance
 * @param 	p Pointer to Processor instance
 *************************************************/
void PROC_DeInit(struct Processor *p)
{
#ifdef USE_TRANSPOSE_ALGO
  free(p->transpose[2]);
  free(p->transpose[1]);
  free(p->transpose[0]);
#endif

  free(p->filtered);
  free(p->curvefit[2]);
  free(p->curvefit[1]);
  free(p->curvefit[0]);
  free(p->reconstructed);
  free(p->average[2]);
  free(p->average[1]);
  free(p->average[0]);
  free(p->integrated);
  free(p->diff_strength);
  free(p->diff_baseline);
}


/*******************************************************************
 * @brief Set Threshold for Reconstructed, CurveFit 1 and 2 step
 * @param p Pointer to Processor instance
 * @param reconstructed Threshold for reconstructed
 * @param curvefit1 Threshold for curve fit 1
 * @param curvefit2 Threshold for curve fit 2
 *******************************************************************/
void PROC_SetThreshold(struct Processor *p,
                       float32_t reconstructed,
                       float32_t curvefit1,
                       float32_t curvefit2)
{
  p->thres[THRES_RECONSTRUCTED] = reconstructed;
  p->thres[THRES_CURVEFIT1] = curvefit1;
  p->thres[THRES_CURVEFIT2] = curvefit2;
}


/*****************************************************************
 * @brief Set Raw Data to be processed
 * @param p Pointer to Processor instance
 * @param rawData Pointer to raw data buffer
 * @param baseline Pointer to differential baseline buffer
 *****************************************************************/
void PROC_SetData(struct Processor *p, const float32_t *rawData, const float32_t *baseline)
{
  p->rawdata = (float32_t*) rawData;
  p->diff_baseline = (float32_t*) baseline;

  p->counter[0] = DWT_GetCounter();
}

/***************************************************************
 * @brief Process Differential Strength section
 * @param p Pointer to Processor instance
 ***************************************************************/
void PROC_DifferentialStrength(struct Processor *p)
{
  arm_sub_f32(p->diff_baseline, p->rawdata, p->diff_strength, TR_SZ);

  p->counter[1] = DWT_GetCounter();
}


/**************************************************
 * @brief Process Integrated section
 * @param p Pointer to Processor instance
 *************************************************/
void PROC_Integrated(struct Processor *p)
{
#ifndef USE_TRANSPOSE_ALGO
  float32_t (*itg)[RX_SZ] = (float32_t (*)[RX_SZ]) p->integrated;
  float32_t (*dfs)[RX_SZ] = (float32_t (*)[RX_SZ]) p->diff_strength;

  for (uint8_t tx = 0; tx < TX_SZ; tx++)
  {
    for (uint8_t rx = 0; rx < RX_SZ; rx++)
    {
      if (rx == 0)
        itg[tx][rx] = 0;
      else
        itg[tx][rx] = dfs[tx][rx] + itg[tx][rx - 1];
    }
  }
#else
  float32_t (*tr0)[TX_SZ] = (float32_t (*)[TX_SZ]) p->transpose[0];
  float32_t (*tr1)[TX_SZ] = (float32_t (*)[TX_SZ]) p->transpose[1];
  arm_matrix_instance_f32 diff_strength;
  arm_matrix_instance_f32 integrated;
  arm_matrix_instance_f32 transpose[2];

  /* Setup the matrix */
  arm_mat_init_f32(&diff_strength, TX_SZ, RX_SZ, p->diff_strength);
  arm_mat_init_f32(&integrated, TX_SZ, RX_SZ, p->integrated);
  arm_mat_init_f32(&transpose[0], RX_SZ, TX_SZ, p->transpose[0]);
  arm_mat_init_f32(&transpose[1], RX_SZ, TX_SZ, p->transpose[1]);

  /* Do in transpose form */
  arm_mat_trans_f32(&diff_strength, &transpose[0]);
  arm_mat_trans_f32(&integrated, &transpose[1]);
  for (uint8_t rx = 0; rx < RX_SZ; rx++)
  {
    if (rx == 0)
      arm_fill_f32(0.0f, (float32_t*) &tr1[rx], TX_SZ);
    else
      arm_add_f32((float32_t*) &tr1[rx - 1], (float32_t*) &tr0[rx], (float32_t*) &tr1[rx], TX_SZ);
  }
  arm_mat_trans_f32(&transpose[1], &integrated);
#endif

  p->counter[2] = DWT_GetCounter();

  //print_array_f32(p->integrated, TX_SZ, RX_SZ);
}


/**************************************************
 * @brief Process Average section
 * @param p Pointer to Processor instance
 *************************************************/
void PROC_Average(struct Processor *p)
{
  float32_t (*itg)[RX_SZ] = (float32_t (*)[RX_SZ]) p->integrated;
  float32_t (*ave1)[RX_SZ] = (float32_t (*)[RX_SZ]) p->average[1];
  float32_t (*ave2)[RX_SZ] = (float32_t (*)[RX_SZ]) p->average[2];

  for (uint8_t tx = 0; tx < TX_SZ; tx++)
  {
    for (uint8_t rx = 0; rx < RX_SZ; rx++)
    {
      /* Average-1 */
      arm_mean_f32(&itg[tx][0], rx + 1, &ave1[tx][rx]);
      /* Average-2 */
      arm_mean_f32(&itg[tx][rx], RX_SZ - rx, &ave2[tx][rx]);
    }
  }
  arm_add_f32(p->average[1], p->average[2], p->average[0], TR_SZ);
  arm_scale_f32(p->average[0], 0.5f, p->average[0], TR_SZ);

  p->counter[3] = DWT_GetCounter();
}


/**************************************************
 * @brief Process Reconstructed section
 * @param p Pointer to Processor instance
 *************************************************/
void PROC_Reconstructed(struct Processor *p)
{
  arm_sub_f32(p->integrated, p->average[0], p->reconstructed, TR_SZ);

  p->counter[4] = DWT_GetCounter();

  //print_array_f32(p->reconstructed, TX_SZ, RX_SZ);
}


/**************************************************
 * @brief Process Curve Compare section
 * @param p Pointer to Processor instance
 *************************************************/
void PROC_CurveCompare(struct Processor *p)
{
  float32_t (*cf1)[RX_SZ] = (float32_t (*)[RX_SZ]) p->curvefit[1];
  float32_t (*cf2)[RX_SZ] = (float32_t (*)[RX_SZ]) p->curvefit[2];
  float32_t rec_abs[TX_SZ][RX_SZ];
  uint8_t deny;

#ifndef USE_TRANSPOSE_ALGO
  float32_t (*rec)[RX_SZ] = (float32_t (*)[RX_SZ]) p->reconstructed;

  for (uint8_t tx = 0; tx < TX_SZ; tx++)
  {
    for (uint8_t rx = 0; rx < RX_SZ; rx++)
    {
      /* Curve Fit-1 */
      if (rx == RX_SZ - 1)
        cf1[tx][rx] = 0;
      else
        cf1[tx][rx] = rec[tx][rx + 1] - rec[tx][rx];
      /* Curve Fit-2 */
      if (rx == 0)
        cf2[tx][rx] = 0;
      else
        cf2[tx][rx] = cf1[tx][rx - 1];
    }
  }
#else
  float32_t (*tr0)[TX_SZ] = (float32_t (*)[TX_SZ]) p->transpose[0];
  float32_t (*tr1)[TX_SZ] = (float32_t (*)[TX_SZ]) p->transpose[1];
  float32_t (*tr2)[TX_SZ] = (float32_t (*)[TX_SZ]) p->transpose[2];
  arm_matrix_instance_f32 reconstructed;
  arm_matrix_instance_f32 curvefit[3];
  arm_matrix_instance_f32 transpose[3];

  /* Setup the matrix */
  arm_mat_init_f32(&reconstructed, TX_SZ, RX_SZ, p->reconstructed);
  arm_mat_init_f32(&curvefit[1], TX_SZ, RX_SZ, p->curvefit[1]);
  arm_mat_init_f32(&curvefit[2], TX_SZ, RX_SZ, p->curvefit[2]);
  arm_mat_init_f32(&transpose[0], RX_SZ, TX_SZ, p->transpose[0]);
  arm_mat_init_f32(&transpose[1], RX_SZ, TX_SZ, p->transpose[1]);
  arm_mat_init_f32(&transpose[2], RX_SZ, TX_SZ, p->transpose[2]);

  /* Do in transpose form */
  arm_mat_trans_f32(&reconstructed, &transpose[0]);
  for (uint8_t rx = 0; rx < RX_SZ; rx++)
  {
    /* Curve Fit-1 */
    if (rx == RX_SZ - 1)
      arm_fill_f32(0.0f, (float32_t*) &tr1[rx], TX_SZ);
    else
      arm_sub_f32((float32_t*) &tr0[rx + 1], (float32_t*) &tr0[rx], (float32_t*) &tr1[rx], TX_SZ);
    /* Curve Fit-2 */
    if (rx == 0)
      arm_fill_f32(0.0f, (float32_t*) &tr2[rx], TX_SZ);
    else
      arm_copy_f32((float32_t*) &tr1[rx - 1], (float32_t*) &tr2[rx], TX_SZ);
  }
  arm_mat_trans_f32(&transpose[1], &curvefit[1]);
  arm_mat_trans_f32(&transpose[2], &curvefit[2]);
#endif

  /* Absolute matrix */
  arm_abs_f32(p->reconstructed, (float32_t*) rec_abs, TR_SZ);
  arm_abs_f32(p->curvefit[1], p->curvefit[1], TR_SZ);
  arm_abs_f32(p->curvefit[2], p->curvefit[2], TR_SZ);

  /* Curve Compare */
  for (uint8_t tx = 0; tx < TX_SZ; tx++)
  {
    for (uint8_t rx = 0; rx < RX_SZ; rx++)
    {
      deny = 0;
      deny |= rec_abs[tx][rx] > p->thres[THRES_RECONSTRUCTED];
      deny |= cf1[tx][rx] > p->thres[THRES_CURVEFIT1];
      deny |= cf2[tx][rx] > p->thres[THRES_CURVEFIT2];

      p->bitmap[tx] |= (!deny) << rx;
    }
  }

  p->counter[5] = DWT_GetCounter();
}


/**************************************************
 * @brief Process Curve Final section
 * @param p Pointer to Processor instance
 *************************************************/
void PROC_CurveFinal(struct Processor *p)
{
  float32_t (*cf)[RX_SZ] = (float32_t (*)[RX_SZ]) p->curvefit[0];
  uint8_t len;
  /* Allocate (1D) array in stack */
  float32_t coeff[COEFF_CNT];
  float32_t ky[RX_SZ];
  float32_t kx[RX_SZ];

  for (uint8_t tx = 0; tx < TX_SZ; tx++)
  {
    /* Stack known values */
    len = compact_array(p, tx, kx, ky);
    if (len == 0)
      continue;

    /* Find coefficient */
    IPOL_GetCoeffAlt2(len, kx, ky, coeff);

    printf("C: %.3f ,B: %.3f, A: %.3f\r\n",coeff[0],coeff[1],coeff[2]);

    /* Interpolate */
    for (uint8_t rx = 0; rx < RX_SZ; rx++)
      cf[tx][rx] = IPOL_Estimate(rx, coeff);
  }

  p->counter[6] = DWT_GetCounter();
}


/**************************************************
 * @brief Process Filtered section
 * @param p Pointer to Processor instance
 *************************************************/
void PROC_Filtered(struct Processor *p)
{
  arm_sub_f32(p->reconstructed, p->curvefit[0], p->filtered, TR_SZ);

  p->counter[7] = DWT_GetCounter();
}


/**************************************************
 * @brief Profiling the algorithm result
 * @param p Pointer to Processor instance
 *************************************************/
void PROC_Profiler(struct Processor *p)
{
  volatile float f32_duration;
  volatile float f32_snr;
  volatile float f32_mse;
  volatile float f32_rmse;
  volatile float f32_mae;
  volatile float f32_r2;
  float *pRef, *pTest;

  /* Count section duration */
  f32_duration = get_duration_ms(p);

  /* Calculate metrics */
  pRef = (float32_t*) FILTERED_REF;
  pTest = p->filtered;

  f32_snr = arm_snr_f32(pRef, pTest, TR_SZ);
  f32_mae = arm_mae_f32(pRef, pTest, TR_SZ);
  f32_mse = arm_mse_f32(pRef, pTest, TR_SZ);
  f32_rmse = arm_rmse_f32(pRef, pTest, TR_SZ);
  f32_r2 = arm_rsquare_f32(pRef, pTest, TR_SZ);

  /* Print to stdout */
  printf("\r\n\nFrame Duration:\t %.2f ms\r\n", f32_duration);
  printf("Frame SNR:\t %.6f dB\r\n", f32_snr);
  printf("Frame MAE:\t %.6f \r\n", f32_mae);
  printf("Frame MSE:\t %.6f \r\n", f32_mse);
  printf("Frame RMSE:\t %.6f \r\n", f32_rmse);
  printf("Frame R-Square:\t %.6f \r\n\n\n", f32_r2);
  print_array_f32(pTest, TX_SZ, RX_SZ);

  //__BKPT(0);
}


/* Private function definitions */
/***************************************************************
 * @brief 		Get known values from curve compare result
 * @param 		p Pointer to Processor instance
 * @param 		tx Current tx index
 * @param[out] 	kx Vector to known x values
 * @param[out] 	ky Vector to known y values
 * @return 		Length of known values
 ***************************************************************/
static uint8_t compact_array(struct Processor *p, uint8_t tx, float32_t *kx, float32_t *ky)
{
  float32_t (*rec)[RX_SZ] = (float32_t (*)[RX_SZ]) p->reconstructed;
  uint8_t len = 0;

  for (uint8_t rx = 0; rx < RX_SZ; rx++)
  {
    if (0 != (p->bitmap[tx] & (uint64_t) (1) << rx))
    {
      kx[len] = rx;
      ky[len] = rec[tx][rx];
      len++;
    }
  }

  return (len);
}


static void print_array_f32(float *pData, uint8_t u8_numRows, uint8_t u8_numCols)
{
  float (*data)[u8_numCols] = (float (*)[u8_numCols]) pData;

  for (uint16_t r = 0; r < u8_numRows; r++)
  {
    for (uint16_t c = 0; c < u8_numCols; c++)
      printf("%.2f, ", data[r][c]);
    printf("\r\n");
  }
  printf("\r\n");
}


static float get_duration_ms(struct Processor *p)
{
  uint32_t u32_duration = 0;
  float f32_ms;

  for (uint8_t u8_i = 1; u8_i < SECTION_CNT; u8_i++)
  {
    p->duration[u8_i] = p->counter[u8_i] - p->counter[u8_i - 1];
    u32_duration += p->duration[u8_i];
  }

  f32_ms = (float) u32_duration * 1000.0f / HAL_RCC_GetHCLKFreq();

  return (f32_ms);
}

