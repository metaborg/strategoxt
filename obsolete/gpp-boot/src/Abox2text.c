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
ATerm split_2 (ATerm, ATerm q_36 (ATerm), ATerm r_36 (ATerm));
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm q_49 (ATerm));
ATerm topdown_1 (ATerm, ATerm s_45 (ATerm));
ATerm TNil_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm map_to_r_box_0 (ATerm);
ATerm add_0 (ATerm);
ATerm length_0 (ATerm);
ATerm string_length_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm o_44 (ATerm));
ATerm separate_by_1 (ATerm, ATerm p_44 (ATerm));
ATerm Fst_0 (ATerm);
ATerm map_1 (ATerm, ATerm c_43 (ATerm));
ATerm at_last_1 (ATerm, ATerm b_44 (ATerm));
ATerm Tl_0 (ATerm);
ATerm filter_1 (ATerm, ATerm i_37 (ATerm));
ATerm at_end_1 (ATerm, ATerm r_43 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm k_49 (ATerm), ATerm l_49 (ATerm));
ATerm for_3 (ATerm, ATerm n_49 (ATerm), ATerm o_49 (ATerm), ATerm p_49 (ATerm));
ATerm copy_0 (ATerm);
ATerm copy_char_0 (ATerm);
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm Vspace_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm thread_map_1 (ATerm, ATerm x_38 (ATerm));
ATerm H_2 (ATerm, ATerm b_28 (ATerm), ATerm c_28 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm x_27 (ATerm), ATerm y_27 (ATerm));
ATerm Hspace_0 (ATerm);
ATerm Abox_2_text_0 (ATerm);
ATerm abox2text_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm v_29 (ATerm), ATerm w_29 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm input_file_0 (ATerm);
ATerm debug_1 (ATerm, ATerm x_34 (ATerm));
ATerm obsolete_1 (ATerm, ATerm e_35 (ATerm));
ATerm open_file_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm l_43 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_33 (ATerm));
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm r_27 (ATerm));
ATerm Help_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm m_34 (ATerm));
ATerm Option_2 (ATerm, ATerm k_33 (ATerm), ATerm l_33 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm m_33 (ATerm), ATerm n_33 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm z_29 (ATerm), ATerm a_30 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm i_33 (ATerm));
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
  ATerm h_1 = NULL,i_1 = NULL;
  ATerm a_0 (ATerm t)
  {
    ATerm b_0 (ATerm t)
    {
      ATerm q_5 = t;
      if(PushChoice()==0)
        {
          ATerm e_0 (ATerm t)
          {
            ATerm j_1 = NULL;
            j_1 = t;
            c_1 :
            if(!(match_cons(j_1, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, e_0);
          PopChoice();
          _fail(t);
        }
      else
        t = q_5;
      return(t);
    }
    ATerm c_0 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, b_0, c_0);
    {
      ATerm f_0 (ATerm t)
      {
        ATerm i_0 (ATerm t)
        {
          ATerm k_1 = NULL,l_1 = NULL;
          k_1 = t;
          e_1 :
          if(match_cons(k_1, sym_Runtime_1))
            {
              l_1 = ATgetArgument(k_1, 0);
              if(i_1 != NULL && i_1 != l_1)
                _fail(l_1);
              else
                i_1 = l_1;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, i_0);
        return(t);
      }
      ATerm h_0 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, f_0, h_0);
      {
        ATerm j_0 (ATerm t)
        {
          ATerm l_0 (ATerm t)
          {
            ATerm m_1 = NULL,n_1 = NULL;
            m_1 = t;
            g_1 :
            if(match_cons(m_1, sym_Program_1))
              {
                n_1 = ATgetArgument(m_1, 0);
                if(h_1 != NULL && h_1 != n_1)
                  _fail(n_1);
                else
                  h_1 = n_1;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, l_0);
          return(t);
        }
        ATerm k_0 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, j_0, k_0);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_1), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_1), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, a_0);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm u_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL;
  u_1 = t;
  r_1 :
  if(match_cons(u_1, sym_TCons_2))
    {
      v_1 = ATgetArgument(u_1, 0);
      w_1 = ATgetArgument(u_1, 1);
      s_1 :
      if(match_cons(w_1, sym_TCons_2))
        {
          x_1 = ATgetArgument(w_1, 0);
          y_1 = ATgetArgument(w_1, 1);
          t_1 :
          if(match_cons(y_1, sym_TNil_0))
            {
              ATerm r_5;
              r_5 = t;
              t = SSL_print(not_null(v_1), not_null(x_1));
              t = r_5;
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
ATerm split_2 (ATerm t, ATerm q_36 (ATerm), ATerm r_36 (ATerm))
{
  ATerm f_2 = NULL;
  ATerm h_2 = NULL;
  f_2 = t;
  {
    ATerm j_2 = NULL;
    t = q_36(t);
    h_2 = t;
    t = not_null(f_2);
    t = r_36(t);
    j_2 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_2), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm p_2 = NULL;
  p_2 = t;
  t = SSL_is_string(not_null(p_2));
  return(t);
}
ATerm try_1 (ATerm t, ATerm q_49 (ATerm))
{
  ATerm s_5 = t;
  if(PushChoice()==0)
    {
      t = q_49(t);
      PopChoice();
    }
  else
    t = s_5;
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm s_45 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    t = s_45(t);
    t = _all(t, s_2);
    return(t);
  }
  t = s_2(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm u_2 = NULL;
  u_2 = t;
  t_2 :
  if(!(match_cons(u_2, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL;
  z_2 = t;
  w_2 :
  if(match_cons(z_2, sym_TCons_2))
    {
      a_3 = ATgetArgument(z_2, 0);
      b_3 = ATgetArgument(z_2, 1);
      x_2 :
      if(match_cons(b_3, sym_TCons_2))
        {
          c_3 = ATgetArgument(b_3, 0);
          d_3 = ATgetArgument(b_3, 1);
          y_2 :
          if(match_cons(d_3, sym_TNil_0))
            {
              t = not_null(a_3);
              {
                ATerm m_0 (ATerm t)
                {
                  t = not_null(c_3);
                  return(t);
                }
                t = at_end_1(t, m_0);
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
  ATerm c_4 = NULL;
  c_4 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_4), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  {
    ATerm a_6 (ATerm t)
    {
      ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL;
      ATerm c_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_4), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_R_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(l_4)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = conc_0(t);
        return(t);
      }
      ATerm d_6 (ATerm t)
      {
        ATerm h_5 = NULL;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_4), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_R_2, not_null(e_4), not_null(f_4)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = conc_0(t);
        h_5 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_4), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_5), (ATerm) ATmakeAppl(sym_TNil_0))));
        t = a_6(t);
        return(t);
      }
      ATerm e_6 (ATerm t)
      {
        ATerm p_5 = NULL;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_4), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_R_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(l_4)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_R_2, not_null(e_4), not_null(f_4)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = conc_0(t);
        p_5 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_4), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_5), (ATerm) ATmakeAppl(sym_TNil_0))));
        t = a_6(t);
        return(t);
      }
      ATerm f_6 (ATerm t)
      {
        ATerm x_5 = NULL;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_4), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_4), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = conc_0(t);
        x_5 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_4), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_5), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_4), (ATerm) ATmakeAppl(sym_TNil_0))));
        t = a_6(t);
        return(t);
      }
      g_4 = t;
      q_3 :
      if(match_cons(g_4, sym_TCons_2))
        {
          h_4 = ATgetArgument(g_4, 0);
          k_4 = ATgetArgument(g_4, 1);
          r_3 :
          if(match_cons(h_4, sym_Nil_0))
            {
              s_3 :
              if(match_cons(k_4, sym_TCons_2))
                {
                  l_4 = ATgetArgument(k_4, 0);
                  m_4 = ATgetArgument(k_4, 1);
                  t_3 :
                  if(match_cons(m_4, sym_TCons_2))
                    {
                      n_4 = ATgetArgument(m_4, 0);
                      o_4 = ATgetArgument(m_4, 1);
                      u_3 :
                      if(match_cons(o_4, sym_TNil_0))
                        {
                          v_3 :
                          if(match_cons(l_4, sym_Nil_0))
                            {
                              ATerm t_5 = t;
                              if(PushChoice()==0)
                                {
                                  t = not_null(n_4);
                                  PopChoice();
                                }
                              else
                                {
                                  t = t_5;
                                  t = c_6(t);
                                }
                            }
                          else
                            t = c_6(t);
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
              if(match_cons(h_4, sym_Cons_2))
                {
                  i_4 = ATgetArgument(h_4, 0);
                  j_4 = ATgetArgument(h_4, 1);
                  w_3 :
                  if(match_cons(k_4, sym_TCons_2))
                    {
                      l_4 = ATgetArgument(k_4, 0);
                      m_4 = ATgetArgument(k_4, 1);
                      x_3 :
                      if(match_cons(m_4, sym_TCons_2))
                        {
                          n_4 = ATgetArgument(m_4, 0);
                          o_4 = ATgetArgument(m_4, 1);
                          y_3 :
                          if(match_cons(o_4, sym_TNil_0))
                            {
                              z_3 :
                              if(match_cons(l_4, sym_Nil_0))
                                {
                                  a_4 :
                                  if(match_cons(i_4, sym_R_2))
                                    {
                                      e_4 = ATgetArgument(i_4, 0);
                                      f_4 = ATgetArgument(i_4, 1);
                                      {
                                        ATerm u_5 = t;
                                        if(PushChoice()==0)
                                          {
                                            t = d_6(t);
                                            PopChoice();
                                          }
                                        else
                                          {
                                            t = u_5;
                                            {
                                              ATerm v_5 = t;
                                              if(PushChoice()==0)
                                                {
                                                  t = e_6(t);
                                                  PopChoice();
                                                }
                                              else
                                                {
                                                  t = v_5;
                                                  t = f_6(t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    t = f_6(t);
                                }
                              else
                                {
                                  b_4 :
                                  if(match_cons(i_4, sym_R_2))
                                    {
                                      e_4 = ATgetArgument(i_4, 0);
                                      f_4 = ATgetArgument(i_4, 1);
                                      {
                                        ATerm w_5 = t;
                                        if(PushChoice()==0)
                                          {
                                            t = e_6(t);
                                            PopChoice();
                                          }
                                        else
                                          {
                                            t = w_5;
                                            t = f_6(t);
                                          }
                                      }
                                    }
                                  else
                                    t = f_6(t);
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
    t = a_6(t);
  }
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL;
  n_6 = t;
  k_6 :
  if(match_cons(n_6, sym_TCons_2))
    {
      o_6 = ATgetArgument(n_6, 0);
      p_6 = ATgetArgument(n_6, 1);
      l_6 :
      if(match_cons(p_6, sym_TCons_2))
        {
          q_6 = ATgetArgument(p_6, 0);
          r_6 = ATgetArgument(p_6, 1);
          m_6 :
          if(match_cons(r_6, sym_TNil_0))
            {
              ATerm y_5 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(o_6), not_null(q_6));
                  PopChoice();
                }
              else
                {
                  t = y_5;
                  t = SSL_addr(not_null(o_6), not_null(q_6));
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
ATerm length_0 (ATerm t)
{
  ATerm z_5 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = (ATerm) ATmakeInt(0);
      PopChoice();
    }
  else
    {
      t = z_5;
      {
        ATerm w_6 = NULL;
        t = Tl_0(t);
        t = length_0(t);
        w_6 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_6), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = add_0(t);
      }
    }
  return(t);
}
ATerm string_length_0 (ATerm t)
{
  t = explode_string_0(t);
  t = length_0(t);
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm o_44 (ATerm))
{
  ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL;
  e_7 = t;
  d_7 :
  if(match_cons(e_7, sym_Cons_2))
    {
      f_7 = ATgetArgument(e_7, 0);
      g_7 = ATgetArgument(e_7, 1);
      {
        ATerm j_7 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = o_44(t);
        j_7 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_7), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_7), not_null(g_7)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm p_44 (ATerm))
{
  ATerm b_6 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = b_6;
      {
        ATerm n_0 (ATerm t)
        {
          ATerm g_6 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = g_6;
              t = Cons_2(t, _id, n_0);
              t = Sep_1(t, p_44);
            }
          return(t);
        }
        t = Cons_2(t, _id, n_0);
      }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm q_7 = NULL,x_7 = NULL,y_7 = NULL;
  q_7 = t;
  p_7 :
  if(match_cons(q_7, sym_TCons_2))
    {
      x_7 = ATgetArgument(q_7, 0);
      y_7 = ATgetArgument(q_7, 1);
      t = not_null(x_7);
    }
  else
    _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_43 (ATerm))
{
  ATerm e_8 (ATerm t)
  {
    ATerm h_6 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = h_6;
        t = Cons_2(t, c_43, e_8);
      }
    return(t);
  }
  t = e_8(t);
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm b_44 (ATerm))
{
  ATerm f_8 (ATerm t)
  {
    ATerm i_6 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, Nil_0);
        t = b_44(t);
        PopChoice();
      }
    else
      {
        t = i_6;
        t = Cons_2(t, _id, f_8);
      }
    return(t);
  }
  t = f_8(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL;
  o_8 = t;
  n_8 :
  if(match_cons(o_8, sym_Cons_2))
    {
      p_8 = ATgetArgument(o_8, 0);
      q_8 = ATgetArgument(o_8, 1);
      t = not_null(q_8);
    }
  else
    _fail(t);
  return(t);
}
ATerm filter_1 (ATerm t, ATerm i_37 (ATerm))
{
  ATerm w_8 (ATerm t)
  {
    ATerm j_6 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = j_6;
        {
          ATerm s_6 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, i_37, w_8);
              PopChoice();
            }
          else
            {
              t = s_6;
              t = Tl_0(t);
              t = w_8(t);
            }
        }
      }
    return(t);
  }
  t = w_8(t);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_43 (ATerm))
{
  ATerm x_8 (ATerm t)
  {
    ATerm t_6 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, x_8);
        PopChoice();
      }
    else
      {
        t = t_6;
        t = Nil_0(t);
        t = r_43(t);
      }
    return(t);
  }
  t = x_8(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm u_6 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = u_6;
      {
        ATerm a_9 = NULL,d_9 = NULL,i_9 = NULL;
        a_9 = t;
        z_8 :
        if(match_cons(a_9, sym_Cons_2))
          {
            d_9 = ATgetArgument(a_9, 0);
            i_9 = ATgetArgument(a_9, 1);
            t = not_null(d_9);
            {
              ATerm o_0 (ATerm t)
              {
                t = not_null(i_9);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, o_0);
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
  ATerm p_9 = NULL;
  p_9 = t;
  t = SSL_explode_string(not_null(p_9));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm u_9 = NULL;
  u_9 = t;
  t = SSL_implode_string(not_null(u_9));
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL;
  b_10 = t;
  y_9 :
  if(match_cons(b_10, sym_TCons_2))
    {
      c_10 = ATgetArgument(b_10, 0);
      d_10 = ATgetArgument(b_10, 1);
      z_9 :
      if(match_cons(d_10, sym_TCons_2))
        {
          e_10 = ATgetArgument(d_10, 0);
          f_10 = ATgetArgument(d_10, 1);
          a_10 :
          if(match_cons(f_10, sym_TNil_0))
            {
              ATerm v_6;
              v_6 = t;
              {
                ATerm x_6 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(c_10), not_null(e_10));
                    PopChoice();
                  }
                else
                  {
                    t = x_6;
                    t = SSL_gtr(not_null(c_10), not_null(e_10));
                  }
              }
              t = v_6;
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
  ATerm r_10 = NULL;
  ATerm y_6 = t;
  if(PushChoice()==0)
    {
      ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL;
      s_10 = t;
      m_10 :
      if(match_cons(s_10, sym_TCons_2))
        {
          t_10 = ATgetArgument(s_10, 0);
          u_10 = ATgetArgument(s_10, 1);
          n_10 :
          if(match_cons(u_10, sym_TCons_2))
            {
              v_10 = ATgetArgument(u_10, 0);
              w_10 = ATgetArgument(u_10, 1);
              o_10 :
              if(match_cons(w_10, sym_TNil_0))
                {
                  if(r_10 != NULL && r_10 != t_10)
                    _fail(t_10);
                  else
                    r_10 = t_10;
                  if(r_10 != NULL && r_10 != v_10)
                    _fail(v_10);
                  else
                    r_10 = v_10;
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
      t = y_6;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm k_49 (ATerm), ATerm l_49 (ATerm))
{
  ATerm y_10 (ATerm t)
  {
    ATerm z_6 = t;
    if(PushChoice()==0)
      {
        t = k_49(t);
        PopChoice();
      }
    else
      {
        t = z_6;
        t = l_49(t);
        t = y_10(t);
      }
    return(t);
  }
  t = y_10(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm n_49 (ATerm), ATerm o_49 (ATerm), ATerm p_49 (ATerm))
{
  t = n_49(t);
  t = while_not_2(t, o_49, p_49);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
    t_11 = t;
    a_11 :
    if(match_cons(t_11, sym_TCons_2))
      {
        u_11 = ATgetArgument(t_11, 0);
        v_11 = ATgetArgument(t_11, 1);
        b_11 :
        if(match_cons(v_11, sym_TCons_2))
          {
            w_11 = ATgetArgument(v_11, 0);
            x_11 = ATgetArgument(v_11, 1);
            c_11 :
            if(match_cons(x_11, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_11), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_11), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm q_0 (ATerm t)
  {
    ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL;
    a_12 = t;
    e_11 :
    if(match_cons(a_12, sym_TCons_2))
      {
        b_12 = ATgetArgument(a_12, 0);
        c_12 = ATgetArgument(a_12, 1);
        f_11 :
        if(match_int(b_12, 0))
          {
            g_11 :
            if(match_cons(c_12, sym_TCons_2))
              {
                d_12 = ATgetArgument(c_12, 0);
                e_12 = ATgetArgument(c_12, 1);
                h_11 :
                if(match_cons(e_12, sym_TCons_2))
                  {
                    f_12 = ATgetArgument(e_12, 0);
                    g_12 = ATgetArgument(e_12, 1);
                    i_11 :
                    if(match_cons(g_12, sym_TNil_0))
                      t = not_null(f_12);
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
  ATerm r_0 (ATerm t)
  {
    ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
    j_12 = t;
    n_11 :
    if(match_cons(j_12, sym_TCons_2))
      {
        k_12 = ATgetArgument(j_12, 0);
        l_12 = ATgetArgument(j_12, 1);
        o_11 :
        if(match_cons(l_12, sym_TCons_2))
          {
            m_12 = ATgetArgument(l_12, 0);
            n_12 = ATgetArgument(l_12, 1);
            q_11 :
            if(match_cons(n_12, sym_TCons_2))
              {
                o_12 = ATgetArgument(n_12, 0);
                p_12 = ATgetArgument(n_12, 1);
                r_11 :
                if(match_cons(p_12, sym_TNil_0))
                  {
                    ATerm w_12 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_12), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = geq_0(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_12), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = subt_0(t);
                    w_12 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_12), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_12), not_null(o_12)), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  t = for_3(t, p_0, q_0, r_0);
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
  ATerm d_13 = NULL;
  d_13 = t;
  c_13 :
  if(!(match_cons(d_13, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0 (ATerm t)
{
  ATerm g_13 = NULL,i_13 = NULL;
  ATerm a_7 = t;
  if(PushChoice()==0)
    {
      ATerm s_0 (ATerm t)
      {
        ATerm t_0 (ATerm t)
        {
          ATerm h_13 = NULL;
          h_13 = t;
          if(g_13 != NULL && g_13 != h_13)
            _fail(h_13);
          else
            g_13 = h_13;
          return(t);
        }
        t = SOpt_2(t, IS_0, t_0);
        return(t);
      }
      t = fetch_1(t, s_0);
      t = not_null(g_13);
      t = string_to_int_0(t);
      PopChoice();
    }
  else
    {
      t = a_7;
      t = (ATerm) ATmakeInt(0);
    }
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_13), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(32), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = copy_char_0(t);
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm n_13 = NULL;
  n_13 = t;
  m_13 :
  if(!(match_cons(n_13, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0 (ATerm t)
{
  ATerm r_13 = NULL,t_13 = NULL;
  ATerm v_13 = NULL;
  ATerm b_7 = t;
  if(PushChoice()==0)
    {
      ATerm u_0 (ATerm t)
      {
        ATerm v_0 (ATerm t)
        {
          ATerm s_13 = NULL;
          s_13 = t;
          if(r_13 != NULL && r_13 != s_13)
            _fail(s_13);
          else
            r_13 = s_13;
          return(t);
        }
        t = SOpt_2(t, VS_0, v_0);
        return(t);
      }
      t = fetch_1(t, u_0);
      t = not_null(r_13);
      t = string_to_int_0(t);
      PopChoice();
    }
  else
    {
      t = b_7;
      t = (ATerm) ATmakeInt(0);
    }
  t_13 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_13), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = add_0(t);
  v_13 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_13), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(10), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = copy_char_0(t);
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL;
  e_14 = t;
  b_14 :
  if(match_cons(e_14, sym_TCons_2))
    {
      f_14 = ATgetArgument(e_14, 0);
      g_14 = ATgetArgument(e_14, 1);
      c_14 :
      if(match_cons(g_14, sym_TCons_2))
        {
          h_14 = ATgetArgument(g_14, 0);
          i_14 = ATgetArgument(g_14, 1);
          d_14 :
          if(match_cons(i_14, sym_TNil_0))
            {
              ATerm c_7 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(f_14), not_null(h_14));
                  PopChoice();
                }
              else
                {
                  t = c_7;
                  t = SSL_subtr(not_null(f_14), not_null(h_14));
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
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL;
  p_14 = t;
  n_14 :
  if(match_cons(p_14, sym_Pair_2))
    {
      q_14 = ATgetArgument(p_14, 0);
      r_14 = ATgetArgument(p_14, 1);
      o_14 :
      if(match_cons(q_14, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Pair_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(r_14));
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_T_2 (ATerm t, ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL;
  b_15 = t;
  z_14 :
  if(match_cons(b_15, sym_Pair_2))
    {
      c_15 = ATgetArgument(b_15, 0);
      f_15 = ATgetArgument(b_15, 1);
      a_15 :
      if(match_cons(c_15, sym_Cons_2))
        {
          d_15 = ATgetArgument(c_15, 0);
          e_15 = ATgetArgument(c_15, 1);
          {
            ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL;
            t = (ATerm) ATmakeAppl(sym_Pair_2, not_null(d_15), not_null(f_15));
            t = d_0(t);
            j_15 = t;
            y_14 :
            if(match_cons(j_15, sym_Pair_2))
              {
                k_15 = ATgetArgument(j_15, 0);
                l_15 = ATgetArgument(j_15, 1);
                {
                  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Pair_2, not_null(e_15), not_null(l_15));
                  t = g_0(t);
                  o_15 = t;
                  x_14 :
                  if(match_cons(o_15, sym_Pair_2))
                    {
                      p_15 = ATgetArgument(o_15, 0);
                      q_15 = ATgetArgument(o_15, 1);
                      t = (ATerm) ATmakeAppl(sym_Pair_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_15), not_null(p_15)), not_null(q_15));
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
ATerm thread_map_1 (ATerm t, ATerm x_38 (ATerm))
{
  ATerm w_15 (ATerm t)
  {
    ATerm h_7 = t;
    if(PushChoice()==0)
      {
        t = Cons_T_2(t, x_38, w_15);
        PopChoice();
      }
    else
      {
        t = h_7;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = w_15(t);
  return(t);
}
ATerm H_2 (ATerm t, ATerm b_28 (ATerm), ATerm c_28 (ATerm))
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL;
  b_16 = t;
  a_16 :
  if(match_cons(b_16, sym_H_2))
    {
      c_16 = ATgetArgument(b_16, 0);
      d_16 = ATgetArgument(b_16, 1);
      {
        ATerm i_16 = NULL;
        t = not_null(c_16);
        {
          ATerm k_16 = NULL;
          t = b_28(t);
          i_16 = t;
          t = not_null(d_16);
          t = c_28(t);
          k_16 = t;
          t = (ATerm) ATmakeAppl(sym_H_2, not_null(i_16), not_null(k_16));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm q_16 = NULL;
  q_16 = t;
  t = SSL_string_to_int(not_null(q_16));
  return(t);
}
ATerm HS_0 (ATerm t)
{
  ATerm v_16 = NULL;
  v_16 = t;
  u_16 :
  if(!(match_cons(v_16, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm x_27 (ATerm), ATerm y_27 (ATerm))
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
  a_17 = t;
  z_16 :
  if(match_cons(a_17, sym_SOpt_2))
    {
      b_17 = ATgetArgument(a_17, 0);
      c_17 = ATgetArgument(a_17, 1);
      {
        ATerm f_17 = NULL;
        t = not_null(b_17);
        {
          ATerm h_17 = NULL;
          t = x_27(t);
          f_17 = t;
          t = not_null(c_17);
          t = y_27(t);
          h_17 = t;
          t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(f_17), not_null(h_17));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Hspace_0 (ATerm t)
{
  ATerm o_17 = NULL,q_17 = NULL;
  ATerm i_7 = t;
  if(PushChoice()==0)
    {
      ATerm w_0 (ATerm t)
      {
        ATerm x_0 (ATerm t)
        {
          ATerm p_17 = NULL;
          p_17 = t;
          if(o_17 != NULL && o_17 != p_17)
            _fail(p_17);
          else
            o_17 = p_17;
          return(t);
        }
        t = SOpt_2(t, HS_0, x_0);
        return(t);
      }
      t = fetch_1(t, w_0);
      t = not_null(o_17);
      t = string_to_int_0(t);
      PopChoice();
    }
  else
    {
      t = i_7;
      t = (ATerm) ATmakeInt(1);
    }
  q_17 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_17), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(32), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = copy_char_0(t);
  return(t);
}
ATerm Abox_2_text_0 (ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL;
  x_20 = t;
  p_19 :
  if(match_cons(x_20, sym_TCons_2))
    {
      y_20 = ATgetArgument(x_20, 0);
      z_20 = ATgetArgument(x_20, 1);
      q_19 :
      if(match_cons(y_20, sym_H_2))
        {
          v_20 = ATgetArgument(y_20, 0);
          w_20 = ATgetArgument(y_20, 1);
          r_19 :
          if(match_cons(z_20, sym_TCons_2))
            {
              a_21 = ATgetArgument(z_20, 0);
              b_21 = ATgetArgument(z_20, 1);
              s_19 :
              if(match_cons(b_21, sym_TNil_0))
                {
                  ATerm f_21 = NULL;
                  t = not_null(v_20);
                  {
                    ATerm h_21 = NULL;
                    t = Hspace_0(t);
                    f_21 = t;
                    {
                      ATerm j_21 = NULL;
                      t = string_length_0(t);
                      h_21 = t;
                      t = not_null(w_20);
                      {
                        ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL;
                        ATerm y_0 (ATerm t)
                        {
                          ATerm k_7 = t;
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
                                  t = H_2(t, Nil_0, Nil_0);
                                }
                              PopChoice();
                              _fail(t);
                            }
                          else
                            t = k_7;
                          return(t);
                        }
                        t = filter_1(t, y_0);
                        j_21 = t;
                        t = (ATerm) ATmakeAppl(sym_Pair_2, not_null(j_21), not_null(a_21));
                        {
                          ATerm z_0 (ATerm t)
                          {
                            ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL;
                            l_21 = t;
                            v_18 :
                            if(match_cons(l_21, sym_Pair_2))
                              {
                                m_21 = ATgetArgument(l_21, 0);
                                n_21 = ATgetArgument(l_21, 1);
                                {
                                  ATerm q_21 = NULL,r_21 = NULL,x_21 = NULL;
                                  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = Abox_2_text_0(t);
                                  s_21 = t;
                                  r_18 :
                                  if(match_cons(s_21, sym_TCons_2))
                                    {
                                      t_21 = ATgetArgument(s_21, 0);
                                      u_21 = ATgetArgument(s_21, 1);
                                      s_18 :
                                      if(match_cons(u_21, sym_TCons_2))
                                        {
                                          v_21 = ATgetArgument(u_21, 0);
                                          w_21 = ATgetArgument(u_21, 1);
                                          t_18 :
                                          if(match_cons(w_21, sym_TNil_0))
                                            {
                                              if(q_21 != NULL && q_21 != t_21)
                                                _fail(t_21);
                                              else
                                                q_21 = t_21;
                                              if(r_21 != NULL && r_21 != v_21)
                                                _fail(v_21);
                                              else
                                                r_21 = v_21;
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = add_0(t);
                                  x_21 = t;
                                  t = (ATerm) ATmakeAppl(sym_Pair_2, not_null(q_21), not_null(x_21));
                                }
                              }
                            else
                              _fail(t);
                            return(t);
                          }
                          t = thread_map_1(t, z_0);
                          z_21 = t;
                          z_18 :
                          if(match_cons(z_21, sym_Pair_2))
                            {
                              a_22 = ATgetArgument(z_21, 0);
                              b_22 = ATgetArgument(z_21, 1);
                              {
                                ATerm e_22 = NULL;
                                t = not_null(a_22);
                                {
                                  ATerm a_1 (ATerm t)
                                  {
                                    t = not_null(f_21);
                                    return(t);
                                  }
                                  t = separate_by_1(t, a_1);
                                  e_22 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  {
                                    ATerm b_1 (ATerm t)
                                    {
                                      ATerm d_1 (ATerm t)
                                      {
                                        ATerm m_7 = t;
                                        if(PushChoice()==0)
                                          {
                                            t = Nil_0(t);
                                            PopChoice();
                                            _fail(t);
                                          }
                                        else
                                          t = m_7;
                                        return(t);
                                      }
                                      ATerm f_1 (ATerm t)
                                      {
                                        ATerm o_1 (ATerm t)
                                        {
                                          ATerm g_22 = NULL;
                                          g_22 = t;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                                          t = subt_0(t);
                                          return(t);
                                        }
                                        t = TCons_2(t, o_1, TNil_0);
                                        return(t);
                                      }
                                      t = TCons_2(t, d_1, f_1);
                                      return(t);
                                    }
                                    t = try_1(t, b_1);
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
          if(match_cons(y_20, sym_V_2))
            {
              v_20 = ATgetArgument(y_20, 0);
              w_20 = ATgetArgument(y_20, 1);
              t_19 :
              if(match_cons(z_20, sym_TCons_2))
                {
                  a_21 = ATgetArgument(z_20, 0);
                  b_21 = ATgetArgument(z_20, 1);
                  u_19 :
                  if(match_cons(b_21, sym_TNil_0))
                    {
                      ATerm l_22 = NULL;
                      t = not_null(v_20);
                      {
                        ATerm n_22 = NULL;
                        t = Vspace_0(t);
                        l_22 = t;
                        t = not_null(v_20);
                        {
                          ATerm p_22 = NULL;
                          t = Ispace_0(t);
                          n_22 = t;
                          {
                            ATerm r_22 = NULL;
                            t = string_length_0(t);
                            p_22 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_21), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(32), (ATerm) ATmakeAppl(sym_TNil_0)));
                            {
                              ATerm t_22 = NULL;
                              t = copy_char_0(t);
                              r_22 = t;
                              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_22), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_22), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_22), (ATerm) ATmakeAppl(sym_Nil_0))));
                              {
                                ATerm v_22 = NULL;
                                t = concat_strings_0(t);
                                t_22 = t;
                                t = not_null(w_20);
                                {
                                  ATerm p_1 (ATerm t)
                                  {
                                    ATerm n_7 = t;
                                    if(PushChoice()==0)
                                      {
                                        t = Nil_0(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      t = n_7;
                                    return(t);
                                  }
                                  t = filter_1(t, p_1);
                                  {
                                    ATerm o_7 = t;
                                    if(PushChoice()==0)
                                      {
                                        t = Nil_0(t);
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        PopChoice();
                                      }
                                    else
                                      {
                                        t = o_7;
                                        {
                                          ATerm q_1 (ATerm t)
                                          {
                                            ATerm w_22 = NULL;
                                            w_22 = t;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            t = Abox_2_text_0(t);
                                            return(t);
                                          }
                                          ATerm z_1 (ATerm t)
                                          {
                                            ATerm a_2 (ATerm t)
                                            {
                                              ATerm y_22 = NULL;
                                              ATerm a_23 = NULL;
                                              y_22 = t;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              t = add_0(t);
                                              a_23 = t;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_23), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              t = Abox_2_text_0(t);
                                              return(t);
                                            }
                                            t = map_1(t, a_2);
                                            return(t);
                                          }
                                          t = Cons_2(t, q_1, z_1);
                                          {
                                            ATerm b_2 (ATerm t)
                                            {
                                              ATerm c_2 (ATerm t)
                                              {
                                                ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL;
                                                c_23 = t;
                                                j_19 :
                                                if(match_cons(c_23, sym_TCons_2))
                                                  {
                                                    d_23 = ATgetArgument(c_23, 0);
                                                    e_23 = ATgetArgument(c_23, 1);
                                                    k_19 :
                                                    if(match_cons(e_23, sym_TCons_2))
                                                      {
                                                        f_23 = ATgetArgument(e_23, 0);
                                                        g_23 = ATgetArgument(e_23, 1);
                                                        l_19 :
                                                        if(match_cons(g_23, sym_TNil_0))
                                                          {
                                                            if(v_22 != NULL && v_22 != f_23)
                                                              _fail(f_23);
                                                            else
                                                              v_22 = f_23;
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
                                              t = Cons_2(t, c_2, Nil_0);
                                              return(t);
                                            }
                                            t = at_last_1(t, b_2);
                                            t = map_1(t, Fst_0);
                                            {
                                              ATerm d_2 (ATerm t)
                                              {
                                                t = not_null(t_22);
                                                return(t);
                                              }
                                              t = separate_by_1(t, d_2);
                                              {
                                                ATerm e_2 (ATerm t)
                                                {
                                                  t = not_null(v_22);
                                                  return(t);
                                                }
                                                t = split_2(t, _id, e_2);
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
              if(match_cons(y_20, sym_S_1))
                {
                  v_20 = ATgetArgument(y_20, 0);
                  v_19 :
                  if(match_cons(z_20, sym_TCons_2))
                    {
                      a_21 = ATgetArgument(z_20, 0);
                      b_21 = ATgetArgument(z_20, 1);
                      w_19 :
                      if(match_cons(b_21, sym_TNil_0))
                        {
                          ATerm j_23 = NULL;
                          t = not_null(v_20);
                          {
                            ATerm l_23 = NULL;
                            t = string_length_0(t);
                            j_23 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_23), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = add_0(t);
                            l_23 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_23), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                  if(match_cons(y_20, sym_C_2))
                    {
                      v_20 = ATgetArgument(y_20, 0);
                      w_20 = ATgetArgument(y_20, 1);
                      x_19 :
                      if(match_cons(w_20, sym_Cons_2))
                        {
                          r_20 = ATgetArgument(w_20, 0);
                          t_20 = ATgetArgument(w_20, 1);
                          y_19 :
                          if(match_cons(r_20, sym_S_1))
                            {
                              s_20 = ATgetArgument(r_20, 0);
                              z_19 :
                              if(match_cons(t_20, sym_Nil_0))
                                {
                                  a_20 :
                                  if(match_cons(z_20, sym_TCons_2))
                                    {
                                      a_21 = ATgetArgument(z_20, 0);
                                      b_21 = ATgetArgument(z_20, 1);
                                      b_20 :
                                      if(match_cons(b_21, sym_TNil_0))
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_21), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                      if(match_cons(y_20, sym_FBOX_2))
                        {
                          v_20 = ATgetArgument(y_20, 0);
                          w_20 = ATgetArgument(y_20, 1);
                          c_20 :
                          if(match_cons(z_20, sym_TCons_2))
                            {
                              a_21 = ATgetArgument(z_20, 0);
                              b_21 = ATgetArgument(z_20, 1);
                              d_20 :
                              if(match_cons(b_21, sym_TNil_0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_21), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                          if(match_cons(y_20, sym_HV_2))
                            {
                              v_20 = ATgetArgument(y_20, 0);
                              w_20 = ATgetArgument(y_20, 1);
                              e_20 :
                              if(match_cons(z_20, sym_TCons_2))
                                {
                                  a_21 = ATgetArgument(z_20, 0);
                                  b_21 = ATgetArgument(z_20, 1);
                                  f_20 :
                                  if(match_cons(b_21, sym_TNil_0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_H_2, not_null(v_20), not_null(w_20)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_21), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                              if(match_cons(y_20, sym_R_2))
                                {
                                  v_20 = ATgetArgument(y_20, 0);
                                  w_20 = ATgetArgument(y_20, 1);
                                  g_20 :
                                  if(match_cons(z_20, sym_TCons_2))
                                    {
                                      a_21 = ATgetArgument(z_20, 0);
                                      b_21 = ATgetArgument(z_20, 1);
                                      h_20 :
                                      if(match_cons(b_21, sym_TNil_0))
                                        {
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_H_2, not_null(v_20), not_null(w_20)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_21), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                                  if(match_cons(y_20, sym_A_3))
                                    {
                                      v_20 = ATgetArgument(y_20, 0);
                                      w_20 = ATgetArgument(y_20, 1);
                                      u_20 = ATgetArgument(y_20, 2);
                                      i_20 :
                                      if(match_cons(z_20, sym_TCons_2))
                                        {
                                          a_21 = ATgetArgument(z_20, 0);
                                          b_21 = ATgetArgument(z_20, 1);
                                          j_20 :
                                          if(match_cons(b_21, sym_TNil_0))
                                            {
                                              ATerm d_24 = NULL;
                                              t = not_null(u_20);
                                              t = map_to_r_box_0(t);
                                              d_24 = t;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_V_2, not_null(w_20), not_null(d_24)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_21), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                                      if(match_cons(y_20, sym_ALT_2))
                                        {
                                          v_20 = ATgetArgument(y_20, 0);
                                          w_20 = ATgetArgument(y_20, 1);
                                          k_20 :
                                          if(match_cons(z_20, sym_TCons_2))
                                            {
                                              a_21 = ATgetArgument(z_20, 0);
                                              b_21 = ATgetArgument(z_20, 1);
                                              l_20 :
                                              if(match_cons(b_21, sym_TNil_0))
                                                {
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_21), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                                          if(match_cons(y_20, sym_Cons_2))
                                            {
                                              v_20 = ATgetArgument(y_20, 0);
                                              w_20 = ATgetArgument(y_20, 1);
                                              m_20 :
                                              if(match_cons(w_20, sym_Nil_0))
                                                {
                                                  n_20 :
                                                  if(match_cons(z_20, sym_TCons_2))
                                                    {
                                                      a_21 = ATgetArgument(z_20, 0);
                                                      b_21 = ATgetArgument(z_20, 1);
                                                      o_20 :
                                                      if(match_cons(b_21, sym_TNil_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_21), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                                              if(match_cons(y_20, sym_Nil_0))
                                                {
                                                  p_20 :
                                                  if(match_cons(z_20, sym_TCons_2))
                                                    {
                                                      a_21 = ATgetArgument(z_20, 0);
                                                      b_21 = ATgetArgument(z_20, 1);
                                                      q_20 :
                                                      if(match_cons(b_21, sym_TNil_0))
                                                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_21), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm g_2 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  t = split_2(t, _id, g_2);
  t = Abox_2_text_0(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm v_29 (ATerm), ATerm w_29 (ATerm))
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
  p_28 = t;
  o_28 :
  if(match_cons(p_28, sym_TCons_2))
    {
      q_28 = ATgetArgument(p_28, 0);
      r_28 = ATgetArgument(p_28, 1);
      {
        ATerm u_28 = NULL;
        t = not_null(q_28);
        {
          ATerm w_28 = NULL;
          t = v_29(t);
          u_28 = t;
          t = not_null(r_28);
          t = w_29(t);
          w_28 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_28), not_null(w_28));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm c_29 = NULL;
  c_29 = t;
  t = SSL_ReadFromFile(not_null(c_29));
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm i_29 = NULL;
  ATerm r_7;
  r_7 = t;
  {
    ATerm s_7 = t;
    if(PushChoice()==0)
      {
        ATerm i_2 (ATerm t)
        {
          ATerm j_29 = NULL,k_29 = NULL;
          j_29 = t;
          g_29 :
          if(match_cons(j_29, sym_Input_1))
            {
              k_29 = ATgetArgument(j_29, 0);
              if(i_29 != NULL && i_29 != k_29)
                _fail(k_29);
              else
                i_29 = k_29;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, i_2);
        PopChoice();
      }
    else
      {
        t = s_7;
        {
          ATerm l_29 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          l_29 = t;
          if(i_29 != NULL && i_29 != l_29)
            _fail(l_29);
          else
            i_29 = l_29;
        }
      }
  }
  t = r_7;
  {
    ATerm k_2 (ATerm t)
    {
      t = not_null(i_29);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, k_2);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm x_34 (ATerm))
{
  ATerm t_7;
  t_7 = t;
  {
    ATerm l_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm m_2 (ATerm t)
    {
      ATerm q_29 = NULL;
      ATerm s_29 = NULL;
      q_29 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = x_34(t);
      s_29 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_29), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_29), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, l_2, m_2);
    t = printnl_0(t);
  }
  t = t_7;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm e_35 (ATerm))
{
  ATerm u_7;
  u_7 = t;
  t = e_35(t);
  {
    ATerm n_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
      return(t);
    }
    t = debug_1(t, n_2);
  }
  t = u_7;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL;
  ATerm v_7 = t;
  if(PushChoice()==0)
    {
      ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL;
      h_30 = t;
      b_30 :
      if(match_cons(h_30, sym_TCons_2))
        {
          i_30 = ATgetArgument(h_30, 0);
          j_30 = ATgetArgument(h_30, 1);
          c_30 :
          if(match_cons(j_30, sym_TCons_2))
            {
              k_30 = ATgetArgument(j_30, 0);
              l_30 = ATgetArgument(j_30, 1);
              d_30 :
              if(match_cons(l_30, sym_TNil_0))
                {
                  if(g_30 != NULL && g_30 != i_30)
                    _fail(i_30);
                  else
                    g_30 = i_30;
                  if(f_30 != NULL && f_30 != k_30)
                    _fail(k_30);
                  else
                    f_30 = k_30;
                  t = SSL_open_file(not_null(g_30), not_null(f_30));
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
      t = v_7;
      {
        ATerm m_30 = NULL;
        ATerm o_2 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
          return(t);
        }
        t = obsolete_1(t, o_2);
        m_30 = t;
        if(g_30 != NULL && g_30 != m_30)
          _fail(m_30);
        else
          g_30 = m_30;
        t = SSL_open_file(not_null(g_30), (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue)));
      }
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm l_43 (ATerm))
{
  ATerm p_30 (ATerm t)
  {
    ATerm w_7 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, l_43, _id);
        PopChoice();
      }
    else
      {
        t = w_7;
        t = Cons_2(t, _id, p_30);
      }
    return(t);
  }
  t = p_30(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_33 (ATerm))
{
  t = fetch_1(t, r_33);
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm r_30 = NULL;
  r_30 = t;
  t = SSL_exit(not_null(r_30));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL;
  y_30 = t;
  v_30 :
  if(match_cons(y_30, sym_TCons_2))
    {
      z_30 = ATgetArgument(y_30, 0);
      a_31 = ATgetArgument(y_30, 1);
      w_30 :
      if(match_cons(a_31, sym_TCons_2))
        {
          b_31 = ATgetArgument(a_31, 0);
          c_31 = ATgetArgument(a_31, 1);
          x_30 :
          if(match_cons(c_31, sym_TNil_0))
            {
              ATerm z_7;
              z_7 = t;
              t = SSL_printnl(not_null(z_30), not_null(b_31));
              t = z_7;
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
ATerm usage_0 (ATerm t)
{
  ATerm i_31 = NULL;
  ATerm a_8;
  a_8 = t;
  {
    ATerm q_2 (ATerm t)
    {
      ATerm j_31 = NULL,k_31 = NULL;
      j_31 = t;
      h_31 :
      if(match_cons(j_31, sym_Program_1))
        {
          k_31 = ATgetArgument(j_31, 0);
          if(i_31 != NULL && i_31 != k_31)
            _fail(k_31);
          else
            i_31 = k_31;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, q_2);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_31), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-i abox] [-o html] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
  }
  t = a_8;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm n_31 = NULL;
  n_31 = t;
  m_31 :
  if(!(match_cons(n_31, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm r_27 (ATerm))
{
  ATerm r_31 = NULL,s_31 = NULL;
  r_31 = t;
  q_31 :
  if(match_cons(r_31, sym_Undefined_1))
    {
      s_31 = ATgetArgument(r_31, 0);
      {
        ATerm u_31 = NULL;
        t = not_null(s_31);
        t = r_27(t);
        u_31 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(u_31));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_31 = NULL;
  z_31 = t;
  y_31 :
  if(!(match_cons(z_31, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm m_34 (ATerm))
{
  ATerm r_2 (ATerm t)
  {
    ATerm b_8 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = b_8;
        {
          ATerm c_8 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = c_8;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, r_2);
  t = m_34(t);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm k_33 (ATerm), ATerm l_33 (ATerm))
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL;
  d_32 = t;
  c_32 :
  if(match_cons(d_32, sym_Cons_2))
    {
      e_32 = ATgetArgument(d_32, 0);
      f_32 = ATgetArgument(d_32, 1);
      {
        ATerm i_32 = NULL;
        t = not_null(e_32);
        t = k_33(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = l_33(t);
        i_32 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_32), not_null(f_32));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm m_33 (ATerm), ATerm n_33 (ATerm))
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL;
  q_32 = t;
  o_32 :
  if(match_cons(q_32, sym_Cons_2))
    {
      r_32 = ATgetArgument(q_32, 0);
      s_32 = ATgetArgument(q_32, 1);
      p_32 :
      if(match_cons(s_32, sym_Cons_2))
        {
          t_32 = ATgetArgument(s_32, 0);
          u_32 = ATgetArgument(s_32, 1);
          {
            ATerm y_32 = NULL;
            t = not_null(r_32);
            t = m_33(t);
            t = not_null(t_32);
            t = n_33(t);
            y_32 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_32), not_null(u_32));
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
  ATerm d_8 = t;
  if(PushChoice()==0)
    {
      ATerm v_2 (ATerm t)
      {
        ATerm d_34 = NULL;
        d_34 = t;
        c_33 :
        if(!(match_string(d_34, "-S")))
          _fail(t);
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, v_2, e_3);
      PopChoice();
    }
  else
    {
      t = d_8;
      {
        ATerm g_8 = t;
        if(PushChoice()==0)
          {
            ATerm f_3 (ATerm t)
            {
              ATerm e_34 = NULL;
              e_34 = t;
              d_33 :
              if(!(match_string(e_34, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm g_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, f_3, g_3);
            PopChoice();
          }
        else
          {
            t = g_8;
            {
              ATerm h_8 = t;
              if(PushChoice()==0)
                {
                  ATerm h_3 (ATerm t)
                  {
                    ATerm f_34 = NULL;
                    f_34 = t;
                    e_33 :
                    if(!(match_string(f_34, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm i_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, h_3, i_3);
                  PopChoice();
                }
              else
                {
                  t = h_8;
                  {
                    ATerm i_8 = t;
                    if(PushChoice()==0)
                      {
                        ATerm j_3 (ATerm t)
                        {
                          ATerm g_34 = NULL;
                          g_34 = t;
                          f_33 :
                          if(!(match_string(g_34, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm k_3 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, j_3, k_3);
                        PopChoice();
                      }
                    else
                      {
                        t = i_8;
                        {
                          ATerm j_8 = t;
                          if(PushChoice()==0)
                            {
                              ATerm l_3 (ATerm t)
                              {
                                ATerm h_34 = NULL;
                                h_34 = t;
                                g_33 :
                                if(!(match_string(h_34, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm m_3 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, l_3, m_3);
                              PopChoice();
                            }
                          else
                            {
                              t = j_8;
                              {
                                ATerm k_8 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm n_3 (ATerm t)
                                    {
                                      ATerm i_34 = NULL;
                                      i_34 = t;
                                      h_33 :
                                      if(!(match_string(i_34, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm o_3 (ATerm t)
                                    {
                                      ATerm j_34 = NULL;
                                      j_34 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(j_34));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, n_3, o_3);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = k_8;
                                    {
                                      ATerm l_8 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm p_3 (ATerm t)
                                          {
                                            ATerm l_34 = NULL;
                                            l_34 = t;
                                            p_33 :
                                            if(!(match_string(l_34, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm d_4 (ATerm t)
                                          {
                                            ATerm n_34 = NULL;
                                            n_34 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_34));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, p_3, d_4);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = l_8;
                                          {
                                            ATerm m_8 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm p_4 (ATerm t)
                                                {
                                                  ATerm p_34 = NULL;
                                                  p_34 = t;
                                                  s_33 :
                                                  if(!(match_string(p_34, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm q_4 (ATerm t)
                                                {
                                                  ATerm q_34 = NULL;
                                                  q_34 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(q_34));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, p_4, q_4);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = m_8;
                                                {
                                                  ATerm r_8 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm r_4 (ATerm t)
                                                      {
                                                        ATerm s_34 = NULL;
                                                        s_34 = t;
                                                        u_33 :
                                                        if(!(match_string(s_34, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm s_4 (ATerm t)
                                                      {
                                                        ATerm t_34 = NULL;
                                                        t_34 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(t_34));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, r_4, s_4);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = r_8;
                                                      {
                                                        ATerm s_8 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm t_4 (ATerm t)
                                                            {
                                                              ATerm v_34 = NULL;
                                                              v_34 = t;
                                                              w_33 :
                                                              if(!(match_string(v_34, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm u_4 (ATerm t)
                                                            {
                                                              ATerm w_34 = NULL;
                                                              w_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_34));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, t_4, u_4);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = s_8;
                                                            {
                                                              ATerm t_8 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm v_4 (ATerm t)
                                                                  {
                                                                    ATerm z_34 = NULL;
                                                                    z_34 = t;
                                                                    y_33 :
                                                                    if(!(match_string(z_34, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm w_4 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, v_4, w_4);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = t_8;
                                                                  {
                                                                    ATerm u_8 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm x_4 (ATerm t)
                                                                        {
                                                                          ATerm a_35 = NULL;
                                                                          a_35 = t;
                                                                          z_33 :
                                                                          if(!(match_string(a_35, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm y_4 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, x_4, y_4);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = u_8;
                                                                        {
                                                                          ATerm v_8 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm z_4 (ATerm t)
                                                                              {
                                                                                ATerm b_35 = NULL;
                                                                                b_35 = t;
                                                                                a_34 :
                                                                                if(!(match_string(b_35, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm a_5 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, z_4, a_5);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = v_8;
                                                                              {
                                                                                ATerm y_8 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm b_5 (ATerm t)
                                                                                    {
                                                                                      ATerm c_35 = NULL;
                                                                                      c_35 = t;
                                                                                      b_34 :
                                                                                      if(!(match_string(c_35, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm c_5 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, b_5, c_5);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = y_8;
                                                                                    {
                                                                                      ATerm d_5 (ATerm t)
                                                                                      {
                                                                                        ATerm d_35 = NULL;
                                                                                        d_35 = t;
                                                                                        c_34 :
                                                                                        if(!(match_string(d_35, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm e_5 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, d_5, e_5);
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
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
  m_35 = t;
  l_35 :
  if(match_cons(m_35, sym_Cons_2))
    {
      n_35 = ATgetArgument(m_35, 0);
      o_35 = ATgetArgument(m_35, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(n_35)), not_null(o_35));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm z_29 (ATerm), ATerm a_30 (ATerm))
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL;
  w_35 = t;
  v_35 :
  if(match_cons(w_35, sym_Cons_2))
    {
      x_35 = ATgetArgument(w_35, 0);
      y_35 = ATgetArgument(w_35, 1);
      {
        ATerm b_36 = NULL;
        t = not_null(x_35);
        {
          ATerm d_36 = NULL;
          t = z_29(t);
          b_36 = t;
          t = not_null(y_35);
          t = a_30(t);
          d_36 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_36), not_null(d_36));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm j_36 = NULL;
  j_36 = t;
  i_36 :
  if(!(match_cons(j_36, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_33 (ATerm))
{
  ATerm f_5 (ATerm t)
  {
    ATerm l_36 = NULL;
    l_36 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_36));
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    ATerm b_9 = t;
    if(PushChoice()==0)
      {
        ATerm c_9 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = c_9;
            t = i_33(t);
            t = Cons_2(t, _id, g_5);
          }
        PopChoice();
      }
    else
      {
        t = b_9;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, f_5, g_5);
  return(t);
}
ATerm Abox2text_0 (ATerm t)
{
  ATerm x_36 = NULL;
  ATerm z_36 = NULL,a_37 = NULL;
  t = parse_options_1(t, io_options_0);
  x_36 = t;
  {
    ATerm e_9 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, usage_0);
        PopChoice();
      }
    else
      {
        t = e_9;
        {
          ATerm f_9 = t;
          if(PushChoice()==0)
            {
              ATerm g_9;
              g_9 = t;
              {
                ATerm h_9 = t;
                if(PushChoice()==0)
                  {
                    ATerm i_5 (ATerm t)
                    {
                      ATerm b_37 = NULL,c_37 = NULL;
                      b_37 = t;
                      t_36 :
                      if(match_cons(b_37, sym_Output_1))
                        {
                          c_37 = ATgetArgument(b_37, 0);
                          if(a_37 != NULL && a_37 != c_37)
                            _fail(c_37);
                          else
                            a_37 = c_37;
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = option_defined_1(t, i_5);
                    t = not_null(a_37);
                    t = open_file_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = h_9;
                    {
                      ATerm d_37 = NULL;
                      t = (ATerm) ATmakeAppl(sym_stdout_0);
                      d_37 = t;
                      if(a_37 != NULL && a_37 != d_37)
                        _fail(d_37);
                      else
                        a_37 = d_37;
                    }
                  }
              }
              t = g_9;
              t = input_file_0(t);
              {
                ATerm j_5 (ATerm t)
                {
                  ATerm k_5 (ATerm t)
                  {
                    ATerm e_37 = NULL;
                    t = abox2text_0(t);
                    e_37 = t;
                    if(z_36 != NULL && z_36 != e_37)
                      _fail(e_37);
                    else
                      z_36 = e_37;
                    return(t);
                  }
                  t = TCons_2(t, k_5, TNil_0);
                  return(t);
                }
                t = TCons_2(t, _id, j_5);
                t = not_null(z_36);
                {
                  ATerm l_5 (ATerm t)
                  {
                    ATerm m_5 (ATerm t)
                    {
                      t = is_string_0(t);
                      {
                        ATerm j_9;
                        j_9 = t;
                        {
                          ATerm n_5 (ATerm t)
                          {
                            t = not_null(a_37);
                            return(t);
                          }
                          ATerm o_5 (ATerm t)
                          {
                            ATerm f_37 = NULL;
                            f_37 = t;
                            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_37), (ATerm) ATmakeAppl(sym_Nil_0));
                            return(t);
                          }
                          t = split_2(t, n_5, o_5);
                          t = print_0(t);
                        }
                        t = j_9;
                      }
                      return(t);
                    }
                    t = try_1(t, m_5);
                    return(t);
                  }
                  t = topdown_1(t, l_5);
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_37), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = print_0(t);
                  t = report_success_0(t);
                }
              }
              PopChoice();
            }
          else
            {
              t = f_9;
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
