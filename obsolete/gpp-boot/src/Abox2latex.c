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
ATerm split_2 (ATerm, ATerm y_40 (ATerm), ATerm z_40 (ATerm));
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm b_54 (ATerm));
ATerm topdown_1 (ATerm, ATerm a_50 (ATerm));
ATerm abox2latex_0 (ATerm);
ATerm CSEP_0 (ATerm);
ATerm EOR_0 (ATerm);
ATerm L_0 (ATerm);
ATerm R_0 (ATerm);
ATerm C_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm Latex2text_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm c_50 (ATerm));
ATerm latex2text_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm w_48 (ATerm));
ATerm separate_by_1 (ATerm, ATerm x_48 (ATerm));
ATerm C_2 (ATerm, ATerm s_32 (ATerm), ATerm t_32 (ATerm));
ATerm table_row_0 (ATerm);
ATerm MkRows_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm j_48 (ATerm));
ATerm table_def_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm m_33 (ATerm), ATerm n_33 (ATerm));
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm v_53 (ATerm), ATerm w_53 (ATerm));
ATerm for_3 (ATerm, ATerm y_53 (ATerm), ATerm z_53 (ATerm), ATerm a_54 (ATerm));
ATerm copy_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm Vspace_0 (ATerm);
ATerm R_2 (ATerm, ATerm b_32 (ATerm), ATerm c_32 (ATerm));
ATerm filter_1 (ATerm, ATerm q_41 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm m_31 (ATerm), ATerm n_31 (ATerm));
ATerm Hspace_0 (ATerm);
ATerm toh_0 (ATerm);
ATerm CL_0 (ATerm);
ATerm FFID_2 (ATerm, ATerm j_32 (ATerm), ATerm k_32 (ATerm));
ATerm SZ_0 (ATerm);
ATerm SH_0 (ATerm);
ATerm SE_0 (ATerm);
ATerm FM_0 (ATerm);
ATerm MATH_0 (ATerm);
ATerm NUM_0 (ATerm);
ATerm VAR_0 (ATerm);
ATerm KW_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm remove_trailing_1 (ATerm, ATerm q_54 (ATerm));
ATerm at_suffix_1 (ATerm, ATerm d_48 (ATerm));
ATerm LatexComment_0 (ATerm);
ATerm make_latex_comment_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm q_51 (ATerm));
ATerm replace_quotes_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm n_48 (ATerm));
ATerm latex_string_0 (ATerm);
ATerm Abox_2_latex_0 (ATerm);
ATerm abox2latex_1 (ATerm, ATerm t_54 (ATerm));
ATerm option_defined_1 (ATerm, ATerm y_37 (ATerm));
ATerm Snd_0 (ATerm);
ATerm input_file_0 (ATerm);
ATerm StoreEntries_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm load_tables_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm t_47 (ATerm));
ATerm HdMember_1 (ATerm, ATerm p_43 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm k_42 (ATerm), ATerm l_42 (ATerm), ATerm m_42 (ATerm));
ATerm crush_3 (ATerm, ATerm a_44 (ATerm), ATerm b_44 (ATerm), ATerm c_44 (ATerm));
ATerm collect_1 (ATerm, ATerm j_44 (ATerm));
ATerm debug_1 (ATerm, ATerm e_39 (ATerm));
ATerm obsolete_1 (ATerm, ATerm l_39 (ATerm));
ATerm open_file_0 (ATerm);
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm t_38 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm t_37 (ATerm), ATerm u_37 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm z_47 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm a_37 (ATerm));
ATerm map_1 (ATerm, ATerm l_47 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm e_53 (ATerm), ATerm f_53 (ATerm));
ATerm repeat_1 (ATerm, ATerm h_53 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm z_36 (ATerm));
ATerm Program_1 (ATerm, ATerm g_30 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm h_30 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm e_37 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm q_33 (ATerm), ATerm r_33 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm c_37 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm b_37 (ATerm));
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
  ATerm n_1 = NULL,o_1 = NULL;
  ATerm g_0 (ATerm t)
  {
    ATerm h_0 (ATerm t)
    {
      ATerm e_9 = t;
      if(PushChoice()==0)
        {
          ATerm j_0 (ATerm t)
          {
            ATerm p_1 = NULL;
            p_1 = t;
            i_1 :
            if(!(match_cons(p_1, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, j_0);
          PopChoice();
          _fail(t);
        }
      else
        t = e_9;
      return(t);
    }
    ATerm i_0 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, h_0, i_0);
    {
      ATerm k_0 (ATerm t)
      {
        ATerm m_0 (ATerm t)
        {
          ATerm q_1 = NULL,r_1 = NULL;
          q_1 = t;
          k_1 :
          if(match_cons(q_1, sym_Runtime_1))
            {
              r_1 = ATgetArgument(q_1, 0);
              if(o_1 != NULL && o_1 != r_1)
                _fail(r_1);
              else
                o_1 = r_1;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, m_0);
        return(t);
      }
      ATerm l_0 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, k_0, l_0);
      {
        ATerm n_0 (ATerm t)
        {
          ATerm p_0 (ATerm t)
          {
            ATerm s_1 = NULL,t_1 = NULL;
            s_1 = t;
            m_1 :
            if(match_cons(s_1, sym_Program_1))
              {
                t_1 = ATgetArgument(s_1, 0);
                if(n_1 != NULL && n_1 != t_1)
                  _fail(t_1);
                else
                  n_1 = t_1;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, p_0);
          return(t);
        }
        ATerm o_0 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, n_0, o_0);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_1), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_1), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL;
  a_2 = t;
  x_1 :
  if(match_cons(a_2, sym_TCons_2))
    {
      b_2 = ATgetArgument(a_2, 0);
      c_2 = ATgetArgument(a_2, 1);
      y_1 :
      if(match_cons(c_2, sym_TCons_2))
        {
          d_2 = ATgetArgument(c_2, 0);
          e_2 = ATgetArgument(c_2, 1);
          z_1 :
          if(match_cons(e_2, sym_TNil_0))
            {
              ATerm f_9;
              f_9 = t;
              t = SSL_print(not_null(b_2), not_null(d_2));
              t = f_9;
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
ATerm split_2 (ATerm t, ATerm y_40 (ATerm), ATerm z_40 (ATerm))
{
  ATerm l_2 = NULL;
  ATerm n_2 = NULL;
  l_2 = t;
  {
    ATerm p_2 = NULL;
    t = y_40(t);
    n_2 = t;
    t = not_null(l_2);
    t = z_40(t);
    p_2 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_2), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm v_2 = NULL;
  v_2 = t;
  t = SSL_is_string(not_null(v_2));
  return(t);
}
ATerm try_1 (ATerm t, ATerm b_54 (ATerm))
{
  ATerm g_9 = t;
  if(PushChoice()==0)
    {
      t = b_54(t);
      PopChoice();
    }
  else
    t = g_9;
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm a_50 (ATerm))
{
  ATerm y_2 (ATerm t)
  {
    t = a_50(t);
    t = _all(t, y_2);
    return(t);
  }
  t = y_2(t);
  return(t);
}
ATerm abox2latex_0 (ATerm t)
{
  ATerm b_3 = NULL;
  ATerm d_3 = NULL;
  b_3 = t;
  {
    ATerm q_0 (ATerm t)
    {
      t = try_1(t, Abox_2_latex_0);
      return(t);
    }
    t = topdown_1(t, q_0);
    d_3 = t;
    t = (ATerm) ATmakeAppl(sym_BOXENV_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(d_3));
    t = latex2text_0(t);
  }
  return(t);
}
ATerm CSEP_0 (ATerm t)
{
  ATerm i_3 = NULL;
  i_3 = t;
  h_3 :
  if(!(match_cons(i_3, sym_CSEP_0)))
    _fail(t);
  return(t);
}
ATerm EOR_0 (ATerm t)
{
  ATerm k_3 = NULL;
  k_3 = t;
  j_3 :
  if(!(match_cons(k_3, sym_EOR_0)))
    _fail(t);
  return(t);
}
ATerm L_0 (ATerm t)
{
  ATerm m_3 = NULL;
  m_3 = t;
  l_3 :
  if(!(match_cons(m_3, sym_L_0)))
    _fail(t);
  return(t);
}
ATerm R_0 (ATerm t)
{
  ATerm o_3 = NULL;
  o_3 = t;
  n_3 :
  if(!(match_cons(o_3, sym_R_0)))
    _fail(t);
  return(t);
}
ATerm C_0 (ATerm t)
{
  ATerm q_3 = NULL;
  q_3 = t;
  p_3 :
  if(!(match_cons(q_3, sym_C_0)))
    _fail(t);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm s_3 = NULL;
  s_3 = t;
  t = SSL_int_to_string(not_null(s_3));
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm w_3 = NULL;
  w_3 = t;
  t = SSL_is_int(not_null(w_3));
  return(t);
}
ATerm Latex2text_0 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL;
  ATerm h_9 = t;
  if(PushChoice()==0)
    {
      ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL;
      ATerm b_7 (ATerm t)
      {
        ATerm k_6 = NULL;
        if(z_5 != NULL && z_5 != h_6)
          _fail(h_6);
        else
          z_5 = h_6;
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = not_null(z_5);
        t = is_int_0(t);
        t = not_null(z_5);
        t = int_to_string_0(t);
        k_6 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
        return(t);
      }
      ATerm c_7 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm d_7 (ATerm t)
      {
        if(z_5 != NULL && z_5 != h_6)
          _fail(h_6);
        else
          z_5 = h_6;
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
        return(t);
      }
      ATerm h_7 (ATerm t)
      {
        if(a_6 != NULL && a_6 != h_6)
          _fail(h_6);
        else
          a_6 = h_6;
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Nil_0)))));
        return(t);
      }
      ATerm i_7 (ATerm t)
      {
        if(a_6 != NULL && a_6 != h_6)
          _fail(h_6);
        else
          a_6 = h_6;
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
        return(t);
      }
      ATerm j_7 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm k_7 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm l_7 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm m_7 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm n_7 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm o_7 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm p_7 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm q_7 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm r_7 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm s_7 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm t_7 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm u_7 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm v_7 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm w_7 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm x_7 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm y_7 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm a_8 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm b_8 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm c_8 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm d_8 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm e_8 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm f_8 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm g_8 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm h_8 (ATerm t)
      {
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        return(t);
      }
      ATerm i_8 (ATerm t)
      {
        if(b_6 != NULL && b_6 != i_6)
          _fail(i_6);
        else
          b_6 = i_6;
        if(c_6 != NULL && c_6 != j_6)
          _fail(j_6);
        else
          c_6 = j_6;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
        return(t);
      }
      g_6 = t;
      m_5 :
      if(match_cons(g_6, sym_BOXENV_2))
        {
          h_6 = ATgetArgument(g_6, 0);
          j_6 = ATgetArgument(g_6, 1);
          n_5 :
          if(match_cons(h_6, sym_Nil_0))
            {
              if(w_5 != NULL && w_5 != j_6)
                _fail(j_6);
              else
                w_5 = j_6;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
            }
          else
            {
              if(match_cons(h_6, sym_Cons_2))
                {
                  i_6 = ATgetArgument(h_6, 0);
                  d_6 = ATgetArgument(h_6, 1);
                  o_5 :
                  if(match_cons(d_6, sym_Nil_0))
                    {
                      if(r_5 != NULL && r_5 != i_6)
                        _fail(i_6);
                      else
                        r_5 = i_6;
                      if(w_5 != NULL && w_5 != j_6)
                        _fail(j_6);
                      else
                        w_5 = j_6;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
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
          if(match_cons(g_6, sym_HBOX_2))
            {
              h_6 = ATgetArgument(g_6, 0);
              j_6 = ATgetArgument(g_6, 1);
              if(s_5 != NULL && s_5 != h_6)
                _fail(h_6);
              else
                s_5 = h_6;
              if(w_5 != NULL && w_5 != j_6)
                _fail(j_6);
              else
                w_5 = j_6;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
            }
          else
            {
              if(match_cons(g_6, sym_VBOX_3))
                {
                  h_6 = ATgetArgument(g_6, 0);
                  j_6 = ATgetArgument(g_6, 1);
                  e_6 = ATgetArgument(g_6, 2);
                  if(t_5 != NULL && t_5 != h_6)
                    _fail(h_6);
                  else
                    t_5 = h_6;
                  if(u_5 != NULL && u_5 != j_6)
                    _fail(j_6);
                  else
                    u_5 = j_6;
                  if(w_5 != NULL && w_5 != e_6)
                    _fail(e_6);
                  else
                    w_5 = e_6;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))))));
                }
              else
                {
                  if(match_cons(g_6, sym_HVBOX_4))
                    {
                      h_6 = ATgetArgument(g_6, 0);
                      j_6 = ATgetArgument(g_6, 1);
                      e_6 = ATgetArgument(g_6, 2);
                      f_6 = ATgetArgument(g_6, 3);
                      if(s_5 != NULL && s_5 != h_6)
                        _fail(h_6);
                      else
                        s_5 = h_6;
                      if(t_5 != NULL && t_5 != j_6)
                        _fail(j_6);
                      else
                        t_5 = j_6;
                      if(u_5 != NULL && u_5 != e_6)
                        _fail(e_6);
                      else
                        u_5 = e_6;
                      if(w_5 != NULL && w_5 != f_6)
                        _fail(f_6);
                      else
                        w_5 = f_6;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))))))));
                    }
                  else
                    {
                      if(match_cons(g_6, sym_ABOX_2))
                        {
                          h_6 = ATgetArgument(g_6, 0);
                          j_6 = ATgetArgument(g_6, 1);
                          if(v_5 != NULL && v_5 != h_6)
                            _fail(h_6);
                          else
                            v_5 = h_6;
                          if(w_5 != NULL && w_5 != j_6)
                            _fail(j_6);
                          else
                            w_5 = j_6;
                          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
                        }
                      else
                        {
                          if(match_cons(g_6, sym_ALTBOX_2))
                            {
                              h_6 = ATgetArgument(g_6, 0);
                              j_6 = ATgetArgument(g_6, 1);
                              if(x_5 != NULL && x_5 != h_6)
                                _fail(h_6);
                              else
                                x_5 = h_6;
                              if(y_5 != NULL && y_5 != j_6)
                                _fail(j_6);
                              else
                                y_5 = j_6;
                              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
                            }
                          else
                            {
                              if(match_cons(g_6, sym_CBOX_1))
                                {
                                  h_6 = ATgetArgument(g_6, 0);
                                  if(c_6 != NULL && c_6 != h_6)
                                    _fail(h_6);
                                  else
                                    c_6 = h_6;
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
                                }
                              else
                                {
                                  if(match_cons(g_6, sym_LBOX_2))
                                    {
                                      h_6 = ATgetArgument(g_6, 0);
                                      j_6 = ATgetArgument(g_6, 1);
                                      p_5 :
                                      if(match_string(h_6, "="))
                                        {
                                          ATerm j_9 = t;
                                          if(PushChoice()==0)
                                            {
                                              t = b_7(t);
                                              PopChoice();
                                            }
                                          else
                                            {
                                              t = j_9;
                                              {
                                                ATerm k_9 = t;
                                                if(PushChoice()==0)
                                                  {
                                                    t = c_7(t);
                                                    PopChoice();
                                                  }
                                                else
                                                  {
                                                    t = k_9;
                                                    t = d_7(t);
                                                  }
                                              }
                                            }
                                        }
                                      else
                                        {
                                          ATerm l_9 = t;
                                          if(PushChoice()==0)
                                            {
                                              t = b_7(t);
                                              PopChoice();
                                            }
                                          else
                                            {
                                              t = l_9;
                                              t = d_7(t);
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(g_6, sym_LBLBOX_2))
                                        {
                                          h_6 = ATgetArgument(g_6, 0);
                                          j_6 = ATgetArgument(g_6, 1);
                                          t = h_7(t);
                                        }
                                      else
                                        {
                                          if(match_cons(g_6, sym_REFBOX_2))
                                            {
                                              h_6 = ATgetArgument(g_6, 0);
                                              j_6 = ATgetArgument(g_6, 1);
                                              t = i_7(t);
                                            }
                                          else
                                            {
                                              if(match_cons(g_6, sym_BOXFONT_2))
                                                {
                                                  h_6 = ATgetArgument(g_6, 0);
                                                  j_6 = ATgetArgument(g_6, 1);
                                                  q_5 :
                                                  if(match_cons(h_6, sym_KW_0))
                                                    t = j_7(t);
                                                  else
                                                    {
                                                      if(match_cons(h_6, sym_VAR_0))
                                                        t = k_7(t);
                                                      else
                                                        {
                                                          if(match_cons(h_6, sym_NUM_0))
                                                            t = l_7(t);
                                                          else
                                                            {
                                                              if(match_cons(h_6, sym_MATH_0))
                                                                t = m_7(t);
                                                              else
                                                                {
                                                                  if(match_string(h_6, "sf"))
                                                                    t = n_7(t);
                                                                  else
                                                                    {
                                                                      if(match_string(h_6, "rm"))
                                                                        t = o_7(t);
                                                                      else
                                                                        {
                                                                          if(match_string(h_6, "tt"))
                                                                            t = p_7(t);
                                                                          else
                                                                            {
                                                                              if(match_string(h_6, "md"))
                                                                                t = q_7(t);
                                                                              else
                                                                                {
                                                                                  if(match_string(h_6, "bf"))
                                                                                    t = r_7(t);
                                                                                  else
                                                                                    {
                                                                                      if(match_string(h_6, "up"))
                                                                                        t = s_7(t);
                                                                                      else
                                                                                        {
                                                                                          if(match_string(h_6, "it"))
                                                                                            t = t_7(t);
                                                                                          else
                                                                                            {
                                                                                              if(match_string(h_6, "sc"))
                                                                                                t = u_7(t);
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(h_6, "sl"))
                                                                                                    t = v_7(t);
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(h_6, "em"))
                                                                                                        t = w_7(t);
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(h_6, "tiny"))
                                                                                                            t = x_7(t);
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(h_6, "scriptsize"))
                                                                                                                t = y_7(t);
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(h_6, "footnotesize"))
                                                                                                                    t = a_8(t);
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(h_6, "small"))
                                                                                                                        t = b_8(t);
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(h_6, "normalsize"))
                                                                                                                            t = c_8(t);
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(h_6, "large"))
                                                                                                                                t = d_8(t);
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(h_6, "Large"))
                                                                                                                                    t = e_8(t);
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(h_6, "LARGE"))
                                                                                                                                        t = f_8(t);
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(h_6, "huge"))
                                                                                                                                            t = g_8(t);
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(h_6, "Huge"))
                                                                                                                                                t = h_8(t);
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_cons(h_6, sym_BOXCOLOR_1))
                                                                                                                                                    {
                                                                                                                                                      i_6 = ATgetArgument(h_6, 0);
                                                                                                                                                      t = i_8(t);
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
      t = h_9;
      {
        ATerm m_9 = t;
        if(PushChoice()==0)
          {
            t = C_0(t);
            t = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
            PopChoice();
          }
        else
          {
            t = m_9;
            {
              ATerm n_9 = t;
              if(PushChoice()==0)
                {
                  t = R_0(t);
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
                  PopChoice();
                }
              else
                {
                  t = n_9;
                  {
                    ATerm o_9 = t;
                    if(PushChoice()==0)
                      {
                        t = L_0(t);
                        t = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
                        PopChoice();
                      }
                    else
                      {
                        t = o_9;
                        {
                          ATerm p_9 = t;
                          if(PushChoice()==0)
                            {
                              t = EOR_0(t);
                              t = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
                              PopChoice();
                            }
                          else
                            {
                              t = p_9;
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
ATerm bottomup_1 (ATerm t, ATerm c_50 (ATerm))
{
  ATerm k_8 (ATerm t)
  {
    t = _all(t, k_8);
    t = c_50(t);
    return(t);
  }
  t = k_8(t);
  return(t);
}
ATerm latex2text_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    t = try_1(t, Latex2text_0);
    return(t);
  }
  t = bottomup_1(t, r_0);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_8 = NULL;
  m_8 = t;
  t = SSL_string_to_int(not_null(m_8));
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm w_48 (ATerm))
{
  ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
  b_9 = t;
  r_8 :
  if(match_cons(b_9, sym_Cons_2))
    {
      c_9 = ATgetArgument(b_9, 0);
      d_9 = ATgetArgument(b_9, 1);
      {
        ATerm i_9 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = w_48(t);
        i_9 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_9), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_9), not_null(d_9)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm x_48 (ATerm))
{
  ATerm q_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = q_9;
      {
        ATerm s_0 (ATerm t)
        {
          ATerm r_9 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = r_9;
              t = Cons_2(t, _id, s_0);
              t = Sep_1(t, x_48);
            }
          return(t);
        }
        t = Cons_2(t, _id, s_0);
      }
    }
  return(t);
}
ATerm C_2 (ATerm t, ATerm s_32 (ATerm), ATerm t_32 (ATerm))
{
  ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL;
  x_9 = t;
  w_9 :
  if(match_cons(x_9, sym_C_2))
    {
      y_9 = ATgetArgument(x_9, 0);
      z_9 = ATgetArgument(x_9, 1);
      {
        ATerm c_10 = NULL;
        t = not_null(y_9);
        {
          ATerm k_10 = NULL;
          t = s_32(t);
          c_10 = t;
          t = not_null(z_9);
          t = t_32(t);
          k_10 = t;
          t = (ATerm) ATmakeAppl(sym_C_2, not_null(c_10), not_null(k_10));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm table_row_0 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
  x_10 = t;
  w_10 :
  if(match_cons(x_10, sym_R_2))
    {
      y_10 = ATgetArgument(x_10, 0);
      z_10 = ATgetArgument(x_10, 1);
      t = not_null(z_10);
      {
        ATerm n_11 (ATerm t)
        {
          ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL;
          ATerm s_9 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = s_9;
              {
                ATerm t_9 = t;
                if(PushChoice()==0)
                  {
                    t = Cons_2(t, _id, Nil_0);
                    PopChoice();
                  }
                else
                  {
                    t = t_9;
                    {
                      ATerm u_9 = t;
                      if(PushChoice()==0)
                        {
                          ATerm t_0 (ATerm t)
                          {
                            t = C_2(t, _id, _id);
                            return(t);
                          }
                          ATerm u_0 (ATerm t)
                          {
                            t = Cons_2(t, _id, n_11);
                            return(t);
                          }
                          t = Cons_2(t, t_0, u_0);
                          PopChoice();
                        }
                      else
                        {
                          t = u_9;
                          {
                            ATerm v_9 = t;
                            if(PushChoice()==0)
                              {
                                ATerm v_0 (ATerm t)
                                {
                                  ATerm w_0 (ATerm t)
                                  {
                                    t = C_2(t, _id, _id);
                                    return(t);
                                  }
                                  t = Cons_2(t, w_0, n_11);
                                  return(t);
                                }
                                t = Cons_2(t, _id, v_0);
                                PopChoice();
                              }
                            else
                              {
                                t = v_9;
                                {
                                  ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL;
                                  e_11 = t;
                                  t_10 :
                                  if(match_cons(e_11, sym_Cons_2))
                                    {
                                      f_11 = ATgetArgument(e_11, 0);
                                      g_11 = ATgetArgument(e_11, 1);
                                      v_10 :
                                      if(match_cons(g_11, sym_Cons_2))
                                        {
                                          h_11 = ATgetArgument(g_11, 0);
                                          i_11 = ATgetArgument(g_11, 1);
                                          {
                                            ATerm j_11 = NULL;
                                            if(b_11 != NULL && b_11 != f_11)
                                              _fail(f_11);
                                            else
                                              b_11 = f_11;
                                            if(c_11 != NULL && c_11 != h_11)
                                              _fail(h_11);
                                            else
                                              c_11 = h_11;
                                            if(d_11 != NULL && d_11 != i_11)
                                              _fail(i_11);
                                            else
                                              d_11 = i_11;
                                            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_11), not_null(d_11));
                                            t = n_11(t);
                                            j_11 = t;
                                            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_11), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_CSEP_0), not_null(j_11)));
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
        t = n_11(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MkRows_0 (ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL;
  ATerm a_10 = t;
  if(PushChoice()==0)
    {
      ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL;
      x_11 = t;
      u_11 :
      if(match_cons(x_11, sym_LBL_2))
        {
          y_11 = ATgetArgument(x_11, 0);
          z_11 = ATgetArgument(x_11, 1);
          {
            ATerm a_12 = NULL;
            if(v_11 != NULL && v_11 != y_11)
              _fail(y_11);
            else
              v_11 = y_11;
            if(w_11 != NULL && w_11 != z_11)
              _fail(z_11);
            else
              w_11 = z_11;
            t = not_null(w_11);
            t = table_row_0(t);
            t = not_null(w_11);
            t = table_row_0(t);
            a_12 = t;
            t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(v_11), not_null(a_12));
          }
        }
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = a_10;
      t = table_row_0(t);
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm j_48 (ATerm))
{
  ATerm e_12 (ATerm t)
  {
    ATerm b_10 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, Nil_0);
        t = j_48(t);
        PopChoice();
      }
    else
      {
        t = b_10;
        t = Cons_2(t, _id, e_12);
      }
    return(t);
  }
  t = e_12(t);
  return(t);
}
ATerm table_def_0 (ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL;
  w_12 = t;
  v_12 :
  if(match_cons(w_12, sym_AOPTIONS_1))
    {
      x_12 = ATgetArgument(w_12, 0);
      t = not_null(x_12);
      {
        ATerm x_0 (ATerm t)
        {
          ATerm z_12 = NULL,a_13 = NULL;
          z_12 = t;
          s_12 :
          if(match_cons(z_12, sym_AL_1))
            {
              a_13 = ATgetArgument(z_12, 0);
              {
                ATerm c_13 = NULL;
                t = not_null(a_13);
                t = Hspace_0(t);
                {
                  ATerm e_13 = NULL;
                  t = string_to_int_0(t);
                  c_13 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_13), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("~", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = copy_0(t);
                  e_13 = t;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_L_0), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_13), (ATerm) ATmakeAppl(sym_Nil_0)));
                }
              }
            }
          else
            {
              if(match_cons(z_12, sym_AC_1))
                {
                  a_13 = ATgetArgument(z_12, 0);
                  {
                    ATerm h_13 = NULL;
                    t = not_null(a_13);
                    t = Hspace_0(t);
                    {
                      ATerm j_13 = NULL;
                      t = string_to_int_0(t);
                      h_13 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_13), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("~", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = copy_0(t);
                      j_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_C_0), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_13), (ATerm) ATmakeAppl(sym_Nil_0)));
                    }
                  }
                }
              else
                {
                  if(match_cons(z_12, sym_AR_1))
                    {
                      a_13 = ATgetArgument(z_12, 0);
                      {
                        ATerm m_13 = NULL;
                        t = not_null(a_13);
                        t = Hspace_0(t);
                        {
                          ATerm o_13 = NULL;
                          t = string_to_int_0(t);
                          m_13 = t;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_13), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("~", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = copy_0(t);
                          o_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_R_0), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_13), (ATerm) ATmakeAppl(sym_Nil_0)));
                        }
                      }
                    }
                  else
                    _fail(t);
                }
            }
          return(t);
        }
        t = map_1(t, x_0);
        {
          ATerm y_0 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_CSEP_0), (ATerm) ATmakeAppl(sym_Nil_0));
            return(t);
          }
          t = separate_by_1(t, y_0);
          t = concat_0(t);
          {
            ATerm z_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_EOR_0), (ATerm) ATmakeAppl(sym_Nil_0));
              return(t);
            }
            t = at_last_1(t, z_0);
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL;
  h_14 = t;
  e_14 :
  if(match_cons(h_14, sym_TCons_2))
    {
      i_14 = ATgetArgument(h_14, 0);
      j_14 = ATgetArgument(h_14, 1);
      f_14 :
      if(match_cons(j_14, sym_TCons_2))
        {
          k_14 = ATgetArgument(j_14, 0);
          l_14 = ATgetArgument(j_14, 1);
          g_14 :
          if(match_cons(l_14, sym_TNil_0))
            {
              t = not_null(i_14);
              {
                ATerm a_1 (ATerm t)
                {
                  t = not_null(k_14);
                  return(t);
                }
                t = at_end_1(t, a_1);
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
  ATerm q_14 = NULL;
  q_14 = t;
  p_14 :
  if(!(match_cons(q_14, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm m_33 (ATerm), ATerm n_33 (ATerm))
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
  v_14 = t;
  u_14 :
  if(match_cons(v_14, sym_TCons_2))
    {
      w_14 = ATgetArgument(v_14, 0);
      x_14 = ATgetArgument(v_14, 1);
      {
        ATerm a_15 = NULL;
        t = not_null(w_14);
        {
          ATerm c_15 = NULL;
          t = m_33(t);
          a_15 = t;
          t = not_null(x_14);
          t = n_33(t);
          c_15 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_15), not_null(c_15));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
  l_15 = t;
  i_15 :
  if(match_cons(l_15, sym_TCons_2))
    {
      m_15 = ATgetArgument(l_15, 0);
      n_15 = ATgetArgument(l_15, 1);
      j_15 :
      if(match_cons(n_15, sym_TCons_2))
        {
          o_15 = ATgetArgument(n_15, 0);
          p_15 = ATgetArgument(n_15, 1);
          k_15 :
          if(match_cons(p_15, sym_TNil_0))
            {
              ATerm d_10 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(m_15), not_null(o_15));
                  PopChoice();
                }
              else
                {
                  t = d_10;
                  t = SSL_subtr(not_null(m_15), not_null(o_15));
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
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
  x_15 = t;
  u_15 :
  if(match_cons(x_15, sym_TCons_2))
    {
      y_15 = ATgetArgument(x_15, 0);
      z_15 = ATgetArgument(x_15, 1);
      v_15 :
      if(match_cons(z_15, sym_TCons_2))
        {
          a_16 = ATgetArgument(z_15, 0);
          b_16 = ATgetArgument(z_15, 1);
          w_15 :
          if(match_cons(b_16, sym_TNil_0))
            {
              ATerm e_10;
              e_10 = t;
              {
                ATerm f_10 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(y_15), not_null(a_16));
                    PopChoice();
                  }
                else
                  {
                    t = f_10;
                    t = SSL_gtr(not_null(y_15), not_null(a_16));
                  }
              }
              t = e_10;
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
  ATerm j_16 = NULL;
  ATerm g_10 = t;
  if(PushChoice()==0)
    {
      ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
      k_16 = t;
      g_16 :
      if(match_cons(k_16, sym_TCons_2))
        {
          l_16 = ATgetArgument(k_16, 0);
          m_16 = ATgetArgument(k_16, 1);
          h_16 :
          if(match_cons(m_16, sym_TCons_2))
            {
              n_16 = ATgetArgument(m_16, 0);
              o_16 = ATgetArgument(m_16, 1);
              i_16 :
              if(match_cons(o_16, sym_TNil_0))
                {
                  if(j_16 != NULL && j_16 != l_16)
                    _fail(l_16);
                  else
                    j_16 = l_16;
                  if(j_16 != NULL && j_16 != n_16)
                    _fail(n_16);
                  else
                    j_16 = n_16;
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
      t = g_10;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm v_53 (ATerm), ATerm w_53 (ATerm))
{
  ATerm q_16 (ATerm t)
  {
    ATerm h_10 = t;
    if(PushChoice()==0)
      {
        t = v_53(t);
        PopChoice();
      }
    else
      {
        t = h_10;
        t = w_53(t);
        t = q_16(t);
      }
    return(t);
  }
  t = q_16(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm y_53 (ATerm), ATerm z_53 (ATerm), ATerm a_54 (ATerm))
{
  t = y_53(t);
  t = while_not_2(t, z_53, a_54);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm i_10 = t;
  if(PushChoice()==0)
    {
      ATerm b_1 (ATerm t)
      {
        ATerm i_17 = NULL,j_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL;
        i_17 = t;
        s_16 :
        if(match_cons(i_17, sym_TCons_2))
          {
            j_17 = ATgetArgument(i_17, 0);
            n_17 = ATgetArgument(i_17, 1);
            t_16 :
            if(match_cons(n_17, sym_TCons_2))
              {
                o_17 = ATgetArgument(n_17, 0);
                p_17 = ATgetArgument(n_17, 1);
                u_16 :
                if(match_cons(p_17, sym_TNil_0))
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_17), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
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
      ATerm c_1 (ATerm t)
      {
        ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,y_17 = NULL,z_17 = NULL;
        s_17 = t;
        w_16 :
        if(match_cons(s_17, sym_TCons_2))
          {
            t_17 = ATgetArgument(s_17, 0);
            u_17 = ATgetArgument(s_17, 1);
            x_16 :
            if(match_int(t_17, 0))
              {
                y_16 :
                if(match_cons(u_17, sym_TCons_2))
                  {
                    v_17 = ATgetArgument(u_17, 0);
                    w_17 = ATgetArgument(u_17, 1);
                    z_16 :
                    if(match_cons(w_17, sym_TCons_2))
                      {
                        y_17 = ATgetArgument(w_17, 0);
                        z_17 = ATgetArgument(w_17, 1);
                        a_17 :
                        if(match_cons(z_17, sym_TNil_0))
                          t = not_null(y_17);
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
      ATerm d_1 (ATerm t)
      {
        ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
        c_18 = t;
        d_17 :
        if(match_cons(c_18, sym_TCons_2))
          {
            d_18 = ATgetArgument(c_18, 0);
            e_18 = ATgetArgument(c_18, 1);
            e_17 :
            if(match_cons(e_18, sym_TCons_2))
              {
                f_18 = ATgetArgument(e_18, 0);
                g_18 = ATgetArgument(e_18, 1);
                f_17 :
                if(match_cons(g_18, sym_TCons_2))
                  {
                    h_18 = ATgetArgument(g_18, 0);
                    i_18 = ATgetArgument(g_18, 1);
                    g_17 :
                    if(match_cons(i_18, sym_TNil_0))
                      {
                        ATerm n_18 = NULL;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_18), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                        t = geq_0(t);
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_18), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                        t = subt_0(t);
                        n_18 = t;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_18), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_18), not_null(h_18)), (ATerm) ATmakeAppl(sym_TNil_0))));
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
      t = for_3(t, b_1, c_1, d_1);
      PopChoice();
    }
  else
    {
      t = i_10;
      {
        ATerm e_1 (ATerm t)
        {
          ATerm p_18 = NULL;
          p_18 = t;
          h_17 :
          if(!(match_int(p_18, 0)))
            _fail(t);
          return(t);
        }
        ATerm f_1 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, e_1, f_1);
        t = (ATerm) ATmakeAppl(sym_Nil_0);
      }
    }
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm v_18 = NULL;
  v_18 = t;
  u_18 :
  if(!(match_cons(v_18, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0 (ATerm t)
{
  ATerm x_18 = NULL;
  ATerm j_10 = t;
  if(PushChoice()==0)
    {
      ATerm g_1 (ATerm t)
      {
        ATerm h_1 (ATerm t)
        {
          ATerm y_18 = NULL;
          y_18 = t;
          if(x_18 != NULL && x_18 != y_18)
            _fail(y_18);
          else
            x_18 = y_18;
          return(t);
        }
        t = SOpt_2(t, VS_0, h_1);
        return(t);
      }
      t = fetch_1(t, g_1);
      t = not_null(x_18);
      PopChoice();
    }
  else
    {
      t = j_10;
      t = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
    }
  return(t);
}
ATerm R_2 (ATerm t, ATerm b_32 (ATerm), ATerm c_32 (ATerm))
{
  ATerm e_19 = NULL,h_19 = NULL,i_19 = NULL;
  e_19 = t;
  d_19 :
  if(match_cons(e_19, sym_R_2))
    {
      h_19 = ATgetArgument(e_19, 0);
      i_19 = ATgetArgument(e_19, 1);
      {
        ATerm s_19 = NULL;
        t = not_null(h_19);
        {
          ATerm u_19 = NULL;
          t = b_32(t);
          s_19 = t;
          t = not_null(i_19);
          t = c_32(t);
          u_19 = t;
          t = (ATerm) ATmakeAppl(sym_R_2, not_null(s_19), not_null(u_19));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm filter_1 (ATerm t, ATerm q_41 (ATerm))
{
  ATerm l_10 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = l_10;
      {
        ATerm m_10 = t;
        if(PushChoice()==0)
          {
            ATerm j_1 (ATerm t)
            {
              t = filter_1(t, q_41);
              return(t);
            }
            t = Cons_2(t, q_41, j_1);
            PopChoice();
          }
        else
          {
            t = m_10;
            {
              ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
              b_20 = t;
              a_20 :
              if(match_cons(b_20, sym_Cons_2))
                {
                  c_20 = ATgetArgument(b_20, 0);
                  d_20 = ATgetArgument(b_20, 1);
                  t = not_null(d_20);
                  t = filter_1(t, q_41);
                }
              else
                _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm construct_rows_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = split_2(t, _id, l_1);
  {
    ATerm a_22 (ATerm t)
    {
      ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL;
      ATerm d_22 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_21), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_21), not_null(g_21)), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = a_22(t);
        return(t);
      }
      b_21 = t;
      q_20 :
      if(match_cons(b_21, sym_TCons_2))
        {
          c_21 = ATgetArgument(b_21, 0);
          f_21 = ATgetArgument(b_21, 1);
          r_20 :
          if(match_cons(c_21, sym_Nil_0))
            {
              s_20 :
              if(match_cons(f_21, sym_TCons_2))
                {
                  g_21 = ATgetArgument(f_21, 0);
                  h_21 = ATgetArgument(f_21, 1);
                  t_20 :
                  if(match_cons(h_21, sym_TNil_0))
                    {
                      ATerm m_21 = NULL;
                      t = not_null(g_21);
                      t = reverse_0(t);
                      m_21 = t;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_R_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(m_21)), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(c_21, sym_Cons_2))
                {
                  d_21 = ATgetArgument(c_21, 0);
                  e_21 = ATgetArgument(c_21, 1);
                  u_20 :
                  if(match_cons(f_21, sym_TCons_2))
                    {
                      g_21 = ATgetArgument(f_21, 0);
                      h_21 = ATgetArgument(f_21, 1);
                      v_20 :
                      if(match_cons(h_21, sym_TNil_0))
                        {
                          w_20 :
                          if(match_cons(d_21, sym_R_2))
                            {
                              z_20 = ATgetArgument(d_21, 0);
                              a_21 = ATgetArgument(d_21, 1);
                              {
                                ATerm n_10 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm s_21 = NULL;
                                    t = not_null(g_21);
                                    {
                                      ATerm u_21 = NULL;
                                      t = reverse_0(t);
                                      s_21 = t;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_21), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = a_22(t);
                                      u_21 = t;
                                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_R_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(s_21)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_R_2, not_null(z_20), not_null(a_21)), not_null(u_21)));
                                    }
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = n_10;
                                    t = d_22(t);
                                  }
                              }
                            }
                          else
                            t = d_22(t);
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
    t = a_22(t);
    {
      ATerm u_1 (ATerm t)
      {
        ATerm o_10 = t;
        if(PushChoice()==0)
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          t = o_10;
        return(t);
      }
      t = filter_1(t, u_1);
    }
  }
  return(t);
}
ATerm IS_0 (ATerm t)
{
  ATerm i_22 = NULL;
  i_22 = t;
  h_22 :
  if(!(match_cons(i_22, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0 (ATerm t)
{
  ATerm k_22 = NULL;
  ATerm p_10 = t;
  if(PushChoice()==0)
    {
      ATerm v_1 (ATerm t)
      {
        ATerm w_1 (ATerm t)
        {
          ATerm l_22 = NULL;
          l_22 = t;
          if(k_22 != NULL && k_22 != l_22)
            _fail(l_22);
          else
            k_22 = l_22;
          return(t);
        }
        t = SOpt_2(t, IS_0, w_1);
        return(t);
      }
      t = fetch_1(t, v_1);
      t = not_null(k_22);
      PopChoice();
    }
  else
    {
      t = p_10;
      t = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
    }
  return(t);
}
ATerm HS_0 (ATerm t)
{
  ATerm o_22 = NULL;
  o_22 = t;
  n_22 :
  if(!(match_cons(o_22, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm m_31 (ATerm), ATerm n_31 (ATerm))
{
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL;
  t_22 = t;
  s_22 :
  if(match_cons(t_22, sym_SOpt_2))
    {
      u_22 = ATgetArgument(t_22, 0);
      v_22 = ATgetArgument(t_22, 1);
      {
        ATerm y_22 = NULL;
        t = not_null(u_22);
        {
          ATerm a_23 = NULL;
          t = m_31(t);
          y_22 = t;
          t = not_null(v_22);
          t = n_31(t);
          a_23 = t;
          t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(y_22), not_null(a_23));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Hspace_0 (ATerm t)
{
  ATerm g_23 = NULL;
  ATerm q_10 = t;
  if(PushChoice()==0)
    {
      ATerm f_2 (ATerm t)
      {
        ATerm g_2 (ATerm t)
        {
          ATerm h_23 = NULL;
          h_23 = t;
          if(g_23 != NULL && g_23 != h_23)
            _fail(h_23);
          else
            g_23 = h_23;
          return(t);
        }
        t = SOpt_2(t, HS_0, g_2);
        return(t);
      }
      t = fetch_1(t, f_2);
      t = not_null(g_23);
      PopChoice();
    }
  else
    {
      t = q_10;
      t = (ATerm) ATmakeAppl(ATmakeSymbol("1", 0, ATtrue));
    }
  return(t);
}
ATerm toh_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
    return(t);
  }
  t = separate_by_1(t, h_2);
  return(t);
}
ATerm CL_0 (ATerm t)
{
  ATerm k_23 = NULL;
  k_23 = t;
  j_23 :
  if(!(match_cons(k_23, sym_CL_0)))
    _fail(t);
  return(t);
}
ATerm FFID_2 (ATerm t, ATerm j_32 (ATerm), ATerm k_32 (ATerm))
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
  p_23 = t;
  o_23 :
  if(match_cons(p_23, sym_FFID_2))
    {
      q_23 = ATgetArgument(p_23, 0);
      r_23 = ATgetArgument(p_23, 1);
      {
        ATerm u_23 = NULL;
        t = not_null(q_23);
        {
          ATerm w_23 = NULL;
          t = j_32(t);
          u_23 = t;
          t = not_null(r_23);
          t = k_32(t);
          w_23 = t;
          t = (ATerm) ATmakeAppl(sym_FFID_2, not_null(u_23), not_null(w_23));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SZ_0 (ATerm t)
{
  ATerm c_24 = NULL;
  c_24 = t;
  b_24 :
  if(!(match_cons(c_24, sym_SZ_0)))
    _fail(t);
  return(t);
}
ATerm SH_0 (ATerm t)
{
  ATerm e_24 = NULL;
  e_24 = t;
  d_24 :
  if(!(match_cons(e_24, sym_SH_0)))
    _fail(t);
  return(t);
}
ATerm SE_0 (ATerm t)
{
  ATerm g_24 = NULL;
  g_24 = t;
  f_24 :
  if(!(match_cons(g_24, sym_SE_0)))
    _fail(t);
  return(t);
}
ATerm FM_0 (ATerm t)
{
  ATerm i_24 = NULL;
  i_24 = t;
  h_24 :
  if(!(match_cons(i_24, sym_FM_0)))
    _fail(t);
  return(t);
}
ATerm MATH_0 (ATerm t)
{
  ATerm k_24 = NULL;
  k_24 = t;
  j_24 :
  if(!(match_cons(k_24, sym_MATH_0)))
    _fail(t);
  return(t);
}
ATerm NUM_0 (ATerm t)
{
  ATerm m_24 = NULL;
  m_24 = t;
  l_24 :
  if(!(match_cons(m_24, sym_NUM_0)))
    _fail(t);
  return(t);
}
ATerm VAR_0 (ATerm t)
{
  ATerm o_24 = NULL;
  o_24 = t;
  n_24 :
  if(!(match_cons(o_24, sym_VAR_0)))
    _fail(t);
  return(t);
}
ATerm KW_0 (ATerm t)
{
  ATerm q_24 = NULL;
  q_24 = t;
  p_24 :
  if(!(match_cons(q_24, sym_KW_0)))
    _fail(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL;
  t_24 = t;
  s_24 :
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
ATerm remove_trailing_1 (ATerm t, ATerm q_54 (ATerm))
{
  ATerm b_25 (ATerm t)
  {
    ATerm r_10 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, q_54, _id);
        t = Tl_0(t);
        t = b_25(t);
        PopChoice();
      }
    else
      t = r_10;
    return(t);
  }
  t = b_25(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm d_48 (ATerm))
{
  ATerm c_25 (ATerm t)
  {
    ATerm s_10 = t;
    if(PushChoice()==0)
      {
        t = d_48(t);
        PopChoice();
      }
    else
      {
        t = s_10;
        t = Cons_2(t, _id, c_25);
      }
    return(t);
  }
  t = c_25(t);
  return(t);
}
ATerm LatexComment_0 (ATerm t)
{
  ATerm n_25 = NULL;
  ATerm i_2 (ATerm t)
  {
    ATerm m_25 = NULL;
    m_25 = t;
    d_25 :
    if(!(match_int(m_25, 9)))
      {
        if(!(match_int(m_25, 32)))
          _fail(t);
      }
    return(t);
  }
  t = remove_trailing_1(t, i_2);
  {
    ATerm j_2 (ATerm t)
    {
      ATerm k_2 (ATerm t)
      {
        ATerm m_2 (ATerm t)
        {
          ATerm o_25 = NULL;
          o_25 = t;
          e_25 :
          if(!(match_int(o_25, 37)))
            _fail(t);
          return(t);
        }
        ATerm o_2 (ATerm t)
        {
          ATerm q_2 (ATerm t)
          {
            ATerm p_25 = NULL;
            p_25 = t;
            f_25 :
            if(!(match_int(p_25, 37)))
              _fail(t);
            return(t);
          }
          ATerm r_2 (ATerm t)
          {
            ATerm w_25 = NULL;
            w_25 = t;
            if(n_25 != NULL && n_25 != w_25)
              _fail(w_25);
            else
              n_25 = w_25;
            return(t);
          }
          t = Cons_2(t, q_2, r_2);
          return(t);
        }
        t = Cons_2(t, m_2, o_2);
        t = not_null(n_25);
        return(t);
      }
      t = at_suffix_1(t, k_2);
      return(t);
    }
    t = try_1(t, j_2);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm make_latex_comment_0 (ATerm t)
{
  t = explode_string_0(t);
  t = reverse_0(t);
  {
    ATerm s_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_Nil_0);
      return(t);
    }
    t = split_2(t, _id, s_2);
    {
      ATerm h_31 (ATerm t)
      {
        ATerm o_26 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
        ATerm k_31 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_30), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_30), not_null(m_30)), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = h_31(t);
          return(t);
        }
        o_26 = t;
        e_26 :
        if(match_cons(o_26, sym_TCons_2))
          {
            i_30 = ATgetArgument(o_26, 0);
            l_30 = ATgetArgument(o_26, 1);
            f_26 :
            if(match_cons(i_30, sym_Nil_0))
              {
                g_26 :
                if(match_cons(l_30, sym_TCons_2))
                  {
                    m_30 = ATgetArgument(l_30, 0);
                    n_30 = ATgetArgument(l_30, 1);
                    h_26 :
                    if(match_cons(n_30, sym_TNil_0))
                      {
                        ATerm r_30 = NULL;
                        t = not_null(m_30);
                        t = LatexComment_0(t);
                        r_30 = t;
                        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_30), (ATerm) ATmakeAppl(sym_Nil_0));
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              {
                if(match_cons(i_30, sym_Cons_2))
                  {
                    j_30 = ATgetArgument(i_30, 0);
                    k_30 = ATgetArgument(i_30, 1);
                    i_26 :
                    if(match_cons(l_30, sym_TCons_2))
                      {
                        m_30 = ATgetArgument(l_30, 0);
                        n_30 = ATgetArgument(l_30, 1);
                        j_26 :
                        if(match_cons(n_30, sym_TNil_0))
                          {
                            k_26 :
                            if(match_int(j_30, 10))
                              {
                                ATerm u_10 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm w_30 = NULL;
                                    t = not_null(m_30);
                                    {
                                      ATerm y_30 = NULL;
                                      t = LatexComment_0(t);
                                      w_30 = t;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_30), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = h_31(t);
                                      y_30 = t;
                                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_30), not_null(y_30));
                                    }
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = u_10;
                                    t = k_31(t);
                                  }
                              }
                            else
                              t = k_31(t);
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
      t = h_31(t);
      {
        ATerm t_2 (ATerm t)
        {
          ATerm d_31 = NULL;
          d_31 = t;
          l_26 :
          if(!(match_string(d_31, "")))
            _fail(t);
          return(t);
        }
        t = remove_trailing_1(t, t_2);
        t = reverse_0(t);
        {
          ATerm u_2 (ATerm t)
          {
            ATerm e_31 = NULL;
            e_31 = t;
            m_26 :
            if(!(match_string(e_31, "")))
              _fail(t);
            return(t);
          }
          t = remove_trailing_1(t, u_2);
          {
            ATerm w_2 (ATerm t)
            {
              ATerm f_31 = NULL;
              f_31 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_31), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)));
              return(t);
            }
            t = map_1(t, w_2);
          }
        }
      }
    }
  }
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm a_11 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = a_11;
      t = Cons_2(t, _id, _id);
    }
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL;
  ATerm k_11 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = k_11;
      {
        ATerm l_11 = t;
        if(PushChoice()==0)
          {
            ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
            ATerm e_32 (ATerm t)
            {
              if(v_31 != NULL && v_31 != y_31)
                _fail(y_31);
              else
                v_31 = y_31;
              if(w_31 != NULL && w_31 != z_31)
                _fail(z_31);
              else
                w_31 = z_31;
              t = not_null(v_31);
              t = is_list_0(t);
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_31), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_31), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = conc_0(t);
              t = flat_list_0(t);
              return(t);
            }
            x_31 = t;
            t_31 :
            if(match_cons(x_31, sym_Cons_2))
              {
                y_31 = ATgetArgument(x_31, 0);
                z_31 = ATgetArgument(x_31, 1);
                u_31 :
                if(match_cons(y_31, sym_Nil_0))
                  {
                    ATerm m_11 = t;
                    if(PushChoice()==0)
                      {
                        if(w_31 != NULL && w_31 != z_31)
                          _fail(z_31);
                        else
                          w_31 = z_31;
                        {
                          ATerm x_2 (ATerm t)
                          {
                            t = not_null(w_31);
                            t = flat_list_0(t);
                            return(t);
                          }
                          t = Cons_2(t, Nil_0, x_2);
                        }
                        PopChoice();
                      }
                    else
                      {
                        t = m_11;
                        t = e_32(t);
                      }
                  }
                else
                  t = e_32(t);
              }
            else
              _fail(t);
            PopChoice();
          }
        else
          {
            t = l_11;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm q_51 (ATerm))
{
  ATerm f_32 (ATerm t)
  {
    ATerm o_11 = t;
    if(PushChoice()==0)
      {
        t = q_51(t);
        PopChoice();
      }
    else
      {
        t = o_11;
        t = _one(t, f_32);
      }
    return(t);
  }
  t = f_32(t);
  return(t);
}
ATerm replace_quotes_0 (ATerm t)
{
  ATerm o_32 = NULL,x_32 = NULL;
  ATerm z_2 (ATerm t)
  {
    ATerm p_32 = NULL;
    p_32 = t;
    g_32 :
    if(!(match_int(p_32, 34)))
      _fail(t);
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm q_32 = NULL;
    q_32 = t;
    if(o_32 != NULL && o_32 != q_32)
      _fail(q_32);
    else
      o_32 = q_32;
    return(t);
  }
  t = Cons_2(t, z_2, a_3);
  t = not_null(o_32);
  {
    ATerm c_3 (ATerm t)
    {
      ATerm r_32 = NULL,u_32 = NULL,v_32 = NULL;
      r_32 = t;
      l_32 :
      if(match_cons(r_32, sym_Cons_2))
        {
          u_32 = ATgetArgument(r_32, 0);
          v_32 = ATgetArgument(r_32, 1);
          m_32 :
          if(match_int(u_32, 34))
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(39), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(39), not_null(v_32)));
          else
            _fail(t);
        }
      else
        _fail(t);
      return(t);
    }
    t = oncetd_1(t, c_3);
    x_32 = t;
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(96), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(96), not_null(x_32)));
  }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm n_48 (ATerm))
{
  ATerm c_33 (ATerm t)
  {
    t = n_48(t);
    {
      ATerm p_11 = t;
      if(PushChoice()==0)
        {
          t = Nil_0(t);
          PopChoice();
        }
      else
        {
          t = p_11;
          t = Cons_2(t, _id, c_33);
        }
    }
    return(t);
  }
  t = c_33(t);
  return(t);
}
ATerm latex_string_0 (ATerm t)
{
  ATerm y_33 = NULL;
  ATerm q_11 = t;
  if(PushChoice()==0)
    {
      ATerm z_33 = NULL;
      z_33 = t;
      if(y_33 != NULL && y_33 != z_33)
        _fail(z_33);
      else
        y_33 = z_33;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_33), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = table_get_0(t);
      PopChoice();
    }
  else
    {
      t = q_11;
      t = explode_string_0(t);
      {
        ATerm e_3 (ATerm t)
        {
          t = try_1(t, replace_quotes_0);
          return(t);
        }
        t = listtd_1(t, e_3);
        {
          ATerm f_3 (ATerm t)
          {
            ATerm g_3 (ATerm t)
            {
              ATerm a_34 = NULL;
              a_34 = t;
              x_33 :
              if(match_int(a_34, 32))
                {
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
                  t = explode_string_0(t);
                }
              else
                {
                  if(match_int(a_34, 35))
                    {
                      t = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
                      t = explode_string_0(t);
                    }
                  else
                    {
                      if(match_int(a_34, 36))
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
                          t = explode_string_0(t);
                        }
                      else
                        {
                          if(match_int(a_34, 37))
                            {
                              t = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
                              t = explode_string_0(t);
                            }
                          else
                            {
                              if(match_int(a_34, 38))
                                {
                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
                                  t = explode_string_0(t);
                                }
                              else
                                {
                                  if(match_int(a_34, 45))
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
                                      t = explode_string_0(t);
                                    }
                                  else
                                    {
                                      if(match_int(a_34, 60))
                                        {
                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
                                          t = explode_string_0(t);
                                        }
                                      else
                                        {
                                          if(match_int(a_34, 62))
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
                                              t = explode_string_0(t);
                                            }
                                          else
                                            {
                                              if(match_int(a_34, 92))
                                                {
                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
                                                  t = explode_string_0(t);
                                                }
                                              else
                                                {
                                                  if(match_int(a_34, 94))
                                                    {
                                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
                                                      t = explode_string_0(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_int(a_34, 95))
                                                        {
                                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
                                                          t = explode_string_0(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_int(a_34, 123))
                                                            {
                                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
                                                              t = explode_string_0(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_int(a_34, 124))
                                                                {
                                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
                                                                  t = explode_string_0(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_int(a_34, 125))
                                                                    {
                                                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
                                                                      t = explode_string_0(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_int(a_34, 126))
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
            t = try_1(t, g_3);
            return(t);
          }
          t = map_1(t, f_3);
          t = flat_list_0(t);
          t = implode_string_0(t);
        }
      }
    }
  return(t);
}
ATerm Abox_2_latex_0 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL;
  ATerm a_40 (ATerm t)
  {
    t = not_null(p_36);
    {
      ATerm r_11 = t;
      if(PushChoice()==0)
        {
          t = KW_0(t);
          PopChoice();
        }
      else
        {
          t = r_11;
          {
            ATerm s_11 = t;
            if(PushChoice()==0)
              {
                t = VAR_0(t);
                PopChoice();
              }
            else
              {
                t = s_11;
                {
                  ATerm t_11 = t;
                  if(PushChoice()==0)
                    {
                      t = NUM_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = t_11;
                      t = MATH_0(t);
                    }
                }
              }
          }
        }
      t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(p_36), not_null(q_36));
    }
    return(t);
  }
  ATerm b_40 (ATerm t)
  {
    t = not_null(q_36);
    return(t);
  }
  ATerm c_40 (ATerm t)
  {
    ATerm k_37 = NULL,l_37 = NULL;
    t = not_null(l_36);
    {
      ATerm b_12 = t;
      if(PushChoice()==0)
        {
          ATerm r_3 (ATerm t)
          {
            ATerm m_37 = NULL;
            m_37 = t;
            if(l_37 != NULL && l_37 != m_37)
              _fail(m_37);
            else
              l_37 = m_37;
            return(t);
          }
          t = FFID_2(t, FM_0, r_3);
          PopChoice();
        }
      else
        {
          t = b_12;
          {
            ATerm c_12 = t;
            if(PushChoice()==0)
              {
                ATerm t_3 (ATerm t)
                {
                  ATerm n_37 = NULL;
                  n_37 = t;
                  if(l_37 != NULL && l_37 != n_37)
                    _fail(n_37);
                  else
                    l_37 = n_37;
                  return(t);
                }
                t = FFID_2(t, SE_0, t_3);
                PopChoice();
              }
            else
              {
                t = c_12;
                {
                  ATerm d_12 = t;
                  if(PushChoice()==0)
                    {
                      ATerm u_3 (ATerm t)
                      {
                        ATerm o_37 = NULL;
                        o_37 = t;
                        if(l_37 != NULL && l_37 != o_37)
                          _fail(o_37);
                        else
                          l_37 = o_37;
                        return(t);
                      }
                      t = FFID_2(t, SH_0, u_3);
                      PopChoice();
                    }
                  else
                    {
                      t = d_12;
                      {
                        ATerm f_12 = t;
                        if(PushChoice()==0)
                          {
                            ATerm v_3 (ATerm t)
                            {
                              ATerm p_37 = NULL;
                              p_37 = t;
                              if(l_37 != NULL && l_37 != p_37)
                                _fail(p_37);
                              else
                                l_37 = p_37;
                              return(t);
                            }
                            t = FFID_2(t, SZ_0, v_3);
                            PopChoice();
                          }
                        else
                          {
                            t = f_12;
                            {
                              ATerm r_37 = NULL;
                              ATerm x_3 (ATerm t)
                              {
                                ATerm q_37 = NULL;
                                q_37 = t;
                                if(k_37 != NULL && k_37 != q_37)
                                  _fail(q_37);
                                else
                                  k_37 = q_37;
                                return(t);
                              }
                              t = FFID_2(t, CL_0, x_3);
                              t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, not_null(k_37));
                              r_37 = t;
                              if(l_37 != NULL && l_37 != r_37)
                                _fail(r_37);
                              else
                                l_37 = r_37;
                            }
                          }
                      }
                    }
                }
              }
          }
        }
      t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(l_37), (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, not_null(m_36)), not_null(q_36)));
    }
    return(t);
  }
  ATerm d_40 (ATerm t)
  {
    ATerm w_37 = NULL;
    t = not_null(p_36);
    {
      ATerm z_37 = NULL;
      t = Hspace_0(t);
      w_37 = t;
      t = not_null(q_36);
      t = toh_0(t);
      z_37 = t;
      t = (ATerm) ATmakeAppl(sym_HBOX_2, not_null(w_37), not_null(z_37));
    }
    return(t);
  }
  ATerm e_40 (ATerm t)
  {
    ATerm d_38 = NULL;
    t = not_null(p_36);
    {
      ATerm f_38 = NULL;
      t = Vspace_0(t);
      d_38 = t;
      t = not_null(p_36);
      {
        ATerm h_38 = NULL;
        t = Ispace_0(t);
        f_38 = t;
        t = not_null(q_36);
        {
          ATerm y_3 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
            return(t);
          }
          t = separate_by_1(t, y_3);
          h_38 = t;
          t = (ATerm) ATmakeAppl(sym_VBOX_3, not_null(d_38), not_null(f_38), not_null(h_38));
        }
      }
    }
    return(t);
  }
  ATerm f_40 (ATerm t)
  {
    ATerm l_38 = NULL;
    t = not_null(p_36);
    {
      ATerm n_38 = NULL;
      t = Hspace_0(t);
      l_38 = t;
      t = not_null(p_36);
      {
        ATerm p_38 = NULL;
        t = Vspace_0(t);
        n_38 = t;
        t = not_null(p_36);
        {
          ATerm r_38 = NULL;
          t = Ispace_0(t);
          p_38 = t;
          t = not_null(q_36);
          {
            ATerm z_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
              return(t);
            }
            t = separate_by_1(t, z_3);
            r_38 = t;
            t = (ATerm) ATmakeAppl(sym_HVBOX_4, not_null(l_38), not_null(n_38), not_null(p_38), not_null(r_38));
          }
        }
      }
    }
    return(t);
  }
  ATerm g_40 (ATerm t)
  {
    ATerm x_38 = NULL;
    t = not_null(n_36);
    {
      ATerm z_38 = NULL;
      t = construct_rows_0(t);
      x_38 = t;
      t = not_null(q_36);
      t = Vspace_0(t);
      {
        ATerm b_39 = NULL;
        t = string_to_int_0(t);
        z_38 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_38), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_EOR_0), (ATerm) ATmakeAppl(sym_TNil_0)));
        {
          ATerm d_39 = NULL;
          t = copy_0(t);
          b_39 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_39), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_EOR_0), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          {
            ATerm g_39 = NULL;
            t = conc_0(t);
            d_39 = t;
            t = not_null(p_36);
            {
              ATerm i_39 = NULL;
              t = table_def_0(t);
              g_39 = t;
              t = not_null(x_38);
              t = map_1(t, MkRows_0);
              {
                ATerm a_4 (ATerm t)
                {
                  t = not_null(d_39);
                  return(t);
                }
                t = separate_by_1(t, a_4);
                i_39 = t;
                t = (ATerm) ATmakeAppl(sym_ABOX_2, not_null(g_39), not_null(i_39));
              }
            }
          }
        }
      }
    }
    return(t);
  }
  ATerm h_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_ALTBOX_2, not_null(p_36), not_null(q_36));
    return(t);
  }
  ATerm i_40 (ATerm t)
  {
    ATerm p_39 = NULL;
    ATerm g_12 = t;
    if(PushChoice()==0)
      {
        ATerm q_39 = NULL;
        t = not_null(p_36);
        t = string_to_int_0(t);
        q_39 = t;
        if(p_39 != NULL && p_39 != q_39)
          _fail(q_39);
        else
          p_39 = q_39;
        PopChoice();
      }
    else
      {
        t = g_12;
        {
          ATerm h_12 = t;
          if(PushChoice()==0)
            {
              ATerm s_39 = NULL;
              t = not_null(p_36);
              t = explode_string_0(t);
              {
                ATerm b_4 (ATerm t)
                {
                  ATerm r_39 = NULL;
                  r_39 = t;
                  d_36 :
                  if(!(match_int(r_39, 61)))
                    _fail(t);
                  return(t);
                }
                t = Cons_2(t, b_4, _id);
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(61), (ATerm) ATmakeAppl(sym_Nil_0));
                t = implode_string_0(t);
                s_39 = t;
                if(p_39 != NULL && p_39 != s_39)
                  _fail(s_39);
                else
                  p_39 = s_39;
              }
              PopChoice();
            }
          else
            {
              t = h_12;
              {
                ATerm t_39 = NULL;
                t = not_null(p_36);
                t_39 = t;
                if(p_39 != NULL && p_39 != t_39)
                  _fail(t_39);
                else
                  p_39 = t_39;
              }
            }
        }
      }
    t = (ATerm) ATmakeAppl(sym_LBOX_2, not_null(p_39), not_null(q_36));
    return(t);
  }
  ATerm j_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(p_36), not_null(q_36));
    return(t);
  }
  ATerm k_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_REFBOX_2, not_null(p_36), not_null(q_36));
    return(t);
  }
  o_36 = t;
  g_36 :
  if(match_cons(o_36, sym_S_1))
    {
      p_36 = ATgetArgument(o_36, 0);
      t = not_null(p_36);
      t = latex_string_0(t);
    }
  else
    {
      if(match_cons(o_36, sym_C_2))
        {
          p_36 = ATgetArgument(o_36, 0);
          q_36 = ATgetArgument(o_36, 1);
          h_36 :
          if(match_cons(p_36, sym_Nil_0))
            {
              ATerm w_36 = NULL;
              t = not_null(q_36);
              {
                ATerm c_4 (ATerm t)
                {
                  ATerm t_36 = NULL,u_36 = NULL;
                  t_36 = t;
                  f_35 :
                  if(match_cons(t_36, sym_S_1))
                    {
                      u_36 = ATgetArgument(t_36, 0);
                      t = not_null(u_36);
                      t = make_latex_comment_0(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = map_1(t, c_4);
                w_36 = t;
                t = (ATerm) ATmakeAppl(sym_CBOX_1, not_null(w_36));
              }
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(o_36, sym_FBOX_2))
            {
              p_36 = ATgetArgument(o_36, 0);
              q_36 = ATgetArgument(o_36, 1);
              i_36 :
              if(match_cons(p_36, sym_F_1))
                {
                  k_36 = ATgetArgument(p_36, 0);
                  j_36 :
                  if(match_cons(k_36, sym_Nil_0))
                    {
                      ATerm i_12 = t;
                      if(PushChoice()==0)
                        {
                          t = a_40(t);
                          PopChoice();
                        }
                      else
                        {
                          t = i_12;
                          t = b_40(t);
                        }
                    }
                  else
                    {
                      if(match_cons(k_36, sym_Cons_2))
                        {
                          l_36 = ATgetArgument(k_36, 0);
                          m_36 = ATgetArgument(k_36, 1);
                          {
                            ATerm j_12 = t;
                            if(PushChoice()==0)
                              {
                                t = a_40(t);
                                PopChoice();
                              }
                            else
                              {
                                t = j_12;
                                t = c_40(t);
                              }
                          }
                        }
                      else
                        t = a_40(t);
                    }
                }
              else
                t = a_40(t);
            }
          else
            {
              if(match_cons(o_36, sym_H_2))
                {
                  p_36 = ATgetArgument(o_36, 0);
                  q_36 = ATgetArgument(o_36, 1);
                  t = d_40(t);
                }
              else
                {
                  if(match_cons(o_36, sym_V_2))
                    {
                      p_36 = ATgetArgument(o_36, 0);
                      q_36 = ATgetArgument(o_36, 1);
                      t = e_40(t);
                    }
                  else
                    {
                      if(match_cons(o_36, sym_HV_2))
                        {
                          p_36 = ATgetArgument(o_36, 0);
                          q_36 = ATgetArgument(o_36, 1);
                          t = f_40(t);
                        }
                      else
                        {
                          if(match_cons(o_36, sym_A_3))
                            {
                              p_36 = ATgetArgument(o_36, 0);
                              q_36 = ATgetArgument(o_36, 1);
                              n_36 = ATgetArgument(o_36, 2);
                              t = g_40(t);
                            }
                          else
                            {
                              if(match_cons(o_36, sym_ALT_2))
                                {
                                  p_36 = ATgetArgument(o_36, 0);
                                  q_36 = ATgetArgument(o_36, 1);
                                  t = h_40(t);
                                }
                              else
                                {
                                  if(match_cons(o_36, sym_L_2))
                                    {
                                      p_36 = ATgetArgument(o_36, 0);
                                      q_36 = ATgetArgument(o_36, 1);
                                      t = i_40(t);
                                    }
                                  else
                                    {
                                      if(match_cons(o_36, sym_LBL_2))
                                        {
                                          p_36 = ATgetArgument(o_36, 0);
                                          q_36 = ATgetArgument(o_36, 1);
                                          t = j_40(t);
                                        }
                                      else
                                        {
                                          if(match_cons(o_36, sym_REF_2))
                                            {
                                              p_36 = ATgetArgument(o_36, 0);
                                              q_36 = ATgetArgument(o_36, 1);
                                              t = k_40(t);
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
ATerm abox2latex_1 (ATerm t, ATerm t_54 (ATerm))
{
  ATerm r_41 = NULL;
  ATerm t_41 = NULL;
  r_41 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  {
    ATerm v_41 = NULL;
    t = t_54(t);
    t_41 = t;
    t = not_null(r_41);
    {
      ATerm d_4 (ATerm t)
      {
        t = try_1(t, Abox_2_latex_0);
        return(t);
      }
      t = topdown_1(t, d_4);
      v_41 = t;
      t = (ATerm) ATmakeAppl(sym_BOXENV_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_41), (ATerm) ATmakeAppl(sym_Nil_0)), not_null(v_41));
      t = latex2text_0(t);
    }
  }
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm y_37 (ATerm))
{
  t = fetch_1(t, y_37);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL;
  d_42 = t;
  b_42 :
  if(match_cons(d_42, sym_TCons_2))
    {
      e_42 = ATgetArgument(d_42, 0);
      f_42 = ATgetArgument(d_42, 1);
      c_42 :
      if(match_cons(f_42, sym_TCons_2))
        {
          g_42 = ATgetArgument(f_42, 0);
          h_42 = ATgetArgument(f_42, 1);
          t = not_null(g_42);
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
  ATerm s_42 = NULL;
  ATerm k_12;
  k_12 = t;
  {
    ATerm l_12 = t;
    if(PushChoice()==0)
      {
        ATerm e_4 (ATerm t)
        {
          ATerm t_42 = NULL,u_42 = NULL;
          t_42 = t;
          q_42 :
          if(match_cons(t_42, sym_Input_1))
            {
              u_42 = ATgetArgument(t_42, 0);
              if(s_42 != NULL && s_42 != u_42)
                _fail(u_42);
              else
                s_42 = u_42;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, e_4);
        PopChoice();
      }
    else
      {
        t = l_12;
        {
          ATerm v_42 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          v_42 = t;
          if(s_42 != NULL && s_42 != v_42)
            _fail(v_42);
          else
            s_42 = v_42;
        }
      }
  }
  t = k_12;
  {
    ATerm f_4 (ATerm t)
    {
      t = not_null(s_42);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, f_4);
  }
  return(t);
}
ATerm StoreEntries_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL;
    c_43 = t;
    z_42 :
    if(match_cons(c_43, sym_Cons_2))
      {
        d_43 = ATgetArgument(c_43, 0);
        e_43 = ATgetArgument(c_43, 1);
        a_43 :
        if(match_cons(e_43, sym_Cons_2))
          {
            f_43 = ATgetArgument(e_43, 0);
            g_43 = ATgetArgument(e_43, 1);
            b_43 :
            if(match_cons(g_43, sym_Nil_0))
              {
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_43), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_43), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  t = map_1(t, g_4);
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm l_43 = NULL;
  l_43 = t;
  t = SSL_ReadFromFile(not_null(l_43));
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm q_43 = NULL;
  q_43 = t;
  t = SSL_table_create(not_null(q_43));
  return(t);
}
ATerm load_tables_0 (ATerm t)
{
  ATerm m_12;
  m_12 = t;
  t = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  t = table_create_0(t);
  t = m_12;
  t = reverse_0(t);
  {
    ATerm h_4 (ATerm t)
    {
      t = ReadFromFile_0(t);
      t = StoreEntries_0(t);
      return(t);
    }
    t = map_1(t, h_4);
  }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm t_47 (ATerm))
{
  ATerm u_43 (ATerm t)
  {
    ATerm n_12 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, t_47, _id);
        PopChoice();
      }
    else
      {
        t = n_12;
        t = Cons_2(t, _id, u_43);
      }
    return(t);
  }
  t = u_43(t);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm p_43 (ATerm))
{
  ATerm y_43 = NULL,z_43 = NULL,d_44 = NULL;
  y_43 = t;
  x_43 :
  if(match_cons(y_43, sym_Cons_2))
    {
      z_43 = ATgetArgument(y_43, 0);
      d_44 = ATgetArgument(y_43, 1);
      t = p_43(t);
      {
        ATerm i_4 (ATerm t)
        {
          ATerm g_44 = NULL;
          g_44 = t;
          if(z_43 != NULL && z_43 != g_44)
            _fail(g_44);
          else
            z_43 = g_44;
          return(t);
        }
        t = fetch_1(t, i_4);
        t = not_null(d_44);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL;
  p_44 = t;
  m_44 :
  if(match_cons(p_44, sym_TCons_2))
    {
      q_44 = ATgetArgument(p_44, 0);
      r_44 = ATgetArgument(p_44, 1);
      n_44 :
      if(match_cons(r_44, sym_TCons_2))
        {
          s_44 = ATgetArgument(r_44, 0);
          t_44 = ATgetArgument(r_44, 1);
          o_44 :
          if(match_cons(t_44, sym_TNil_0))
            {
              t = not_null(q_44);
              {
                ATerm x_44 (ATerm t)
                {
                  ATerm o_12 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(s_44);
                      PopChoice();
                    }
                  else
                    {
                      t = o_12;
                      {
                        ATerm p_12 = t;
                        if(PushChoice()==0)
                          {
                            ATerm j_4 (ATerm t)
                            {
                              t = not_null(s_44);
                              return(t);
                            }
                            t = HdMember_1(t, j_4);
                            t = x_44(t);
                            PopChoice();
                          }
                        else
                          {
                            t = p_12;
                            t = Cons_2(t, _id, x_44);
                          }
                      }
                    }
                  return(t);
                }
                t = x_44(t);
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
ATerm foldr_3 (ATerm t, ATerm k_42 (ATerm), ATerm l_42 (ATerm), ATerm m_42 (ATerm))
{
  ATerm q_12 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = k_42(t);
      PopChoice();
    }
  else
    {
      t = q_12;
      {
        ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL;
        c_45 = t;
        b_45 :
        if(match_cons(c_45, sym_Cons_2))
          {
            d_45 = ATgetArgument(c_45, 0);
            e_45 = ATgetArgument(c_45, 1);
            {
              ATerm h_45 = NULL;
              t = not_null(d_45);
              {
                ATerm j_45 = NULL;
                t = m_42(t);
                h_45 = t;
                t = not_null(e_45);
                t = foldr_3(t, k_42, l_42, m_42);
                j_45 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_45), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_45), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = l_42(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm a_44 (ATerm), ATerm b_44 (ATerm), ATerm c_44 (ATerm))
{
  ATerm u_45 = NULL;
  ATerm w_45 = NULL;
  u_45 = t;
  {
    ATerm x_45 = NULL;
    ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL;
    t = not_null(u_45);
    x_45 = t;
    t = SSL_explode_term(not_null(x_45));
    z_45 = t;
    r_45 :
    if(match_cons(z_45, sym_TCons_2))
      {
        a_46 = ATgetArgument(z_45, 0);
        b_46 = ATgetArgument(z_45, 1);
        s_45 :
        if(match_cons(b_46, sym_TCons_2))
          {
            c_46 = ATgetArgument(b_46, 0);
            d_46 = ATgetArgument(b_46, 1);
            t_45 :
            if(match_cons(d_46, sym_TNil_0))
              {
                if(w_45 != NULL && w_45 != c_46)
                  _fail(c_46);
                else
                  w_45 = c_46;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(w_45);
    t = foldr_3(t, a_44, b_44, c_44);
  }
  return(t);
}
ATerm collect_1 (ATerm t, ATerm j_44 (ATerm))
{
  ATerm k_46 (ATerm t)
  {
    ATerm r_12 = t;
    if(PushChoice()==0)
      {
        ATerm i_46 = NULL;
        t = j_44(t);
        i_46 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_46), (ATerm) ATmakeAppl(sym_Nil_0));
        PopChoice();
      }
    else
      {
        t = r_12;
        {
          ATerm k_4 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Nil_0);
            return(t);
          }
          t = crush_3(t, k_4, union_0, k_46);
        }
      }
    return(t);
  }
  t = k_46(t);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm e_39 (ATerm))
{
  ATerm t_12;
  t_12 = t;
  {
    ATerm l_4 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm m_4 (ATerm t)
    {
      ATerm o_46 = NULL;
      ATerm q_46 = NULL;
      o_46 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = e_39(t);
      q_46 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_46), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_46), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, l_4, m_4);
    t = printnl_0(t);
  }
  t = t_12;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm l_39 (ATerm))
{
  ATerm u_12;
  u_12 = t;
  t = l_39(t);
  {
    ATerm n_4 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
      return(t);
    }
    t = debug_1(t, n_4);
  }
  t = u_12;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL;
  ATerm y_12 = t;
  if(PushChoice()==0)
    {
      ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL;
      b_47 = t;
      v_46 :
      if(match_cons(b_47, sym_TCons_2))
        {
          c_47 = ATgetArgument(b_47, 0);
          d_47 = ATgetArgument(b_47, 1);
          w_46 :
          if(match_cons(d_47, sym_TCons_2))
            {
              e_47 = ATgetArgument(d_47, 0);
              f_47 = ATgetArgument(d_47, 1);
              x_46 :
              if(match_cons(f_47, sym_TNil_0))
                {
                  if(a_47 != NULL && a_47 != c_47)
                    _fail(c_47);
                  else
                    a_47 = c_47;
                  if(z_46 != NULL && z_46 != e_47)
                    _fail(e_47);
                  else
                    z_46 = e_47;
                  t = SSL_open_file(not_null(a_47), not_null(z_46));
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
      t = y_12;
      {
        ATerm g_47 = NULL;
        ATerm o_4 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
          return(t);
        }
        t = obsolete_1(t, o_4);
        g_47 = t;
        if(a_47 != NULL && a_47 != g_47)
          _fail(g_47);
        else
          a_47 = g_47;
        t = SSL_open_file(not_null(a_47), (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue)));
      }
    }
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm n_47 = NULL;
  ATerm b_13;
  b_13 = t;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm o_47 = NULL,p_47 = NULL;
      o_47 = t;
      k_47 :
      if(match_cons(o_47, sym_Program_1))
        {
          p_47 = ATgetArgument(o_47, 0);
          if(n_47 != NULL && n_47 != p_47)
            _fail(p_47);
          else
            n_47 = p_47;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, p_4);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_47), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-i abox] [-o latex] [-t table ... ] [-w width] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
  }
  t = b_13;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm s_47 = NULL;
  s_47 = t;
  r_47 :
  if(!(match_cons(s_47, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm t_38 (ATerm))
{
  ATerm q_4 (ATerm t)
  {
    ATerm d_13 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = d_13;
        {
          ATerm f_13 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = f_13;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, q_4);
  t = t_38(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm t_37 (ATerm), ATerm u_37 (ATerm))
{
  ATerm r_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
    return(t);
  }
  t = ArgOption_3(t, t_37, u_37, r_4);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm c_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL;
  i_48 = t;
  y_47 :
  if(match_cons(i_48, sym_Cons_2))
    {
      c_48 = ATgetArgument(i_48, 0);
      f_48 = ATgetArgument(i_48, 1);
      b_48 :
      if(match_cons(f_48, sym_Cons_2))
        {
          g_48 = ATgetArgument(f_48, 0);
          h_48 = ATgetArgument(f_48, 1);
          {
            ATerm q_48 = NULL;
            t = not_null(c_48);
            t = d_0(t);
            t = not_null(g_48);
            t = e_0(t);
            q_48 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_48), not_null(h_48));
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(i_48, "register-usage-info"))
        t = register_usage_1(t, f_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm g_13 = t;
  if(PushChoice()==0)
    {
      ATerm s_4 (ATerm t)
      {
        ATerm k_49 = NULL;
        k_49 = t;
        z_48 :
        if(!(match_string(k_49, "-S")))
          {
            if(!(match_string(k_49, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm t_4 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm u_4 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, s_4, t_4, u_4);
      PopChoice();
    }
  else
    {
      t = g_13;
      {
        ATerm i_13 = t;
        if(PushChoice()==0)
          {
            ATerm v_4 (ATerm t)
            {
              ATerm l_49 = NULL;
              l_49 = t;
              a_49 :
              if(!(match_string(l_49, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm w_4 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm x_4 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, v_4, w_4, x_4);
            PopChoice();
          }
        else
          {
            t = i_13;
            {
              ATerm k_13 = t;
              if(PushChoice()==0)
                {
                  ATerm y_4 (ATerm t)
                  {
                    ATerm m_49 = NULL;
                    m_49 = t;
                    b_49 :
                    if(!(match_string(m_49, "-v")))
                      {
                        if(!(match_string(m_49, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm z_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm a_5 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, y_4, z_4, a_5);
                  PopChoice();
                }
              else
                {
                  t = k_13;
                  {
                    ATerm l_13 = t;
                    if(PushChoice()==0)
                      {
                        ATerm b_5 (ATerm t)
                        {
                          ATerm n_49 = NULL;
                          n_49 = t;
                          c_49 :
                          if(!(match_string(n_49, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm c_5 (ATerm t)
                        {
                          ATerm o_49 = NULL;
                          o_49 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(o_49));
                          return(t);
                        }
                        ATerm d_5 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, b_5, c_5, d_5);
                        PopChoice();
                      }
                    else
                      {
                        t = l_13;
                        {
                          ATerm n_13 = t;
                          if(PushChoice()==0)
                            {
                              ATerm e_5 (ATerm t)
                              {
                                ATerm q_49 = NULL;
                                q_49 = t;
                                e_49 :
                                if(!(match_string(q_49, "-i")))
                                  {
                                    if(!(match_string(q_49, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm f_5 (ATerm t)
                              {
                                ATerm r_49 = NULL;
                                r_49 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_49));
                                return(t);
                              }
                              ATerm g_5 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, e_5, f_5, g_5);
                              PopChoice();
                            }
                          else
                            {
                              t = n_13;
                              {
                                ATerm p_13 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm h_5 (ATerm t)
                                    {
                                      ATerm t_49 = NULL;
                                      t_49 = t;
                                      g_49 :
                                      if(!(match_string(t_49, "-o")))
                                        {
                                          if(!(match_string(t_49, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm i_5 (ATerm t)
                                    {
                                      ATerm u_49 = NULL;
                                      u_49 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_49));
                                      return(t);
                                    }
                                    ATerm j_5 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, h_5, i_5, j_5);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = p_13;
                                    {
                                      ATerm q_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm k_5 (ATerm t)
                                          {
                                            ATerm w_49 = NULL;
                                            w_49 = t;
                                            i_49 :
                                            if(!(match_string(w_49, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm l_5 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm l_6 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, k_5, l_5, l_6);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = q_13;
                                          {
                                            ATerm m_6 (ATerm t)
                                            {
                                              ATerm x_49 = NULL;
                                              x_49 = t;
                                              j_49 :
                                              if(!(match_string(x_49, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm n_6 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm o_6 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, m_6, n_6, o_6);
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
  ATerm g_50 = NULL;
  g_50 = t;
  t = SSL_table_destroy(not_null(g_50));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm k_50 = NULL;
  k_50 = t;
  t = SSL_exit(not_null(k_50));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm o_50 = NULL;
  o_50 = t;
  t = SSL_implode_string(not_null(o_50));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_47 (ATerm))
{
  ATerm r_50 (ATerm t)
  {
    ATerm r_13 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, r_50);
        PopChoice();
      }
    else
      {
        t = r_13;
        t = Nil_0(t);
        t = z_47(t);
      }
    return(t);
  }
  t = r_50(t);
  return(t);
}
ATerm concat_0 (ATerm t)
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
      {
        ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL;
        u_50 = t;
        t_50 :
        if(match_cons(u_50, sym_Cons_2))
          {
            v_50 = ATgetArgument(u_50, 0);
            w_50 = ATgetArgument(u_50, 1);
            t = not_null(v_50);
            {
              ATerm p_6 (ATerm t)
              {
                t = not_null(w_50);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, p_6);
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
  ATerm c_51 = NULL;
  c_51 = t;
  t = SSL_explode_string(not_null(c_51));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm a_37 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_47 (ATerm))
{
  ATerm f_51 (ATerm t)
  {
    ATerm t_13 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = t_13;
        t = Cons_2(t, l_47, f_51);
      }
    return(t);
  }
  t = f_51(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL;
  l_51 = t;
  h_51 :
  if(match_cons(l_51, sym_TCons_2))
    {
      m_51 = ATgetArgument(l_51, 0);
      n_51 = ATgetArgument(l_51, 1);
      i_51 :
      if(match_cons(m_51, sym_Nil_0))
        {
          j_51 :
          if(match_cons(n_51, sym_TCons_2))
            {
              o_51 = ATgetArgument(n_51, 0);
              p_51 = ATgetArgument(n_51, 1);
              k_51 :
              if(match_cons(p_51, sym_TNil_0))
                t = not_null(o_51);
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
  ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL;
  z_51 = t;
  v_51 :
  if(match_cons(z_51, sym_TCons_2))
    {
      a_52 = ATgetArgument(z_51, 0);
      d_52 = ATgetArgument(z_51, 1);
      w_51 :
      if(match_cons(a_52, sym_Cons_2))
        {
          b_52 = ATgetArgument(a_52, 0);
          c_52 = ATgetArgument(a_52, 1);
          x_51 :
          if(match_cons(d_52, sym_TCons_2))
            {
              e_52 = ATgetArgument(d_52, 0);
              f_52 = ATgetArgument(d_52, 1);
              y_51 :
              if(match_cons(f_52, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_52), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_52), not_null(e_52)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm e_53 (ATerm), ATerm f_53 (ATerm))
{
  ATerm k_52 (ATerm t)
  {
    ATerm u_13 = t;
    if(PushChoice()==0)
      {
        t = e_53(t);
        t = k_52(t);
        PopChoice();
      }
    else
      {
        t = u_13;
        t = f_53(t);
      }
    return(t);
  }
  t = k_52(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm h_53 (ATerm))
{
  t = repeat_2(t, h_53, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm m_52 = NULL;
  m_52 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_52), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm z_36 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm g_30 (ATerm))
{
  ATerm s_52 = NULL,t_52 = NULL;
  s_52 = t;
  r_52 :
  if(match_cons(s_52, sym_Program_1))
    {
      t_52 = ATgetArgument(s_52, 0);
      {
        ATerm v_52 = NULL;
        t = not_null(t_52);
        t = g_30(t);
        v_52 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_52));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm d_53 = NULL;
  ATerm q_6 (ATerm t)
  {
    ATerm r_6 (ATerm t)
    {
      ATerm i_53 = NULL;
      i_53 = t;
      if(d_53 != NULL && d_53 != i_53)
        _fail(i_53);
      else
        d_53 = i_53;
      return(t);
    }
    t = Program_1(t, r_6);
    return(t);
  }
  t = option_defined_1(t, q_6);
  {
    ATerm s_6 (ATerm t)
    {
      ATerm j_53 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm t_6 (ATerm t)
        {
          t = not_null(d_53);
          return(t);
        }
        t = short_description_1(t, t_6);
        t = concat_strings_0(t);
        j_53 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_53), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, s_6);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm u_6 (ATerm t)
      {
        ATerm l_53 = NULL;
        l_53 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_53), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, u_6);
      {
        ATerm v_6 (ATerm t)
        {
          ATerm n_53 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm w_6 (ATerm t)
            {
              t = not_null(d_53);
              return(t);
            }
            t = long_description_1(t, w_6);
            t = concat_strings_0(t);
            n_53 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_53), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = printnl_0(t);
          }
          return(t);
        }
        t = try_1(t, v_6);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL;
  e_54 = t;
  u_53 :
  if(match_cons(e_54, sym_TCons_2))
    {
      f_54 = ATgetArgument(e_54, 0);
      g_54 = ATgetArgument(e_54, 1);
      c_54 :
      if(match_cons(g_54, sym_TCons_2))
        {
          h_54 = ATgetArgument(g_54, 0);
          i_54 = ATgetArgument(g_54, 1);
          d_54 :
          if(match_cons(i_54, sym_TNil_0))
            {
              ATerm v_13;
              v_13 = t;
              t = SSL_printnl(not_null(f_54), not_null(h_54));
              t = v_13;
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
ATerm Undefined_1 (ATerm t, ATerm h_30 (ATerm))
{
  ATerm s_54 = NULL,x_54 = NULL;
  s_54 = t;
  o_54 :
  if(match_cons(s_54, sym_Undefined_1))
    {
      x_54 = ATgetArgument(s_54, 0);
      {
        ATerm z_54 = NULL;
        t = not_null(x_54);
        t = h_30(t);
        z_54 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(z_54));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_55 = NULL;
  e_55 = t;
  d_55 :
  if(!(match_cons(e_55, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL;
  j_55 = t;
  g_55 :
  if(match_cons(j_55, sym_TCons_2))
    {
      k_55 = ATgetArgument(j_55, 0);
      l_55 = ATgetArgument(j_55, 1);
      h_55 :
      if(match_cons(l_55, sym_TCons_2))
        {
          m_55 = ATgetArgument(l_55, 0);
          n_55 = ATgetArgument(l_55, 1);
          i_55 :
          if(match_cons(n_55, sym_TNil_0))
            t = SSL_table_get(not_null(k_55), not_null(m_55));
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
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL;
  x_55 = t;
  t_55 :
  if(match_cons(x_55, sym_TCons_2))
    {
      y_55 = ATgetArgument(x_55, 0);
      z_55 = ATgetArgument(x_55, 1);
      u_55 :
      if(match_cons(z_55, sym_TCons_2))
        {
          a_56 = ATgetArgument(z_55, 0);
          b_56 = ATgetArgument(z_55, 1);
          v_55 :
          if(match_cons(b_56, sym_TCons_2))
            {
              c_56 = ATgetArgument(b_56, 0);
              d_56 = ATgetArgument(b_56, 1);
              w_55 :
              if(match_cons(d_56, sym_TNil_0))
                {
                  ATerm w_13;
                  w_13 = t;
                  {
                    ATerm h_56 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_56), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm x_13 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = x_13;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      h_56 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_56), not_null(h_56)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  }
                  t = w_13;
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
ATerm register_usage_1 (ATerm t, ATerm e_37 (ATerm))
{
  ATerm m_56 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = e_37(t);
  m_56 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_56), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL;
  v_56 = t;
  s_56 :
  if(match_cons(v_56, sym_Cons_2))
    {
      t_56 = ATgetArgument(v_56, 0);
      u_56 = ATgetArgument(v_56, 1);
      {
        ATerm y_56 = NULL;
        t = not_null(t_56);
        t = a_0(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = b_0(t);
        y_56 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_56), not_null(u_56));
      }
    }
  else
    {
      if(match_string(v_56, "register-usage-info"))
        t = register_usage_1(t, c_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm x_6 (ATerm t)
  {
    ATerm e_57 = NULL;
    e_57 = t;
    d_57 :
    if(!(match_string(e_57, "--help")))
      {
        if(!(match_string(e_57, "-h")))
          {
            if(!(match_string(e_57, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm y_6 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm z_6 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, x_6, y_6, z_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL;
  h_57 = t;
  g_57 :
  if(match_cons(h_57, sym_Cons_2))
    {
      i_57 = ATgetArgument(h_57, 0);
      j_57 = ATgetArgument(h_57, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(i_57)), not_null(j_57));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm q_33 (ATerm), ATerm r_33 (ATerm))
{
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL;
  r_57 = t;
  q_57 :
  if(match_cons(r_57, sym_Cons_2))
    {
      s_57 = ATgetArgument(r_57, 0);
      t_57 = ATgetArgument(r_57, 1);
      {
        ATerm w_57 = NULL;
        t = not_null(s_57);
        {
          ATerm y_57 = NULL;
          t = q_33(t);
          w_57 = t;
          t = not_null(t_57);
          t = r_33(t);
          y_57 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_57), not_null(y_57));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm e_58 = NULL;
  e_58 = t;
  d_58 :
  if(!(match_cons(e_58, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm c_37 (ATerm))
{
  ATerm y_13;
  y_13 = t;
  {
    ATerm a_7 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = c_37(t);
      return(t);
    }
    t = try_1(t, a_7);
  }
  t = y_13;
  {
    ATerm e_7 (ATerm t)
    {
      ATerm g_58 = NULL;
      g_58 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_58));
      return(t);
    }
    ATerm f_7 (ATerm t)
    {
      ATerm z_13 = t;
      if(PushChoice()==0)
        {
          ATerm a_14 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = a_14;
              t = c_37(t);
              t = Cons_2(t, _id, f_7);
            }
          PopChoice();
        }
      else
        {
          t = z_13;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, e_7, f_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL;
  ATerm b_14;
  b_14 = t;
  {
    ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL;
    s_58 = t;
    l_58 :
    if(match_cons(s_58, sym_TCons_2))
      {
        t_58 = ATgetArgument(s_58, 0);
        u_58 = ATgetArgument(s_58, 1);
        m_58 :
        if(match_cons(u_58, sym_TCons_2))
          {
            v_58 = ATgetArgument(u_58, 0);
            w_58 = ATgetArgument(u_58, 1);
            n_58 :
            if(match_cons(w_58, sym_TCons_2))
              {
                x_58 = ATgetArgument(w_58, 0);
                y_58 = ATgetArgument(w_58, 1);
                o_58 :
                if(match_cons(y_58, sym_TNil_0))
                  {
                    if(p_58 != NULL && p_58 != t_58)
                      _fail(t_58);
                    else
                      p_58 = t_58;
                    if(q_58 != NULL && q_58 != v_58)
                      _fail(v_58);
                    else
                      q_58 = v_58;
                    if(r_58 != NULL && r_58 != x_58)
                      _fail(x_58);
                    else
                      r_58 = x_58;
                    t = SSL_table_put(not_null(p_58), not_null(q_58), not_null(r_58));
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
  t = b_14;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm b_37 (ATerm))
{
  ATerm b_59 = NULL;
  ATerm c_14;
  c_14 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = c_14;
  {
    ATerm g_7 (ATerm t)
    {
      ATerm d_14 = t;
      if(PushChoice()==0)
        {
          t = b_37(t);
          PopChoice();
        }
      else
        {
          t = d_14;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, g_7);
    {
      ATerm z_7 (ATerm t)
      {
        ATerm m_14 = t;
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
            t = m_14;
            {
              ATerm j_8 (ATerm t)
              {
                ATerm l_8 (ATerm t)
                {
                  ATerm c_59 = NULL;
                  c_59 = t;
                  if(b_59 != NULL && b_59 != c_59)
                    _fail(c_59);
                  else
                    b_59 = c_59;
                  return(t);
                }
                t = Undefined_1(t, l_8);
                return(t);
              }
              t = option_defined_1(t, j_8);
              {
                ATerm n_14;
                n_14 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_59), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = n_14;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, z_7);
      {
        ATerm o_14;
        o_14 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = o_14;
      }
    }
  }
  return(t);
}
ATerm Abox2latex_0 (ATerm t)
{
  ATerm x_59 = NULL;
  ATerm z_59 = NULL,a_60 = NULL;
  ATerm n_8 (ATerm t)
  {
    ATerm r_14 = t;
    if(PushChoice()==0)
      {
        t = io_options_0(t);
        PopChoice();
      }
    else
      {
        t = r_14;
        {
          ATerm s_14 = t;
          if(PushChoice()==0)
            {
              ATerm o_8 (ATerm t)
              {
                ATerm r_59 = NULL;
                r_59 = t;
                e_59 :
                if(!(match_string(r_59, "-t")))
                  _fail(t);
                return(t);
              }
              ATerm p_8 (ATerm t)
              {
                ATerm s_59 = NULL;
                s_59 = t;
                t = (ATerm) ATmakeAppl(sym_LatexTable_1, not_null(s_59));
                return(t);
              }
              t = ArgOption_2(t, o_8, p_8);
              PopChoice();
            }
          else
            {
              t = s_14;
              {
                ATerm q_8 (ATerm t)
                {
                  ATerm u_59 = NULL;
                  u_59 = t;
                  g_59 :
                  if(!(match_string(u_59, "-w")))
                    _fail(t);
                  return(t);
                }
                ATerm s_8 (ATerm t)
                {
                  ATerm v_59 = NULL;
                  v_59 = t;
                  t = (ATerm) ATmakeAppl(sym_Width_1, not_null(v_59));
                  return(t);
                }
                t = ArgOption_2(t, q_8, s_8);
              }
            }
        }
      }
    return(t);
  }
  t = parse_options_1(t, n_8);
  x_59 = t;
  {
    ATerm t_14 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, usage_0);
        PopChoice();
      }
    else
      {
        t = t_14;
        {
          ATerm y_14 = t;
          if(PushChoice()==0)
            {
              ATerm z_14;
              z_14 = t;
              {
                ATerm b_15 = t;
                if(PushChoice()==0)
                  {
                    ATerm t_8 (ATerm t)
                    {
                      ATerm b_60 = NULL,c_60 = NULL;
                      b_60 = t;
                      k_59 :
                      if(match_cons(b_60, sym_Output_1))
                        {
                          c_60 = ATgetArgument(b_60, 0);
                          if(a_60 != NULL && a_60 != c_60)
                            _fail(c_60);
                          else
                            a_60 = c_60;
                          t = not_null(a_60);
                          t = open_file_0(t);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = option_defined_1(t, t_8);
                    PopChoice();
                  }
                else
                  {
                    t = b_15;
                    {
                      ATerm d_60 = NULL;
                      t = (ATerm) ATmakeAppl(sym_stdout_0);
                      d_60 = t;
                      if(a_60 != NULL && a_60 != d_60)
                        _fail(d_60);
                      else
                        a_60 = d_60;
                    }
                  }
              }
              t = z_14;
              {
                ATerm d_15;
                d_15 = t;
                {
                  ATerm u_8 (ATerm t)
                  {
                    ATerm e_60 = NULL,f_60 = NULL;
                    e_60 = t;
                    n_59 :
                    if(match_cons(e_60, sym_LatexTable_1))
                      {
                        f_60 = ATgetArgument(e_60, 0);
                        t = not_null(f_60);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = collect_1(t, u_8);
                  t = load_tables_0(t);
                }
                t = d_15;
                t = input_file_0(t);
                t = Snd_0(t);
                {
                  ATerm e_15 = t;
                  if(PushChoice()==0)
                    {
                      ATerm f_15;
                      f_15 = t;
                      t = not_null(x_59);
                      {
                        ATerm v_8 (ATerm t)
                        {
                          ATerm h_60 = NULL,i_60 = NULL;
                          h_60 = t;
                          p_59 :
                          if(match_cons(h_60, sym_Width_1))
                            {
                              i_60 = ATgetArgument(h_60, 0);
                              if(z_59 != NULL && z_59 != i_60)
                                _fail(i_60);
                              else
                                z_59 = i_60;
                            }
                          else
                            _fail(t);
                          return(t);
                        }
                        t = option_defined_1(t, v_8);
                      }
                      t = f_15;
                      {
                        ATerm w_8 (ATerm t)
                        {
                          t = not_null(z_59);
                          return(t);
                        }
                        t = abox2latex_1(t, w_8);
                      }
                      PopChoice();
                    }
                  else
                    {
                      t = e_15;
                      t = abox2latex_0(t);
                    }
                  {
                    ATerm x_8 (ATerm t)
                    {
                      ATerm y_8 (ATerm t)
                      {
                        t = is_string_0(t);
                        {
                          ATerm g_15;
                          g_15 = t;
                          {
                            ATerm z_8 (ATerm t)
                            {
                              t = not_null(a_60);
                              return(t);
                            }
                            ATerm a_9 (ATerm t)
                            {
                              ATerm j_60 = NULL;
                              j_60 = t;
                              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_60), (ATerm) ATmakeAppl(sym_Nil_0));
                              return(t);
                            }
                            t = split_2(t, z_8, a_9);
                            t = print_0(t);
                          }
                          t = g_15;
                        }
                        return(t);
                      }
                      t = try_1(t, y_8);
                      return(t);
                    }
                    t = topdown_1(t, x_8);
                    t = report_success_0(t);
                  }
                }
              }
              PopChoice();
            }
          else
            {
              t = y_14;
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
