#include <stratego.h>
#include <stratego-lib.h>
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Silent_0;
Symbol sym_Verbose_0;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_CUT_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_S_1;
Symbol sym_H_2;
Symbol sym_V_2;
Symbol sym_HV_2;
Symbol sym_ALT_2;
Symbol sym_SOpt_2;
Symbol sym_SOptb_2;
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
Symbol sym_A_3;
Symbol sym_R_2;
Symbol sym_AL_1;
Symbol sym_AC_1;
Symbol sym_AR_1;
Symbol sym_FBOX_2;
Symbol sym_F_1;
Symbol sym_FInt_2;
Symbol sym_FFID_2;
Symbol sym_FN_0;
Symbol sym_FM_0;
Symbol sym_SE_0;
Symbol sym_SH_0;
Symbol sym_SZ_0;
Symbol sym_CL_0;
Symbol sym_KW_0;
Symbol sym_VAR_0;
Symbol sym_NUM_0;
Symbol sym_MATH_0;
Symbol sym_LBL_2;
Symbol sym_REF_2;
Symbol sym_C_2;
Symbol sym_L_2;
Symbol sym_LINT_2;
Symbol sym_Arg_1;
Symbol sym_Arg2_2;
Symbol sym_TNil_0;
Symbol sym_TCons_2;
Symbol sym_Pair_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
void init_constructors (void)
{
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_SOptb_2 = ATmakeSymbol("SOptb", 2, ATfalse);
  ATprotectSymbol(sym_SOptb_2);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
  ATprotectSymbol(sym_A_3);
  sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
  ATprotectSymbol(sym_R_2);
  sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
  ATprotectSymbol(sym_AL_1);
  sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
  ATprotectSymbol(sym_AC_1);
  sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
  ATprotectSymbol(sym_AR_1);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_F_1 = ATmakeSymbol("F", 1, ATfalse);
  ATprotectSymbol(sym_F_1);
  sym_FInt_2 = ATmakeSymbol("FInt", 2, ATfalse);
  ATprotectSymbol(sym_FInt_2);
  sym_FFID_2 = ATmakeSymbol("FFID", 2, ATfalse);
  ATprotectSymbol(sym_FFID_2);
  sym_FN_0 = ATmakeSymbol("FN", 0, ATfalse);
  ATprotectSymbol(sym_FN_0);
  sym_FM_0 = ATmakeSymbol("FM", 0, ATfalse);
  ATprotectSymbol(sym_FM_0);
  sym_SE_0 = ATmakeSymbol("SE", 0, ATfalse);
  ATprotectSymbol(sym_SE_0);
  sym_SH_0 = ATmakeSymbol("SH", 0, ATfalse);
  ATprotectSymbol(sym_SH_0);
  sym_SZ_0 = ATmakeSymbol("SZ", 0, ATfalse);
  ATprotectSymbol(sym_SZ_0);
  sym_CL_0 = ATmakeSymbol("CL", 0, ATfalse);
  ATprotectSymbol(sym_CL_0);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
  ATprotectSymbol(sym_VAR_0);
  sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
  ATprotectSymbol(sym_NUM_0);
  sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
  ATprotectSymbol(sym_MATH_0);
  sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
  ATprotectSymbol(sym_LBL_2);
  sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
  ATprotectSymbol(sym_REF_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
  ATprotectSymbol(sym_L_2);
  sym_LINT_2 = ATmakeSymbol("LINT", 2, ATfalse);
  ATprotectSymbol(sym_LINT_2);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_TNil_0 = ATmakeSymbol("TNil", 0, ATfalse);
  ATprotectSymbol(sym_TNil_0);
  sym_TCons_2 = ATmakeSymbol("TCons", 2, ATfalse);
  ATprotectSymbol(sym_TCons_2);
  sym_Pair_2 = ATmakeSymbol("Pair", 2, ATfalse);
  ATprotectSymbol(sym_Pair_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
}
ATerm debug_1 (ATerm, ATerm p_44 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Arg2_2 (ATerm, ATerm t_25 (ATerm), ATerm u_25 (ATerm));
ATerm Arg_1 (ATerm, ATerm s_25 (ATerm));
ATerm LINT_2 (ATerm, ATerm q_25 (ATerm), ATerm r_25 (ATerm));
ATerm L_2 (ATerm, ATerm o_25 (ATerm), ATerm p_25 (ATerm));
ATerm list_1 (ATerm, ATerm o_39 (ATerm));
ATerm IS_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm Space_Symbol_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm p_24 (ATerm), ATerm q_24 (ATerm));
ATerm S_Option_0 (ATerm);
ATerm C_2 (ATerm, ATerm m_25 (ATerm), ATerm n_25 (ATerm));
ATerm is_string_0 (ATerm);
ATerm REF_2 (ATerm, ATerm k_25 (ATerm), ATerm l_25 (ATerm));
ATerm LBL_2 (ATerm, ATerm i_25 (ATerm), ATerm j_25 (ATerm));
ATerm R_2 (ATerm, ATerm w_24 (ATerm), ATerm x_24 (ATerm));
ATerm AR_1 (ATerm, ATerm a_25 (ATerm));
ATerm AC_1 (ATerm, ATerm z_24 (ATerm));
ATerm AL_1 (ATerm, ATerm y_24 (ATerm));
ATerm A_Option_0 (ATerm);
ATerm A_3 (ATerm, ATerm t_24 (ATerm), ATerm u_24 (ATerm), ATerm v_24 (ATerm));
ATerm MATH_0 (ATerm);
ATerm NUM_0 (ATerm);
ATerm VAR_0 (ATerm);
ATerm KW_0 (ATerm);
ATerm CL_0 (ATerm);
ATerm SZ_0 (ATerm);
ATerm SH_0 (ATerm);
ATerm SE_0 (ATerm);
ATerm FM_0 (ATerm);
ATerm FN_0 (ATerm);
ATerm Font_Param_0 (ATerm);
ATerm FFID_2 (ATerm, ATerm g_25 (ATerm), ATerm h_25 (ATerm));
ATerm FInt_2 (ATerm, ATerm e_25 (ATerm), ATerm f_25 (ATerm));
ATerm F_Option_0 (ATerm);
ATerm F_1 (ATerm, ATerm d_25 (ATerm));
ATerm Font_Operator_0 (ATerm);
ATerm FBOX_2 (ATerm, ATerm b_25 (ATerm), ATerm c_25 (ATerm));
ATerm ALT_2 (ATerm, ATerm n_24 (ATerm), ATerm o_24 (ATerm));
ATerm HV_2 (ATerm, ATerm l_24 (ATerm), ATerm m_24 (ATerm));
ATerm V_2 (ATerm, ATerm j_24 (ATerm), ATerm k_24 (ATerm));
ATerm H_2 (ATerm, ATerm h_24 (ATerm), ATerm i_24 (ATerm));
ATerm S_1 (ATerm, ATerm g_24 (ATerm));
ATerm Box_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm v_25 (ATerm), ATerm w_25 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm b_41 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm g_31 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm b_45 (ATerm), ATerm c_45 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm b_24 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm v_39 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_30 (ATerm));
ATerm need_help_1 (ATerm, ATerm f_31 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm d_30 (ATerm), ATerm e_30 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm f_30 (ATerm), ATerm g_30 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm z_25 (ATerm), ATerm a_26 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm b_30 (ATerm));
ATerm iowrap_3 (ATerm, ATerm u_30 (ATerm), ATerm v_30 (ATerm), ATerm w_30 (ATerm));
ATerm iowrap_2 (ATerm, ATerm p_30 (ATerm), ATerm q_30 (ATerm));
ATerm iowrap_1 (ATerm, ATerm m_30 (ATerm));
ATerm abox_format_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm p_44 (ATerm))
{
  ATerm i_3;
  i_3 = t;
  {
    ATerm a_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm b_0 (ATerm t)
    {
      ATerm m_3 = NULL;
      ATerm o_3 = NULL;
      m_3 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = p_44(t);
      o_3 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_3), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_3), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, a_0, b_0);
    t = printnl_0(t);
  }
  t = i_3;
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm t_3 = NULL;
  t_3 = t;
  t = SSL_is_int(not_null(t_3));
  return(t);
}
ATerm Arg2_2 (ATerm t, ATerm t_25 (ATerm), ATerm u_25 (ATerm))
{
  ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL;
  a_4 = t;
  z_3 :
  if(match_cons(a_4, sym_Arg2_2))
    {
      b_4 = ATgetArgument(a_4, 0);
      c_4 = ATgetArgument(a_4, 1);
      {
        ATerm f_4 = NULL;
        t = not_null(b_4);
        {
          ATerm h_4 = NULL;
          t = t_25(t);
          f_4 = t;
          t = not_null(c_4);
          t = u_25(t);
          h_4 = t;
          t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(f_4), not_null(h_4));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Arg_1 (ATerm t, ATerm s_25 (ATerm))
{
  ATerm p_4 = NULL,q_4 = NULL;
  p_4 = t;
  o_4 :
  if(match_cons(p_4, sym_Arg_1))
    {
      q_4 = ATgetArgument(p_4, 0);
      {
        ATerm s_4 = NULL;
        t = not_null(q_4);
        t = s_25(t);
        s_4 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(s_4));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm LINT_2 (ATerm t, ATerm q_25 (ATerm), ATerm r_25 (ATerm))
{
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
  e_5 = t;
  d_5 :
  if(match_cons(e_5, sym_LINT_2))
    {
      f_5 = ATgetArgument(e_5, 0);
      g_5 = ATgetArgument(e_5, 1);
      {
        ATerm j_5 = NULL;
        t = not_null(f_5);
        {
          ATerm l_5 = NULL;
          t = q_25(t);
          j_5 = t;
          t = not_null(g_5);
          t = r_25(t);
          l_5 = t;
          t = (ATerm) ATmakeAppl(sym_LINT_2, not_null(j_5), not_null(l_5));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm L_2 (ATerm t, ATerm o_25 (ATerm), ATerm p_25 (ATerm))
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
  u_5 = t;
  t_5 :
  if(match_cons(u_5, sym_L_2))
    {
      v_5 = ATgetArgument(u_5, 0);
      w_5 = ATgetArgument(u_5, 1);
      {
        ATerm z_5 = NULL;
        t = not_null(v_5);
        {
          ATerm b_6 = NULL;
          t = o_25(t);
          z_5 = t;
          t = not_null(w_5);
          t = p_25(t);
          b_6 = t;
          t = (ATerm) ATmakeAppl(sym_L_2, not_null(z_5), not_null(b_6));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm list_1 (ATerm t, ATerm o_39 (ATerm))
{
  ATerm i_6 (ATerm t)
  {
    ATerm j_3 = t;
    if(PushChoice()==0)
      {
        ATerm h_6 = NULL;
        h_6 = t;
        g_6 :
        if(!(match_cons(h_6, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = j_3;
        t = Cons_2(t, o_39, i_6);
      }
    return(t);
  }
  t = i_6(t);
  return(t);
}
ATerm IS_0 (ATerm t)
{
  ATerm k_6 = NULL;
  k_6 = t;
  j_6 :
  if(!(match_cons(k_6, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm HS_0 (ATerm t)
{
  ATerm m_6 = NULL;
  m_6 = t;
  l_6 :
  if(!(match_cons(m_6, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm o_6 = NULL;
  o_6 = t;
  n_6 :
  if(!(match_cons(o_6, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Space_Symbol_0 (ATerm t)
{
  ATerm q_6 = NULL;
  q_6 = t;
  p_6 :
  if(!(match_cons(q_6, sym_VS_0)))
    {
      if(!(match_cons(q_6, sym_HS_0)))
        {
          if(!(match_cons(q_6, sym_IS_0)))
            _fail(t);
        }
    }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm p_24 (ATerm), ATerm q_24 (ATerm))
{
  ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
  v_6 = t;
  u_6 :
  if(match_cons(v_6, sym_SOpt_2))
    {
      w_6 = ATgetArgument(v_6, 0);
      x_6 = ATgetArgument(v_6, 1);
      {
        ATerm a_7 = NULL;
        t = not_null(w_6);
        {
          ATerm c_7 = NULL;
          t = p_24(t);
          a_7 = t;
          t = not_null(x_6);
          t = q_24(t);
          c_7 = t;
          t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(a_7), not_null(c_7));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm S_Option_0 (ATerm t)
{
  t = SOpt_2(t, Space_Symbol_0, is_string_0);
  return(t);
}
ATerm C_2 (ATerm t, ATerm m_25 (ATerm), ATerm n_25 (ATerm))
{
  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL;
  l_7 = t;
  k_7 :
  if(match_cons(l_7, sym_C_2))
    {
      m_7 = ATgetArgument(l_7, 0);
      n_7 = ATgetArgument(l_7, 1);
      {
        ATerm w_7 = NULL;
        t = not_null(m_7);
        {
          ATerm y_7 = NULL;
          t = m_25(t);
          w_7 = t;
          t = not_null(n_7);
          t = n_25(t);
          y_7 = t;
          t = (ATerm) ATmakeAppl(sym_C_2, not_null(w_7), not_null(y_7));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm v_8 = NULL;
  v_8 = t;
  t = SSL_is_string(not_null(v_8));
  return(t);
}
ATerm REF_2 (ATerm t, ATerm k_25 (ATerm), ATerm l_25 (ATerm))
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
  c_9 = t;
  b_9 :
  if(match_cons(c_9, sym_REF_2))
    {
      d_9 = ATgetArgument(c_9, 0);
      e_9 = ATgetArgument(c_9, 1);
      {
        ATerm h_9 = NULL;
        t = not_null(d_9);
        {
          ATerm j_9 = NULL;
          t = k_25(t);
          h_9 = t;
          t = not_null(e_9);
          t = l_25(t);
          j_9 = t;
          t = (ATerm) ATmakeAppl(sym_REF_2, not_null(h_9), not_null(j_9));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm LBL_2 (ATerm t, ATerm i_25 (ATerm), ATerm j_25 (ATerm))
{
  ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL;
  t_9 = t;
  s_9 :
  if(match_cons(t_9, sym_LBL_2))
    {
      u_9 = ATgetArgument(t_9, 0);
      v_9 = ATgetArgument(t_9, 1);
      {
        ATerm y_9 = NULL;
        t = not_null(u_9);
        {
          ATerm a_10 = NULL;
          t = i_25(t);
          y_9 = t;
          t = not_null(v_9);
          t = j_25(t);
          a_10 = t;
          t = (ATerm) ATmakeAppl(sym_LBL_2, not_null(y_9), not_null(a_10));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm R_2 (ATerm t, ATerm w_24 (ATerm), ATerm x_24 (ATerm))
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
  j_10 = t;
  i_10 :
  if(match_cons(j_10, sym_R_2))
    {
      k_10 = ATgetArgument(j_10, 0);
      l_10 = ATgetArgument(j_10, 1);
      {
        ATerm o_10 = NULL;
        t = not_null(k_10);
        {
          ATerm q_10 = NULL;
          t = w_24(t);
          o_10 = t;
          t = not_null(l_10);
          t = x_24(t);
          q_10 = t;
          t = (ATerm) ATmakeAppl(sym_R_2, not_null(o_10), not_null(q_10));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm AR_1 (ATerm t, ATerm a_25 (ATerm))
{
  ATerm y_10 = NULL,z_10 = NULL;
  y_10 = t;
  x_10 :
  if(match_cons(y_10, sym_AR_1))
    {
      z_10 = ATgetArgument(y_10, 0);
      {
        ATerm b_11 = NULL;
        t = not_null(z_10);
        t = a_25(t);
        b_11 = t;
        t = (ATerm) ATmakeAppl(sym_AR_1, not_null(b_11));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm AC_1 (ATerm t, ATerm z_24 (ATerm))
{
  ATerm j_11 = NULL,k_11 = NULL;
  j_11 = t;
  i_11 :
  if(match_cons(j_11, sym_AC_1))
    {
      k_11 = ATgetArgument(j_11, 0);
      {
        ATerm m_11 = NULL;
        t = not_null(k_11);
        t = z_24(t);
        m_11 = t;
        t = (ATerm) ATmakeAppl(sym_AC_1, not_null(m_11));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm AL_1 (ATerm t, ATerm y_24 (ATerm))
{
  ATerm t_11 = NULL,u_11 = NULL;
  t_11 = t;
  s_11 :
  if(match_cons(t_11, sym_AL_1))
    {
      u_11 = ATgetArgument(t_11, 0);
      {
        ATerm w_11 = NULL;
        t = not_null(u_11);
        t = y_24(t);
        w_11 = t;
        t = (ATerm) ATmakeAppl(sym_AL_1, not_null(w_11));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm A_Option_0 (ATerm t)
{
  ATerm k_3 = t;
  if(PushChoice()==0)
    {
      ATerm c_0 (ATerm t)
      {
        t = list_1(t, S_Option_0);
        return(t);
      }
      t = AL_1(t, c_0);
      PopChoice();
    }
  else
    {
      t = k_3;
      {
        ATerm l_3 = t;
        if(PushChoice()==0)
          {
            ATerm d_0 (ATerm t)
            {
              t = list_1(t, S_Option_0);
              return(t);
            }
            t = AC_1(t, d_0);
            PopChoice();
          }
        else
          {
            t = l_3;
            {
              ATerm e_0 (ATerm t)
              {
                t = list_1(t, S_Option_0);
                return(t);
              }
              t = AR_1(t, e_0);
            }
          }
      }
    }
  return(t);
}
ATerm A_3 (ATerm t, ATerm t_24 (ATerm), ATerm u_24 (ATerm), ATerm v_24 (ATerm))
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL;
  f_12 = t;
  e_12 :
  if(match_cons(f_12, sym_A_3))
    {
      g_12 = ATgetArgument(f_12, 0);
      h_12 = ATgetArgument(f_12, 1);
      i_12 = ATgetArgument(f_12, 2);
      {
        ATerm m_12 = NULL;
        t = not_null(g_12);
        {
          ATerm o_12 = NULL;
          t = t_24(t);
          m_12 = t;
          t = not_null(h_12);
          {
            ATerm q_12 = NULL;
            t = u_24(t);
            o_12 = t;
            t = not_null(i_12);
            t = v_24(t);
            q_12 = t;
            t = (ATerm) ATmakeAppl(sym_A_3, not_null(m_12), not_null(o_12), not_null(q_12));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MATH_0 (ATerm t)
{
  ATerm x_12 = NULL;
  x_12 = t;
  w_12 :
  if(!(match_cons(x_12, sym_MATH_0)))
    _fail(t);
  return(t);
}
ATerm NUM_0 (ATerm t)
{
  ATerm z_12 = NULL;
  z_12 = t;
  y_12 :
  if(!(match_cons(z_12, sym_NUM_0)))
    _fail(t);
  return(t);
}
ATerm VAR_0 (ATerm t)
{
  ATerm b_13 = NULL;
  b_13 = t;
  a_13 :
  if(!(match_cons(b_13, sym_VAR_0)))
    _fail(t);
  return(t);
}
ATerm KW_0 (ATerm t)
{
  ATerm d_13 = NULL;
  d_13 = t;
  c_13 :
  if(!(match_cons(d_13, sym_KW_0)))
    _fail(t);
  return(t);
}
ATerm CL_0 (ATerm t)
{
  ATerm f_13 = NULL;
  f_13 = t;
  e_13 :
  if(!(match_cons(f_13, sym_CL_0)))
    _fail(t);
  return(t);
}
ATerm SZ_0 (ATerm t)
{
  ATerm h_13 = NULL;
  h_13 = t;
  g_13 :
  if(!(match_cons(h_13, sym_SZ_0)))
    _fail(t);
  return(t);
}
ATerm SH_0 (ATerm t)
{
  ATerm j_13 = NULL;
  j_13 = t;
  i_13 :
  if(!(match_cons(j_13, sym_SH_0)))
    _fail(t);
  return(t);
}
ATerm SE_0 (ATerm t)
{
  ATerm l_13 = NULL;
  l_13 = t;
  k_13 :
  if(!(match_cons(l_13, sym_SE_0)))
    _fail(t);
  return(t);
}
ATerm FM_0 (ATerm t)
{
  ATerm n_13 = NULL;
  n_13 = t;
  m_13 :
  if(!(match_cons(n_13, sym_FM_0)))
    _fail(t);
  return(t);
}
ATerm FN_0 (ATerm t)
{
  ATerm p_13 = NULL;
  p_13 = t;
  o_13 :
  if(!(match_cons(p_13, sym_FN_0)))
    _fail(t);
  return(t);
}
ATerm Font_Param_0 (ATerm t)
{
  ATerm r_13 = NULL;
  r_13 = t;
  q_13 :
  if(!(match_cons(r_13, sym_FN_0)))
    {
      if(!(match_cons(r_13, sym_FM_0)))
        {
          if(!(match_cons(r_13, sym_SE_0)))
            {
              if(!(match_cons(r_13, sym_SH_0)))
                {
                  if(!(match_cons(r_13, sym_SZ_0)))
                    {
                      if(!(match_cons(r_13, sym_CL_0)))
                        _fail(t);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm FFID_2 (ATerm t, ATerm g_25 (ATerm), ATerm h_25 (ATerm))
{
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL;
  w_13 = t;
  v_13 :
  if(match_cons(w_13, sym_FFID_2))
    {
      x_13 = ATgetArgument(w_13, 0);
      y_13 = ATgetArgument(w_13, 1);
      {
        ATerm b_14 = NULL;
        t = not_null(x_13);
        {
          ATerm d_14 = NULL;
          t = g_25(t);
          b_14 = t;
          t = not_null(y_13);
          t = h_25(t);
          d_14 = t;
          t = (ATerm) ATmakeAppl(sym_FFID_2, not_null(b_14), not_null(d_14));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm FInt_2 (ATerm t, ATerm e_25 (ATerm), ATerm f_25 (ATerm))
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
  m_14 = t;
  l_14 :
  if(match_cons(m_14, sym_FInt_2))
    {
      n_14 = ATgetArgument(m_14, 0);
      o_14 = ATgetArgument(m_14, 1);
      {
        ATerm r_14 = NULL;
        t = not_null(n_14);
        {
          ATerm t_14 = NULL;
          t = e_25(t);
          r_14 = t;
          t = not_null(o_14);
          t = f_25(t);
          t_14 = t;
          t = (ATerm) ATmakeAppl(sym_FInt_2, not_null(r_14), not_null(t_14));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm F_Option_0 (ATerm t)
{
  ATerm n_3 = t;
  if(PushChoice()==0)
    {
      t = FInt_2(t, Font_Param_0, is_string_0);
      PopChoice();
    }
  else
    {
      t = n_3;
      t = FFID_2(t, Font_Param_0, is_string_0);
    }
  return(t);
}
ATerm F_1 (ATerm t, ATerm d_25 (ATerm))
{
  ATerm b_15 = NULL,c_15 = NULL;
  b_15 = t;
  a_15 :
  if(match_cons(b_15, sym_F_1))
    {
      c_15 = ATgetArgument(b_15, 0);
      {
        ATerm e_15 = NULL;
        t = not_null(c_15);
        t = d_25(t);
        e_15 = t;
        t = (ATerm) ATmakeAppl(sym_F_1, not_null(e_15));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Font_Operator_0 (ATerm t)
{
  ATerm p_3 = t;
  if(PushChoice()==0)
    {
      ATerm f_0 (ATerm t)
      {
        t = list_1(t, F_Option_0);
        return(t);
      }
      t = F_1(t, f_0);
      PopChoice();
    }
  else
    {
      t = p_3;
      {
        ATerm j_15 = NULL;
        j_15 = t;
        i_15 :
        if(!(match_cons(j_15, sym_KW_0)))
          {
            if(!(match_cons(j_15, sym_VAR_0)))
              {
                if(!(match_cons(j_15, sym_NUM_0)))
                  {
                    if(!(match_cons(j_15, sym_MATH_0)))
                      _fail(t);
                  }
              }
          }
      }
    }
  return(t);
}
ATerm FBOX_2 (ATerm t, ATerm b_25 (ATerm), ATerm c_25 (ATerm))
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL;
  o_15 = t;
  n_15 :
  if(match_cons(o_15, sym_FBOX_2))
    {
      p_15 = ATgetArgument(o_15, 0);
      q_15 = ATgetArgument(o_15, 1);
      {
        ATerm t_15 = NULL;
        t = not_null(p_15);
        {
          ATerm v_15 = NULL;
          t = b_25(t);
          t_15 = t;
          t = not_null(q_15);
          t = c_25(t);
          v_15 = t;
          t = (ATerm) ATmakeAppl(sym_FBOX_2, not_null(t_15), not_null(v_15));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ALT_2 (ATerm t, ATerm n_24 (ATerm), ATerm o_24 (ATerm))
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
  e_16 = t;
  d_16 :
  if(match_cons(e_16, sym_ALT_2))
    {
      f_16 = ATgetArgument(e_16, 0);
      g_16 = ATgetArgument(e_16, 1);
      {
        ATerm j_16 = NULL;
        t = not_null(f_16);
        {
          ATerm l_16 = NULL;
          t = n_24(t);
          j_16 = t;
          t = not_null(g_16);
          t = o_24(t);
          l_16 = t;
          t = (ATerm) ATmakeAppl(sym_ALT_2, not_null(j_16), not_null(l_16));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm HV_2 (ATerm t, ATerm l_24 (ATerm), ATerm m_24 (ATerm))
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL;
  u_16 = t;
  t_16 :
  if(match_cons(u_16, sym_HV_2))
    {
      v_16 = ATgetArgument(u_16, 0);
      w_16 = ATgetArgument(u_16, 1);
      {
        ATerm z_16 = NULL;
        t = not_null(v_16);
        {
          ATerm b_17 = NULL;
          t = l_24(t);
          z_16 = t;
          t = not_null(w_16);
          t = m_24(t);
          b_17 = t;
          t = (ATerm) ATmakeAppl(sym_HV_2, not_null(z_16), not_null(b_17));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm V_2 (ATerm t, ATerm j_24 (ATerm), ATerm k_24 (ATerm))
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
  k_17 = t;
  j_17 :
  if(match_cons(k_17, sym_V_2))
    {
      l_17 = ATgetArgument(k_17, 0);
      m_17 = ATgetArgument(k_17, 1);
      {
        ATerm p_17 = NULL;
        t = not_null(l_17);
        {
          ATerm r_17 = NULL;
          t = j_24(t);
          p_17 = t;
          t = not_null(m_17);
          t = k_24(t);
          r_17 = t;
          t = (ATerm) ATmakeAppl(sym_V_2, not_null(p_17), not_null(r_17));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm H_2 (ATerm t, ATerm h_24 (ATerm), ATerm i_24 (ATerm))
{
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL;
  a_18 = t;
  z_17 :
  if(match_cons(a_18, sym_H_2))
    {
      b_18 = ATgetArgument(a_18, 0);
      c_18 = ATgetArgument(a_18, 1);
      {
        ATerm f_18 = NULL;
        t = not_null(b_18);
        {
          ATerm h_18 = NULL;
          t = h_24(t);
          f_18 = t;
          t = not_null(c_18);
          t = i_24(t);
          h_18 = t;
          t = (ATerm) ATmakeAppl(sym_H_2, not_null(f_18), not_null(h_18));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm S_1 (ATerm t, ATerm g_24 (ATerm))
{
  ATerm p_18 = NULL,q_18 = NULL;
  p_18 = t;
  o_18 :
  if(match_cons(p_18, sym_S_1))
    {
      q_18 = ATgetArgument(p_18, 0);
      {
        ATerm s_18 = NULL;
        t = not_null(q_18);
        t = g_24(t);
        s_18 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, not_null(s_18));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Box_0 (ATerm t)
{
  ATerm q_3 = t;
  if(PushChoice()==0)
    {
      t = S_1(t, is_string_0);
      PopChoice();
    }
  else
    {
      t = q_3;
      {
        ATerm r_3 = t;
        if(PushChoice()==0)
          {
            ATerm g_0 (ATerm t)
            {
              t = list_1(t, S_Option_0);
              return(t);
            }
            ATerm h_0 (ATerm t)
            {
              t = list_1(t, Box_0);
              return(t);
            }
            t = H_2(t, g_0, h_0);
            PopChoice();
          }
        else
          {
            t = r_3;
            {
              ATerm s_3 = t;
              if(PushChoice()==0)
                {
                  ATerm i_0 (ATerm t)
                  {
                    t = list_1(t, S_Option_0);
                    return(t);
                  }
                  ATerm j_0 (ATerm t)
                  {
                    t = list_1(t, Box_0);
                    return(t);
                  }
                  t = V_2(t, i_0, j_0);
                  PopChoice();
                }
              else
                {
                  t = s_3;
                  {
                    ATerm u_3 = t;
                    if(PushChoice()==0)
                      {
                        ATerm k_0 (ATerm t)
                        {
                          t = list_1(t, S_Option_0);
                          return(t);
                        }
                        ATerm l_0 (ATerm t)
                        {
                          t = list_1(t, Box_0);
                          return(t);
                        }
                        t = HV_2(t, k_0, l_0);
                        PopChoice();
                      }
                    else
                      {
                        t = u_3;
                        {
                          ATerm v_3 = t;
                          if(PushChoice()==0)
                            {
                              t = ALT_2(t, Box_0, Box_0);
                              PopChoice();
                            }
                          else
                            {
                              t = v_3;
                              {
                                ATerm w_3 = t;
                                if(PushChoice()==0)
                                  {
                                    t = FBOX_2(t, Font_Operator_0, Box_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = w_3;
                                    {
                                      ATerm x_3 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm m_0 (ATerm t)
                                          {
                                            t = list_1(t, A_Option_0);
                                            return(t);
                                          }
                                          ATerm n_0 (ATerm t)
                                          {
                                            t = list_1(t, S_Option_0);
                                            return(t);
                                          }
                                          ATerm o_0 (ATerm t)
                                          {
                                            t = list_1(t, Box_0);
                                            return(t);
                                          }
                                          t = A_3(t, m_0, n_0, o_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = x_3;
                                          {
                                            ATerm y_3 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm p_0 (ATerm t)
                                                {
                                                  t = list_1(t, S_Option_0);
                                                  return(t);
                                                }
                                                ATerm q_0 (ATerm t)
                                                {
                                                  t = list_1(t, Box_0);
                                                  return(t);
                                                }
                                                t = R_2(t, p_0, q_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = y_3;
                                                {
                                                  ATerm d_4 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = LBL_2(t, is_string_0, Box_0);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = d_4;
                                                      {
                                                        ATerm e_4 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = REF_2(t, is_string_0, Box_0);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = e_4;
                                                            {
                                                              ATerm g_4 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm r_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, S_Option_0);
                                                                    return(t);
                                                                  }
                                                                  ATerm s_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, Box_0);
                                                                    return(t);
                                                                  }
                                                                  t = C_2(t, r_0, s_0);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = g_4;
                                                                  {
                                                                    ATerm i_4 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = L_2(t, Box_0, Box_0);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = i_4;
                                                                        {
                                                                          ATerm j_4 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = LINT_2(t, is_int_0, Box_0);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = j_4;
                                                                              {
                                                                                ATerm k_4 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    t = Arg_1(t, is_int_0);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = k_4;
                                                                                    {
                                                                                      ATerm l_4 = t;
                                                                                      if(PushChoice()==0)
                                                                                        {
                                                                                          t = Arg2_2(t, is_int_0, is_int_0);
                                                                                          PopChoice();
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = l_4;
                                                                                          {
                                                                                            ATerm t_0 (ATerm t)
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Box: ", 0, ATtrue));
                                                                                              return(t);
                                                                                            }
                                                                                            t = debug_1(t, t_0);
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
                        }
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm y_18 = NULL;
  y_18 = t;
  x_18 :
  if(!(match_cons(y_18, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm v_25 (ATerm), ATerm w_25 (ATerm))
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL;
  d_19 = t;
  c_19 :
  if(match_cons(d_19, sym_TCons_2))
    {
      e_19 = ATgetArgument(d_19, 0);
      f_19 = ATgetArgument(d_19, 1);
      {
        ATerm i_19 = NULL;
        t = not_null(e_19);
        {
          ATerm k_19 = NULL;
          t = v_25(t);
          i_19 = t;
          t = not_null(f_19);
          t = w_25(t);
          k_19 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_19), not_null(k_19));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm r_19 = NULL;
  ATerm m_4;
  m_4 = t;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm s_19 = NULL,t_19 = NULL;
      s_19 = t;
      q_19 :
      if(match_cons(s_19, sym_Program_1))
        {
          t_19 = ATgetArgument(s_19, 0);
          if(r_19 != NULL && r_19 != t_19)
            _fail(t_19);
          else
            r_19 = t_19;
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1(t, u_0);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_19), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = m_4;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = printnl_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm w_19 = NULL;
  w_19 = t;
  t = SSL_exit(not_null(w_19));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  d_20 = t;
  a_20 :
  if(match_cons(d_20, sym_TCons_2))
    {
      e_20 = ATgetArgument(d_20, 0);
      f_20 = ATgetArgument(d_20, 1);
      b_20 :
      if(match_cons(f_20, sym_TCons_2))
        {
          g_20 = ATgetArgument(f_20, 0);
          h_20 = ATgetArgument(f_20, 1);
          c_20 :
          if(match_cons(h_20, sym_TNil_0))
            {
              ATerm n_4;
              n_4 = t;
              t = SSL_printnl(not_null(e_20), not_null(g_20));
              t = n_4;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm b_41 (ATerm))
{
  ATerm r_4 = t;
  if(PushChoice()==0)
    {
      t = b_41(t);
      PopChoice();
    }
  else
    t = r_4;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL;
  ATerm t_4 = t;
  if(PushChoice()==0)
    {
      ATerm v_0 (ATerm t)
      {
        ATerm u_4 = t;
        if(PushChoice()==0)
          {
            ATerm x_0 (ATerm t)
            {
              ATerm v_20 = NULL;
              v_20 = t;
              l_20 :
              if(!(match_cons(v_20, sym_Silent_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, x_0);
            PopChoice();
            _fail(t);
          }
        else
          t = u_4;
        return(t);
      }
      ATerm w_0 (ATerm t)
      {
        ATerm y_0 (ATerm t)
        {
          ATerm w_20 = NULL;
          w_20 = t;
          m_20 :
          if(!(match_cons(w_20, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, _id, y_0);
        return(t);
      }
      t = TCons_2(t, v_0, w_0);
      {
        ATerm z_0 (ATerm t)
        {
          ATerm b_1 (ATerm t)
          {
            ATerm x_20 = NULL,y_20 = NULL;
            x_20 = t;
            o_20 :
            if(match_cons(x_20, sym_Runtime_1))
              {
                y_20 = ATgetArgument(x_20, 0);
                if(u_20 != NULL && u_20 != y_20)
                  _fail(y_20);
                else
                  u_20 = y_20;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, b_1);
          return(t);
        }
        ATerm a_1 (ATerm t)
        {
          ATerm c_1 (ATerm t)
          {
            ATerm z_20 = NULL;
            z_20 = t;
            p_20 :
            if(!(match_cons(z_20, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, _id, c_1);
          return(t);
        }
        t = TCons_2(t, z_0, a_1);
        {
          ATerm d_1 (ATerm t)
          {
            ATerm f_1 (ATerm t)
            {
              ATerm a_21 = NULL,b_21 = NULL;
              a_21 = t;
              r_20 :
              if(match_cons(a_21, sym_Program_1))
                {
                  b_21 = ATgetArgument(a_21, 0);
                  if(t_20 != NULL && t_20 != b_21)
                    _fail(b_21);
                  else
                    t_20 = b_21;
                }
              else
                _fail(t);
              return(t);
            }
            t = fetch_1(t, f_1);
            return(t);
          }
          ATerm e_1 (ATerm t)
          {
            ATerm g_1 (ATerm t)
            {
              ATerm c_21 = NULL;
              c_21 = t;
              s_20 :
              if(!(match_cons(c_21, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, _id, g_1);
            return(t);
          }
          t = TCons_2(t, d_1, e_1);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_20), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_20), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
        }
      }
      PopChoice();
    }
  else
    t = t_4;
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL;
  j_21 = t;
  g_21 :
  if(match_cons(j_21, sym_TCons_2))
    {
      k_21 = ATgetArgument(j_21, 0);
      l_21 = ATgetArgument(j_21, 1);
      h_21 :
      if(match_cons(l_21, sym_TCons_2))
        {
          m_21 = ATgetArgument(l_21, 0);
          n_21 = ATgetArgument(l_21, 1);
          i_21 :
          if(match_cons(n_21, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(k_21), not_null(m_21));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
  v_21 = t;
  s_21 :
  if(match_cons(v_21, sym_TCons_2))
    {
      w_21 = ATgetArgument(v_21, 0);
      x_21 = ATgetArgument(v_21, 1);
      t_21 :
      if(match_cons(x_21, sym_TCons_2))
        {
          y_21 = ATgetArgument(x_21, 0);
          z_21 = ATgetArgument(x_21, 1);
          u_21 :
          if(match_cons(z_21, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(w_21), not_null(y_21));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm t_22 = NULL;
  ATerm v_4;
  v_4 = t;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm w_4 = t;
      if(PushChoice()==0)
        {
          ATerm j_1 (ATerm t)
          {
            ATerm u_22 = NULL,v_22 = NULL;
            u_22 = t;
            g_22 :
            if(match_cons(u_22, sym_Output_1))
              {
                v_22 = ATgetArgument(u_22, 0);
                if(t_22 != NULL && t_22 != v_22)
                  _fail(v_22);
                else
                  t_22 = v_22;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, j_1);
          PopChoice();
        }
      else
        {
          t = w_4;
          {
            ATerm w_22 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            w_22 = t;
            if(t_22 != NULL && t_22 != w_22)
              _fail(w_22);
            else
              t_22 = w_22;
          }
        }
      return(t);
    }
    ATerm i_1 (ATerm t)
    {
      ATerm k_1 (ATerm t)
      {
        ATerm x_22 = NULL;
        x_22 = t;
        i_22 :
        if(!(match_cons(x_22, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, _id, k_1);
      return(t);
    }
    t = TCons_2(t, h_1, i_1);
  }
  t = v_4;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm m_1 (ATerm t)
      {
        ATerm o_1 (ATerm t)
        {
          t = not_null(t_22);
          return(t);
        }
        t = split_2(t, o_1, _id);
        return(t);
      }
      ATerm n_1 (ATerm t)
      {
        ATerm y_22 = NULL;
        y_22 = t;
        o_22 :
        if(!(match_cons(y_22, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, m_1, n_1);
      return(t);
    }
    t = TCons_2(t, _id, l_1);
    {
      ATerm x_4 = t;
      if(PushChoice()==0)
        {
          ATerm p_1 (ATerm t)
          {
            ATerm r_1 (ATerm t)
            {
              ATerm z_22 = NULL;
              z_22 = t;
              q_22 :
              if(!(match_cons(z_22, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, r_1);
            return(t);
          }
          ATerm q_1 (ATerm t)
          {
            ATerm s_1 (ATerm t)
            {
              ATerm a_23 = NULL;
              a_23 = t;
              r_22 :
              if(!(match_cons(a_23, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, WriteToBinaryFile_0, s_1);
            return(t);
          }
          t = TCons_2(t, p_1, q_1);
          PopChoice();
        }
      else
        {
          t = x_4;
          {
            ATerm t_1 (ATerm t)
            {
              ATerm u_1 (ATerm t)
              {
                ATerm b_23 = NULL;
                b_23 = t;
                s_22 :
                if(!(match_cons(b_23, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, WriteToTextFile_0, u_1);
              return(t);
            }
            t = TCons_2(t, _id, t_1);
          }
        }
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm g_31 (ATerm))
{
  ATerm j_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  ATerm y_4;
  y_4 = t;
  t = dtime_0(t);
  t = y_4;
  t = g_31(t);
  {
    ATerm z_4;
    z_4 = t;
    {
      ATerm k_23 = NULL;
      t = dtime_0(t);
      k_23 = t;
      if(j_23 != NULL && j_23 != k_23)
        _fail(k_23);
      else
        j_23 = k_23;
    }
    t = z_4;
    m_23 = t;
    g_23 :
    if(match_cons(m_23, sym_TCons_2))
      {
        n_23 = ATgetArgument(m_23, 0);
        o_23 = ATgetArgument(m_23, 1);
        h_23 :
        if(match_cons(o_23, sym_TCons_2))
          {
            p_23 = ATgetArgument(o_23, 0);
            q_23 = ATgetArgument(o_23, 1);
            i_23 :
            if(match_cons(q_23, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(j_23)), not_null(n_23)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_23), (ATerm) ATmakeAppl(sym_TNil_0)));
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm w_23 = NULL;
  w_23 = t;
  t = SSL_ReadFromFile(not_null(w_23));
  return(t);
}
ATerm split_2 (ATerm t, ATerm b_45 (ATerm), ATerm c_45 (ATerm))
{
  ATerm d_24 = NULL;
  ATerm f_24 = NULL;
  d_24 = t;
  {
    ATerm s_24 = NULL;
    t = b_45(t);
    f_24 = t;
    t = not_null(d_24);
    t = c_45(t);
    s_24 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_24), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm g_26 = NULL;
  ATerm a_5;
  a_5 = t;
  {
    ATerm b_5 = t;
    if(PushChoice()==0)
      {
        ATerm v_1 (ATerm t)
        {
          ATerm h_26 = NULL,i_26 = NULL;
          h_26 = t;
          e_26 :
          if(match_cons(h_26, sym_Input_1))
            {
              i_26 = ATgetArgument(h_26, 0);
              if(g_26 != NULL && g_26 != i_26)
                _fail(i_26);
              else
                g_26 = i_26;
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1(t, v_1);
        PopChoice();
      }
    else
      {
        t = b_5;
        {
          ATerm j_26 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          j_26 = t;
          if(g_26 != NULL && g_26 != j_26)
            _fail(j_26);
          else
            g_26 = j_26;
        }
      }
  }
  t = a_5;
  {
    ATerm w_1 (ATerm t)
    {
      t = not_null(g_26);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, w_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm n_26 = NULL;
  n_26 = t;
  m_26 :
  if(!(match_cons(n_26, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_24 (ATerm))
{
  ATerm r_26 = NULL,s_26 = NULL;
  r_26 = t;
  q_26 :
  if(match_cons(r_26, sym_Undefined_1))
    {
      s_26 = ATgetArgument(r_26, 0);
      {
        ATerm u_26 = NULL;
        t = not_null(s_26);
        t = b_24(t);
        u_26 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(u_26));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_26 = NULL;
  z_26 = t;
  y_26 :
  if(!(match_cons(z_26, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm v_39 (ATerm))
{
  ATerm a_27 (ATerm t)
  {
    ATerm c_5 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, v_39, _id);
        PopChoice();
      }
    else
      {
        t = c_5;
        t = Cons_2(t, _id, a_27);
      }
    return(t);
  }
  t = a_27(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_30 (ATerm))
{
  t = fetch_1(t, k_30);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm f_31 (ATerm))
{
  ATerm x_1 (ATerm t)
  {
    ATerm h_5 = t;
    if(PushChoice()==0)
      {
        ATerm d_27 = NULL;
        d_27 = t;
        b_27 :
        if(!(match_cons(d_27, sym_Help_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = h_5;
        {
          ATerm i_5 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = i_5;
              {
                ATerm e_27 = NULL;
                e_27 = t;
                c_27 :
                if(!(match_cons(e_27, sym_Version_0)))
                  _fail(t);
              }
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, x_1);
  t = f_31(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
  ATerm k_5;
  k_5 = t;
  {
    ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL;
    n_27 = t;
    g_27 :
    if(match_cons(n_27, sym_TCons_2))
      {
        o_27 = ATgetArgument(n_27, 0);
        p_27 = ATgetArgument(n_27, 1);
        h_27 :
        if(match_cons(p_27, sym_TCons_2))
          {
            q_27 = ATgetArgument(p_27, 0);
            r_27 = ATgetArgument(p_27, 1);
            i_27 :
            if(match_cons(r_27, sym_TCons_2))
              {
                s_27 = ATgetArgument(r_27, 0);
                t_27 = ATgetArgument(r_27, 1);
                j_27 :
                if(match_cons(t_27, sym_TNil_0))
                  {
                    if(k_27 != NULL && k_27 != o_27)
                      _fail(o_27);
                    else
                      k_27 = o_27;
                    if(l_27 != NULL && l_27 != q_27)
                      _fail(q_27);
                    else
                      l_27 = q_27;
                    if(m_27 != NULL && m_27 != s_27)
                      _fail(s_27);
                    else
                      m_27 = s_27;
                    t = SSL_table_put(not_null(k_27), not_null(l_27), not_null(m_27));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = k_5;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_27 = NULL;
  w_27 = t;
  t = SSL_table_create(not_null(w_27));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm a_28 = NULL;
  a_28 = t;
  {
    ATerm m_5;
    m_5 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_28), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = m_5;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm d_30 (ATerm), ATerm e_30 (ATerm))
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
  g_28 = t;
  f_28 :
  if(match_cons(g_28, sym_Cons_2))
    {
      h_28 = ATgetArgument(g_28, 0);
      i_28 = ATgetArgument(g_28, 1);
      {
        ATerm l_28 = NULL;
        t = not_null(h_28);
        t = d_30(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = e_30(t);
        l_28 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_28), not_null(i_28));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm f_30 (ATerm), ATerm g_30 (ATerm))
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL;
  t_28 = t;
  r_28 :
  if(match_cons(t_28, sym_Cons_2))
    {
      u_28 = ATgetArgument(t_28, 0);
      v_28 = ATgetArgument(t_28, 1);
      s_28 :
      if(match_cons(v_28, sym_Cons_2))
        {
          w_28 = ATgetArgument(v_28, 0);
          x_28 = ATgetArgument(v_28, 1);
          {
            ATerm b_29 = NULL;
            t = not_null(u_28);
            t = f_30(t);
            t = not_null(w_28);
            t = g_30(t);
            b_29 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_29), not_null(x_28));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm n_5 = t;
  if(PushChoice()==0)
    {
      ATerm y_1 (ATerm t)
      {
        ATerm z_29 = NULL;
        z_29 = t;
        f_29 :
        if(!(match_string(z_29, "-S")))
          _fail(t);
        return(t);
      }
      ATerm z_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, y_1, z_1);
      PopChoice();
    }
  else
    {
      t = n_5;
      {
        ATerm o_5 = t;
        if(PushChoice()==0)
          {
            ATerm a_2 (ATerm t)
            {
              ATerm a_30 = NULL;
              a_30 = t;
              g_29 :
              if(!(match_string(a_30, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm b_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, a_2, b_2);
            PopChoice();
          }
        else
          {
            t = o_5;
            {
              ATerm p_5 = t;
              if(PushChoice()==0)
                {
                  ATerm c_2 (ATerm t)
                  {
                    ATerm h_30 = NULL;
                    h_30 = t;
                    h_29 :
                    if(!(match_string(h_30, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm d_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, c_2, d_2);
                  PopChoice();
                }
              else
                {
                  t = p_5;
                  {
                    ATerm q_5 = t;
                    if(PushChoice()==0)
                      {
                        ATerm e_2 (ATerm t)
                        {
                          ATerm i_30 = NULL;
                          i_30 = t;
                          i_29 :
                          if(!(match_string(i_30, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm f_2 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, e_2, f_2);
                        PopChoice();
                      }
                    else
                      {
                        t = q_5;
                        {
                          ATerm r_5 = t;
                          if(PushChoice()==0)
                            {
                              ATerm g_2 (ATerm t)
                              {
                                ATerm j_30 = NULL;
                                j_30 = t;
                                j_29 :
                                if(!(match_string(j_30, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm h_2 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, g_2, h_2);
                              PopChoice();
                            }
                          else
                            {
                              t = r_5;
                              {
                                ATerm s_5 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm i_2 (ATerm t)
                                    {
                                      ATerm l_30 = NULL;
                                      l_30 = t;
                                      k_29 :
                                      if(!(match_string(l_30, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm j_2 (ATerm t)
                                    {
                                      ATerm n_30 = NULL;
                                      n_30 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(n_30));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, i_2, j_2);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = s_5;
                                    {
                                      ATerm x_5 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm k_2 (ATerm t)
                                          {
                                            ATerm r_30 = NULL;
                                            r_30 = t;
                                            m_29 :
                                            if(!(match_string(r_30, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm l_2 (ATerm t)
                                          {
                                            ATerm s_30 = NULL;
                                            s_30 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_30));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, k_2, l_2);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = x_5;
                                          {
                                            ATerm y_5 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm m_2 (ATerm t)
                                                {
                                                  ATerm x_30 = NULL;
                                                  x_30 = t;
                                                  o_29 :
                                                  if(!(match_string(x_30, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm n_2 (ATerm t)
                                                {
                                                  ATerm y_30 = NULL;
                                                  y_30 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_30));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, m_2, n_2);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = y_5;
                                                {
                                                  ATerm a_6 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm o_2 (ATerm t)
                                                      {
                                                        ATerm a_31 = NULL;
                                                        a_31 = t;
                                                        q_29 :
                                                        if(!(match_string(a_31, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm p_2 (ATerm t)
                                                      {
                                                        ATerm b_31 = NULL;
                                                        b_31 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_31));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, o_2, p_2);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = a_6;
                                                      {
                                                        ATerm c_6 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm q_2 (ATerm t)
                                                            {
                                                              ATerm d_31 = NULL;
                                                              d_31 = t;
                                                              s_29 :
                                                              if(!(match_string(d_31, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm r_2 (ATerm t)
                                                            {
                                                              ATerm e_31 = NULL;
                                                              e_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_31));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, q_2, r_2);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = c_6;
                                                            {
                                                              ATerm d_6 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm s_2 (ATerm t)
                                                                  {
                                                                    ATerm i_31 = NULL;
                                                                    i_31 = t;
                                                                    u_29 :
                                                                    if(!(match_string(i_31, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm t_2 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, s_2, t_2);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = d_6;
                                                                  {
                                                                    ATerm e_6 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm u_2 (ATerm t)
                                                                        {
                                                                          ATerm j_31 = NULL;
                                                                          j_31 = t;
                                                                          v_29 :
                                                                          if(!(match_string(j_31, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm v_2 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, u_2, v_2);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_6;
                                                                        {
                                                                          ATerm f_6 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm w_2 (ATerm t)
                                                                              {
                                                                                ATerm k_31 = NULL;
                                                                                k_31 = t;
                                                                                w_29 :
                                                                                if(!(match_string(k_31, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm x_2 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, w_2, x_2);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_6;
                                                                              {
                                                                                ATerm r_6 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm y_2 (ATerm t)
                                                                                    {
                                                                                      ATerm l_31 = NULL;
                                                                                      l_31 = t;
                                                                                      x_29 :
                                                                                      if(!(match_string(l_31, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm z_2 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, y_2, z_2);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = r_6;
                                                                                    {
                                                                                      ATerm a_3 (ATerm t)
                                                                                      {
                                                                                        ATerm m_31 = NULL;
                                                                                        m_31 = t;
                                                                                        y_29 :
                                                                                        if(!(match_string(m_31, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm b_3 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, a_3, b_3);
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
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
  u_31 = t;
  t_31 :
  if(match_cons(u_31, sym_Cons_2))
    {
      v_31 = ATgetArgument(u_31, 0);
      w_31 = ATgetArgument(u_31, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(v_31)), not_null(w_31));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm z_25 (ATerm), ATerm a_26 (ATerm))
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
  e_32 = t;
  d_32 :
  if(match_cons(e_32, sym_Cons_2))
    {
      f_32 = ATgetArgument(e_32, 0);
      g_32 = ATgetArgument(e_32, 1);
      {
        ATerm j_32 = NULL;
        t = not_null(f_32);
        {
          ATerm l_32 = NULL;
          t = z_25(t);
          j_32 = t;
          t = not_null(g_32);
          t = a_26(t);
          l_32 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_32), not_null(l_32));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm r_32 = NULL;
  r_32 = t;
  q_32 :
  if(!(match_cons(r_32, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm b_30 (ATerm))
{
  ATerm c_3 (ATerm t)
  {
    ATerm u_32 = NULL;
    u_32 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_32));
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    ATerm s_6 = t;
    if(PushChoice()==0)
      {
        ATerm t_6 = t;
        if(PushChoice()==0)
          {
            ATerm w_32 = NULL;
            w_32 = t;
            t_32 :
            if(!(match_cons(w_32, sym_Nil_0)))
              _fail(t);
            PopChoice();
          }
        else
          {
            t = t_6;
            t = b_30(t);
            t = Cons_2(t, _id, d_3);
          }
        PopChoice();
      }
    else
      {
        t = s_6;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, c_3, d_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm u_30 (ATerm), ATerm v_30 (ATerm), ATerm w_30 (ATerm))
{
  ATerm e_3 (ATerm t)
  {
    ATerm y_6 = t;
    if(PushChoice()==0)
      {
        t = v_30(t);
        PopChoice();
      }
    else
      {
        t = y_6;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, e_3);
  t = store_options_0(t);
  {
    ATerm z_6 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, w_30);
        PopChoice();
      }
    else
      {
        t = z_6;
        {
          ATerm b_7 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, u_30);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = b_7;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm p_30 (ATerm), ATerm q_30 (ATerm))
{
  t = iowrap_3(t, p_30, q_30, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm m_30 (ATerm))
{
  ATerm f_3 (ATerm t)
  {
    ATerm g_3 (ATerm t)
    {
      ATerm h_3 (ATerm t)
      {
        ATerm a_33 = NULL;
        a_33 = t;
        z_32 :
        if(!(match_cons(a_33, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, m_30, h_3);
      return(t);
    }
    t = TCons_2(t, _id, g_3);
    return(t);
  }
  t = iowrap_2(t, f_3, _fail);
  return(t);
}
ATerm abox_format_0 (ATerm t)
{
  t = iowrap_1(t, Box_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, Box_0);
  return(t);
}
