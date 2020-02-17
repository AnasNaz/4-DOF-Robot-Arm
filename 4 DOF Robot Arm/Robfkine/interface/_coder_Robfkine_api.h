/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Robfkine_api.h
 *
 * Code generation for function '_coder_Robfkine_api'
 *
 */

#ifndef _CODER_ROBFKINE_API_H
#define _CODER_ROBFKINE_API_H

/* Include files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_Robfkine_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void Robfkine(real_T th1, real_T th2, real_T th3, real_T output[3]);
extern void Robfkine_api(const mxArray * const prhs[3], int32_T nlhs, const
  mxArray *plhs[1]);
extern void Robfkine_atexit(void);
extern void Robfkine_initialize(void);
extern void Robfkine_terminate(void);
extern void Robfkine_xil_terminate(void);

#endif

/* End of code generation (_coder_Robfkine_api.h) */
