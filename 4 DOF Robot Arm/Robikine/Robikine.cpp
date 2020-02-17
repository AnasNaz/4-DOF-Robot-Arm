/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Robikine.cpp
 *
 * Code generation for function 'Robikine'
 *
 */

/* Include files */
#include <math.h>
//#include "rt_defines.h"
//#include "rt_nonfinite.h"
//#include <cmath>
#include "Robikine.h"

/* Function Declarations */
static double rt_atan2d_snf(double u0, double u1);
static double rt_hypotd_snf(double u0, double u1);
static double rt_powd_snf(double u0, double u1);

/* Function Definitions */
static double rt_atan2d_snf(double u0, double u1)
{
  double y;
  int b_u0;
  int b_u1;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      b_u0 = 1;
    } else {
      b_u0 = -1;
    }

    if (u1 > 0.0) {
      b_u1 = 1;
    } else {
      b_u1 = -1;
    }

    y = atan2((double)b_u0, (double)b_u1);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

static double rt_hypotd_snf(double u0, double u1)
{
  double y;
  double a;
  double b;
  a = abs(u0);
  b = abs(u1);
  if (a < b) {
    a /= b;
    y = b * sqrt(a * a + 1.0);
  } else if (a > b) {
    b /= a;
    y = a * sqrt(b * b + 1.0);
  } else if (rtIsNaN(b)) {
    y = b;
  } else {
    y = a * 1.4142135623730951;
  }

  return y;
}

static double rt_powd_snf(double u0, double u1)
{
  double y;
  double d0;
  double d1;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else {
    d0 =  abs(u0);
    d1 =  abs(u1);
    if (rtIsInf(u1)) {
      if (d0 == 1.0) {
        y = 1.0;
      } else if (d0 > 1.0) {
        if (u1 > 0.0) {
          y = rtInf;
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = rtInf;
      }
    } else if (d1 == 0.0) {
      y = 1.0;
    } else if (d1 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y =  sqrt(u0);
    } else if ((u0 < 0.0) && (u1 >  floor(u1))) {
      y = rtNaN;
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

void Robikine(double tx, double ty, double tz, double output[3])
{
  double a_tmp;
  double a;
  double b_a;
  double c_a;
  double d_a;
  double e_a;
  double f_a;
  double g_a;
  double h_a;
  double i_a;
  double tz_re;
  double tz_im_tmp;
  double re_tmp_tmp;
  double re_tmp;
  double b_re_tmp;
  double b_re_tmp_tmp;
  double c_re_tmp;
  double d_re_tmp;
  double e_re_tmp;
  double f_re_tmp;
  double re;
  double im_tmp;
  double b_im_tmp;
  double c_im_tmp;
  double d_im_tmp;
  double e_im_tmp;
  double f_im_tmp;
  double g_im_tmp;
  double h_im_tmp;
  double i_im_tmp;
  double j_im_tmp;
  double k_im_tmp;
  double l_im_tmp;
  double m_im_tmp;
  double n_im_tmp;
  double im;
  double j_a;
  double k_a;
  double l_a;
  double m_a;
  double n_a;
  double o_a;
  double p_a;
  double q_a;
  double r_a;
  double s_a;
  double t_a;
  double u_a;
  double v_a;
  double x_re_tmp;
  double b_x_re_tmp;
  double w_a;
  double x_a;
  double y_a;
  double ab_a;
  double bb_a;
  double cb_a;
  double db_a;
  double eb_a;
  double fb_a;
  double gb_a;
  double hb_a;
  double ib_a;
  double jb_a;
  double kb_a;
  double lb_a;
  double mb_a;
  double nb_a;
  double ob_a;
  double pb_a;
  double qb_a;
  double rb_a;
  double sb_a;
  double tb_a;
  double ub_a;
  double vb_a;
  double wb_a;
  double xb_a;
  double yb_a;
  double ac_a;
  double bc_a;
  double cc_a;
  double dc_a;
  double ec_a;
  double fc_a;
  double gc_a;
  double hc_a;
  double ic_a;
  double jc_a;
  double kc_a;
  double lc_a;
  double mc_a;
  double nc_a;
  double oc_a;
  double pc_a;
  double qc_a;
  double rc_a;
  double sc_a;
  double tc_a;
  double uc_a;
  double vc_a;
  double wc_a;
  double xc_a;
  double yc_a;
  double ad_a;
  double bd_a;
  double cd_a;
  double dd_a;
  double ed_a;
  double fd_a;
  double gd_a;
  double hd_a;
  double id_a;
  double jd_a;
  double kd_a;
  double ld_a;
  double md_a;
  double nd_a;
  double od_a;
  double pd_a;
  double qd_a;
  double rd_a;
  double sd_a;
  double td_a;
  double ud_a;
  double vd_a;
  double wd_a;
  double xd_a;
  double yd_a;
  double ae_a;
  double be_a;
  double ce_a;
  double de_a;
  double ee_a;
  double fe_a;
  double ge_a;
  double he_a;
  double ie_a;
  double je_a;
  double ke_a;
  double le_a;
  double me_a;
  double ne_a;
  double oe_a;
  double pe_a;
  double qe_a;
  double re_a;
  double se_a;
  double te_a;
  double ue_a;
  double ve_a;
  double we_a;
  double xe_a;
  double ye_a;
  double af_a;
  double bf_a;
  double cf_a;
  double df_a;
  double ef_a;
  double ff_a;
  double gf_a;
  double hf_a;
  double if_a;
  double jf_a;
  double kf_a;
  double lf_a;
  double mf_a;
  double nf_a;
  double of_a;
  double pf_a;
  double qf_a;
  double rf_a;
  double sf_a;
  double tf_a;
  double uf_a;
  double vf_a;
  double wf_a;
  double xf_a;
  double yf_a;
  double ag_a;
  double bg_a;
  double cg_a;
  double dg_a;
  double eg_a;
  double fg_a;
  double gg_a;
  double hg_a;
  double ig_a;
  double jg_a;
  double kg_a;
  double lg_a;
  double mg_a;
  double ng_a;
  double og_a;
  double pg_a;
  double qg_a;
  double rg_a;
  double sg_a;
  double tg_a;
  double ug_a;
  double vg_a;
  double wg_a;
  double xg_a;
  double yg_a;
  double ah_a;
  double bh_a;
  double ch_a;
  double dh_a;
  double eh_a;
  double fh_a;
  double gh_a;
  double hh_a;
  double ih_a;
  double jh_a;
  double kh_a;
  double lh_a;
  double mh_a;
  double nh_a;
  double oh_a;
  double ph_a;
  double qh_a;
  double rh_a;
  double sh_a;
  double th_a;
  double uh_a;
  double vh_a;
  double wh_a;
  double xh_a;
  double yh_a;
  double ai_a;
  double bi_a;
  double ci_a;
  double di_a;
  double ei_a;
  double fi_a;
  double gi_a;
  double hi_a;
  double ii_a;
  double ji_a;
  double ki_a;
  double li_a;
  double mi_a;
  a_tmp = rt_hypotd_snf(tx, ty);
  a = rt_hypotd_snf(tx, ty);
  b_a = rt_hypotd_snf(tx, ty);
  c_a = rt_hypotd_snf(tx, ty);
  d_a = rt_hypotd_snf(tx, ty);
  e_a = rt_hypotd_snf(tx, ty);
  f_a = rt_hypotd_snf(tx, ty);
  g_a = rt_hypotd_snf(tx, ty);
  h_a = rt_hypotd_snf(tx, ty);
  i_a = rt_hypotd_snf(tx, ty);
  tz_re = -((tz * 0.0 + 5.0 * ty * ty / rt_hypotd_snf(tx, ty)) - 5.0 * tx * (0.0
             - tx) / rt_hypotd_snf(tx, ty));
  tz_im_tmp = tz * 5.0 - 468.0;
  re_tmp_tmp = ty * ty;
  re_tmp = 25.0 * re_tmp_tmp;
  b_re_tmp = tz * tz;
  b_re_tmp_tmp = rt_atan2d_snf(ty, tx);
  c_re_tmp =  sin(2.0 * b_re_tmp_tmp);
  d_re_tmp = tx * tx;
  e_re_tmp = 25.0 * b_re_tmp;
  f_re_tmp = 25.0 * tx * ty * c_re_tmp;
  re = (((((4680.0 * tz - re_tmp) - e_re_tmp) - f_re_tmp) - 25.0 * d_re_tmp *
         ((0.0 - tx) * (0.0 - tx)) / (h_a * h_a)) + re_tmp * ((0.0 - tx) * (0.0
          - tx)) / (i_a * i_a)) + 856176.0;
  im_tmp = 8.90488E+7 * re_tmp_tmp;
  b_im_tmp = rt_powd_snf(ty, 4.0);
  c_im_tmp = 625.0 * b_im_tmp;
  d_im_tmp = rt_powd_snf(0.0 - tx, 4.0);
  e_im_tmp = 3750.0 * d_re_tmp * re_tmp_tmp;
  f_im_tmp = 1250.0 * re_tmp_tmp * b_re_tmp;
  g_im_tmp = 234000.0 * re_tmp_tmp * tz;
  h_im_tmp = rt_powd_snf(ty, 3.0);
  re_tmp_tmp = rt_powd_snf(0.0 - tx, 3.0);
  i_im_tmp = 6.71464E+7 * b_re_tmp;
  j_im_tmp = 234000.0 * rt_powd_snf(tz, 3.0);
  k_im_tmp = 625.0 * rt_powd_snf(tz, 4.0);
  l_im_tmp = 8.90488E+7 * tx * ty * c_re_tmp;
  m_im_tmp = 1250.0 * tx * h_im_tmp * c_re_tmp;
  n_im_tmp = 234000.0 * tx * ty * tz * c_re_tmp;
  c_re_tmp *= 1250.0 * tx * ty * b_re_tmp;
  im =  sqrt(((((((((((((((((((((((((g_im_tmp - f_im_tmp) - 1.666993536E+10 *
    tz) + im_tmp) - c_im_tmp) + i_im_tmp) + j_im_tmp) - k_im_tmp) + l_im_tmp) +
    8.90488E+7 * d_re_tmp * ((0.0 - tx) * (0.0 - tx)) / (a_tmp * a_tmp)) - 625.0
    * rt_powd_snf(tx, 4.0) * d_im_tmp / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0))
    - im_tmp * ((0.0 - tx) * (0.0 - tx)) / (a * a)) + 1250.0 * b_im_tmp * ((0.0
    - tx) * (0.0 - tx)) / (b_a * b_a)) - c_im_tmp * d_im_tmp / rt_powd_snf
    (rt_hypotd_snf(tx, ty), 4.0)) - m_im_tmp) - e_im_tmp * ((0.0 - tx) * (0.0 -
    tx)) / (c_a * c_a)) + e_im_tmp * d_im_tmp / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 1250.0 * d_re_tmp * b_re_tmp * ((0.0 - tx) * (0.0 - tx)) / (d_a *
    d_a)) + f_im_tmp * ((0.0 - tx) * (0.0 - tx)) / (e_a * e_a)) + n_im_tmp) +
                      234000.0 * d_re_tmp * tz * ((0.0 - tx) * (0.0 - tx)) /
                      (f_a * f_a)) - g_im_tmp * ((0.0 - tx) * (0.0 - tx)) / (g_a
    * g_a)) - c_re_tmp) - 2500.0 * tx * h_im_tmp * re_tmp_tmp * ty / rt_powd_snf
                   (rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 * rt_powd_snf(tx, 3.0)
                  * ty * re_tmp_tmp * ty / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 3.27930552576E+11);
  a = rt_hypotd_snf(tx, ty);
  b_a = rt_hypotd_snf(tx, ty);
  c_a = rt_hypotd_snf(tx, ty);
  d_a = rt_hypotd_snf(tx, ty);
  e_a = rt_hypotd_snf(tx, ty);
  f_a = rt_hypotd_snf(tx, ty);
  g_a = rt_hypotd_snf(tx, ty);
  h_a = rt_hypotd_snf(tx, ty);
  i_a = rt_hypotd_snf(tx, ty);
  j_a = rt_hypotd_snf(tx, ty);
  k_a = rt_hypotd_snf(tx, ty);
  l_a = rt_hypotd_snf(tx, ty);
  m_a = rt_hypotd_snf(tx, ty);
  n_a = rt_hypotd_snf(tx, ty);
  o_a = rt_hypotd_snf(tx, ty);
  p_a = rt_hypotd_snf(tx, ty);
  q_a = rt_hypotd_snf(tx, ty);
  r_a = rt_hypotd_snf(tx, ty);
  s_a = rt_hypotd_snf(tx, ty);
  t_a = rt_hypotd_snf(tx, ty);
  u_a = rt_hypotd_snf(tx, ty);
  v_a = rt_hypotd_snf(tx, ty);
  x_re_tmp =  sqrt(((((((((((((((((((((((((-1.666993536E+10 * tz - f_im_tmp)
    + g_im_tmp) + im_tmp) - c_im_tmp) + i_im_tmp) + j_im_tmp) - k_im_tmp) +
    l_im_tmp) + 8.90488E+7 * (tx * tx) * ((0.0 - tx) * (0.0 - tx)) / (m_a * m_a))
    - 625.0 * rt_powd_snf(tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf
    (rt_hypotd_snf(tx, ty), 4.0)) - 8.90488E+7 * (ty * ty) * ((0.0 - tx) * (0.0
    - tx)) / (n_a * n_a)) + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0 - tx) * (0.0 -
    tx)) / (o_a * o_a)) - 625.0 * rt_powd_snf(ty, 4.0) * rt_powd_snf(0.0 - tx,
    4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - m_im_tmp) - 3750.0 * (tx *
    tx) * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (p_a * p_a)) + 3750.0 * (tx *
    tx) * (ty * ty) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx,
    ty), 4.0)) - 1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) /
    (q_a * q_a)) + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) /
    (r_a * r_a)) + n_im_tmp) + 234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 -
    tx)) / (s_a * s_a)) - 234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx)) /
    (t_a * t_a)) - c_re_tmp) - 2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf
    (0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 *
                        rt_powd_snf(tx, 3.0) * ty * rt_powd_snf(0.0 - tx, 3.0) *
                        ty / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
                       3.27930552576E+11);
  b_x_re_tmp = (-4680.0 * tz + re_tmp) + e_re_tmp;
  m_a = rt_hypotd_snf(tx, ty);
  n_a = rt_hypotd_snf(tx, ty);
  o_a = rt_hypotd_snf(tx, ty);
  p_a = rt_hypotd_snf(tx, ty);
  q_a = rt_hypotd_snf(tx, ty);
  r_a = rt_hypotd_snf(tx, ty);
  s_a = rt_hypotd_snf(tx, ty);
  t_a = rt_hypotd_snf(tx, ty);
  w_a = rt_hypotd_snf(tx, ty);
  x_a = rt_hypotd_snf(tx, ty);
  y_a = rt_hypotd_snf(tx, ty);
  ab_a = rt_hypotd_snf(tx, ty);
  bb_a = rt_hypotd_snf(tx, ty);
  cb_a = rt_hypotd_snf(tx, ty);
  db_a = rt_hypotd_snf(tx, ty);
  eb_a = rt_hypotd_snf(tx, ty);
  fb_a = rt_hypotd_snf(tx, ty);
  gb_a = rt_hypotd_snf(tx, ty);
  hb_a = rt_hypotd_snf(tx, ty);
  ib_a = rt_hypotd_snf(tx, ty);
  jb_a = rt_hypotd_snf(tx, ty);
  kb_a = rt_hypotd_snf(tx, ty);
  lb_a = rt_hypotd_snf(tx, ty);
  mb_a = rt_hypotd_snf(tx, ty);
  nb_a = rt_hypotd_snf(tx, ty);
  ob_a = rt_hypotd_snf(tx, ty);
  pb_a = rt_hypotd_snf(tx, ty);
  qb_a = rt_hypotd_snf(tx, ty);
  rb_a = rt_hypotd_snf(tx, ty);
  sb_a = rt_hypotd_snf(tx, ty);
  tb_a = rt_hypotd_snf(tx, ty);
  ub_a = rt_hypotd_snf(tx, ty);
  vb_a = rt_hypotd_snf(tx, ty);
  wb_a = rt_hypotd_snf(tx, ty);
  xb_a = rt_hypotd_snf(tx, ty);
  yb_a = rt_hypotd_snf(tx, ty);
  ac_a = rt_hypotd_snf(tx, ty);
  bc_a = rt_hypotd_snf(tx, ty);
  cc_a = rt_hypotd_snf(tx, ty);
  dc_a = rt_hypotd_snf(tx, ty);
  ec_a = rt_hypotd_snf(tx, ty);
  fc_a = rt_hypotd_snf(tx, ty);
  gc_a = rt_hypotd_snf(tx, ty);
  hc_a = rt_hypotd_snf(tx, ty);
  ic_a = rt_hypotd_snf(tx, ty);
  jc_a = rt_hypotd_snf(tx, ty);
  kc_a = rt_hypotd_snf(tx, ty);
  lc_a = rt_hypotd_snf(tx, ty);
  mc_a = rt_hypotd_snf(tx, ty);
  nc_a = rt_hypotd_snf(tx, ty);
  oc_a = rt_hypotd_snf(tx, ty);
  pc_a = rt_hypotd_snf(tx, ty);
  qc_a = rt_hypotd_snf(tx, ty);
  rc_a = rt_hypotd_snf(tx, ty);
  sc_a = rt_hypotd_snf(tx, ty);
  tc_a = rt_hypotd_snf(tx, ty);
  uc_a = rt_hypotd_snf(tx, ty);
  vc_a = rt_hypotd_snf(tx, ty);
  wc_a = rt_hypotd_snf(tx, ty);
  xc_a = rt_hypotd_snf(tx, ty);
  yc_a = rt_hypotd_snf(tx, ty);
  ad_a = rt_hypotd_snf(tx, ty);
  bd_a = rt_hypotd_snf(tx, ty);
  cd_a = rt_hypotd_snf(tx, ty);
  dd_a = rt_hypotd_snf(tx, ty);
  ed_a = rt_hypotd_snf(tx, ty);
  fd_a = rt_hypotd_snf(tx, ty);
  gd_a = rt_hypotd_snf(tx, ty);
  hd_a = rt_hypotd_snf(tx, ty);
  id_a = rt_hypotd_snf(tx, ty);
  jd_a = rt_hypotd_snf(tx, ty);
  kd_a = rt_hypotd_snf(tx, ty);
  ld_a = rt_hypotd_snf(tx, ty);
  md_a = rt_hypotd_snf(tx, ty);
  nd_a = rt_hypotd_snf(tx, ty);
  od_a = rt_hypotd_snf(tx, ty);
  pd_a = rt_hypotd_snf(tx, ty);
  qd_a = rt_hypotd_snf(tx, ty);
  rd_a = rt_hypotd_snf(tx, ty);
  sd_a = rt_hypotd_snf(tx, ty);
  re_tmp_tmp = rt_hypotd_snf(tx, ty);
  h_im_tmp = rt_hypotd_snf(tx, ty);
  b_im_tmp = rt_hypotd_snf(tx, ty);
  d_im_tmp = rt_hypotd_snf(tx, ty);
  e_im_tmp = rt_hypotd_snf(tx, ty);
  c_re_tmp = rt_hypotd_snf(tx, ty);
  a_tmp = rt_hypotd_snf(tx, ty);
  b_re_tmp = rt_hypotd_snf(tx, ty);
  d_re_tmp = rt_hypotd_snf(tx, ty);
  g_im_tmp = rt_hypotd_snf(tx, ty);
  i_im_tmp = rt_hypotd_snf(tx, ty);
  j_im_tmp = rt_hypotd_snf(tx, ty);
  k_im_tmp = rt_hypotd_snf(tx, ty);
  l_im_tmp = rt_hypotd_snf(tx, ty);
  m_im_tmp = rt_hypotd_snf(tx, ty);
  n_im_tmp = rt_hypotd_snf(tx, ty);
  im_tmp = rt_hypotd_snf(tx, ty);
  c_im_tmp = rt_hypotd_snf(tx, ty);
  f_im_tmp = rt_hypotd_snf(tx, ty);
  e_re_tmp = rt_hypotd_snf(tx, ty);
  td_a = rt_hypotd_snf(tx, ty);
  ud_a = rt_hypotd_snf(tx, ty);
  vd_a = rt_hypotd_snf(tx, ty);
  wd_a = rt_hypotd_snf(tx, ty);
  xd_a = rt_hypotd_snf(tx, ty);
  yd_a = rt_hypotd_snf(tx, ty);
  ae_a = rt_hypotd_snf(tx, ty);
  be_a = rt_hypotd_snf(tx, ty);
  ce_a = rt_hypotd_snf(tx, ty);
  de_a = rt_hypotd_snf(tx, ty);
  ee_a = rt_hypotd_snf(tx, ty);
  fe_a = rt_hypotd_snf(tx, ty);
  ge_a = rt_hypotd_snf(tx, ty);
  he_a = rt_hypotd_snf(tx, ty);
  ie_a = rt_hypotd_snf(tx, ty);
  je_a = rt_hypotd_snf(tx, ty);
  ke_a = rt_hypotd_snf(tx, ty);
  le_a = rt_hypotd_snf(tx, ty);
  me_a = rt_hypotd_snf(tx, ty);
  ne_a = rt_hypotd_snf(tx, ty);
  re_tmp = rt_hypotd_snf(tx, ty);
  oe_a = rt_hypotd_snf(tx, ty);
  pe_a = rt_hypotd_snf(tx, ty);
  qe_a = rt_hypotd_snf(tx, ty);
  re_a = rt_hypotd_snf(tx, ty);
  se_a = rt_hypotd_snf(tx, ty);
  te_a = rt_hypotd_snf(tx, ty);
  ue_a = rt_hypotd_snf(tx, ty);
  ve_a = rt_hypotd_snf(tx, ty);
  we_a = rt_hypotd_snf(tx, ty);
  xe_a = rt_hypotd_snf(tx, ty);
  ye_a = rt_hypotd_snf(tx, ty);
  af_a = rt_hypotd_snf(tx, ty);
  bf_a = rt_hypotd_snf(tx, ty);
  cf_a = rt_hypotd_snf(tx, ty);
  df_a = rt_hypotd_snf(tx, ty);
  ef_a = rt_hypotd_snf(tx, ty);
  ff_a = rt_hypotd_snf(tx, ty);
  gf_a = rt_hypotd_snf(tx, ty);
  hf_a = rt_hypotd_snf(tx, ty);
  if_a = rt_hypotd_snf(tx, ty);
  jf_a = rt_hypotd_snf(tx, ty);
  kf_a = rt_hypotd_snf(tx, ty);
  lf_a = rt_hypotd_snf(tx, ty);
  mf_a = rt_hypotd_snf(tx, ty);
  nf_a = rt_hypotd_snf(tx, ty);
  of_a = rt_hypotd_snf(tx, ty);
  pf_a = rt_hypotd_snf(tx, ty);
  qf_a = rt_hypotd_snf(tx, ty);
  rf_a = rt_hypotd_snf(tx, ty);
  sf_a = rt_hypotd_snf(tx, ty);
  tf_a = rt_hypotd_snf(tx, ty);
  uf_a = rt_hypotd_snf(tx, ty);
  vf_a = rt_hypotd_snf(tx, ty);
  wf_a = rt_hypotd_snf(tx, ty);
  xf_a = rt_hypotd_snf(tx, ty);
  yf_a = rt_hypotd_snf(tx, ty);
  ag_a = rt_hypotd_snf(tx, ty);
  bg_a = rt_hypotd_snf(tx, ty);
  cg_a = rt_hypotd_snf(tx, ty);
  dg_a = rt_hypotd_snf(tx, ty);
  eg_a = rt_hypotd_snf(tx, ty);
  fg_a = rt_hypotd_snf(tx, ty);
  gg_a = rt_hypotd_snf(tx, ty);
  hg_a = rt_hypotd_snf(tx, ty);
  ig_a = rt_hypotd_snf(tx, ty);
  jg_a = rt_hypotd_snf(tx, ty);
  kg_a = rt_hypotd_snf(tx, ty);
  lg_a = rt_hypotd_snf(tx, ty);
  mg_a = rt_hypotd_snf(tx, ty);
  ng_a = rt_hypotd_snf(tx, ty);
  og_a = rt_hypotd_snf(tx, ty);
  pg_a = rt_hypotd_snf(tx, ty);
  qg_a = rt_hypotd_snf(tx, ty);
  rg_a = rt_hypotd_snf(tx, ty);
  sg_a = rt_hypotd_snf(tx, ty);
  tg_a = rt_hypotd_snf(tx, ty);
  ug_a = rt_hypotd_snf(tx, ty);
  vg_a = rt_hypotd_snf(tx, ty);
  wg_a = rt_hypotd_snf(tx, ty);
  xg_a = rt_hypotd_snf(tx, ty);
  yg_a = rt_hypotd_snf(tx, ty);
  ah_a = rt_hypotd_snf(tx, ty);
  bh_a = rt_hypotd_snf(tx, ty);
  ch_a = rt_hypotd_snf(tx, ty);
  dh_a = rt_hypotd_snf(tx, ty);
  eh_a = rt_hypotd_snf(tx, ty);
  fh_a = rt_hypotd_snf(tx, ty);
  gh_a = rt_hypotd_snf(tx, ty);
  hh_a = rt_hypotd_snf(tx, ty);
  ih_a = rt_hypotd_snf(tx, ty);
  jh_a = rt_hypotd_snf(tx, ty);
  kh_a = rt_hypotd_snf(tx, ty);
  lh_a = rt_hypotd_snf(tx, ty);
  mh_a = rt_hypotd_snf(tx, ty);
  nh_a = rt_hypotd_snf(tx, ty);
  oh_a = rt_hypotd_snf(tx, ty);
  ph_a = rt_hypotd_snf(tx, ty);
  qh_a = rt_hypotd_snf(tx, ty);
  rh_a = rt_hypotd_snf(tx, ty);
  sh_a = rt_hypotd_snf(tx, ty);
  th_a = rt_hypotd_snf(tx, ty);
  uh_a = rt_hypotd_snf(tx, ty);
  vh_a = rt_hypotd_snf(tx, ty);
  wh_a = rt_hypotd_snf(tx, ty);
  xh_a = rt_hypotd_snf(tx, ty);
  yh_a = rt_hypotd_snf(tx, ty);
  ai_a = rt_hypotd_snf(tx, ty);
  bi_a = rt_hypotd_snf(tx, ty);
  ci_a = rt_hypotd_snf(tx, ty);
  di_a = rt_hypotd_snf(tx, ty);
  ei_a = rt_hypotd_snf(tx, ty);
  fi_a = rt_hypotd_snf(tx, ty);
  gi_a = rt_hypotd_snf(tx, ty);
  hi_a = rt_hypotd_snf(tx, ty);
  ii_a = rt_hypotd_snf(tx, ty);
  ji_a = rt_hypotd_snf(tx, ty);
  ki_a = rt_hypotd_snf(tx, ty);
  li_a = rt_hypotd_snf(tx, ty);
  mi_a = rt_hypotd_snf(tx, ty);
  d_re_tmp = ((tz * 0.0 + 5.0 * ty * ty / rt_hypotd_snf(tx, ty)) - 5.0 * tx *
              (0.0 - tx) / rt_hypotd_snf(tx, ty)) * ((((((4680.0 * tz - 25.0 *
    (ty * ty)) - 25.0 * (tz * tz)) - 25.0 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) - 25.0 * (tx * tx) * ((0.0 - tx) * (0.0 - tx)) /
    (d_re_tmp * d_re_tmp)) + 25.0 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) /
    (g_im_tmp * g_im_tmp)) + 856176.0) - tz_im_tmp *  sqrt
    (((((((((((((((((((((((((-1.666993536E+10 * tz - 1250.0 * (ty * ty) * (tz *
    tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 * (ty * ty)) - 625.0 *
    rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) + 234000.0 * rt_powd_snf(tz,
    3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) + 8.90488E+7 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 8.90488E+7 * (tx * tx) * ((0.0 - tx) * (0.0 - tx))
                     / (re_tmp_tmp * re_tmp_tmp)) - 625.0 * rt_powd_snf(tx, 4.0)
                    * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx,
    ty), 4.0)) - 8.90488E+7 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (h_im_tmp *
    h_im_tmp)) + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0 - tx) * (0.0 - tx)) /
                  (b_im_tmp * b_im_tmp)) - 625.0 * rt_powd_snf(ty, 4.0) *
                 rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 1250.0 * tx * rt_powd_snf(ty, 3.0) *  sin(2.0 * rt_atan2d_snf(ty,
    tx))) - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) /
               (d_im_tmp * d_im_tmp)) + 3750.0 * (tx * tx) * (ty * ty) *
              rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) /
             (e_im_tmp * e_im_tmp)) + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 -
              tx) * (0.0 - tx)) / (c_re_tmp * c_re_tmp)) + 234000.0 * tx * ty *
           tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) + 234000.0 * (tx * tx) *
          tz * ((0.0 - tx) * (0.0 - tx)) / (a_tmp * a_tmp)) - 234000.0 * (ty *
          ty) * tz * ((0.0 - tx) * (0.0 - tx)) / (b_re_tmp * b_re_tmp)) - 1250.0
        * tx * ty * (tz * tz) *  sin(2.0 * rt_atan2d_snf(ty, tx))) - 2500.0 *
       tx * rt_powd_snf(ty, 3.0) * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf
       (rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 * rt_powd_snf(tx, 3.0) * ty *
      rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0))
     - 3.27930552576E+11);
  h_im_tmp = d_re_tmp * 0.0;
  b_im_tmp = d_re_tmp * 468.0;
  re_tmp_tmp = rt_hypotd_snf((tz * 0.0 + 5.0 * ty * ty / rt_hypotd_snf(tx, ty))
    - 5.0 * tx * (0.0 - tx) / rt_hypotd_snf(tx, ty), tz_im_tmp) * rt_hypotd_snf
    (((((((-4680.0 * tz + 25.0 * (ty * ty)) + 25.0 * (tz * tz)) -  sqrt
         (((((((((((((((((((((((((-1.666993536E+10 * tz - 1250.0 * (ty * ty) *
    (tz * tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 * (ty * ty)) - 625.0 *
    rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) + 234000.0 * rt_powd_snf(tz,
    3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) + 8.90488E+7 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 8.90488E+7 * (tx * tx) * ((0.0 - tx) * (0.0 - tx))
    / (i_im_tmp * i_im_tmp)) - 625.0 * rt_powd_snf(tx, 4.0) * rt_powd_snf(0.0 -
    tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 8.90488E+7 * (ty * ty)
    * ((0.0 - tx) * (0.0 - tx)) / (j_im_tmp * j_im_tmp)) + 1250.0 * rt_powd_snf
                       (ty, 4.0) * ((0.0 - tx) * (0.0 - tx)) / (k_im_tmp *
    k_im_tmp)) - 625.0 * rt_powd_snf(ty, 4.0) * rt_powd_snf(0.0 - tx, 4.0) /
                      rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * tx *
                     rt_powd_snf(ty, 3.0) *  sin(2.0 * rt_atan2d_snf(ty, tx)))
                    - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 - tx) * (0.0 - tx))
                    / (l_im_tmp * l_im_tmp)) + 3750.0 * (tx * tx) * (ty * ty) *
                   rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) /
                  (m_im_tmp * m_im_tmp)) + 1250.0 * (ty * ty) * (tz * tz) *
                 ((0.0 - tx) * (0.0 - tx)) / (n_im_tmp * n_im_tmp)) + 234000.0 *
                tx * ty * tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) + 234000.0
               * (tx * tx) * tz * ((0.0 - tx) * (0.0 - tx)) / (im_tmp * im_tmp))
              - 234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx)) /
              (c_im_tmp * c_im_tmp)) - 1250.0 * tx * ty * (tz * tz) *  sin
             (2.0 * rt_atan2d_snf(ty, tx))) - 2500.0 * tx * rt_powd_snf(ty, 3.0)
            * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty),
             4.0)) + 2500.0 * rt_powd_snf(tx, 3.0) * ty * rt_powd_snf(0.0 - tx,
            3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
          3.27930552576E+11) * 0.0) + 25.0 * tx * ty *  sin(2.0 *
         rt_atan2d_snf(ty, tx))) + 25.0 * (tx * tx) * ((0.0 - tx) * (0.0 - tx)) /
       (f_im_tmp * f_im_tmp)) - 25.0 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) /
      (e_re_tmp * e_re_tmp)) - 856176.0, 0.0 -  sqrt
     (((((((((((((((((((((((((-1.666993536E+10 * tz - 1250.0 * (ty * ty) * (tz *
    tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 * (ty * ty)) - 625.0 *
    rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) + 234000.0 * rt_powd_snf(tz,
    3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) + 8.90488E+7 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 8.90488E+7 * (tx * tx) * ((0.0 - tx) * (0.0 - tx))
                      / (i_im_tmp * i_im_tmp)) - 625.0 * rt_powd_snf(tx, 4.0) *
                     rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx,
    ty), 4.0)) - 8.90488E+7 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (j_im_tmp *
    j_im_tmp)) + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0 - tx) * (0.0 - tx)) /
                   (k_im_tmp * k_im_tmp)) - 625.0 * rt_powd_snf(ty, 4.0) *
                  rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 1250.0 * tx * rt_powd_snf(ty, 3.0) *  sin(2.0 * rt_atan2d_snf(ty,
    tx))) - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) /
                (l_im_tmp * l_im_tmp)) + 3750.0 * (tx * tx) * (ty * ty) *
               rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) /
              (m_im_tmp * m_im_tmp)) + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 -
    tx) * (0.0 - tx)) / (n_im_tmp * n_im_tmp)) + 234000.0 * tx * ty * tz *  
            sin(2.0 * rt_atan2d_snf(ty, tx))) + 234000.0 * (tx * tx) * tz *
           ((0.0 - tx) * (0.0 - tx)) / (im_tmp * im_tmp)) - 234000.0 * (ty * ty)
          * tz * ((0.0 - tx) * (0.0 - tx)) / (c_im_tmp * c_im_tmp)) - 1250.0 *
         tx * ty * (tz * tz) *  sin(2.0 * rt_atan2d_snf(ty, tx))) - 2500.0 *
        tx * rt_powd_snf(ty, 3.0) * rt_powd_snf(0.0 - tx, 3.0) * ty /
        rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 * rt_powd_snf(tx, 3.0)
       * ty * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty),
        4.0)) - 3.27930552576E+11));
  if (b_im_tmp == 0.0) {
    d_re_tmp = h_im_tmp / re_tmp_tmp;
    b_re_tmp = 0.0;
  } else if (h_im_tmp == 0.0) {
    d_re_tmp = 0.0;
    b_re_tmp = b_im_tmp / re_tmp_tmp;
  } else {
    d_re_tmp = rtNaN;
    b_re_tmp = b_im_tmp / re_tmp_tmp;
  }

  re_tmp_tmp = tz * (((tz * 0.0 + 5.0 * ty * ty / rt_hypotd_snf(tx, ty)) - 5.0 *
                      tx * (0.0 - tx) / rt_hypotd_snf(tx, ty)) * ((((((4680.0 *
    tz - 25.0 * (ty * ty)) - 25.0 * (tz * tz)) - 25.0 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) - 25.0 * (tx * tx) * ((0.0 - tx) * (0.0 - tx)) /
    (ve_a * ve_a)) + 25.0 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (we_a * we_a))
    + 856176.0) - tz_im_tmp *  sqrt(((((((((((((((((((((((((-1.666993536E+10
    * tz - 1250.0 * (ty * ty) * (tz * tz)) + 234000.0 * (ty * ty) * tz) +
    8.90488E+7 * (ty * ty)) - 625.0 * rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz *
    tz)) + 234000.0 * rt_powd_snf(tz, 3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) +
    8.90488E+7 * tx * ty *  sin(2.0 * rt_atan2d_snf(ty, tx))) + 8.90488E+7 *
    (tx * tx) * ((0.0 - tx) * (0.0 - tx)) / (re_tmp * re_tmp)) - 625.0 *
    rt_powd_snf(tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf
    (rt_hypotd_snf(tx, ty), 4.0)) - 8.90488E+7 * (ty * ty) * ((0.0 - tx) * (0.0
    - tx)) / (oe_a * oe_a)) + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0 - tx) * (0.0
    - tx)) / (pe_a * pe_a)) - 625.0 * rt_powd_snf(ty, 4.0) * rt_powd_snf(0.0 -
    tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * tx *
    rt_powd_snf(ty, 3.0) *  sin(2.0 * rt_atan2d_snf(ty, tx))) - 3750.0 * (tx
    * tx) * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (qe_a * qe_a)) + 3750.0 *
    (tx * tx) * (ty * ty) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf
    (rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx)
    * (0.0 - tx)) / (re_a * re_a)) + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 - tx)
    * (0.0 - tx)) / (se_a * se_a)) + 234000.0 * tx * ty * tz *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 -
    tx)) / (te_a * te_a)) - 234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx))
    / (ue_a * ue_a)) - 1250.0 * tx * ty * (tz * tz) *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) - 2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf
    (0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 *
    rt_powd_snf(tx, 3.0) * ty * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf
    (rt_hypotd_snf(tx, ty), 4.0)) - 3.27930552576E+11));
  h_im_tmp = re_tmp_tmp * 0.0;
  b_im_tmp = re_tmp_tmp * 5.0;
  re_tmp_tmp = rt_hypotd_snf((tz * 0.0 + 5.0 * ty * ty / rt_hypotd_snf(tx, ty))
    - 5.0 * tx * (0.0 - tx) / rt_hypotd_snf(tx, ty), tz_im_tmp) * rt_hypotd_snf
    (((((((-4680.0 * tz + 25.0 * (ty * ty)) + 25.0 * (tz * tz)) -  sqrt
         (((((((((((((((((((((((((-1.666993536E+10 * tz - 1250.0 * (ty * ty) *
    (tz * tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 * (ty * ty)) - 625.0 *
    rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) + 234000.0 * rt_powd_snf(tz,
    3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) + 8.90488E+7 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 8.90488E+7 * (tx * tx) * ((0.0 - tx) * (0.0 - tx))
    / (xe_a * xe_a)) - 625.0 * rt_powd_snf(tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0)
    / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 8.90488E+7 * (ty * ty) * ((0.0
    - tx) * (0.0 - tx)) / (ye_a * ye_a)) + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0
    - tx) * (0.0 - tx)) / (af_a * af_a)) - 625.0 * rt_powd_snf(ty, 4.0) *
                      rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx,
    ty), 4.0)) - 1250.0 * tx * rt_powd_snf(ty, 3.0) *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 - tx) *
    (0.0 - tx)) / (bf_a * bf_a)) + 3750.0 * (tx * tx) * (ty * ty) * rt_powd_snf
                   (0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
                  1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) /
                  (cf_a * cf_a)) + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 - tx) *
    (0.0 - tx)) / (df_a * df_a)) + 234000.0 * tx * ty * tz *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 -
    tx)) / (ef_a * ef_a)) - 234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx))
              / (ff_a * ff_a)) - 1250.0 * tx * ty * (tz * tz) *  sin(2.0 *
              rt_atan2d_snf(ty, tx))) - 2500.0 * tx * rt_powd_snf(ty, 3.0) *
            rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty),
             4.0)) + 2500.0 * rt_powd_snf(tx, 3.0) * ty * rt_powd_snf(0.0 - tx,
            3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
          3.27930552576E+11) * 0.0) + 25.0 * tx * ty *  sin(2.0 *
         rt_atan2d_snf(ty, tx))) + 25.0 * (tx * tx) * ((0.0 - tx) * (0.0 - tx)) /
       (gf_a * gf_a)) - 25.0 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (hf_a *
       hf_a)) - 856176.0, 0.0 -  sqrt
     (((((((((((((((((((((((((-1.666993536E+10 * tz - 1250.0 * (ty * ty) * (tz *
    tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 * (ty * ty)) - 625.0 *
    rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) + 234000.0 * rt_powd_snf(tz,
    3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) + 8.90488E+7 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 8.90488E+7 * (tx * tx) * ((0.0 - tx) * (0.0 - tx))
                      / (xe_a * xe_a)) - 625.0 * rt_powd_snf(tx, 4.0) *
                     rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx,
    ty), 4.0)) - 8.90488E+7 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (ye_a *
    ye_a)) + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0 - tx) * (0.0 - tx)) / (af_a *
    af_a)) - 625.0 * rt_powd_snf(ty, 4.0) * rt_powd_snf(0.0 - tx, 4.0) /
                  rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * tx *
                 rt_powd_snf(ty, 3.0) *  sin(2.0 * rt_atan2d_snf(ty, tx))) -
                3750.0 * (tx * tx) * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) /
                (bf_a * bf_a)) + 3750.0 * (tx * tx) * (ty * ty) * rt_powd_snf
               (0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
              1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (cf_a
    * cf_a)) + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) /
             (df_a * df_a)) + 234000.0 * tx * ty * tz *  sin(2.0 *
             rt_atan2d_snf(ty, tx))) + 234000.0 * (tx * tx) * tz * ((0.0 - tx) *
            (0.0 - tx)) / (ef_a * ef_a)) - 234000.0 * (ty * ty) * tz * ((0.0 -
            tx) * (0.0 - tx)) / (ff_a * ff_a)) - 1250.0 * tx * ty * (tz * tz) *
          sin(2.0 * rt_atan2d_snf(ty, tx))) - 2500.0 * tx * rt_powd_snf(ty,
         3.0) * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx,
          ty), 4.0)) + 2500.0 * rt_powd_snf(tx, 3.0) * ty * rt_powd_snf(0.0 - tx,
        3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 3.27930552576E+11));
  if (b_im_tmp == 0.0) {
    c_re_tmp = h_im_tmp / re_tmp_tmp;
    a_tmp = 0.0;
  } else if (h_im_tmp == 0.0) {
    c_re_tmp = 0.0;
    a_tmp = b_im_tmp / re_tmp_tmp;
  } else {
    c_re_tmp = rtNaN;
    a_tmp = b_im_tmp / re_tmp_tmp;
  }

  re_tmp_tmp = ty * (((tz * 0.0 + 5.0 * ty * ty / rt_hypotd_snf(tx, ty)) - 5.0 *
                      tx * (0.0 - tx) / rt_hypotd_snf(tx, ty)) *  sqrt
                     (((((((((((((((((((((((((-1.666993536E+10 * tz - 1250.0 *
    (ty * ty) * (tz * tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 * (ty * ty))
    - 625.0 * rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) + 234000.0 *
    rt_powd_snf(tz, 3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) + 8.90488E+7 * tx * ty
    *  sin(2.0 * rt_atan2d_snf(ty, tx))) + 8.90488E+7 * (tx * tx) * ((0.0 -
    tx) * (0.0 - tx)) / (if_a * if_a)) - 625.0 * rt_powd_snf(tx, 4.0) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
    8.90488E+7 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (jf_a * jf_a)) + 1250.0
    * rt_powd_snf(ty, 4.0) * ((0.0 - tx) * (0.0 - tx)) / (kf_a * kf_a)) - 625.0 *
    rt_powd_snf(ty, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf
    (rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * tx * rt_powd_snf(ty, 3.0) *  
    sin(2.0 * rt_atan2d_snf(ty, tx))) - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 -
    tx) * (0.0 - tx)) / (lf_a * lf_a)) + 3750.0 * (tx * tx) * (ty * ty) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
    1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (mf_a * mf_a))
    + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (nf_a * nf_a))
    + 234000.0 * tx * ty * tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) +
    234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 - tx)) / (of_a * of_a)) -
    234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx)) / (pf_a * pf_a)) -
    1250.0 * tx * ty * (tz * tz) *  sin(2.0 * rt_atan2d_snf(ty, tx))) -
                        2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf(0.0 -
    tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 *
                       rt_powd_snf(tx, 3.0) * ty * rt_powd_snf(0.0 - tx, 3.0) *
                       ty / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
                      3.27930552576E+11) + tz_im_tmp * ((((((4680.0 * tz - 25.0 *
    (ty * ty)) - 25.0 * (tz * tz)) - 25.0 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) - 25.0 * (tx * tx) * ((0.0 - tx) * (0.0 - tx)) /
    (qf_a * qf_a)) + 25.0 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (rf_a * rf_a))
    + 856176.0)) * ty;
  h_im_tmp = re_tmp_tmp * 0.0;
  b_im_tmp = re_tmp_tmp * 5.0;
  re_tmp_tmp = rt_hypotd_snf(tx, ty) * rt_hypotd_snf((tz * 0.0 + 5.0 * ty * ty /
    rt_hypotd_snf(tx, ty)) - 5.0 * tx * (0.0 - tx) / rt_hypotd_snf(tx, ty),
    tz_im_tmp) * rt_hypotd_snf(((((((-4680.0 * tz + 25.0 * (ty * ty)) + 25.0 *
    (tz * tz)) -  sqrt(((((((((((((((((((((((((-1.666993536E+10 * tz -
    1250.0 * (ty * ty) * (tz * tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 *
    (ty * ty)) - 625.0 * rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) +
    234000.0 * rt_powd_snf(tz, 3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) +
    8.90488E+7 * tx * ty *  sin(2.0 * rt_atan2d_snf(ty, tx))) + 8.90488E+7 *
    (tx * tx) * ((0.0 - tx) * (0.0 - tx)) / (sf_a * sf_a)) - 625.0 * rt_powd_snf
    (tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 8.90488E+7 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (tf_a * tf_a))
    + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0 - tx) * (0.0 - tx)) / (uf_a * uf_a))
    - 625.0 * rt_powd_snf(ty, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf
    (rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * tx * rt_powd_snf(ty, 3.0) *  
    sin(2.0 * rt_atan2d_snf(ty, tx))) - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 -
    tx) * (0.0 - tx)) / (vf_a * vf_a)) + 3750.0 * (tx * tx) * (ty * ty) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
    1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (wf_a * wf_a))
    + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (xf_a * xf_a))
    + 234000.0 * tx * ty * tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) +
    234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 - tx)) / (yf_a * yf_a)) -
    234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx)) / (ag_a * ag_a)) -
    1250.0 * tx * ty * (tz * tz) *  sin(2.0 * rt_atan2d_snf(ty, tx))) -
    2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf(0.0 - tx, 3.0) * ty /
    rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 * rt_powd_snf(tx, 3.0) *
    ty * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 3.27930552576E+11) * 0.0) + 25.0 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 25.0 * (tx * tx) * ((0.0 - tx) * (0.0 - tx)) /
    (bg_a * bg_a)) - 25.0 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (cg_a * cg_a))
    - 856176.0, 0.0 -  sqrt(((((((((((((((((((((((((-1.666993536E+10 * tz -
    1250.0 * (ty * ty) * (tz * tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 *
    (ty * ty)) - 625.0 * rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) +
    234000.0 * rt_powd_snf(tz, 3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) +
    8.90488E+7 * tx * ty *  sin(2.0 * rt_atan2d_snf(ty, tx))) + 8.90488E+7 *
    (tx * tx) * ((0.0 - tx) * (0.0 - tx)) / (sf_a * sf_a)) - 625.0 * rt_powd_snf
    (tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 8.90488E+7 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (tf_a * tf_a))
    + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0 - tx) * (0.0 - tx)) / (uf_a * uf_a))
    - 625.0 * rt_powd_snf(ty, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf
    (rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * tx * rt_powd_snf(ty, 3.0) *  
    sin(2.0 * rt_atan2d_snf(ty, tx))) - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 -
    tx) * (0.0 - tx)) / (vf_a * vf_a)) + 3750.0 * (tx * tx) * (ty * ty) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
    1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (wf_a * wf_a))
    + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (xf_a * xf_a))
    + 234000.0 * tx * ty * tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) +
    234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 - tx)) / (yf_a * yf_a)) -
    234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx)) / (ag_a * ag_a)) -
    1250.0 * tx * ty * (tz * tz) *  sin(2.0 * rt_atan2d_snf(ty, tx))) -
    2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf(0.0 - tx, 3.0) * ty /
    rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 * rt_powd_snf(tx, 3.0) *
    ty * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 3.27930552576E+11));
  if (b_im_tmp == 0.0) {
    d_im_tmp = h_im_tmp / re_tmp_tmp;
    e_im_tmp = 0.0;
  } else if (h_im_tmp == 0.0) {
    d_im_tmp = 0.0;
    e_im_tmp = b_im_tmp / re_tmp_tmp;
  } else {
    d_im_tmp = rtNaN;
    e_im_tmp = b_im_tmp / re_tmp_tmp;
  }

  re_tmp_tmp = tx * (((tz * 0.0 + 5.0 * ty * ty / rt_hypotd_snf(tx, ty)) - 5.0 *
                      tx * (0.0 - tx) / rt_hypotd_snf(tx, ty)) *  sqrt
                     (((((((((((((((((((((((((-1.666993536E+10 * tz - 1250.0 *
    (ty * ty) * (tz * tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 * (ty * ty))
    - 625.0 * rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) + 234000.0 *
    rt_powd_snf(tz, 3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) + 8.90488E+7 * tx * ty
    *  sin(2.0 * rt_atan2d_snf(ty, tx))) + 8.90488E+7 * (tx * tx) * ((0.0 -
    tx) * (0.0 - tx)) / (xg_a * xg_a)) - 625.0 * rt_powd_snf(tx, 4.0) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
    8.90488E+7 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (yg_a * yg_a)) + 1250.0
    * rt_powd_snf(ty, 4.0) * ((0.0 - tx) * (0.0 - tx)) / (ah_a * ah_a)) - 625.0 *
    rt_powd_snf(ty, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf
    (rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * tx * rt_powd_snf(ty, 3.0) *  
    sin(2.0 * rt_atan2d_snf(ty, tx))) - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 -
    tx) * (0.0 - tx)) / (bh_a * bh_a)) + 3750.0 * (tx * tx) * (ty * ty) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
    1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (ch_a * ch_a))
    + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (dh_a * dh_a))
    + 234000.0 * tx * ty * tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) +
    234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 - tx)) / (eh_a * eh_a)) -
    234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx)) / (fh_a * fh_a)) -
    1250.0 * tx * ty * (tz * tz) *  sin(2.0 * rt_atan2d_snf(ty, tx))) -
                        2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf(0.0 -
    tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 *
                       rt_powd_snf(tx, 3.0) * ty * rt_powd_snf(0.0 - tx, 3.0) *
                       ty / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
                      3.27930552576E+11) + tz_im_tmp * ((((((4680.0 * tz - 25.0 *
    (ty * ty)) - 25.0 * (tz * tz)) - 25.0 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) - 25.0 * (tx * tx) * ((0.0 - tx) * (0.0 - tx)) /
    (gh_a * gh_a)) + 25.0 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (hh_a * hh_a))
    + 856176.0)) * (0.0 - tx);
  h_im_tmp = re_tmp_tmp * 0.0;
  b_im_tmp = re_tmp_tmp * 5.0;
  re_tmp_tmp = rt_hypotd_snf(tx, ty) * rt_hypotd_snf((tz * 0.0 + 5.0 * ty * ty /
    rt_hypotd_snf(tx, ty)) - 5.0 * tx * (0.0 - tx) / rt_hypotd_snf(tx, ty),
    tz_im_tmp) * rt_hypotd_snf(((((((-4680.0 * tz + 25.0 * (ty * ty)) + 25.0 *
    (tz * tz)) -  sqrt(((((((((((((((((((((((((-1.666993536E+10 * tz -
    1250.0 * (ty * ty) * (tz * tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 *
    (ty * ty)) - 625.0 * rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) +
    234000.0 * rt_powd_snf(tz, 3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) +
    8.90488E+7 * tx * ty *  sin(2.0 * rt_atan2d_snf(ty, tx))) + 8.90488E+7 *
    (tx * tx) * ((0.0 - tx) * (0.0 - tx)) / (ih_a * ih_a)) - 625.0 * rt_powd_snf
    (tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 8.90488E+7 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (jh_a * jh_a))
    + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0 - tx) * (0.0 - tx)) / (kh_a * kh_a))
    - 625.0 * rt_powd_snf(ty, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf
    (rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * tx * rt_powd_snf(ty, 3.0) *  
    sin(2.0 * rt_atan2d_snf(ty, tx))) - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 -
    tx) * (0.0 - tx)) / (lh_a * lh_a)) + 3750.0 * (tx * tx) * (ty * ty) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
    1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (mh_a * mh_a))
    + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (nh_a * nh_a))
    + 234000.0 * tx * ty * tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) +
    234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 - tx)) / (oh_a * oh_a)) -
    234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx)) / (ph_a * ph_a)) -
    1250.0 * tx * ty * (tz * tz) *  sin(2.0 * rt_atan2d_snf(ty, tx))) -
    2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf(0.0 - tx, 3.0) * ty /
    rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 * rt_powd_snf(tx, 3.0) *
    ty * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 3.27930552576E+11) * 0.0) + 25.0 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 25.0 * (tx * tx) * ((0.0 - tx) * (0.0 - tx)) /
    (qh_a * qh_a)) - 25.0 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (rh_a * rh_a))
    - 856176.0, 0.0 -  sqrt(((((((((((((((((((((((((-1.666993536E+10 * tz -
    1250.0 * (ty * ty) * (tz * tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 *
    (ty * ty)) - 625.0 * rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) +
    234000.0 * rt_powd_snf(tz, 3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) +
    8.90488E+7 * tx * ty *  sin(2.0 * rt_atan2d_snf(ty, tx))) + 8.90488E+7 *
    (tx * tx) * ((0.0 - tx) * (0.0 - tx)) / (ih_a * ih_a)) - 625.0 * rt_powd_snf
    (tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 8.90488E+7 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (jh_a * jh_a))
    + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0 - tx) * (0.0 - tx)) / (kh_a * kh_a))
    - 625.0 * rt_powd_snf(ty, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf
    (rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * tx * rt_powd_snf(ty, 3.0) *  
    sin(2.0 * rt_atan2d_snf(ty, tx))) - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 -
    tx) * (0.0 - tx)) / (lh_a * lh_a)) + 3750.0 * (tx * tx) * (ty * ty) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
    1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (mh_a * mh_a))
    + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (nh_a * nh_a))
    + 234000.0 * tx * ty * tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) +
    234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 - tx)) / (oh_a * oh_a)) -
    234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx)) / (ph_a * ph_a)) -
    1250.0 * tx * ty * (tz * tz) *  sin(2.0 * rt_atan2d_snf(ty, tx))) -
    2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf(0.0 - tx, 3.0) * ty /
    rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 * rt_powd_snf(tx, 3.0) *
    ty * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 3.27930552576E+11));
  if (b_im_tmp == 0.0) {
    h_im_tmp /= re_tmp_tmp;
    re_tmp_tmp = 0.0;
  } else if (h_im_tmp == 0.0) {
    h_im_tmp = 0.0;
    re_tmp_tmp = b_im_tmp / re_tmp_tmp;
  } else {
    h_im_tmp = rtNaN;
    re_tmp_tmp = b_im_tmp / re_tmp_tmp;
  }

  re_tmp =  sqrt((((((((b_x_re_tmp + f_re_tmp) + 25.0 * (tx * tx) * ((0.0 -
    tx) * (0.0 - tx)) / (a * a)) - 25.0 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) /
    (b_a * b_a)) - 636480.0 * (((tz * 0.0 + 5.0 * ty * ty / rt_hypotd_snf(tx, ty))
    - 5.0 * tx * (0.0 - tx) / rt_hypotd_snf(tx, ty)) *  sqrt
    (((((((((((((((((((((((((-1.666993536E+10 * tz - 1250.0 * (ty * ty) * (tz *
    tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 * (ty * ty)) - 625.0 *
    rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) + 234000.0 * rt_powd_snf(tz,
    3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) + 8.90488E+7 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 8.90488E+7 * (tx * tx) * ((0.0 - tx) * (0.0 - tx))
    / (c_a * c_a)) - 625.0 * rt_powd_snf(tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0) /
    rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 8.90488E+7 * (ty * ty) * ((0.0 -
    tx) * (0.0 - tx)) / (d_a * d_a)) + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0 -
    tx) * (0.0 - tx)) / (e_a * e_a)) - 625.0 * rt_powd_snf(ty, 4.0) *
                 rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 1250.0 * tx * rt_powd_snf(ty, 3.0) *  sin(2.0 * rt_atan2d_snf(ty,
    tx))) - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (f_a *
    f_a)) + 3750.0 * (tx * tx) * (ty * ty) * rt_powd_snf(0.0 - tx, 4.0) /
              rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * (tx * tx) *
             (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (g_a * g_a)) + 1250.0 * (ty
    * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (h_a * h_a)) + 234000.0 * tx
           * ty * tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) + 234000.0 * (tx *
    tx) * tz * ((0.0 - tx) * (0.0 - tx)) / (i_a * i_a)) - 234000.0 * (ty * ty) *
         tz * ((0.0 - tx) * (0.0 - tx)) / (j_a * j_a)) - 1250.0 * tx * ty * (tz *
    tz) *  sin(2.0 * rt_atan2d_snf(ty, tx))) - 2500.0 * tx * rt_powd_snf(ty,
    3.0) * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) + 2500.0 * rt_powd_snf(tx, 3.0) * ty * rt_powd_snf(0.0 - tx, 3.0) * ty
      / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 3.27930552576E+11) +
    tz_im_tmp * ((((((4680.0 * tz - 25.0 * (ty * ty)) - 25.0 * (tz * tz)) - 25.0
                    * tx * ty *  sin(2.0 * rt_atan2d_snf(ty, tx))) - 25.0 *
                   (tx * tx) * ((0.0 - tx) * (0.0 - tx)) / (k_a * k_a)) + 25.0 *
                  (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (l_a * l_a)) +
                 856176.0)) / (rt_hypotd_snf((tz * 0.0 + 5.0 * ty * ty /
    rt_hypotd_snf(tx, ty)) - 5.0 * tx * (0.0 - tx) / rt_hypotd_snf(tx, ty),
    tz_im_tmp) * rt_hypotd_snf(((((b_x_re_tmp - x_re_tmp * 0.0) + f_re_tmp) +
    25.0 * (tx * tx) * ((0.0 - tx) * (0.0 - tx)) / (u_a * u_a)) - 25.0 * (ty *
    ty) * ((0.0 - tx) * (0.0 - tx)) / (v_a * v_a)) - 856176.0, 0.0 - x_re_tmp)))
                        + 6800.0 * tz * (((tz * 0.0 + 5.0 * ty * ty /
    rt_hypotd_snf(tx, ty)) - 5.0 * tx * (0.0 - tx) / rt_hypotd_snf(tx, ty)) *
     sqrt(((((((((((((((((((((((((-1.666993536E+10 * tz - 1250.0 * (ty * ty)
    * (tz * tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 * (ty * ty)) - 625.0 *
    rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) + 234000.0 * rt_powd_snf(tz,
    3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) + 8.90488E+7 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 8.90488E+7 * (tx * tx) * ((0.0 - tx) * (0.0 - tx))
    / (m_a * m_a)) - 625.0 * rt_powd_snf(tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0) /
    rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 8.90488E+7 * (ty * ty) * ((0.0 -
    tx) * (0.0 - tx)) / (n_a * n_a)) + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0 -
    tx) * (0.0 - tx)) / (o_a * o_a)) - 625.0 * rt_powd_snf(ty, 4.0) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
    1250.0 * tx * rt_powd_snf(ty, 3.0) *  sin(2.0 * rt_atan2d_snf(ty, tx)))
                        - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 - tx) * (0.0 -
    tx)) / (p_a * p_a)) + 3750.0 * (tx * tx) * (ty * ty) * rt_powd_snf(0.0 - tx,
    4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * (tx * tx) * (tz *
    tz) * ((0.0 - tx) * (0.0 - tx)) / (q_a * q_a)) + 1250.0 * (ty * ty) * (tz *
    tz) * ((0.0 - tx) * (0.0 - tx)) / (r_a * r_a)) + 234000.0 * tx * ty * tz *
                     sin(2.0 * rt_atan2d_snf(ty, tx))) + 234000.0 * (tx * tx)
                   * tz * ((0.0 - tx) * (0.0 - tx)) / (s_a * s_a)) - 234000.0 *
                  (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx)) / (t_a * t_a)) -
                 1250.0 * tx * ty * (tz * tz) *  sin(2.0 * rt_atan2d_snf(ty,
    tx))) - 2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf(0.0 - tx, 3.0) * ty
                / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 *
               rt_powd_snf(tx, 3.0) * ty * rt_powd_snf(0.0 - tx, 3.0) * ty /
               rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 3.27930552576E+11) +
    tz_im_tmp * ((((((4680.0 * tz - 25.0 * (ty * ty)) - 25.0 * (tz * tz)) - 25.0
                    * tx * ty *  sin(2.0 * rt_atan2d_snf(ty, tx))) - 25.0 *
                   (tx * tx) * ((0.0 - tx) * (0.0 - tx)) / (w_a * w_a)) + 25.0 *
                  (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (x_a * x_a)) +
                 856176.0)) / (rt_hypotd_snf((tz * 0.0 + 5.0 * ty * ty /
    rt_hypotd_snf(tx, ty)) - 5.0 * tx * (0.0 - tx) / rt_hypotd_snf(tx, ty),
    tz_im_tmp) * rt_hypotd_snf(((((((-4680.0 * tz + 25.0 * (ty * ty)) + 25.0 *
    (tz * tz)) -  sqrt(((((((((((((((((((((((((-1.666993536E+10 * tz -
    1250.0 * (ty * ty) * (tz * tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 *
    (ty * ty)) - 625.0 * rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) +
    234000.0 * rt_powd_snf(tz, 3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) +
    8.90488E+7 * tx * ty *  sin(2.0 * rt_atan2d_snf(ty, tx))) + 8.90488E+7 *
    (tx * tx) * ((0.0 - tx) * (0.0 - tx)) / (y_a * y_a)) - 625.0 * rt_powd_snf
    (tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 8.90488E+7 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (ab_a * ab_a))
    + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0 - tx) * (0.0 - tx)) / (bb_a * bb_a))
    - 625.0 * rt_powd_snf(ty, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf
    (rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * tx * rt_powd_snf(ty, 3.0) *  
    sin(2.0 * rt_atan2d_snf(ty, tx))) - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 -
    tx) * (0.0 - tx)) / (cb_a * cb_a)) + 3750.0 * (tx * tx) * (ty * ty) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
    1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (db_a * db_a))
    + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (eb_a * eb_a))
    + 234000.0 * tx * ty * tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) +
    234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 - tx)) / (fb_a * fb_a)) -
    234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx)) / (gb_a * gb_a)) -
    1250.0 * tx * ty * (tz * tz) *  sin(2.0 * rt_atan2d_snf(ty, tx))) -
    2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf(0.0 - tx, 3.0) * ty /
    rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 * rt_powd_snf(tx, 3.0) *
    ty * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 3.27930552576E+11) * 0.0) + 25.0 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 25.0 * (tx * tx) * ((0.0 - tx) * (0.0 - tx)) /
    (hb_a * hb_a)) - 25.0 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (ib_a * ib_a))
    - 856176.0, 0.0 -  sqrt(((((((((((((((((((((((((-1.666993536E+10 * tz -
    1250.0 * (ty * ty) * (tz * tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 *
    (ty * ty)) - 625.0 * rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) +
    234000.0 * rt_powd_snf(tz, 3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) +
    8.90488E+7 * tx * ty *  sin(2.0 * rt_atan2d_snf(ty, tx))) + 8.90488E+7 *
    (tx * tx) * ((0.0 - tx) * (0.0 - tx)) / (y_a * y_a)) - 625.0 * rt_powd_snf
    (tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 8.90488E+7 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (ab_a * ab_a))
    + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0 - tx) * (0.0 - tx)) / (bb_a * bb_a))
    - 625.0 * rt_powd_snf(ty, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf
    (rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * tx * rt_powd_snf(ty, 3.0) *  
    sin(2.0 * rt_atan2d_snf(ty, tx))) - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 -
    tx) * (0.0 - tx)) / (cb_a * cb_a)) + 3750.0 * (tx * tx) * (ty * ty) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
    1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (db_a * db_a))
    + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (eb_a * eb_a))
    + 234000.0 * tx * ty * tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) +
    234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 - tx)) / (fb_a * fb_a)) -
    234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx)) / (gb_a * gb_a)) -
    1250.0 * tx * ty * (tz * tz) *  sin(2.0 * rt_atan2d_snf(ty, tx))) -
    2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf(0.0 - tx, 3.0) * ty /
    rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 * rt_powd_snf(tx, 3.0) *
    ty * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 3.27930552576E+11)))) + 6800.0 * ty * (((tz * 0.0 + 5.0 * ty * ty /
    rt_hypotd_snf(tx, ty)) - 5.0 * tx * (0.0 - tx) / rt_hypotd_snf(tx, ty)) *
    ((((((4680.0 * tz - 25.0 * (ty * ty)) - 25.0 * (tz * tz)) - 25.0 * tx * ty *
         sin(2.0 * rt_atan2d_snf(ty, tx))) - 25.0 * (tx * tx) * ((0.0 - tx) *
    (0.0 - tx)) / (rb_a * rb_a)) + 25.0 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) /
      (sb_a * sb_a)) + 856176.0) - tz_im_tmp *  sqrt
    (((((((((((((((((((((((((-1.666993536E+10 * tz - 1250.0 * (ty * ty) * (tz *
    tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 * (ty * ty)) - 625.0 *
    rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) + 234000.0 * rt_powd_snf(tz,
    3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) + 8.90488E+7 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 8.90488E+7 * (tx * tx) * ((0.0 - tx) * (0.0 - tx))
    / (jb_a * jb_a)) - 625.0 * rt_powd_snf(tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0)
    / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 8.90488E+7 * (ty * ty) * ((0.0
    - tx) * (0.0 - tx)) / (kb_a * kb_a)) + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0
    - tx) * (0.0 - tx)) / (lb_a * lb_a)) - 625.0 * rt_powd_snf(ty, 4.0) *
                 rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 1250.0 * tx * rt_powd_snf(ty, 3.0) *  sin(2.0 * rt_atan2d_snf(ty,
    tx))) - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (mb_a *
    mb_a)) + 3750.0 * (tx * tx) * (ty * ty) * rt_powd_snf(0.0 - tx, 4.0) /
              rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * (tx * tx) *
             (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (nb_a * nb_a)) + 1250.0 *
            (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (ob_a * ob_a)) +
           234000.0 * tx * ty * tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) +
          234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 - tx)) / (pb_a * pb_a))
         - 234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx)) / (qb_a * qb_a))
        - 1250.0 * tx * ty * (tz * tz) *  sin(2.0 * rt_atan2d_snf(ty, tx)))
       - 2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf(0.0 - tx, 3.0) * ty /
       rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 * rt_powd_snf(tx, 3.0) *
      ty * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 3.27930552576E+11)) * ty / (rt_hypotd_snf(tx, ty) * rt_hypotd_snf
    ((tz * 0.0 + 5.0 * ty * ty / rt_hypotd_snf(tx, ty)) - 5.0 * tx * (0.0 - tx) /
     rt_hypotd_snf(tx, ty), tz_im_tmp) * rt_hypotd_snf(((((((-4680.0 * tz + 25.0
    * (ty * ty)) + 25.0 * (tz * tz)) -  sqrt
    (((((((((((((((((((((((((-1.666993536E+10 * tz - 1250.0 * (ty * ty) * (tz *
    tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 * (ty * ty)) - 625.0 *
    rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) + 234000.0 * rt_powd_snf(tz,
    3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) + 8.90488E+7 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 8.90488E+7 * (tx * tx) * ((0.0 - tx) * (0.0 - tx))
    / (tb_a * tb_a)) - 625.0 * rt_powd_snf(tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0)
    / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 8.90488E+7 * (ty * ty) * ((0.0
    - tx) * (0.0 - tx)) / (ub_a * ub_a)) + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0
    - tx) * (0.0 - tx)) / (vb_a * vb_a)) - 625.0 * rt_powd_snf(ty, 4.0) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
    1250.0 * tx * rt_powd_snf(ty, 3.0) *  sin(2.0 * rt_atan2d_snf(ty, tx)))
    - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (wb_a * wb_a))
              + 3750.0 * (tx * tx) * (ty * ty) * rt_powd_snf(0.0 - tx, 4.0) /
              rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * (tx * tx) *
             (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (xb_a * xb_a)) + 1250.0 *
            (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (yb_a * yb_a)) +
           234000.0 * tx * ty * tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) +
          234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 - tx)) / (ac_a * ac_a))
         - 234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx)) / (bc_a * bc_a))
        - 1250.0 * tx * ty * (tz * tz) *  sin(2.0 * rt_atan2d_snf(ty, tx)))
       - 2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf(0.0 - tx, 3.0) * ty /
       rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 * rt_powd_snf(tx, 3.0) *
      ty * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 3.27930552576E+11) * 0.0) + 25.0 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 25.0 * (tx * tx) * ((0.0 - tx) * (0.0 - tx)) /
    (cc_a * cc_a)) - 25.0 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (dc_a * dc_a))
    - 856176.0, 0.0 -  sqrt(((((((((((((((((((((((((-1.666993536E+10 * tz -
    1250.0 * (ty * ty) * (tz * tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 *
    (ty * ty)) - 625.0 * rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) +
    234000.0 * rt_powd_snf(tz, 3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) +
    8.90488E+7 * tx * ty *  sin(2.0 * rt_atan2d_snf(ty, tx))) + 8.90488E+7 *
    (tx * tx) * ((0.0 - tx) * (0.0 - tx)) / (tb_a * tb_a)) - 625.0 * rt_powd_snf
    (tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 8.90488E+7 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (ub_a * ub_a))
    + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0 - tx) * (0.0 - tx)) / (vb_a * vb_a))
    - 625.0 * rt_powd_snf(ty, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf
    (rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * tx * rt_powd_snf(ty, 3.0) *  
    sin(2.0 * rt_atan2d_snf(ty, tx))) - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 -
    tx) * (0.0 - tx)) / (wb_a * wb_a)) + 3750.0 * (tx * tx) * (ty * ty) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
    1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (xb_a * xb_a))
    + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (yb_a * yb_a))
    + 234000.0 * tx * ty * tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) +
    234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 - tx)) / (ac_a * ac_a)) -
    234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx)) / (bc_a * bc_a)) -
    1250.0 * tx * ty * (tz * tz) *  sin(2.0 * rt_atan2d_snf(ty, tx))) -
    2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf(0.0 - tx, 3.0) * ty /
    rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 * rt_powd_snf(tx, 3.0) *
    ty * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 3.27930552576E+11)))) - 6800.0 * tx * (((tz * 0.0 + 5.0 * ty * ty /
    rt_hypotd_snf(tx, ty)) - 5.0 * tx * (0.0 - tx) / rt_hypotd_snf(tx, ty)) *
    ((((((4680.0 * tz - 25.0 * (ty * ty)) - 25.0 * (tz * tz)) - 25.0 * tx * ty *
         sin(2.0 * rt_atan2d_snf(ty, tx))) - 25.0 * (tx * tx) * ((0.0 - tx) *
    (0.0 - tx)) / (mc_a * mc_a)) + 25.0 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) /
      (nc_a * nc_a)) + 856176.0) - tz_im_tmp *  sqrt
    (((((((((((((((((((((((((-1.666993536E+10 * tz - 1250.0 * (ty * ty) * (tz *
    tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 * (ty * ty)) - 625.0 *
    rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) + 234000.0 * rt_powd_snf(tz,
    3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) + 8.90488E+7 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 8.90488E+7 * (tx * tx) * ((0.0 - tx) * (0.0 - tx))
    / (ec_a * ec_a)) - 625.0 * rt_powd_snf(tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0)
                    / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 8.90488E+7 *
                   (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (fc_a * fc_a)) +
                  1250.0 * rt_powd_snf(ty, 4.0) * ((0.0 - tx) * (0.0 - tx)) /
                  (gc_a * gc_a)) - 625.0 * rt_powd_snf(ty, 4.0) * rt_powd_snf
                 (0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
                1250.0 * tx * rt_powd_snf(ty, 3.0) *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 - tx) *
    (0.0 - tx)) / (hc_a * hc_a)) + 3750.0 * (tx * tx) * (ty * ty) * rt_powd_snf
              (0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
             1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (ic_a *
    ic_a)) + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (jc_a *
    jc_a)) + 234000.0 * tx * ty * tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) +
          234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 - tx)) / (kc_a * kc_a))
         - 234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx)) / (lc_a * lc_a))
        - 1250.0 * tx * ty * (tz * tz) *  sin(2.0 * rt_atan2d_snf(ty, tx)))
       - 2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf(0.0 - tx, 3.0) * ty /
       rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 * rt_powd_snf(tx, 3.0) *
      ty * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 3.27930552576E+11)) * (0.0 - tx) / (rt_hypotd_snf(tx, ty) *
    rt_hypotd_snf((tz * 0.0 + 5.0 * ty * ty / rt_hypotd_snf(tx, ty)) - 5.0 * tx *
                  (0.0 - tx) / rt_hypotd_snf(tx, ty), tz_im_tmp) * rt_hypotd_snf
    (((((((-4680.0 * tz + 25.0 * (ty * ty)) + 25.0 * (tz * tz)) -  sqrt
         (((((((((((((((((((((((((-1.666993536E+10 * tz - 1250.0 * (ty * ty) *
    (tz * tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 * (ty * ty)) - 625.0 *
    rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) + 234000.0 * rt_powd_snf(tz,
    3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) + 8.90488E+7 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 8.90488E+7 * (tx * tx) * ((0.0 - tx) * (0.0 - tx))
    / (oc_a * oc_a)) - 625.0 * rt_powd_snf(tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0)
    / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 8.90488E+7 * (ty * ty) * ((0.0
    - tx) * (0.0 - tx)) / (pc_a * pc_a)) + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0
    - tx) * (0.0 - tx)) / (qc_a * qc_a)) - 625.0 * rt_powd_snf(ty, 4.0) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
    1250.0 * tx * rt_powd_snf(ty, 3.0) *  sin(2.0 * rt_atan2d_snf(ty, tx)))
                    - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 - tx) * (0.0 - tx))
                    / (rc_a * rc_a)) + 3750.0 * (tx * tx) * (ty * ty) *
                   rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (sc_a *
    sc_a)) + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (tc_a *
    tc_a)) + 234000.0 * tx * ty * tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) +
               234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 - tx)) / (uc_a *
    uc_a)) - 234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx)) / (vc_a *
    vc_a)) - 1250.0 * tx * ty * (tz * tz) *  sin(2.0 * rt_atan2d_snf(ty, tx)))
            - 2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf(0.0 - tx, 3.0) *
            ty / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 * rt_powd_snf
           (tx, 3.0) * ty * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf
           (rt_hypotd_snf(tx, ty), 4.0)) - 3.27930552576E+11) * 0.0) + 25.0 * tx
        * ty *  sin(2.0 * rt_atan2d_snf(ty, tx))) + 25.0 * (tx * tx) * ((0.0
    - tx) * (0.0 - tx)) / (wc_a * wc_a)) - 25.0 * (ty * ty) * ((0.0 - tx) * (0.0
    - tx)) / (xc_a * xc_a)) - 856176.0, 0.0 -  sqrt(((((((((((((((((((((((((
    -1.666993536E+10 * tz - 1250.0 * (ty * ty) * (tz * tz)) + 234000.0 * (ty *
    ty) * tz) + 8.90488E+7 * (ty * ty)) - 625.0 * rt_powd_snf(ty, 4.0)) +
    6.71464E+7 * (tz * tz)) + 234000.0 * rt_powd_snf(tz, 3.0)) - 625.0 *
    rt_powd_snf(tz, 4.0)) + 8.90488E+7 * tx * ty *  sin(2.0 * rt_atan2d_snf
    (ty, tx))) + 8.90488E+7 * (tx * tx) * ((0.0 - tx) * (0.0 - tx)) / (oc_a *
    oc_a)) - 625.0 * rt_powd_snf(tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0) /
    rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 8.90488E+7 * (ty * ty) * ((0.0 -
    tx) * (0.0 - tx)) / (pc_a * pc_a)) + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0 -
    tx) * (0.0 - tx)) / (qc_a * qc_a)) - 625.0 * rt_powd_snf(ty, 4.0) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
    1250.0 * tx * rt_powd_snf(ty, 3.0) *  sin(2.0 * rt_atan2d_snf(ty, tx)))
    - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (rc_a * rc_a))
    + 3750.0 * (tx * tx) * (ty * ty) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf
    (rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx)
    * (0.0 - tx)) / (sc_a * sc_a)) + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 - tx)
    * (0.0 - tx)) / (tc_a * tc_a)) + 234000.0 * tx * ty * tz *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 -
    tx)) / (uc_a * uc_a)) - 234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx))
    / (vc_a * vc_a)) - 1250.0 * tx * ty * (tz * tz) *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) - 2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf
    (0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 *
    rt_powd_snf(tx, 3.0) * ty * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf
    (rt_hypotd_snf(tx, ty), 4.0)) - 3.27930552576E+11)))) - 856176.0);
  b_im_tmp = -(re_tmp * 0.0 + 1240.0);
  h_im_tmp = (((((((-(468.0 * (((tz * 0.0 + 5.0 * ty * ty / rt_hypotd_snf(tx, ty))
    - 5.0 * tx * (0.0 - tx) / rt_hypotd_snf(tx, ty)) *  sqrt
    (((((((((((((((((((((((((-1.666993536E+10 * tz - 1250.0 * (ty * ty) * (tz *
    tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 * (ty * ty)) - 625.0 *
    rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) + 234000.0 * rt_powd_snf(tz,
    3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) + 8.90488E+7 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 8.90488E+7 * (tx * tx) * ((0.0 - tx) * (0.0 - tx))
    / (yc_a * yc_a)) - 625.0 * rt_powd_snf(tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0)
    / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 8.90488E+7 * (ty * ty) * ((0.0
    - tx) * (0.0 - tx)) / (ad_a * ad_a)) + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0
    - tx) * (0.0 - tx)) / (bd_a * bd_a)) - 625.0 * rt_powd_snf(ty, 4.0) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
    1250.0 * tx * rt_powd_snf(ty, 3.0) *  sin(2.0 * rt_atan2d_snf(ty, tx)))
    - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (cd_a * cd_a))
              + 3750.0 * (tx * tx) * (ty * ty) * rt_powd_snf(0.0 - tx, 4.0) /
              rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * (tx * tx) *
             (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (dd_a * dd_a)) + 1250.0 *
            (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (ed_a * ed_a)) +
           234000.0 * tx * ty * tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) +
          234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 - tx)) / (fd_a * fd_a))
         - 234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx)) / (gd_a * gd_a))
        - 1250.0 * tx * ty * (tz * tz) *  sin(2.0 * rt_atan2d_snf(ty, tx)))
       - 2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf(0.0 - tx, 3.0) * ty /
       rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 * rt_powd_snf(tx, 3.0) *
      ty * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 3.27930552576E+11) + tz_im_tmp * ((((((4680.0 * tz - 25.0 * (ty * ty))
    - 25.0 * (tz * tz)) - 25.0 * tx * ty *  sin(2.0 * rt_atan2d_snf(ty, tx)))
    - 25.0 * (tx * tx) * ((0.0 - tx) * (0.0 - tx)) / (hd_a * hd_a)) + 25.0 * (ty
    * ty) * ((0.0 - tx) * (0.0 - tx)) / (id_a * id_a)) + 856176.0))) /
                    (rt_hypotd_snf((tz * 0.0 + 5.0 * ty * ty / rt_hypotd_snf(tx,
    ty)) - 5.0 * tx * (0.0 - tx) / rt_hypotd_snf(tx, ty), tz_im_tmp) *
                     rt_hypotd_snf(((((((-4680.0 * tz + 25.0 * (ty * ty)) + 25.0
    * (tz * tz)) -  sqrt(((((((((((((((((((((((((-1.666993536E+10 * tz -
    1250.0 * (ty * ty) * (tz * tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 *
    (ty * ty)) - 625.0 * rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) +
    234000.0 * rt_powd_snf(tz, 3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) +
    8.90488E+7 * tx * ty *  sin(2.0 * rt_atan2d_snf(ty, tx))) + 8.90488E+7 *
    (tx * tx) * ((0.0 - tx) * (0.0 - tx)) / (jd_a * jd_a)) - 625.0 * rt_powd_snf
    (tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 8.90488E+7 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (kd_a * kd_a))
    + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0 - tx) * (0.0 - tx)) / (ld_a * ld_a))
    - 625.0 * rt_powd_snf(ty, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf
    (rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * tx * rt_powd_snf(ty, 3.0) *  
    sin(2.0 * rt_atan2d_snf(ty, tx))) - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 -
    tx) * (0.0 - tx)) / (md_a * md_a)) + 3750.0 * (tx * tx) * (ty * ty) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
    1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (nd_a * nd_a))
    + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (od_a * od_a))
    + 234000.0 * tx * ty * tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) +
    234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 - tx)) / (pd_a * pd_a)) -
    234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx)) / (qd_a * qd_a)) -
    1250.0 * tx * ty * (tz * tz) *  sin(2.0 * rt_atan2d_snf(ty, tx))) -
    2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf(0.0 - tx, 3.0) * ty /
    rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 * rt_powd_snf(tx, 3.0) *
    ty * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 3.27930552576E+11) * 0.0) + 25.0 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 25.0 * (tx * tx) * ((0.0 - tx) * (0.0 - tx)) /
    (rd_a * rd_a)) - 25.0 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (sd_a * sd_a))
    - 856176.0, 0.0 -  sqrt(((((((((((((((((((((((((-1.666993536E+10 * tz -
    1250.0 * (ty * ty) * (tz * tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 *
    (ty * ty)) - 625.0 * rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) +
    234000.0 * rt_powd_snf(tz, 3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) +
    8.90488E+7 * tx * ty *  sin(2.0 * rt_atan2d_snf(ty, tx))) + 8.90488E+7 *
    (tx * tx) * ((0.0 - tx) * (0.0 - tx)) / (jd_a * jd_a)) - 625.0 * rt_powd_snf
    (tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 8.90488E+7 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (kd_a * kd_a))
    + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0 - tx) * (0.0 - tx)) / (ld_a * ld_a))
    - 625.0 * rt_powd_snf(ty, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf
    (rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * tx * rt_powd_snf(ty, 3.0) *  
    sin(2.0 * rt_atan2d_snf(ty, tx))) - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 -
    tx) * (0.0 - tx)) / (md_a * md_a)) + 3750.0 * (tx * tx) * (ty * ty) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
    1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (nd_a * nd_a))
    + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (od_a * od_a))
    + 234000.0 * tx * ty * tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) +
    234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 - tx)) / (pd_a * pd_a)) -
    234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx)) / (qd_a * qd_a)) -
    1250.0 * tx * ty * (tz * tz) *  sin(2.0 * rt_atan2d_snf(ty, tx))) -
    2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf(0.0 - tx, 3.0) * ty /
    rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 * rt_powd_snf(tx, 3.0) *
    ty * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 3.27930552576E+11))) - d_re_tmp) + 5.0 * tz * (((tz * 0.0 + 5.0 * ty
    * ty / rt_hypotd_snf(tx, ty)) - 5.0 * tx * (0.0 - tx) / rt_hypotd_snf(tx, ty))
    *  sqrt(((((((((((((((((((((((((-1.666993536E+10 * tz - 1250.0 * (ty *
    ty) * (tz * tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 * (ty * ty)) -
    625.0 * rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) + 234000.0 *
    rt_powd_snf(tz, 3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) + 8.90488E+7 * tx * ty
    *  sin(2.0 * rt_atan2d_snf(ty, tx))) + 8.90488E+7 * (tx * tx) * ((0.0 -
    tx) * (0.0 - tx)) / (td_a * td_a)) - 625.0 * rt_powd_snf(tx, 4.0) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
    8.90488E+7 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (ud_a * ud_a)) + 1250.0
    * rt_powd_snf(ty, 4.0) * ((0.0 - tx) * (0.0 - tx)) / (vd_a * vd_a)) - 625.0 *
    rt_powd_snf(ty, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf
    (rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * tx * rt_powd_snf(ty, 3.0) *  
    sin(2.0 * rt_atan2d_snf(ty, tx))) - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 -
    tx) * (0.0 - tx)) / (wd_a * wd_a)) + 3750.0 * (tx * tx) * (ty * ty) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
                        1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx))
                        / (xd_a * xd_a)) + 1250.0 * (ty * ty) * (tz * tz) *
                       ((0.0 - tx) * (0.0 - tx)) / (yd_a * yd_a)) + 234000.0 *
                      tx * ty * tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) +
                     234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 - tx)) /
                     (ae_a * ae_a)) - 234000.0 * (ty * ty) * tz * ((0.0 - tx) *
    (0.0 - tx)) / (be_a * be_a)) - 1250.0 * tx * ty * (tz * tz) *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) - 2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf
                  (0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0))
                 + 2500.0 * rt_powd_snf(tx, 3.0) * ty * rt_powd_snf(0.0 - tx,
    3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 3.27930552576E+11) +
    tz_im_tmp * ((((((4680.0 * tz - 25.0 * (ty * ty)) - 25.0 * (tz * tz)) - 25.0
                    * tx * ty *  sin(2.0 * rt_atan2d_snf(ty, tx))) - 25.0 *
                   (tx * tx) * ((0.0 - tx) * (0.0 - tx)) / (ce_a * ce_a)) + 25.0
                  * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (de_a * de_a)) +
                 856176.0)) / (rt_hypotd_snf((tz * 0.0 + 5.0 * ty * ty /
    rt_hypotd_snf(tx, ty)) - 5.0 * tx * (0.0 - tx) / rt_hypotd_snf(tx, ty),
    tz_im_tmp) * rt_hypotd_snf(((((((-4680.0 * tz + 25.0 * (ty * ty)) + 25.0 *
    (tz * tz)) -  sqrt(((((((((((((((((((((((((-1.666993536E+10 * tz -
    1250.0 * (ty * ty) * (tz * tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 *
    (ty * ty)) - 625.0 * rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) +
    234000.0 * rt_powd_snf(tz, 3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) +
    8.90488E+7 * tx * ty *  sin(2.0 * rt_atan2d_snf(ty, tx))) + 8.90488E+7 *
    (tx * tx) * ((0.0 - tx) * (0.0 - tx)) / (ee_a * ee_a)) - 625.0 * rt_powd_snf
    (tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 8.90488E+7 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (fe_a * fe_a))
    + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0 - tx) * (0.0 - tx)) / (ge_a * ge_a))
    - 625.0 * rt_powd_snf(ty, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf
    (rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * tx * rt_powd_snf(ty, 3.0) *  
    sin(2.0 * rt_atan2d_snf(ty, tx))) - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 -
    tx) * (0.0 - tx)) / (he_a * he_a)) + 3750.0 * (tx * tx) * (ty * ty) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
    1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (ie_a * ie_a))
    + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (je_a * je_a))
    + 234000.0 * tx * ty * tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) +
    234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 - tx)) / (ke_a * ke_a)) -
    234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx)) / (le_a * le_a)) -
    1250.0 * tx * ty * (tz * tz) *  sin(2.0 * rt_atan2d_snf(ty, tx))) -
    2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf(0.0 - tx, 3.0) * ty /
    rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 * rt_powd_snf(tx, 3.0) *
    ty * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 3.27930552576E+11) * 0.0) + 25.0 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 25.0 * (tx * tx) * ((0.0 - tx) * (0.0 - tx)) /
    (me_a * me_a)) - 25.0 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (ne_a * ne_a))
    - 856176.0, 0.0 -  sqrt(((((((((((((((((((((((((-1.666993536E+10 * tz -
    1250.0 * (ty * ty) * (tz * tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 *
    (ty * ty)) - 625.0 * rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) +
    234000.0 * rt_powd_snf(tz, 3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) +
    8.90488E+7 * tx * ty *  sin(2.0 * rt_atan2d_snf(ty, tx))) + 8.90488E+7 *
    (tx * tx) * ((0.0 - tx) * (0.0 - tx)) / (ee_a * ee_a)) - 625.0 * rt_powd_snf
    (tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 8.90488E+7 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (fe_a * fe_a))
    + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0 - tx) * (0.0 - tx)) / (ge_a * ge_a))
    - 625.0 * rt_powd_snf(ty, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf
    (rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * tx * rt_powd_snf(ty, 3.0) *  
    sin(2.0 * rt_atan2d_snf(ty, tx))) - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 -
    tx) * (0.0 - tx)) / (he_a * he_a)) + 3750.0 * (tx * tx) * (ty * ty) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
    1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (ie_a * ie_a))
    + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (je_a * je_a))
    + 234000.0 * tx * ty * tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) +
    234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 - tx)) / (ke_a * ke_a)) -
    234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx)) / (le_a * le_a)) -
    1250.0 * tx * ty * (tz * tz) *  sin(2.0 * rt_atan2d_snf(ty, tx))) -
    2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf(0.0 - tx, 3.0) * ty /
    rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 * rt_powd_snf(tx, 3.0) *
    ty * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 3.27930552576E+11)))) + c_re_tmp) - d_im_tmp) + 5.0 * ty * (((tz *
    0.0 + 5.0 * ty * ty / rt_hypotd_snf(tx, ty)) - 5.0 * tx * (0.0 - tx) /
    rt_hypotd_snf(tx, ty)) * ((((((4680.0 * tz - 25.0 * (ty * ty)) - 25.0 * (tz *
    tz)) - 25.0 * tx * ty *  sin(2.0 * rt_atan2d_snf(ty, tx))) - 25.0 * (tx *
    tx) * ((0.0 - tx) * (0.0 - tx)) / (lg_a * lg_a)) + 25.0 * (ty * ty) * ((0.0
    - tx) * (0.0 - tx)) / (mg_a * mg_a)) + 856176.0) - tz_im_tmp *  sqrt
    (((((((((((((((((((((((((-1.666993536E+10 * tz - 1250.0 * (ty * ty) * (tz *
    tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 * (ty * ty)) - 625.0 *
    rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) + 234000.0 * rt_powd_snf(tz,
    3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) + 8.90488E+7 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 8.90488E+7 * (tx * tx) * ((0.0 - tx) * (0.0 - tx))
    / (dg_a * dg_a)) - 625.0 * rt_powd_snf(tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0)
    / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 8.90488E+7 * (ty * ty) * ((0.0
    - tx) * (0.0 - tx)) / (eg_a * eg_a)) + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0
    - tx) * (0.0 - tx)) / (fg_a * fg_a)) - 625.0 * rt_powd_snf(ty, 4.0) *
                 rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 1250.0 * tx * rt_powd_snf(ty, 3.0) *  sin(2.0 * rt_atan2d_snf(ty,
    tx))) - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (gg_a *
    gg_a)) + 3750.0 * (tx * tx) * (ty * ty) * rt_powd_snf(0.0 - tx, 4.0) /
              rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * (tx * tx) *
             (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (hg_a * hg_a)) + 1250.0 *
            (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (ig_a * ig_a)) +
           234000.0 * tx * ty * tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) +
          234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 - tx)) / (jg_a * jg_a))
         - 234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx)) / (kg_a * kg_a))
        - 1250.0 * tx * ty * (tz * tz) *  sin(2.0 * rt_atan2d_snf(ty, tx)))
       - 2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf(0.0 - tx, 3.0) * ty /
       rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 * rt_powd_snf(tx, 3.0) *
      ty * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 3.27930552576E+11)) * ty / (rt_hypotd_snf(tx, ty) * rt_hypotd_snf
    ((tz * 0.0 + 5.0 * ty * ty / rt_hypotd_snf(tx, ty)) - 5.0 * tx * (0.0 - tx) /
     rt_hypotd_snf(tx, ty), tz_im_tmp) * rt_hypotd_snf(((((((-4680.0 * tz + 25.0
    * (ty * ty)) + 25.0 * (tz * tz)) -  sqrt
    (((((((((((((((((((((((((-1.666993536E+10 * tz - 1250.0 * (ty * ty) * (tz *
    tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 * (ty * ty)) - 625.0 *
    rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) + 234000.0 * rt_powd_snf(tz,
    3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) + 8.90488E+7 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 8.90488E+7 * (tx * tx) * ((0.0 - tx) * (0.0 - tx))
    / (ng_a * ng_a)) - 625.0 * rt_powd_snf(tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0)
    / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 8.90488E+7 * (ty * ty) * ((0.0
    - tx) * (0.0 - tx)) / (og_a * og_a)) + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0
    - tx) * (0.0 - tx)) / (pg_a * pg_a)) - 625.0 * rt_powd_snf(ty, 4.0) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
    1250.0 * tx * rt_powd_snf(ty, 3.0) *  sin(2.0 * rt_atan2d_snf(ty, tx)))
    - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (qg_a * qg_a))
              + 3750.0 * (tx * tx) * (ty * ty) * rt_powd_snf(0.0 - tx, 4.0) /
              rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * (tx * tx) *
             (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (rg_a * rg_a)) + 1250.0 *
            (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (sg_a * sg_a)) +
           234000.0 * tx * ty * tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) +
          234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 - tx)) / (tg_a * tg_a))
         - 234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx)) / (ug_a * ug_a))
        - 1250.0 * tx * ty * (tz * tz) *  sin(2.0 * rt_atan2d_snf(ty, tx)))
       - 2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf(0.0 - tx, 3.0) * ty /
       rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 * rt_powd_snf(tx, 3.0) *
      ty * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 3.27930552576E+11) * 0.0) + 25.0 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 25.0 * (tx * tx) * ((0.0 - tx) * (0.0 - tx)) /
    (vg_a * vg_a)) - 25.0 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (wg_a * wg_a))
    - 856176.0, 0.0 -  sqrt(((((((((((((((((((((((((-1.666993536E+10 * tz -
    1250.0 * (ty * ty) * (tz * tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 *
    (ty * ty)) - 625.0 * rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) +
    234000.0 * rt_powd_snf(tz, 3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) +
    8.90488E+7 * tx * ty *  sin(2.0 * rt_atan2d_snf(ty, tx))) + 8.90488E+7 *
    (tx * tx) * ((0.0 - tx) * (0.0 - tx)) / (ng_a * ng_a)) - 625.0 * rt_powd_snf
    (tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 8.90488E+7 * (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (og_a * og_a))
    + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0 - tx) * (0.0 - tx)) / (pg_a * pg_a))
    - 625.0 * rt_powd_snf(ty, 4.0) * rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf
    (rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * tx * rt_powd_snf(ty, 3.0) *  
    sin(2.0 * rt_atan2d_snf(ty, tx))) - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 -
    tx) * (0.0 - tx)) / (qg_a * qg_a)) + 3750.0 * (tx * tx) * (ty * ty) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
    1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (rg_a * rg_a))
    + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (sg_a * sg_a))
    + 234000.0 * tx * ty * tz *  sin(2.0 * rt_atan2d_snf(ty, tx))) +
    234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 - tx)) / (tg_a * tg_a)) -
    234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx)) / (ug_a * ug_a)) -
    1250.0 * tx * ty * (tz * tz) *  sin(2.0 * rt_atan2d_snf(ty, tx))) -
    2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf(0.0 - tx, 3.0) * ty /
    rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0 * rt_powd_snf(tx, 3.0) *
    ty * rt_powd_snf(0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty),
    4.0)) - 3.27930552576E+11)))) + h_im_tmp) - 5.0 * tx * (((tz * 0.0 + 5.0 *
    ty * ty / rt_hypotd_snf(tx, ty)) - 5.0 * tx * (0.0 - tx) / rt_hypotd_snf(tx,
    ty)) * ((((((4680.0 * tz - 25.0 * (ty * ty)) - 25.0 * (tz * tz)) - 25.0 * tx
               * ty *  sin(2.0 * rt_atan2d_snf(ty, tx))) - 25.0 * (tx * tx) *
              ((0.0 - tx) * (0.0 - tx)) / (bi_a * bi_a)) + 25.0 * (ty * ty) *
             ((0.0 - tx) * (0.0 - tx)) / (ci_a * ci_a)) + 856176.0) - tz_im_tmp *
     sqrt(((((((((((((((((((((((((-1.666993536E+10 * tz - 1250.0 * (ty * ty)
    * (tz * tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 * (ty * ty)) - 625.0 *
    rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) + 234000.0 * rt_powd_snf(tz,
    3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) + 8.90488E+7 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 8.90488E+7 * (tx * tx) * ((0.0 - tx) * (0.0 - tx))
    / (sh_a * sh_a)) - 625.0 * rt_powd_snf(tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0)
    / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 8.90488E+7 * (ty * ty) * ((0.0
    - tx) * (0.0 - tx)) / (th_a * th_a)) + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0
    - tx) * (0.0 - tx)) / (uh_a * uh_a)) - 625.0 * rt_powd_snf(ty, 4.0) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
    1250.0 * tx * rt_powd_snf(ty, 3.0) *  sin(2.0 * rt_atan2d_snf(ty, tx)))
                        - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 - tx) * (0.0 -
    tx)) / (vh_a * vh_a)) + 3750.0 * (tx * tx) * (ty * ty) * rt_powd_snf(0.0 -
    tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 1250.0 * (tx * tx) *
                      (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (wh_a * wh_a)) +
                     1250.0 * (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) /
                     (xh_a * xh_a)) + 234000.0 * tx * ty * tz *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 -
    tx)) / (yh_a * yh_a)) - 234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx))
                  / (ai_a * ai_a)) - 1250.0 * tx * ty * (tz * tz) *  sin(2.0
    * rt_atan2d_snf(ty, tx))) - 2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf
                (0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0))
               + 2500.0 * rt_powd_snf(tx, 3.0) * ty * rt_powd_snf(0.0 - tx, 3.0)
               * ty / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
              3.27930552576E+11)) * (0.0 - tx) / (rt_hypotd_snf(tx, ty) *
    rt_hypotd_snf((tz * 0.0 + 5.0 * ty * ty / rt_hypotd_snf(tx, ty)) - 5.0 * tx *
                  (0.0 - tx) / rt_hypotd_snf(tx, ty), tz_im_tmp) * rt_hypotd_snf
    (((((((-4680.0 * tz + 25.0 * (ty * ty)) + 25.0 * (tz * tz)) -  sqrt
         (((((((((((((((((((((((((-1.666993536E+10 * tz - 1250.0 * (ty * ty) *
    (tz * tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 * (ty * ty)) - 625.0 *
    rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) + 234000.0 * rt_powd_snf(tz,
    3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) + 8.90488E+7 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 8.90488E+7 * (tx * tx) * ((0.0 - tx) * (0.0 - tx))
    / (di_a * di_a)) - 625.0 * rt_powd_snf(tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0)
    / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 8.90488E+7 * (ty * ty) * ((0.0
    - tx) * (0.0 - tx)) / (ei_a * ei_a)) + 1250.0 * rt_powd_snf(ty, 4.0) * ((0.0
    - tx) * (0.0 - tx)) / (fi_a * fi_a)) - 625.0 * rt_powd_snf(ty, 4.0) *
    rt_powd_snf(0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
                     1250.0 * tx * rt_powd_snf(ty, 3.0) *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 - tx) *
    (0.0 - tx)) / (gi_a * gi_a)) + 3750.0 * (tx * tx) * (ty * ty) * rt_powd_snf
                   (0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
                  1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) /
                  (hi_a * hi_a)) + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 - tx) *
    (0.0 - tx)) / (ii_a * ii_a)) + 234000.0 * tx * ty * tz *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 -
    tx)) / (ji_a * ji_a)) - 234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx))
              / (ki_a * ki_a)) - 1250.0 * tx * ty * (tz * tz) *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) - 2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf
            (0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) +
           2500.0 * rt_powd_snf(tx, 3.0) * ty * rt_powd_snf(0.0 - tx, 3.0) * ty /
           rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 3.27930552576E+11) * 0.0)
        + 25.0 * tx * ty *  sin(2.0 * rt_atan2d_snf(ty, tx))) + 25.0 * (tx *
    tx) * ((0.0 - tx) * (0.0 - tx)) / (li_a * li_a)) - 25.0 * (ty * ty) * ((0.0
    - tx) * (0.0 - tx)) / (mi_a * mi_a)) - 856176.0, 0.0 -  sqrt
     (((((((((((((((((((((((((-1.666993536E+10 * tz - 1250.0 * (ty * ty) * (tz *
    tz)) + 234000.0 * (ty * ty) * tz) + 8.90488E+7 * (ty * ty)) - 625.0 *
    rt_powd_snf(ty, 4.0)) + 6.71464E+7 * (tz * tz)) + 234000.0 * rt_powd_snf(tz,
    3.0)) - 625.0 * rt_powd_snf(tz, 4.0)) + 8.90488E+7 * tx * ty *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 8.90488E+7 * (tx * tx) * ((0.0 - tx) * (0.0 - tx))
    / (di_a * di_a)) - 625.0 * rt_powd_snf(tx, 4.0) * rt_powd_snf(0.0 - tx, 4.0)
                     / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 8.90488E+7 *
                    (ty * ty) * ((0.0 - tx) * (0.0 - tx)) / (ei_a * ei_a)) +
                   1250.0 * rt_powd_snf(ty, 4.0) * ((0.0 - tx) * (0.0 - tx)) /
                   (fi_a * fi_a)) - 625.0 * rt_powd_snf(ty, 4.0) * rt_powd_snf
                  (0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
                 1250.0 * tx * rt_powd_snf(ty, 3.0) *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) - 3750.0 * (tx * tx) * (ty * ty) * ((0.0 - tx) *
    (0.0 - tx)) / (gi_a * gi_a)) + 3750.0 * (tx * tx) * (ty * ty) * rt_powd_snf
               (0.0 - tx, 4.0) / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) -
              1250.0 * (tx * tx) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) / (hi_a
    * hi_a)) + 1250.0 * (ty * ty) * (tz * tz) * ((0.0 - tx) * (0.0 - tx)) /
             (ii_a * ii_a)) + 234000.0 * tx * ty * tz *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) + 234000.0 * (tx * tx) * tz * ((0.0 - tx) * (0.0 -
    tx)) / (ji_a * ji_a)) - 234000.0 * (ty * ty) * tz * ((0.0 - tx) * (0.0 - tx))
          / (ki_a * ki_a)) - 1250.0 * tx * ty * (tz * tz) *  sin(2.0 *
    rt_atan2d_snf(ty, tx))) - 2500.0 * tx * rt_powd_snf(ty, 3.0) * rt_powd_snf
        (0.0 - tx, 3.0) * ty / rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) + 2500.0
       * rt_powd_snf(tx, 3.0) * ty * rt_powd_snf(0.0 - tx, 3.0) * ty /
       rt_powd_snf(rt_hypotd_snf(tx, ty), 4.0)) - 3.27930552576E+11)))) + 680.0;
  re_tmp_tmp += ((0.0 - b_re_tmp) + a_tmp) - e_im_tmp;
  output[0] = b_re_tmp_tmp * 180.0 / 3.1415926535897931;
  output[1] = rt_atan2d_snf(tz_re * im + -tz_im_tmp * re, tz_re * re -
    -tz_im_tmp * im) * 180.0 / 3.1415926535897931;
  output[2] = rt_atan2d_snf(b_im_tmp * re_tmp_tmp + -re_tmp * h_im_tmp, b_im_tmp
    * h_im_tmp - -re_tmp * re_tmp_tmp) * 180.0 / 3.1415926535897931;
}

/* End of code generation (Robikine.cpp) */
