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
Symbol sym_BOXENV_2;
Symbol sym_HBOX_2;
Symbol sym_VBOX_3;
Symbol sym_HVBOX_4;
Symbol sym_ABOX_2;
Symbol sym_ALTBOX_2;
Symbol sym_CBOX_1;
Symbol sym_LBOX_2;
Symbol sym_LBLBOX_2;
Symbol sym_REFBOX_2;
Symbol sym_C_0;
Symbol sym_R_0;
Symbol sym_L_0;
Symbol sym_EOR_0;
Symbol sym_CSEP_0;
Symbol sym_BOXFONT_2;
Symbol sym_BOXCOLOR_1;
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
Symbol sym_LatexTable_1;
Symbol sym_Width_1;
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
  sym_BOXENV_2 = ATmakeSymbol("BOXENV", 2, ATfalse);
  ATprotectSymbol(sym_BOXENV_2);
  sym_HBOX_2 = ATmakeSymbol("HBOX", 2, ATfalse);
  ATprotectSymbol(sym_HBOX_2);
  sym_VBOX_3 = ATmakeSymbol("VBOX", 3, ATfalse);
  ATprotectSymbol(sym_VBOX_3);
  sym_HVBOX_4 = ATmakeSymbol("HVBOX", 4, ATfalse);
  ATprotectSymbol(sym_HVBOX_4);
  sym_ABOX_2 = ATmakeSymbol("ABOX", 2, ATfalse);
  ATprotectSymbol(sym_ABOX_2);
  sym_ALTBOX_2 = ATmakeSymbol("ALTBOX", 2, ATfalse);
  ATprotectSymbol(sym_ALTBOX_2);
  sym_CBOX_1 = ATmakeSymbol("CBOX", 1, ATfalse);
  ATprotectSymbol(sym_CBOX_1);
  sym_LBOX_2 = ATmakeSymbol("LBOX", 2, ATfalse);
  ATprotectSymbol(sym_LBOX_2);
  sym_LBLBOX_2 = ATmakeSymbol("LBLBOX", 2, ATfalse);
  ATprotectSymbol(sym_LBLBOX_2);
  sym_REFBOX_2 = ATmakeSymbol("REFBOX", 2, ATfalse);
  ATprotectSymbol(sym_REFBOX_2);
  sym_C_0 = ATmakeSymbol("C", 0, ATfalse);
  ATprotectSymbol(sym_C_0);
  sym_R_0 = ATmakeSymbol("R", 0, ATfalse);
  ATprotectSymbol(sym_R_0);
  sym_L_0 = ATmakeSymbol("L", 0, ATfalse);
  ATprotectSymbol(sym_L_0);
  sym_EOR_0 = ATmakeSymbol("EOR", 0, ATfalse);
  ATprotectSymbol(sym_EOR_0);
  sym_CSEP_0 = ATmakeSymbol("CSEP", 0, ATfalse);
  ATprotectSymbol(sym_CSEP_0);
  sym_BOXFONT_2 = ATmakeSymbol("BOXFONT", 2, ATfalse);
  ATprotectSymbol(sym_BOXFONT_2);
  sym_BOXCOLOR_1 = ATmakeSymbol("BOXCOLOR", 1, ATfalse);
  ATprotectSymbol(sym_BOXCOLOR_1);
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
  sym_LatexTable_1 = ATmakeSymbol("LatexTable", 1, ATfalse);
  ATprotectSymbol(sym_LatexTable_1);
  sym_Width_1 = ATmakeSymbol("Width", 1, ATfalse);
  ATprotectSymbol(sym_Width_1);
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
ATerm split_2 (ATerm, ATerm a_40 (ATerm), ATerm b_40 (ATerm));
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm a_53 (ATerm));
ATerm topdown_1 (ATerm, ATerm c_49 (ATerm));
ATerm abox2latex_0 (ATerm);
ATerm CSEP_0 (ATerm);
ATerm EOR_0 (ATerm);
ATerm L_0 (ATerm);
ATerm R_0 (ATerm);
ATerm C_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm Latex2text_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm e_49 (ATerm));
ATerm latex2text_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm y_47 (ATerm));
ATerm separate_by_1 (ATerm, ATerm z_47 (ATerm));
ATerm C_2 (ATerm, ATerm o_32 (ATerm), ATerm p_32 (ATerm));
ATerm table_row_0 (ATerm);
ATerm MkRows_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm l_47 (ATerm));
ATerm concat_0 (ATerm);
ATerm table_def_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm b_47 (ATerm));
ATerm conc_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm i_33 (ATerm), ATerm j_33 (ATerm));
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm u_52 (ATerm), ATerm v_52 (ATerm));
ATerm for_3 (ATerm, ATerm x_52 (ATerm), ATerm y_52 (ATerm), ATerm z_52 (ATerm));
ATerm copy_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm Vspace_0 (ATerm);
ATerm R_2 (ATerm, ATerm x_31 (ATerm), ATerm y_31 (ATerm));
ATerm filter_1 (ATerm, ATerm s_40 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm i_31 (ATerm), ATerm j_31 (ATerm));
ATerm Hspace_0 (ATerm);
ATerm toh_0 (ATerm);
ATerm CL_0 (ATerm);
ATerm FFID_2 (ATerm, ATerm f_32 (ATerm), ATerm g_32 (ATerm));
ATerm SZ_0 (ATerm);
ATerm SH_0 (ATerm);
ATerm SE_0 (ATerm);
ATerm FM_0 (ATerm);
ATerm MATH_0 (ATerm);
ATerm NUM_0 (ATerm);
ATerm VAR_0 (ATerm);
ATerm KW_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm remove_trailing_1 (ATerm, ATerm p_53 (ATerm));
ATerm at_suffix_1 (ATerm, ATerm f_47 (ATerm));
ATerm LatexComment_0 (ATerm);
ATerm make_latex_comment_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm s_50 (ATerm));
ATerm replace_quotes_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm p_47 (ATerm));
ATerm table_get_0 (ATerm);
ATerm latex_string_0 (ATerm);
ATerm Abox_2_latex_0 (ATerm);
ATerm abox2latex_1 (ATerm, ATerm s_53 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_37 (ATerm));
ATerm Snd_0 (ATerm);
ATerm input_file_0 (ATerm);
ATerm table_put_0 (ATerm);
ATerm StoreEntries_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm map_1 (ATerm, ATerm m_46 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm d_52 (ATerm), ATerm e_52 (ATerm));
ATerm repeat_1 (ATerm, ATerm g_52 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm load_tables_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm v_46 (ATerm));
ATerm HdMember_1 (ATerm, ATerm v_42 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm o_41 (ATerm), ATerm p_41 (ATerm), ATerm q_41 (ATerm));
ATerm crush_3 (ATerm, ATerm f_43 (ATerm), ATerm g_43 (ATerm), ATerm h_43 (ATerm));
ATerm collect_1 (ATerm, ATerm o_43 (ATerm));
ATerm debug_1 (ATerm, ATerm h_38 (ATerm));
ATerm obsolete_1 (ATerm, ATerm o_38 (ATerm));
ATerm open_file_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm d_30 (ATerm));
ATerm Help_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm w_37 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm w_36 (ATerm), ATerm x_36 (ATerm));
ATerm Option_2 (ATerm, ATerm u_36 (ATerm), ATerm v_36 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm m_33 (ATerm), ATerm n_33 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_36 (ATerm));
ATerm Abox2latex_0 (ATerm);
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
  ATerm f_1 = NULL,g_1 = NULL;
  ATerm a_0 (ATerm t)
  {
    ATerm b_0 (ATerm t)
    {
      ATerm l_8 = t;
      if(PushChoice()==0)
        {
          ATerm e_0 (ATerm t)
          {
            ATerm h_1 = NULL;
            h_1 = t;
            c_0 :
            if(!(match_cons(h_1, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, e_0);
          PopChoice();
          _fail(t);
        }
      else
        t = l_8;
      return(t);
    }
    ATerm d_0 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, b_0, d_0);
    {
      ATerm f_0 (ATerm t)
      {
        ATerm h_0 (ATerm t)
        {
          ATerm i_1 = NULL,j_1 = NULL;
          i_1 = t;
          c_1 :
          if(match_cons(i_1, sym_Runtime_1))
            {
              j_1 = ATgetArgument(i_1, 0);
              if(g_1 != NULL && g_1 != j_1)
                _fail(j_1);
              else
                g_1 = j_1;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, h_0);
        return(t);
      }
      ATerm g_0 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, f_0, g_0);
      {
        ATerm i_0 (ATerm t)
        {
          ATerm k_0 (ATerm t)
          {
            ATerm k_1 = NULL,l_1 = NULL;
            k_1 = t;
            e_1 :
            if(match_cons(k_1, sym_Program_1))
              {
                l_1 = ATgetArgument(k_1, 0);
                if(f_1 != NULL && f_1 != l_1)
                  _fail(l_1);
                else
                  f_1 = l_1;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, k_0);
          return(t);
        }
        ATerm j_0 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, i_0, j_0);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_1), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_1), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL;
  s_1 = t;
  p_1 :
  if(match_cons(s_1, sym_TCons_2))
    {
      t_1 = ATgetArgument(s_1, 0);
      u_1 = ATgetArgument(s_1, 1);
      q_1 :
      if(match_cons(u_1, sym_TCons_2))
        {
          v_1 = ATgetArgument(u_1, 0);
          w_1 = ATgetArgument(u_1, 1);
          r_1 :
          if(match_cons(w_1, sym_TNil_0))
            {
              ATerm m_8;
              m_8 = t;
              t = SSL_print(not_null(t_1), not_null(v_1));
              t = m_8;
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
ATerm split_2 (ATerm t, ATerm a_40 (ATerm), ATerm b_40 (ATerm))
{
  ATerm d_2 = NULL;
  ATerm f_2 = NULL;
  d_2 = t;
  {
    ATerm h_2 = NULL;
    t = a_40(t);
    f_2 = t;
    t = not_null(d_2);
    t = b_40(t);
    h_2 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_2), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm n_2 = NULL;
  n_2 = t;
  t = SSL_is_string(not_null(n_2));
  return(t);
}
ATerm try_1 (ATerm t, ATerm a_53 (ATerm))
{
  ATerm r_8 = t;
  if(PushChoice()==0)
    {
      t = a_53(t);
      PopChoice();
    }
  else
    t = r_8;
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm c_49 (ATerm))
{
  ATerm q_2 (ATerm t)
  {
    t = c_49(t);
    t = _all(t, q_2);
    return(t);
  }
  t = q_2(t);
  return(t);
}
ATerm abox2latex_0 (ATerm t)
{
  ATerm t_2 = NULL;
  ATerm v_2 = NULL;
  t_2 = t;
  {
    ATerm l_0 (ATerm t)
    {
      t = try_1(t, Abox_2_latex_0);
      return(t);
    }
    t = topdown_1(t, l_0);
    v_2 = t;
    t = (ATerm) ATmakeAppl(sym_BOXENV_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(v_2));
    t = latex2text_0(t);
  }
  return(t);
}
ATerm CSEP_0 (ATerm t)
{
  ATerm a_3 = NULL;
  a_3 = t;
  z_2 :
  if(!(match_cons(a_3, sym_CSEP_0)))
    _fail(t);
  return(t);
}
ATerm EOR_0 (ATerm t)
{
  ATerm c_3 = NULL;
  c_3 = t;
  b_3 :
  if(!(match_cons(c_3, sym_EOR_0)))
    _fail(t);
  return(t);
}
ATerm L_0 (ATerm t)
{
  ATerm e_3 = NULL;
  e_3 = t;
  d_3 :
  if(!(match_cons(e_3, sym_L_0)))
    _fail(t);
  return(t);
}
ATerm R_0 (ATerm t)
{
  ATerm g_3 = NULL;
  g_3 = t;
  f_3 :
  if(!(match_cons(g_3, sym_R_0)))
    _fail(t);
  return(t);
}
ATerm C_0 (ATerm t)
{
  ATerm i_3 = NULL;
  i_3 = t;
  h_3 :
  if(!(match_cons(i_3, sym_C_0)))
    _fail(t);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm k_3 = NULL;
  k_3 = t;
  t = SSL_int_to_string(not_null(k_3));
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm o_3 = NULL;
  o_3 = t;
  t = SSL_is_int(not_null(o_3));
  return(t);
}
ATerm Latex2text_0 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL;
  ATerm s_8 = t;
  if(PushChoice()==0)
    {
      ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL;
      ATerm m_6 (ATerm t)
      {
        ATerm c_6 = NULL;
        if(r_5 != NULL && r_5 != z_5)
          _fail(z_5);
        else
          r_5 = z_5;
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = not_null(r_5);
        t = is_int_0(t);
        t = not_null(r_5);
        t = int_to_string_0(t);
        c_6 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
        return(t);
      }
      ATerm n_6 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm p_6 (ATerm t)
      {
        if(r_5 != NULL && r_5 != z_5)
          _fail(z_5);
        else
          r_5 = z_5;
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
        return(t);
      }
      ATerm v_6 (ATerm t)
      {
        if(s_5 != NULL && s_5 != z_5)
          _fail(z_5);
        else
          s_5 = z_5;
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Nil_0)))));
        return(t);
      }
      ATerm w_6 (ATerm t)
      {
        if(s_5 != NULL && s_5 != z_5)
          _fail(z_5);
        else
          s_5 = z_5;
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
        return(t);
      }
      ATerm x_6 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm y_6 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm z_6 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm a_7 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm b_7 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm c_7 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm d_7 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm e_7 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm f_7 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm g_7 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm h_7 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm i_7 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm j_7 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm k_7 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm l_7 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm m_7 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm n_7 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm o_7 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm p_7 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm q_7 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm r_7 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm s_7 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm t_7 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm u_7 (ATerm t)
      {
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm v_7 (ATerm t)
      {
        if(t_5 != NULL && t_5 != a_6)
          _fail(a_6);
        else
          t_5 = a_6;
        if(u_5 != NULL && u_5 != b_6)
          _fail(b_6);
        else
          u_5 = b_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
        return(t);
      }
      y_5 = t;
      e_5 :
      if(match_cons(y_5, sym_BOXENV_2))
        {
          z_5 = ATgetArgument(y_5, 0);
          b_6 = ATgetArgument(y_5, 1);
          f_5 :
          if(match_cons(z_5, sym_Nil_0))
            {
              if(o_5 != NULL && o_5 != b_6)
                _fail(b_6);
              else
                o_5 = b_6;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
            }
          else
            {
              if(match_cons(z_5, sym_Cons_2))
                {
                  a_6 = ATgetArgument(z_5, 0);
                  v_5 = ATgetArgument(z_5, 1);
                  g_5 :
                  if(match_cons(v_5, sym_Nil_0))
                    {
                      if(j_5 != NULL && j_5 != a_6)
                        _fail(a_6);
                      else
                        j_5 = a_6;
                      if(o_5 != NULL && o_5 != b_6)
                        _fail(b_6);
                      else
                        o_5 = b_6;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(y_5, sym_HBOX_2))
            {
              z_5 = ATgetArgument(y_5, 0);
              b_6 = ATgetArgument(y_5, 1);
              if(k_5 != NULL && k_5 != z_5)
                _fail(z_5);
              else
                k_5 = z_5;
              if(o_5 != NULL && o_5 != b_6)
                _fail(b_6);
              else
                o_5 = b_6;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
            }
          else
            {
              if(match_cons(y_5, sym_VBOX_3))
                {
                  z_5 = ATgetArgument(y_5, 0);
                  b_6 = ATgetArgument(y_5, 1);
                  w_5 = ATgetArgument(y_5, 2);
                  if(l_5 != NULL && l_5 != z_5)
                    _fail(z_5);
                  else
                    l_5 = z_5;
                  if(m_5 != NULL && m_5 != b_6)
                    _fail(b_6);
                  else
                    m_5 = b_6;
                  if(o_5 != NULL && o_5 != w_5)
                    _fail(w_5);
                  else
                    o_5 = w_5;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))))));
                }
              else
                {
                  if(match_cons(y_5, sym_HVBOX_4))
                    {
                      z_5 = ATgetArgument(y_5, 0);
                      b_6 = ATgetArgument(y_5, 1);
                      w_5 = ATgetArgument(y_5, 2);
                      x_5 = ATgetArgument(y_5, 3);
                      if(k_5 != NULL && k_5 != z_5)
                        _fail(z_5);
                      else
                        k_5 = z_5;
                      if(l_5 != NULL && l_5 != b_6)
                        _fail(b_6);
                      else
                        l_5 = b_6;
                      if(m_5 != NULL && m_5 != w_5)
                        _fail(w_5);
                      else
                        m_5 = w_5;
                      if(o_5 != NULL && o_5 != x_5)
                        _fail(x_5);
                      else
                        o_5 = x_5;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))))))));
                    }
                  else
                    {
                      if(match_cons(y_5, sym_ABOX_2))
                        {
                          z_5 = ATgetArgument(y_5, 0);
                          b_6 = ATgetArgument(y_5, 1);
                          if(n_5 != NULL && n_5 != z_5)
                            _fail(z_5);
                          else
                            n_5 = z_5;
                          if(o_5 != NULL && o_5 != b_6)
                            _fail(b_6);
                          else
                            o_5 = b_6;
                          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
                        }
                      else
                        {
                          if(match_cons(y_5, sym_ALTBOX_2))
                            {
                              z_5 = ATgetArgument(y_5, 0);
                              b_6 = ATgetArgument(y_5, 1);
                              if(p_5 != NULL && p_5 != z_5)
                                _fail(z_5);
                              else
                                p_5 = z_5;
                              if(q_5 != NULL && q_5 != b_6)
                                _fail(b_6);
                              else
                                q_5 = b_6;
                              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
                            }
                          else
                            {
                              if(match_cons(y_5, sym_CBOX_1))
                                {
                                  z_5 = ATgetArgument(y_5, 0);
                                  if(u_5 != NULL && u_5 != z_5)
                                    _fail(z_5);
                                  else
                                    u_5 = z_5;
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
                                }
                              else
                                {
                                  if(match_cons(y_5, sym_LBOX_2))
                                    {
                                      z_5 = ATgetArgument(y_5, 0);
                                      b_6 = ATgetArgument(y_5, 1);
                                      h_5 :
                                      if(match_string(z_5, "="))
                                        {
                                          ATerm t_8 = t;
                                          if(PushChoice()==0)
                                            {
                                              t = m_6(t);
                                              PopChoice();
                                            }
                                          else
                                            {
                                              t = t_8;
                                              {
                                                ATerm u_8 = t;
                                                if(PushChoice()==0)
                                                  {
                                                    t = n_6(t);
                                                    PopChoice();
                                                  }
                                                else
                                                  {
                                                    t = u_8;
                                                    t = p_6(t);
                                                  }
                                              }
                                            }
                                        }
                                      else
                                        {
                                          ATerm v_8 = t;
                                          if(PushChoice()==0)
                                            {
                                              t = m_6(t);
                                              PopChoice();
                                            }
                                          else
                                            {
                                              t = v_8;
                                              t = p_6(t);
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(y_5, sym_LBLBOX_2))
                                        {
                                          z_5 = ATgetArgument(y_5, 0);
                                          b_6 = ATgetArgument(y_5, 1);
                                          t = v_6(t);
                                        }
                                      else
                                        {
                                          if(match_cons(y_5, sym_REFBOX_2))
                                            {
                                              z_5 = ATgetArgument(y_5, 0);
                                              b_6 = ATgetArgument(y_5, 1);
                                              t = w_6(t);
                                            }
                                          else
                                            {
                                              if(match_cons(y_5, sym_BOXFONT_2))
                                                {
                                                  z_5 = ATgetArgument(y_5, 0);
                                                  b_6 = ATgetArgument(y_5, 1);
                                                  i_5 :
                                                  if(match_cons(z_5, sym_KW_0))
                                                    t = x_6(t);
                                                  else
                                                    {
                                                      if(match_cons(z_5, sym_VAR_0))
                                                        t = y_6(t);
                                                      else
                                                        {
                                                          if(match_cons(z_5, sym_NUM_0))
                                                            t = z_6(t);
                                                          else
                                                            {
                                                              if(match_cons(z_5, sym_MATH_0))
                                                                t = a_7(t);
                                                              else
                                                                {
                                                                  if(match_string(z_5, "sf"))
                                                                    t = b_7(t);
                                                                  else
                                                                    {
                                                                      if(match_string(z_5, "rm"))
                                                                        t = c_7(t);
                                                                      else
                                                                        {
                                                                          if(match_string(z_5, "tt"))
                                                                            t = d_7(t);
                                                                          else
                                                                            {
                                                                              if(match_string(z_5, "md"))
                                                                                t = e_7(t);
                                                                              else
                                                                                {
                                                                                  if(match_string(z_5, "bf"))
                                                                                    t = f_7(t);
                                                                                  else
                                                                                    {
                                                                                      if(match_string(z_5, "up"))
                                                                                        t = g_7(t);
                                                                                      else
                                                                                        {
                                                                                          if(match_string(z_5, "it"))
                                                                                            t = h_7(t);
                                                                                          else
                                                                                            {
                                                                                              if(match_string(z_5, "sc"))
                                                                                                t = i_7(t);
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(z_5, "sl"))
                                                                                                    t = j_7(t);
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(z_5, "em"))
                                                                                                        t = k_7(t);
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(z_5, "tiny"))
                                                                                                            t = l_7(t);
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(z_5, "scriptsize"))
                                                                                                                t = m_7(t);
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(z_5, "footnotesize"))
                                                                                                                    t = n_7(t);
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(z_5, "small"))
                                                                                                                        t = o_7(t);
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(z_5, "normalsize"))
                                                                                                                            t = p_7(t);
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(z_5, "large"))
                                                                                                                                t = q_7(t);
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(z_5, "Large"))
                                                                                                                                    t = r_7(t);
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(z_5, "LARGE"))
                                                                                                                                        t = s_7(t);
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(z_5, "huge"))
                                                                                                                                            t = t_7(t);
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(z_5, "Huge"))
                                                                                                                                                t = u_7(t);
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_cons(z_5, sym_BOXCOLOR_1))
                                                                                                                                                    {
                                                                                                                                                      a_6 = ATgetArgument(z_5, 0);
                                                                                                                                                      t = v_7(t);
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
      PopChoice();
    }
  else
    {
      t = s_8;
      {
        ATerm w_8 = t;
        if(PushChoice()==0)
          {
            t = C_0(t);
            t = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
            PopChoice();
          }
        else
          {
            t = w_8;
            {
              ATerm x_8 = t;
              if(PushChoice()==0)
                {
                  t = R_0(t);
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
                  PopChoice();
                }
              else
                {
                  t = x_8;
                  {
                    ATerm y_8 = t;
                    if(PushChoice()==0)
                      {
                        t = L_0(t);
                        t = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
                        PopChoice();
                      }
                    else
                      {
                        t = y_8;
                        {
                          ATerm a_9 = t;
                          if(PushChoice()==0)
                            {
                              t = EOR_0(t);
                              t = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
                              PopChoice();
                            }
                          else
                            {
                              t = a_9;
                              t = CSEP_0(t);
                              t = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
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
ATerm bottomup_1 (ATerm t, ATerm e_49 (ATerm))
{
  ATerm x_7 (ATerm t)
  {
    t = _all(t, x_7);
    t = e_49(t);
    return(t);
  }
  t = x_7(t);
  return(t);
}
ATerm latex2text_0 (ATerm t)
{
  ATerm m_0 (ATerm t)
  {
    t = try_1(t, Latex2text_0);
    return(t);
  }
  t = bottomup_1(t, m_0);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm a_8 = NULL;
  a_8 = t;
  t = SSL_implode_string(not_null(a_8));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm e_8 = NULL;
  e_8 = t;
  t = SSL_explode_string(not_null(e_8));
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_8 = NULL;
  i_8 = t;
  t = SSL_string_to_int(not_null(i_8));
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm y_47 (ATerm))
{
  ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL;
  o_8 = t;
  n_8 :
  if(match_cons(o_8, sym_Cons_2))
    {
      p_8 = ATgetArgument(o_8, 0);
      q_8 = ATgetArgument(o_8, 1);
      {
        ATerm z_8 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = y_47(t);
        z_8 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_8), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_8), not_null(q_8)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm z_47 (ATerm))
{
  ATerm b_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = b_9;
      {
        ATerm n_0 (ATerm t)
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
              t = Cons_2(t, _id, n_0);
              t = Sep_1(t, z_47);
            }
          return(t);
        }
        t = Cons_2(t, _id, n_0);
      }
    }
  return(t);
}
ATerm C_2 (ATerm t, ATerm o_32 (ATerm), ATerm p_32 (ATerm))
{
  ATerm q_9 = NULL,r_9 = NULL,u_9 = NULL;
  q_9 = t;
  p_9 :
  if(match_cons(q_9, sym_C_2))
    {
      r_9 = ATgetArgument(q_9, 0);
      u_9 = ATgetArgument(q_9, 1);
      {
        ATerm x_9 = NULL;
        t = not_null(r_9);
        {
          ATerm z_9 = NULL;
          t = o_32(t);
          x_9 = t;
          t = not_null(u_9);
          t = p_32(t);
          z_9 = t;
          t = (ATerm) ATmakeAppl(sym_C_2, not_null(x_9), not_null(z_9));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm table_row_0 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL,u_10 = NULL;
  r_10 = t;
  q_10 :
  if(match_cons(r_10, sym_R_2))
    {
      s_10 = ATgetArgument(r_10, 0);
      u_10 = ATgetArgument(r_10, 1);
      t = not_null(u_10);
      {
        ATerm h_11 (ATerm t)
        {
          ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
          ATerm d_9 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = d_9;
              {
                ATerm e_9 = t;
                if(PushChoice()==0)
                  {
                    t = Cons_2(t, _id, Nil_0);
                    PopChoice();
                  }
                else
                  {
                    t = e_9;
                    {
                      ATerm f_9 = t;
                      if(PushChoice()==0)
                        {
                          ATerm o_0 (ATerm t)
                          {
                            t = C_2(t, _id, _id);
                            return(t);
                          }
                          ATerm p_0 (ATerm t)
                          {
                            t = Cons_2(t, _id, h_11);
                            return(t);
                          }
                          t = Cons_2(t, o_0, p_0);
                          PopChoice();
                        }
                      else
                        {
                          t = f_9;
                          {
                            ATerm g_9 = t;
                            if(PushChoice()==0)
                              {
                                ATerm q_0 (ATerm t)
                                {
                                  ATerm r_0 (ATerm t)
                                  {
                                    t = C_2(t, _id, _id);
                                    return(t);
                                  }
                                  t = Cons_2(t, r_0, h_11);
                                  return(t);
                                }
                                t = Cons_2(t, _id, q_0);
                                PopChoice();
                              }
                            else
                              {
                                t = g_9;
                                {
                                  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL;
                                  z_10 = t;
                                  o_10 :
                                  if(match_cons(z_10, sym_Cons_2))
                                    {
                                      a_11 = ATgetArgument(z_10, 0);
                                      b_11 = ATgetArgument(z_10, 1);
                                      p_10 :
                                      if(match_cons(b_11, sym_Cons_2))
                                        {
                                          c_11 = ATgetArgument(b_11, 0);
                                          d_11 = ATgetArgument(b_11, 1);
                                          {
                                            ATerm e_11 = NULL;
                                            if(w_10 != NULL && w_10 != a_11)
                                              _fail(a_11);
                                            else
                                              w_10 = a_11;
                                            if(x_10 != NULL && x_10 != c_11)
                                              _fail(c_11);
                                            else
                                              x_10 = c_11;
                                            if(y_10 != NULL && y_10 != d_11)
                                              _fail(d_11);
                                            else
                                              y_10 = d_11;
                                            t = not_null(y_10);
                                            t = h_11(t);
                                            e_11 = t;
                                            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_10), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_CSEP_0), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_10), not_null(e_11))));
                                          }
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
          return(t);
        }
        t = h_11(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MkRows_0 (ATerm t)
{
  ATerm o_11 = NULL,r_11 = NULL;
  ATerm h_9 = t;
  if(PushChoice()==0)
    {
      ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
      s_11 = t;
      n_11 :
      if(match_cons(s_11, sym_LBL_2))
        {
          t_11 = ATgetArgument(s_11, 0);
          u_11 = ATgetArgument(s_11, 1);
          {
            ATerm v_11 = NULL;
            if(o_11 != NULL && o_11 != t_11)
              _fail(t_11);
            else
              o_11 = t_11;
            if(r_11 != NULL && r_11 != u_11)
              _fail(u_11);
            else
              r_11 = u_11;
            t = not_null(r_11);
            t = table_row_0(t);
            t = not_null(r_11);
            t = table_row_0(t);
            v_11 = t;
            t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(o_11), not_null(v_11));
          }
        }
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = h_9;
      t = table_row_0(t);
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm l_47 (ATerm))
{
  ATerm z_11 (ATerm t)
  {
    ATerm i_9 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, Nil_0);
        t = l_47(t);
        PopChoice();
      }
    else
      {
        t = i_9;
        t = Cons_2(t, _id, z_11);
      }
    return(t);
  }
  t = z_11(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm j_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = j_9;
      {
        ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
        c_12 = t;
        b_12 :
        if(match_cons(c_12, sym_Cons_2))
          {
            d_12 = ATgetArgument(c_12, 0);
            e_12 = ATgetArgument(c_12, 1);
            t = not_null(d_12);
            {
              ATerm s_0 (ATerm t)
              {
                t = not_null(e_12);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, s_0);
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm table_def_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL;
  a_13 = t;
  z_12 :
  if(match_cons(a_13, sym_AOPTIONS_1))
    {
      b_13 = ATgetArgument(a_13, 0);
      t = not_null(b_13);
      {
        ATerm t_0 (ATerm t)
        {
          ATerm d_13 = NULL,e_13 = NULL;
          d_13 = t;
          y_12 :
          if(match_cons(d_13, sym_AL_1))
            {
              e_13 = ATgetArgument(d_13, 0);
              {
                ATerm g_13 = NULL;
                t = not_null(e_13);
                t = Hspace_0(t);
                {
                  ATerm i_13 = NULL;
                  t = string_to_int_0(t);
                  g_13 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_13), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("~", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = copy_0(t);
                  i_13 = t;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_L_0), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_13), (ATerm) ATmakeAppl(sym_Nil_0)));
                }
              }
            }
          else
            {
              if(match_cons(d_13, sym_AC_1))
                {
                  e_13 = ATgetArgument(d_13, 0);
                  {
                    ATerm l_13 = NULL;
                    t = not_null(e_13);
                    t = Hspace_0(t);
                    {
                      ATerm n_13 = NULL;
                      t = string_to_int_0(t);
                      l_13 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_13), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("~", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = copy_0(t);
                      n_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_C_0), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_13), (ATerm) ATmakeAppl(sym_Nil_0)));
                    }
                  }
                }
              else
                {
                  if(match_cons(d_13, sym_AR_1))
                    {
                      e_13 = ATgetArgument(d_13, 0);
                      {
                        ATerm t_13 = NULL;
                        t = not_null(e_13);
                        t = Hspace_0(t);
                        {
                          ATerm v_13 = NULL;
                          t = string_to_int_0(t);
                          t_13 = t;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_13), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("~", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = copy_0(t);
                          v_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_R_0), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_13), (ATerm) ATmakeAppl(sym_Nil_0)));
                        }
                      }
                    }
                  else
                    _fail(t);
                }
            }
          return(t);
        }
        t = map_1(t, t_0);
        {
          ATerm u_0 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_CSEP_0), (ATerm) ATmakeAppl(sym_Nil_0));
            return(t);
          }
          t = separate_by_1(t, u_0);
          t = concat_0(t);
          {
            ATerm v_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_EOR_0), (ATerm) ATmakeAppl(sym_Nil_0));
              return(t);
            }
            t = at_last_1(t, v_0);
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm b_47 (ATerm))
{
  ATerm h_14 (ATerm t)
  {
    ATerm k_9 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, h_14);
        PopChoice();
      }
    else
      {
        t = k_9;
        t = Nil_0(t);
        t = b_47(t);
      }
    return(t);
  }
  t = h_14(t);
  return(t);
}
ATerm conc_0 (ATerm t)
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
              t = not_null(n_14);
              {
                ATerm w_0 (ATerm t)
                {
                  t = not_null(p_14);
                  return(t);
                }
                t = at_end_1(t, w_0);
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
ATerm TNil_0 (ATerm t)
{
  ATerm v_14 = NULL;
  v_14 = t;
  u_14 :
  if(!(match_cons(v_14, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm i_33 (ATerm), ATerm j_33 (ATerm))
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL;
  a_15 = t;
  z_14 :
  if(match_cons(a_15, sym_TCons_2))
    {
      b_15 = ATgetArgument(a_15, 0);
      c_15 = ATgetArgument(a_15, 1);
      {
        ATerm f_15 = NULL;
        t = not_null(b_15);
        {
          ATerm h_15 = NULL;
          t = i_33(t);
          f_15 = t;
          t = not_null(c_15);
          t = j_33(t);
          h_15 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_15), not_null(h_15));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL;
  q_15 = t;
  n_15 :
  if(match_cons(q_15, sym_TCons_2))
    {
      r_15 = ATgetArgument(q_15, 0);
      s_15 = ATgetArgument(q_15, 1);
      o_15 :
      if(match_cons(s_15, sym_TCons_2))
        {
          t_15 = ATgetArgument(s_15, 0);
          u_15 = ATgetArgument(s_15, 1);
          p_15 :
          if(match_cons(u_15, sym_TNil_0))
            {
              ATerm l_9 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(r_15), not_null(t_15));
                  PopChoice();
                }
              else
                {
                  t = l_9;
                  t = SSL_subtr(not_null(r_15), not_null(t_15));
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
ATerm gt_0 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
  c_16 = t;
  z_15 :
  if(match_cons(c_16, sym_TCons_2))
    {
      d_16 = ATgetArgument(c_16, 0);
      e_16 = ATgetArgument(c_16, 1);
      a_16 :
      if(match_cons(e_16, sym_TCons_2))
        {
          f_16 = ATgetArgument(e_16, 0);
          g_16 = ATgetArgument(e_16, 1);
          b_16 :
          if(match_cons(g_16, sym_TNil_0))
            {
              ATerm m_9;
              m_9 = t;
              {
                ATerm n_9 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(d_16), not_null(f_16));
                    PopChoice();
                  }
                else
                  {
                    t = n_9;
                    t = SSL_gtr(not_null(d_16), not_null(f_16));
                  }
              }
              t = m_9;
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
  ATerm o_16 = NULL;
  ATerm o_9 = t;
  if(PushChoice()==0)
    {
      ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
      p_16 = t;
      l_16 :
      if(match_cons(p_16, sym_TCons_2))
        {
          q_16 = ATgetArgument(p_16, 0);
          r_16 = ATgetArgument(p_16, 1);
          m_16 :
          if(match_cons(r_16, sym_TCons_2))
            {
              s_16 = ATgetArgument(r_16, 0);
              t_16 = ATgetArgument(r_16, 1);
              n_16 :
              if(match_cons(t_16, sym_TNil_0))
                {
                  if(o_16 != NULL && o_16 != q_16)
                    _fail(q_16);
                  else
                    o_16 = q_16;
                  if(o_16 != NULL && o_16 != s_16)
                    _fail(s_16);
                  else
                    o_16 = s_16;
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
      t = o_9;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm u_52 (ATerm), ATerm v_52 (ATerm))
{
  ATerm v_16 (ATerm t)
  {
    ATerm s_9 = t;
    if(PushChoice()==0)
      {
        t = u_52(t);
        PopChoice();
      }
    else
      {
        t = s_9;
        t = v_52(t);
        t = v_16(t);
      }
    return(t);
  }
  t = v_16(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm x_52 (ATerm), ATerm y_52 (ATerm), ATerm z_52 (ATerm))
{
  t = x_52(t);
  t = while_not_2(t, y_52, z_52);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm t_9 = t;
  if(PushChoice()==0)
    {
      ATerm x_0 (ATerm t)
      {
        ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL,u_17 = NULL,v_17 = NULL;
        q_17 = t;
        x_16 :
        if(match_cons(q_17, sym_TCons_2))
          {
            r_17 = ATgetArgument(q_17, 0);
            s_17 = ATgetArgument(q_17, 1);
            y_16 :
            if(match_cons(s_17, sym_TCons_2))
              {
                u_17 = ATgetArgument(s_17, 0);
                v_17 = ATgetArgument(s_17, 1);
                z_16 :
                if(match_cons(v_17, sym_TNil_0))
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_17), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
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
        ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL;
        y_17 = t;
        b_17 :
        if(match_cons(y_17, sym_TCons_2))
          {
            z_17 = ATgetArgument(y_17, 0);
            a_18 = ATgetArgument(y_17, 1);
            c_17 :
            if(match_int(z_17, 0))
              {
                d_17 :
                if(match_cons(a_18, sym_TCons_2))
                  {
                    b_18 = ATgetArgument(a_18, 0);
                    c_18 = ATgetArgument(a_18, 1);
                    e_17 :
                    if(match_cons(c_18, sym_TCons_2))
                      {
                        d_18 = ATgetArgument(c_18, 0);
                        e_18 = ATgetArgument(c_18, 1);
                        f_17 :
                        if(match_cons(e_18, sym_TNil_0))
                          t = not_null(d_18);
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
        ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL;
        h_18 = t;
        l_17 :
        if(match_cons(h_18, sym_TCons_2))
          {
            i_18 = ATgetArgument(h_18, 0);
            j_18 = ATgetArgument(h_18, 1);
            m_17 :
            if(match_cons(j_18, sym_TCons_2))
              {
                k_18 = ATgetArgument(j_18, 0);
                l_18 = ATgetArgument(j_18, 1);
                n_17 :
                if(match_cons(l_18, sym_TCons_2))
                  {
                    m_18 = ATgetArgument(l_18, 0);
                    n_18 = ATgetArgument(l_18, 1);
                    o_17 :
                    if(match_cons(n_18, sym_TNil_0))
                      {
                        ATerm r_18 = NULL;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_18), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                        t = geq_0(t);
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_18), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                        t = subt_0(t);
                        r_18 = t;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_18), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_18), not_null(m_18)), (ATerm) ATmakeAppl(sym_TNil_0))));
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
      PopChoice();
    }
  else
    {
      t = t_9;
      {
        ATerm a_1 (ATerm t)
        {
          ATerm t_18 = NULL;
          t_18 = t;
          p_17 :
          if(!(match_int(t_18, 0)))
            _fail(t);
          return(t);
        }
        ATerm b_1 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, a_1, b_1);
        t = (ATerm) ATmakeAppl(sym_Nil_0);
      }
    }
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm b_19 = NULL;
  b_19 = t;
  a_19 :
  if(!(match_cons(b_19, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0 (ATerm t)
{
  ATerm d_19 = NULL;
  ATerm v_9 = t;
  if(PushChoice()==0)
    {
      ATerm d_1 (ATerm t)
      {
        ATerm m_1 (ATerm t)
        {
          ATerm e_19 = NULL;
          e_19 = t;
          if(d_19 != NULL && d_19 != e_19)
            _fail(e_19);
          else
            d_19 = e_19;
          return(t);
        }
        t = SOpt_2(t, VS_0, m_1);
        return(t);
      }
      t = fetch_1(t, d_1);
      t = not_null(d_19);
      PopChoice();
    }
  else
    {
      t = v_9;
      t = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
    }
  return(t);
}
ATerm R_2 (ATerm t, ATerm x_31 (ATerm), ATerm y_31 (ATerm))
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
  r_19 = t;
  q_19 :
  if(match_cons(r_19, sym_R_2))
    {
      s_19 = ATgetArgument(r_19, 0);
      t_19 = ATgetArgument(r_19, 1);
      {
        ATerm w_19 = NULL;
        t = not_null(s_19);
        {
          ATerm y_19 = NULL;
          t = x_31(t);
          w_19 = t;
          t = not_null(t_19);
          t = y_31(t);
          y_19 = t;
          t = (ATerm) ATmakeAppl(sym_R_2, not_null(w_19), not_null(y_19));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm filter_1 (ATerm t, ATerm s_40 (ATerm))
{
  ATerm d_20 (ATerm t)
  {
    ATerm w_9 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = w_9;
        {
          ATerm y_9 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, s_40, d_20);
              PopChoice();
            }
          else
            {
              t = y_9;
              t = Tl_0(t);
              t = d_20(t);
            }
        }
      }
    return(t);
  }
  t = d_20(t);
  return(t);
}
ATerm construct_rows_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = split_2(t, _id, n_1);
  {
    ATerm y_21 (ATerm t)
    {
      ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL;
      ATerm b_22 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_21), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_21), not_null(e_21)), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = y_21(t);
        return(t);
      }
      z_20 = t;
      o_20 :
      if(match_cons(z_20, sym_TCons_2))
        {
          a_21 = ATgetArgument(z_20, 0);
          d_21 = ATgetArgument(z_20, 1);
          p_20 :
          if(match_cons(a_21, sym_Nil_0))
            {
              q_20 :
              if(match_cons(d_21, sym_TCons_2))
                {
                  e_21 = ATgetArgument(d_21, 0);
                  f_21 = ATgetArgument(d_21, 1);
                  r_20 :
                  if(match_cons(f_21, sym_TNil_0))
                    {
                      ATerm k_21 = NULL;
                      t = not_null(e_21);
                      t = reverse_0(t);
                      k_21 = t;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_R_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(k_21)), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(a_21, sym_Cons_2))
                {
                  b_21 = ATgetArgument(a_21, 0);
                  c_21 = ATgetArgument(a_21, 1);
                  u_20 :
                  if(match_cons(d_21, sym_TCons_2))
                    {
                      e_21 = ATgetArgument(d_21, 0);
                      f_21 = ATgetArgument(d_21, 1);
                      v_20 :
                      if(match_cons(f_21, sym_TNil_0))
                        {
                          w_20 :
                          if(match_cons(b_21, sym_R_2))
                            {
                              x_20 = ATgetArgument(b_21, 0);
                              y_20 = ATgetArgument(b_21, 1);
                              {
                                ATerm a_10 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm q_21 = NULL;
                                    t = not_null(e_21);
                                    {
                                      ATerm s_21 = NULL;
                                      t = reverse_0(t);
                                      q_21 = t;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_21), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = y_21(t);
                                      s_21 = t;
                                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_R_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(q_21)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_R_2, not_null(x_20), not_null(y_20)), not_null(s_21)));
                                    }
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = a_10;
                                    t = b_22(t);
                                  }
                              }
                            }
                          else
                            t = b_22(t);
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
    t = y_21(t);
    {
      ATerm o_1 (ATerm t)
      {
        ATerm b_10 = t;
        if(PushChoice()==0)
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          t = b_10;
        return(t);
      }
      t = filter_1(t, o_1);
    }
  }
  return(t);
}
ATerm IS_0 (ATerm t)
{
  ATerm g_22 = NULL;
  g_22 = t;
  f_22 :
  if(!(match_cons(g_22, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0 (ATerm t)
{
  ATerm i_22 = NULL;
  ATerm c_10 = t;
  if(PushChoice()==0)
    {
      ATerm x_1 (ATerm t)
      {
        ATerm y_1 (ATerm t)
        {
          ATerm j_22 = NULL;
          j_22 = t;
          if(i_22 != NULL && i_22 != j_22)
            _fail(j_22);
          else
            i_22 = j_22;
          return(t);
        }
        t = SOpt_2(t, IS_0, y_1);
        return(t);
      }
      t = fetch_1(t, x_1);
      t = not_null(i_22);
      PopChoice();
    }
  else
    {
      t = c_10;
      t = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
    }
  return(t);
}
ATerm HS_0 (ATerm t)
{
  ATerm m_22 = NULL;
  m_22 = t;
  l_22 :
  if(!(match_cons(m_22, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm i_31 (ATerm), ATerm j_31 (ATerm))
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
  r_22 = t;
  q_22 :
  if(match_cons(r_22, sym_SOpt_2))
    {
      s_22 = ATgetArgument(r_22, 0);
      t_22 = ATgetArgument(r_22, 1);
      {
        ATerm w_22 = NULL;
        t = not_null(s_22);
        {
          ATerm y_22 = NULL;
          t = i_31(t);
          w_22 = t;
          t = not_null(t_22);
          t = j_31(t);
          y_22 = t;
          t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(w_22), not_null(y_22));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Hspace_0 (ATerm t)
{
  ATerm e_23 = NULL;
  ATerm d_10 = t;
  if(PushChoice()==0)
    {
      ATerm z_1 (ATerm t)
      {
        ATerm a_2 (ATerm t)
        {
          ATerm f_23 = NULL;
          f_23 = t;
          if(e_23 != NULL && e_23 != f_23)
            _fail(f_23);
          else
            e_23 = f_23;
          return(t);
        }
        t = SOpt_2(t, HS_0, a_2);
        return(t);
      }
      t = fetch_1(t, z_1);
      t = not_null(e_23);
      PopChoice();
    }
  else
    {
      t = d_10;
      t = (ATerm) ATmakeAppl(ATmakeSymbol("1", 0, ATtrue));
    }
  return(t);
}
ATerm toh_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
    return(t);
  }
  t = separate_by_1(t, b_2);
  return(t);
}
ATerm CL_0 (ATerm t)
{
  ATerm i_23 = NULL;
  i_23 = t;
  h_23 :
  if(!(match_cons(i_23, sym_CL_0)))
    _fail(t);
  return(t);
}
ATerm FFID_2 (ATerm t, ATerm f_32 (ATerm), ATerm g_32 (ATerm))
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL;
  n_23 = t;
  m_23 :
  if(match_cons(n_23, sym_FFID_2))
    {
      o_23 = ATgetArgument(n_23, 0);
      p_23 = ATgetArgument(n_23, 1);
      {
        ATerm s_23 = NULL;
        t = not_null(o_23);
        {
          ATerm u_23 = NULL;
          t = f_32(t);
          s_23 = t;
          t = not_null(p_23);
          t = g_32(t);
          u_23 = t;
          t = (ATerm) ATmakeAppl(sym_FFID_2, not_null(s_23), not_null(u_23));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SZ_0 (ATerm t)
{
  ATerm a_24 = NULL;
  a_24 = t;
  z_23 :
  if(!(match_cons(a_24, sym_SZ_0)))
    _fail(t);
  return(t);
}
ATerm SH_0 (ATerm t)
{
  ATerm c_24 = NULL;
  c_24 = t;
  b_24 :
  if(!(match_cons(c_24, sym_SH_0)))
    _fail(t);
  return(t);
}
ATerm SE_0 (ATerm t)
{
  ATerm e_24 = NULL;
  e_24 = t;
  d_24 :
  if(!(match_cons(e_24, sym_SE_0)))
    _fail(t);
  return(t);
}
ATerm FM_0 (ATerm t)
{
  ATerm g_24 = NULL;
  g_24 = t;
  f_24 :
  if(!(match_cons(g_24, sym_FM_0)))
    _fail(t);
  return(t);
}
ATerm MATH_0 (ATerm t)
{
  ATerm i_24 = NULL;
  i_24 = t;
  h_24 :
  if(!(match_cons(i_24, sym_MATH_0)))
    _fail(t);
  return(t);
}
ATerm NUM_0 (ATerm t)
{
  ATerm k_24 = NULL;
  k_24 = t;
  j_24 :
  if(!(match_cons(k_24, sym_NUM_0)))
    _fail(t);
  return(t);
}
ATerm VAR_0 (ATerm t)
{
  ATerm m_24 = NULL;
  m_24 = t;
  l_24 :
  if(!(match_cons(m_24, sym_VAR_0)))
    _fail(t);
  return(t);
}
ATerm KW_0 (ATerm t)
{
  ATerm o_24 = NULL;
  o_24 = t;
  n_24 :
  if(!(match_cons(o_24, sym_KW_0)))
    _fail(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL;
  t_24 = t;
  q_24 :
  if(match_cons(t_24, sym_Cons_2))
    {
      u_24 = ATgetArgument(t_24, 0);
      v_24 = ATgetArgument(t_24, 1);
      t = not_null(v_24);
    }
  else
    _fail(t);
  return(t);
}
ATerm remove_trailing_1 (ATerm t, ATerm p_53 (ATerm))
{
  ATerm z_24 (ATerm t)
  {
    ATerm e_10 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, p_53, _id);
        t = Tl_0(t);
        t = z_24(t);
        PopChoice();
      }
    else
      t = e_10;
    return(t);
  }
  t = z_24(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm f_47 (ATerm))
{
  ATerm a_25 (ATerm t)
  {
    ATerm f_10 = t;
    if(PushChoice()==0)
      {
        t = f_47(t);
        PopChoice();
      }
    else
      {
        t = f_10;
        t = Cons_2(t, _id, a_25);
      }
    return(t);
  }
  t = a_25(t);
  return(t);
}
ATerm LatexComment_0 (ATerm t)
{
  ATerm l_25 = NULL;
  ATerm c_2 (ATerm t)
  {
    ATerm k_25 = NULL;
    k_25 = t;
    b_25 :
    if(!(match_int(k_25, 9)))
      {
        if(!(match_int(k_25, 32)))
          _fail(t);
      }
    return(t);
  }
  t = remove_trailing_1(t, c_2);
  {
    ATerm e_2 (ATerm t)
    {
      ATerm g_2 (ATerm t)
      {
        ATerm i_2 (ATerm t)
        {
          ATerm s_25 = NULL;
          s_25 = t;
          h_25 :
          if(!(match_int(s_25, 37)))
            _fail(t);
          return(t);
        }
        ATerm j_2 (ATerm t)
        {
          ATerm k_2 (ATerm t)
          {
            ATerm t_25 = NULL;
            t_25 = t;
            i_25 :
            if(!(match_int(t_25, 37)))
              _fail(t);
            return(t);
          }
          ATerm l_2 (ATerm t)
          {
            ATerm u_25 = NULL;
            u_25 = t;
            if(l_25 != NULL && l_25 != u_25)
              _fail(u_25);
            else
              l_25 = u_25;
            return(t);
          }
          t = Cons_2(t, k_2, l_2);
          return(t);
        }
        t = Cons_2(t, i_2, j_2);
        t = not_null(l_25);
        return(t);
      }
      t = at_suffix_1(t, g_2);
      return(t);
    }
    t = try_1(t, e_2);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm make_latex_comment_0 (ATerm t)
{
  t = explode_string_0(t);
  t = reverse_0(t);
  {
    ATerm m_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_Nil_0);
      return(t);
    }
    t = split_2(t, _id, m_2);
    {
      ATerm e_31 (ATerm t)
      {
        ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL;
        ATerm h_31 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_30), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(g_30), not_null(j_30)), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = e_31(t);
          return(t);
        }
        e_30 = t;
        c_26 :
        if(match_cons(e_30, sym_TCons_2))
          {
            f_30 = ATgetArgument(e_30, 0);
            i_30 = ATgetArgument(e_30, 1);
            d_26 :
            if(match_cons(f_30, sym_Nil_0))
              {
                e_26 :
                if(match_cons(i_30, sym_TCons_2))
                  {
                    j_30 = ATgetArgument(i_30, 0);
                    k_30 = ATgetArgument(i_30, 1);
                    f_26 :
                    if(match_cons(k_30, sym_TNil_0))
                      {
                        ATerm o_30 = NULL;
                        t = not_null(j_30);
                        t = LatexComment_0(t);
                        o_30 = t;
                        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_30), (ATerm) ATmakeAppl(sym_Nil_0));
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              {
                if(match_cons(f_30, sym_Cons_2))
                  {
                    g_30 = ATgetArgument(f_30, 0);
                    h_30 = ATgetArgument(f_30, 1);
                    g_26 :
                    if(match_cons(i_30, sym_TCons_2))
                      {
                        j_30 = ATgetArgument(i_30, 0);
                        k_30 = ATgetArgument(i_30, 1);
                        h_26 :
                        if(match_cons(k_30, sym_TNil_0))
                          {
                            i_26 :
                            if(match_int(g_30, 10))
                              {
                                ATerm g_10 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm t_30 = NULL;
                                    t = not_null(j_30);
                                    {
                                      ATerm v_30 = NULL;
                                      t = LatexComment_0(t);
                                      t_30 = t;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_30), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = e_31(t);
                                      v_30 = t;
                                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_30), not_null(v_30));
                                    }
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = g_10;
                                    t = h_31(t);
                                  }
                              }
                            else
                              t = h_31(t);
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
      t = e_31(t);
      {
        ATerm o_2 (ATerm t)
        {
          ATerm a_31 = NULL;
          a_31 = t;
          j_26 :
          if(!(match_string(a_31, "")))
            _fail(t);
          return(t);
        }
        t = remove_trailing_1(t, o_2);
        t = reverse_0(t);
        {
          ATerm p_2 (ATerm t)
          {
            ATerm b_31 = NULL;
            b_31 = t;
            k_26 :
            if(!(match_string(b_31, "")))
              _fail(t);
            return(t);
          }
          t = remove_trailing_1(t, p_2);
          {
            ATerm r_2 (ATerm t)
            {
              ATerm c_31 = NULL;
              c_31 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_31), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)));
              return(t);
            }
            t = map_1(t, r_2);
          }
        }
      }
    }
  }
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm h_10 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = h_10;
      t = Cons_2(t, _id, _id);
    }
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL;
  ATerm i_10 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = i_10;
      {
        ATerm j_10 = t;
        if(PushChoice()==0)
          {
            ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
            ATerm b_32 (ATerm t)
            {
              if(s_31 != NULL && s_31 != v_31)
                _fail(v_31);
              else
                s_31 = v_31;
              if(t_31 != NULL && t_31 != w_31)
                _fail(w_31);
              else
                t_31 = w_31;
              t = not_null(s_31);
              t = is_list_0(t);
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_31), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_31), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = conc_0(t);
              t = flat_list_0(t);
              return(t);
            }
            u_31 = t;
            q_31 :
            if(match_cons(u_31, sym_Cons_2))
              {
                v_31 = ATgetArgument(u_31, 0);
                w_31 = ATgetArgument(u_31, 1);
                r_31 :
                if(match_cons(v_31, sym_Nil_0))
                  {
                    ATerm k_10 = t;
                    if(PushChoice()==0)
                      {
                        if(t_31 != NULL && t_31 != w_31)
                          _fail(w_31);
                        else
                          t_31 = w_31;
                        {
                          ATerm s_2 (ATerm t)
                          {
                            t = not_null(t_31);
                            t = flat_list_0(t);
                            return(t);
                          }
                          t = Cons_2(t, Nil_0, s_2);
                        }
                        PopChoice();
                      }
                    else
                      {
                        t = k_10;
                        t = b_32(t);
                      }
                  }
                else
                  t = b_32(t);
              }
            else
              _fail(t);
            PopChoice();
          }
        else
          {
            t = j_10;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm s_50 (ATerm))
{
  ATerm c_32 (ATerm t)
  {
    ATerm l_10 = t;
    if(PushChoice()==0)
      {
        t = s_50(t);
        PopChoice();
      }
    else
      {
        t = l_10;
        t = _one(t, c_32);
      }
    return(t);
  }
  t = c_32(t);
  return(t);
}
ATerm replace_quotes_0 (ATerm t)
{
  ATerm l_32 = NULL,u_32 = NULL;
  ATerm u_2 (ATerm t)
  {
    ATerm m_32 = NULL;
    m_32 = t;
    d_32 :
    if(!(match_int(m_32, 34)))
      _fail(t);
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    ATerm n_32 = NULL;
    n_32 = t;
    if(l_32 != NULL && l_32 != n_32)
      _fail(n_32);
    else
      l_32 = n_32;
    return(t);
  }
  t = Cons_2(t, u_2, w_2);
  t = not_null(l_32);
  {
    ATerm x_2 (ATerm t)
    {
      ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
      q_32 = t;
      i_32 :
      if(match_cons(q_32, sym_Cons_2))
        {
          r_32 = ATgetArgument(q_32, 0);
          s_32 = ATgetArgument(q_32, 1);
          j_32 :
          if(match_int(r_32, 34))
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(39), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(39), not_null(s_32)));
          else
            _fail(t);
        }
      else
        _fail(t);
      return(t);
    }
    t = oncetd_1(t, x_2);
    u_32 = t;
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(96), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(96), not_null(u_32)));
  }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm p_47 (ATerm))
{
  ATerm z_32 (ATerm t)
  {
    t = p_47(t);
    {
      ATerm m_10 = t;
      if(PushChoice()==0)
        {
          t = Nil_0(t);
          PopChoice();
        }
      else
        {
          t = m_10;
          t = Cons_2(t, _id, z_32);
        }
    }
    return(t);
  }
  t = z_32(t);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,k_33 = NULL;
  e_33 = t;
  b_33 :
  if(match_cons(e_33, sym_TCons_2))
    {
      f_33 = ATgetArgument(e_33, 0);
      g_33 = ATgetArgument(e_33, 1);
      c_33 :
      if(match_cons(g_33, sym_TCons_2))
        {
          h_33 = ATgetArgument(g_33, 0);
          k_33 = ATgetArgument(g_33, 1);
          d_33 :
          if(match_cons(k_33, sym_TNil_0))
            t = SSL_table_get(not_null(f_33), not_null(h_33));
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
ATerm latex_string_0 (ATerm t)
{
  ATerm h_34 = NULL;
  ATerm n_10 = t;
  if(PushChoice()==0)
    {
      ATerm i_34 = NULL;
      i_34 = t;
      if(h_34 != NULL && h_34 != i_34)
        _fail(i_34);
      else
        h_34 = i_34;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_34), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = table_get_0(t);
      PopChoice();
    }
  else
    {
      t = n_10;
      t = explode_string_0(t);
      {
        ATerm y_2 (ATerm t)
        {
          t = try_1(t, replace_quotes_0);
          return(t);
        }
        t = listtd_1(t, y_2);
        {
          ATerm j_3 (ATerm t)
          {
            ATerm l_3 (ATerm t)
            {
              ATerm j_34 = NULL;
              j_34 = t;
              g_34 :
              if(match_int(j_34, 32))
                {
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
                  t = explode_string_0(t);
                }
              else
                {
                  if(match_int(j_34, 35))
                    {
                      t = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
                      t = explode_string_0(t);
                    }
                  else
                    {
                      if(match_int(j_34, 36))
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
                          t = explode_string_0(t);
                        }
                      else
                        {
                          if(match_int(j_34, 37))
                            {
                              t = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
                              t = explode_string_0(t);
                            }
                          else
                            {
                              if(match_int(j_34, 38))
                                {
                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
                                  t = explode_string_0(t);
                                }
                              else
                                {
                                  if(match_int(j_34, 45))
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
                                      t = explode_string_0(t);
                                    }
                                  else
                                    {
                                      if(match_int(j_34, 60))
                                        {
                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
                                          t = explode_string_0(t);
                                        }
                                      else
                                        {
                                          if(match_int(j_34, 62))
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
                                              t = explode_string_0(t);
                                            }
                                          else
                                            {
                                              if(match_int(j_34, 92))
                                                {
                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
                                                  t = explode_string_0(t);
                                                }
                                              else
                                                {
                                                  if(match_int(j_34, 94))
                                                    {
                                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
                                                      t = explode_string_0(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_int(j_34, 95))
                                                        {
                                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
                                                          t = explode_string_0(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_int(j_34, 123))
                                                            {
                                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
                                                              t = explode_string_0(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_int(j_34, 124))
                                                                {
                                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
                                                                  t = explode_string_0(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_int(j_34, 125))
                                                                    {
                                                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
                                                                      t = explode_string_0(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_int(j_34, 126))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
                                                                          t = explode_string_0(t);
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
                        }
                    }
                }
              return(t);
            }
            t = try_1(t, l_3);
            return(t);
          }
          t = map_1(t, j_3);
          t = flat_list_0(t);
          t = implode_string_0(t);
        }
      }
    }
  return(t);
}
ATerm Abox_2_latex_0 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL;
  ATerm j_40 (ATerm t)
  {
    t = not_null(f_37);
    {
      ATerm t_10 = t;
      if(PushChoice()==0)
        {
          t = KW_0(t);
          PopChoice();
        }
      else
        {
          t = t_10;
          {
            ATerm v_10 = t;
            if(PushChoice()==0)
              {
                t = VAR_0(t);
                PopChoice();
              }
            else
              {
                t = v_10;
                {
                  ATerm f_11 = t;
                  if(PushChoice()==0)
                    {
                      t = NUM_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = f_11;
                      t = MATH_0(t);
                    }
                }
              }
          }
        }
    }
    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(f_37), not_null(g_37));
    return(t);
  }
  ATerm k_40 (ATerm t)
  {
    t = not_null(g_37);
    return(t);
  }
  ATerm l_40 (ATerm t)
  {
    ATerm u_37 = NULL,v_37 = NULL;
    t = not_null(a_37);
    {
      ATerm g_11 = t;
      if(PushChoice()==0)
        {
          ATerm m_3 (ATerm t)
          {
            ATerm x_37 = NULL;
            x_37 = t;
            if(v_37 != NULL && v_37 != x_37)
              _fail(x_37);
            else
              v_37 = x_37;
            return(t);
          }
          t = FFID_2(t, FM_0, m_3);
          PopChoice();
        }
      else
        {
          t = g_11;
          {
            ATerm i_11 = t;
            if(PushChoice()==0)
              {
                ATerm n_3 (ATerm t)
                {
                  ATerm y_37 = NULL;
                  y_37 = t;
                  if(v_37 != NULL && v_37 != y_37)
                    _fail(y_37);
                  else
                    v_37 = y_37;
                  return(t);
                }
                t = FFID_2(t, SE_0, n_3);
                PopChoice();
              }
            else
              {
                t = i_11;
                {
                  ATerm j_11 = t;
                  if(PushChoice()==0)
                    {
                      ATerm p_3 (ATerm t)
                      {
                        ATerm z_37 = NULL;
                        z_37 = t;
                        if(v_37 != NULL && v_37 != z_37)
                          _fail(z_37);
                        else
                          v_37 = z_37;
                        return(t);
                      }
                      t = FFID_2(t, SH_0, p_3);
                      PopChoice();
                    }
                  else
                    {
                      t = j_11;
                      {
                        ATerm k_11 = t;
                        if(PushChoice()==0)
                          {
                            ATerm q_3 (ATerm t)
                            {
                              ATerm a_38 = NULL;
                              a_38 = t;
                              if(v_37 != NULL && v_37 != a_38)
                                _fail(a_38);
                              else
                                v_37 = a_38;
                              return(t);
                            }
                            t = FFID_2(t, SZ_0, q_3);
                            PopChoice();
                          }
                        else
                          {
                            t = k_11;
                            {
                              ATerm c_38 = NULL;
                              ATerm r_3 (ATerm t)
                              {
                                ATerm b_38 = NULL;
                                b_38 = t;
                                if(u_37 != NULL && u_37 != b_38)
                                  _fail(b_38);
                                else
                                  u_37 = b_38;
                                return(t);
                              }
                              t = FFID_2(t, CL_0, r_3);
                              t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, not_null(u_37));
                              c_38 = t;
                              if(v_37 != NULL && v_37 != c_38)
                                _fail(c_38);
                              else
                                v_37 = c_38;
                            }
                          }
                      }
                    }
                }
              }
          }
        }
    }
    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(v_37), (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, not_null(c_37)), not_null(g_37)));
    return(t);
  }
  ATerm m_40 (ATerm t)
  {
    ATerm f_38 = NULL,g_38 = NULL;
    ATerm i_38 = NULL;
    t = not_null(f_37);
    {
      ATerm j_38 = NULL;
      t = Hspace_0(t);
      i_38 = t;
      if(f_38 != NULL && f_38 != i_38)
        _fail(i_38);
      else
        f_38 = i_38;
      t = not_null(g_37);
      t = toh_0(t);
      j_38 = t;
      if(g_38 != NULL && g_38 != j_38)
        _fail(j_38);
      else
        g_38 = j_38;
    }
    t = (ATerm) ATmakeAppl(sym_HBOX_2, not_null(f_38), not_null(g_38));
    return(t);
  }
  ATerm n_40 (ATerm t)
  {
    ATerm m_38 = NULL,n_38 = NULL,p_38 = NULL;
    ATerm q_38 = NULL;
    t = not_null(f_37);
    {
      ATerm r_38 = NULL;
      t = Vspace_0(t);
      q_38 = t;
      if(m_38 != NULL && m_38 != q_38)
        _fail(q_38);
      else
        m_38 = q_38;
      t = not_null(f_37);
      {
        ATerm s_38 = NULL;
        t = Ispace_0(t);
        r_38 = t;
        if(n_38 != NULL && n_38 != r_38)
          _fail(r_38);
        else
          n_38 = r_38;
        t = not_null(g_37);
        {
          ATerm s_3 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
            return(t);
          }
          t = separate_by_1(t, s_3);
          s_38 = t;
          if(p_38 != NULL && p_38 != s_38)
            _fail(s_38);
          else
            p_38 = s_38;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_VBOX_3, not_null(m_38), not_null(n_38), not_null(p_38));
    return(t);
  }
  ATerm o_40 (ATerm t)
  {
    ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL;
    ATerm z_38 = NULL;
    t = not_null(f_37);
    {
      ATerm a_39 = NULL;
      t = Hspace_0(t);
      z_38 = t;
      if(v_38 != NULL && v_38 != z_38)
        _fail(z_38);
      else
        v_38 = z_38;
      t = not_null(f_37);
      {
        ATerm b_39 = NULL;
        t = Vspace_0(t);
        a_39 = t;
        if(w_38 != NULL && w_38 != a_39)
          _fail(a_39);
        else
          w_38 = a_39;
        t = not_null(f_37);
        {
          ATerm c_39 = NULL;
          t = Ispace_0(t);
          b_39 = t;
          if(x_38 != NULL && x_38 != b_39)
            _fail(b_39);
          else
            x_38 = b_39;
          t = not_null(g_37);
          {
            ATerm t_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
              return(t);
            }
            t = separate_by_1(t, t_3);
            c_39 = t;
            if(y_38 != NULL && y_38 != c_39)
              _fail(c_39);
            else
              y_38 = c_39;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_HVBOX_4, not_null(v_38), not_null(w_38), not_null(x_38), not_null(y_38));
    return(t);
  }
  ATerm p_40 (ATerm t)
  {
    ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL;
    ATerm l_39 = NULL;
    t = not_null(d_37);
    {
      ATerm m_39 = NULL;
      t = construct_rows_0(t);
      l_39 = t;
      if(j_39 != NULL && j_39 != l_39)
        _fail(l_39);
      else
        j_39 = l_39;
      t = not_null(g_37);
      t = Vspace_0(t);
      {
        ATerm n_39 = NULL;
        t = string_to_int_0(t);
        m_39 = t;
        if(g_39 != NULL && g_39 != m_39)
          _fail(m_39);
        else
          g_39 = m_39;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_39), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_EOR_0), (ATerm) ATmakeAppl(sym_TNil_0)));
        {
          ATerm p_39 = NULL;
          t = copy_0(t);
          n_39 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_39), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_EOR_0), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          {
            ATerm q_39 = NULL;
            t = conc_0(t);
            p_39 = t;
            if(i_39 != NULL && i_39 != p_39)
              _fail(p_39);
            else
              i_39 = p_39;
            t = not_null(f_37);
            {
              ATerm r_39 = NULL;
              t = table_def_0(t);
              q_39 = t;
              if(h_39 != NULL && h_39 != q_39)
                _fail(q_39);
              else
                h_39 = q_39;
              t = not_null(j_39);
              t = map_1(t, MkRows_0);
              {
                ATerm u_3 (ATerm t)
                {
                  t = not_null(i_39);
                  return(t);
                }
                t = separate_by_1(t, u_3);
                r_39 = t;
                if(k_39 != NULL && k_39 != r_39)
                  _fail(r_39);
                else
                  k_39 = r_39;
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_ABOX_2, not_null(h_39), not_null(k_39));
    return(t);
  }
  ATerm q_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_ALTBOX_2, not_null(f_37), not_null(g_37));
    return(t);
  }
  ATerm r_40 (ATerm t)
  {
    ATerm w_39 = NULL;
    ATerm l_11 = t;
    if(PushChoice()==0)
      {
        ATerm x_39 = NULL;
        t = not_null(f_37);
        t = string_to_int_0(t);
        x_39 = t;
        if(w_39 != NULL && w_39 != x_39)
          _fail(x_39);
        else
          w_39 = x_39;
        PopChoice();
      }
    else
      {
        t = l_11;
        {
          ATerm m_11 = t;
          if(PushChoice()==0)
            {
              ATerm z_39 = NULL;
              t = not_null(f_37);
              t = explode_string_0(t);
              {
                ATerm v_3 (ATerm t)
                {
                  ATerm y_39 = NULL;
                  y_39 = t;
                  m_36 :
                  if(!(match_int(y_39, 61)))
                    _fail(t);
                  return(t);
                }
                t = Cons_2(t, v_3, _id);
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(61), (ATerm) ATmakeAppl(sym_Nil_0));
                t = implode_string_0(t);
                z_39 = t;
                if(w_39 != NULL && w_39 != z_39)
                  _fail(z_39);
                else
                  w_39 = z_39;
              }
              PopChoice();
            }
          else
            {
              t = m_11;
              {
                ATerm c_40 = NULL;
                t = not_null(f_37);
                c_40 = t;
                if(w_39 != NULL && w_39 != c_40)
                  _fail(c_40);
                else
                  w_39 = c_40;
              }
            }
        }
      }
    t = (ATerm) ATmakeAppl(sym_LBOX_2, not_null(w_39), not_null(g_37));
    return(t);
  }
  ATerm u_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(f_37), not_null(g_37));
    return(t);
  }
  ATerm v_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_REFBOX_2, not_null(f_37), not_null(g_37));
    return(t);
  }
  e_37 = t;
  p_36 :
  if(match_cons(e_37, sym_S_1))
    {
      f_37 = ATgetArgument(e_37, 0);
      t = not_null(f_37);
      t = latex_string_0(t);
    }
  else
    {
      if(match_cons(e_37, sym_C_2))
        {
          f_37 = ATgetArgument(e_37, 0);
          g_37 = ATgetArgument(e_37, 1);
          q_36 :
          if(match_cons(f_37, sym_Nil_0))
            {
              ATerm j_37 = NULL;
              ATerm n_37 = NULL;
              t = not_null(g_37);
              {
                ATerm w_3 (ATerm t)
                {
                  ATerm k_37 = NULL,l_37 = NULL;
                  k_37 = t;
                  o_35 :
                  if(match_cons(k_37, sym_S_1))
                    {
                      l_37 = ATgetArgument(k_37, 0);
                      t = not_null(l_37);
                      t = make_latex_comment_0(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = map_1(t, w_3);
                n_37 = t;
                if(j_37 != NULL && j_37 != n_37)
                  _fail(n_37);
                else
                  j_37 = n_37;
              }
              t = (ATerm) ATmakeAppl(sym_CBOX_1, not_null(j_37));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(e_37, sym_FBOX_2))
            {
              f_37 = ATgetArgument(e_37, 0);
              g_37 = ATgetArgument(e_37, 1);
              r_36 :
              if(match_cons(f_37, sym_F_1))
                {
                  z_36 = ATgetArgument(f_37, 0);
                  y_36 :
                  if(match_cons(z_36, sym_Nil_0))
                    {
                      ATerm p_11 = t;
                      if(PushChoice()==0)
                        {
                          t = j_40(t);
                          PopChoice();
                        }
                      else
                        {
                          t = p_11;
                          t = k_40(t);
                        }
                    }
                  else
                    {
                      if(match_cons(z_36, sym_Cons_2))
                        {
                          a_37 = ATgetArgument(z_36, 0);
                          c_37 = ATgetArgument(z_36, 1);
                          {
                            ATerm q_11 = t;
                            if(PushChoice()==0)
                              {
                                t = j_40(t);
                                PopChoice();
                              }
                            else
                              {
                                t = q_11;
                                t = l_40(t);
                              }
                          }
                        }
                      else
                        t = j_40(t);
                    }
                }
              else
                t = j_40(t);
            }
          else
            {
              if(match_cons(e_37, sym_H_2))
                {
                  f_37 = ATgetArgument(e_37, 0);
                  g_37 = ATgetArgument(e_37, 1);
                  t = m_40(t);
                }
              else
                {
                  if(match_cons(e_37, sym_V_2))
                    {
                      f_37 = ATgetArgument(e_37, 0);
                      g_37 = ATgetArgument(e_37, 1);
                      t = n_40(t);
                    }
                  else
                    {
                      if(match_cons(e_37, sym_HV_2))
                        {
                          f_37 = ATgetArgument(e_37, 0);
                          g_37 = ATgetArgument(e_37, 1);
                          t = o_40(t);
                        }
                      else
                        {
                          if(match_cons(e_37, sym_A_3))
                            {
                              f_37 = ATgetArgument(e_37, 0);
                              g_37 = ATgetArgument(e_37, 1);
                              d_37 = ATgetArgument(e_37, 2);
                              t = p_40(t);
                            }
                          else
                            {
                              if(match_cons(e_37, sym_ALT_2))
                                {
                                  f_37 = ATgetArgument(e_37, 0);
                                  g_37 = ATgetArgument(e_37, 1);
                                  t = q_40(t);
                                }
                              else
                                {
                                  if(match_cons(e_37, sym_L_2))
                                    {
                                      f_37 = ATgetArgument(e_37, 0);
                                      g_37 = ATgetArgument(e_37, 1);
                                      t = r_40(t);
                                    }
                                  else
                                    {
                                      if(match_cons(e_37, sym_LBL_2))
                                        {
                                          f_37 = ATgetArgument(e_37, 0);
                                          g_37 = ATgetArgument(e_37, 1);
                                          t = u_40(t);
                                        }
                                      else
                                        {
                                          if(match_cons(e_37, sym_REF_2))
                                            {
                                              f_37 = ATgetArgument(e_37, 0);
                                              g_37 = ATgetArgument(e_37, 1);
                                              t = v_40(t);
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
  return(t);
}
ATerm abox2latex_1 (ATerm t, ATerm s_53 (ATerm))
{
  ATerm d_42 = NULL;
  ATerm f_42 = NULL;
  d_42 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  {
    ATerm h_42 = NULL;
    t = s_53(t);
    f_42 = t;
    t = not_null(d_42);
    {
      ATerm x_3 (ATerm t)
      {
        t = try_1(t, Abox_2_latex_0);
        return(t);
      }
      t = topdown_1(t, x_3);
      h_42 = t;
      t = (ATerm) ATmakeAppl(sym_BOXENV_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_42), (ATerm) ATmakeAppl(sym_Nil_0)), not_null(h_42));
      t = latex2text_0(t);
    }
  }
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_37 (ATerm))
{
  t = fetch_1(t, b_37);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL;
  p_42 = t;
  n_42 :
  if(match_cons(p_42, sym_TCons_2))
    {
      q_42 = ATgetArgument(p_42, 0);
      r_42 = ATgetArgument(p_42, 1);
      o_42 :
      if(match_cons(r_42, sym_TCons_2))
        {
          s_42 = ATgetArgument(r_42, 0);
          t_42 = ATgetArgument(r_42, 1);
          t = not_null(s_42);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm d_43 = NULL;
  ATerm w_11;
  w_11 = t;
  {
    ATerm x_11 = t;
    if(PushChoice()==0)
      {
        ATerm y_3 (ATerm t)
        {
          ATerm e_43 = NULL,i_43 = NULL;
          e_43 = t;
          b_43 :
          if(match_cons(e_43, sym_Input_1))
            {
              i_43 = ATgetArgument(e_43, 0);
              if(d_43 != NULL && d_43 != i_43)
                _fail(i_43);
              else
                d_43 = i_43;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, y_3);
        PopChoice();
      }
    else
      {
        t = x_11;
        {
          ATerm j_43 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          j_43 = t;
          if(d_43 != NULL && d_43 != j_43)
            _fail(j_43);
          else
            d_43 = j_43;
        }
      }
  }
  t = w_11;
  {
    ATerm z_3 (ATerm t)
    {
      t = not_null(d_43);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL;
  ATerm y_11;
  y_11 = t;
  {
    ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL;
    w_43 = t;
    n_43 :
    if(match_cons(w_43, sym_TCons_2))
      {
        x_43 = ATgetArgument(w_43, 0);
        y_43 = ATgetArgument(w_43, 1);
        q_43 :
        if(match_cons(y_43, sym_TCons_2))
          {
            z_43 = ATgetArgument(y_43, 0);
            a_44 = ATgetArgument(y_43, 1);
            r_43 :
            if(match_cons(a_44, sym_TCons_2))
              {
                b_44 = ATgetArgument(a_44, 0);
                c_44 = ATgetArgument(a_44, 1);
                s_43 :
                if(match_cons(c_44, sym_TNil_0))
                  {
                    if(t_43 != NULL && t_43 != x_43)
                      _fail(x_43);
                    else
                      t_43 = x_43;
                    if(u_43 != NULL && u_43 != z_43)
                      _fail(z_43);
                    else
                      u_43 = z_43;
                    if(v_43 != NULL && v_43 != b_44)
                      _fail(b_44);
                    else
                      v_43 = b_44;
                    t = SSL_table_put(not_null(t_43), not_null(u_43), not_null(v_43));
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
  t = y_11;
  return(t);
}
ATerm StoreEntries_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL;
    i_44 = t;
    f_44 :
    if(match_cons(i_44, sym_Cons_2))
      {
        j_44 = ATgetArgument(i_44, 0);
        k_44 = ATgetArgument(i_44, 1);
        g_44 :
        if(match_cons(k_44, sym_Cons_2))
          {
            l_44 = ATgetArgument(k_44, 0);
            m_44 = ATgetArgument(k_44, 1);
            h_44 :
            if(match_cons(m_44, sym_Nil_0))
              {
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_44), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_44), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_put_0(t);
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
  t = map_1(t, a_4);
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm r_44 = NULL;
  r_44 = t;
  t = SSL_ReadFromFile(not_null(r_44));
  return(t);
}
ATerm map_1 (ATerm t, ATerm m_46 (ATerm))
{
  ATerm u_44 (ATerm t)
  {
    ATerm a_12 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = a_12;
        t = Cons_2(t, m_46, u_44);
      }
    return(t);
  }
  t = u_44(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL;
  a_45 = t;
  w_44 :
  if(match_cons(a_45, sym_TCons_2))
    {
      b_45 = ATgetArgument(a_45, 0);
      c_45 = ATgetArgument(a_45, 1);
      x_44 :
      if(match_cons(b_45, sym_Nil_0))
        {
          y_44 :
          if(match_cons(c_45, sym_TCons_2))
            {
              d_45 = ATgetArgument(c_45, 0);
              e_45 = ATgetArgument(c_45, 1);
              z_44 :
              if(match_cons(e_45, sym_TNil_0))
                t = not_null(d_45);
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
  ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL;
  m_45 = t;
  i_45 :
  if(match_cons(m_45, sym_TCons_2))
    {
      n_45 = ATgetArgument(m_45, 0);
      q_45 = ATgetArgument(m_45, 1);
      j_45 :
      if(match_cons(n_45, sym_Cons_2))
        {
          o_45 = ATgetArgument(n_45, 0);
          p_45 = ATgetArgument(n_45, 1);
          k_45 :
          if(match_cons(q_45, sym_TCons_2))
            {
              r_45 = ATgetArgument(q_45, 0);
              s_45 = ATgetArgument(q_45, 1);
              l_45 :
              if(match_cons(s_45, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_45), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_45), not_null(r_45)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm d_52 (ATerm), ATerm e_52 (ATerm))
{
  ATerm x_45 (ATerm t)
  {
    ATerm f_12 = t;
    if(PushChoice()==0)
      {
        t = d_52(t);
        t = x_45(t);
        PopChoice();
      }
    else
      {
        t = f_12;
        t = e_52(t);
      }
    return(t);
  }
  t = x_45(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm g_52 (ATerm))
{
  t = repeat_2(t, g_52, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm z_45 = NULL;
  z_45 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_45), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm d_46 = NULL;
  d_46 = t;
  t = SSL_table_create(not_null(d_46));
  return(t);
}
ATerm load_tables_0 (ATerm t)
{
  ATerm g_12;
  g_12 = t;
  t = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  t = table_create_0(t);
  t = g_12;
  t = reverse_0(t);
  {
    ATerm b_4 (ATerm t)
    {
      t = ReadFromFile_0(t);
      t = StoreEntries_0(t);
      return(t);
    }
    t = map_1(t, b_4);
  }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm v_46 (ATerm))
{
  ATerm g_46 (ATerm t)
  {
    ATerm h_12 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, v_46, _id);
        PopChoice();
      }
    else
      {
        t = h_12;
        t = Cons_2(t, _id, g_46);
      }
    return(t);
  }
  t = g_46(t);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm v_42 (ATerm))
{
  ATerm k_46 = NULL,l_46 = NULL,o_46 = NULL;
  k_46 = t;
  j_46 :
  if(match_cons(k_46, sym_Cons_2))
    {
      l_46 = ATgetArgument(k_46, 0);
      o_46 = ATgetArgument(k_46, 1);
      t = v_42(t);
      {
        ATerm c_4 (ATerm t)
        {
          ATerm r_46 = NULL;
          r_46 = t;
          if(l_46 != NULL && l_46 != r_46)
            _fail(r_46);
          else
            l_46 = r_46;
          return(t);
        }
        t = fetch_1(t, c_4);
      }
      t = not_null(o_46);
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm a_47 = NULL,d_47 = NULL,e_47 = NULL,h_47 = NULL,i_47 = NULL;
  a_47 = t;
  x_46 :
  if(match_cons(a_47, sym_TCons_2))
    {
      d_47 = ATgetArgument(a_47, 0);
      e_47 = ATgetArgument(a_47, 1);
      y_46 :
      if(match_cons(e_47, sym_TCons_2))
        {
          h_47 = ATgetArgument(e_47, 0);
          i_47 = ATgetArgument(e_47, 1);
          z_46 :
          if(match_cons(i_47, sym_TNil_0))
            {
              t = not_null(d_47);
              {
                ATerm o_47 (ATerm t)
                {
                  ATerm i_12 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(h_47);
                      PopChoice();
                    }
                  else
                    {
                      t = i_12;
                      {
                        ATerm j_12 = t;
                        if(PushChoice()==0)
                          {
                            ATerm d_4 (ATerm t)
                            {
                              t = not_null(h_47);
                              return(t);
                            }
                            t = HdMember_1(t, d_4);
                            t = o_47(t);
                            PopChoice();
                          }
                        else
                          {
                            t = j_12;
                            t = Cons_2(t, _id, o_47);
                          }
                      }
                    }
                  return(t);
                }
                t = o_47(t);
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
ATerm foldr_3 (ATerm t, ATerm o_41 (ATerm), ATerm p_41 (ATerm), ATerm q_41 (ATerm))
{
  ATerm i_48 (ATerm t)
  {
    ATerm k_12 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        t = o_41(t);
        PopChoice();
      }
    else
      {
        t = k_12;
        {
          ATerm v_47 = NULL,w_47 = NULL,b_48 = NULL;
          v_47 = t;
          u_47 :
          if(match_cons(v_47, sym_Cons_2))
            {
              w_47 = ATgetArgument(v_47, 0);
              b_48 = ATgetArgument(v_47, 1);
              {
                ATerm e_48 = NULL;
                t = not_null(w_47);
                {
                  ATerm g_48 = NULL;
                  t = q_41(t);
                  e_48 = t;
                  t = not_null(b_48);
                  t = i_48(t);
                  g_48 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_48), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_48), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = p_41(t);
                }
              }
            }
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = i_48(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm f_43 (ATerm), ATerm g_43 (ATerm), ATerm h_43 (ATerm))
{
  ATerm s_48 = NULL;
  ATerm u_48 = NULL;
  s_48 = t;
  {
    ATerm v_48 = NULL;
    ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL;
    t = not_null(s_48);
    v_48 = t;
    t = SSL_explode_term(not_null(v_48));
    x_48 = t;
    p_48 :
    if(match_cons(x_48, sym_TCons_2))
      {
        y_48 = ATgetArgument(x_48, 0);
        z_48 = ATgetArgument(x_48, 1);
        q_48 :
        if(match_cons(z_48, sym_TCons_2))
          {
            a_49 = ATgetArgument(z_48, 0);
            b_49 = ATgetArgument(z_48, 1);
            r_48 :
            if(match_cons(b_49, sym_TNil_0))
              {
                if(u_48 != NULL && u_48 != a_49)
                  _fail(a_49);
                else
                  u_48 = a_49;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(u_48);
    t = foldr_3(t, f_43, g_43, h_43);
  }
  return(t);
}
ATerm collect_1 (ATerm t, ATerm o_43 (ATerm))
{
  ATerm m_49 (ATerm t)
  {
    ATerm l_12 = t;
    if(PushChoice()==0)
      {
        ATerm k_49 = NULL;
        t = o_43(t);
        k_49 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_49), (ATerm) ATmakeAppl(sym_Nil_0));
        PopChoice();
      }
    else
      {
        t = l_12;
        {
          ATerm e_4 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Nil_0);
            return(t);
          }
          t = crush_3(t, e_4, union_0, m_49);
        }
      }
    return(t);
  }
  t = m_49(t);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm h_38 (ATerm))
{
  ATerm m_12;
  m_12 = t;
  {
    ATerm f_4 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm g_4 (ATerm t)
    {
      ATerm q_49 = NULL;
      ATerm s_49 = NULL;
      q_49 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = h_38(t);
      s_49 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_49), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_49), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, f_4, g_4);
    t = printnl_0(t);
  }
  t = m_12;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm o_38 (ATerm))
{
  ATerm n_12;
  n_12 = t;
  t = o_38(t);
  {
    ATerm h_4 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
      return(t);
    }
    t = debug_1(t, h_4);
  }
  t = n_12;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL;
  ATerm o_12 = t;
  if(PushChoice()==0)
    {
      ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL;
      d_50 = t;
      x_49 :
      if(match_cons(d_50, sym_TCons_2))
        {
          e_50 = ATgetArgument(d_50, 0);
          f_50 = ATgetArgument(d_50, 1);
          y_49 :
          if(match_cons(f_50, sym_TCons_2))
            {
              g_50 = ATgetArgument(f_50, 0);
              h_50 = ATgetArgument(f_50, 1);
              z_49 :
              if(match_cons(h_50, sym_TNil_0))
                {
                  if(c_50 != NULL && c_50 != e_50)
                    _fail(e_50);
                  else
                    c_50 = e_50;
                  if(b_50 != NULL && b_50 != g_50)
                    _fail(g_50);
                  else
                    b_50 = g_50;
                  t = SSL_open_file(not_null(c_50), not_null(b_50));
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
      t = o_12;
      {
        ATerm i_50 = NULL;
        ATerm i_4 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
          return(t);
        }
        t = obsolete_1(t, i_4);
        i_50 = t;
        if(c_50 != NULL && c_50 != i_50)
          _fail(i_50);
        else
          c_50 = i_50;
        t = SSL_open_file(not_null(c_50), (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue)));
      }
    }
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm m_50 = NULL;
  m_50 = t;
  t = SSL_exit(not_null(m_50));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL;
  v_50 = t;
  q_50 :
  if(match_cons(v_50, sym_TCons_2))
    {
      w_50 = ATgetArgument(v_50, 0);
      x_50 = ATgetArgument(v_50, 1);
      r_50 :
      if(match_cons(x_50, sym_TCons_2))
        {
          y_50 = ATgetArgument(x_50, 0);
          z_50 = ATgetArgument(x_50, 1);
          u_50 :
          if(match_cons(z_50, sym_TNil_0))
            {
              ATerm p_12;
              p_12 = t;
              t = SSL_printnl(not_null(w_50), not_null(y_50));
              t = p_12;
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
  ATerm f_51 = NULL;
  ATerm q_12;
  q_12 = t;
  {
    ATerm j_4 (ATerm t)
    {
      ATerm g_51 = NULL,h_51 = NULL;
      g_51 = t;
      e_51 :
      if(match_cons(g_51, sym_Program_1))
        {
          h_51 = ATgetArgument(g_51, 0);
          if(f_51 != NULL && f_51 != h_51)
            _fail(h_51);
          else
            f_51 = h_51;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, j_4);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_51), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-i abox] [-o latex] [-t table ... ] [-w width] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
  }
  t = q_12;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm k_51 = NULL;
  k_51 = t;
  j_51 :
  if(!(match_cons(k_51, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm d_30 (ATerm))
{
  ATerm o_51 = NULL,p_51 = NULL;
  o_51 = t;
  n_51 :
  if(match_cons(o_51, sym_Undefined_1))
    {
      p_51 = ATgetArgument(o_51, 0);
      {
        ATerm r_51 = NULL;
        t = not_null(p_51);
        t = d_30(t);
        r_51 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(r_51));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_51 = NULL;
  w_51 = t;
  v_51 :
  if(!(match_cons(w_51, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_37 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm r_12 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = r_12;
        {
          ATerm s_12 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = s_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, k_4);
  t = w_37(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm w_36 (ATerm), ATerm x_36 (ATerm))
{
  ATerm b_52 = NULL,c_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL;
  b_52 = t;
  z_51 :
  if(match_cons(b_52, sym_Cons_2))
    {
      c_52 = ATgetArgument(b_52, 0);
      h_52 = ATgetArgument(b_52, 1);
      a_52 :
      if(match_cons(h_52, sym_Cons_2))
        {
          i_52 = ATgetArgument(h_52, 0);
          j_52 = ATgetArgument(h_52, 1);
          {
            ATerm n_52 = NULL;
            t = not_null(c_52);
            t = w_36(t);
            t = not_null(i_52);
            t = x_36(t);
            n_52 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_52), not_null(j_52));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm u_36 (ATerm), ATerm v_36 (ATerm))
{
  ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL;
  b_53 = t;
  t_52 :
  if(match_cons(b_53, sym_Cons_2))
    {
      c_53 = ATgetArgument(b_53, 0);
      d_53 = ATgetArgument(b_53, 1);
      {
        ATerm g_53 = NULL;
        t = not_null(c_53);
        t = u_36(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = v_36(t);
        g_53 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_53), not_null(d_53));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm t_12 = t;
  if(PushChoice()==0)
    {
      ATerm l_4 (ATerm t)
      {
        ATerm l_54 = NULL;
        l_54 = t;
        k_53 :
        if(!(match_string(l_54, "-S")))
          _fail(t);
        return(t);
      }
      ATerm m_4 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, l_4, m_4);
      PopChoice();
    }
  else
    {
      t = t_12;
      {
        ATerm u_12 = t;
        if(PushChoice()==0)
          {
            ATerm n_4 (ATerm t)
            {
              ATerm m_54 = NULL;
              m_54 = t;
              l_53 :
              if(!(match_string(m_54, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm o_4 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, n_4, o_4);
            PopChoice();
          }
        else
          {
            t = u_12;
            {
              ATerm v_12 = t;
              if(PushChoice()==0)
                {
                  ATerm p_4 (ATerm t)
                  {
                    ATerm n_54 = NULL;
                    n_54 = t;
                    m_53 :
                    if(!(match_string(n_54, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm q_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, p_4, q_4);
                  PopChoice();
                }
              else
                {
                  t = v_12;
                  {
                    ATerm w_12 = t;
                    if(PushChoice()==0)
                      {
                        ATerm r_4 (ATerm t)
                        {
                          ATerm o_54 = NULL;
                          o_54 = t;
                          n_53 :
                          if(!(match_string(o_54, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm s_4 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, r_4, s_4);
                        PopChoice();
                      }
                    else
                      {
                        t = w_12;
                        {
                          ATerm x_12 = t;
                          if(PushChoice()==0)
                            {
                              ATerm t_4 (ATerm t)
                              {
                                ATerm p_54 = NULL;
                                p_54 = t;
                                r_53 :
                                if(!(match_string(p_54, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm u_4 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, t_4, u_4);
                              PopChoice();
                            }
                          else
                            {
                              t = x_12;
                              {
                                ATerm c_13 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm v_4 (ATerm t)
                                    {
                                      ATerm q_54 = NULL;
                                      q_54 = t;
                                      w_53 :
                                      if(!(match_string(q_54, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm w_4 (ATerm t)
                                    {
                                      ATerm r_54 = NULL;
                                      r_54 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(r_54));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, v_4, w_4);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = c_13;
                                    {
                                      ATerm f_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm x_4 (ATerm t)
                                          {
                                            ATerm t_54 = NULL;
                                            t_54 = t;
                                            y_53 :
                                            if(!(match_string(t_54, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm y_4 (ATerm t)
                                          {
                                            ATerm u_54 = NULL;
                                            u_54 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_54));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, x_4, y_4);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = f_13;
                                          {
                                            ATerm h_13 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm z_4 (ATerm t)
                                                {
                                                  ATerm w_54 = NULL;
                                                  w_54 = t;
                                                  a_54 :
                                                  if(!(match_string(w_54, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm a_5 (ATerm t)
                                                {
                                                  ATerm x_54 = NULL;
                                                  x_54 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_54));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, z_4, a_5);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = h_13;
                                                {
                                                  ATerm j_13 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm b_5 (ATerm t)
                                                      {
                                                        ATerm z_54 = NULL;
                                                        z_54 = t;
                                                        c_54 :
                                                        if(!(match_string(z_54, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm c_5 (ATerm t)
                                                      {
                                                        ATerm a_55 = NULL;
                                                        a_55 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_55));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, b_5, c_5);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = j_13;
                                                      {
                                                        ATerm k_13 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm d_5 (ATerm t)
                                                            {
                                                              ATerm c_55 = NULL;
                                                              c_55 = t;
                                                              e_54 :
                                                              if(!(match_string(c_55, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm d_6 (ATerm t)
                                                            {
                                                              ATerm d_55 = NULL;
                                                              d_55 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_55));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, d_5, d_6);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = k_13;
                                                            {
                                                              ATerm m_13 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm e_6 (ATerm t)
                                                                  {
                                                                    ATerm f_55 = NULL;
                                                                    f_55 = t;
                                                                    g_54 :
                                                                    if(!(match_string(f_55, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm f_6 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, e_6, f_6);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = m_13;
                                                                  {
                                                                    ATerm o_13 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm g_6 (ATerm t)
                                                                        {
                                                                          ATerm g_55 = NULL;
                                                                          g_55 = t;
                                                                          h_54 :
                                                                          if(!(match_string(g_55, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm h_6 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, g_6, h_6);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = o_13;
                                                                        {
                                                                          ATerm p_13 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm i_6 (ATerm t)
                                                                              {
                                                                                ATerm h_55 = NULL;
                                                                                h_55 = t;
                                                                                i_54 :
                                                                                if(!(match_string(h_55, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm j_6 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, i_6, j_6);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = p_13;
                                                                              {
                                                                                ATerm q_13 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm k_6 (ATerm t)
                                                                                    {
                                                                                      ATerm i_55 = NULL;
                                                                                      i_55 = t;
                                                                                      j_54 :
                                                                                      if(!(match_string(i_55, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm l_6 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, k_6, l_6);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = q_13;
                                                                                    {
                                                                                      ATerm o_6 (ATerm t)
                                                                                      {
                                                                                        ATerm j_55 = NULL;
                                                                                        j_55 = t;
                                                                                        k_54 :
                                                                                        if(!(match_string(j_55, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm q_6 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, o_6, q_6);
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
  ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL;
  r_55 = t;
  q_55 :
  if(match_cons(r_55, sym_Cons_2))
    {
      s_55 = ATgetArgument(r_55, 0);
      t_55 = ATgetArgument(r_55, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(s_55)), not_null(t_55));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm m_33 (ATerm), ATerm n_33 (ATerm))
{
  ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL;
  b_56 = t;
  a_56 :
  if(match_cons(b_56, sym_Cons_2))
    {
      c_56 = ATgetArgument(b_56, 0);
      d_56 = ATgetArgument(b_56, 1);
      {
        ATerm g_56 = NULL;
        t = not_null(c_56);
        {
          ATerm i_56 = NULL;
          t = m_33(t);
          g_56 = t;
          t = not_null(d_56);
          t = n_33(t);
          i_56 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_56), not_null(i_56));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm o_56 = NULL;
  o_56 = t;
  n_56 :
  if(!(match_cons(o_56, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_36 (ATerm))
{
  ATerm r_6 (ATerm t)
  {
    ATerm q_56 = NULL;
    q_56 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_56));
    return(t);
  }
  ATerm s_6 (ATerm t)
  {
    ATerm r_13 = t;
    if(PushChoice()==0)
      {
        ATerm s_13 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = s_13;
            t = s_36(t);
            t = Cons_2(t, _id, s_6);
          }
        PopChoice();
      }
    else
      {
        t = r_13;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, r_6, s_6);
  return(t);
}
ATerm Abox2latex_0 (ATerm t)
{
  ATerm n_57 = NULL;
  ATerm p_57 = NULL,q_57 = NULL;
  ATerm t_6 (ATerm t)
  {
    ATerm u_13 = t;
    if(PushChoice()==0)
      {
        t = io_options_0(t);
        PopChoice();
      }
    else
      {
        t = u_13;
        {
          ATerm w_13 = t;
          if(PushChoice()==0)
            {
              ATerm u_6 (ATerm t)
              {
                ATerm h_57 = NULL;
                h_57 = t;
                u_56 :
                if(!(match_string(h_57, "-t")))
                  _fail(t);
                return(t);
              }
              ATerm w_7 (ATerm t)
              {
                ATerm i_57 = NULL;
                i_57 = t;
                t = (ATerm) ATmakeAppl(sym_LatexTable_1, not_null(i_57));
                return(t);
              }
              t = ArgOption_2(t, u_6, w_7);
              PopChoice();
            }
          else
            {
              t = w_13;
              {
                ATerm y_7 (ATerm t)
                {
                  ATerm k_57 = NULL;
                  k_57 = t;
                  w_56 :
                  if(!(match_string(k_57, "-w")))
                    _fail(t);
                  return(t);
                }
                ATerm z_7 (ATerm t)
                {
                  ATerm l_57 = NULL;
                  l_57 = t;
                  t = (ATerm) ATmakeAppl(sym_Width_1, not_null(l_57));
                  return(t);
                }
                t = ArgOption_2(t, y_7, z_7);
              }
            }
        }
      }
    return(t);
  }
  t = parse_options_1(t, t_6);
  n_57 = t;
  {
    ATerm x_13 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, usage_0);
        PopChoice();
      }
    else
      {
        t = x_13;
        {
          ATerm y_13 = t;
          if(PushChoice()==0)
            {
              ATerm z_13;
              z_13 = t;
              {
                ATerm a_14 = t;
                if(PushChoice()==0)
                  {
                    ATerm b_8 (ATerm t)
                    {
                      ATerm r_57 = NULL,s_57 = NULL;
                      r_57 = t;
                      a_57 :
                      if(match_cons(r_57, sym_Output_1))
                        {
                          s_57 = ATgetArgument(r_57, 0);
                          if(q_57 != NULL && q_57 != s_57)
                            _fail(s_57);
                          else
                            q_57 = s_57;
                          t = not_null(q_57);
                          t = open_file_0(t);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = option_defined_1(t, b_8);
                    PopChoice();
                  }
                else
                  {
                    t = a_14;
                    {
                      ATerm t_57 = NULL;
                      t = (ATerm) ATmakeAppl(sym_stdout_0);
                      t_57 = t;
                      if(q_57 != NULL && q_57 != t_57)
                        _fail(t_57);
                      else
                        q_57 = t_57;
                    }
                  }
              }
              t = z_13;
              {
                ATerm b_14;
                b_14 = t;
                {
                  ATerm c_8 (ATerm t)
                  {
                    ATerm u_57 = NULL,v_57 = NULL;
                    u_57 = t;
                    d_57 :
                    if(match_cons(u_57, sym_LatexTable_1))
                      {
                        v_57 = ATgetArgument(u_57, 0);
                        t = not_null(v_57);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = collect_1(t, c_8);
                  t = load_tables_0(t);
                }
                t = b_14;
                t = input_file_0(t);
                t = Snd_0(t);
                {
                  ATerm c_14 = t;
                  if(PushChoice()==0)
                    {
                      ATerm d_14;
                      d_14 = t;
                      t = not_null(n_57);
                      {
                        ATerm d_8 (ATerm t)
                        {
                          ATerm x_57 = NULL,y_57 = NULL;
                          x_57 = t;
                          f_57 :
                          if(match_cons(x_57, sym_Width_1))
                            {
                              y_57 = ATgetArgument(x_57, 0);
                              if(p_57 != NULL && p_57 != y_57)
                                _fail(y_57);
                              else
                                p_57 = y_57;
                            }
                          else
                            _fail(t);
                          return(t);
                        }
                        t = option_defined_1(t, d_8);
                      }
                      t = d_14;
                      {
                        ATerm f_8 (ATerm t)
                        {
                          t = not_null(p_57);
                          return(t);
                        }
                        t = abox2latex_1(t, f_8);
                      }
                      PopChoice();
                    }
                  else
                    {
                      t = c_14;
                      t = abox2latex_0(t);
                    }
                  {
                    ATerm g_8 (ATerm t)
                    {
                      ATerm h_8 (ATerm t)
                      {
                        t = is_string_0(t);
                        {
                          ATerm e_14;
                          e_14 = t;
                          {
                            ATerm j_8 (ATerm t)
                            {
                              t = not_null(q_57);
                              return(t);
                            }
                            ATerm k_8 (ATerm t)
                            {
                              ATerm z_57 = NULL;
                              z_57 = t;
                              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_57), (ATerm) ATmakeAppl(sym_Nil_0));
                              return(t);
                            }
                            t = split_2(t, j_8, k_8);
                            t = print_0(t);
                          }
                          t = e_14;
                        }
                        return(t);
                      }
                      t = try_1(t, h_8);
                      return(t);
                    }
                    t = topdown_1(t, g_8);
                    t = report_success_0(t);
                  }
                }
              }
              PopChoice();
            }
          else
            {
              t = y_13;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Abox2latex_0(t);
  return(t);
}
