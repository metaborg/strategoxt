#include <stratego.h>
#include <stratego-lib.h>
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_SOpt_2;
Symbol sym_SOptB_2;
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
Symbol sym_H_2;
Symbol sym_V_2;
Symbol sym_HV_2;
Symbol sym_ALT_2;
Symbol sym_A_3;
Symbol sym_R_2;
Symbol sym_AL_1;
Symbol sym_AC_1;
Symbol sym_AR_1;
Symbol sym_AOPTIONS_1;
Symbol sym_FNAT_2;
Symbol sym_FFID_2;
Symbol sym_F_1;
Symbol sym_FBOX_2;
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
Symbol sym_LNAT_2;
Symbol sym_S_1;
Symbol sym_Arg_1;
Symbol sym_Arg2_2;
Symbol sym_PP_Table_1;
Symbol sym_selector_2;
Symbol sym_Path1_1;
Symbol sym_Path_2;
Symbol sym_PP_Entry_2;
Symbol sym_TNil_0;
Symbol sym_TCons_2;
Symbol sym_Pair_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
void init_constructors (void)
{
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_SOptB_2 = ATmakeSymbol("SOptB", 2, ATfalse);
  ATprotectSymbol(sym_SOptB_2);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
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
  sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
  ATprotectSymbol(sym_AOPTIONS_1);
  sym_FNAT_2 = ATmakeSymbol("FNAT", 2, ATfalse);
  ATprotectSymbol(sym_FNAT_2);
  sym_FFID_2 = ATmakeSymbol("FFID", 2, ATfalse);
  ATprotectSymbol(sym_FFID_2);
  sym_F_1 = ATmakeSymbol("F", 1, ATfalse);
  ATprotectSymbol(sym_F_1);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
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
  sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
  ATprotectSymbol(sym_LNAT_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
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
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm print_0 (ATerm);
ATerm split_2 (ATerm, ATerm k_37 (ATerm), ATerm l_37 (ATerm));
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_50 (ATerm));
ATerm topdown_1 (ATerm, ATerm m_46 (ATerm));
ATerm TNil_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm map_to_r_box_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm w_38 (ATerm), ATerm x_38 (ATerm), ATerm y_38 (ATerm));
ATerm length_0 (ATerm);
ATerm string_length_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm i_45 (ATerm));
ATerm separate_by_1 (ATerm, ATerm j_45 (ATerm));
ATerm Fst_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm v_44 (ATerm));
ATerm filter_1 (ATerm, ATerm c_38 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm h_50 (ATerm), ATerm i_50 (ATerm));
ATerm for_3 (ATerm, ATerm k_50 (ATerm), ATerm l_50 (ATerm), ATerm m_50 (ATerm));
ATerm copy_0 (ATerm);
ATerm copy_char_0 (ATerm);
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm Vspace_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm j_0 (ATerm), ATerm m_0 (ATerm));
ATerm thread_map_1 (ATerm, ATerm n_39 (ATerm));
ATerm H_2 (ATerm, ATerm e_28 (ATerm), ATerm f_28 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm a_28 (ATerm), ATerm b_28 (ATerm));
ATerm Hspace_0 (ATerm);
ATerm Abox_2_text_0 (ATerm);
ATerm abox2text_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm y_29 (ATerm), ATerm z_29 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm input_file_0 (ATerm);
ATerm debug_1 (ATerm, ATerm q_35 (ATerm));
ATerm obsolete_1 (ATerm, ATerm x_35 (ATerm));
ATerm open_file_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm f_44 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_34 (ATerm));
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm f_35 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_44 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm m_33 (ATerm));
ATerm map_1 (ATerm, ATerm x_43 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm q_49 (ATerm), ATerm r_49 (ATerm));
ATerm repeat_1 (ATerm, ATerm t_49 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm l_33 (ATerm));
ATerm Program_1 (ATerm, ATerm t_27 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm u_27 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm q_33 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm c_30 (ATerm), ATerm d_30 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm o_33 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm n_33 (ATerm));
ATerm Abox2text_0 (ATerm);
ATerm main_0 (ATerm);
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
  ATerm p_1 = NULL,q_1 = NULL;
  ATerm g_0 (ATerm t)
  {
    ATerm h_0 (ATerm t)
    {
      ATerm i_6 = t;
      if(PushChoice()==0)
        {
          ATerm k_0 (ATerm t)
          {
            ATerm r_1 = NULL;
            r_1 = t;
            k_1 :
            if(!(match_cons(r_1, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, k_0);
          PopChoice();
          _fail(t);
        }
      else
        t = i_6;
      return(t);
    }
    ATerm i_0 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, h_0, i_0);
    {
      ATerm l_0 (ATerm t)
      {
        ATerm o_0 (ATerm t)
        {
          ATerm s_1 = NULL,t_1 = NULL;
          s_1 = t;
          m_1 :
          if(match_cons(s_1, sym_Runtime_1))
            {
              t_1 = ATgetArgument(s_1, 0);
              if(q_1 != NULL && q_1 != t_1)
                _fail(t_1);
              else
                q_1 = t_1;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, o_0);
        return(t);
      }
      ATerm n_0 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, l_0, n_0);
      {
        ATerm p_0 (ATerm t)
        {
          ATerm r_0 (ATerm t)
          {
            ATerm u_1 = NULL,v_1 = NULL;
            u_1 = t;
            o_1 :
            if(match_cons(u_1, sym_Program_1))
              {
                v_1 = ATgetArgument(u_1, 0);
                if(p_1 != NULL && p_1 != v_1)
                  _fail(v_1);
                else
                  p_1 = v_1;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, r_0);
          return(t);
        }
        ATerm q_0 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, p_0, q_0);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_1), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_1), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, g_0);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL;
  c_2 = t;
  z_1 :
  if(match_cons(c_2, sym_TCons_2))
    {
      d_2 = ATgetArgument(c_2, 0);
      e_2 = ATgetArgument(c_2, 1);
      a_2 :
      if(match_cons(e_2, sym_TCons_2))
        {
          f_2 = ATgetArgument(e_2, 0);
          g_2 = ATgetArgument(e_2, 1);
          b_2 :
          if(match_cons(g_2, sym_TNil_0))
            {
              ATerm j_6;
              j_6 = t;
              t = SSL_print(not_null(d_2), not_null(f_2));
              t = j_6;
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
ATerm split_2 (ATerm t, ATerm k_37 (ATerm), ATerm l_37 (ATerm))
{
  ATerm n_2 = NULL;
  ATerm p_2 = NULL;
  n_2 = t;
  {
    ATerm r_2 = NULL;
    t = k_37(t);
    p_2 = t;
    t = not_null(n_2);
    t = l_37(t);
    r_2 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_2), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm x_2 = NULL;
  x_2 = t;
  t = SSL_is_string(not_null(x_2));
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_50 (ATerm))
{
  ATerm k_6 = t;
  if(PushChoice()==0)
    {
      t = n_50(t);
      PopChoice();
    }
  else
    t = k_6;
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm m_46 (ATerm))
{
  ATerm a_3 (ATerm t)
  {
    t = m_46(t);
    t = _all(t, a_3);
    return(t);
  }
  t = a_3(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm c_3 = NULL;
  c_3 = t;
  b_3 :
  if(!(match_cons(c_3, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL;
  h_3 = t;
  e_3 :
  if(match_cons(h_3, sym_TCons_2))
    {
      i_3 = ATgetArgument(h_3, 0);
      j_3 = ATgetArgument(h_3, 1);
      f_3 :
      if(match_cons(j_3, sym_TCons_2))
        {
          k_3 = ATgetArgument(j_3, 0);
          l_3 = ATgetArgument(j_3, 1);
          g_3 :
          if(match_cons(l_3, sym_TNil_0))
            {
              t = not_null(i_3);
              {
                ATerm s_0 (ATerm t)
                {
                  t = not_null(k_3);
                  return(t);
                }
                t = at_end_1(t, s_0);
              }
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
ATerm map_to_r_box_0 (ATerm t)
{
  ATerm k_4 = NULL;
  k_4 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_4), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  {
    ATerm r_6 (ATerm t)
    {
      ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL;
      ATerm t_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_4), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_R_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(t_4)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = conc_0(t);
        return(t);
      }
      ATerm u_6 (ATerm t)
      {
        ATerm v_5 = NULL;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_4), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_R_2, not_null(m_4), not_null(n_4)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = conc_0(t);
        v_5 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_4), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_5), (ATerm) ATmakeAppl(sym_TNil_0))));
        t = r_6(t);
        return(t);
      }
      ATerm v_6 (ATerm t)
      {
        ATerm g_6 = NULL;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_4), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_R_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(t_4)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_R_2, not_null(m_4), not_null(n_4)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = conc_0(t);
        g_6 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_4), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_6), (ATerm) ATmakeAppl(sym_TNil_0))));
        t = r_6(t);
        return(t);
      }
      ATerm w_6 (ATerm t)
      {
        ATerm o_6 = NULL;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_4), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_4), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = conc_0(t);
        o_6 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_4), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_4), (ATerm) ATmakeAppl(sym_TNil_0))));
        t = r_6(t);
        return(t);
      }
      o_4 = t;
      y_3 :
      if(match_cons(o_4, sym_TCons_2))
        {
          p_4 = ATgetArgument(o_4, 0);
          s_4 = ATgetArgument(o_4, 1);
          z_3 :
          if(match_cons(p_4, sym_Nil_0))
            {
              a_4 :
              if(match_cons(s_4, sym_TCons_2))
                {
                  t_4 = ATgetArgument(s_4, 0);
                  u_4 = ATgetArgument(s_4, 1);
                  b_4 :
                  if(match_cons(u_4, sym_TCons_2))
                    {
                      v_4 = ATgetArgument(u_4, 0);
                      w_4 = ATgetArgument(u_4, 1);
                      c_4 :
                      if(match_cons(w_4, sym_TNil_0))
                        {
                          d_4 :
                          if(match_cons(t_4, sym_Nil_0))
                            {
                              ATerm l_6 = t;
                              if(PushChoice()==0)
                                {
                                  t = not_null(v_4);
                                  PopChoice();
                                }
                              else
                                {
                                  t = l_6;
                                  t = t_6(t);
                                }
                            }
                          else
                            t = t_6(t);
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
            {
              if(match_cons(p_4, sym_Cons_2))
                {
                  q_4 = ATgetArgument(p_4, 0);
                  r_4 = ATgetArgument(p_4, 1);
                  e_4 :
                  if(match_cons(s_4, sym_TCons_2))
                    {
                      t_4 = ATgetArgument(s_4, 0);
                      u_4 = ATgetArgument(s_4, 1);
                      f_4 :
                      if(match_cons(u_4, sym_TCons_2))
                        {
                          v_4 = ATgetArgument(u_4, 0);
                          w_4 = ATgetArgument(u_4, 1);
                          g_4 :
                          if(match_cons(w_4, sym_TNil_0))
                            {
                              h_4 :
                              if(match_cons(t_4, sym_Nil_0))
                                {
                                  i_4 :
                                  if(match_cons(q_4, sym_R_2))
                                    {
                                      m_4 = ATgetArgument(q_4, 0);
                                      n_4 = ATgetArgument(q_4, 1);
                                      {
                                        ATerm m_6 = t;
                                        if(PushChoice()==0)
                                          {
                                            t = u_6(t);
                                            PopChoice();
                                          }
                                        else
                                          {
                                            t = m_6;
                                            {
                                              ATerm n_6 = t;
                                              if(PushChoice()==0)
                                                {
                                                  t = v_6(t);
                                                  PopChoice();
                                                }
                                              else
                                                {
                                                  t = n_6;
                                                  t = w_6(t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    t = w_6(t);
                                }
                              else
                                {
                                  j_4 :
                                  if(match_cons(q_4, sym_R_2))
                                    {
                                      m_4 = ATgetArgument(q_4, 0);
                                      n_4 = ATgetArgument(q_4, 1);
                                      {
                                        ATerm p_6 = t;
                                        if(PushChoice()==0)
                                          {
                                            t = v_6(t);
                                            PopChoice();
                                          }
                                        else
                                          {
                                            t = p_6;
                                            t = w_6(t);
                                          }
                                      }
                                    }
                                  else
                                    t = w_6(t);
                                }
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
        }
      else
        _fail(t);
      return(t);
    }
    t = r_6(t);
  }
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL;
  f_7 = t;
  c_7 :
  if(match_cons(f_7, sym_TCons_2))
    {
      g_7 = ATgetArgument(f_7, 0);
      h_7 = ATgetArgument(f_7, 1);
      d_7 :
      if(match_cons(h_7, sym_TCons_2))
        {
          i_7 = ATgetArgument(h_7, 0);
          j_7 = ATgetArgument(h_7, 1);
          e_7 :
          if(match_cons(j_7, sym_TNil_0))
            {
              ATerm q_6 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(g_7), not_null(i_7));
                  PopChoice();
                }
              else
                {
                  t = q_6;
                  t = SSL_addr(not_null(g_7), not_null(i_7));
                }
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
ATerm foldr_3 (ATerm t, ATerm w_38 (ATerm), ATerm x_38 (ATerm), ATerm y_38 (ATerm))
{
  ATerm s_6 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = w_38(t);
      PopChoice();
    }
  else
    {
      t = s_6;
      {
        ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL;
        a_8 = t;
        q_7 :
        if(match_cons(a_8, sym_Cons_2))
          {
            b_8 = ATgetArgument(a_8, 0);
            c_8 = ATgetArgument(a_8, 1);
            {
              ATerm h_8 = NULL;
              t = not_null(b_8);
              {
                ATerm m_8 = NULL;
                t = y_38(t);
                h_8 = t;
                t = not_null(c_8);
                t = foldr_3(t, w_38, x_38, y_38);
                m_8 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_8), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_8), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = x_38(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm u_0 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, t_0, add_0, u_0);
  return(t);
}
ATerm string_length_0 (ATerm t)
{
  t = explode_string_0(t);
  t = length_0(t);
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm i_45 (ATerm))
{
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
  x_8 = t;
  w_8 :
  if(match_cons(x_8, sym_Cons_2))
    {
      y_8 = ATgetArgument(x_8, 0);
      z_8 = ATgetArgument(x_8, 1);
      {
        ATerm e_9 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = i_45(t);
        e_9 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_9), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_8), not_null(z_8)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm j_45 (ATerm))
{
  ATerm x_6 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = x_6;
      {
        ATerm v_0 (ATerm t)
        {
          ATerm y_6 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = y_6;
              t = Cons_2(t, _id, v_0);
              t = Sep_1(t, j_45);
            }
          return(t);
        }
        t = Cons_2(t, _id, v_0);
      }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL;
  q_9 = t;
  p_9 :
  if(match_cons(q_9, sym_TCons_2))
    {
      r_9 = ATgetArgument(q_9, 0);
      s_9 = ATgetArgument(q_9, 1);
      t = not_null(r_9);
    }
  else
    _fail(t);
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm v_44 (ATerm))
{
  ATerm x_9 (ATerm t)
  {
    ATerm z_6 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, Nil_0);
        t = v_44(t);
        PopChoice();
      }
    else
      {
        t = z_6;
        t = Cons_2(t, _id, x_9);
      }
    return(t);
  }
  t = x_9(t);
  return(t);
}
ATerm filter_1 (ATerm t, ATerm c_38 (ATerm))
{
  ATerm a_7 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = a_7;
      {
        ATerm b_7 = t;
        if(PushChoice()==0)
          {
            ATerm w_0 (ATerm t)
            {
              t = filter_1(t, c_38);
              return(t);
            }
            t = Cons_2(t, c_38, w_0);
            PopChoice();
          }
        else
          {
            t = b_7;
            {
              ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL;
              a_10 = t;
              z_9 :
              if(match_cons(a_10, sym_Cons_2))
                {
                  b_10 = ATgetArgument(a_10, 0);
                  c_10 = ATgetArgument(a_10, 1);
                  t = not_null(c_10);
                  t = filter_1(t, c_38);
                }
              else
                _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm j_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL;
  j_10 = t;
  g_10 :
  if(match_cons(j_10, sym_TCons_2))
    {
      m_10 = ATgetArgument(j_10, 0);
      n_10 = ATgetArgument(j_10, 1);
      h_10 :
      if(match_cons(n_10, sym_TCons_2))
        {
          o_10 = ATgetArgument(n_10, 0);
          p_10 = ATgetArgument(n_10, 1);
          i_10 :
          if(match_cons(p_10, sym_TNil_0))
            {
              ATerm k_7;
              k_7 = t;
              {
                ATerm l_7 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(m_10), not_null(o_10));
                    PopChoice();
                  }
                else
                  {
                    t = l_7;
                    t = SSL_gtr(not_null(m_10), not_null(o_10));
                  }
              }
              t = k_7;
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
ATerm geq_0 (ATerm t)
{
  ATerm z_10 = NULL;
  ATerm m_7 = t;
  if(PushChoice()==0)
    {
      ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL;
      a_11 = t;
      w_10 :
      if(match_cons(a_11, sym_TCons_2))
        {
          b_11 = ATgetArgument(a_11, 0);
          c_11 = ATgetArgument(a_11, 1);
          x_10 :
          if(match_cons(c_11, sym_TCons_2))
            {
              d_11 = ATgetArgument(c_11, 0);
              e_11 = ATgetArgument(c_11, 1);
              y_10 :
              if(match_cons(e_11, sym_TNil_0))
                {
                  if(z_10 != NULL && z_10 != b_11)
                    _fail(b_11);
                  else
                    z_10 = b_11;
                  if(z_10 != NULL && z_10 != d_11)
                    _fail(d_11);
                  else
                    z_10 = d_11;
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = m_7;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm h_50 (ATerm), ATerm i_50 (ATerm))
{
  ATerm g_11 (ATerm t)
  {
    ATerm n_7 = t;
    if(PushChoice()==0)
      {
        t = h_50(t);
        PopChoice();
      }
    else
      {
        t = n_7;
        t = i_50(t);
        t = g_11(t);
      }
    return(t);
  }
  t = g_11(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm k_50 (ATerm), ATerm l_50 (ATerm), ATerm m_50 (ATerm))
{
  t = k_50(t);
  t = while_not_2(t, l_50, m_50);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL;
    b_12 = t;
    i_11 :
    if(match_cons(b_12, sym_TCons_2))
      {
        c_12 = ATgetArgument(b_12, 0);
        d_12 = ATgetArgument(b_12, 1);
        j_11 :
        if(match_cons(d_12, sym_TCons_2))
          {
            e_12 = ATgetArgument(d_12, 0);
            f_12 = ATgetArgument(d_12, 1);
            m_11 :
            if(match_cons(f_12, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_12), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm y_0 (ATerm t)
  {
    ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL;
    i_12 = t;
    o_11 :
    if(match_cons(i_12, sym_TCons_2))
      {
        j_12 = ATgetArgument(i_12, 0);
        k_12 = ATgetArgument(i_12, 1);
        p_11 :
        if(match_int(j_12, 0))
          {
            r_11 :
            if(match_cons(k_12, sym_TCons_2))
              {
                l_12 = ATgetArgument(k_12, 0);
                m_12 = ATgetArgument(k_12, 1);
                s_11 :
                if(match_cons(m_12, sym_TCons_2))
                  {
                    n_12 = ATgetArgument(m_12, 0);
                    o_12 = ATgetArgument(m_12, 1);
                    u_11 :
                    if(match_cons(o_12, sym_TNil_0))
                      t = not_null(n_12);
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
    else
      _fail(t);
    return(t);
  }
  ATerm z_0 (ATerm t)
  {
    ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
    u_12 = t;
    x_11 :
    if(match_cons(u_12, sym_TCons_2))
      {
        v_12 = ATgetArgument(u_12, 0);
        w_12 = ATgetArgument(u_12, 1);
        y_11 :
        if(match_cons(w_12, sym_TCons_2))
          {
            x_12 = ATgetArgument(w_12, 0);
            y_12 = ATgetArgument(w_12, 1);
            z_11 :
            if(match_cons(y_12, sym_TCons_2))
              {
                z_12 = ATgetArgument(y_12, 0);
                a_13 = ATgetArgument(y_12, 1);
                a_12 :
                if(match_cons(a_13, sym_TNil_0))
                  {
                    ATerm e_13 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_12), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = geq_0(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_12), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = subt_0(t);
                    e_13 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_12), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(x_12), not_null(z_12)), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  t = for_3(t, x_0, y_0, z_0);
  return(t);
}
ATerm copy_char_0 (ATerm t)
{
  t = copy_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm IS_0 (ATerm t)
{
  ATerm l_13 = NULL;
  l_13 = t;
  k_13 :
  if(!(match_cons(l_13, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0 (ATerm t)
{
  ATerm o_13 = NULL,q_13 = NULL;
  ATerm o_7 = t;
  if(PushChoice()==0)
    {
      ATerm a_1 (ATerm t)
      {
        ATerm b_1 (ATerm t)
        {
          ATerm p_13 = NULL;
          p_13 = t;
          if(o_13 != NULL && o_13 != p_13)
            _fail(p_13);
          else
            o_13 = p_13;
          return(t);
        }
        t = SOpt_2(t, IS_0, b_1);
        return(t);
      }
      t = fetch_1(t, a_1);
      t = not_null(o_13);
      t = string_to_int_0(t);
      PopChoice();
    }
  else
    {
      t = o_7;
      t = (ATerm) ATmakeInt(0);
    }
  q_13 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_13), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(32), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = copy_char_0(t);
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm v_13 = NULL;
  v_13 = t;
  u_13 :
  if(!(match_cons(v_13, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0 (ATerm t)
{
  ATerm z_13 = NULL,b_14 = NULL;
  ATerm d_14 = NULL;
  ATerm p_7 = t;
  if(PushChoice()==0)
    {
      ATerm c_1 (ATerm t)
      {
        ATerm d_1 (ATerm t)
        {
          ATerm a_14 = NULL;
          a_14 = t;
          if(z_13 != NULL && z_13 != a_14)
            _fail(a_14);
          else
            z_13 = a_14;
          return(t);
        }
        t = SOpt_2(t, VS_0, d_1);
        return(t);
      }
      t = fetch_1(t, c_1);
      t = not_null(z_13);
      t = string_to_int_0(t);
      PopChoice();
    }
  else
    {
      t = p_7;
      t = (ATerm) ATmakeInt(0);
    }
  b_14 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_14), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = add_0(t);
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_14), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(10), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = copy_char_0(t);
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL;
  m_14 = t;
  j_14 :
  if(match_cons(m_14, sym_TCons_2))
    {
      n_14 = ATgetArgument(m_14, 0);
      o_14 = ATgetArgument(m_14, 1);
      k_14 :
      if(match_cons(o_14, sym_TCons_2))
        {
          p_14 = ATgetArgument(o_14, 0);
          q_14 = ATgetArgument(o_14, 1);
          l_14 :
          if(match_cons(q_14, sym_TNil_0))
            {
              ATerm r_7 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(n_14), not_null(p_14));
                  PopChoice();
                }
              else
                {
                  t = r_7;
                  t = SSL_subtr(not_null(n_14), not_null(p_14));
                }
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
ATerm Nil_T_0 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL;
  x_14 = t;
  v_14 :
  if(match_cons(x_14, sym_Pair_2))
    {
      y_14 = ATgetArgument(x_14, 0);
      z_14 = ATgetArgument(x_14, 1);
      w_14 :
      if(match_cons(y_14, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Pair_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(z_14));
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_T_2 (ATerm t, ATerm j_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
  j_15 = t;
  h_15 :
  if(match_cons(j_15, sym_Pair_2))
    {
      k_15 = ATgetArgument(j_15, 0);
      n_15 = ATgetArgument(j_15, 1);
      i_15 :
      if(match_cons(k_15, sym_Cons_2))
        {
          l_15 = ATgetArgument(k_15, 0);
          m_15 = ATgetArgument(k_15, 1);
          {
            ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL;
            t = (ATerm) ATmakeAppl(sym_Pair_2, not_null(l_15), not_null(n_15));
            t = j_0(t);
            r_15 = t;
            g_15 :
            if(match_cons(r_15, sym_Pair_2))
              {
                s_15 = ATgetArgument(r_15, 0);
                t_15 = ATgetArgument(r_15, 1);
                {
                  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Pair_2, not_null(m_15), not_null(t_15));
                  t = m_0(t);
                  w_15 = t;
                  f_15 :
                  if(match_cons(w_15, sym_Pair_2))
                    {
                      x_15 = ATgetArgument(w_15, 0);
                      y_15 = ATgetArgument(w_15, 1);
                      t = (ATerm) ATmakeAppl(sym_Pair_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_15), not_null(x_15)), not_null(y_15));
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm thread_map_1 (ATerm t, ATerm n_39 (ATerm))
{
  ATerm e_16 (ATerm t)
  {
    ATerm s_7 = t;
    if(PushChoice()==0)
      {
        t = Cons_T_2(t, n_39, e_16);
        PopChoice();
      }
    else
      {
        t = s_7;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = e_16(t);
  return(t);
}
ATerm H_2 (ATerm t, ATerm e_28 (ATerm), ATerm f_28 (ATerm))
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL;
  l_16 = t;
  k_16 :
  if(match_cons(l_16, sym_H_2))
    {
      m_16 = ATgetArgument(l_16, 0);
      n_16 = ATgetArgument(l_16, 1);
      {
        ATerm q_16 = NULL;
        t = not_null(m_16);
        {
          ATerm s_16 = NULL;
          t = e_28(t);
          q_16 = t;
          t = not_null(n_16);
          t = f_28(t);
          s_16 = t;
          t = (ATerm) ATmakeAppl(sym_H_2, not_null(q_16), not_null(s_16));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm z_16 = NULL;
  z_16 = t;
  t = SSL_string_to_int(not_null(z_16));
  return(t);
}
ATerm HS_0 (ATerm t)
{
  ATerm d_17 = NULL;
  d_17 = t;
  c_17 :
  if(!(match_cons(d_17, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm a_28 (ATerm), ATerm b_28 (ATerm))
{
  ATerm i_17 = NULL,j_17 = NULL,l_17 = NULL;
  i_17 = t;
  h_17 :
  if(match_cons(i_17, sym_SOpt_2))
    {
      j_17 = ATgetArgument(i_17, 0);
      l_17 = ATgetArgument(i_17, 1);
      {
        ATerm o_17 = NULL;
        t = not_null(j_17);
        {
          ATerm q_17 = NULL;
          t = a_28(t);
          o_17 = t;
          t = not_null(l_17);
          t = b_28(t);
          q_17 = t;
          t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(o_17), not_null(q_17));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Hspace_0 (ATerm t)
{
  ATerm x_17 = NULL,z_17 = NULL;
  ATerm t_7 = t;
  if(PushChoice()==0)
    {
      ATerm e_1 (ATerm t)
      {
        ATerm f_1 (ATerm t)
        {
          ATerm y_17 = NULL;
          y_17 = t;
          if(x_17 != NULL && x_17 != y_17)
            _fail(y_17);
          else
            x_17 = y_17;
          return(t);
        }
        t = SOpt_2(t, HS_0, f_1);
        return(t);
      }
      t = fetch_1(t, e_1);
      t = not_null(x_17);
      t = string_to_int_0(t);
      PopChoice();
    }
  else
    {
      t = t_7;
      t = (ATerm) ATmakeInt(1);
    }
  z_17 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_17), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(32), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = copy_char_0(t);
  return(t);
}
ATerm Abox_2_text_0 (ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL;
  i_21 = t;
  a_20 :
  if(match_cons(i_21, sym_TCons_2))
    {
      j_21 = ATgetArgument(i_21, 0);
      k_21 = ATgetArgument(i_21, 1);
      b_20 :
      if(match_cons(j_21, sym_H_2))
        {
          g_21 = ATgetArgument(j_21, 0);
          h_21 = ATgetArgument(j_21, 1);
          c_20 :
          if(match_cons(k_21, sym_TCons_2))
            {
              l_21 = ATgetArgument(k_21, 0);
              m_21 = ATgetArgument(k_21, 1);
              d_20 :
              if(match_cons(m_21, sym_TNil_0))
                {
                  ATerm q_21 = NULL;
                  t = not_null(g_21);
                  {
                    ATerm s_21 = NULL;
                    t = Hspace_0(t);
                    q_21 = t;
                    {
                      ATerm u_21 = NULL;
                      t = string_length_0(t);
                      s_21 = t;
                      t = not_null(h_21);
                      {
                        ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL;
                        ATerm g_1 (ATerm t)
                        {
                          ATerm u_7 = t;
                          if(PushChoice()==0)
                            {
                              ATerm v_7 = t;
                              if(PushChoice()==0)
                                {
                                  t = Nil_0(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = v_7;
                                  t = H_2(t, Nil_0, Nil_0);
                                }
                              PopChoice();
                              _fail(t);
                            }
                          else
                            t = u_7;
                          return(t);
                        }
                        t = filter_1(t, g_1);
                        u_21 = t;
                        t = (ATerm) ATmakeAppl(sym_Pair_2, not_null(u_21), not_null(l_21));
                        {
                          ATerm h_1 (ATerm t)
                          {
                            ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
                            w_21 = t;
                            g_19 :
                            if(match_cons(w_21, sym_Pair_2))
                              {
                                x_21 = ATgetArgument(w_21, 0);
                                y_21 = ATgetArgument(w_21, 1);
                                {
                                  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = Abox_2_text_0(t);
                                  b_22 = t;
                                  d_19 :
                                  if(match_cons(b_22, sym_TCons_2))
                                    {
                                      c_22 = ATgetArgument(b_22, 0);
                                      d_22 = ATgetArgument(b_22, 1);
                                      e_19 :
                                      if(match_cons(d_22, sym_TCons_2))
                                        {
                                          e_22 = ATgetArgument(d_22, 0);
                                          f_22 = ATgetArgument(d_22, 1);
                                          f_19 :
                                          if(match_cons(f_22, sym_TNil_0))
                                            {
                                              ATerm i_22 = NULL;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              t = add_0(t);
                                              i_22 = t;
                                              t = (ATerm) ATmakeAppl(sym_Pair_2, not_null(c_22), not_null(i_22));
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
                              }
                            else
                              _fail(t);
                            return(t);
                          }
                          t = thread_map_1(t, h_1);
                          k_22 = t;
                          k_19 :
                          if(match_cons(k_22, sym_Pair_2))
                            {
                              l_22 = ATgetArgument(k_22, 0);
                              m_22 = ATgetArgument(k_22, 1);
                              {
                                ATerm p_22 = NULL;
                                t = not_null(l_22);
                                {
                                  ATerm i_1 (ATerm t)
                                  {
                                    t = not_null(q_21);
                                    return(t);
                                  }
                                  t = separate_by_1(t, i_1);
                                  p_22 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  {
                                    ATerm j_1 (ATerm t)
                                    {
                                      ATerm l_1 (ATerm t)
                                      {
                                        ATerm w_7 = t;
                                        if(PushChoice()==0)
                                          {
                                            t = Nil_0(t);
                                            PopChoice();
                                            _fail(t);
                                          }
                                        else
                                          t = w_7;
                                        return(t);
                                      }
                                      ATerm n_1 (ATerm t)
                                      {
                                        ATerm w_1 (ATerm t)
                                        {
                                          ATerm r_22 = NULL;
                                          r_22 = t;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                                          t = subt_0(t);
                                          return(t);
                                        }
                                        t = TCons_2(t, w_1, TNil_0);
                                        return(t);
                                      }
                                      t = TCons_2(t, l_1, n_1);
                                      return(t);
                                    }
                                    t = try_1(t, j_1);
                                  }
                                }
                              }
                            }
                          else
                            _fail(t);
                        }
                      }
                    }
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(j_21, sym_V_2))
            {
              g_21 = ATgetArgument(j_21, 0);
              h_21 = ATgetArgument(j_21, 1);
              e_20 :
              if(match_cons(k_21, sym_TCons_2))
                {
                  l_21 = ATgetArgument(k_21, 0);
                  m_21 = ATgetArgument(k_21, 1);
                  f_20 :
                  if(match_cons(m_21, sym_TNil_0))
                    {
                      ATerm w_22 = NULL;
                      t = not_null(g_21);
                      {
                        ATerm y_22 = NULL;
                        t = Vspace_0(t);
                        w_22 = t;
                        t = not_null(g_21);
                        {
                          ATerm a_23 = NULL;
                          t = Ispace_0(t);
                          y_22 = t;
                          {
                            ATerm c_23 = NULL;
                            t = string_length_0(t);
                            a_23 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_21), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(32), (ATerm) ATmakeAppl(sym_TNil_0)));
                            {
                              ATerm e_23 = NULL;
                              t = copy_char_0(t);
                              c_23 = t;
                              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_22), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_22), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_23), (ATerm) ATmakeAppl(sym_Nil_0))));
                              {
                                ATerm g_23 = NULL;
                                t = concat_strings_0(t);
                                e_23 = t;
                                t = not_null(h_21);
                                {
                                  ATerm x_1 (ATerm t)
                                  {
                                    ATerm x_7 = t;
                                    if(PushChoice()==0)
                                      {
                                        t = Nil_0(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      t = x_7;
                                    return(t);
                                  }
                                  t = filter_1(t, x_1);
                                  {
                                    ATerm y_7 = t;
                                    if(PushChoice()==0)
                                      {
                                        t = Nil_0(t);
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        PopChoice();
                                      }
                                    else
                                      {
                                        t = y_7;
                                        {
                                          ATerm y_1 (ATerm t)
                                          {
                                            ATerm h_23 = NULL;
                                            h_23 = t;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            t = Abox_2_text_0(t);
                                            return(t);
                                          }
                                          ATerm h_2 (ATerm t)
                                          {
                                            ATerm i_2 (ATerm t)
                                            {
                                              ATerm j_23 = NULL;
                                              ATerm l_23 = NULL;
                                              j_23 = t;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_23), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              t = add_0(t);
                                              l_23 = t;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_23), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              t = Abox_2_text_0(t);
                                              return(t);
                                            }
                                            t = map_1(t, i_2);
                                            return(t);
                                          }
                                          t = Cons_2(t, y_1, h_2);
                                          {
                                            ATerm j_2 (ATerm t)
                                            {
                                              ATerm k_2 (ATerm t)
                                              {
                                                ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL;
                                                n_23 = t;
                                                u_19 :
                                                if(match_cons(n_23, sym_TCons_2))
                                                  {
                                                    o_23 = ATgetArgument(n_23, 0);
                                                    p_23 = ATgetArgument(n_23, 1);
                                                    v_19 :
                                                    if(match_cons(p_23, sym_TCons_2))
                                                      {
                                                        q_23 = ATgetArgument(p_23, 0);
                                                        r_23 = ATgetArgument(p_23, 1);
                                                        w_19 :
                                                        if(match_cons(r_23, sym_TNil_0))
                                                          {
                                                            if(g_23 != NULL && g_23 != q_23)
                                                              _fail(q_23);
                                                            else
                                                              g_23 = q_23;
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
                                              t = Cons_2(t, k_2, Nil_0);
                                              return(t);
                                            }
                                            t = at_last_1(t, j_2);
                                            t = map_1(t, Fst_0);
                                            {
                                              ATerm l_2 (ATerm t)
                                              {
                                                t = not_null(e_23);
                                                return(t);
                                              }
                                              t = separate_by_1(t, l_2);
                                              {
                                                ATerm m_2 (ATerm t)
                                                {
                                                  t = not_null(g_23);
                                                  return(t);
                                                }
                                                t = split_2(t, _id, m_2);
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
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(j_21, sym_S_1))
                {
                  g_21 = ATgetArgument(j_21, 0);
                  g_20 :
                  if(match_cons(k_21, sym_TCons_2))
                    {
                      l_21 = ATgetArgument(k_21, 0);
                      m_21 = ATgetArgument(k_21, 1);
                      h_20 :
                      if(match_cons(m_21, sym_TNil_0))
                        {
                          ATerm u_23 = NULL;
                          t = not_null(g_21);
                          {
                            ATerm w_23 = NULL;
                            t = string_length_0(t);
                            u_23 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_23), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = add_0(t);
                            w_23 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_23), (ATerm) ATmakeAppl(sym_TNil_0)));
                          }
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(j_21, sym_C_2))
                    {
                      g_21 = ATgetArgument(j_21, 0);
                      h_21 = ATgetArgument(j_21, 1);
                      i_20 :
                      if(match_cons(h_21, sym_Cons_2))
                        {
                          c_21 = ATgetArgument(h_21, 0);
                          e_21 = ATgetArgument(h_21, 1);
                          j_20 :
                          if(match_cons(c_21, sym_S_1))
                            {
                              d_21 = ATgetArgument(c_21, 0);
                              k_20 :
                              if(match_cons(e_21, sym_Nil_0))
                                {
                                  l_20 :
                                  if(match_cons(k_21, sym_TCons_2))
                                    {
                                      l_21 = ATgetArgument(k_21, 0);
                                      m_21 = ATgetArgument(k_21, 1);
                                      m_20 :
                                      if(match_cons(m_21, sym_TNil_0))
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_21), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                      else
                        _fail(t);
                    }
                  else
                    {
                      if(match_cons(j_21, sym_FBOX_2))
                        {
                          g_21 = ATgetArgument(j_21, 0);
                          h_21 = ATgetArgument(j_21, 1);
                          n_20 :
                          if(match_cons(k_21, sym_TCons_2))
                            {
                              l_21 = ATgetArgument(k_21, 0);
                              m_21 = ATgetArgument(k_21, 1);
                              o_20 :
                              if(match_cons(m_21, sym_TNil_0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = Abox_2_text_0(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(j_21, sym_HV_2))
                            {
                              g_21 = ATgetArgument(j_21, 0);
                              h_21 = ATgetArgument(j_21, 1);
                              p_20 :
                              if(match_cons(k_21, sym_TCons_2))
                                {
                                  l_21 = ATgetArgument(k_21, 0);
                                  m_21 = ATgetArgument(k_21, 1);
                                  q_20 :
                                  if(match_cons(m_21, sym_TNil_0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_H_2, not_null(g_21), not_null(h_21)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = Abox_2_text_0(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(j_21, sym_R_2))
                                {
                                  g_21 = ATgetArgument(j_21, 0);
                                  h_21 = ATgetArgument(j_21, 1);
                                  r_20 :
                                  if(match_cons(k_21, sym_TCons_2))
                                    {
                                      l_21 = ATgetArgument(k_21, 0);
                                      m_21 = ATgetArgument(k_21, 1);
                                      s_20 :
                                      if(match_cons(m_21, sym_TNil_0))
                                        {
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_H_2, not_null(g_21), not_null(h_21)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                                          t = Abox_2_text_0(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(j_21, sym_A_3))
                                    {
                                      g_21 = ATgetArgument(j_21, 0);
                                      h_21 = ATgetArgument(j_21, 1);
                                      f_21 = ATgetArgument(j_21, 2);
                                      t_20 :
                                      if(match_cons(k_21, sym_TCons_2))
                                        {
                                          l_21 = ATgetArgument(k_21, 0);
                                          m_21 = ATgetArgument(k_21, 1);
                                          u_20 :
                                          if(match_cons(m_21, sym_TNil_0))
                                            {
                                              ATerm w_24 = NULL;
                                              t = not_null(f_21);
                                              t = map_to_r_box_0(t);
                                              w_24 = t;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_V_2, not_null(h_21), not_null(w_24)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              t = Abox_2_text_0(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(j_21, sym_ALT_2))
                                        {
                                          g_21 = ATgetArgument(j_21, 0);
                                          h_21 = ATgetArgument(j_21, 1);
                                          v_20 :
                                          if(match_cons(k_21, sym_TCons_2))
                                            {
                                              l_21 = ATgetArgument(k_21, 0);
                                              m_21 = ATgetArgument(k_21, 1);
                                              w_20 :
                                              if(match_cons(m_21, sym_TNil_0))
                                                {
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = Abox_2_text_0(t);
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        {
                                          if(match_cons(j_21, sym_Cons_2))
                                            {
                                              g_21 = ATgetArgument(j_21, 0);
                                              h_21 = ATgetArgument(j_21, 1);
                                              x_20 :
                                              if(match_cons(h_21, sym_Nil_0))
                                                {
                                                  y_20 :
                                                  if(match_cons(k_21, sym_TCons_2))
                                                    {
                                                      l_21 = ATgetArgument(k_21, 0);
                                                      m_21 = ATgetArgument(k_21, 1);
                                                      z_20 :
                                                      if(match_cons(m_21, sym_TNil_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                          t = Abox_2_text_0(t);
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
                                            {
                                              if(match_cons(j_21, sym_Nil_0))
                                                {
                                                  a_21 :
                                                  if(match_cons(k_21, sym_TCons_2))
                                                    {
                                                      l_21 = ATgetArgument(k_21, 0);
                                                      m_21 = ATgetArgument(k_21, 1);
                                                      b_21 :
                                                      if(match_cons(m_21, sym_TNil_0))
                                                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                      else
                                                        _fail(t);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
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
  else
    _fail(t);
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  t = split_2(t, _id, o_2);
  t = Abox_2_text_0(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm y_29 (ATerm), ATerm z_29 (ATerm))
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
  d_29 = t;
  c_29 :
  if(match_cons(d_29, sym_TCons_2))
    {
      e_29 = ATgetArgument(d_29, 0);
      f_29 = ATgetArgument(d_29, 1);
      {
        ATerm i_29 = NULL;
        t = not_null(e_29);
        {
          ATerm k_29 = NULL;
          t = y_29(t);
          i_29 = t;
          t = not_null(f_29);
          t = z_29(t);
          k_29 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_29), not_null(k_29));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm q_29 = NULL;
  q_29 = t;
  t = SSL_ReadFromFile(not_null(q_29));
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm w_29 = NULL;
  ATerm z_7;
  z_7 = t;
  {
    ATerm d_8 = t;
    if(PushChoice()==0)
      {
        ATerm q_2 (ATerm t)
        {
          ATerm x_29 = NULL,a_30 = NULL;
          x_29 = t;
          u_29 :
          if(match_cons(x_29, sym_Input_1))
            {
              a_30 = ATgetArgument(x_29, 0);
              if(w_29 != NULL && w_29 != a_30)
                _fail(a_30);
              else
                w_29 = a_30;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, q_2);
        PopChoice();
      }
    else
      {
        t = d_8;
        {
          ATerm b_30 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          b_30 = t;
          if(w_29 != NULL && w_29 != b_30)
            _fail(b_30);
          else
            w_29 = b_30;
        }
      }
  }
  t = z_7;
  {
    ATerm s_2 (ATerm t)
    {
      t = not_null(w_29);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, s_2);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm q_35 (ATerm))
{
  ATerm e_8;
  e_8 = t;
  {
    ATerm t_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm u_2 (ATerm t)
    {
      ATerm i_30 = NULL;
      ATerm k_30 = NULL;
      i_30 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = q_35(t);
      k_30 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_30), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_30), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, t_2, u_2);
    t = printnl_0(t);
  }
  t = e_8;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm x_35 (ATerm))
{
  ATerm f_8;
  f_8 = t;
  t = x_35(t);
  {
    ATerm v_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
      return(t);
    }
    t = debug_1(t, v_2);
  }
  t = f_8;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL;
  ATerm g_8 = t;
  if(PushChoice()==0)
    {
      ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL;
      v_30 = t;
      p_30 :
      if(match_cons(v_30, sym_TCons_2))
        {
          w_30 = ATgetArgument(v_30, 0);
          x_30 = ATgetArgument(v_30, 1);
          q_30 :
          if(match_cons(x_30, sym_TCons_2))
            {
              y_30 = ATgetArgument(x_30, 0);
              z_30 = ATgetArgument(x_30, 1);
              r_30 :
              if(match_cons(z_30, sym_TNil_0))
                {
                  if(u_30 != NULL && u_30 != w_30)
                    _fail(w_30);
                  else
                    u_30 = w_30;
                  if(t_30 != NULL && t_30 != y_30)
                    _fail(y_30);
                  else
                    t_30 = y_30;
                  t = SSL_open_file(not_null(u_30), not_null(t_30));
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = g_8;
      {
        ATerm a_31 = NULL;
        ATerm w_2 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
          return(t);
        }
        t = obsolete_1(t, w_2);
        a_31 = t;
        if(u_30 != NULL && u_30 != a_31)
          _fail(a_31);
        else
          u_30 = a_31;
        t = SSL_open_file(not_null(u_30), (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue)));
      }
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm f_44 (ATerm))
{
  ATerm d_31 (ATerm t)
  {
    ATerm i_8 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, f_44, _id);
        PopChoice();
      }
    else
      {
        t = i_8;
        t = Cons_2(t, _id, d_31);
      }
    return(t);
  }
  t = d_31(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_34 (ATerm))
{
  t = fetch_1(t, k_34);
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm g_31 = NULL;
  ATerm j_8;
  j_8 = t;
  {
    ATerm y_2 (ATerm t)
    {
      ATerm h_31 = NULL,i_31 = NULL;
      h_31 = t;
      f_31 :
      if(match_cons(h_31, sym_Program_1))
        {
          i_31 = ATgetArgument(h_31, 0);
          if(g_31 != NULL && g_31 != i_31)
            _fail(i_31);
          else
            g_31 = i_31;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, y_2);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_31), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-i abox] [-o html] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
  }
  t = j_8;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_31 = NULL;
  l_31 = t;
  k_31 :
  if(!(match_cons(l_31, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm f_35 (ATerm))
{
  ATerm z_2 (ATerm t)
  {
    ATerm k_8 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = k_8;
        {
          ATerm l_8 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = l_8;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, z_2);
  t = f_35(t);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
  v_31 = t;
  p_31 :
  if(match_cons(v_31, sym_Cons_2))
    {
      r_31 = ATgetArgument(v_31, 0);
      s_31 = ATgetArgument(v_31, 1);
      q_31 :
      if(match_cons(s_31, sym_Cons_2))
        {
          t_31 = ATgetArgument(s_31, 0);
          u_31 = ATgetArgument(s_31, 1);
          {
            ATerm z_31 = NULL;
            t = not_null(r_31);
            t = d_0(t);
            t = not_null(t_31);
            t = e_0(t);
            z_31 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_31), not_null(u_31));
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(v_31, "register-usage-info"))
        t = register_usage_1(t, f_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm n_8 = t;
  if(PushChoice()==0)
    {
      ATerm d_3 (ATerm t)
      {
        ATerm p_32 = NULL;
        p_32 = t;
        e_32 :
        if(!(match_string(p_32, "-S")))
          {
            if(!(match_string(p_32, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm m_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm n_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, d_3, m_3, n_3);
      PopChoice();
    }
  else
    {
      t = n_8;
      {
        ATerm o_8 = t;
        if(PushChoice()==0)
          {
            ATerm o_3 (ATerm t)
            {
              ATerm q_32 = NULL;
              q_32 = t;
              f_32 :
              if(!(match_string(q_32, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm p_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm q_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, o_3, p_3, q_3);
            PopChoice();
          }
        else
          {
            t = o_8;
            {
              ATerm p_8 = t;
              if(PushChoice()==0)
                {
                  ATerm r_3 (ATerm t)
                  {
                    ATerm r_32 = NULL;
                    r_32 = t;
                    g_32 :
                    if(!(match_string(r_32, "-v")))
                      {
                        if(!(match_string(r_32, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm s_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm t_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, r_3, s_3, t_3);
                  PopChoice();
                }
              else
                {
                  t = p_8;
                  {
                    ATerm q_8 = t;
                    if(PushChoice()==0)
                      {
                        ATerm u_3 (ATerm t)
                        {
                          ATerm s_32 = NULL;
                          s_32 = t;
                          h_32 :
                          if(!(match_string(s_32, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm v_3 (ATerm t)
                        {
                          ATerm t_32 = NULL;
                          t_32 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(t_32));
                          return(t);
                        }
                        ATerm w_3 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, u_3, v_3, w_3);
                        PopChoice();
                      }
                    else
                      {
                        t = q_8;
                        {
                          ATerm r_8 = t;
                          if(PushChoice()==0)
                            {
                              ATerm x_3 (ATerm t)
                              {
                                ATerm v_32 = NULL;
                                v_32 = t;
                                j_32 :
                                if(!(match_string(v_32, "-i")))
                                  {
                                    if(!(match_string(v_32, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm l_4 (ATerm t)
                              {
                                ATerm w_32 = NULL;
                                w_32 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_32));
                                return(t);
                              }
                              ATerm x_4 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, x_3, l_4, x_4);
                              PopChoice();
                            }
                          else
                            {
                              t = r_8;
                              {
                                ATerm s_8 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm y_4 (ATerm t)
                                    {
                                      ATerm y_32 = NULL;
                                      y_32 = t;
                                      l_32 :
                                      if(!(match_string(y_32, "-o")))
                                        {
                                          if(!(match_string(y_32, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm z_4 (ATerm t)
                                    {
                                      ATerm z_32 = NULL;
                                      z_32 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_32));
                                      return(t);
                                    }
                                    ATerm a_5 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, y_4, z_4, a_5);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = s_8;
                                    {
                                      ATerm t_8 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm b_5 (ATerm t)
                                          {
                                            ATerm b_33 = NULL;
                                            b_33 = t;
                                            n_32 :
                                            if(!(match_string(b_33, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm c_5 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm d_5 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, b_5, c_5, d_5);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = t_8;
                                          {
                                            ATerm e_5 (ATerm t)
                                            {
                                              ATerm c_33 = NULL;
                                              c_33 = t;
                                              o_32 :
                                              if(!(match_string(c_33, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm f_5 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm g_5 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, e_5, f_5, g_5);
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
  ATerm h_33 = NULL;
  h_33 = t;
  t = SSL_table_destroy(not_null(h_33));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm r_33 = NULL;
  r_33 = t;
  t = SSL_exit(not_null(r_33));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm v_33 = NULL;
  v_33 = t;
  t = SSL_implode_string(not_null(v_33));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_44 (ATerm))
{
  ATerm y_33 (ATerm t)
  {
    ATerm u_8 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, y_33);
        PopChoice();
      }
    else
      {
        t = u_8;
        t = Nil_0(t);
        t = l_44(t);
      }
    return(t);
  }
  t = y_33(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm v_8 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = v_8;
      {
        ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL;
        b_34 = t;
        a_34 :
        if(match_cons(b_34, sym_Cons_2))
          {
            c_34 = ATgetArgument(b_34, 0);
            d_34 = ATgetArgument(b_34, 1);
            t = not_null(c_34);
            {
              ATerm h_5 (ATerm t)
              {
                t = not_null(d_34);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, h_5);
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
  ATerm j_34 = NULL;
  j_34 = t;
  t = SSL_explode_string(not_null(j_34));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm m_33 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_43 (ATerm))
{
  ATerm n_34 (ATerm t)
  {
    ATerm a_9 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = a_9;
        t = Cons_2(t, x_43, n_34);
      }
    return(t);
  }
  t = n_34(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL;
  t_34 = t;
  p_34 :
  if(match_cons(t_34, sym_TCons_2))
    {
      u_34 = ATgetArgument(t_34, 0);
      v_34 = ATgetArgument(t_34, 1);
      q_34 :
      if(match_cons(u_34, sym_Nil_0))
        {
          r_34 :
          if(match_cons(v_34, sym_TCons_2))
            {
              w_34 = ATgetArgument(v_34, 0);
              x_34 = ATgetArgument(v_34, 1);
              s_34 :
              if(match_cons(x_34, sym_TNil_0))
                t = not_null(w_34);
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
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL;
  g_35 = t;
  b_35 :
  if(match_cons(g_35, sym_TCons_2))
    {
      h_35 = ATgetArgument(g_35, 0);
      k_35 = ATgetArgument(g_35, 1);
      c_35 :
      if(match_cons(h_35, sym_Cons_2))
        {
          i_35 = ATgetArgument(h_35, 0);
          j_35 = ATgetArgument(h_35, 1);
          d_35 :
          if(match_cons(k_35, sym_TCons_2))
            {
              l_35 = ATgetArgument(k_35, 0);
              m_35 = ATgetArgument(k_35, 1);
              e_35 :
              if(match_cons(m_35, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_35), not_null(l_35)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm q_49 (ATerm), ATerm r_49 (ATerm))
{
  ATerm s_35 (ATerm t)
  {
    ATerm b_9 = t;
    if(PushChoice()==0)
      {
        t = q_49(t);
        t = s_35(t);
        PopChoice();
      }
    else
      {
        t = b_9;
        t = r_49(t);
      }
    return(t);
  }
  t = s_35(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm t_49 (ATerm))
{
  t = repeat_2(t, t_49, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm u_35 = NULL;
  u_35 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm l_33 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_27 (ATerm))
{
  ATerm b_36 = NULL,c_36 = NULL;
  b_36 = t;
  a_36 :
  if(match_cons(b_36, sym_Program_1))
    {
      c_36 = ATgetArgument(b_36, 0);
      {
        ATerm e_36 = NULL;
        t = not_null(c_36);
        t = t_27(t);
        e_36 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_36));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm m_36 = NULL;
  ATerm i_5 (ATerm t)
  {
    ATerm j_5 (ATerm t)
    {
      ATerm n_36 = NULL;
      n_36 = t;
      if(m_36 != NULL && m_36 != n_36)
        _fail(n_36);
      else
        m_36 = n_36;
      return(t);
    }
    t = Program_1(t, j_5);
    return(t);
  }
  t = option_defined_1(t, i_5);
  {
    ATerm k_5 (ATerm t)
    {
      ATerm o_36 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm l_5 (ATerm t)
        {
          t = not_null(m_36);
          return(t);
        }
        t = short_description_1(t, l_5);
        t = concat_strings_0(t);
        o_36 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_36), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, k_5);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm m_5 (ATerm t)
      {
        ATerm q_36 = NULL;
        q_36 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_36), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, m_5);
      {
        ATerm n_5 (ATerm t)
        {
          ATerm s_36 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm o_5 (ATerm t)
            {
              t = not_null(m_36);
              return(t);
            }
            t = long_description_1(t, o_5);
            t = concat_strings_0(t);
            s_36 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_36), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = printnl_0(t);
          }
          return(t);
        }
        t = try_1(t, n_5);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL;
  c_37 = t;
  z_36 :
  if(match_cons(c_37, sym_TCons_2))
    {
      d_37 = ATgetArgument(c_37, 0);
      e_37 = ATgetArgument(c_37, 1);
      a_37 :
      if(match_cons(e_37, sym_TCons_2))
        {
          f_37 = ATgetArgument(e_37, 0);
          g_37 = ATgetArgument(e_37, 1);
          b_37 :
          if(match_cons(g_37, sym_TNil_0))
            {
              ATerm c_9;
              c_9 = t;
              t = SSL_printnl(not_null(d_37), not_null(f_37));
              t = c_9;
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
ATerm Undefined_1 (ATerm t, ATerm u_27 (ATerm))
{
  ATerm p_37 = NULL,q_37 = NULL;
  p_37 = t;
  o_37 :
  if(match_cons(p_37, sym_Undefined_1))
    {
      q_37 = ATgetArgument(p_37, 0);
      {
        ATerm s_37 = NULL;
        t = not_null(q_37);
        t = u_27(t);
        s_37 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(s_37));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_37 = NULL;
  x_37 = t;
  w_37 :
  if(!(match_cons(x_37, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL;
  d_38 = t;
  z_37 :
  if(match_cons(d_38, sym_TCons_2))
    {
      e_38 = ATgetArgument(d_38, 0);
      f_38 = ATgetArgument(d_38, 1);
      a_38 :
      if(match_cons(f_38, sym_TCons_2))
        {
          g_38 = ATgetArgument(f_38, 0);
          h_38 = ATgetArgument(f_38, 1);
          b_38 :
          if(match_cons(h_38, sym_TNil_0))
            t = SSL_table_get(not_null(e_38), not_null(g_38));
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
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,z_38 = NULL,a_39 = NULL;
  r_38 = t;
  n_38 :
  if(match_cons(r_38, sym_TCons_2))
    {
      s_38 = ATgetArgument(r_38, 0);
      t_38 = ATgetArgument(r_38, 1);
      o_38 :
      if(match_cons(t_38, sym_TCons_2))
        {
          u_38 = ATgetArgument(t_38, 0);
          v_38 = ATgetArgument(t_38, 1);
          p_38 :
          if(match_cons(v_38, sym_TCons_2))
            {
              z_38 = ATgetArgument(v_38, 0);
              a_39 = ATgetArgument(v_38, 1);
              q_38 :
              if(match_cons(a_39, sym_TNil_0))
                {
                  ATerm d_9;
                  d_9 = t;
                  {
                    ATerm e_39 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_38), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_38), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm f_9 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = f_9;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      e_39 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_38), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_38), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_38), not_null(e_39)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  }
                  t = d_9;
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
ATerm register_usage_1 (ATerm t, ATerm q_33 (ATerm))
{
  ATerm j_39 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = q_33(t);
  j_39 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_39), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL;
  u_39 = t;
  r_39 :
  if(match_cons(u_39, sym_Cons_2))
    {
      s_39 = ATgetArgument(u_39, 0);
      t_39 = ATgetArgument(u_39, 1);
      {
        ATerm x_39 = NULL;
        t = not_null(s_39);
        t = a_0(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = b_0(t);
        x_39 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_39), not_null(t_39));
      }
    }
  else
    {
      if(match_string(u_39, "register-usage-info"))
        t = register_usage_1(t, c_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm d_40 = NULL;
    d_40 = t;
    c_40 :
    if(!(match_string(d_40, "--help")))
      {
        if(!(match_string(d_40, "-h")))
          {
            if(!(match_string(d_40, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, p_5, q_5, r_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL;
  g_40 = t;
  f_40 :
  if(match_cons(g_40, sym_Cons_2))
    {
      h_40 = ATgetArgument(g_40, 0);
      i_40 = ATgetArgument(g_40, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(h_40)), not_null(i_40));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm c_30 (ATerm), ATerm d_30 (ATerm))
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
  q_40 = t;
  p_40 :
  if(match_cons(q_40, sym_Cons_2))
    {
      r_40 = ATgetArgument(q_40, 0);
      s_40 = ATgetArgument(q_40, 1);
      {
        ATerm v_40 = NULL;
        t = not_null(r_40);
        {
          ATerm x_40 = NULL;
          t = c_30(t);
          v_40 = t;
          t = not_null(s_40);
          t = d_30(t);
          x_40 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_40), not_null(x_40));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm d_41 = NULL;
  d_41 = t;
  c_41 :
  if(!(match_cons(d_41, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm o_33 (ATerm))
{
  ATerm g_9;
  g_9 = t;
  {
    ATerm s_5 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = o_33(t);
      return(t);
    }
    t = try_1(t, s_5);
  }
  t = g_9;
  {
    ATerm t_5 (ATerm t)
    {
      ATerm f_41 = NULL;
      f_41 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_41));
      return(t);
    }
    ATerm u_5 (ATerm t)
    {
      ATerm h_9 = t;
      if(PushChoice()==0)
        {
          ATerm i_9 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = i_9;
              t = o_33(t);
              t = Cons_2(t, _id, u_5);
            }
          PopChoice();
        }
      else
        {
          t = h_9;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, t_5, u_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL;
  ATerm j_9;
  j_9 = t;
  {
    ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL;
    r_41 = t;
    k_41 :
    if(match_cons(r_41, sym_TCons_2))
      {
        s_41 = ATgetArgument(r_41, 0);
        t_41 = ATgetArgument(r_41, 1);
        l_41 :
        if(match_cons(t_41, sym_TCons_2))
          {
            u_41 = ATgetArgument(t_41, 0);
            v_41 = ATgetArgument(t_41, 1);
            m_41 :
            if(match_cons(v_41, sym_TCons_2))
              {
                w_41 = ATgetArgument(v_41, 0);
                x_41 = ATgetArgument(v_41, 1);
                n_41 :
                if(match_cons(x_41, sym_TNil_0))
                  {
                    if(o_41 != NULL && o_41 != s_41)
                      _fail(s_41);
                    else
                      o_41 = s_41;
                    if(p_41 != NULL && p_41 != u_41)
                      _fail(u_41);
                    else
                      p_41 = u_41;
                    if(q_41 != NULL && q_41 != w_41)
                      _fail(w_41);
                    else
                      q_41 = w_41;
                    t = SSL_table_put(not_null(o_41), not_null(p_41), not_null(q_41));
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
  t = j_9;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm n_33 (ATerm))
{
  ATerm a_42 = NULL;
  ATerm k_9;
  k_9 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = k_9;
  {
    ATerm w_5 (ATerm t)
    {
      ATerm l_9 = t;
      if(PushChoice()==0)
        {
          t = n_33(t);
          PopChoice();
        }
      else
        {
          t = l_9;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, w_5);
    {
      ATerm x_5 (ATerm t)
      {
        ATerm m_9 = t;
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
            t = m_9;
            {
              ATerm y_5 (ATerm t)
              {
                ATerm z_5 (ATerm t)
                {
                  ATerm b_42 = NULL;
                  b_42 = t;
                  if(a_42 != NULL && a_42 != b_42)
                    _fail(b_42);
                  else
                    a_42 = b_42;
                  return(t);
                }
                t = Undefined_1(t, z_5);
                return(t);
              }
              t = option_defined_1(t, y_5);
              {
                ATerm n_9;
                n_9 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_42), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = n_9;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, x_5);
      {
        ATerm o_9;
        o_9 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = o_9;
      }
    }
  }
  return(t);
}
ATerm Abox2text_0 (ATerm t)
{
  ATerm j_42 = NULL;
  ATerm l_42 = NULL,m_42 = NULL;
  t = parse_options_1(t, io_options_0);
  j_42 = t;
  {
    ATerm t_9 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, usage_0);
        PopChoice();
      }
    else
      {
        t = t_9;
        {
          ATerm u_9 = t;
          if(PushChoice()==0)
            {
              ATerm v_9;
              v_9 = t;
              {
                ATerm w_9 = t;
                if(PushChoice()==0)
                  {
                    ATerm a_6 (ATerm t)
                    {
                      ATerm n_42 = NULL,o_42 = NULL;
                      n_42 = t;
                      f_42 :
                      if(match_cons(n_42, sym_Output_1))
                        {
                          o_42 = ATgetArgument(n_42, 0);
                          if(m_42 != NULL && m_42 != o_42)
                            _fail(o_42);
                          else
                            m_42 = o_42;
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = option_defined_1(t, a_6);
                    t = not_null(m_42);
                    t = open_file_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = w_9;
                    {
                      ATerm p_42 = NULL;
                      t = (ATerm) ATmakeAppl(sym_stdout_0);
                      p_42 = t;
                      if(m_42 != NULL && m_42 != p_42)
                        _fail(p_42);
                      else
                        m_42 = p_42;
                    }
                  }
              }
              t = v_9;
              t = input_file_0(t);
              {
                ATerm b_6 (ATerm t)
                {
                  ATerm c_6 (ATerm t)
                  {
                    ATerm q_42 = NULL;
                    t = abox2text_0(t);
                    q_42 = t;
                    if(l_42 != NULL && l_42 != q_42)
                      _fail(q_42);
                    else
                      l_42 = q_42;
                    return(t);
                  }
                  t = TCons_2(t, c_6, TNil_0);
                  return(t);
                }
                t = TCons_2(t, _id, b_6);
                t = not_null(l_42);
                {
                  ATerm d_6 (ATerm t)
                  {
                    ATerm e_6 (ATerm t)
                    {
                      t = is_string_0(t);
                      {
                        ATerm y_9;
                        y_9 = t;
                        {
                          ATerm f_6 (ATerm t)
                          {
                            t = not_null(m_42);
                            return(t);
                          }
                          ATerm h_6 (ATerm t)
                          {
                            ATerm r_42 = NULL;
                            r_42 = t;
                            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_42), (ATerm) ATmakeAppl(sym_Nil_0));
                            return(t);
                          }
                          t = split_2(t, f_6, h_6);
                          t = print_0(t);
                        }
                        t = y_9;
                      }
                      return(t);
                    }
                    t = try_1(t, e_6);
                    return(t);
                  }
                  t = topdown_1(t, d_6);
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_42), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = print_0(t);
                  t = report_success_0(t);
                }
              }
              PopChoice();
            }
          else
            {
              t = u_9;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Abox2text_0(t);
  return(t);
}
