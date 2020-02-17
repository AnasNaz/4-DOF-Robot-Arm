/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Robikine_api.h
 *
 * Code generation for function '_coder_Robikine_api'
 *
 */

#ifndef _CODER_ROBIKINE_API_H
#define _CODER_ROBIKINE_API_H

/* Include files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_Robikine_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void Robikine(real_T tx, real_T ty, real_T tz, real_T output[3]);
extern void Robikine_api(const mxArray * const prhs[3], int32_T nlhs, const
  mxArray *plhs[1]);
extern void Robikine_atexit(void);
extern void Robikine_initialize(void);
extern void Robikine_terminate(void);
extern void Robikine_xil_terminate(void);

#endif

/* End of code generation (_coder_Robikine_api.h) */
