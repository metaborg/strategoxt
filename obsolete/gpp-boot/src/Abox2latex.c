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
ATerm split_2 (ATerm, ATerm i_39 (ATerm), ATerm j_39 (ATerm));
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_52 (ATerm));
ATerm topdown_1 (ATerm, ATerm i_48 (ATerm));
ATerm abox2latex_0 (ATerm);
ATerm CSEP_0 (ATerm);
ATerm EOR_0 (ATerm);
ATerm L_0 (ATerm);
ATerm R_0 (ATerm);
ATerm C_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm Latex2text_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm k_48 (ATerm));
ATerm latex2text_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm e_47 (ATerm));
ATerm separate_by_1 (ATerm, ATerm f_47 (ATerm));
ATerm C_2 (ATerm, ATerm z_31 (ATerm), ATerm a_32 (ATerm));
ATerm table_row_0 (ATerm);
ATerm MkRows_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm r_46 (ATerm));
ATerm concat_0 (ATerm);
ATerm table_def_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_46 (ATerm));
ATerm conc_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm t_32 (ATerm), ATerm u_32 (ATerm));
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm a_52 (ATerm), ATerm b_52 (ATerm));
ATerm for_3 (ATerm, ATerm d_52 (ATerm), ATerm e_52 (ATerm), ATerm f_52 (ATerm));
ATerm copy_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm Vspace_0 (ATerm);
ATerm R_2 (ATerm, ATerm i_31 (ATerm), ATerm j_31 (ATerm));
ATerm filter_1 (ATerm, ATerm a_40 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm t_30 (ATerm), ATerm u_30 (ATerm));
ATerm Hspace_0 (ATerm);
ATerm toh_0 (ATerm);
ATerm CL_0 (ATerm);
ATerm FFID_2 (ATerm, ATerm q_31 (ATerm), ATerm r_31 (ATerm));
ATerm SZ_0 (ATerm);
ATerm SH_0 (ATerm);
ATerm SE_0 (ATerm);
ATerm FM_0 (ATerm);
ATerm MATH_0 (ATerm);
ATerm NUM_0 (ATerm);
ATerm VAR_0 (ATerm);
ATerm KW_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm remove_trailing_1 (ATerm, ATerm v_52 (ATerm));
ATerm at_suffix_1 (ATerm, ATerm l_46 (ATerm));
ATerm LatexComment_0 (ATerm);
ATerm make_latex_comment_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm y_49 (ATerm));
ATerm replace_quotes_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm v_46 (ATerm));
ATerm table_get_0 (ATerm);
ATerm latex_string_0 (ATerm);
ATerm Abox_2_latex_0 (ATerm);
ATerm abox2latex_1 (ATerm, ATerm y_52 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_36 (ATerm));
ATerm Snd_0 (ATerm);
ATerm input_file_0 (ATerm);
ATerm table_put_0 (ATerm);
ATerm StoreEntries_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm map_1 (ATerm, ATerm s_45 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm j_51 (ATerm), ATerm k_51 (ATerm));
ATerm repeat_1 (ATerm, ATerm m_51 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm load_tables_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm b_46 (ATerm));
ATerm HdMember_1 (ATerm, ATerm d_42 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm w_40 (ATerm), ATerm x_40 (ATerm), ATerm y_40 (ATerm));
ATerm crush_3 (ATerm, ATerm n_42 (ATerm), ATerm o_42 (ATerm), ATerm p_42 (ATerm));
ATerm collect_1 (ATerm, ATerm w_42 (ATerm));
ATerm open_file_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm o_29 (ATerm));
ATerm Help_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm h_37 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm h_36 (ATerm), ATerm i_36 (ATerm));
ATerm Option_2 (ATerm, ATerm f_36 (ATerm), ATerm g_36 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm x_32 (ATerm), ATerm y_32 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_36 (ATerm));
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
  ATerm i_1 = NULL,j_1 = NULL;
  ATerm f_7 = t;
  if(PushChoice()==0)
    {
      ATerm a_0 (ATerm t)
      {
        ATerm g_7 = t;
        if(PushChoice()==0)
          {
            ATerm c_0 (ATerm t)
            {
              ATerm k_1 = NULL;
              k_1 = t;
              a_1 :
              if(!(match_cons(k_1, sym_Silent_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, c_0);
            PopChoice();
            _fail(t);
          }
        else
          t = g_7;
        return(t);
      }
      ATerm b_0 (ATerm t)
      {
        ATerm d_0 (ATerm t)
        {
          ATerm l_1 = NULL;
          l_1 = t;
          b_1 :
          if(!(match_cons(l_1, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, _id, d_0);
        return(t);
      }
      t = TCons_2(t, a_0, b_0);
      {
        ATerm e_0 (ATerm t)
        {
          ATerm g_0 (ATerm t)
          {
            ATerm m_1 = NULL,n_1 = NULL;
            m_1 = t;
            d_1 :
            if(match_cons(m_1, sym_Runtime_1))
              {
                n_1 = ATgetArgument(m_1, 0);
                if(j_1 != NULL && j_1 != n_1)
                  _fail(n_1);
                else
                  j_1 = n_1;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, g_0);
          return(t);
        }
        ATerm f_0 (ATerm t)
        {
          ATerm h_0 (ATerm t)
          {
            ATerm o_1 = NULL;
            o_1 = t;
            e_1 :
            if(!(match_cons(o_1, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, _id, h_0);
          return(t);
        }
        t = TCons_2(t, e_0, f_0);
        {
          ATerm i_0 (ATerm t)
          {
            ATerm k_0 (ATerm t)
            {
              ATerm p_1 = NULL,r_1 = NULL;
              p_1 = t;
              g_1 :
              if(match_cons(p_1, sym_Program_1))
                {
                  r_1 = ATgetArgument(p_1, 0);
                  if(i_1 != NULL && i_1 != r_1)
                    _fail(r_1);
                  else
                    i_1 = r_1;
                }
              else
                _fail(t);
              return(t);
            }
            t = fetch_1(t, k_0);
            return(t);
          }
          ATerm j_0 (ATerm t)
          {
            ATerm l_0 (ATerm t)
            {
              ATerm s_1 = NULL;
              s_1 = t;
              h_1 :
              if(!(match_cons(s_1, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, _id, l_0);
            return(t);
          }
          t = TCons_2(t, i_0, j_0);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_1), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_1), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
        }
      }
      PopChoice();
    }
  else
    t = f_7;
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL;
  z_1 = t;
  w_1 :
  if(match_cons(z_1, sym_TCons_2))
    {
      a_2 = ATgetArgument(z_1, 0);
      b_2 = ATgetArgument(z_1, 1);
      x_1 :
      if(match_cons(b_2, sym_TCons_2))
        {
          c_2 = ATgetArgument(b_2, 0);
          d_2 = ATgetArgument(b_2, 1);
          y_1 :
          if(match_cons(d_2, sym_TNil_0))
            {
              ATerm h_7;
              h_7 = t;
              t = SSL_print(not_null(a_2), not_null(c_2));
              t = h_7;
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
ATerm split_2 (ATerm t, ATerm i_39 (ATerm), ATerm j_39 (ATerm))
{
  ATerm k_2 = NULL;
  ATerm m_2 = NULL;
  k_2 = t;
  {
    ATerm o_2 = NULL;
    t = i_39(t);
    m_2 = t;
    t = not_null(k_2);
    t = j_39(t);
    o_2 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_2), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm u_2 = NULL;
  u_2 = t;
  t = SSL_is_string(not_null(u_2));
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_52 (ATerm))
{
  ATerm i_7 = t;
  if(PushChoice()==0)
    {
      t = g_52(t);
      PopChoice();
    }
  else
    t = i_7;
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm i_48 (ATerm))
{
  ATerm x_2 (ATerm t)
  {
    t = i_48(t);
    t = _all(t, x_2);
    return(t);
  }
  t = x_2(t);
  return(t);
}
ATerm abox2latex_0 (ATerm t)
{
  ATerm a_3 = NULL;
  ATerm c_3 = NULL;
  a_3 = t;
  {
    ATerm m_0 (ATerm t)
    {
      ATerm j_7 = t;
      if(PushChoice()==0)
        {
          t = Abox_2_latex_0(t);
          PopChoice();
        }
      else
        t = j_7;
      return(t);
    }
    t = topdown_1(t, m_0);
    c_3 = t;
    t = (ATerm) ATmakeAppl(sym_BOXENV_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(c_3));
    t = latex2text_0(t);
  }
  return(t);
}
ATerm CSEP_0 (ATerm t)
{
  ATerm h_3 = NULL;
  h_3 = t;
  g_3 :
  if(!(match_cons(h_3, sym_CSEP_0)))
    _fail(t);
  return(t);
}
ATerm EOR_0 (ATerm t)
{
  ATerm j_3 = NULL;
  j_3 = t;
  i_3 :
  if(!(match_cons(j_3, sym_EOR_0)))
    _fail(t);
  return(t);
}
ATerm L_0 (ATerm t)
{
  ATerm l_3 = NULL;
  l_3 = t;
  k_3 :
  if(!(match_cons(l_3, sym_L_0)))
    _fail(t);
  return(t);
}
ATerm R_0 (ATerm t)
{
  ATerm n_3 = NULL;
  n_3 = t;
  m_3 :
  if(!(match_cons(n_3, sym_R_0)))
    _fail(t);
  return(t);
}
ATerm C_0 (ATerm t)
{
  ATerm p_3 = NULL;
  p_3 = t;
  o_3 :
  if(!(match_cons(p_3, sym_C_0)))
    _fail(t);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm r_3 = NULL;
  r_3 = t;
  t = SSL_int_to_string(not_null(r_3));
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm v_3 = NULL;
  v_3 = t;
  t = SSL_is_int(not_null(v_3));
  return(t);
}
ATerm Latex2text_0 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL;
  ATerm f_33 (ATerm t)
  {
    ATerm k_11 = NULL;
    t = not_null(y_5);
    t = is_int_0(t);
    t = not_null(y_5);
    t = int_to_string_0(t);
    k_11 = t;
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_11), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
    return(t);
  }
  ATerm g_33 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm h_33 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
    return(t);
  }
  ATerm i_33 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Nil_0)))));
    return(t);
  }
  ATerm j_33 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
    return(t);
  }
  ATerm k_33 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm l_33 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm m_33 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm n_33 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm o_33 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm p_33 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm q_33 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm r_33 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm s_33 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm t_33 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm u_33 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm v_33 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm w_33 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm x_33 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm y_33 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm z_33 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm a_34 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm b_34 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm c_34 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm d_34 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm e_34 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm f_34 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm g_34 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm h_34 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
    return(t);
  }
  ATerm i_34 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
    return(t);
  }
  ATerm j_34 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
    return(t);
  }
  ATerm k_34 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
    return(t);
  }
  ATerm l_34 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
    return(t);
  }
  ATerm m_34 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
    return(t);
  }
  ATerm n_34 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
    return(t);
  }
  b_6 = t;
  q_5 :
  if(match_cons(b_6, sym_BOXENV_2))
    {
      y_5 = ATgetArgument(b_6, 0);
      a_6 = ATgetArgument(b_6, 1);
      r_5 :
      if(match_cons(y_5, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
      else
        {
          if(match_cons(y_5, sym_Cons_2))
            {
              z_5 = ATgetArgument(y_5, 0);
              v_5 = ATgetArgument(y_5, 1);
              s_5 :
              if(match_cons(v_5, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(b_6, sym_HBOX_2))
        {
          y_5 = ATgetArgument(b_6, 0);
          a_6 = ATgetArgument(b_6, 1);
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
        }
      else
        {
          if(match_cons(b_6, sym_VBOX_3))
            {
              y_5 = ATgetArgument(b_6, 0);
              a_6 = ATgetArgument(b_6, 1);
              w_5 = ATgetArgument(b_6, 2);
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))))));
            }
          else
            {
              if(match_cons(b_6, sym_HVBOX_4))
                {
                  y_5 = ATgetArgument(b_6, 0);
                  a_6 = ATgetArgument(b_6, 1);
                  w_5 = ATgetArgument(b_6, 2);
                  x_5 = ATgetArgument(b_6, 3);
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))))))));
                }
              else
                {
                  if(match_cons(b_6, sym_ABOX_2))
                    {
                      y_5 = ATgetArgument(b_6, 0);
                      a_6 = ATgetArgument(b_6, 1);
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
                    }
                  else
                    {
                      if(match_cons(b_6, sym_ALTBOX_2))
                        {
                          y_5 = ATgetArgument(b_6, 0);
                          a_6 = ATgetArgument(b_6, 1);
                          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
                        }
                      else
                        {
                          if(match_cons(b_6, sym_CBOX_1))
                            {
                              y_5 = ATgetArgument(b_6, 0);
                              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_5), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
                            }
                          else
                            {
                              if(match_cons(b_6, sym_LBOX_2))
                                {
                                  y_5 = ATgetArgument(b_6, 0);
                                  a_6 = ATgetArgument(b_6, 1);
                                  t_5 :
                                  if(match_string(y_5, "="))
                                    {
                                      ATerm k_7 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = f_33(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = k_7;
                                          {
                                            ATerm l_7 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = g_33(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = l_7;
                                                t = h_33(t);
                                              }
                                          }
                                        }
                                    }
                                  else
                                    {
                                      ATerm m_7 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = f_33(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = m_7;
                                          t = h_33(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(b_6, sym_LBLBOX_2))
                                    {
                                      y_5 = ATgetArgument(b_6, 0);
                                      a_6 = ATgetArgument(b_6, 1);
                                      t = i_33(t);
                                    }
                                  else
                                    {
                                      if(match_cons(b_6, sym_REFBOX_2))
                                        {
                                          y_5 = ATgetArgument(b_6, 0);
                                          a_6 = ATgetArgument(b_6, 1);
                                          t = j_33(t);
                                        }
                                      else
                                        {
                                          if(match_cons(b_6, sym_BOXFONT_2))
                                            {
                                              y_5 = ATgetArgument(b_6, 0);
                                              a_6 = ATgetArgument(b_6, 1);
                                              u_5 :
                                              if(match_cons(y_5, sym_KW_0))
                                                t = k_33(t);
                                              else
                                                {
                                                  if(match_cons(y_5, sym_VAR_0))
                                                    t = l_33(t);
                                                  else
                                                    {
                                                      if(match_cons(y_5, sym_NUM_0))
                                                        t = m_33(t);
                                                      else
                                                        {
                                                          if(match_cons(y_5, sym_MATH_0))
                                                            t = n_33(t);
                                                          else
                                                            {
                                                              if(match_string(y_5, "sf"))
                                                                t = o_33(t);
                                                              else
                                                                {
                                                                  if(match_string(y_5, "rm"))
                                                                    t = p_33(t);
                                                                  else
                                                                    {
                                                                      if(match_string(y_5, "tt"))
                                                                        t = q_33(t);
                                                                      else
                                                                        {
                                                                          if(match_string(y_5, "md"))
                                                                            t = r_33(t);
                                                                          else
                                                                            {
                                                                              if(match_string(y_5, "bf"))
                                                                                t = s_33(t);
                                                                              else
                                                                                {
                                                                                  if(match_string(y_5, "up"))
                                                                                    t = t_33(t);
                                                                                  else
                                                                                    {
                                                                                      if(match_string(y_5, "it"))
                                                                                        t = u_33(t);
                                                                                      else
                                                                                        {
                                                                                          if(match_string(y_5, "sc"))
                                                                                            t = v_33(t);
                                                                                          else
                                                                                            {
                                                                                              if(match_string(y_5, "sl"))
                                                                                                t = w_33(t);
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(y_5, "em"))
                                                                                                    t = x_33(t);
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(y_5, "tiny"))
                                                                                                        t = y_33(t);
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(y_5, "scriptsize"))
                                                                                                            t = z_33(t);
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(y_5, "footnotesize"))
                                                                                                                t = a_34(t);
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(y_5, "small"))
                                                                                                                    t = b_34(t);
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(y_5, "normalsize"))
                                                                                                                        t = c_34(t);
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(y_5, "large"))
                                                                                                                            t = d_34(t);
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(y_5, "Large"))
                                                                                                                                t = e_34(t);
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(y_5, "LARGE"))
                                                                                                                                    t = f_34(t);
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(y_5, "huge"))
                                                                                                                                        t = g_34(t);
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(y_5, "Huge"))
                                                                                                                                            t = h_34(t);
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_cons(y_5, sym_BOXCOLOR_1))
                                                                                                                                                {
                                                                                                                                                  z_5 = ATgetArgument(y_5, 0);
                                                                                                                                                  t = i_34(t);
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
                                            {
                                              if(match_cons(b_6, sym_C_0))
                                                t = j_34(t);
                                              else
                                                {
                                                  if(match_cons(b_6, sym_R_0))
                                                    t = k_34(t);
                                                  else
                                                    {
                                                      if(match_cons(b_6, sym_L_0))
                                                        t = l_34(t);
                                                      else
                                                        {
                                                          if(match_cons(b_6, sym_EOR_0))
                                                            t = m_34(t);
                                                          else
                                                            {
                                                              if(match_cons(b_6, sym_CSEP_0))
                                                                t = n_34(t);
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
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm k_48 (ATerm))
{
  ATerm p_34 (ATerm t)
  {
    t = _all(t, p_34);
    t = k_48(t);
    return(t);
  }
  t = p_34(t);
  return(t);
}
ATerm latex2text_0 (ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    ATerm n_7 = t;
    if(PushChoice()==0)
      {
        t = Latex2text_0(t);
        PopChoice();
      }
    else
      t = n_7;
    return(t);
  }
  t = bottomup_1(t, n_0);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm r_34 = NULL;
  r_34 = t;
  t = SSL_implode_string(not_null(r_34));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm v_34 = NULL;
  v_34 = t;
  t = SSL_explode_string(not_null(v_34));
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm z_34 = NULL;
  z_34 = t;
  t = SSL_string_to_int(not_null(z_34));
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm e_47 (ATerm))
{
  ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL;
  f_35 = t;
  e_35 :
  if(match_cons(f_35, sym_Cons_2))
    {
      g_35 = ATgetArgument(f_35, 0);
      h_35 = ATgetArgument(f_35, 1);
      {
        ATerm k_35 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = e_47(t);
        k_35 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_35), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_35), not_null(h_35)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm f_47 (ATerm))
{
  ATerm o_7 = t;
  if(PushChoice()==0)
    {
      ATerm q_35 = NULL;
      q_35 = t;
      o_35 :
      if(!(match_cons(q_35, sym_Nil_0)))
        _fail(t);
      PopChoice();
    }
  else
    {
      t = o_7;
      {
        ATerm o_0 (ATerm t)
        {
          ATerm p_7 = t;
          if(PushChoice()==0)
            {
              ATerm r_35 = NULL;
              r_35 = t;
              p_35 :
              if(!(match_cons(r_35, sym_Nil_0)))
                _fail(t);
              PopChoice();
            }
          else
            {
              t = p_7;
              t = Cons_2(t, _id, o_0);
              t = Sep_1(t, f_47);
            }
          return(t);
        }
        t = Cons_2(t, _id, o_0);
      }
    }
  return(t);
}
ATerm C_2 (ATerm t, ATerm z_31 (ATerm), ATerm a_32 (ATerm))
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
  x_35 = t;
  w_35 :
  if(match_cons(x_35, sym_C_2))
    {
      y_35 = ATgetArgument(x_35, 0);
      z_35 = ATgetArgument(x_35, 1);
      {
        ATerm c_36 = NULL;
        t = not_null(y_35);
        {
          ATerm k_36 = NULL;
          t = z_31(t);
          c_36 = t;
          t = not_null(z_35);
          t = a_32(t);
          k_36 = t;
          t = (ATerm) ATmakeAppl(sym_C_2, not_null(c_36), not_null(k_36));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm table_row_0 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
  y_36 = t;
  x_36 :
  if(match_cons(y_36, sym_R_2))
    {
      z_36 = ATgetArgument(y_36, 0);
      a_37 = ATgetArgument(y_36, 1);
      t = not_null(a_37);
      {
        ATerm q_37 (ATerm t)
        {
          ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
          ATerm q_7 = t;
          if(PushChoice()==0)
            {
              ATerm f_37 = NULL;
              f_37 = t;
              r_36 :
              if(!(match_cons(f_37, sym_Nil_0)))
                _fail(t);
              PopChoice();
            }
          else
            {
              t = q_7;
              {
                ATerm r_7 = t;
                if(PushChoice()==0)
                  {
                    ATerm p_0 (ATerm t)
                    {
                      ATerm g_37 = NULL;
                      g_37 = t;
                      s_36 :
                      if(!(match_cons(g_37, sym_Nil_0)))
                        _fail(t);
                      return(t);
                    }
                    t = Cons_2(t, _id, p_0);
                    PopChoice();
                  }
                else
                  {
                    t = r_7;
                    {
                      ATerm s_7 = t;
                      if(PushChoice()==0)
                        {
                          ATerm q_0 (ATerm t)
                          {
                            t = C_2(t, _id, _id);
                            return(t);
                          }
                          ATerm r_0 (ATerm t)
                          {
                            t = Cons_2(t, _id, q_37);
                            return(t);
                          }
                          t = Cons_2(t, q_0, r_0);
                          PopChoice();
                        }
                      else
                        {
                          t = s_7;
                          {
                            ATerm t_7 = t;
                            if(PushChoice()==0)
                              {
                                ATerm s_0 (ATerm t)
                                {
                                  ATerm t_0 (ATerm t)
                                  {
                                    t = C_2(t, _id, _id);
                                    return(t);
                                  }
                                  t = Cons_2(t, t_0, q_37);
                                  return(t);
                                }
                                t = Cons_2(t, _id, s_0);
                                PopChoice();
                              }
                            else
                              {
                                t = t_7;
                                {
                                  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL;
                                  i_37 = t;
                                  v_36 :
                                  if(match_cons(i_37, sym_Cons_2))
                                    {
                                      j_37 = ATgetArgument(i_37, 0);
                                      k_37 = ATgetArgument(i_37, 1);
                                      w_36 :
                                      if(match_cons(k_37, sym_Cons_2))
                                        {
                                          l_37 = ATgetArgument(k_37, 0);
                                          m_37 = ATgetArgument(k_37, 1);
                                          {
                                            ATerm n_37 = NULL;
                                            if(c_37 != NULL && c_37 != j_37)
                                              _fail(j_37);
                                            else
                                              c_37 = j_37;
                                            if(d_37 != NULL && d_37 != l_37)
                                              _fail(l_37);
                                            else
                                              d_37 = l_37;
                                            if(e_37 != NULL && e_37 != m_37)
                                              _fail(m_37);
                                            else
                                              e_37 = m_37;
                                            t = not_null(e_37);
                                            t = q_37(t);
                                            n_37 = t;
                                            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_37), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_CSEP_0), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_37), not_null(n_37))));
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
        t = q_37(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MkRows_0 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL;
  ATerm u_7 = t;
  if(PushChoice()==0)
    {
      ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
      y_37 = t;
      v_37 :
      if(match_cons(y_37, sym_LBL_2))
        {
          z_37 = ATgetArgument(y_37, 0);
          a_38 = ATgetArgument(y_37, 1);
          {
            ATerm b_38 = NULL;
            if(w_37 != NULL && w_37 != z_37)
              _fail(z_37);
            else
              w_37 = z_37;
            if(x_37 != NULL && x_37 != a_38)
              _fail(a_38);
            else
              x_37 = a_38;
            t = not_null(x_37);
            t = table_row_0(t);
            t = not_null(x_37);
            t = table_row_0(t);
            b_38 = t;
            t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(w_37), not_null(b_38));
          }
        }
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = u_7;
      t = table_row_0(t);
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm r_46 (ATerm))
{
  ATerm h_38 (ATerm t)
  {
    ATerm v_7 = t;
    if(PushChoice()==0)
      {
        ATerm u_0 (ATerm t)
        {
          ATerm g_38 = NULL;
          g_38 = t;
          f_38 :
          if(!(match_cons(g_38, sym_Nil_0)))
            _fail(t);
          return(t);
        }
        t = Cons_2(t, _id, u_0);
        t = r_46(t);
        PopChoice();
      }
    else
      {
        t = v_7;
        t = Cons_2(t, _id, h_38);
      }
    return(t);
  }
  t = h_38(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL;
  k_38 = t;
  j_38 :
  if(!(match_cons(k_38, sym_Nil_0)))
    {
      if(match_cons(k_38, sym_Cons_2))
        {
          l_38 = ATgetArgument(k_38, 0);
          m_38 = ATgetArgument(k_38, 1);
          t = not_null(l_38);
          {
            ATerm v_0 (ATerm t)
            {
              t = not_null(m_38);
              t = concat_0(t);
              return(t);
            }
            t = at_end_1(t, v_0);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm table_def_0 (ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL;
  d_39 = t;
  c_39 :
  if(match_cons(d_39, sym_AOPTIONS_1))
    {
      e_39 = ATgetArgument(d_39, 0);
      t = not_null(e_39);
      {
        ATerm w_0 (ATerm t)
        {
          ATerm g_39 = NULL,h_39 = NULL;
          g_39 = t;
          b_39 :
          if(match_cons(g_39, sym_AL_1))
            {
              h_39 = ATgetArgument(g_39, 0);
              {
                ATerm l_39 = NULL;
                t = not_null(h_39);
                t = Hspace_0(t);
                {
                  ATerm n_39 = NULL;
                  t = string_to_int_0(t);
                  l_39 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_39), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("~", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = copy_0(t);
                  n_39 = t;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_L_0), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_39), (ATerm) ATmakeAppl(sym_Nil_0)));
                }
              }
            }
          else
            {
              if(match_cons(g_39, sym_AC_1))
                {
                  h_39 = ATgetArgument(g_39, 0);
                  {
                    ATerm q_39 = NULL;
                    t = not_null(h_39);
                    t = Hspace_0(t);
                    {
                      ATerm s_39 = NULL;
                      t = string_to_int_0(t);
                      q_39 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_39), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("~", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = copy_0(t);
                      s_39 = t;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_C_0), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_39), (ATerm) ATmakeAppl(sym_Nil_0)));
                    }
                  }
                }
              else
                {
                  if(match_cons(g_39, sym_AR_1))
                    {
                      h_39 = ATgetArgument(g_39, 0);
                      {
                        ATerm v_39 = NULL;
                        t = not_null(h_39);
                        t = Hspace_0(t);
                        {
                          ATerm x_39 = NULL;
                          t = string_to_int_0(t);
                          v_39 = t;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_39), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("~", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = copy_0(t);
                          x_39 = t;
                          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_R_0), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_39), (ATerm) ATmakeAppl(sym_Nil_0)));
                        }
                      }
                    }
                  else
                    _fail(t);
                }
            }
          return(t);
        }
        t = map_1(t, w_0);
        {
          ATerm x_0 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_CSEP_0), (ATerm) ATmakeAppl(sym_Nil_0));
            return(t);
          }
          t = separate_by_1(t, x_0);
          t = concat_0(t);
          {
            ATerm y_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_EOR_0), (ATerm) ATmakeAppl(sym_Nil_0));
              return(t);
            }
            t = at_last_1(t, y_0);
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_46 (ATerm))
{
  ATerm o_40 (ATerm t)
  {
    ATerm w_7 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, o_40);
        PopChoice();
      }
    else
      {
        t = w_7;
        {
          ATerm n_40 = NULL;
          n_40 = t;
          m_40 :
          if(match_cons(n_40, sym_Nil_0))
            t = h_46(t);
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = o_40(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL;
  u_40 = t;
  r_40 :
  if(match_cons(u_40, sym_TCons_2))
    {
      v_40 = ATgetArgument(u_40, 0);
      a_41 = ATgetArgument(u_40, 1);
      s_40 :
      if(match_cons(a_41, sym_TCons_2))
        {
          b_41 = ATgetArgument(a_41, 0);
          c_41 = ATgetArgument(a_41, 1);
          t_40 :
          if(match_cons(c_41, sym_TNil_0))
            {
              t = not_null(v_40);
              {
                ATerm z_0 (ATerm t)
                {
                  t = not_null(b_41);
                  return(t);
                }
                t = at_end_1(t, z_0);
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
  ATerm h_41 = NULL;
  h_41 = t;
  g_41 :
  if(!(match_cons(h_41, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm t_32 (ATerm), ATerm u_32 (ATerm))
{
  ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL;
  m_41 = t;
  l_41 :
  if(match_cons(m_41, sym_TCons_2))
    {
      n_41 = ATgetArgument(m_41, 0);
      o_41 = ATgetArgument(m_41, 1);
      {
        ATerm r_41 = NULL;
        t = not_null(n_41);
        {
          ATerm t_41 = NULL;
          t = t_32(t);
          r_41 = t;
          t = not_null(o_41);
          t = u_32(t);
          t_41 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_41), not_null(t_41));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm c_42 = NULL,e_42 = NULL,f_42 = NULL,h_42 = NULL,i_42 = NULL;
  c_42 = t;
  z_41 :
  if(match_cons(c_42, sym_TCons_2))
    {
      e_42 = ATgetArgument(c_42, 0);
      f_42 = ATgetArgument(c_42, 1);
      a_42 :
      if(match_cons(f_42, sym_TCons_2))
        {
          h_42 = ATgetArgument(f_42, 0);
          i_42 = ATgetArgument(f_42, 1);
          b_42 :
          if(match_cons(i_42, sym_TNil_0))
            {
              ATerm x_7 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(e_42), not_null(h_42));
                  PopChoice();
                }
              else
                {
                  t = x_7;
                  t = SSL_subtr(not_null(e_42), not_null(h_42));
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
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL,y_42 = NULL,z_42 = NULL;
  t_42 = t;
  q_42 :
  if(match_cons(t_42, sym_TCons_2))
    {
      u_42 = ATgetArgument(t_42, 0);
      v_42 = ATgetArgument(t_42, 1);
      r_42 :
      if(match_cons(v_42, sym_TCons_2))
        {
          y_42 = ATgetArgument(v_42, 0);
          z_42 = ATgetArgument(v_42, 1);
          s_42 :
          if(match_cons(z_42, sym_TNil_0))
            {
              ATerm y_7;
              y_7 = t;
              {
                ATerm z_7 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(u_42), not_null(y_42));
                    PopChoice();
                  }
                else
                  {
                    t = z_7;
                    t = SSL_gtr(not_null(u_42), not_null(y_42));
                  }
              }
              t = y_7;
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
  ATerm h_43 = NULL;
  ATerm a_8 = t;
  if(PushChoice()==0)
    {
      ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL;
      i_43 = t;
      e_43 :
      if(match_cons(i_43, sym_TCons_2))
        {
          j_43 = ATgetArgument(i_43, 0);
          k_43 = ATgetArgument(i_43, 1);
          f_43 :
          if(match_cons(k_43, sym_TCons_2))
            {
              l_43 = ATgetArgument(k_43, 0);
              m_43 = ATgetArgument(k_43, 1);
              g_43 :
              if(match_cons(m_43, sym_TNil_0))
                {
                  if(h_43 != NULL && h_43 != j_43)
                    _fail(j_43);
                  else
                    h_43 = j_43;
                  if(h_43 != NULL && h_43 != l_43)
                    _fail(l_43);
                  else
                    h_43 = l_43;
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
      t = a_8;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm a_52 (ATerm), ATerm b_52 (ATerm))
{
  ATerm o_43 (ATerm t)
  {
    ATerm b_8 = t;
    if(PushChoice()==0)
      {
        t = a_52(t);
        PopChoice();
      }
    else
      {
        t = b_8;
        t = b_52(t);
        t = o_43(t);
      }
    return(t);
  }
  t = o_43(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm d_52 (ATerm), ATerm e_52 (ATerm), ATerm f_52 (ATerm))
{
  t = d_52(t);
  t = while_not_2(t, e_52, f_52);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm c_8 = t;
  if(PushChoice()==0)
    {
      ATerm c_1 (ATerm t)
      {
        ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL;
        h_44 = t;
        q_43 :
        if(match_cons(h_44, sym_TCons_2))
          {
            i_44 = ATgetArgument(h_44, 0);
            j_44 = ATgetArgument(h_44, 1);
            r_43 :
            if(match_cons(j_44, sym_TCons_2))
              {
                k_44 = ATgetArgument(j_44, 0);
                l_44 = ATgetArgument(j_44, 1);
                s_43 :
                if(match_cons(l_44, sym_TNil_0))
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_44), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_44), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
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
      ATerm f_1 (ATerm t)
      {
        ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL;
        o_44 = t;
        u_43 :
        if(match_cons(o_44, sym_TCons_2))
          {
            p_44 = ATgetArgument(o_44, 0);
            q_44 = ATgetArgument(o_44, 1);
            v_43 :
            if(match_int(p_44, 0))
              {
                w_43 :
                if(match_cons(q_44, sym_TCons_2))
                  {
                    r_44 = ATgetArgument(q_44, 0);
                    s_44 = ATgetArgument(q_44, 1);
                    x_43 :
                    if(match_cons(s_44, sym_TCons_2))
                      {
                        t_44 = ATgetArgument(s_44, 0);
                        u_44 = ATgetArgument(s_44, 1);
                        y_43 :
                        if(match_cons(u_44, sym_TNil_0))
                          t = not_null(t_44);
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
      ATerm q_1 (ATerm t)
      {
        ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL;
        x_44 = t;
        b_44 :
        if(match_cons(x_44, sym_TCons_2))
          {
            y_44 = ATgetArgument(x_44, 0);
            z_44 = ATgetArgument(x_44, 1);
            c_44 :
            if(match_cons(z_44, sym_TCons_2))
              {
                a_45 = ATgetArgument(z_44, 0);
                b_45 = ATgetArgument(z_44, 1);
                d_44 :
                if(match_cons(b_45, sym_TCons_2))
                  {
                    c_45 = ATgetArgument(b_45, 0);
                    d_45 = ATgetArgument(b_45, 1);
                    e_44 :
                    if(match_cons(d_45, sym_TNil_0))
                      {
                        ATerm h_45 = NULL;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_44), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                        t = geq_0(t);
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_44), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                        t = subt_0(t);
                        h_45 = t;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_45), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_45), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_45), not_null(c_45)), (ATerm) ATmakeAppl(sym_TNil_0))));
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
      t = for_3(t, c_1, f_1, q_1);
      PopChoice();
    }
  else
    {
      t = c_8;
      {
        ATerm t_1 (ATerm t)
        {
          ATerm j_45 = NULL;
          j_45 = t;
          f_44 :
          if(!(match_int(j_45, 0)))
            _fail(t);
          return(t);
        }
        ATerm u_1 (ATerm t)
        {
          ATerm v_1 (ATerm t)
          {
            ATerm k_45 = NULL;
            k_45 = t;
            g_44 :
            if(!(match_cons(k_45, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, _id, v_1);
          return(t);
        }
        t = TCons_2(t, t_1, u_1);
        t = (ATerm) ATmakeAppl(sym_Nil_0);
      }
    }
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm q_45 = NULL;
  q_45 = t;
  p_45 :
  if(!(match_cons(q_45, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0 (ATerm t)
{
  ATerm v_45 = NULL;
  ATerm d_8 = t;
  if(PushChoice()==0)
    {
      ATerm e_2 (ATerm t)
      {
        ATerm f_2 (ATerm t)
        {
          ATerm w_45 = NULL;
          w_45 = t;
          r_45 :
          if(!(match_cons(w_45, sym_VS_0)))
            _fail(t);
          return(t);
        }
        ATerm g_2 (ATerm t)
        {
          ATerm x_45 = NULL;
          x_45 = t;
          if(v_45 != NULL && v_45 != x_45)
            _fail(x_45);
          else
            v_45 = x_45;
          return(t);
        }
        t = SOpt_2(t, f_2, g_2);
        return(t);
      }
      t = fetch_1(t, e_2);
      t = not_null(v_45);
      PopChoice();
    }
  else
    {
      t = d_8;
      t = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
    }
  return(t);
}
ATerm R_2 (ATerm t, ATerm i_31 (ATerm), ATerm j_31 (ATerm))
{
  ATerm f_46 = NULL,g_46 = NULL,j_46 = NULL;
  f_46 = t;
  e_46 :
  if(match_cons(f_46, sym_R_2))
    {
      g_46 = ATgetArgument(f_46, 0);
      j_46 = ATgetArgument(f_46, 1);
      {
        ATerm o_46 = NULL;
        t = not_null(g_46);
        {
          ATerm q_46 = NULL;
          t = i_31(t);
          o_46 = t;
          t = not_null(j_46);
          t = j_31(t);
          q_46 = t;
          t = (ATerm) ATmakeAppl(sym_R_2, not_null(o_46), not_null(q_46));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm filter_1 (ATerm t, ATerm a_40 (ATerm))
{
  ATerm b_47 (ATerm t)
  {
    ATerm e_8 = t;
    if(PushChoice()==0)
      {
        ATerm a_47 = NULL;
        a_47 = t;
        z_46 :
        if(!(match_cons(a_47, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = e_8;
        {
          ATerm f_8 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, a_40, b_47);
              PopChoice();
            }
          else
            {
              t = f_8;
              t = Tl_0(t);
              t = b_47(t);
            }
        }
      }
    return(t);
  }
  t = b_47(t);
  return(t);
}
ATerm construct_rows_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = split_2(t, _id, h_2);
  {
    ATerm a_49 (ATerm t)
    {
      ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL;
      ATerm d_49 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_47), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_47), not_null(b_48)), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = a_49(t);
        return(t);
      }
      w_47 = t;
      m_47 :
      if(match_cons(w_47, sym_TCons_2))
        {
          x_47 = ATgetArgument(w_47, 0);
          a_48 = ATgetArgument(w_47, 1);
          n_47 :
          if(match_cons(x_47, sym_Nil_0))
            {
              o_47 :
              if(match_cons(a_48, sym_TCons_2))
                {
                  b_48 = ATgetArgument(a_48, 0);
                  c_48 = ATgetArgument(a_48, 1);
                  p_47 :
                  if(match_cons(c_48, sym_TNil_0))
                    {
                      ATerm h_48 = NULL;
                      t = not_null(b_48);
                      t = reverse_0(t);
                      h_48 = t;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_R_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(h_48)), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(x_47, sym_Cons_2))
                {
                  y_47 = ATgetArgument(x_47, 0);
                  z_47 = ATgetArgument(x_47, 1);
                  q_47 :
                  if(match_cons(a_48, sym_TCons_2))
                    {
                      b_48 = ATgetArgument(a_48, 0);
                      c_48 = ATgetArgument(a_48, 1);
                      r_47 :
                      if(match_cons(c_48, sym_TNil_0))
                        {
                          s_47 :
                          if(match_cons(y_47, sym_R_2))
                            {
                              u_47 = ATgetArgument(y_47, 0);
                              v_47 = ATgetArgument(y_47, 1);
                              {
                                ATerm g_8 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm r_48 = NULL;
                                    t = not_null(b_48);
                                    {
                                      ATerm t_48 = NULL;
                                      t = reverse_0(t);
                                      r_48 = t;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_47), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = a_49(t);
                                      t_48 = t;
                                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_R_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(r_48)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_R_2, not_null(u_47), not_null(v_47)), not_null(t_48)));
                                    }
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = g_8;
                                    t = d_49(t);
                                  }
                              }
                            }
                          else
                            t = d_49(t);
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
    t = a_49(t);
    {
      ATerm i_2 (ATerm t)
      {
        ATerm h_8 = t;
        if(PushChoice()==0)
          {
            ATerm j_2 (ATerm t)
            {
              ATerm z_48 = NULL;
              z_48 = t;
              t_47 :
              if(!(match_cons(z_48, sym_Nil_0)))
                _fail(t);
              return(t);
            }
            t = R_2(t, _id, j_2);
            PopChoice();
            _fail(t);
          }
        else
          t = h_8;
        return(t);
      }
      t = filter_1(t, i_2);
    }
  }
  return(t);
}
ATerm IS_0 (ATerm t)
{
  ATerm i_49 = NULL;
  i_49 = t;
  h_49 :
  if(!(match_cons(i_49, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0 (ATerm t)
{
  ATerm l_49 = NULL;
  ATerm i_8 = t;
  if(PushChoice()==0)
    {
      ATerm l_2 (ATerm t)
      {
        ATerm n_2 (ATerm t)
        {
          ATerm m_49 = NULL;
          m_49 = t;
          j_49 :
          if(!(match_cons(m_49, sym_IS_0)))
            _fail(t);
          return(t);
        }
        ATerm p_2 (ATerm t)
        {
          ATerm n_49 = NULL;
          n_49 = t;
          if(l_49 != NULL && l_49 != n_49)
            _fail(n_49);
          else
            l_49 = n_49;
          return(t);
        }
        t = SOpt_2(t, n_2, p_2);
        return(t);
      }
      t = fetch_1(t, l_2);
      t = not_null(l_49);
      PopChoice();
    }
  else
    {
      t = i_8;
      t = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
    }
  return(t);
}
ATerm HS_0 (ATerm t)
{
  ATerm q_49 = NULL;
  q_49 = t;
  p_49 :
  if(!(match_cons(q_49, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm t_30 (ATerm), ATerm u_30 (ATerm))
{
  ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL;
  v_49 = t;
  u_49 :
  if(match_cons(v_49, sym_SOpt_2))
    {
      w_49 = ATgetArgument(v_49, 0);
      x_49 = ATgetArgument(v_49, 1);
      {
        ATerm c_50 = NULL;
        t = not_null(w_49);
        {
          ATerm e_50 = NULL;
          t = t_30(t);
          c_50 = t;
          t = not_null(x_49);
          t = u_30(t);
          e_50 = t;
          t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(c_50), not_null(e_50));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Hspace_0 (ATerm t)
{
  ATerm l_50 = NULL;
  ATerm j_8 = t;
  if(PushChoice()==0)
    {
      ATerm q_2 (ATerm t)
      {
        ATerm r_2 (ATerm t)
        {
          ATerm m_50 = NULL;
          m_50 = t;
          j_50 :
          if(!(match_cons(m_50, sym_HS_0)))
            _fail(t);
          return(t);
        }
        ATerm s_2 (ATerm t)
        {
          ATerm n_50 = NULL;
          n_50 = t;
          if(l_50 != NULL && l_50 != n_50)
            _fail(n_50);
          else
            l_50 = n_50;
          return(t);
        }
        t = SOpt_2(t, r_2, s_2);
        return(t);
      }
      t = fetch_1(t, q_2);
      t = not_null(l_50);
      PopChoice();
    }
  else
    {
      t = j_8;
      t = (ATerm) ATmakeAppl(ATmakeSymbol("1", 0, ATtrue));
    }
  return(t);
}
ATerm toh_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
    return(t);
  }
  t = separate_by_1(t, t_2);
  return(t);
}
ATerm CL_0 (ATerm t)
{
  ATerm q_50 = NULL;
  q_50 = t;
  p_50 :
  if(!(match_cons(q_50, sym_CL_0)))
    _fail(t);
  return(t);
}
ATerm FFID_2 (ATerm t, ATerm q_31 (ATerm), ATerm r_31 (ATerm))
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL;
  v_50 = t;
  u_50 :
  if(match_cons(v_50, sym_FFID_2))
    {
      w_50 = ATgetArgument(v_50, 0);
      x_50 = ATgetArgument(v_50, 1);
      {
        ATerm a_51 = NULL;
        t = not_null(w_50);
        {
          ATerm c_51 = NULL;
          t = q_31(t);
          a_51 = t;
          t = not_null(x_50);
          t = r_31(t);
          c_51 = t;
          t = (ATerm) ATmakeAppl(sym_FFID_2, not_null(a_51), not_null(c_51));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SZ_0 (ATerm t)
{
  ATerm i_51 = NULL;
  i_51 = t;
  h_51 :
  if(!(match_cons(i_51, sym_SZ_0)))
    _fail(t);
  return(t);
}
ATerm SH_0 (ATerm t)
{
  ATerm o_51 = NULL;
  o_51 = t;
  n_51 :
  if(!(match_cons(o_51, sym_SH_0)))
    _fail(t);
  return(t);
}
ATerm SE_0 (ATerm t)
{
  ATerm q_51 = NULL;
  q_51 = t;
  p_51 :
  if(!(match_cons(q_51, sym_SE_0)))
    _fail(t);
  return(t);
}
ATerm FM_0 (ATerm t)
{
  ATerm s_51 = NULL;
  s_51 = t;
  r_51 :
  if(!(match_cons(s_51, sym_FM_0)))
    _fail(t);
  return(t);
}
ATerm MATH_0 (ATerm t)
{
  ATerm u_51 = NULL;
  u_51 = t;
  t_51 :
  if(!(match_cons(u_51, sym_MATH_0)))
    _fail(t);
  return(t);
}
ATerm NUM_0 (ATerm t)
{
  ATerm w_51 = NULL;
  w_51 = t;
  v_51 :
  if(!(match_cons(w_51, sym_NUM_0)))
    _fail(t);
  return(t);
}
ATerm VAR_0 (ATerm t)
{
  ATerm y_51 = NULL;
  y_51 = t;
  x_51 :
  if(!(match_cons(y_51, sym_VAR_0)))
    _fail(t);
  return(t);
}
ATerm KW_0 (ATerm t)
{
  ATerm h_52 = NULL;
  h_52 = t;
  z_51 :
  if(!(match_cons(h_52, sym_KW_0)))
    _fail(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
  k_52 = t;
  j_52 :
  if(match_cons(k_52, sym_Cons_2))
    {
      l_52 = ATgetArgument(k_52, 0);
      m_52 = ATgetArgument(k_52, 1);
      t = not_null(m_52);
    }
  else
    _fail(t);
  return(t);
}
ATerm remove_trailing_1 (ATerm t, ATerm v_52 (ATerm))
{
  ATerm q_52 (ATerm t)
  {
    ATerm k_8 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, v_52, _id);
        t = Tl_0(t);
        t = q_52(t);
        PopChoice();
      }
    else
      t = k_8;
    return(t);
  }
  t = q_52(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm l_46 (ATerm))
{
  ATerm r_52 (ATerm t)
  {
    ATerm l_8 = t;
    if(PushChoice()==0)
      {
        t = l_46(t);
        PopChoice();
      }
    else
      {
        t = l_8;
        t = Cons_2(t, _id, r_52);
      }
    return(t);
  }
  t = r_52(t);
  return(t);
}
ATerm LatexComment_0 (ATerm t)
{
  ATerm e_53 = NULL;
  ATerm v_2 (ATerm t)
  {
    ATerm d_53 = NULL;
    d_53 = t;
    s_52 :
    if(!(match_int(d_53, 9)))
      {
        if(!(match_int(d_53, 32)))
          _fail(t);
      }
    return(t);
  }
  t = remove_trailing_1(t, v_2);
  {
    ATerm m_8 = t;
    if(PushChoice()==0)
      {
        ATerm w_2 (ATerm t)
        {
          ATerm y_2 (ATerm t)
          {
            ATerm f_53 = NULL;
            f_53 = t;
            t_52 :
            if(!(match_int(f_53, 37)))
              _fail(t);
            return(t);
          }
          ATerm z_2 (ATerm t)
          {
            ATerm b_3 (ATerm t)
            {
              ATerm g_53 = NULL;
              g_53 = t;
              x_52 :
              if(!(match_int(g_53, 37)))
                _fail(t);
              return(t);
            }
            ATerm d_3 (ATerm t)
            {
              ATerm h_53 = NULL;
              h_53 = t;
              if(e_53 != NULL && e_53 != h_53)
                _fail(h_53);
              else
                e_53 = h_53;
              return(t);
            }
            t = Cons_2(t, b_3, d_3);
            return(t);
          }
          t = Cons_2(t, y_2, z_2);
          t = not_null(e_53);
          return(t);
        }
        t = at_suffix_1(t, w_2);
        PopChoice();
      }
    else
      t = m_8;
    t = implode_string_0(t);
  }
  return(t);
}
ATerm make_latex_comment_0 (ATerm t)
{
  t = explode_string_0(t);
  t = reverse_0(t);
  {
    ATerm e_3 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_Nil_0);
      return(t);
    }
    t = split_2(t, _id, e_3);
    {
      ATerm z_54 (ATerm t)
      {
        ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL;
        ATerm c_55 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_54), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_54), not_null(e_54)), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = z_54(t);
          return(t);
        }
        z_53 = t;
        p_53 :
        if(match_cons(z_53, sym_TCons_2))
          {
            a_54 = ATgetArgument(z_53, 0);
            d_54 = ATgetArgument(z_53, 1);
            q_53 :
            if(match_cons(a_54, sym_Nil_0))
              {
                r_53 :
                if(match_cons(d_54, sym_TCons_2))
                  {
                    e_54 = ATgetArgument(d_54, 0);
                    f_54 = ATgetArgument(d_54, 1);
                    s_53 :
                    if(match_cons(f_54, sym_TNil_0))
                      {
                        ATerm j_54 = NULL;
                        t = not_null(e_54);
                        t = LatexComment_0(t);
                        j_54 = t;
                        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_54), (ATerm) ATmakeAppl(sym_Nil_0));
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              {
                if(match_cons(a_54, sym_Cons_2))
                  {
                    b_54 = ATgetArgument(a_54, 0);
                    c_54 = ATgetArgument(a_54, 1);
                    t_53 :
                    if(match_cons(d_54, sym_TCons_2))
                      {
                        e_54 = ATgetArgument(d_54, 0);
                        f_54 = ATgetArgument(d_54, 1);
                        u_53 :
                        if(match_cons(f_54, sym_TNil_0))
                          {
                            v_53 :
                            if(match_int(b_54, 10))
                              {
                                ATerm n_8 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm o_54 = NULL;
                                    t = not_null(e_54);
                                    {
                                      ATerm q_54 = NULL;
                                      t = LatexComment_0(t);
                                      o_54 = t;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_54), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = z_54(t);
                                      q_54 = t;
                                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_54), not_null(q_54));
                                    }
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = n_8;
                                    t = c_55(t);
                                  }
                              }
                            else
                              t = c_55(t);
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
      t = z_54(t);
      {
        ATerm f_3 (ATerm t)
        {
          ATerm v_54 = NULL;
          v_54 = t;
          w_53 :
          if(!(match_string(v_54, "")))
            _fail(t);
          return(t);
        }
        t = remove_trailing_1(t, f_3);
        t = reverse_0(t);
        {
          ATerm q_3 (ATerm t)
          {
            ATerm w_54 = NULL;
            w_54 = t;
            x_53 :
            if(!(match_string(w_54, "")))
              _fail(t);
            return(t);
          }
          t = remove_trailing_1(t, q_3);
          {
            ATerm s_3 (ATerm t)
            {
              ATerm x_54 = NULL;
              x_54 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_54), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)));
              return(t);
            }
            t = map_1(t, s_3);
          }
        }
      }
    }
  }
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm o_8 = t;
  if(PushChoice()==0)
    {
      ATerm i_55 = NULL;
      i_55 = t;
      h_55 :
      if(!(match_cons(i_55, sym_Nil_0)))
        _fail(t);
      PopChoice();
    }
  else
    {
      t = o_8;
      t = Cons_2(t, _id, _id);
    }
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm o_55 = NULL,p_55 = NULL;
  ATerm p_8 = t;
  if(PushChoice()==0)
    {
      ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
      ATerm w_55 (ATerm t)
      {
        if(o_55 != NULL && o_55 != r_55)
          _fail(r_55);
        else
          o_55 = r_55;
        if(p_55 != NULL && p_55 != s_55)
          _fail(s_55);
        else
          p_55 = s_55;
        t = not_null(o_55);
        t = is_list_0(t);
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_55), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = conc_0(t);
        t = flat_list_0(t);
        return(t);
      }
      q_55 = t;
      m_55 :
      if(!(match_cons(q_55, sym_Nil_0)))
        {
          if(match_cons(q_55, sym_Cons_2))
            {
              r_55 = ATgetArgument(q_55, 0);
              s_55 = ATgetArgument(q_55, 1);
              n_55 :
              if(match_cons(r_55, sym_Nil_0))
                {
                  ATerm q_8 = t;
                  if(PushChoice()==0)
                    {
                      if(p_55 != NULL && p_55 != s_55)
                        _fail(s_55);
                      else
                        p_55 = s_55;
                      {
                        ATerm t_3 (ATerm t)
                        {
                          ATerm t_55 = NULL;
                          t_55 = t;
                          l_55 :
                          if(!(match_cons(t_55, sym_Nil_0)))
                            _fail(t);
                          return(t);
                        }
                        ATerm u_3 (ATerm t)
                        {
                          t = not_null(p_55);
                          t = flat_list_0(t);
                          return(t);
                        }
                        t = Cons_2(t, t_3, u_3);
                      }
                      PopChoice();
                    }
                  else
                    {
                      t = q_8;
                      t = w_55(t);
                    }
                }
              else
                t = w_55(t);
            }
          else
            _fail(t);
        }
      PopChoice();
    }
  else
    {
      t = p_8;
      t = Cons_2(t, _id, flat_list_0);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm y_49 (ATerm))
{
  ATerm x_55 (ATerm t)
  {
    ATerm r_8 = t;
    if(PushChoice()==0)
      {
        t = y_49(t);
        PopChoice();
      }
    else
      {
        t = r_8;
        t = _one(t, x_55);
      }
    return(t);
  }
  t = x_55(t);
  return(t);
}
ATerm replace_quotes_0 (ATerm t)
{
  ATerm e_56 = NULL,l_56 = NULL;
  ATerm w_3 (ATerm t)
  {
    ATerm f_56 = NULL;
    f_56 = t;
    y_55 :
    if(!(match_int(f_56, 34)))
      _fail(t);
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    ATerm g_56 = NULL;
    g_56 = t;
    if(e_56 != NULL && e_56 != g_56)
      _fail(g_56);
    else
      e_56 = g_56;
    return(t);
  }
  t = Cons_2(t, w_3, x_3);
  t = not_null(e_56);
  {
    ATerm y_3 (ATerm t)
    {
      ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL;
      h_56 = t;
      b_56 :
      if(match_cons(h_56, sym_Cons_2))
        {
          i_56 = ATgetArgument(h_56, 0);
          j_56 = ATgetArgument(h_56, 1);
          c_56 :
          if(match_int(i_56, 34))
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(39), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(39), not_null(j_56)));
          else
            _fail(t);
        }
      else
        _fail(t);
      return(t);
    }
    t = oncetd_1(t, y_3);
    l_56 = t;
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(96), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(96), not_null(l_56)));
  }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm v_46 (ATerm))
{
  ATerm s_56 (ATerm t)
  {
    t = v_46(t);
    {
      ATerm s_8 = t;
      if(PushChoice()==0)
        {
          ATerm r_56 = NULL;
          r_56 = t;
          q_56 :
          if(!(match_cons(r_56, sym_Nil_0)))
            _fail(t);
          PopChoice();
        }
      else
        {
          t = s_8;
          t = Cons_2(t, _id, s_56);
        }
    }
    return(t);
  }
  t = s_56(t);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL;
  x_56 = t;
  u_56 :
  if(match_cons(x_56, sym_TCons_2))
    {
      y_56 = ATgetArgument(x_56, 0);
      z_56 = ATgetArgument(x_56, 1);
      v_56 :
      if(match_cons(z_56, sym_TCons_2))
        {
          a_57 = ATgetArgument(z_56, 0);
          b_57 = ATgetArgument(z_56, 1);
          w_56 :
          if(match_cons(b_57, sym_TNil_0))
            t = SSL_table_get(not_null(y_56), not_null(a_57));
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
  ATerm w_57 = NULL;
  ATerm t_8 = t;
  if(PushChoice()==0)
    {
      ATerm x_57 = NULL;
      x_57 = t;
      if(w_57 != NULL && w_57 != x_57)
        _fail(x_57);
      else
        w_57 = x_57;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_57), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = table_get_0(t);
      PopChoice();
    }
  else
    {
      t = t_8;
      t = explode_string_0(t);
      {
        ATerm z_3 (ATerm t)
        {
          ATerm u_8 = t;
          if(PushChoice()==0)
            {
              t = replace_quotes_0(t);
              PopChoice();
            }
          else
            t = u_8;
          return(t);
        }
        t = listtd_1(t, z_3);
        {
          ATerm a_4 (ATerm t)
          {
            ATerm v_8 = t;
            if(PushChoice()==0)
              {
                ATerm y_57 = NULL;
                y_57 = t;
                v_57 :
                if(match_int(y_57, 32))
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
                    t = explode_string_0(t);
                  }
                else
                  {
                    if(match_int(y_57, 35))
                      {
                        t = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
                        t = explode_string_0(t);
                      }
                    else
                      {
                        if(match_int(y_57, 36))
                          {
                            t = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
                            t = explode_string_0(t);
                          }
                        else
                          {
                            if(match_int(y_57, 37))
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
                                t = explode_string_0(t);
                              }
                            else
                              {
                                if(match_int(y_57, 38))
                                  {
                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
                                    t = explode_string_0(t);
                                  }
                                else
                                  {
                                    if(match_int(y_57, 45))
                                      {
                                        t = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
                                        t = explode_string_0(t);
                                      }
                                    else
                                      {
                                        if(match_int(y_57, 60))
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
                                            t = explode_string_0(t);
                                          }
                                        else
                                          {
                                            if(match_int(y_57, 62))
                                              {
                                                t = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
                                                t = explode_string_0(t);
                                              }
                                            else
                                              {
                                                if(match_int(y_57, 92))
                                                  {
                                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
                                                    t = explode_string_0(t);
                                                  }
                                                else
                                                  {
                                                    if(match_int(y_57, 94))
                                                      {
                                                        t = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
                                                        t = explode_string_0(t);
                                                      }
                                                    else
                                                      {
                                                        if(match_int(y_57, 95))
                                                          {
                                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
                                                            t = explode_string_0(t);
                                                          }
                                                        else
                                                          {
                                                            if(match_int(y_57, 123))
                                                              {
                                                                t = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
                                                                t = explode_string_0(t);
                                                              }
                                                            else
                                                              {
                                                                if(match_int(y_57, 124))
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
                                                                    t = explode_string_0(t);
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_int(y_57, 125))
                                                                      {
                                                                        t = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
                                                                        t = explode_string_0(t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_int(y_57, 126))
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
                PopChoice();
              }
            else
              t = v_8;
            return(t);
          }
          t = map_1(t, a_4);
          t = flat_list_0(t);
          t = implode_string_0(t);
        }
      }
    }
  return(t);
}
ATerm Abox_2_latex_0 (ATerm t)
{
  ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL;
  ATerm y_63 (ATerm t)
  {
    ATerm e_61 = NULL;
    t = not_null(t_60);
    e_61 = t;
    f_59 :
    if(!(match_cons(e_61, sym_KW_0)))
      {
        if(!(match_cons(e_61, sym_VAR_0)))
          {
            if(!(match_cons(e_61, sym_NUM_0)))
              {
                if(!(match_cons(e_61, sym_MATH_0)))
                  _fail(t);
              }
          }
      }
    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(t_60), not_null(u_60));
    return(t);
  }
  ATerm z_63 (ATerm t)
  {
    t = not_null(u_60);
    return(t);
  }
  ATerm a_64 (ATerm t)
  {
    ATerm j_61 = NULL,k_61 = NULL;
    t = not_null(p_60);
    {
      ATerm w_8 = t;
      if(PushChoice()==0)
        {
          ATerm b_4 (ATerm t)
          {
            ATerm l_61 = NULL;
            l_61 = t;
            g_59 :
            if(!(match_cons(l_61, sym_FM_0)))
              _fail(t);
            return(t);
          }
          ATerm c_4 (ATerm t)
          {
            ATerm m_61 = NULL;
            m_61 = t;
            if(k_61 != NULL && k_61 != m_61)
              _fail(m_61);
            else
              k_61 = m_61;
            return(t);
          }
          t = FFID_2(t, b_4, c_4);
          PopChoice();
        }
      else
        {
          t = w_8;
          {
            ATerm x_8 = t;
            if(PushChoice()==0)
              {
                ATerm d_4 (ATerm t)
                {
                  ATerm n_61 = NULL;
                  n_61 = t;
                  i_59 :
                  if(!(match_cons(n_61, sym_SE_0)))
                    _fail(t);
                  return(t);
                }
                ATerm e_4 (ATerm t)
                {
                  ATerm o_61 = NULL;
                  o_61 = t;
                  if(k_61 != NULL && k_61 != o_61)
                    _fail(o_61);
                  else
                    k_61 = o_61;
                  return(t);
                }
                t = FFID_2(t, d_4, e_4);
                PopChoice();
              }
            else
              {
                t = x_8;
                {
                  ATerm y_8 = t;
                  if(PushChoice()==0)
                    {
                      ATerm f_4 (ATerm t)
                      {
                        ATerm p_61 = NULL;
                        p_61 = t;
                        k_59 :
                        if(!(match_cons(p_61, sym_SH_0)))
                          _fail(t);
                        return(t);
                      }
                      ATerm g_4 (ATerm t)
                      {
                        ATerm q_61 = NULL;
                        q_61 = t;
                        if(k_61 != NULL && k_61 != q_61)
                          _fail(q_61);
                        else
                          k_61 = q_61;
                        return(t);
                      }
                      t = FFID_2(t, f_4, g_4);
                      PopChoice();
                    }
                  else
                    {
                      t = y_8;
                      {
                        ATerm z_8 = t;
                        if(PushChoice()==0)
                          {
                            ATerm h_4 (ATerm t)
                            {
                              ATerm r_61 = NULL;
                              r_61 = t;
                              m_59 :
                              if(!(match_cons(r_61, sym_SZ_0)))
                                _fail(t);
                              return(t);
                            }
                            ATerm i_4 (ATerm t)
                            {
                              ATerm s_61 = NULL;
                              s_61 = t;
                              if(k_61 != NULL && k_61 != s_61)
                                _fail(s_61);
                              else
                                k_61 = s_61;
                              return(t);
                            }
                            t = FFID_2(t, h_4, i_4);
                            PopChoice();
                          }
                        else
                          {
                            t = z_8;
                            {
                              ATerm v_61 = NULL;
                              ATerm j_4 (ATerm t)
                              {
                                ATerm t_61 = NULL;
                                t_61 = t;
                                o_59 :
                                if(!(match_cons(t_61, sym_CL_0)))
                                  _fail(t);
                                return(t);
                              }
                              ATerm k_4 (ATerm t)
                              {
                                ATerm u_61 = NULL;
                                u_61 = t;
                                if(j_61 != NULL && j_61 != u_61)
                                  _fail(u_61);
                                else
                                  j_61 = u_61;
                                return(t);
                              }
                              t = FFID_2(t, j_4, k_4);
                              t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, not_null(j_61));
                              v_61 = t;
                              if(k_61 != NULL && k_61 != v_61)
                                _fail(v_61);
                              else
                                k_61 = v_61;
                            }
                          }
                      }
                    }
                }
              }
          }
        }
    }
    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(k_61), (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, not_null(q_60)), not_null(u_60)));
    return(t);
  }
  ATerm b_64 (ATerm t)
  {
    ATerm y_61 = NULL,z_61 = NULL;
    ATerm a_62 = NULL;
    t = not_null(t_60);
    {
      ATerm b_62 = NULL;
      t = Hspace_0(t);
      a_62 = t;
      if(y_61 != NULL && y_61 != a_62)
        _fail(a_62);
      else
        y_61 = a_62;
      t = not_null(u_60);
      {
        ATerm l_4 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
          return(t);
        }
        t = separate_by_1(t, l_4);
        b_62 = t;
        if(z_61 != NULL && z_61 != b_62)
          _fail(b_62);
        else
          z_61 = b_62;
      }
    }
    t = (ATerm) ATmakeAppl(sym_HBOX_2, not_null(y_61), not_null(z_61));
    return(t);
  }
  ATerm c_64 (ATerm t)
  {
    ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL;
    ATerm h_62 = NULL;
    t = not_null(t_60);
    {
      ATerm i_62 = NULL;
      t = Vspace_0(t);
      h_62 = t;
      if(e_62 != NULL && e_62 != h_62)
        _fail(h_62);
      else
        e_62 = h_62;
      t = not_null(t_60);
      {
        ATerm j_62 = NULL;
        t = Ispace_0(t);
        i_62 = t;
        if(f_62 != NULL && f_62 != i_62)
          _fail(i_62);
        else
          f_62 = i_62;
        t = not_null(u_60);
        {
          ATerm m_4 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
            return(t);
          }
          t = separate_by_1(t, m_4);
          j_62 = t;
          if(g_62 != NULL && g_62 != j_62)
            _fail(j_62);
          else
            g_62 = j_62;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_VBOX_3, not_null(e_62), not_null(f_62), not_null(g_62));
    return(t);
  }
  ATerm d_64 (ATerm t)
  {
    ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL;
    ATerm q_62 = NULL;
    t = not_null(t_60);
    {
      ATerm r_62 = NULL;
      t = Hspace_0(t);
      q_62 = t;
      if(m_62 != NULL && m_62 != q_62)
        _fail(q_62);
      else
        m_62 = q_62;
      t = not_null(t_60);
      {
        ATerm s_62 = NULL;
        t = Vspace_0(t);
        r_62 = t;
        if(n_62 != NULL && n_62 != r_62)
          _fail(r_62);
        else
          n_62 = r_62;
        t = not_null(t_60);
        {
          ATerm t_62 = NULL;
          t = Ispace_0(t);
          s_62 = t;
          if(o_62 != NULL && o_62 != s_62)
            _fail(s_62);
          else
            o_62 = s_62;
          t = not_null(u_60);
          {
            ATerm n_4 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
              return(t);
            }
            t = separate_by_1(t, n_4);
            t_62 = t;
            if(p_62 != NULL && p_62 != t_62)
              _fail(t_62);
            else
              p_62 = t_62;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_HVBOX_4, not_null(m_62), not_null(n_62), not_null(o_62), not_null(p_62));
    return(t);
  }
  ATerm e_64 (ATerm t)
  {
    ATerm x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL;
    ATerm c_63 = NULL;
    t = not_null(r_60);
    {
      ATerm d_63 = NULL;
      t = construct_rows_0(t);
      c_63 = t;
      if(a_63 != NULL && a_63 != c_63)
        _fail(c_63);
      else
        a_63 = c_63;
      t = not_null(u_60);
      t = Vspace_0(t);
      {
        ATerm e_63 = NULL;
        t = string_to_int_0(t);
        d_63 = t;
        if(x_62 != NULL && x_62 != d_63)
          _fail(d_63);
        else
          x_62 = d_63;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_62), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_EOR_0), (ATerm) ATmakeAppl(sym_TNil_0)));
        {
          ATerm g_63 = NULL;
          t = copy_0(t);
          e_63 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_63), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_EOR_0), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          {
            ATerm h_63 = NULL;
            t = conc_0(t);
            g_63 = t;
            if(z_62 != NULL && z_62 != g_63)
              _fail(g_63);
            else
              z_62 = g_63;
            t = not_null(t_60);
            {
              ATerm i_63 = NULL;
              t = table_def_0(t);
              h_63 = t;
              if(y_62 != NULL && y_62 != h_63)
                _fail(h_63);
              else
                y_62 = h_63;
              t = not_null(a_63);
              t = map_1(t, MkRows_0);
              {
                ATerm o_4 (ATerm t)
                {
                  t = not_null(z_62);
                  return(t);
                }
                t = separate_by_1(t, o_4);
                i_63 = t;
                if(b_63 != NULL && b_63 != i_63)
                  _fail(i_63);
                else
                  b_63 = i_63;
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_ABOX_2, not_null(y_62), not_null(b_63));
    return(t);
  }
  ATerm f_64 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_ALTBOX_2, not_null(t_60), not_null(u_60));
    return(t);
  }
  ATerm g_64 (ATerm t)
  {
    ATerm n_63 = NULL;
    ATerm a_9 = t;
    if(PushChoice()==0)
      {
        ATerm o_63 = NULL;
        t = not_null(t_60);
        t = string_to_int_0(t);
        o_63 = t;
        if(n_63 != NULL && n_63 != o_63)
          _fail(o_63);
        else
          n_63 = o_63;
        PopChoice();
      }
    else
      {
        t = a_9;
        {
          ATerm b_9 = t;
          if(PushChoice()==0)
            {
              ATerm q_63 = NULL;
              t = not_null(t_60);
              t = explode_string_0(t);
              {
                ATerm p_4 (ATerm t)
                {
                  ATerm p_63 = NULL;
                  p_63 = t;
                  h_60 :
                  if(!(match_int(p_63, 61)))
                    _fail(t);
                  return(t);
                }
                t = Cons_2(t, p_4, _id);
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(61), (ATerm) ATmakeAppl(sym_Nil_0));
                t = implode_string_0(t);
                q_63 = t;
                if(n_63 != NULL && n_63 != q_63)
                  _fail(q_63);
                else
                  n_63 = q_63;
              }
              PopChoice();
            }
          else
            {
              t = b_9;
              {
                ATerm r_63 = NULL;
                t = not_null(t_60);
                r_63 = t;
                if(n_63 != NULL && n_63 != r_63)
                  _fail(r_63);
                else
                  n_63 = r_63;
              }
            }
        }
      }
    t = (ATerm) ATmakeAppl(sym_LBOX_2, not_null(n_63), not_null(u_60));
    return(t);
  }
  ATerm h_64 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(t_60), not_null(u_60));
    return(t);
  }
  ATerm i_64 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_REFBOX_2, not_null(t_60), not_null(u_60));
    return(t);
  }
  s_60 = t;
  k_60 :
  if(match_cons(s_60, sym_S_1))
    {
      t_60 = ATgetArgument(s_60, 0);
      t = not_null(t_60);
      t = latex_string_0(t);
    }
  else
    {
      if(match_cons(s_60, sym_C_2))
        {
          t_60 = ATgetArgument(s_60, 0);
          u_60 = ATgetArgument(s_60, 1);
          l_60 :
          if(match_cons(t_60, sym_Nil_0))
            {
              ATerm x_60 = NULL;
              ATerm b_61 = NULL;
              t = not_null(u_60);
              {
                ATerm q_4 (ATerm t)
                {
                  ATerm y_60 = NULL,z_60 = NULL;
                  y_60 = t;
                  d_59 :
                  if(match_cons(y_60, sym_S_1))
                    {
                      z_60 = ATgetArgument(y_60, 0);
                      t = not_null(z_60);
                      t = make_latex_comment_0(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = map_1(t, q_4);
                b_61 = t;
                if(x_60 != NULL && x_60 != b_61)
                  _fail(b_61);
                else
                  x_60 = b_61;
              }
              t = (ATerm) ATmakeAppl(sym_CBOX_1, not_null(x_60));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(s_60, sym_FBOX_2))
            {
              t_60 = ATgetArgument(s_60, 0);
              u_60 = ATgetArgument(s_60, 1);
              m_60 :
              if(match_cons(t_60, sym_F_1))
                {
                  o_60 = ATgetArgument(t_60, 0);
                  n_60 :
                  if(match_cons(o_60, sym_Nil_0))
                    {
                      ATerm c_9 = t;
                      if(PushChoice()==0)
                        {
                          t = y_63(t);
                          PopChoice();
                        }
                      else
                        {
                          t = c_9;
                          t = z_63(t);
                        }
                    }
                  else
                    {
                      if(match_cons(o_60, sym_Cons_2))
                        {
                          p_60 = ATgetArgument(o_60, 0);
                          q_60 = ATgetArgument(o_60, 1);
                          {
                            ATerm d_9 = t;
                            if(PushChoice()==0)
                              {
                                t = y_63(t);
                                PopChoice();
                              }
                            else
                              {
                                t = d_9;
                                t = a_64(t);
                              }
                          }
                        }
                      else
                        t = y_63(t);
                    }
                }
              else
                t = y_63(t);
            }
          else
            {
              if(match_cons(s_60, sym_H_2))
                {
                  t_60 = ATgetArgument(s_60, 0);
                  u_60 = ATgetArgument(s_60, 1);
                  t = b_64(t);
                }
              else
                {
                  if(match_cons(s_60, sym_V_2))
                    {
                      t_60 = ATgetArgument(s_60, 0);
                      u_60 = ATgetArgument(s_60, 1);
                      t = c_64(t);
                    }
                  else
                    {
                      if(match_cons(s_60, sym_HV_2))
                        {
                          t_60 = ATgetArgument(s_60, 0);
                          u_60 = ATgetArgument(s_60, 1);
                          t = d_64(t);
                        }
                      else
                        {
                          if(match_cons(s_60, sym_A_3))
                            {
                              t_60 = ATgetArgument(s_60, 0);
                              u_60 = ATgetArgument(s_60, 1);
                              r_60 = ATgetArgument(s_60, 2);
                              t = e_64(t);
                            }
                          else
                            {
                              if(match_cons(s_60, sym_ALT_2))
                                {
                                  t_60 = ATgetArgument(s_60, 0);
                                  u_60 = ATgetArgument(s_60, 1);
                                  t = f_64(t);
                                }
                              else
                                {
                                  if(match_cons(s_60, sym_L_2))
                                    {
                                      t_60 = ATgetArgument(s_60, 0);
                                      u_60 = ATgetArgument(s_60, 1);
                                      t = g_64(t);
                                    }
                                  else
                                    {
                                      if(match_cons(s_60, sym_LBL_2))
                                        {
                                          t_60 = ATgetArgument(s_60, 0);
                                          u_60 = ATgetArgument(s_60, 1);
                                          t = h_64(t);
                                        }
                                      else
                                        {
                                          if(match_cons(s_60, sym_REF_2))
                                            {
                                              t_60 = ATgetArgument(s_60, 0);
                                              u_60 = ATgetArgument(s_60, 1);
                                              t = i_64(t);
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
ATerm abox2latex_1 (ATerm t, ATerm y_52 (ATerm))
{
  ATerm m_65 = NULL;
  ATerm o_65 = NULL;
  m_65 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  {
    ATerm q_65 = NULL;
    t = y_52(t);
    o_65 = t;
    t = not_null(m_65);
    {
      ATerm r_4 (ATerm t)
      {
        ATerm e_9 = t;
        if(PushChoice()==0)
          {
            t = Abox_2_latex_0(t);
            PopChoice();
          }
        else
          t = e_9;
        return(t);
      }
      t = topdown_1(t, r_4);
      q_65 = t;
      t = (ATerm) ATmakeAppl(sym_BOXENV_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_65), (ATerm) ATmakeAppl(sym_Nil_0)), not_null(q_65));
      t = latex2text_0(t);
    }
  }
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_36 (ATerm))
{
  t = fetch_1(t, m_36);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL;
  y_65 = t;
  w_65 :
  if(match_cons(y_65, sym_TCons_2))
    {
      z_65 = ATgetArgument(y_65, 0);
      a_66 = ATgetArgument(y_65, 1);
      x_65 :
      if(match_cons(a_66, sym_TCons_2))
        {
          b_66 = ATgetArgument(a_66, 0);
          c_66 = ATgetArgument(a_66, 1);
          t = not_null(b_66);
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
  ATerm k_66 = NULL;
  ATerm f_9;
  f_9 = t;
  {
    ATerm g_9 = t;
    if(PushChoice()==0)
      {
        ATerm s_4 (ATerm t)
        {
          ATerm l_66 = NULL,m_66 = NULL;
          l_66 = t;
          i_66 :
          if(match_cons(l_66, sym_Input_1))
            {
              m_66 = ATgetArgument(l_66, 0);
              if(k_66 != NULL && k_66 != m_66)
                _fail(m_66);
              else
                k_66 = m_66;
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1(t, s_4);
        PopChoice();
      }
    else
      {
        t = g_9;
        {
          ATerm n_66 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          n_66 = t;
          if(k_66 != NULL && k_66 != n_66)
            _fail(n_66);
          else
            k_66 = n_66;
        }
      }
  }
  t = f_9;
  {
    ATerm t_4 (ATerm t)
    {
      t = not_null(k_66);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, t_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL;
  ATerm h_9;
  h_9 = t;
  {
    ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL;
    y_66 = t;
    r_66 :
    if(match_cons(y_66, sym_TCons_2))
      {
        z_66 = ATgetArgument(y_66, 0);
        a_67 = ATgetArgument(y_66, 1);
        s_66 :
        if(match_cons(a_67, sym_TCons_2))
          {
            b_67 = ATgetArgument(a_67, 0);
            c_67 = ATgetArgument(a_67, 1);
            t_66 :
            if(match_cons(c_67, sym_TCons_2))
              {
                d_67 = ATgetArgument(c_67, 0);
                e_67 = ATgetArgument(c_67, 1);
                u_66 :
                if(match_cons(e_67, sym_TNil_0))
                  {
                    if(v_66 != NULL && v_66 != z_66)
                      _fail(z_66);
                    else
                      v_66 = z_66;
                    if(w_66 != NULL && w_66 != b_67)
                      _fail(b_67);
                    else
                      w_66 = b_67;
                    if(x_66 != NULL && x_66 != d_67)
                      _fail(d_67);
                    else
                      x_66 = d_67;
                    t = SSL_table_put(not_null(v_66), not_null(w_66), not_null(x_66));
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
  t = h_9;
  return(t);
}
ATerm StoreEntries_0 (ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm k_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL;
    k_67 = t;
    h_67 :
    if(match_cons(k_67, sym_Cons_2))
      {
        l_67 = ATgetArgument(k_67, 0);
        m_67 = ATgetArgument(k_67, 1);
        i_67 :
        if(match_cons(m_67, sym_Cons_2))
          {
            n_67 = ATgetArgument(m_67, 0);
            o_67 = ATgetArgument(m_67, 1);
            j_67 :
            if(match_cons(o_67, sym_Nil_0))
              {
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_67), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_67), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  t = map_1(t, u_4);
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm t_67 = NULL;
  t_67 = t;
  t = SSL_ReadFromFile(not_null(t_67));
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_45 (ATerm))
{
  ATerm y_67 (ATerm t)
  {
    ATerm i_9 = t;
    if(PushChoice()==0)
      {
        ATerm x_67 = NULL;
        x_67 = t;
        w_67 :
        if(!(match_cons(x_67, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = i_9;
        t = Cons_2(t, s_45, y_67);
      }
    return(t);
  }
  t = y_67(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL;
  e_68 = t;
  a_68 :
  if(match_cons(e_68, sym_TCons_2))
    {
      f_68 = ATgetArgument(e_68, 0);
      g_68 = ATgetArgument(e_68, 1);
      b_68 :
      if(match_cons(f_68, sym_Nil_0))
        {
          c_68 :
          if(match_cons(g_68, sym_TCons_2))
            {
              h_68 = ATgetArgument(g_68, 0);
              i_68 = ATgetArgument(g_68, 1);
              d_68 :
              if(match_cons(i_68, sym_TNil_0))
                t = not_null(h_68);
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
  ATerm q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL;
  q_68 = t;
  m_68 :
  if(match_cons(q_68, sym_TCons_2))
    {
      r_68 = ATgetArgument(q_68, 0);
      u_68 = ATgetArgument(q_68, 1);
      n_68 :
      if(match_cons(r_68, sym_Cons_2))
        {
          s_68 = ATgetArgument(r_68, 0);
          t_68 = ATgetArgument(r_68, 1);
          o_68 :
          if(match_cons(u_68, sym_TCons_2))
            {
              v_68 = ATgetArgument(u_68, 0);
              w_68 = ATgetArgument(u_68, 1);
              p_68 :
              if(match_cons(w_68, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_68), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_68), not_null(v_68)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm j_51 (ATerm), ATerm k_51 (ATerm))
{
  ATerm b_69 (ATerm t)
  {
    ATerm j_9 = t;
    if(PushChoice()==0)
      {
        t = j_51(t);
        t = b_69(t);
        PopChoice();
      }
    else
      {
        t = j_9;
        t = k_51(t);
      }
    return(t);
  }
  t = b_69(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm m_51 (ATerm))
{
  t = repeat_2(t, m_51, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm d_69 = NULL;
  d_69 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_69), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm h_69 = NULL;
  h_69 = t;
  t = SSL_table_create(not_null(h_69));
  return(t);
}
ATerm load_tables_0 (ATerm t)
{
  ATerm k_9;
  k_9 = t;
  t = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  t = table_create_0(t);
  t = k_9;
  t = reverse_0(t);
  {
    ATerm v_4 (ATerm t)
    {
      t = ReadFromFile_0(t);
      t = StoreEntries_0(t);
      return(t);
    }
    t = map_1(t, v_4);
  }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm b_46 (ATerm))
{
  ATerm k_69 (ATerm t)
  {
    ATerm l_9 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, b_46, _id);
        PopChoice();
      }
    else
      {
        t = l_9;
        t = Cons_2(t, _id, k_69);
      }
    return(t);
  }
  t = k_69(t);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm d_42 (ATerm))
{
  ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL;
  o_69 = t;
  n_69 :
  if(match_cons(o_69, sym_Cons_2))
    {
      p_69 = ATgetArgument(o_69, 0);
      q_69 = ATgetArgument(o_69, 1);
      t = d_42(t);
      {
        ATerm w_4 (ATerm t)
        {
          ATerm t_69 = NULL;
          t_69 = t;
          if(p_69 != NULL && p_69 != t_69)
            _fail(t_69);
          else
            p_69 = t_69;
          return(t);
        }
        t = fetch_1(t, w_4);
      }
      t = not_null(q_69);
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL;
  c_70 = t;
  z_69 :
  if(match_cons(c_70, sym_TCons_2))
    {
      d_70 = ATgetArgument(c_70, 0);
      e_70 = ATgetArgument(c_70, 1);
      a_70 :
      if(match_cons(e_70, sym_TCons_2))
        {
          f_70 = ATgetArgument(e_70, 0);
          g_70 = ATgetArgument(e_70, 1);
          b_70 :
          if(match_cons(g_70, sym_TNil_0))
            {
              t = not_null(d_70);
              {
                ATerm l_70 (ATerm t)
                {
                  ATerm m_9 = t;
                  if(PushChoice()==0)
                    {
                      ATerm j_70 = NULL;
                      j_70 = t;
                      y_69 :
                      if(match_cons(j_70, sym_Nil_0))
                        t = not_null(f_70);
                      else
                        _fail(t);
                      PopChoice();
                    }
                  else
                    {
                      t = m_9;
                      {
                        ATerm n_9 = t;
                        if(PushChoice()==0)
                          {
                            ATerm x_4 (ATerm t)
                            {
                              t = not_null(f_70);
                              return(t);
                            }
                            t = HdMember_1(t, x_4);
                            t = l_70(t);
                            PopChoice();
                          }
                        else
                          {
                            t = n_9;
                            t = Cons_2(t, _id, l_70);
                          }
                      }
                    }
                  return(t);
                }
                t = l_70(t);
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
ATerm foldr_3 (ATerm t, ATerm w_40 (ATerm), ATerm x_40 (ATerm), ATerm y_40 (ATerm))
{
  ATerm b_71 (ATerm t)
  {
    ATerm s_70 = NULL,t_70 = NULL,u_70 = NULL;
    s_70 = t;
    r_70 :
    if(match_cons(s_70, sym_Nil_0))
      t = w_40(t);
    else
      {
        if(match_cons(s_70, sym_Cons_2))
          {
            t_70 = ATgetArgument(s_70, 0);
            u_70 = ATgetArgument(s_70, 1);
            {
              ATerm x_70 = NULL;
              t = not_null(t_70);
              {
                ATerm z_70 = NULL;
                t = y_40(t);
                x_70 = t;
                t = not_null(u_70);
                t = b_71(t);
                z_70 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_70), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_70), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = x_40(t);
              }
            }
          }
        else
          _fail(t);
      }
    return(t);
  }
  t = b_71(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm n_42 (ATerm), ATerm o_42 (ATerm), ATerm p_42 (ATerm))
{
  ATerm m_71 = NULL;
  ATerm o_71 = NULL;
  m_71 = t;
  {
    ATerm p_71 = NULL;
    ATerm r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL;
    t = not_null(m_71);
    p_71 = t;
    t = SSL_explode_term(not_null(p_71));
    r_71 = t;
    j_71 :
    if(match_cons(r_71, sym_TCons_2))
      {
        s_71 = ATgetArgument(r_71, 0);
        t_71 = ATgetArgument(r_71, 1);
        k_71 :
        if(match_cons(t_71, sym_TCons_2))
          {
            u_71 = ATgetArgument(t_71, 0);
            v_71 = ATgetArgument(t_71, 1);
            l_71 :
            if(match_cons(v_71, sym_TNil_0))
              {
                if(o_71 != NULL && o_71 != u_71)
                  _fail(u_71);
                else
                  o_71 = u_71;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(o_71);
    t = foldr_3(t, n_42, o_42, p_42);
  }
  return(t);
}
ATerm collect_1 (ATerm t, ATerm w_42 (ATerm))
{
  ATerm c_72 (ATerm t)
  {
    ATerm o_9 = t;
    if(PushChoice()==0)
      {
        ATerm a_72 = NULL;
        t = w_42(t);
        a_72 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_72), (ATerm) ATmakeAppl(sym_Nil_0));
        PopChoice();
      }
    else
      {
        t = o_9;
        {
          ATerm y_4 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Nil_0);
            return(t);
          }
          t = crush_3(t, y_4, union_0, c_72);
        }
      }
    return(t);
  }
  t = c_72(t);
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm f_72 = NULL;
  f_72 = t;
  t = SSL_open_file(not_null(f_72));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm j_72 = NULL;
  j_72 = t;
  t = SSL_exit(not_null(j_72));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm q_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL;
  q_72 = t;
  n_72 :
  if(match_cons(q_72, sym_TCons_2))
    {
      r_72 = ATgetArgument(q_72, 0);
      s_72 = ATgetArgument(q_72, 1);
      o_72 :
      if(match_cons(s_72, sym_TCons_2))
        {
          t_72 = ATgetArgument(s_72, 0);
          u_72 = ATgetArgument(s_72, 1);
          p_72 :
          if(match_cons(u_72, sym_TNil_0))
            {
              ATerm p_9;
              p_9 = t;
              t = SSL_printnl(not_null(r_72), not_null(t_72));
              t = p_9;
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
  ATerm a_73 = NULL;
  ATerm q_9;
  q_9 = t;
  {
    ATerm z_4 (ATerm t)
    {
      ATerm b_73 = NULL,c_73 = NULL;
      b_73 = t;
      z_72 :
      if(match_cons(b_73, sym_Program_1))
        {
          c_73 = ATgetArgument(b_73, 0);
          if(a_73 != NULL && a_73 != c_73)
            _fail(c_73);
          else
            a_73 = c_73;
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1(t, z_4);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_73), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-i abox] [-o latex] [-t table ... ] [-w width] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
  }
  t = q_9;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm f_73 = NULL;
  f_73 = t;
  e_73 :
  if(!(match_cons(f_73, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm o_29 (ATerm))
{
  ATerm j_73 = NULL,k_73 = NULL;
  j_73 = t;
  i_73 :
  if(match_cons(j_73, sym_Undefined_1))
    {
      k_73 = ATgetArgument(j_73, 0);
      {
        ATerm m_73 = NULL;
        t = not_null(k_73);
        t = o_29(t);
        m_73 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_73));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm r_73 = NULL;
  r_73 = t;
  q_73 :
  if(!(match_cons(r_73, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm h_37 (ATerm))
{
  ATerm a_5 (ATerm t)
  {
    ATerm r_9 = t;
    if(PushChoice()==0)
      {
        ATerm u_73 = NULL;
        u_73 = t;
        s_73 :
        if(!(match_cons(u_73, sym_Help_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = r_9;
        {
          ATerm s_9 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = s_9;
              {
                ATerm v_73 = NULL;
                v_73 = t;
                t_73 :
                if(!(match_cons(v_73, sym_Version_0)))
                  _fail(t);
              }
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, a_5);
  t = h_37(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm h_36 (ATerm), ATerm i_36 (ATerm))
{
  ATerm a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL;
  a_74 = t;
  y_73 :
  if(match_cons(a_74, sym_Cons_2))
    {
      b_74 = ATgetArgument(a_74, 0);
      c_74 = ATgetArgument(a_74, 1);
      z_73 :
      if(match_cons(c_74, sym_Cons_2))
        {
          d_74 = ATgetArgument(c_74, 0);
          e_74 = ATgetArgument(c_74, 1);
          {
            ATerm i_74 = NULL;
            t = not_null(b_74);
            t = h_36(t);
            t = not_null(d_74);
            t = i_36(t);
            i_74 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_74), not_null(e_74));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm f_36 (ATerm), ATerm g_36 (ATerm))
{
  ATerm p_74 = NULL,q_74 = NULL,r_74 = NULL;
  p_74 = t;
  o_74 :
  if(match_cons(p_74, sym_Cons_2))
    {
      q_74 = ATgetArgument(p_74, 0);
      r_74 = ATgetArgument(p_74, 1);
      {
        ATerm u_74 = NULL;
        t = not_null(q_74);
        t = f_36(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = g_36(t);
        u_74 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_74), not_null(r_74));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm t_9 = t;
  if(PushChoice()==0)
    {
      ATerm b_5 (ATerm t)
      {
        ATerm u_75 = NULL;
        u_75 = t;
        y_74 :
        if(!(match_string(u_75, "-S")))
          _fail(t);
        return(t);
      }
      ATerm c_5 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, b_5, c_5);
      PopChoice();
    }
  else
    {
      t = t_9;
      {
        ATerm u_9 = t;
        if(PushChoice()==0)
          {
            ATerm d_5 (ATerm t)
            {
              ATerm v_75 = NULL;
              v_75 = t;
              z_74 :
              if(!(match_string(v_75, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm e_5 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, d_5, e_5);
            PopChoice();
          }
        else
          {
            t = u_9;
            {
              ATerm v_9 = t;
              if(PushChoice()==0)
                {
                  ATerm f_5 (ATerm t)
                  {
                    ATerm w_75 = NULL;
                    w_75 = t;
                    a_75 :
                    if(!(match_string(w_75, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm g_5 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, f_5, g_5);
                  PopChoice();
                }
              else
                {
                  t = v_9;
                  {
                    ATerm w_9 = t;
                    if(PushChoice()==0)
                      {
                        ATerm h_5 (ATerm t)
                        {
                          ATerm x_75 = NULL;
                          x_75 = t;
                          b_75 :
                          if(!(match_string(x_75, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm i_5 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, h_5, i_5);
                        PopChoice();
                      }
                    else
                      {
                        t = w_9;
                        {
                          ATerm x_9 = t;
                          if(PushChoice()==0)
                            {
                              ATerm j_5 (ATerm t)
                              {
                                ATerm y_75 = NULL;
                                y_75 = t;
                                c_75 :
                                if(!(match_string(y_75, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm k_5 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, j_5, k_5);
                              PopChoice();
                            }
                          else
                            {
                              t = x_9;
                              {
                                ATerm y_9 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm l_5 (ATerm t)
                                    {
                                      ATerm z_75 = NULL;
                                      z_75 = t;
                                      d_75 :
                                      if(!(match_string(z_75, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm m_5 (ATerm t)
                                    {
                                      ATerm a_76 = NULL;
                                      a_76 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(a_76));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, l_5, m_5);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = y_9;
                                    {
                                      ATerm z_9 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm n_5 (ATerm t)
                                          {
                                            ATerm c_76 = NULL;
                                            c_76 = t;
                                            f_75 :
                                            if(!(match_string(c_76, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm o_5 (ATerm t)
                                          {
                                            ATerm d_76 = NULL;
                                            d_76 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_76));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, n_5, o_5);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = z_9;
                                          {
                                            ATerm a_10 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm p_5 (ATerm t)
                                                {
                                                  ATerm f_76 = NULL;
                                                  f_76 = t;
                                                  i_75 :
                                                  if(!(match_string(f_76, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm c_6 (ATerm t)
                                                {
                                                  ATerm g_76 = NULL;
                                                  g_76 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(g_76));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, p_5, c_6);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = a_10;
                                                {
                                                  ATerm b_10 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm d_6 (ATerm t)
                                                      {
                                                        ATerm i_76 = NULL;
                                                        i_76 = t;
                                                        k_75 :
                                                        if(!(match_string(i_76, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm e_6 (ATerm t)
                                                      {
                                                        ATerm j_76 = NULL;
                                                        j_76 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_76));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, d_6, e_6);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = b_10;
                                                      {
                                                        ATerm c_10 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm f_6 (ATerm t)
                                                            {
                                                              ATerm l_76 = NULL;
                                                              l_76 = t;
                                                              m_75 :
                                                              if(!(match_string(l_76, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm g_6 (ATerm t)
                                                            {
                                                              ATerm m_76 = NULL;
                                                              m_76 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_76));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, f_6, g_6);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = c_10;
                                                            {
                                                              ATerm d_10 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm h_6 (ATerm t)
                                                                  {
                                                                    ATerm o_76 = NULL;
                                                                    o_76 = t;
                                                                    o_75 :
                                                                    if(!(match_string(o_76, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm i_6 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, h_6, i_6);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = d_10;
                                                                  {
                                                                    ATerm e_10 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm j_6 (ATerm t)
                                                                        {
                                                                          ATerm p_76 = NULL;
                                                                          p_76 = t;
                                                                          p_75 :
                                                                          if(!(match_string(p_76, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm k_6 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, j_6, k_6);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_10;
                                                                        {
                                                                          ATerm f_10 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm l_6 (ATerm t)
                                                                              {
                                                                                ATerm q_76 = NULL;
                                                                                q_76 = t;
                                                                                q_75 :
                                                                                if(!(match_string(q_76, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm m_6 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, l_6, m_6);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_10;
                                                                              {
                                                                                ATerm g_10 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm n_6 (ATerm t)
                                                                                    {
                                                                                      ATerm r_76 = NULL;
                                                                                      r_76 = t;
                                                                                      r_75 :
                                                                                      if(!(match_string(r_76, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm o_6 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, n_6, o_6);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = g_10;
                                                                                    {
                                                                                      ATerm p_6 (ATerm t)
                                                                                      {
                                                                                        ATerm s_76 = NULL;
                                                                                        s_76 = t;
                                                                                        s_75 :
                                                                                        if(!(match_string(s_76, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm q_6 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, p_6, q_6);
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
  ATerm a_77 = NULL,b_77 = NULL,c_77 = NULL;
  a_77 = t;
  z_76 :
  if(match_cons(a_77, sym_Cons_2))
    {
      b_77 = ATgetArgument(a_77, 0);
      c_77 = ATgetArgument(a_77, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_77)), not_null(c_77));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm x_32 (ATerm), ATerm y_32 (ATerm))
{
  ATerm k_77 = NULL,l_77 = NULL,m_77 = NULL;
  k_77 = t;
  j_77 :
  if(match_cons(k_77, sym_Cons_2))
    {
      l_77 = ATgetArgument(k_77, 0);
      m_77 = ATgetArgument(k_77, 1);
      {
        ATerm p_77 = NULL;
        t = not_null(l_77);
        {
          ATerm r_77 = NULL;
          t = x_32(t);
          p_77 = t;
          t = not_null(m_77);
          t = y_32(t);
          r_77 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_77), not_null(r_77));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm x_77 = NULL;
  x_77 = t;
  w_77 :
  if(!(match_cons(x_77, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_36 (ATerm))
{
  ATerm r_6 (ATerm t)
  {
    ATerm a_78 = NULL;
    a_78 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_78));
    return(t);
  }
  ATerm s_6 (ATerm t)
  {
    ATerm h_10 = t;
    if(PushChoice()==0)
      {
        ATerm i_10 = t;
        if(PushChoice()==0)
          {
            ATerm c_78 = NULL;
            c_78 = t;
            z_77 :
            if(!(match_cons(c_78, sym_Nil_0)))
              _fail(t);
            PopChoice();
          }
        else
          {
            t = i_10;
            t = d_36(t);
            t = Cons_2(t, _id, s_6);
          }
        PopChoice();
      }
    else
      {
        t = h_10;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, r_6, s_6);
  return(t);
}
ATerm Abox2latex_0 (ATerm t)
{
  ATerm y_78 = NULL;
  ATerm a_79 = NULL,b_79 = NULL;
  ATerm t_6 (ATerm t)
  {
    ATerm j_10 = t;
    if(PushChoice()==0)
      {
        t = io_options_0(t);
        PopChoice();
      }
    else
      {
        t = j_10;
        {
          ATerm k_10 = t;
          if(PushChoice()==0)
            {
              ATerm u_6 (ATerm t)
              {
                ATerm s_78 = NULL;
                s_78 = t;
                f_78 :
                if(!(match_string(s_78, "-t")))
                  _fail(t);
                return(t);
              }
              ATerm v_6 (ATerm t)
              {
                ATerm t_78 = NULL;
                t_78 = t;
                t = (ATerm) ATmakeAppl(sym_LatexTable_1, not_null(t_78));
                return(t);
              }
              t = ArgOption_2(t, u_6, v_6);
              PopChoice();
            }
          else
            {
              t = k_10;
              {
                ATerm w_6 (ATerm t)
                {
                  ATerm v_78 = NULL;
                  v_78 = t;
                  h_78 :
                  if(!(match_string(v_78, "-w")))
                    _fail(t);
                  return(t);
                }
                ATerm x_6 (ATerm t)
                {
                  ATerm w_78 = NULL;
                  w_78 = t;
                  t = (ATerm) ATmakeAppl(sym_Width_1, not_null(w_78));
                  return(t);
                }
                t = ArgOption_2(t, w_6, x_6);
              }
            }
        }
      }
    return(t);
  }
  t = parse_options_1(t, t_6);
  y_78 = t;
  {
    ATerm l_10 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, usage_0);
        PopChoice();
      }
    else
      {
        t = l_10;
        {
          ATerm m_10 = t;
          if(PushChoice()==0)
            {
              ATerm n_10;
              n_10 = t;
              {
                ATerm o_10 = t;
                if(PushChoice()==0)
                  {
                    ATerm y_6 (ATerm t)
                    {
                      ATerm c_79 = NULL,d_79 = NULL;
                      c_79 = t;
                      l_78 :
                      if(match_cons(c_79, sym_Output_1))
                        {
                          d_79 = ATgetArgument(c_79, 0);
                          if(b_79 != NULL && b_79 != d_79)
                            _fail(d_79);
                          else
                            b_79 = d_79;
                          t = not_null(b_79);
                          t = open_file_0(t);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1(t, y_6);
                    PopChoice();
                  }
                else
                  {
                    t = o_10;
                    {
                      ATerm e_79 = NULL;
                      t = (ATerm) ATmakeAppl(sym_stdout_0);
                      e_79 = t;
                      if(b_79 != NULL && b_79 != e_79)
                        _fail(e_79);
                      else
                        b_79 = e_79;
                    }
                  }
              }
              t = n_10;
              {
                ATerm p_10;
                p_10 = t;
                {
                  ATerm z_6 (ATerm t)
                  {
                    ATerm f_79 = NULL,g_79 = NULL;
                    f_79 = t;
                    o_78 :
                    if(match_cons(f_79, sym_LatexTable_1))
                      {
                        g_79 = ATgetArgument(f_79, 0);
                        t = not_null(g_79);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = collect_1(t, z_6);
                  t = load_tables_0(t);
                }
                t = p_10;
                t = input_file_0(t);
                t = Snd_0(t);
                {
                  ATerm q_10 = t;
                  if(PushChoice()==0)
                    {
                      ATerm r_10;
                      r_10 = t;
                      t = not_null(y_78);
                      {
                        ATerm a_7 (ATerm t)
                        {
                          ATerm i_79 = NULL,j_79 = NULL;
                          i_79 = t;
                          q_78 :
                          if(match_cons(i_79, sym_Width_1))
                            {
                              j_79 = ATgetArgument(i_79, 0);
                              if(a_79 != NULL && a_79 != j_79)
                                _fail(j_79);
                              else
                                a_79 = j_79;
                            }
                          else
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1(t, a_7);
                      }
                      t = r_10;
                      {
                        ATerm b_7 (ATerm t)
                        {
                          t = not_null(a_79);
                          return(t);
                        }
                        t = abox2latex_1(t, b_7);
                      }
                      PopChoice();
                    }
                  else
                    {
                      t = q_10;
                      t = abox2latex_0(t);
                    }
                  {
                    ATerm c_7 (ATerm t)
                    {
                      ATerm s_10 = t;
                      if(PushChoice()==0)
                        {
                          t = is_string_0(t);
                          {
                            ATerm t_10;
                            t_10 = t;
                            {
                              ATerm d_7 (ATerm t)
                              {
                                t = not_null(b_79);
                                return(t);
                              }
                              ATerm e_7 (ATerm t)
                              {
                                ATerm k_79 = NULL;
                                k_79 = t;
                                t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_79), (ATerm) ATmakeAppl(sym_Nil_0));
                                return(t);
                              }
                              t = split_2(t, d_7, e_7);
                              t = print_0(t);
                            }
                            t = t_10;
                          }
                          PopChoice();
                        }
                      else
                        t = s_10;
                      return(t);
                    }
                    t = topdown_1(t, c_7);
                    t = report_success_0(t);
                  }
                }
              }
              PopChoice();
            }
          else
            {
              t = m_10;
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
