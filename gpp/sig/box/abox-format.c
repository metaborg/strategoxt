#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_CL_0;
Symbol sym_SZ_0;
Symbol sym_SH_0;
Symbol sym_SE_0;
Symbol sym_FM_0;
Symbol sym_FN_0;
Symbol sym_MATH_0;
Symbol sym_NUM_0;
Symbol sym_VAR_0;
Symbol sym_KW_0;
Symbol sym_F_1;
Symbol sym_FFID_2;
Symbol sym_FNAT_2;
Symbol sym_AOPTIONS_1;
Symbol sym_AR_1;
Symbol sym_AC_1;
Symbol sym_AL_1;
Symbol sym_IS_0;
Symbol sym_HS_0;
Symbol sym_VS_0;
Symbol sym_SOpt_2;
Symbol sym_L_2;
Symbol sym_C_2;
Symbol sym_REF_2;
Symbol sym_LBL_2;
Symbol sym_FBOX_2;
Symbol sym_R_2;
Symbol sym_A_3;
Symbol sym_ALT_2;
Symbol sym_HV_2;
Symbol sym_V_2;
Symbol sym_H_2;
Symbol sym_S_1;
static void init_module_constructors (void)
{
  sym_CL_0 = ATmakeSymbol("CL", 0, ATfalse);
  ATprotectSymbol(sym_CL_0);
  sym_SZ_0 = ATmakeSymbol("SZ", 0, ATfalse);
  ATprotectSymbol(sym_SZ_0);
  sym_SH_0 = ATmakeSymbol("SH", 0, ATfalse);
  ATprotectSymbol(sym_SH_0);
  sym_SE_0 = ATmakeSymbol("SE", 0, ATfalse);
  ATprotectSymbol(sym_SE_0);
  sym_FM_0 = ATmakeSymbol("FM", 0, ATfalse);
  ATprotectSymbol(sym_FM_0);
  sym_FN_0 = ATmakeSymbol("FN", 0, ATfalse);
  ATprotectSymbol(sym_FN_0);
  sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
  ATprotectSymbol(sym_MATH_0);
  sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
  ATprotectSymbol(sym_NUM_0);
  sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
  ATprotectSymbol(sym_VAR_0);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_F_1 = ATmakeSymbol("F", 1, ATfalse);
  ATprotectSymbol(sym_F_1);
  sym_FFID_2 = ATmakeSymbol("FFID", 2, ATfalse);
  ATprotectSymbol(sym_FFID_2);
  sym_FNAT_2 = ATmakeSymbol("FNAT", 2, ATfalse);
  ATprotectSymbol(sym_FNAT_2);
  sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
  ATprotectSymbol(sym_AOPTIONS_1);
  sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
  ATprotectSymbol(sym_AR_1);
  sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
  ATprotectSymbol(sym_AC_1);
  sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
  ATprotectSymbol(sym_AL_1);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
  ATprotectSymbol(sym_L_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
  ATprotectSymbol(sym_REF_2);
  sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
  ATprotectSymbol(sym_LBL_2);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
  ATprotectSymbol(sym_R_2);
  sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
  ATprotectSymbol(sym_A_3);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
}
ATerm term_o_1;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_1));
  term_o_1 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Box: ", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm debug_1_0 (ATerm j_84 (ATerm), ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm list_1_0 (ATerm g_89 (ATerm), ATerm t);
ATerm is_string_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm Box_0_0 (ATerm t);
ATerm io_wrap_1_0 (ATerm i_109 (ATerm), ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,o_5 = NULL,b_0 = NULL;
  o_5 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      k_5 = ATgetArgument(t, 0);
      l_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_5);
  j_5 = t;
  t = k_5;
  if(match_cons(t, sym_VS_0))
    {
      t = k_5;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = k_5;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = k_5;
        }
    }
  t = l_5;
  t = is_string_0_0(t);
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, k_5, m_5);
  b_0 = t;
  t = SSLsetAnnotations(b_0, j_5);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,j_6 = NULL,d_0 = NULL;
  j_6 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      f_6 = ATgetArgument(t, 0);
      g_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_6);
  e_6 = t;
  t = f_6;
  if(match_cons(t, sym_VS_0))
    {
      t = f_6;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = f_6;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = f_6;
        }
    }
  t = g_6;
  t = is_string_0_0(t);
  h_6 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, f_6, h_6);
  d_0 = t;
  t = SSLsetAnnotations(d_0, e_6);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL,w_15 = NULL,x_15 = NULL,f_0 = NULL;
  x_15 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      b_7 = ATgetArgument(t, 0);
      c_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_15);
  a_7 = t;
  t = b_7;
  if(match_cons(t, sym_VS_0))
    {
      t = b_7;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = b_7;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = b_7;
        }
    }
  t = c_7;
  t = is_string_0_0(t);
  w_15 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, b_7, w_15);
  f_0 = t;
  t = SSLsetAnnotations(f_0, a_7);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
  y_19 = t;
  if(match_cons(t, sym_FNAT_2))
    {
      z_19 = ATgetArgument(t, 0);
      a_20 = ATgetArgument(t, 1);
      {
        ATerm h_20 = NULL,k_20 = NULL,i_0 = NULL;
        t = SSLgetAnnotations(y_19);
        h_20 = t;
        t = z_19;
        if(match_cons(t, sym_FN_0))
          {
            t = z_19;
          }
        else
          {
            if(match_cons(t, sym_FM_0))
              {
                t = z_19;
              }
            else
              {
                if(match_cons(t, sym_SE_0))
                  {
                    t = z_19;
                  }
                else
                  {
                    if(match_cons(t, sym_SH_0))
                      {
                        t = z_19;
                      }
                    else
                      {
                        if(match_cons(t, sym_SZ_0))
                          {
                            t = z_19;
                          }
                        else
                          {
                            if(!(match_cons(t, sym_CL_0)))
                              _fail(t);
                            t = z_19;
                          }
                      }
                  }
              }
          }
        t = a_20;
        t = is_string_0_0(t);
        k_20 = t;
        t = (ATerm) ATmakeAppl(sym_FNAT_2, z_19, k_20);
        i_0 = t;
        t = SSLsetAnnotations(i_0, h_20);
      }
    }
  else
    {
      ATerm t_20 = NULL,w_20 = NULL,j_0 = NULL;
      if(match_cons(t, sym_FFID_2))
        {
          z_19 = ATgetArgument(t, 0);
          a_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_19);
      t_20 = t;
      t = z_19;
      if(match_cons(t, sym_FN_0))
        {
          t = z_19;
        }
      else
        {
          if(match_cons(t, sym_FM_0))
            {
              t = z_19;
            }
          else
            {
              if(match_cons(t, sym_SE_0))
                {
                  t = z_19;
                }
              else
                {
                  if(match_cons(t, sym_SH_0))
                    {
                      t = z_19;
                    }
                  else
                    {
                      if(match_cons(t, sym_SZ_0))
                        {
                          t = z_19;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_CL_0)))
                            _fail(t);
                          t = z_19;
                        }
                    }
                }
            }
        }
      t = a_20;
      t = is_string_0_0(t);
      w_20 = t;
      t = (ATerm) ATmakeAppl(sym_FFID_2, z_19, w_20);
      j_0 = t;
      t = SSLsetAnnotations(j_0, t_20);
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL;
  b_23 = t;
  if(match_cons(t, sym_AL_1))
    {
      c_23 = ATgetArgument(t, 0);
      {
        ATerm s_23 = NULL,u_23 = NULL,n_0 = NULL;
        t = SSLgetAnnotations(b_23);
        s_23 = t;
        t = c_23;
        t = list_1_0(h_1, t);
        u_23 = t;
        t = (ATerm) ATmakeAppl(sym_AL_1, u_23);
        n_0 = t;
        t = SSLsetAnnotations(n_0, s_23);
      }
    }
  else
    {
      if(match_cons(t, sym_AC_1))
        {
          c_23 = ATgetArgument(t, 0);
          {
            ATerm g_24 = NULL,i_24 = NULL,p_0 = NULL;
            t = SSLgetAnnotations(b_23);
            g_24 = t;
            t = c_23;
            t = list_1_0(i_1, t);
            i_24 = t;
            t = (ATerm) ATmakeAppl(sym_AC_1, i_24);
            p_0 = t;
            t = SSLsetAnnotations(p_0, g_24);
          }
        }
      else
        {
          ATerm u_24 = NULL,w_24 = NULL,r_0 = NULL;
          if(match_cons(t, sym_AR_1))
            {
              c_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_23);
          u_24 = t;
          t = c_23;
          t = list_1_0(j_1, t);
          w_24 = t;
          t = (ATerm) ATmakeAppl(sym_AR_1, w_24);
          r_0 = t;
          t = SSLsetAnnotations(r_0, u_24);
        }
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,m_0 = NULL;
  a_24 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      x_23 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_24);
  w_23 = t;
  t = x_23;
  if(match_cons(t, sym_VS_0))
    {
      t = x_23;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = x_23;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = x_23;
        }
    }
  t = y_23;
  t = is_string_0_0(t);
  z_23 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, x_23, z_23);
  m_0 = t;
  t = SSLsetAnnotations(m_0, w_23);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,o_0 = NULL;
  o_24 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      l_24 = ATgetArgument(t, 0);
      m_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_24);
  k_24 = t;
  t = l_24;
  if(match_cons(t, sym_VS_0))
    {
      t = l_24;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = l_24;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = l_24;
        }
    }
  t = m_24;
  t = is_string_0_0(t);
  n_24 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, l_24, n_24);
  o_0 = t;
  t = SSLsetAnnotations(o_0, k_24);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,q_0 = NULL;
  c_25 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      z_24 = ATgetArgument(t, 0);
      a_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_25);
  y_24 = t;
  t = z_24;
  if(match_cons(t, sym_VS_0))
    {
      t = z_24;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = z_24;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = z_24;
        }
    }
  t = a_25;
  t = is_string_0_0(t);
  b_25 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, z_24, b_25);
  q_0 = t;
  t = SSLsetAnnotations(q_0, y_24);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,t_0 = NULL;
  h_23 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      e_23 = ATgetArgument(t, 0);
      f_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_23);
  d_23 = t;
  t = e_23;
  if(match_cons(t, sym_VS_0))
    {
      t = e_23;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = e_23;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = e_23;
        }
    }
  t = f_23;
  t = is_string_0_0(t);
  g_23 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, e_23, g_23);
  t_0 = t;
  t = SSLsetAnnotations(t_0, d_23);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,v_0 = NULL;
  t_25 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      q_25 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_25);
  p_25 = t;
  t = q_25;
  if(match_cons(t, sym_VS_0))
    {
      t = q_25;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = q_25;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = q_25;
        }
    }
  t = r_25;
  t = is_string_0_0(t);
  s_25 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, q_25, s_25);
  v_0 = t;
  t = SSLsetAnnotations(v_0, p_25);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,z_0 = NULL;
  j_27 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      g_27 = ATgetArgument(t, 0);
      h_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_27);
  f_27 = t;
  t = g_27;
  if(match_cons(t, sym_VS_0))
    {
      t = g_27;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = g_27;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = g_27;
        }
    }
  t = h_27;
  t = is_string_0_0(t);
  i_27 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, g_27, i_27);
  z_0 = t;
  t = SSLsetAnnotations(z_0, f_27);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_o_1;
  return(t);
}
ATerm Box_0_0 (ATerm t)
{
  ATerm p_1 = t;
  int q_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL;
      b_15 = t;
      if(match_cons(t, sym_S_1))
        {
          c_15 = ATgetArgument(t, 0);
          {
            ATerm u_4 = NULL,w_4 = NULL,a_0 = NULL;
            t = SSLgetAnnotations(b_15);
            u_4 = t;
            t = c_15;
            t = is_string_0_0(t);
            w_4 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, w_4);
            a_0 = t;
            t = SSLsetAnnotations(a_0, u_4);
          }
        }
      else
        {
          if(match_cons(t, sym_H_2))
            {
              c_15 = ATgetArgument(t, 0);
              d_15 = ATgetArgument(t, 1);
              {
                ATerm d_5 = NULL,g_5 = NULL,h_5 = NULL,c_0 = NULL;
                t = SSLgetAnnotations(b_15);
                d_5 = t;
                t = c_15;
                t = list_1_0(c_1, t);
                g_5 = t;
                t = d_15;
                t = list_1_0(Box_0_0, t);
                h_5 = t;
                t = (ATerm) ATmakeAppl(sym_H_2, g_5, h_5);
                c_0 = t;
                t = SSLsetAnnotations(c_0, d_5);
              }
            }
          else
            {
              if(match_cons(t, sym_V_2))
                {
                  c_15 = ATgetArgument(t, 0);
                  d_15 = ATgetArgument(t, 1);
                  {
                    ATerm x_5 = NULL,a_6 = NULL,c_6 = NULL,e_0 = NULL;
                    t = SSLgetAnnotations(b_15);
                    x_5 = t;
                    t = c_15;
                    t = list_1_0(d_1, t);
                    a_6 = t;
                    t = d_15;
                    t = list_1_0(Box_0_0, t);
                    c_6 = t;
                    t = (ATerm) ATmakeAppl(sym_V_2, a_6, c_6);
                    e_0 = t;
                    t = SSLsetAnnotations(e_0, x_5);
                  }
                }
              else
                {
                  if(match_cons(t, sym_HV_2))
                    {
                      c_15 = ATgetArgument(t, 0);
                      d_15 = ATgetArgument(t, 1);
                      {
                        ATerm t_6 = NULL,x_6 = NULL,y_6 = NULL,g_0 = NULL;
                        t = SSLgetAnnotations(b_15);
                        t_6 = t;
                        t = c_15;
                        t = list_1_0(e_1, t);
                        x_6 = t;
                        t = d_15;
                        t = list_1_0(Box_0_0, t);
                        y_6 = t;
                        t = (ATerm) ATmakeAppl(sym_HV_2, x_6, y_6);
                        g_0 = t;
                        t = SSLsetAnnotations(g_0, t_6);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ALT_2))
                        {
                          c_15 = ATgetArgument(t, 0);
                          d_15 = ATgetArgument(t, 1);
                          {
                            ATerm f_16 = NULL,i_16 = NULL,j_16 = NULL,h_0 = NULL;
                            t = SSLgetAnnotations(b_15);
                            f_16 = t;
                            t = c_15;
                            t = Box_0_0(t);
                            i_16 = t;
                            t = d_15;
                            t = Box_0_0(t);
                            j_16 = t;
                            t = (ATerm) ATmakeAppl(sym_ALT_2, i_16, j_16);
                            h_0 = t;
                            t = SSLsetAnnotations(h_0, f_16);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_FBOX_2))
                            {
                              c_15 = ATgetArgument(t, 0);
                              d_15 = ATgetArgument(t, 1);
                              {
                                ATerm r_16 = NULL,u_16 = NULL,v_16 = NULL,l_0 = NULL,w_17 = NULL;
                                t = SSLgetAnnotations(b_15);
                                r_16 = t;
                                t = c_15;
                                if(match_cons(t, sym_F_1))
                                  {
                                    w_17 = ATgetArgument(t, 0);
                                    {
                                      ATerm d_19 = NULL,f_19 = NULL,k_0 = NULL;
                                      t = SSLgetAnnotations(c_15);
                                      d_19 = t;
                                      t = w_17;
                                      t = list_1_0(f_1, t);
                                      f_19 = t;
                                      t = (ATerm) ATmakeAppl(sym_F_1, f_19);
                                      k_0 = t;
                                      t = SSLsetAnnotations(k_0, d_19);
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_KW_0))
                                      {
                                        t = c_15;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_VAR_0))
                                          {
                                            t = c_15;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_NUM_0))
                                              {
                                                t = c_15;
                                              }
                                            else
                                              {
                                                if(!(match_cons(t, sym_MATH_0)))
                                                  _fail(t);
                                                t = c_15;
                                              }
                                          }
                                      }
                                  }
                                u_16 = t;
                                t = d_15;
                                t = Box_0_0(t);
                                v_16 = t;
                                t = (ATerm) ATmakeAppl(sym_FBOX_2, u_16, v_16);
                                l_0 = t;
                                t = SSLsetAnnotations(l_0, r_16);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_A_3))
                                {
                                  c_15 = ATgetArgument(t, 0);
                                  d_15 = ATgetArgument(t, 1);
                                  a_15 = ATgetArgument(t, 2);
                                  {
                                    ATerm g_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,u_0 = NULL,s_0 = NULL;
                                    t = SSLgetAnnotations(b_15);
                                    g_21 = t;
                                    t = c_15;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        n_21 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(c_15);
                                    m_21 = t;
                                    t = n_21;
                                    t = list_1_0(g_1, t);
                                    o_21 = t;
                                    t = (ATerm) ATmakeAppl(sym_AOPTIONS_1, o_21);
                                    s_0 = t;
                                    t = SSLsetAnnotations(s_0, m_21);
                                    p_21 = t;
                                    t = d_15;
                                    t = list_1_0(k_1, t);
                                    k_21 = t;
                                    t = a_15;
                                    t = list_1_0(Box_0_0, t);
                                    l_21 = t;
                                    t = (ATerm) ATmakeAppl(sym_A_3, p_21, k_21, l_21);
                                    u_0 = t;
                                    t = SSLsetAnnotations(u_0, g_21);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_R_2))
                                    {
                                      c_15 = ATgetArgument(t, 0);
                                      d_15 = ATgetArgument(t, 1);
                                      {
                                        ATerm j_25 = NULL,m_25 = NULL,n_25 = NULL,w_0 = NULL;
                                        t = SSLgetAnnotations(b_15);
                                        j_25 = t;
                                        t = c_15;
                                        t = list_1_0(l_1, t);
                                        m_25 = t;
                                        t = d_15;
                                        t = list_1_0(Box_0_0, t);
                                        n_25 = t;
                                        t = (ATerm) ATmakeAppl(sym_R_2, m_25, n_25);
                                        w_0 = t;
                                        t = SSLsetAnnotations(w_0, j_25);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LBL_2))
                                        {
                                          c_15 = ATgetArgument(t, 0);
                                          d_15 = ATgetArgument(t, 1);
                                          {
                                            ATerm b_26 = NULL,e_26 = NULL,f_26 = NULL,x_0 = NULL;
                                            t = SSLgetAnnotations(b_15);
                                            b_26 = t;
                                            t = c_15;
                                            t = is_string_0_0(t);
                                            e_26 = t;
                                            t = d_15;
                                            t = Box_0_0(t);
                                            f_26 = t;
                                            t = (ATerm) ATmakeAppl(sym_LBL_2, e_26, f_26);
                                            x_0 = t;
                                            t = SSLsetAnnotations(x_0, b_26);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_REF_2))
                                            {
                                              c_15 = ATgetArgument(t, 0);
                                              d_15 = ATgetArgument(t, 1);
                                              {
                                                ATerm n_26 = NULL,q_26 = NULL,r_26 = NULL,y_0 = NULL;
                                                t = SSLgetAnnotations(b_15);
                                                n_26 = t;
                                                t = c_15;
                                                t = is_string_0_0(t);
                                                q_26 = t;
                                                t = d_15;
                                                t = Box_0_0(t);
                                                r_26 = t;
                                                t = (ATerm) ATmakeAppl(sym_REF_2, q_26, r_26);
                                                y_0 = t;
                                                t = SSLsetAnnotations(y_0, n_26);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_C_2))
                                                {
                                                  c_15 = ATgetArgument(t, 0);
                                                  d_15 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm z_26 = NULL,c_27 = NULL,d_27 = NULL,a_1 = NULL;
                                                    t = SSLgetAnnotations(b_15);
                                                    z_26 = t;
                                                    t = c_15;
                                                    t = list_1_0(m_1, t);
                                                    c_27 = t;
                                                    t = d_15;
                                                    t = list_1_0(Box_0_0, t);
                                                    d_27 = t;
                                                    t = (ATerm) ATmakeAppl(sym_C_2, c_27, d_27);
                                                    a_1 = t;
                                                    t = SSLsetAnnotations(a_1, z_26);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm r_27 = NULL,u_27 = NULL,v_27 = NULL,b_1 = NULL;
                                                  if(match_cons(t, sym_L_2))
                                                    {
                                                      c_15 = ATgetArgument(t, 0);
                                                      d_15 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(b_15);
                                                  r_27 = t;
                                                  t = c_15;
                                                  t = Box_0_0(t);
                                                  u_27 = t;
                                                  t = d_15;
                                                  t = Box_0_0(t);
                                                  v_27 = t;
                                                  t = (ATerm) ATmakeAppl(sym_L_2, u_27, v_27);
                                                  b_1 = t;
                                                  t = SSLsetAnnotations(b_1, r_27);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(q_1);
    }
  else
    {
      t = p_1;
      {
        ATerm r_1 = t;
        int s_1 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            LocalPopChoice(s_1);
          }
        else
          {
            t = r_1;
            t = debug_1_0(n_1, t);
          }
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_wrap_1_0(Box_0_0, t);
  return(t);
}
