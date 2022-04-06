/*
 * processor.h
 *
 *  Created on: Feb 24, 2022
 *      Author: pujak
 */

#ifndef SRC_PROCESSOR_PROCESSOR_H_
#define SRC_PROCESSOR_PROCESSOR_H_

#include "stm32f4xx_hal.h"
#include "arm_math.h"
#include "interpolator.h"

#define SECTION_CNT (8)

/* Public types */
enum ThresholdType {
  THRES_RECONSTRUCTED,
  THRES_CURVEFIT1,
  THRES_CURVEFIT2,
  THRES_CNT,
};

struct Processor {
  float32_t thres[THRES_CNT];
  uint64_t bitmap[TX_SZ];
  /* Matrix: TX x RX */
  float32_t *rawdata;
  float32_t *diff_baseline;
  float32_t *diff_strength;
  float32_t *integrated;
  float32_t *average[3];
  float32_t *reconstructed;
  float32_t *curvefit[3];
  float32_t *filtered;
  /* Speed up using transpose algorithm */
#ifdef USE_TRANSPOSE_ALGO
  float32_t *transpose[3];
#endif
  /* Profiler */
  uint32_t counter[SECTION_CNT];
  uint32_t duration[SECTION_CNT];
};

/* Public function declarations */
HAL_StatusTypeDef PROC_Init(struct Processor *p);
void PROC_DeInit(struct Processor *p);
void PROC_SetData(struct Processor *p, const float32_t *rawData, const float32_t *baseline);
void PROC_DifferentialStrength(struct Processor *p);
void PROC_Integrated(struct Processor *p);
void PROC_Average(struct Processor *p);
void PROC_Reconstructed(struct Processor *p);
void PROC_CurveCompare(struct Processor *p);
void PROC_CurveFinal(struct Processor *p);
void PROC_Filtered(struct Processor *p);
void PROC_Profiler(struct Processor *p);
void PROC_SetThreshold(struct Processor *p,
                       float32_t reconstructed,
                       float32_t curvefit1,
                       float32_t curvefit2);

#endif /* SRC_PROCESSOR_PROCESSOR_H_ */
