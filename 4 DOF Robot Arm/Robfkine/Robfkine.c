/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Robfkine.c
 *
 * Code generation for function 'Robfkine'
 *
 */

/* Include files */
#include <math.h>
#include "Robfkine.h"

/* Function Definitions */
void Robfkine(double th1, double th2, double th3, double output[3])
{
  double output_tmp;
  double b_output_tmp;
  double c_output_tmp;
  double d_output_tmp;
  output_tmp = th1 + th2;
  b_output_tmp = th1 - th2;
  c_output_tmp = output_tmp + th3;
  d_output_tmp = (th2 - th1) + th3;
  output[0] = ((68.0 * cos(b_output_tmp) + 124.0 * cos(c_output_tmp)) + 124.0 *
               cos(d_output_tmp)) + 68.0 * cos(output_tmp);
  output[1] = ((68.0 * sin(b_output_tmp) + 124.0 * sin(c_output_tmp)) - 124.0 *
               sin(d_output_tmp)) + 68.0 * sin(output_tmp);
  output[2] = (248.0 * sin(th2 + th3) + 136.0 * sin(th2)) + 93.6;
}

/* End of code generation (Robfkine.c) */
