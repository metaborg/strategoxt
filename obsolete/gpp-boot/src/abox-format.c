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
ATerm debug_1 (ATerm, ATerm i_46 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Arg2_2 (ATerm, ATerm m_26 (ATerm), ATerm n_26 (ATerm));
ATerm Arg_1 (ATerm, ATerm l_26 (ATerm));
ATerm LINT_2 (ATerm, ATerm j_26 (ATerm), ATerm k_26 (ATerm));
ATerm L_2 (ATerm, ATerm h_26 (ATerm), ATerm i_26 (ATerm));
ATerm list_1 (ATerm, ATerm e_41 (ATerm));
ATerm IS_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm Space_Symbol_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm i_25 (ATerm), ATerm j_25 (ATerm));
ATerm S_Option_0 (ATerm);
ATerm C_2 (ATerm, ATerm f_26 (ATerm), ATerm g_26 (ATerm));
ATerm is_string_0 (ATerm);
ATerm REF_2 (ATerm, ATerm d_26 (ATerm), ATerm e_26 (ATerm));
ATerm LBL_2 (ATerm, ATerm b_26 (ATerm), ATerm c_26 (ATerm));
ATerm R_2 (ATerm, ATerm p_25 (ATerm), ATerm q_25 (ATerm));
ATerm AR_1 (ATerm, ATerm t_25 (ATerm));
ATerm AC_1 (ATerm, ATerm s_25 (ATerm));
ATerm AL_1 (ATerm, ATerm r_25 (ATerm));
ATerm A_Option_0 (ATerm);
ATerm A_3 (ATerm, ATerm m_25 (ATerm), ATerm n_25 (ATerm), ATerm o_25 (ATerm));
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
ATerm FFID_2 (ATerm, ATerm z_25 (ATerm), ATerm a_26 (ATerm));
ATerm FInt_2 (ATerm, ATerm x_25 (ATerm), ATerm y_25 (ATerm));
ATerm F_Option_0 (ATerm);
ATerm F_1 (ATerm, ATerm w_25 (ATerm));
ATerm Font_Operator_0 (ATerm);
ATerm FBOX_2 (ATerm, ATerm u_25 (ATerm), ATerm v_25 (ATerm));
ATerm ALT_2 (ATerm, ATerm g_25 (ATerm), ATerm h_25 (ATerm));
ATerm HV_2 (ATerm, ATerm e_25 (ATerm), ATerm f_25 (ATerm));
ATerm V_2 (ATerm, ATerm c_25 (ATerm), ATerm d_25 (ATerm));
ATerm H_2 (ATerm, ATerm a_25 (ATerm), ATerm b_25 (ATerm));
ATerm S_1 (ATerm, ATerm z_24 (ATerm));
ATerm Box_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm o_26 (ATerm), ATerm p_26 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm p_32 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm w_46 (ATerm), ATerm x_46 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm o_32 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_41 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm v_30 (ATerm));
ATerm map_1 (ATerm, ATerm c_41 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm i_33 (ATerm), ATerm j_33 (ATerm));
ATerm repeat_1 (ATerm, ATerm l_33 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm u_30 (ATerm));
ATerm Program_1 (ATerm, ATerm t_24 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm u_24 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_41 (ATerm));
ATerm option_defined_1 (ATerm, ATerm t_31 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm q_42 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm z_30 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm s_26 (ATerm), ATerm t_26 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm x_30 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm w_30 (ATerm));
ATerm iowrap_3 (ATerm, ATerm d_32 (ATerm), ATerm e_32 (ATerm), ATerm f_32 (ATerm));
ATerm iowrap_2 (ATerm, ATerm y_31 (ATerm), ATerm z_31 (ATerm));
ATerm iowrap_1 (ATerm, ATerm v_31 (ATerm));
ATerm abox_format_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm i_46 (ATerm))
{
  ATerm r_3;
  r_3 = t;
  {
    ATerm g_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm h_0 (ATerm t)
    {
      ATerm u_3 = NULL;
      ATerm w_3 = NULL;
      u_3 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = i_46(t);
      w_3 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_3), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_3), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, g_0, h_0);
    t = printnl_0(t);
  }
  t = r_3;
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm b_4 = NULL;
  b_4 = t;
  t = SSL_is_int(not_null(b_4));
  return(t);
}
ATerm Arg2_2 (ATerm t, ATerm m_26 (ATerm), ATerm n_26 (ATerm))
{
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL;
  i_4 = t;
  h_4 :
  if(match_cons(i_4, sym_Arg2_2))
    {
      j_4 = ATgetArgument(i_4, 0);
      k_4 = ATgetArgument(i_4, 1);
      {
        ATerm n_4 = NULL;
        t = not_null(j_4);
        {
          ATerm p_4 = NULL;
          t = m_26(t);
          n_4 = t;
          t = not_null(k_4);
          t = n_26(t);
          p_4 = t;
          t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(n_4), not_null(p_4));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Arg_1 (ATerm t, ATerm l_26 (ATerm))
{
  ATerm e_5 = NULL,f_5 = NULL;
  e_5 = t;
  d_5 :
  if(match_cons(e_5, sym_Arg_1))
    {
      f_5 = ATgetArgument(e_5, 0);
      {
        ATerm h_5 = NULL;
        t = not_null(f_5);
        t = l_26(t);
        h_5 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(h_5));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm LINT_2 (ATerm t, ATerm j_26 (ATerm), ATerm k_26 (ATerm))
{
  ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL;
  s_5 = t;
  r_5 :
  if(match_cons(s_5, sym_LINT_2))
    {
      t_5 = ATgetArgument(s_5, 0);
      u_5 = ATgetArgument(s_5, 1);
      {
        ATerm x_5 = NULL;
        t = not_null(t_5);
        {
          ATerm z_5 = NULL;
          t = j_26(t);
          x_5 = t;
          t = not_null(u_5);
          t = k_26(t);
          z_5 = t;
          t = (ATerm) ATmakeAppl(sym_LINT_2, not_null(x_5), not_null(z_5));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm L_2 (ATerm t, ATerm h_26 (ATerm), ATerm i_26 (ATerm))
{
  ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL;
  i_6 = t;
  h_6 :
  if(match_cons(i_6, sym_L_2))
    {
      j_6 = ATgetArgument(i_6, 0);
      k_6 = ATgetArgument(i_6, 1);
      {
        ATerm n_6 = NULL;
        t = not_null(j_6);
        {
          ATerm p_6 = NULL;
          t = h_26(t);
          n_6 = t;
          t = not_null(k_6);
          t = i_26(t);
          p_6 = t;
          t = (ATerm) ATmakeAppl(sym_L_2, not_null(n_6), not_null(p_6));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm list_1 (ATerm t, ATerm e_41 (ATerm))
{
  ATerm u_6 (ATerm t)
  {
    ATerm s_3 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = s_3;
        t = Cons_2(t, e_41, u_6);
      }
    return(t);
  }
  t = u_6(t);
  return(t);
}
ATerm IS_0 (ATerm t)
{
  ATerm w_6 = NULL;
  w_6 = t;
  v_6 :
  if(!(match_cons(w_6, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm HS_0 (ATerm t)
{
  ATerm y_6 = NULL;
  y_6 = t;
  x_6 :
  if(!(match_cons(y_6, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm a_7 = NULL;
  a_7 = t;
  z_6 :
  if(!(match_cons(a_7, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Space_Symbol_0 (ATerm t)
{
  ATerm t_3 = t;
  if(PushChoice()==0)
    {
      t = VS_0(t);
      PopChoice();
    }
  else
    {
      t = t_3;
      {
        ATerm v_3 = t;
        if(PushChoice()==0)
          {
            t = HS_0(t);
            PopChoice();
          }
        else
          {
            t = v_3;
            t = IS_0(t);
          }
      }
    }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm i_25 (ATerm), ATerm j_25 (ATerm))
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL;
  f_7 = t;
  e_7 :
  if(match_cons(f_7, sym_SOpt_2))
    {
      g_7 = ATgetArgument(f_7, 0);
      h_7 = ATgetArgument(f_7, 1);
      {
        ATerm k_7 = NULL;
        t = not_null(g_7);
        {
          ATerm m_7 = NULL;
          t = i_25(t);
          k_7 = t;
          t = not_null(h_7);
          t = j_25(t);
          m_7 = t;
          t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(k_7), not_null(m_7));
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
ATerm C_2 (ATerm t, ATerm f_26 (ATerm), ATerm g_26 (ATerm))
{
  ATerm h_8 = NULL,i_8 = NULL,v_8 = NULL;
  h_8 = t;
  d_8 :
  if(match_cons(h_8, sym_C_2))
    {
      i_8 = ATgetArgument(h_8, 0);
      v_8 = ATgetArgument(h_8, 1);
      {
        ATerm y_8 = NULL;
        t = not_null(i_8);
        {
          ATerm a_9 = NULL;
          t = f_26(t);
          y_8 = t;
          t = not_null(v_8);
          t = g_26(t);
          a_9 = t;
          t = (ATerm) ATmakeAppl(sym_C_2, not_null(y_8), not_null(a_9));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm g_9 = NULL;
  g_9 = t;
  t = SSL_is_string(not_null(g_9));
  return(t);
}
ATerm REF_2 (ATerm t, ATerm d_26 (ATerm), ATerm e_26 (ATerm))
{
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL;
  o_9 = t;
  m_9 :
  if(match_cons(o_9, sym_REF_2))
    {
      p_9 = ATgetArgument(o_9, 0);
      q_9 = ATgetArgument(o_9, 1);
      {
        ATerm t_9 = NULL;
        t = not_null(p_9);
        {
          ATerm v_9 = NULL;
          t = d_26(t);
          t_9 = t;
          t = not_null(q_9);
          t = e_26(t);
          v_9 = t;
          t = (ATerm) ATmakeAppl(sym_REF_2, not_null(t_9), not_null(v_9));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm LBL_2 (ATerm t, ATerm b_26 (ATerm), ATerm c_26 (ATerm))
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL;
  e_10 = t;
  d_10 :
  if(match_cons(e_10, sym_LBL_2))
    {
      f_10 = ATgetArgument(e_10, 0);
      g_10 = ATgetArgument(e_10, 1);
      {
        ATerm j_10 = NULL;
        t = not_null(f_10);
        {
          ATerm l_10 = NULL;
          t = b_26(t);
          j_10 = t;
          t = not_null(g_10);
          t = c_26(t);
          l_10 = t;
          t = (ATerm) ATmakeAppl(sym_LBL_2, not_null(j_10), not_null(l_10));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm R_2 (ATerm t, ATerm p_25 (ATerm), ATerm q_25 (ATerm))
{
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL;
  u_10 = t;
  t_10 :
  if(match_cons(u_10, sym_R_2))
    {
      v_10 = ATgetArgument(u_10, 0);
      w_10 = ATgetArgument(u_10, 1);
      {
        ATerm z_10 = NULL;
        t = not_null(v_10);
        {
          ATerm b_11 = NULL;
          t = p_25(t);
          z_10 = t;
          t = not_null(w_10);
          t = q_25(t);
          b_11 = t;
          t = (ATerm) ATmakeAppl(sym_R_2, not_null(z_10), not_null(b_11));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm AR_1 (ATerm t, ATerm t_25 (ATerm))
{
  ATerm m_11 = NULL,n_11 = NULL;
  m_11 = t;
  l_11 :
  if(match_cons(m_11, sym_AR_1))
    {
      n_11 = ATgetArgument(m_11, 0);
      {
        ATerm p_11 = NULL;
        t = not_null(n_11);
        t = t_25(t);
        p_11 = t;
        t = (ATerm) ATmakeAppl(sym_AR_1, not_null(p_11));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm AC_1 (ATerm t, ATerm s_25 (ATerm))
{
  ATerm w_11 = NULL,x_11 = NULL;
  w_11 = t;
  v_11 :
  if(match_cons(w_11, sym_AC_1))
    {
      x_11 = ATgetArgument(w_11, 0);
      {
        ATerm z_11 = NULL;
        t = not_null(x_11);
        t = s_25(t);
        z_11 = t;
        t = (ATerm) ATmakeAppl(sym_AC_1, not_null(z_11));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm AL_1 (ATerm t, ATerm r_25 (ATerm))
{
  ATerm g_12 = NULL,h_12 = NULL;
  g_12 = t;
  f_12 :
  if(match_cons(g_12, sym_AL_1))
    {
      h_12 = ATgetArgument(g_12, 0);
      {
        ATerm j_12 = NULL;
        t = not_null(h_12);
        t = r_25(t);
        j_12 = t;
        t = (ATerm) ATmakeAppl(sym_AL_1, not_null(j_12));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm A_Option_0 (ATerm t)
{
  ATerm x_3 = t;
  if(PushChoice()==0)
    {
      ATerm i_0 (ATerm t)
      {
        t = list_1(t, S_Option_0);
        return(t);
      }
      t = AL_1(t, i_0);
      PopChoice();
    }
  else
    {
      t = x_3;
      {
        ATerm y_3 = t;
        if(PushChoice()==0)
          {
            ATerm j_0 (ATerm t)
            {
              t = list_1(t, S_Option_0);
              return(t);
            }
            t = AC_1(t, j_0);
            PopChoice();
          }
        else
          {
            t = y_3;
            {
              ATerm k_0 (ATerm t)
              {
                t = list_1(t, S_Option_0);
                return(t);
              }
              t = AR_1(t, k_0);
            }
          }
      }
    }
  return(t);
}
ATerm A_3 (ATerm t, ATerm m_25 (ATerm), ATerm n_25 (ATerm), ATerm o_25 (ATerm))
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL;
  s_12 = t;
  r_12 :
  if(match_cons(s_12, sym_A_3))
    {
      t_12 = ATgetArgument(s_12, 0);
      u_12 = ATgetArgument(s_12, 1);
      v_12 = ATgetArgument(s_12, 2);
      {
        ATerm z_12 = NULL;
        t = not_null(t_12);
        {
          ATerm b_13 = NULL;
          t = m_25(t);
          z_12 = t;
          t = not_null(u_12);
          {
            ATerm d_13 = NULL;
            t = n_25(t);
            b_13 = t;
            t = not_null(v_12);
            t = o_25(t);
            d_13 = t;
            t = (ATerm) ATmakeAppl(sym_A_3, not_null(z_12), not_null(b_13), not_null(d_13));
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
  ATerm k_13 = NULL;
  k_13 = t;
  j_13 :
  if(!(match_cons(k_13, sym_MATH_0)))
    _fail(t);
  return(t);
}
ATerm NUM_0 (ATerm t)
{
  ATerm m_13 = NULL;
  m_13 = t;
  l_13 :
  if(!(match_cons(m_13, sym_NUM_0)))
    _fail(t);
  return(t);
}
ATerm VAR_0 (ATerm t)
{
  ATerm o_13 = NULL;
  o_13 = t;
  n_13 :
  if(!(match_cons(o_13, sym_VAR_0)))
    _fail(t);
  return(t);
}
ATerm KW_0 (ATerm t)
{
  ATerm q_13 = NULL;
  q_13 = t;
  p_13 :
  if(!(match_cons(q_13, sym_KW_0)))
    _fail(t);
  return(t);
}
ATerm CL_0 (ATerm t)
{
  ATerm s_13 = NULL;
  s_13 = t;
  r_13 :
  if(!(match_cons(s_13, sym_CL_0)))
    _fail(t);
  return(t);
}
ATerm SZ_0 (ATerm t)
{
  ATerm u_13 = NULL;
  u_13 = t;
  t_13 :
  if(!(match_cons(u_13, sym_SZ_0)))
    _fail(t);
  return(t);
}
ATerm SH_0 (ATerm t)
{
  ATerm w_13 = NULL;
  w_13 = t;
  v_13 :
  if(!(match_cons(w_13, sym_SH_0)))
    _fail(t);
  return(t);
}
ATerm SE_0 (ATerm t)
{
  ATerm y_13 = NULL;
  y_13 = t;
  x_13 :
  if(!(match_cons(y_13, sym_SE_0)))
    _fail(t);
  return(t);
}
ATerm FM_0 (ATerm t)
{
  ATerm a_14 = NULL;
  a_14 = t;
  z_13 :
  if(!(match_cons(a_14, sym_FM_0)))
    _fail(t);
  return(t);
}
ATerm FN_0 (ATerm t)
{
  ATerm c_14 = NULL;
  c_14 = t;
  b_14 :
  if(!(match_cons(c_14, sym_FN_0)))
    _fail(t);
  return(t);
}
ATerm Font_Param_0 (ATerm t)
{
  ATerm z_3 = t;
  if(PushChoice()==0)
    {
      t = FN_0(t);
      PopChoice();
    }
  else
    {
      t = z_3;
      {
        ATerm a_4 = t;
        if(PushChoice()==0)
          {
            t = FM_0(t);
            PopChoice();
          }
        else
          {
            t = a_4;
            {
              ATerm c_4 = t;
              if(PushChoice()==0)
                {
                  t = SE_0(t);
                  PopChoice();
                }
              else
                {
                  t = c_4;
                  {
                    ATerm d_4 = t;
                    if(PushChoice()==0)
                      {
                        t = SH_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = d_4;
                        {
                          ATerm e_4 = t;
                          if(PushChoice()==0)
                            {
                              t = SZ_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = e_4;
                              t = CL_0(t);
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
ATerm FFID_2 (ATerm t, ATerm z_25 (ATerm), ATerm a_26 (ATerm))
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
  h_14 = t;
  g_14 :
  if(match_cons(h_14, sym_FFID_2))
    {
      i_14 = ATgetArgument(h_14, 0);
      j_14 = ATgetArgument(h_14, 1);
      {
        ATerm m_14 = NULL;
        t = not_null(i_14);
        {
          ATerm o_14 = NULL;
          t = z_25(t);
          m_14 = t;
          t = not_null(j_14);
          t = a_26(t);
          o_14 = t;
          t = (ATerm) ATmakeAppl(sym_FFID_2, not_null(m_14), not_null(o_14));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm FInt_2 (ATerm t, ATerm x_25 (ATerm), ATerm y_25 (ATerm))
{
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL;
  x_14 = t;
  w_14 :
  if(match_cons(x_14, sym_FInt_2))
    {
      y_14 = ATgetArgument(x_14, 0);
      z_14 = ATgetArgument(x_14, 1);
      {
        ATerm c_15 = NULL;
        t = not_null(y_14);
        {
          ATerm e_15 = NULL;
          t = x_25(t);
          c_15 = t;
          t = not_null(z_14);
          t = y_25(t);
          e_15 = t;
          t = (ATerm) ATmakeAppl(sym_FInt_2, not_null(c_15), not_null(e_15));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm F_Option_0 (ATerm t)
{
  ATerm f_4 = t;
  if(PushChoice()==0)
    {
      t = FInt_2(t, Font_Param_0, is_string_0);
      PopChoice();
    }
  else
    {
      t = f_4;
      t = FFID_2(t, Font_Param_0, is_string_0);
    }
  return(t);
}
ATerm F_1 (ATerm t, ATerm w_25 (ATerm))
{
  ATerm m_15 = NULL,n_15 = NULL;
  m_15 = t;
  l_15 :
  if(match_cons(m_15, sym_F_1))
    {
      n_15 = ATgetArgument(m_15, 0);
      {
        ATerm p_15 = NULL;
        t = not_null(n_15);
        t = w_25(t);
        p_15 = t;
        t = (ATerm) ATmakeAppl(sym_F_1, not_null(p_15));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Font_Operator_0 (ATerm t)
{
  ATerm g_4 = t;
  if(PushChoice()==0)
    {
      ATerm l_0 (ATerm t)
      {
        t = list_1(t, F_Option_0);
        return(t);
      }
      t = F_1(t, l_0);
      PopChoice();
    }
  else
    {
      t = g_4;
      {
        ATerm l_4 = t;
        if(PushChoice()==0)
          {
            t = KW_0(t);
            PopChoice();
          }
        else
          {
            t = l_4;
            {
              ATerm m_4 = t;
              if(PushChoice()==0)
                {
                  t = VAR_0(t);
                  PopChoice();
                }
              else
                {
                  t = m_4;
                  {
                    ATerm o_4 = t;
                    if(PushChoice()==0)
                      {
                        t = NUM_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = o_4;
                        t = MATH_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm FBOX_2 (ATerm t, ATerm u_25 (ATerm), ATerm v_25 (ATerm))
{
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL;
  x_15 = t;
  w_15 :
  if(match_cons(x_15, sym_FBOX_2))
    {
      y_15 = ATgetArgument(x_15, 0);
      z_15 = ATgetArgument(x_15, 1);
      {
        ATerm c_16 = NULL;
        t = not_null(y_15);
        {
          ATerm e_16 = NULL;
          t = u_25(t);
          c_16 = t;
          t = not_null(z_15);
          t = v_25(t);
          e_16 = t;
          t = (ATerm) ATmakeAppl(sym_FBOX_2, not_null(c_16), not_null(e_16));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ALT_2 (ATerm t, ATerm g_25 (ATerm), ATerm h_25 (ATerm))
{
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL;
  n_16 = t;
  m_16 :
  if(match_cons(n_16, sym_ALT_2))
    {
      o_16 = ATgetArgument(n_16, 0);
      p_16 = ATgetArgument(n_16, 1);
      {
        ATerm s_16 = NULL;
        t = not_null(o_16);
        {
          ATerm u_16 = NULL;
          t = g_25(t);
          s_16 = t;
          t = not_null(p_16);
          t = h_25(t);
          u_16 = t;
          t = (ATerm) ATmakeAppl(sym_ALT_2, not_null(s_16), not_null(u_16));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm HV_2 (ATerm t, ATerm e_25 (ATerm), ATerm f_25 (ATerm))
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  d_17 = t;
  c_17 :
  if(match_cons(d_17, sym_HV_2))
    {
      e_17 = ATgetArgument(d_17, 0);
      f_17 = ATgetArgument(d_17, 1);
      {
        ATerm i_17 = NULL;
        t = not_null(e_17);
        {
          ATerm k_17 = NULL;
          t = e_25(t);
          i_17 = t;
          t = not_null(f_17);
          t = f_25(t);
          k_17 = t;
          t = (ATerm) ATmakeAppl(sym_HV_2, not_null(i_17), not_null(k_17));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm V_2 (ATerm t, ATerm c_25 (ATerm), ATerm d_25 (ATerm))
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
  t_17 = t;
  s_17 :
  if(match_cons(t_17, sym_V_2))
    {
      u_17 = ATgetArgument(t_17, 0);
      v_17 = ATgetArgument(t_17, 1);
      {
        ATerm y_17 = NULL;
        t = not_null(u_17);
        {
          ATerm a_18 = NULL;
          t = c_25(t);
          y_17 = t;
          t = not_null(v_17);
          t = d_25(t);
          a_18 = t;
          t = (ATerm) ATmakeAppl(sym_V_2, not_null(y_17), not_null(a_18));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm H_2 (ATerm t, ATerm a_25 (ATerm), ATerm b_25 (ATerm))
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL;
  j_18 = t;
  i_18 :
  if(match_cons(j_18, sym_H_2))
    {
      k_18 = ATgetArgument(j_18, 0);
      l_18 = ATgetArgument(j_18, 1);
      {
        ATerm o_18 = NULL;
        t = not_null(k_18);
        {
          ATerm q_18 = NULL;
          t = a_25(t);
          o_18 = t;
          t = not_null(l_18);
          t = b_25(t);
          q_18 = t;
          t = (ATerm) ATmakeAppl(sym_H_2, not_null(o_18), not_null(q_18));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm S_1 (ATerm t, ATerm z_24 (ATerm))
{
  ATerm y_18 = NULL,z_18 = NULL;
  y_18 = t;
  x_18 :
  if(match_cons(y_18, sym_S_1))
    {
      z_18 = ATgetArgument(y_18, 0);
      {
        ATerm b_19 = NULL;
        t = not_null(z_18);
        t = z_24(t);
        b_19 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, not_null(b_19));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Box_0 (ATerm t)
{
  ATerm q_4 = t;
  if(PushChoice()==0)
    {
      t = S_1(t, is_string_0);
      PopChoice();
    }
  else
    {
      t = q_4;
      {
        ATerm r_4 = t;
        if(PushChoice()==0)
          {
            ATerm m_0 (ATerm t)
            {
              t = list_1(t, S_Option_0);
              return(t);
            }
            ATerm n_0 (ATerm t)
            {
              t = list_1(t, Box_0);
              return(t);
            }
            t = H_2(t, m_0, n_0);
            PopChoice();
          }
        else
          {
            t = r_4;
            {
              ATerm s_4 = t;
              if(PushChoice()==0)
                {
                  ATerm o_0 (ATerm t)
                  {
                    t = list_1(t, S_Option_0);
                    return(t);
                  }
                  ATerm p_0 (ATerm t)
                  {
                    t = list_1(t, Box_0);
                    return(t);
                  }
                  t = V_2(t, o_0, p_0);
                  PopChoice();
                }
              else
                {
                  t = s_4;
                  {
                    ATerm t_4 = t;
                    if(PushChoice()==0)
                      {
                        ATerm q_0 (ATerm t)
                        {
                          t = list_1(t, S_Option_0);
                          return(t);
                        }
                        ATerm r_0 (ATerm t)
                        {
                          t = list_1(t, Box_0);
                          return(t);
                        }
                        t = HV_2(t, q_0, r_0);
                        PopChoice();
                      }
                    else
                      {
                        t = t_4;
                        {
                          ATerm u_4 = t;
                          if(PushChoice()==0)
                            {
                              t = ALT_2(t, Box_0, Box_0);
                              PopChoice();
                            }
                          else
                            {
                              t = u_4;
                              {
                                ATerm v_4 = t;
                                if(PushChoice()==0)
                                  {
                                    t = FBOX_2(t, Font_Operator_0, Box_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = v_4;
                                    {
                                      ATerm w_4 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm s_0 (ATerm t)
                                          {
                                            t = list_1(t, A_Option_0);
                                            return(t);
                                          }
                                          ATerm t_0 (ATerm t)
                                          {
                                            t = list_1(t, S_Option_0);
                                            return(t);
                                          }
                                          ATerm u_0 (ATerm t)
                                          {
                                            t = list_1(t, Box_0);
                                            return(t);
                                          }
                                          t = A_3(t, s_0, t_0, u_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = w_4;
                                          {
                                            ATerm x_4 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm v_0 (ATerm t)
                                                {
                                                  t = list_1(t, S_Option_0);
                                                  return(t);
                                                }
                                                ATerm w_0 (ATerm t)
                                                {
                                                  t = list_1(t, Box_0);
                                                  return(t);
                                                }
                                                t = R_2(t, v_0, w_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = x_4;
                                                {
                                                  ATerm y_4 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = LBL_2(t, is_string_0, Box_0);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = y_4;
                                                      {
                                                        ATerm z_4 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = REF_2(t, is_string_0, Box_0);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = z_4;
                                                            {
                                                              ATerm a_5 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm x_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, S_Option_0);
                                                                    return(t);
                                                                  }
                                                                  ATerm y_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, Box_0);
                                                                    return(t);
                                                                  }
                                                                  t = C_2(t, x_0, y_0);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = a_5;
                                                                  {
                                                                    ATerm b_5 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = L_2(t, Box_0, Box_0);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = b_5;
                                                                        {
                                                                          ATerm c_5 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = LINT_2(t, is_int_0, Box_0);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = c_5;
                                                                              {
                                                                                ATerm g_5 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    t = Arg_1(t, is_int_0);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = g_5;
                                                                                    {
                                                                                      ATerm i_5 = t;
                                                                                      if(PushChoice()==0)
                                                                                        {
                                                                                          t = Arg2_2(t, is_int_0, is_int_0);
                                                                                          PopChoice();
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = i_5;
                                                                                          {
                                                                                            ATerm z_0 (ATerm t)
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Box: ", 0, ATtrue));
                                                                                              return(t);
                                                                                            }
                                                                                            t = debug_1(t, z_0);
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
  ATerm h_19 = NULL;
  h_19 = t;
  g_19 :
  if(!(match_cons(h_19, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm o_26 (ATerm), ATerm p_26 (ATerm))
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL;
  m_19 = t;
  l_19 :
  if(match_cons(m_19, sym_TCons_2))
    {
      n_19 = ATgetArgument(m_19, 0);
      o_19 = ATgetArgument(m_19, 1);
      {
        ATerm r_19 = NULL;
        t = not_null(n_19);
        {
          ATerm t_19 = NULL;
          t = o_26(t);
          r_19 = t;
          t = not_null(o_19);
          t = p_26(t);
          t_19 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_19), not_null(t_19));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm a_20 = NULL;
  ATerm j_5;
  j_5 = t;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm b_20 = NULL,c_20 = NULL;
      b_20 = t;
      z_19 :
      if(match_cons(b_20, sym_Program_1))
        {
          c_20 = ATgetArgument(b_20, 0);
          if(a_20 != NULL && a_20 != c_20)
            _fail(c_20);
          else
            a_20 = c_20;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, a_1);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_20), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = j_5;
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
ATerm report_success_0 (ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL;
  ATerm b_1 (ATerm t)
  {
    ATerm c_1 (ATerm t)
    {
      ATerm k_5 = t;
      if(PushChoice()==0)
        {
          ATerm e_1 (ATerm t)
          {
            ATerm l_20 = NULL;
            l_20 = t;
            e_20 :
            if(!(match_cons(l_20, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, e_1);
          PopChoice();
          _fail(t);
        }
      else
        t = k_5;
      return(t);
    }
    ATerm d_1 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, c_1, d_1);
    {
      ATerm f_1 (ATerm t)
      {
        ATerm h_1 (ATerm t)
        {
          ATerm m_20 = NULL,n_20 = NULL;
          m_20 = t;
          g_20 :
          if(match_cons(m_20, sym_Runtime_1))
            {
              n_20 = ATgetArgument(m_20, 0);
              if(k_20 != NULL && k_20 != n_20)
                _fail(n_20);
              else
                k_20 = n_20;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, h_1);
        return(t);
      }
      ATerm g_1 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, f_1, g_1);
      {
        ATerm i_1 (ATerm t)
        {
          ATerm k_1 (ATerm t)
          {
            ATerm o_20 = NULL,p_20 = NULL;
            o_20 = t;
            i_20 :
            if(match_cons(o_20, sym_Program_1))
              {
                p_20 = ATgetArgument(o_20, 0);
                if(j_20 != NULL && j_20 != p_20)
                  _fail(p_20);
                else
                  j_20 = p_20;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, k_1);
          return(t);
        }
        ATerm j_1 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, i_1, j_1);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_20), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_20), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, b_1);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL;
  w_20 = t;
  t_20 :
  if(match_cons(w_20, sym_TCons_2))
    {
      x_20 = ATgetArgument(w_20, 0);
      y_20 = ATgetArgument(w_20, 1);
      u_20 :
      if(match_cons(y_20, sym_TCons_2))
        {
          z_20 = ATgetArgument(y_20, 0);
          a_21 = ATgetArgument(y_20, 1);
          v_20 :
          if(match_cons(a_21, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(x_20), not_null(z_20));
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
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL;
  i_21 = t;
  f_21 :
  if(match_cons(i_21, sym_TCons_2))
    {
      j_21 = ATgetArgument(i_21, 0);
      k_21 = ATgetArgument(i_21, 1);
      g_21 :
      if(match_cons(k_21, sym_TCons_2))
        {
          l_21 = ATgetArgument(k_21, 0);
          m_21 = ATgetArgument(k_21, 1);
          h_21 :
          if(match_cons(m_21, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(j_21), not_null(l_21));
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
  ATerm u_21 = NULL;
  ATerm l_5;
  l_5 = t;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm m_5 = t;
      if(PushChoice()==0)
        {
          ATerm n_1 (ATerm t)
          {
            ATerm v_21 = NULL,w_21 = NULL;
            v_21 = t;
            r_21 :
            if(match_cons(v_21, sym_Output_1))
              {
                w_21 = ATgetArgument(v_21, 0);
                if(u_21 != NULL && u_21 != w_21)
                  _fail(w_21);
                else
                  u_21 = w_21;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, n_1);
          PopChoice();
        }
      else
        {
          t = m_5;
          {
            ATerm x_21 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            x_21 = t;
            if(u_21 != NULL && u_21 != x_21)
              _fail(x_21);
            else
              u_21 = x_21;
          }
        }
      return(t);
    }
    ATerm m_1 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, l_1, m_1);
  }
  t = l_5;
  {
    ATerm o_1 (ATerm t)
    {
      ATerm p_1 (ATerm t)
      {
        ATerm q_1 (ATerm t)
        {
          t = not_null(u_21);
          return(t);
        }
        t = split_2(t, q_1, _id);
        return(t);
      }
      t = TCons_2(t, p_1, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, o_1);
    {
      ATerm n_5 = t;
      if(PushChoice()==0)
        {
          ATerm r_1 (ATerm t)
          {
            ATerm t_1 (ATerm t)
            {
              ATerm d_22 = NULL;
              d_22 = t;
              t_21 :
              if(!(match_cons(d_22, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, t_1);
            return(t);
          }
          ATerm s_1 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, r_1, s_1);
          PopChoice();
        }
      else
        {
          t = n_5;
          {
            ATerm u_1 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, u_1);
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
ATerm apply_strategy_1 (ATerm t, ATerm p_32 (ATerm))
{
  ATerm n_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL;
  ATerm o_5;
  o_5 = t;
  t = dtime_0(t);
  t = o_5;
  t = p_32(t);
  {
    ATerm p_5;
    p_5 = t;
    {
      ATerm o_22 = NULL;
      t = dtime_0(t);
      o_22 = t;
      if(n_22 != NULL && n_22 != o_22)
        _fail(o_22);
      else
        n_22 = o_22;
    }
    t = p_5;
    p_22 = t;
    i_22 :
    if(match_cons(p_22, sym_TCons_2))
      {
        q_22 = ATgetArgument(p_22, 0);
        r_22 = ATgetArgument(p_22, 1);
        j_22 :
        if(match_cons(r_22, sym_TCons_2))
          {
            s_22 = ATgetArgument(r_22, 0);
            t_22 = ATgetArgument(r_22, 1);
            m_22 :
            if(match_cons(t_22, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(n_22)), not_null(q_22)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_22), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm b_23 = NULL;
  b_23 = t;
  t = SSL_ReadFromFile(not_null(b_23));
  return(t);
}
ATerm split_2 (ATerm t, ATerm w_46 (ATerm), ATerm x_46 (ATerm))
{
  ATerm n_23 = NULL;
  ATerm p_23 = NULL;
  n_23 = t;
  {
    ATerm r_23 = NULL;
    t = w_46(t);
    p_23 = t;
    t = not_null(n_23);
    t = x_46(t);
    r_23 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_23), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm z_23 = NULL;
  ATerm q_5;
  q_5 = t;
  {
    ATerm v_5 = t;
    if(PushChoice()==0)
      {
        ATerm v_1 (ATerm t)
        {
          ATerm a_24 = NULL,b_24 = NULL;
          a_24 = t;
          x_23 :
          if(match_cons(a_24, sym_Input_1))
            {
              b_24 = ATgetArgument(a_24, 0);
              if(z_23 != NULL && z_23 != b_24)
                _fail(b_24);
              else
                z_23 = b_24;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, v_1);
        PopChoice();
      }
    else
      {
        t = v_5;
        {
          ATerm c_24 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          c_24 = t;
          if(z_23 != NULL && z_23 != c_24)
            _fail(c_24);
          else
            z_23 = c_24;
        }
      }
  }
  t = q_5;
  {
    ATerm w_1 (ATerm t)
    {
      t = not_null(z_23);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, w_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_24 = NULL;
  h_24 = t;
  g_24 :
  if(!(match_cons(h_24, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm o_32 (ATerm))
{
  ATerm x_1 (ATerm t)
  {
    ATerm w_5 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = w_5;
        {
          ATerm y_5 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = y_5;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, x_1);
  t = o_32(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm j_24 = NULL;
  j_24 = t;
  t = SSL_table_create(not_null(j_24));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm n_24 = NULL;
  n_24 = t;
  {
    ATerm a_6;
    a_6 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_24), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = a_6;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm x_24 = NULL,y_24 = NULL,k_25 = NULL,l_25 = NULL,q_26 = NULL;
  q_26 = t;
  v_24 :
  if(match_cons(q_26, sym_Cons_2))
    {
      x_24 = ATgetArgument(q_26, 0);
      y_24 = ATgetArgument(q_26, 1);
      w_24 :
      if(match_cons(y_24, sym_Cons_2))
        {
          k_25 = ATgetArgument(y_24, 0);
          l_25 = ATgetArgument(y_24, 1);
          {
            ATerm w_26 = NULL;
            t = not_null(x_24);
            t = d_0(t);
            t = not_null(k_25);
            t = e_0(t);
            w_26 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_26), not_null(l_25));
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(q_26, "register-usage-info"))
        t = register_usage_1(t, f_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm b_6 = t;
  if(PushChoice()==0)
    {
      ATerm y_1 (ATerm t)
      {
        ATerm m_27 = NULL;
        m_27 = t;
        b_27 :
        if(!(match_string(m_27, "-S")))
          {
            if(!(match_string(m_27, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm z_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm a_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, y_1, z_1, a_2);
      PopChoice();
    }
  else
    {
      t = b_6;
      {
        ATerm c_6 = t;
        if(PushChoice()==0)
          {
            ATerm b_2 (ATerm t)
            {
              ATerm n_27 = NULL;
              n_27 = t;
              c_27 :
              if(!(match_string(n_27, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm c_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm d_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, b_2, c_2, d_2);
            PopChoice();
          }
        else
          {
            t = c_6;
            {
              ATerm d_6 = t;
              if(PushChoice()==0)
                {
                  ATerm e_2 (ATerm t)
                  {
                    ATerm o_27 = NULL;
                    o_27 = t;
                    d_27 :
                    if(!(match_string(o_27, "-v")))
                      {
                        if(!(match_string(o_27, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm f_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm g_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, e_2, f_2, g_2);
                  PopChoice();
                }
              else
                {
                  t = d_6;
                  {
                    ATerm e_6 = t;
                    if(PushChoice()==0)
                      {
                        ATerm h_2 (ATerm t)
                        {
                          ATerm p_27 = NULL;
                          p_27 = t;
                          e_27 :
                          if(!(match_string(p_27, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm i_2 (ATerm t)
                        {
                          ATerm q_27 = NULL;
                          q_27 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(q_27));
                          return(t);
                        }
                        ATerm j_2 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, h_2, i_2, j_2);
                        PopChoice();
                      }
                    else
                      {
                        t = e_6;
                        {
                          ATerm f_6 = t;
                          if(PushChoice()==0)
                            {
                              ATerm k_2 (ATerm t)
                              {
                                ATerm s_27 = NULL;
                                s_27 = t;
                                g_27 :
                                if(!(match_string(s_27, "-i")))
                                  {
                                    if(!(match_string(s_27, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm l_2 (ATerm t)
                              {
                                ATerm t_27 = NULL;
                                t_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_27));
                                return(t);
                              }
                              ATerm m_2 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, k_2, l_2, m_2);
                              PopChoice();
                            }
                          else
                            {
                              t = f_6;
                              {
                                ATerm g_6 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm n_2 (ATerm t)
                                    {
                                      ATerm v_27 = NULL;
                                      v_27 = t;
                                      i_27 :
                                      if(!(match_string(v_27, "-o")))
                                        {
                                          if(!(match_string(v_27, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm o_2 (ATerm t)
                                    {
                                      ATerm w_27 = NULL;
                                      w_27 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_27));
                                      return(t);
                                    }
                                    ATerm p_2 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, n_2, o_2, p_2);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = g_6;
                                    {
                                      ATerm l_6 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm q_2 (ATerm t)
                                          {
                                            ATerm y_27 = NULL;
                                            y_27 = t;
                                            k_27 :
                                            if(!(match_string(y_27, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm r_2 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm s_2 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, q_2, r_2, s_2);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = l_6;
                                          {
                                            ATerm t_2 (ATerm t)
                                            {
                                              ATerm z_27 = NULL;
                                              z_27 = t;
                                              l_27 :
                                              if(!(match_string(z_27, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm u_2 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm v_2 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, t_2, u_2, v_2);
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
ATerm table_destroy_0 (ATerm t)
{
  ATerm e_28 = NULL;
  e_28 = t;
  t = SSL_table_destroy(not_null(e_28));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm i_28 = NULL;
  i_28 = t;
  t = SSL_exit(not_null(i_28));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm m_28 = NULL;
  m_28 = t;
  t = SSL_implode_string(not_null(m_28));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_41 (ATerm))
{
  ATerm p_28 (ATerm t)
  {
    ATerm m_6 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, p_28);
        PopChoice();
      }
    else
      {
        t = m_6;
        t = Nil_0(t);
        t = q_41(t);
      }
    return(t);
  }
  t = p_28(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm o_6 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = o_6;
      {
        ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
        s_28 = t;
        r_28 :
        if(match_cons(s_28, sym_Cons_2))
          {
            t_28 = ATgetArgument(s_28, 0);
            u_28 = ATgetArgument(s_28, 1);
            t = not_null(t_28);
            {
              ATerm w_2 (ATerm t)
              {
                t = not_null(u_28);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, w_2);
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm a_29 = NULL;
  a_29 = t;
  t = SSL_explode_string(not_null(a_29));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm v_30 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_41 (ATerm))
{
  ATerm d_29 (ATerm t)
  {
    ATerm q_6 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = q_6;
        t = Cons_2(t, c_41, d_29);
      }
    return(t);
  }
  t = d_29(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL;
  j_29 = t;
  f_29 :
  if(match_cons(j_29, sym_TCons_2))
    {
      k_29 = ATgetArgument(j_29, 0);
      l_29 = ATgetArgument(j_29, 1);
      g_29 :
      if(match_cons(k_29, sym_Nil_0))
        {
          h_29 :
          if(match_cons(l_29, sym_TCons_2))
            {
              m_29 = ATgetArgument(l_29, 0);
              n_29 = ATgetArgument(l_29, 1);
              i_29 :
              if(match_cons(n_29, sym_TNil_0))
                t = not_null(m_29);
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
  return(t);
}
ATerm Rev_0 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL;
  v_29 = t;
  r_29 :
  if(match_cons(v_29, sym_TCons_2))
    {
      w_29 = ATgetArgument(v_29, 0);
      z_29 = ATgetArgument(v_29, 1);
      s_29 :
      if(match_cons(w_29, sym_Cons_2))
        {
          x_29 = ATgetArgument(w_29, 0);
          y_29 = ATgetArgument(w_29, 1);
          t_29 :
          if(match_cons(z_29, sym_TCons_2))
            {
              a_30 = ATgetArgument(z_29, 0);
              b_30 = ATgetArgument(z_29, 1);
              u_29 :
              if(match_cons(b_30, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_29), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(x_29), not_null(a_30)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm i_33 (ATerm), ATerm j_33 (ATerm))
{
  ATerm g_30 (ATerm t)
  {
    ATerm r_6 = t;
    if(PushChoice()==0)
      {
        t = i_33(t);
        t = g_30(t);
        PopChoice();
      }
    else
      {
        t = r_6;
        t = j_33(t);
      }
    return(t);
  }
  t = g_30(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm l_33 (ATerm))
{
  t = repeat_2(t, l_33, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm i_30 = NULL;
  i_30 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_30), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm u_30 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_24 (ATerm))
{
  ATerm o_30 = NULL,p_30 = NULL;
  o_30 = t;
  n_30 :
  if(match_cons(o_30, sym_Program_1))
    {
      p_30 = ATgetArgument(o_30, 0);
      {
        ATerm r_30 = NULL;
        t = not_null(p_30);
        t = t_24(t);
        r_30 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_30));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm f_31 = NULL;
  ATerm x_2 (ATerm t)
  {
    ATerm y_2 (ATerm t)
    {
      ATerm g_31 = NULL;
      g_31 = t;
      if(f_31 != NULL && f_31 != g_31)
        _fail(g_31);
      else
        f_31 = g_31;
      return(t);
    }
    t = Program_1(t, y_2);
    return(t);
  }
  t = option_defined_1(t, x_2);
  {
    ATerm z_2 (ATerm t)
    {
      ATerm h_31 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm a_3 (ATerm t)
        {
          t = not_null(f_31);
          return(t);
        }
        t = short_description_1(t, a_3);
        t = concat_strings_0(t);
        h_31 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_31), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, z_2);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm b_3 (ATerm t)
      {
        ATerm j_31 = NULL;
        j_31 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_31), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, b_3);
      {
        ATerm c_3 (ATerm t)
        {
          ATerm l_31 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm d_3 (ATerm t)
            {
              t = not_null(f_31);
              return(t);
            }
            t = long_description_1(t, d_3);
            t = concat_strings_0(t);
            l_31 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_31), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = printnl_0(t);
          }
          return(t);
        }
        t = try_1(t, c_3);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm x_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,g_32 = NULL;
  x_31 = t;
  s_31 :
  if(match_cons(x_31, sym_TCons_2))
    {
      a_32 = ATgetArgument(x_31, 0);
      b_32 = ATgetArgument(x_31, 1);
      u_31 :
      if(match_cons(b_32, sym_TCons_2))
        {
          c_32 = ATgetArgument(b_32, 0);
          g_32 = ATgetArgument(b_32, 1);
          w_31 :
          if(match_cons(g_32, sym_TNil_0))
            {
              ATerm s_6;
              s_6 = t;
              t = SSL_printnl(not_null(a_32), not_null(c_32));
              t = s_6;
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
ATerm Undefined_1 (ATerm t, ATerm u_24 (ATerm))
{
  ATerm n_32 = NULL,q_32 = NULL;
  n_32 = t;
  m_32 :
  if(match_cons(n_32, sym_Undefined_1))
    {
      q_32 = ATgetArgument(n_32, 0);
      {
        ATerm s_32 = NULL;
        t = not_null(q_32);
        t = u_24(t);
        s_32 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(s_32));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm k_41 (ATerm))
{
  ATerm w_32 (ATerm t)
  {
    ATerm t_6 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, k_41, _id);
        PopChoice();
      }
    else
      {
        t = t_6;
        t = Cons_2(t, _id, w_32);
      }
    return(t);
  }
  t = w_32(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm t_31 (ATerm))
{
  t = fetch_1(t, t_31);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm y_32 = NULL;
  y_32 = t;
  x_32 :
  if(!(match_cons(y_32, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm q_42 (ATerm))
{
  ATerm b_7 = t;
  if(PushChoice()==0)
    {
      t = q_42(t);
      PopChoice();
    }
  else
    t = b_7;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL;
  d_33 = t;
  a_33 :
  if(match_cons(d_33, sym_TCons_2))
    {
      e_33 = ATgetArgument(d_33, 0);
      f_33 = ATgetArgument(d_33, 1);
      b_33 :
      if(match_cons(f_33, sym_TCons_2))
        {
          g_33 = ATgetArgument(f_33, 0);
          h_33 = ATgetArgument(f_33, 1);
          c_33 :
          if(match_cons(h_33, sym_TNil_0))
            t = SSL_table_get(not_null(e_33), not_null(g_33));
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
ATerm table_push_0 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL;
  v_33 = t;
  r_33 :
  if(match_cons(v_33, sym_TCons_2))
    {
      w_33 = ATgetArgument(v_33, 0);
      x_33 = ATgetArgument(v_33, 1);
      s_33 :
      if(match_cons(x_33, sym_TCons_2))
        {
          y_33 = ATgetArgument(x_33, 0);
          z_33 = ATgetArgument(x_33, 1);
          t_33 :
          if(match_cons(z_33, sym_TCons_2))
            {
              a_34 = ATgetArgument(z_33, 0);
              b_34 = ATgetArgument(z_33, 1);
              u_33 :
              if(match_cons(b_34, sym_TNil_0))
                {
                  ATerm c_7;
                  c_7 = t;
                  {
                    ATerm f_34 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_33), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_33), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm d_7 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = d_7;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      f_34 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_33), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_34), not_null(f_34)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  }
                  t = c_7;
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
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm z_30 (ATerm))
{
  ATerm k_34 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = z_30(t);
  k_34 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_34), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
  t_34 = t;
  q_34 :
  if(match_cons(t_34, sym_Cons_2))
    {
      r_34 = ATgetArgument(t_34, 0);
      s_34 = ATgetArgument(t_34, 1);
      {
        ATerm w_34 = NULL;
        t = not_null(r_34);
        t = a_0(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = b_0(t);
        w_34 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_34), not_null(s_34));
      }
    }
  else
    {
      if(match_string(t_34, "register-usage-info"))
        t = register_usage_1(t, c_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm c_35 = NULL;
    c_35 = t;
    b_35 :
    if(!(match_string(c_35, "--help")))
      {
        if(!(match_string(c_35, "-h")))
          {
            if(!(match_string(c_35, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, e_3, f_3, g_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL;
  f_35 = t;
  e_35 :
  if(match_cons(f_35, sym_Cons_2))
    {
      g_35 = ATgetArgument(f_35, 0);
      h_35 = ATgetArgument(f_35, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(g_35)), not_null(h_35));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm s_26 (ATerm), ATerm t_26 (ATerm))
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
  p_35 = t;
  o_35 :
  if(match_cons(p_35, sym_Cons_2))
    {
      q_35 = ATgetArgument(p_35, 0);
      r_35 = ATgetArgument(p_35, 1);
      {
        ATerm u_35 = NULL;
        t = not_null(q_35);
        {
          ATerm w_35 = NULL;
          t = s_26(t);
          u_35 = t;
          t = not_null(r_35);
          t = t_26(t);
          w_35 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_35), not_null(w_35));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm c_36 = NULL;
  c_36 = t;
  b_36 :
  if(!(match_cons(c_36, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm x_30 (ATerm))
{
  ATerm i_7;
  i_7 = t;
  {
    ATerm h_3 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = x_30(t);
      return(t);
    }
    t = try_1(t, h_3);
  }
  t = i_7;
  {
    ATerm i_3 (ATerm t)
    {
      ATerm e_36 = NULL;
      e_36 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_36));
      return(t);
    }
    ATerm j_3 (ATerm t)
    {
      ATerm j_7 = t;
      if(PushChoice()==0)
        {
          ATerm l_7 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = l_7;
              t = x_30(t);
              t = Cons_2(t, _id, j_3);
            }
          PopChoice();
        }
      else
        {
          t = j_7;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, i_3, j_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
  ATerm n_7;
  n_7 = t;
  {
    ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL;
    q_36 = t;
    j_36 :
    if(match_cons(q_36, sym_TCons_2))
      {
        r_36 = ATgetArgument(q_36, 0);
        s_36 = ATgetArgument(q_36, 1);
        k_36 :
        if(match_cons(s_36, sym_TCons_2))
          {
            t_36 = ATgetArgument(s_36, 0);
            u_36 = ATgetArgument(s_36, 1);
            l_36 :
            if(match_cons(u_36, sym_TCons_2))
              {
                v_36 = ATgetArgument(u_36, 0);
                w_36 = ATgetArgument(u_36, 1);
                m_36 :
                if(match_cons(w_36, sym_TNil_0))
                  {
                    if(n_36 != NULL && n_36 != r_36)
                      _fail(r_36);
                    else
                      n_36 = r_36;
                    if(o_36 != NULL && o_36 != t_36)
                      _fail(t_36);
                    else
                      o_36 = t_36;
                    if(p_36 != NULL && p_36 != v_36)
                      _fail(v_36);
                    else
                      p_36 = v_36;
                    t = SSL_table_put(not_null(n_36), not_null(o_36), not_null(p_36));
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
  t = n_7;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm w_30 (ATerm))
{
  ATerm z_36 = NULL;
  ATerm o_7;
  o_7 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = o_7;
  {
    ATerm k_3 (ATerm t)
    {
      ATerm p_7 = t;
      if(PushChoice()==0)
        {
          t = w_30(t);
          PopChoice();
        }
      else
        {
          t = p_7;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, k_3);
    {
      ATerm l_3 (ATerm t)
      {
        ATerm q_7 = t;
        if(PushChoice()==0)
          {
            t = option_defined_1(t, Help_0);
            t = system_usage_0(t);
            t = (ATerm) ATmakeInt(0);
            t = exit_0(t);
            PopChoice();
          }
        else
          {
            t = q_7;
            {
              ATerm m_3 (ATerm t)
              {
                ATerm n_3 (ATerm t)
                {
                  ATerm a_37 = NULL;
                  a_37 = t;
                  if(z_36 != NULL && z_36 != a_37)
                    _fail(a_37);
                  else
                    z_36 = a_37;
                  return(t);
                }
                t = Undefined_1(t, n_3);
                return(t);
              }
              t = option_defined_1(t, m_3);
              {
                ATerm r_7;
                r_7 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_36), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = r_7;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, l_3);
      {
        ATerm s_7;
        s_7 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = s_7;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm d_32 (ATerm), ATerm e_32 (ATerm), ATerm f_32 (ATerm))
{
  ATerm o_3 (ATerm t)
  {
    ATerm t_7 = t;
    if(PushChoice()==0)
      {
        t = e_32(t);
        PopChoice();
      }
    else
      {
        t = t_7;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, o_3);
  t = store_options_0(t);
  {
    ATerm u_7 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, f_32);
        PopChoice();
      }
    else
      {
        t = u_7;
        {
          ATerm v_7 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, d_32);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = v_7;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm y_31 (ATerm), ATerm z_31 (ATerm))
{
  t = iowrap_3(t, y_31, z_31, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm v_31 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    ATerm q_3 (ATerm t)
    {
      t = TCons_2(t, v_31, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, q_3);
    return(t);
  }
  t = iowrap_2(t, p_3, _fail);
  return(t);
}
ATerm abox_format_0 (ATerm t)
{
  t = iowrap_1(t, Box_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = abox_format_0(t);
  return(t);
}
