#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
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
Symbol sym_Scopes_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
void init_constructors (void)
{
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  {
    sym__1 = ATmakeSymbol("", 1, ATfalse);
    ATprotectSymbol(sym__1);
  }
  {
    sym__2 = ATmakeSymbol("", 2, ATfalse);
    ATprotectSymbol(sym__2);
  }
  {
    sym__3 = ATmakeSymbol("", 3, ATfalse);
    ATprotectSymbol(sym__3);
  }
  {
    sym__4 = ATmakeSymbol("", 4, ATfalse);
    ATprotectSymbol(sym__4);
  }
  {
    sym__5 = ATmakeSymbol("", 5, ATfalse);
    ATprotectSymbol(sym__5);
  }
  {
    sym__6 = ATmakeSymbol("", 6, ATfalse);
    ATprotectSymbol(sym__6);
  }
  {
    sym__7 = ATmakeSymbol("", 7, ATfalse);
    ATprotectSymbol(sym__7);
  }
  {
    sym__8 = ATmakeSymbol("", 8, ATfalse);
    ATprotectSymbol(sym__8);
  }
  {
    sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
    ATprotectSymbol(sym_Program_1);
  }
  {
    sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
    ATprotectSymbol(sym_Undefined_1);
  }
  {
    sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
    ATprotectSymbol(sym_Silent_0);
  }
  {
    sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
    ATprotectSymbol(sym_Verbose_0);
  }
  {
    sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
    ATprotectSymbol(sym_Version_0);
  }
  {
    sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
    ATprotectSymbol(sym_Input_1);
  }
  {
    sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
    ATprotectSymbol(sym_Output_1);
  }
  {
    sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
    ATprotectSymbol(sym_Binary_0);
  }
  {
    sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
    ATprotectSymbol(sym_Statistics_0);
  }
  {
    sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
    ATprotectSymbol(sym_Help_0);
  }
  {
    sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
    ATprotectSymbol(sym_Runtime_1);
  }
  {
    sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
    ATprotectSymbol(sym_DeclVersion_1);
  }
  {
    sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
    ATprotectSymbol(sym_Scopes_0);
  }
  {
    sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
    ATprotectSymbol(sym_Keys_0);
  }
  {
    sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
    ATprotectSymbol(sym_Keys_1);
  }
  {
    sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
    ATprotectSymbol(sym_Keys_2);
  }
  {
    sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
    ATprotectSymbol(sym_Keys_3);
  }
  {
    sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
    ATprotectSymbol(sym_Keys_4);
  }
  {
    sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
    ATprotectSymbol(sym_Keys_5);
  }
  {
    sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
    ATprotectSymbol(sym_Keys_6);
  }
  {
    sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
    ATprotectSymbol(sym_Keys_7);
  }
  {
    sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
    ATprotectSymbol(sym_Keys_8);
  }
  {
    sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
    ATprotectSymbol(sym_Keys_9);
  }
  {
    sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
    ATprotectSymbol(sym_Keys_10);
  }
  {
    sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
    ATprotectSymbol(sym_Defined_0);
  }
  {
    sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
    ATprotectSymbol(sym_Defined_1);
  }
  {
    sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
    ATprotectSymbol(sym_Defined_2);
  }
  {
    sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
    ATprotectSymbol(sym_Defined_3);
  }
  {
    sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
    ATprotectSymbol(sym_Defined_4);
  }
  {
    sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
    ATprotectSymbol(sym_Defined_5);
  }
  {
    sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
    ATprotectSymbol(sym_Defined_6);
  }
  {
    sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
    ATprotectSymbol(sym_Defined_7);
  }
  {
    sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
    ATprotectSymbol(sym_Defined_8);
  }
  {
    sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
    ATprotectSymbol(sym_Defined_9);
  }
  {
    sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
    ATprotectSymbol(sym_Defined_10);
  }
  {
    sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
    ATprotectSymbol(sym_Undefined_0);
  }
  {
    sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
    ATprotectSymbol(sym_stdin_0);
  }
  {
    sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
    ATprotectSymbol(sym_stdout_0);
  }
  {
    sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
    ATprotectSymbol(sym_stderr_0);
  }
  {
    sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
    ATprotectSymbol(sym_None_0);
  }
  {
    sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
    ATprotectSymbol(sym_Some_1);
  }
  {
    sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
    ATprotectSymbol(sym_CUT_0);
  }
  {
    sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
    ATprotectSymbol(sym_SOpt_2);
  }
  {
    sym_SOptB_2 = ATmakeSymbol("SOptB", 2, ATfalse);
    ATprotectSymbol(sym_SOptB_2);
  }
  {
    sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
    ATprotectSymbol(sym_VS_0);
  }
  {
    sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
    ATprotectSymbol(sym_HS_0);
  }
  {
    sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
    ATprotectSymbol(sym_IS_0);
  }
  {
    sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
    ATprotectSymbol(sym_H_2);
  }
  {
    sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
    ATprotectSymbol(sym_V_2);
  }
  {
    sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
    ATprotectSymbol(sym_HV_2);
  }
  {
    sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
    ATprotectSymbol(sym_ALT_2);
  }
  {
    sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
    ATprotectSymbol(sym_A_3);
  }
  {
    sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
    ATprotectSymbol(sym_R_2);
  }
  {
    sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
    ATprotectSymbol(sym_AL_1);
  }
  {
    sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
    ATprotectSymbol(sym_AC_1);
  }
  {
    sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
    ATprotectSymbol(sym_AR_1);
  }
  {
    sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
    ATprotectSymbol(sym_AOPTIONS_1);
  }
  {
    sym_FNAT_2 = ATmakeSymbol("FNAT", 2, ATfalse);
    ATprotectSymbol(sym_FNAT_2);
  }
  {
    sym_FFID_2 = ATmakeSymbol("FFID", 2, ATfalse);
    ATprotectSymbol(sym_FFID_2);
  }
  {
    sym_F_1 = ATmakeSymbol("F", 1, ATfalse);
    ATprotectSymbol(sym_F_1);
  }
  {
    sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
    ATprotectSymbol(sym_FBOX_2);
  }
  {
    sym_FN_0 = ATmakeSymbol("FN", 0, ATfalse);
    ATprotectSymbol(sym_FN_0);
  }
  {
    sym_FM_0 = ATmakeSymbol("FM", 0, ATfalse);
    ATprotectSymbol(sym_FM_0);
  }
  {
    sym_SE_0 = ATmakeSymbol("SE", 0, ATfalse);
    ATprotectSymbol(sym_SE_0);
  }
  {
    sym_SH_0 = ATmakeSymbol("SH", 0, ATfalse);
    ATprotectSymbol(sym_SH_0);
  }
  {
    sym_SZ_0 = ATmakeSymbol("SZ", 0, ATfalse);
    ATprotectSymbol(sym_SZ_0);
  }
  {
    sym_CL_0 = ATmakeSymbol("CL", 0, ATfalse);
    ATprotectSymbol(sym_CL_0);
  }
  {
    sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
    ATprotectSymbol(sym_KW_0);
  }
  {
    sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
    ATprotectSymbol(sym_VAR_0);
  }
  {
    sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
    ATprotectSymbol(sym_NUM_0);
  }
  {
    sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
    ATprotectSymbol(sym_MATH_0);
  }
  {
    sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
    ATprotectSymbol(sym_LBL_2);
  }
  {
    sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
    ATprotectSymbol(sym_REF_2);
  }
  {
    sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
    ATprotectSymbol(sym_C_2);
  }
  {
    sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
    ATprotectSymbol(sym_L_2);
  }
  {
    sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
    ATprotectSymbol(sym_LNAT_2);
  }
  {
    sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
    ATprotectSymbol(sym_S_1);
  }
  {
    sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
    ATprotectSymbol(sym_Arg_1);
  }
  {
    sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
    ATprotectSymbol(sym_Arg2_2);
  }
  {
    sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
    ATprotectSymbol(sym_PP_Table_1);
  }
  {
    sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
    ATprotectSymbol(sym_selector_2);
  }
  {
    sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
    ATprotectSymbol(sym_Path1_1);
  }
  {
    sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
    ATprotectSymbol(sym_Path_2);
  }
  {
    sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
    ATprotectSymbol(sym_PP_Entry_2);
  }
  {
    sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
    ATprotectSymbol(sym_Nil_0);
  }
  {
    sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
    ATprotectSymbol(sym_Cons_2);
  }
}
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm print_0 (ATerm);
ATerm split_2 (ATerm, ATerm o_48 (ATerm), ATerm p_48 (ATerm));
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm u_61 (ATerm));
ATerm topdown_1 (ATerm, ATerm t_57 (ATerm));
ATerm subt_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm n_56 (ATerm));
ATerm separate_by_1 (ATerm, ATerm o_56 (ATerm));
ATerm add_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm n_0 (ATerm), ATerm q_0 (ATerm));
ATerm thread_map_1 (ATerm, ATerm q_50 (ATerm));
ATerm H_2 (ATerm, ATerm x_38 (ATerm), ATerm y_38 (ATerm));
ATerm filter_1 (ATerm, ATerm g_49 (ATerm));
ATerm foldr_3 (ATerm, ATerm c_50 (ATerm), ATerm d_50 (ATerm), ATerm e_50 (ATerm));
ATerm length_0 (ATerm);
ATerm string_length_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm y_55 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm o_61 (ATerm), ATerm p_61 (ATerm));
ATerm for_3 (ATerm, ATerm r_61 (ATerm), ATerm s_61 (ATerm), ATerm t_61 (ATerm));
ATerm copy_0 (ATerm);
ATerm copy_char_0 (ATerm);
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm t_38 (ATerm), ATerm u_38 (ATerm));
ATerm Vspace_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm map_to_r_box_0 (ATerm);
ATerm Abox_2_text_0 (ATerm);
ATerm abox2text_0 (ATerm);
ATerm _2 (ATerm, ATerm x_32 (ATerm), ATerm y_32 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm input_file_0 (ATerm);
ATerm debug_1 (ATerm, ATerm s_46 (ATerm));
ATerm obsolete_1 (ATerm, ATerm z_46 (ATerm));
ATerm open_file_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm i_55 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_45 (ATerm));
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm w_45 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm o_55 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm d_44 (ATerm));
ATerm map_1 (ATerm, ATerm a_55 (ATerm));
ATerm reverse_1 (ATerm, ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm c_44 (ATerm));
ATerm Program_1 (ATerm, ATerm g_34 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm h_34 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm h_44 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_40 (ATerm), ATerm s_40 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm f_44 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm e_44 (ATerm));
ATerm Abox2text_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue))));
  {
    t = printnl_0(t);
    {
      t = (ATerm) ATmakeInt(1);
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL;
  ATerm a_0 (ATerm t)
  {
    ATerm b_0 (ATerm t)
    {
      ATerm o_3 = t;
      if((PushChoice() == 0))
        {
          ATerm c_0 (ATerm t)
          {
            ATerm s_1 = NULL;
            s_1 = t;
            k_1 :
            if(!(match_cons(s_1, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, c_0);
          PopChoice();
          _fail(t);
        }
      else
        t = o_3;
      return(t);
    }
    t = _2(t, b_0, _id);
    {
      ATerm k_0 (ATerm t)
      {
        ATerm l_0 (ATerm t)
        {
          ATerm t_1 = NULL,u_1 = NULL;
          t_1 = t;
          m_1 :
          if(match_cons(t_1, sym_Runtime_1))
            {
              u_1 = ATgetArgument(t_1, 0);
              if(((r_1 != NULL) && (r_1 != u_1)))
                _fail(u_1);
              else
                r_1 = u_1;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, l_0);
        return(t);
      }
      t = _2(t, k_0, _id);
      {
        ATerm m_0 (ATerm t)
        {
          ATerm o_0 (ATerm t)
          {
            ATerm v_1 = NULL,w_1 = NULL;
            v_1 = t;
            p_1 :
            if(match_cons(v_1, sym_Program_1))
              {
                w_1 = ATgetArgument(v_1, 0);
                if(((q_1 != NULL) && (q_1 != w_1)))
                  _fail(w_1);
                else
                  q_1 = w_1;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, o_0);
          return(t);
        }
        t = _2(t, m_0, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), not_null(r_1)), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), not_null(q_1)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, a_0);
  {
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
  }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL;
  b_2 = t;
  a_2 :
  if(match_cons(b_2, sym__2))
    {
      c_2 = ATgetArgument(b_2, 0);
      d_2 = ATgetArgument(b_2, 1);
      {
        ATerm c_7;
        c_7 = t;
        t = SSL_print(not_null(c_2), not_null(d_2));
        t = c_7;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm split_2 (ATerm t, ATerm o_48 (ATerm), ATerm p_48 (ATerm))
{
  ATerm j_2 = NULL,l_2 = NULL;
  ATerm d_7;
  d_7 = t;
  {
    ATerm k_2 = NULL;
    t = o_48(t);
    {
      k_2 = t;
      if(((j_2 != NULL) && (j_2 != k_2)))
        _fail(k_2);
      else
        j_2 = k_2;
    }
  }
  t = d_7;
  {
    ATerm m_2 = NULL;
    t = p_48(t);
    {
      m_2 = t;
      if(((l_2 != NULL) && (l_2 != m_2)))
        _fail(m_2);
      else
        l_2 = m_2;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_2), not_null(l_2));
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm q_2 = NULL;
  q_2 = t;
  t = SSL_is_string(not_null(q_2));
  return(t);
}
ATerm try_1 (ATerm t, ATerm u_61 (ATerm))
{
  ATerm e_7 = t;
  if((PushChoice() == 0))
    {
      t = u_61(t);
      PopChoice();
    }
  else
    {
      t = e_7;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm t_57 (ATerm))
{
  ATerm t_2 (ATerm t)
  {
    t = t_57(t);
    t = _all(t, t_2);
    return(t);
  }
  t = t_2(t);
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL;
  w_2 = t;
  v_2 :
  if(match_cons(w_2, sym__2))
    {
      x_2 = ATgetArgument(w_2, 0);
      y_2 = ATgetArgument(w_2, 1);
      {
        ATerm f_7 = t;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(x_2), not_null(y_2));
            PopChoice();
          }
        else
          {
            t = f_7;
            t = SSL_subtr(not_null(x_2), not_null(y_2));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm n_56 (ATerm))
{
  ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL;
  f_3 = t;
  e_3 :
  if(((ATgetType(f_3) == AT_LIST) && ((ATermList) f_3 != ATempty)))
    {
      g_3 = ATgetFirst((ATermList) f_3);
      h_3 = (ATerm) ATgetNext((ATermList) f_3);
      {
        ATerm k_3 = NULL;
        ATerm l_3 = NULL;
        t = (ATerm) ATmakeAppl(sym__0);
        {
          t = n_56(t);
          {
            l_3 = t;
            if(((k_3 != NULL) && (k_3 != l_3)))
              _fail(l_3);
            else
              k_3 = l_3;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(h_3)), not_null(g_3)), not_null(k_3));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm o_56 (ATerm))
{
  ATerm g_7 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = g_7;
      {
        ATerm p_0 (ATerm t)
        {
          ATerm h_7 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = h_7;
              {
                t = Cons_2(t, _id, p_0);
                t = Sep_1(t, o_56);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, p_0);
      }
    }
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL;
  r_3 = t;
  q_3 :
  if(match_cons(r_3, sym__2))
    {
      s_3 = ATgetArgument(r_3, 0);
      t_3 = ATgetArgument(r_3, 1);
      {
        ATerm m_7 = t;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(s_3), not_null(t_3));
            PopChoice();
          }
        else
          {
            t = m_7;
            t = SSL_addr(not_null(s_3), not_null(t_3));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_T_0 (ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL;
  a_4 = t;
  y_3 :
  if(match_cons(a_4, sym__2))
    {
      b_4 = ATgetArgument(a_4, 0);
      c_4 = ATgetArgument(a_4, 1);
      z_3 :
      if(((ATermList) b_4 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(c_4));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_T_2 (ATerm t, ATerm n_0 (ATerm), ATerm q_0 (ATerm))
{
  ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL;
  m_4 = t;
  k_4 :
  if(match_cons(m_4, sym__2))
    {
      n_4 = ATgetArgument(m_4, 0);
      q_4 = ATgetArgument(m_4, 1);
      l_4 :
      if(((ATgetType(n_4) == AT_LIST) && ((ATermList) n_4 != ATempty)))
        {
          o_4 = ATgetFirst((ATermList) n_4);
          p_4 = (ATerm) ATgetNext((ATermList) n_4);
          {
            ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL;
            ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_4), not_null(q_4));
            {
              t = n_0(t);
              {
                y_4 = t;
                j_4 :
                if(match_cons(y_4, sym__2))
                  {
                    z_4 = ATgetArgument(y_4, 0);
                    a_5 = ATgetArgument(y_4, 1);
                    {
                      ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL;
                      if(((w_4 != NULL) && (w_4 != z_4)))
                        _fail(z_4);
                      else
                        w_4 = z_4;
                      {
                        if(((u_4 != NULL) && (u_4 != a_5)))
                          _fail(a_5);
                        else
                          u_4 = a_5;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_4), not_null(u_4));
                          {
                            t = q_0(t);
                            {
                              b_5 = t;
                              i_4 :
                              if(match_cons(b_5, sym__2))
                                {
                                  c_5 = ATgetArgument(b_5, 0);
                                  d_5 = ATgetArgument(b_5, 1);
                                  {
                                    if(((x_4 != NULL) && (x_4 != c_5)))
                                      _fail(c_5);
                                    else
                                      x_4 = c_5;
                                    if(((v_4 != NULL) && (v_4 != d_5)))
                                      _fail(d_5);
                                    else
                                      v_4 = d_5;
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
                else
                  _fail(t);
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_4)), not_null(w_4)), not_null(v_4));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm thread_map_1 (ATerm t, ATerm q_50 (ATerm))
{
  ATerm h_5 (ATerm t)
  {
    ATerm q_7 = t;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, q_50, h_5);
        PopChoice();
      }
    else
      {
        t = q_7;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = h_5(t);
  return(t);
}
ATerm H_2 (ATerm t, ATerm x_38 (ATerm), ATerm y_38 (ATerm))
{
  ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL;
  m_5 = t;
  l_5 :
  if(match_cons(m_5, sym_H_2))
    {
      n_5 = ATgetArgument(m_5, 0);
      o_5 = ATgetArgument(m_5, 1);
      {
        ATerm r_5 = NULL;
        t = not_null(n_5);
        {
          ATerm t_5 = NULL;
          t = x_38(t);
          {
            r_5 = t;
            {
              t = not_null(o_5);
              {
                t = y_38(t);
                {
                  t_5 = t;
                  t = (ATerm) ATmakeAppl(sym_H_2, not_null(r_5), not_null(t_5));
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
ATerm filter_1 (ATerm t, ATerm g_49 (ATerm))
{
  ATerm w_7 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = w_7;
      {
        ATerm x_7 = t;
        if((PushChoice() == 0))
          {
            ATerm r_0 (ATerm t)
            {
              t = filter_1(t, g_49);
              return(t);
            }
            t = Cons_2(t, g_49, r_0);
            PopChoice();
          }
        else
          {
            t = x_7;
            {
              ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
              a_6 = t;
              z_5 :
              if(((ATgetType(a_6) == AT_LIST) && ((ATermList) a_6 != ATempty)))
                {
                  b_6 = ATgetFirst((ATermList) a_6);
                  c_6 = (ATerm) ATgetNext((ATermList) a_6);
                  {
                    t = not_null(c_6);
                    t = filter_1(t, g_49);
                  }
                }
              else
                _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm c_50 (ATerm), ATerm d_50 (ATerm), ATerm e_50 (ATerm))
{
  ATerm y_7 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_50(t);
      PopChoice();
    }
  else
    {
      t = y_7;
      {
        ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL;
        j_6 = t;
        i_6 :
        if(((ATgetType(j_6) == AT_LIST) && ((ATermList) j_6 != ATempty)))
          {
            k_6 = ATgetFirst((ATermList) j_6);
            l_6 = (ATerm) ATgetNext((ATermList) j_6);
            {
              ATerm o_6 = NULL,q_6 = NULL;
              ATerm a_8;
              a_8 = t;
              {
                ATerm p_6 = NULL;
                t = not_null(k_6);
                {
                  t = e_50(t);
                  {
                    p_6 = t;
                    if(((o_6 != NULL) && (o_6 != p_6)))
                      _fail(p_6);
                    else
                      o_6 = p_6;
                  }
                }
              }
              t = a_8;
              {
                ATerm r_6 = NULL;
                t = not_null(l_6);
                {
                  t = foldr_3(t, c_50, d_50, e_50);
                  {
                    r_6 = t;
                    if(((q_6 != NULL) && (q_6 != r_6)))
                      _fail(r_6);
                    else
                      q_6 = r_6;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_6), not_null(q_6));
                  t = d_50(t);
                }
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
  ATerm s_0 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, s_0, add_0, t_0);
  return(t);
}
ATerm string_length_0 (ATerm t)
{
  t = explode_string_0(t);
  t = length_0(t);
  return(t);
}
ATerm HS_0 (ATerm t)
{
  ATerm w_6 = NULL;
  w_6 = t;
  v_6 :
  if(!(match_cons(w_6, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm Hspace_0 (ATerm t)
{
  ATerm z_6 = NULL,b_7 = NULL;
  ATerm f_8 = t;
  if((PushChoice() == 0))
    {
      ATerm u_0 (ATerm t)
      {
        ATerm v_0 (ATerm t)
        {
          ATerm a_7 = NULL;
          a_7 = t;
          if(((z_6 != NULL) && (z_6 != a_7)))
            _fail(a_7);
          else
            z_6 = a_7;
          return(t);
        }
        t = SOpt_2(t, HS_0, v_0);
        return(t);
      }
      t = fetch_1(t, u_0);
      {
        t = not_null(z_6);
        t = string_to_int_0(t);
      }
      PopChoice();
    }
  else
    {
      t = f_8;
      t = (ATerm) ATmakeInt(1);
    }
  {
    b_7 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_7), (ATerm) ATmakeInt(32));
      t = copy_char_0(t);
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm l_7 = NULL;
  ATerm n_7 = NULL,o_7 = NULL;
  l_7 = t;
  {
    ATerm p_7 = NULL;
    ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL;
    t = not_null(l_7);
    {
      p_7 = t;
      {
        t = SSL_explode_term(not_null(p_7));
        {
          r_7 = t;
          i_7 :
          if(match_cons(r_7, sym__2))
            {
              s_7 = ATgetArgument(r_7, 0);
              t_7 = ATgetArgument(r_7, 1);
              j_7 :
              if(match_string(s_7, ""))
                {
                  k_7 :
                  if(((ATgetType(t_7) == AT_LIST) && ((ATermList) t_7 != ATempty)))
                    {
                      u_7 = ATgetFirst((ATermList) t_7);
                      v_7 = (ATerm) ATgetNext((ATermList) t_7);
                      {
                        if(((o_7 != NULL) && (o_7 != u_7)))
                          _fail(u_7);
                        else
                          o_7 = u_7;
                        if(((n_7 != NULL) && (n_7 != v_7)))
                          _fail(v_7);
                        else
                          n_7 = v_7;
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
      }
    }
    t = not_null(o_7);
  }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm y_55 (ATerm))
{
  ATerm z_7 (ATerm t)
  {
    ATerm g_8 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = y_55(t);
        PopChoice();
      }
    else
      {
        t = g_8;
        t = Cons_2(t, _id, z_7);
      }
    return(t);
  }
  t = z_7(t);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
  c_8 = t;
  b_8 :
  if(match_cons(c_8, sym__2))
    {
      d_8 = ATgetArgument(c_8, 0);
      e_8 = ATgetArgument(c_8, 1);
      {
        ATerm h_8;
        h_8 = t;
        {
          ATerm i_8 = t;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(d_8), not_null(e_8));
              PopChoice();
            }
          else
            {
              t = i_8;
              t = SSL_gtr(not_null(d_8), not_null(e_8));
            }
        }
        t = h_8;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm k_8 = NULL;
  ATerm o_8 = t;
  if((PushChoice() == 0))
    {
      ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL;
      l_8 = t;
      j_8 :
      if(match_cons(l_8, sym__2))
        {
          m_8 = ATgetArgument(l_8, 0);
          n_8 = ATgetArgument(l_8, 1);
          {
            if(((k_8 != NULL) && (k_8 != m_8)))
              _fail(m_8);
            else
              k_8 = m_8;
            if(((k_8 != NULL) && (k_8 != n_8)))
              _fail(n_8);
            else
              k_8 = n_8;
          }
        }
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = o_8;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm o_61 (ATerm), ATerm p_61 (ATerm))
{
  ATerm p_8 (ATerm t)
  {
    ATerm q_8 = t;
    if((PushChoice() == 0))
      {
        t = o_61(t);
        PopChoice();
      }
    else
      {
        t = q_8;
        {
          t = p_61(t);
          t = p_8(t);
        }
      }
    return(t);
  }
  t = p_8(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm r_61 (ATerm), ATerm s_61 (ATerm), ATerm t_61 (ATerm))
{
  t = r_61(t);
  t = while_not_2(t, s_61, t_61);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL;
    y_8 = t;
    r_8 :
    if(match_cons(y_8, sym__2))
      {
        z_8 = ATgetArgument(y_8, 0);
        a_9 = ATgetArgument(y_8, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(z_8), not_null(a_9), (ATerm) ATempty);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm x_0 (ATerm t)
  {
    ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL;
    d_9 = t;
    t_8 :
    if(match_cons(d_9, sym__3))
      {
        e_9 = ATgetArgument(d_9, 0);
        f_9 = ATgetArgument(d_9, 1);
        g_9 = ATgetArgument(d_9, 2);
        u_8 :
        if(match_int(e_9, 0))
          t = not_null(g_9);
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL;
    j_9 = t;
    x_8 :
    if(match_cons(j_9, sym__3))
      {
        k_9 = ATgetArgument(j_9, 0);
        l_9 = ATgetArgument(j_9, 1);
        m_9 = ATgetArgument(j_9, 2);
        {
          ATerm q_9 = NULL;
          ATerm s_8;
          s_8 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_9), (ATerm) ATmakeInt(1));
            t = geq_0(t);
          }
          t = s_8;
          {
            ATerm r_9 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_9), (ATerm) ATmakeInt(1));
            {
              t = subt_0(t);
              {
                r_9 = t;
                if(((q_9 != NULL) && (q_9 != r_9)))
                  _fail(r_9);
                else
                  q_9 = r_9;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_9), not_null(l_9), (ATerm) ATinsert(CheckATermList(not_null(m_9)), not_null(l_9)));
          }
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = for_3(t, w_0, x_0, y_0);
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
  ATerm x_9 = NULL;
  x_9 = t;
  w_9 :
  if(!(match_cons(x_9, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0 (ATerm t)
{
  ATerm a_10 = NULL,c_10 = NULL;
  ATerm v_8 = t;
  if((PushChoice() == 0))
    {
      ATerm z_0 (ATerm t)
      {
        ATerm a_1 (ATerm t)
        {
          ATerm b_10 = NULL;
          b_10 = t;
          if(((a_10 != NULL) && (a_10 != b_10)))
            _fail(b_10);
          else
            a_10 = b_10;
          return(t);
        }
        t = SOpt_2(t, IS_0, a_1);
        return(t);
      }
      t = fetch_1(t, z_0);
      {
        t = not_null(a_10);
        t = string_to_int_0(t);
      }
      PopChoice();
    }
  else
    {
      t = v_8;
      t = (ATerm) ATmakeInt(0);
    }
  {
    c_10 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_10), (ATerm) ATmakeInt(32));
      t = copy_char_0(t);
    }
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm h_10 = NULL;
  h_10 = t;
  t = SSL_string_to_int(not_null(h_10));
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm l_10 = NULL;
  l_10 = t;
  k_10 :
  if(!(match_cons(l_10, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm t_38 (ATerm), ATerm u_38 (ATerm))
{
  ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL;
  q_10 = t;
  p_10 :
  if(match_cons(q_10, sym_SOpt_2))
    {
      r_10 = ATgetArgument(q_10, 0);
      s_10 = ATgetArgument(q_10, 1);
      {
        ATerm v_10 = NULL;
        t = not_null(r_10);
        {
          ATerm x_10 = NULL;
          t = t_38(t);
          {
            v_10 = t;
            {
              t = not_null(s_10);
              {
                t = u_38(t);
                {
                  x_10 = t;
                  t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(v_10), not_null(x_10));
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
ATerm Vspace_0 (ATerm t)
{
  ATerm l_11 = NULL,n_11 = NULL;
  ATerm p_11 = NULL;
  ATerm w_8 = t;
  if((PushChoice() == 0))
    {
      ATerm b_1 (ATerm t)
      {
        ATerm c_1 (ATerm t)
        {
          ATerm m_11 = NULL;
          m_11 = t;
          if(((l_11 != NULL) && (l_11 != m_11)))
            _fail(m_11);
          else
            l_11 = m_11;
          return(t);
        }
        t = SOpt_2(t, VS_0, c_1);
        return(t);
      }
      t = fetch_1(t, b_1);
      {
        t = not_null(l_11);
        t = string_to_int_0(t);
      }
      PopChoice();
    }
  else
    {
      t = w_8;
      t = (ATerm) ATmakeInt(0);
    }
  {
    n_11 = t;
    {
      ATerm q_11 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_11), (ATerm) ATmakeInt(1));
      {
        t = add_0(t);
        {
          q_11 = t;
          if(((p_11 != NULL) && (p_11 != q_11)))
            _fail(q_11);
          else
            p_11 = q_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_11), (ATerm) ATmakeInt(10));
        t = copy_char_0(t);
      }
    }
  }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
  z_11 = t;
  y_11 :
  if(match_cons(z_11, sym__2))
    {
      a_12 = ATgetArgument(z_11, 0);
      b_12 = ATgetArgument(z_11, 1);
      {
        t = not_null(a_12);
        {
          ATerm d_1 (ATerm t)
          {
            t = not_null(b_12);
            return(t);
          }
          t = at_end_1(t, d_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm map_to_r_box_0 (ATerm t)
{
  ATerm v_12 = NULL;
  v_12 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, not_null(v_12), (ATerm)ATempty, (ATerm) ATempty);
    {
      ATerm g_15 (ATerm t)
      {
        ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL;
        ATerm m_15 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_13), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(d_13))));
          t = conc_0(t);
          return(t);
        }
        ATerm n_15 (ATerm t)
        {
          ATerm l_14 = NULL;
          ATerm m_14 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_13), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, not_null(x_12), not_null(y_12))));
          {
            t = conc_0(t);
            {
              m_14 = t;
              if(((l_14 != NULL) && (l_14 != m_14)))
                _fail(m_14);
              else
                l_14 = m_14;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_13), (ATerm)ATempty, not_null(l_14));
            t = g_15(t);
          }
          return(t);
        }
        ATerm o_15 (ATerm t)
        {
          ATerm t_14 = NULL;
          ATerm u_14 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_13), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, not_null(x_12), not_null(y_12))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(d_13))));
          {
            t = conc_0(t);
            {
              u_14 = t;
              if(((t_14 != NULL) && (t_14 != u_14)))
                _fail(u_14);
              else
                t_14 = u_14;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_13), (ATerm)ATempty, not_null(t_14));
            t = g_15(t);
          }
          return(t);
        }
        ATerm q_15 (ATerm t)
        {
          ATerm b_15 = NULL;
          ATerm c_15 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_13), (ATerm) ATinsert(ATempty, not_null(b_13)));
          {
            t = conc_0(t);
            {
              c_15 = t;
              if(((b_15 != NULL) && (b_15 != c_15)))
                _fail(c_15);
              else
                b_15 = c_15;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_13), not_null(b_15), not_null(e_13));
            t = g_15(t);
          }
          return(t);
        }
        z_12 = t;
        p_12 :
        if(match_cons(z_12, sym__3))
          {
            a_13 = ATgetArgument(z_12, 0);
            d_13 = ATgetArgument(z_12, 1);
            e_13 = ATgetArgument(z_12, 2);
            q_12 :
            if(((ATermList) a_13 == ATempty))
              {
                r_12 :
                if(((ATermList) d_13 == ATempty))
                  {
                    {
                      ATerm b_9 = t;
                      if((PushChoice() == 0))
                        {
                          t = not_null(e_13);
                          PopChoice();
                        }
                      else
                        {
                          t = b_9;
                          t = m_15(t);
                        }
                    }
                  }
                else
                  t = m_15(t);
              }
            else
              {
                if(((ATgetType(a_13) == AT_LIST) && ((ATermList) a_13 != ATempty)))
                  {
                    b_13 = ATgetFirst((ATermList) a_13);
                    c_13 = (ATerm) ATgetNext((ATermList) a_13);
                    s_12 :
                    if(((ATermList) d_13 == ATempty))
                      {
                        t_12 :
                        if(match_cons(b_13, sym_R_2))
                          {
                            x_12 = ATgetArgument(b_13, 0);
                            y_12 = ATgetArgument(b_13, 1);
                            {
                              ATerm c_9 = t;
                              if((PushChoice() == 0))
                                {
                                  t = n_15(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = c_9;
                                  {
                                    ATerm h_9 = t;
                                    if((PushChoice() == 0))
                                      {
                                        t = o_15(t);
                                        PopChoice();
                                      }
                                    else
                                      {
                                        t = h_9;
                                        t = q_15(t);
                                      }
                                  }
                                }
                            }
                          }
                        else
                          t = q_15(t);
                      }
                    else
                      {
                        u_12 :
                        if(match_cons(b_13, sym_R_2))
                          {
                            x_12 = ATgetArgument(b_13, 0);
                            y_12 = ATgetArgument(b_13, 1);
                            {
                              ATerm i_9 = t;
                              if((PushChoice() == 0))
                                {
                                  t = o_15(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = i_9;
                                  t = q_15(t);
                                }
                            }
                          }
                        else
                          t = q_15(t);
                      }
                  }
                else
                  _fail(t);
              }
          }
        else
          _fail(t);
        return(t);
      }
      t = g_15(t);
    }
  }
  return(t);
}
ATerm Abox_2_text_0 (ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  w_17 = t;
  k_17 :
  if(match_cons(w_17, sym__2))
    {
      x_17 = ATgetArgument(w_17, 0);
      a_18 = ATgetArgument(w_17, 1);
      m_17 :
      if(((ATermList) x_17 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), not_null(a_18));
        }
      else
        {
          if(((ATgetType(x_17) == AT_LIST) && ((ATermList) x_17 != ATempty)))
            {
              y_17 = ATgetFirst((ATermList) x_17);
              z_17 = (ATerm) ATgetNext((ATermList) x_17);
              n_17 :
              if(((ATermList) z_17 == ATempty))
                {
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_17), not_null(a_18));
                    t = Abox_2_text_0(t);
                  }
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(x_17, sym_ALT_2))
                {
                  y_17 = ATgetArgument(x_17, 0);
                  z_17 = ATgetArgument(x_17, 1);
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_17), not_null(a_18));
                    t = Abox_2_text_0(t);
                  }
                }
              else
                {
                  if(match_cons(x_17, sym_A_3))
                    {
                      y_17 = ATgetArgument(x_17, 0);
                      z_17 = ATgetArgument(x_17, 1);
                      s_17 = ATgetArgument(x_17, 2);
                      {
                        ATerm k_18 = NULL;
                        ATerm l_18 = NULL;
                        t = not_null(s_17);
                        {
                          t = map_to_r_box_0(t);
                          {
                            l_18 = t;
                            if(((k_18 != NULL) && (k_18 != l_18)))
                              _fail(l_18);
                            else
                              k_18 = l_18;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, not_null(z_17), not_null(k_18)), not_null(a_18));
                          t = Abox_2_text_0(t);
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(x_17, sym_R_2))
                        {
                          y_17 = ATgetArgument(x_17, 0);
                          z_17 = ATgetArgument(x_17, 1);
                          {
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, not_null(y_17), not_null(z_17)), not_null(a_18));
                            t = Abox_2_text_0(t);
                          }
                        }
                      else
                        {
                          if(match_cons(x_17, sym_HV_2))
                            {
                              y_17 = ATgetArgument(x_17, 0);
                              z_17 = ATgetArgument(x_17, 1);
                              {
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, not_null(y_17), not_null(z_17)), not_null(a_18));
                                t = Abox_2_text_0(t);
                              }
                            }
                          else
                            {
                              if(match_cons(x_17, sym_FBOX_2))
                                {
                                  y_17 = ATgetArgument(x_17, 0);
                                  z_17 = ATgetArgument(x_17, 1);
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_17), not_null(a_18));
                                    t = Abox_2_text_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(x_17, sym_C_2))
                                    {
                                      y_17 = ATgetArgument(x_17, 0);
                                      z_17 = ATgetArgument(x_17, 1);
                                      p_17 :
                                      if(((ATgetType(z_17) == AT_LIST) && ((ATermList) z_17 != ATempty)))
                                        {
                                          t_17 = ATgetFirst((ATermList) z_17);
                                          v_17 = (ATerm) ATgetNext((ATermList) z_17);
                                          q_17 :
                                          if(match_cons(t_17, sym_S_1))
                                            {
                                              u_17 = ATgetArgument(t_17, 0);
                                              r_17 :
                                              if(((ATermList) v_17 == ATempty))
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_17), not_null(a_18));
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
                                      if(match_cons(x_17, sym_S_1))
                                        {
                                          y_17 = ATgetArgument(x_17, 0);
                                          {
                                            ATerm b_19 = NULL;
                                            ATerm c_19 = NULL,e_19 = NULL;
                                            ATerm d_19 = NULL;
                                            t = not_null(y_17);
                                            {
                                              t = string_length_0(t);
                                              {
                                                d_19 = t;
                                                if(((c_19 != NULL) && (c_19 != d_19)))
                                                  _fail(d_19);
                                                else
                                                  c_19 = d_19;
                                              }
                                            }
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(a_18), not_null(c_19));
                                              {
                                                t = add_0(t);
                                                {
                                                  e_19 = t;
                                                  if(((b_19 != NULL) && (b_19 != e_19)))
                                                    _fail(e_19);
                                                  else
                                                    b_19 = e_19;
                                                }
                                              }
                                            }
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(y_17), not_null(b_19));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(x_17, sym_V_2))
                                            {
                                              y_17 = ATgetArgument(x_17, 0);
                                              z_17 = ATgetArgument(x_17, 1);
                                              {
                                                ATerm i_19 = NULL;
                                                t = not_null(y_17);
                                                {
                                                  ATerm k_19 = NULL;
                                                  t = Vspace_0(t);
                                                  {
                                                    i_19 = t;
                                                    {
                                                      t = not_null(y_17);
                                                      {
                                                        ATerm m_19 = NULL;
                                                        t = Ispace_0(t);
                                                        {
                                                          k_19 = t;
                                                          {
                                                            ATerm o_19 = NULL,q_19 = NULL;
                                                            t = string_length_0(t);
                                                            {
                                                              m_19 = t;
                                                              {
                                                                ATerm p_19 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_18), (ATerm) ATmakeInt(32));
                                                                {
                                                                  t = copy_char_0(t);
                                                                  {
                                                                    p_19 = t;
                                                                    if(((o_19 != NULL) && (o_19 != p_19)))
                                                                      _fail(p_19);
                                                                    else
                                                                      o_19 = p_19;
                                                                  }
                                                                }
                                                                {
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(o_19)), not_null(k_19)), not_null(i_19));
                                                                  {
                                                                    ATerm s_19 = NULL;
                                                                    t = concat_strings_0(t);
                                                                    {
                                                                      q_19 = t;
                                                                      {
                                                                        t = not_null(z_17);
                                                                        {
                                                                          ATerm e_1 (ATerm t)
                                                                          {
                                                                            ATerm n_9 = t;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = Nil_0(t);
                                                                                PopChoice();
                                                                                _fail(t);
                                                                              }
                                                                            else
                                                                              t = n_9;
                                                                            return(t);
                                                                          }
                                                                          t = filter_1(t, e_1);
                                                                          {
                                                                            ATerm o_9 = t;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = Nil_0(t);
                                                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(a_18));
                                                                                PopChoice();
                                                                              }
                                                                            else
                                                                              {
                                                                                t = o_9;
                                                                                {
                                                                                  ATerm f_1 (ATerm t)
                                                                                  {
                                                                                    ATerm t_19 = NULL;
                                                                                    t_19 = t;
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_19), not_null(a_18));
                                                                                      t = Abox_2_text_0(t);
                                                                                    }
                                                                                    return(t);
                                                                                  }
                                                                                  ATerm g_1 (ATerm t)
                                                                                  {
                                                                                    ATerm h_1 (ATerm t)
                                                                                    {
                                                                                      ATerm v_19 = NULL;
                                                                                      ATerm x_19 = NULL;
                                                                                      v_19 = t;
                                                                                      {
                                                                                        ATerm y_19 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_18), not_null(m_19));
                                                                                        {
                                                                                          t = add_0(t);
                                                                                          {
                                                                                            y_19 = t;
                                                                                            if(((x_19 != NULL) && (x_19 != y_19)))
                                                                                              _fail(y_19);
                                                                                            else
                                                                                              x_19 = y_19;
                                                                                          }
                                                                                        }
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(v_19), not_null(x_19));
                                                                                          t = Abox_2_text_0(t);
                                                                                        }
                                                                                      }
                                                                                      return(t);
                                                                                    }
                                                                                    t = map_1(t, h_1);
                                                                                    return(t);
                                                                                  }
                                                                                  t = Cons_2(t, f_1, g_1);
                                                                                  {
                                                                                    ATerm i_1 (ATerm t)
                                                                                    {
                                                                                      ATerm j_1 (ATerm t)
                                                                                      {
                                                                                        ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
                                                                                        z_19 = t;
                                                                                        v_16 :
                                                                                        if(match_cons(z_19, sym__2))
                                                                                          {
                                                                                            a_20 = ATgetArgument(z_19, 0);
                                                                                            b_20 = ATgetArgument(z_19, 1);
                                                                                            if(((s_19 != NULL) && (s_19 != b_20)))
                                                                                              _fail(b_20);
                                                                                            else
                                                                                              s_19 = b_20;
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Cons_2(t, j_1, Nil_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = at_last_1(t, i_1);
                                                                                    {
                                                                                      t = map_1(t, Fst_0);
                                                                                      {
                                                                                        ATerm l_1 (ATerm t)
                                                                                        {
                                                                                          t = not_null(q_19);
                                                                                          return(t);
                                                                                        }
                                                                                        t = separate_by_1(t, l_1);
                                                                                        {
                                                                                          ATerm n_1 (ATerm t)
                                                                                          {
                                                                                            t = not_null(s_19);
                                                                                            return(t);
                                                                                          }
                                                                                          t = split_2(t, _id, n_1);
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
                                              if(match_cons(x_17, sym_H_2))
                                                {
                                                  y_17 = ATgetArgument(x_17, 0);
                                                  z_17 = ATgetArgument(x_17, 1);
                                                  {
                                                    ATerm f_20 = NULL;
                                                    t = not_null(y_17);
                                                    {
                                                      ATerm h_20 = NULL;
                                                      t = Hspace_0(t);
                                                      {
                                                        f_20 = t;
                                                        {
                                                          ATerm j_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL;
                                                          t = string_length_0(t);
                                                          {
                                                            h_20 = t;
                                                            {
                                                              ATerm k_20 = NULL;
                                                              t = not_null(z_17);
                                                              {
                                                                ATerm o_1 (ATerm t)
                                                                {
                                                                  ATerm p_9 = t;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm s_9 = t;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = Nil_0(t);
                                                                          PopChoice();
                                                                        }
                                                                      else
                                                                        {
                                                                          t = s_9;
                                                                          t = H_2(t, Nil_0, Nil_0);
                                                                        }
                                                                      PopChoice();
                                                                      _fail(t);
                                                                    }
                                                                  else
                                                                    t = p_9;
                                                                  return(t);
                                                                }
                                                                t = filter_1(t, o_1);
                                                                {
                                                                  k_20 = t;
                                                                  if(((j_20 != NULL) && (j_20 != k_20)))
                                                                    _fail(k_20);
                                                                  else
                                                                    j_20 = k_20;
                                                                }
                                                              }
                                                              {
                                                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_20), not_null(a_18));
                                                                {
                                                                  ATerm x_1 (ATerm t)
                                                                  {
                                                                    ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
                                                                    l_20 = t;
                                                                    d_17 :
                                                                    if(match_cons(l_20, sym__2))
                                                                      {
                                                                        m_20 = ATgetArgument(l_20, 0);
                                                                        n_20 = ATgetArgument(l_20, 1);
                                                                        {
                                                                          ATerm q_20 = NULL,r_20 = NULL,v_20 = NULL;
                                                                          ATerm t_9;
                                                                          t_9 = t;
                                                                          {
                                                                            ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(m_20), not_null(n_20));
                                                                            {
                                                                              t = Abox_2_text_0(t);
                                                                              {
                                                                                s_20 = t;
                                                                                b_17 :
                                                                                if(match_cons(s_20, sym__2))
                                                                                  {
                                                                                    t_20 = ATgetArgument(s_20, 0);
                                                                                    u_20 = ATgetArgument(s_20, 1);
                                                                                    {
                                                                                      if(((q_20 != NULL) && (q_20 != t_20)))
                                                                                        _fail(t_20);
                                                                                      else
                                                                                        q_20 = t_20;
                                                                                      if(((r_20 != NULL) && (r_20 != u_20)))
                                                                                        _fail(u_20);
                                                                                      else
                                                                                        r_20 = u_20;
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                              }
                                                                            }
                                                                          }
                                                                          t = t_9;
                                                                          {
                                                                            ATerm w_20 = NULL;
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(h_20), not_null(r_20));
                                                                            {
                                                                              t = add_0(t);
                                                                              {
                                                                                w_20 = t;
                                                                                if(((v_20 != NULL) && (v_20 != w_20)))
                                                                                  _fail(w_20);
                                                                                else
                                                                                  v_20 = w_20;
                                                                              }
                                                                            }
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(q_20), not_null(v_20));
                                                                          }
                                                                        }
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  t = thread_map_1(t, x_1);
                                                                  {
                                                                    x_20 = t;
                                                                    j_17 :
                                                                    if(match_cons(x_20, sym__2))
                                                                      {
                                                                        y_20 = ATgetArgument(x_20, 0);
                                                                        z_20 = ATgetArgument(x_20, 1);
                                                                        {
                                                                          ATerm c_21 = NULL;
                                                                          ATerm d_21 = NULL;
                                                                          t = not_null(y_20);
                                                                          {
                                                                            ATerm y_1 (ATerm t)
                                                                            {
                                                                              t = not_null(f_20);
                                                                              return(t);
                                                                            }
                                                                            t = separate_by_1(t, y_1);
                                                                            {
                                                                              d_21 = t;
                                                                              if(((c_21 != NULL) && (c_21 != d_21)))
                                                                                _fail(d_21);
                                                                              else
                                                                                c_21 = d_21;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(c_21), not_null(z_20));
                                                                            {
                                                                              ATerm z_1 (ATerm t)
                                                                              {
                                                                                ATerm e_2 (ATerm t)
                                                                                {
                                                                                  ATerm u_9 = t;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = Nil_0(t);
                                                                                      PopChoice();
                                                                                      _fail(t);
                                                                                    }
                                                                                  else
                                                                                    t = u_9;
                                                                                  return(t);
                                                                                }
                                                                                ATerm f_2 (ATerm t)
                                                                                {
                                                                                  ATerm e_21 = NULL;
                                                                                  e_21 = t;
                                                                                  {
                                                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(e_21), not_null(h_20));
                                                                                    t = subt_0(t);
                                                                                  }
                                                                                  return(t);
                                                                                }
                                                                                t = _2(t, e_2, f_2);
                                                                                return(t);
                                                                              }
                                                                              t = try_1(t, z_1);
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
ATerm _2 (ATerm t, ATerm x_32 (ATerm), ATerm y_32 (ATerm))
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  s_22 = t;
  r_22 :
  if(match_cons(s_22, sym__2))
    {
      t_22 = ATgetArgument(s_22, 0);
      u_22 = ATgetArgument(s_22, 1);
      {
        ATerm x_22 = NULL;
        t = not_null(t_22);
        {
          ATerm z_22 = NULL;
          t = x_32(t);
          {
            x_22 = t;
            {
              t = not_null(u_22);
              {
                t = y_32(t);
                {
                  z_22 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_22), not_null(z_22));
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm f_23 = NULL;
  f_23 = t;
  t = SSL_ReadFromFile(not_null(f_23));
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm n_23 = NULL;
  ATerm v_9;
  v_9 = t;
  {
    ATerm y_9 = t;
    if((PushChoice() == 0))
      {
        ATerm h_2 (ATerm t)
        {
          ATerm v_23 = NULL,w_23 = NULL;
          v_23 = t;
          l_23 :
          if(match_cons(v_23, sym_Input_1))
            {
              w_23 = ATgetArgument(v_23, 0);
              if(((n_23 != NULL) && (n_23 != w_23)))
                _fail(w_23);
              else
                n_23 = w_23;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, h_2);
        PopChoice();
      }
    else
      {
        t = y_9;
        {
          ATerm x_23 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          {
            x_23 = t;
            if(((n_23 != NULL) && (n_23 != x_23)))
              _fail(x_23);
            else
              n_23 = x_23;
          }
        }
      }
  }
  t = v_9;
  {
    ATerm i_2 (ATerm t)
    {
      t = not_null(n_23);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, i_2);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm s_46 (ATerm))
{
  ATerm z_9;
  z_9 = t;
  {
    ATerm c_24 = NULL,e_24 = NULL;
    ATerm d_10;
    d_10 = t;
    {
      ATerm d_24 = NULL;
      t = s_46(t);
      {
        d_24 = t;
        if(((c_24 != NULL) && (c_24 != d_24)))
          _fail(d_24);
        else
          c_24 = d_24;
      }
    }
    t = d_10;
    {
      ATerm f_24 = NULL;
      f_24 = t;
      if(((e_24 != NULL) && (e_24 != f_24)))
        _fail(f_24);
      else
        e_24 = f_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(e_24)), not_null(c_24)));
        t = printnl_0(t);
      }
    }
  }
  t = z_9;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm z_46 (ATerm))
{
  ATerm e_10;
  e_10 = t;
  {
    t = z_46(t);
    {
      ATerm n_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
        return(t);
      }
      t = debug_1(t, n_2);
    }
  }
  t = e_10;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL;
  ATerm f_10 = t;
  if((PushChoice() == 0))
    {
      ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL;
      n_24 = t;
      j_24 :
      if(match_cons(n_24, sym__2))
        {
          o_24 = ATgetArgument(n_24, 0);
          p_24 = ATgetArgument(n_24, 1);
          {
            if(((m_24 != NULL) && (m_24 != o_24)))
              _fail(o_24);
            else
              m_24 = o_24;
            {
              if(((l_24 != NULL) && (l_24 != p_24)))
                _fail(p_24);
              else
                l_24 = p_24;
              t = SSL_open_file(not_null(m_24), not_null(l_24));
            }
          }
        }
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = f_10;
      {
        ATerm q_24 = NULL;
        ATerm o_2 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
          return(t);
        }
        t = obsolete_1(t, o_2);
        {
          q_24 = t;
          {
            if(((m_24 != NULL) && (m_24 != q_24)))
              _fail(q_24);
            else
              m_24 = q_24;
            t = SSL_open_file(not_null(m_24), (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue)));
          }
        }
      }
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm i_55 (ATerm))
{
  ATerm t_24 (ATerm t)
  {
    ATerm g_10 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, i_55, _id);
        PopChoice();
      }
    else
      {
        t = g_10;
        t = Cons_2(t, _id, t_24);
      }
    return(t);
  }
  t = t_24(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_45 (ATerm))
{
  t = fetch_1(t, b_45);
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm w_24 = NULL;
  ATerm i_10;
  i_10 = t;
  {
    ATerm p_2 (ATerm t)
    {
      ATerm x_24 = NULL,y_24 = NULL;
      x_24 = t;
      v_24 :
      if(match_cons(x_24, sym_Program_1))
        {
          y_24 = ATgetArgument(x_24, 0);
          if(((w_24 != NULL) && (w_24 != y_24)))
            _fail(y_24);
          else
            w_24 = y_24;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, p_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-i abox] [-o html] [--help|-h|-?]", 0, ATtrue))), not_null(w_24)), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
      {
        t = printnl_0(t);
        {
          t = (ATerm) ATmakeInt(0);
          t = exit_0(t);
        }
      }
    }
  }
  t = i_10;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm b_25 = NULL;
  b_25 = t;
  a_25 :
  if(!(match_cons(b_25, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_45 (ATerm))
{
  ATerm r_2 (ATerm t)
  {
    ATerm j_10 = t;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = j_10;
        {
          ATerm m_10 = t;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = m_10;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, r_2);
  t = w_45(t);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
  h_25 = t;
  f_25 :
  if(match_string(h_25, "register-usage-info"))
    t = register_usage_1(t, j_0);
  else
    {
      if(((ATgetType(h_25) == AT_LIST) && ((ATermList) h_25 != ATempty)))
        {
          i_25 = ATgetFirst((ATermList) h_25);
          j_25 = (ATerm) ATgetNext((ATermList) h_25);
          g_25 :
          if(((ATgetType(j_25) == AT_LIST) && ((ATermList) j_25 != ATempty)))
            {
              k_25 = ATgetFirst((ATermList) j_25);
              l_25 = (ATerm) ATgetNext((ATermList) j_25);
              {
                ATerm p_25 = NULL;
                ATerm n_10;
                n_10 = t;
                {
                  t = not_null(i_25);
                  t = h_0(t);
                }
                t = n_10;
                {
                  ATerm q_25 = NULL;
                  t = not_null(k_25);
                  {
                    t = i_0(t);
                    {
                      q_25 = t;
                      if(((p_25 != NULL) && (p_25 != q_25)))
                        _fail(q_25);
                      else
                        p_25 = q_25;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(l_25)), not_null(p_25));
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm o_10 = t;
  if((PushChoice() == 0))
    {
      ATerm s_2 (ATerm t)
      {
        ATerm f_26 = NULL;
        f_26 = t;
        u_25 :
        if(!(match_string(f_26, "-S")))
          {
            if(!(match_string(f_26, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm u_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm z_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, s_2, u_2, z_2);
      PopChoice();
    }
  else
    {
      t = o_10;
      {
        ATerm t_10 = t;
        if((PushChoice() == 0))
          {
            ATerm a_3 (ATerm t)
            {
              ATerm g_26 = NULL;
              g_26 = t;
              v_25 :
              if(!(match_string(g_26, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm b_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm c_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, a_3, b_3, c_3);
            PopChoice();
          }
        else
          {
            t = t_10;
            {
              ATerm u_10 = t;
              if((PushChoice() == 0))
                {
                  ATerm d_3 (ATerm t)
                  {
                    ATerm h_26 = NULL;
                    h_26 = t;
                    w_25 :
                    if(!(match_string(h_26, "-v")))
                      {
                        if(!(match_string(h_26, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm i_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm j_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, d_3, i_3, j_3);
                  PopChoice();
                }
              else
                {
                  t = u_10;
                  {
                    ATerm w_10 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm m_3 (ATerm t)
                        {
                          ATerm i_26 = NULL;
                          i_26 = t;
                          x_25 :
                          if(!(match_string(i_26, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm n_3 (ATerm t)
                        {
                          ATerm j_26 = NULL;
                          ATerm k_26 = NULL;
                          k_26 = t;
                          if(((j_26 != NULL) && (j_26 != k_26)))
                            _fail(k_26);
                          else
                            j_26 = k_26;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(j_26));
                          return(t);
                        }
                        ATerm p_3 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, m_3, n_3, p_3);
                        PopChoice();
                      }
                    else
                      {
                        t = w_10;
                        {
                          ATerm y_10 = t;
                          if((PushChoice() == 0))
                            {
                              ATerm u_3 (ATerm t)
                              {
                                ATerm l_26 = NULL;
                                l_26 = t;
                                z_25 :
                                if(!(match_string(l_26, "-i")))
                                  {
                                    if(!(match_string(l_26, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm v_3 (ATerm t)
                              {
                                ATerm m_26 = NULL;
                                ATerm n_26 = NULL;
                                n_26 = t;
                                if(((m_26 != NULL) && (m_26 != n_26)))
                                  _fail(n_26);
                                else
                                  m_26 = n_26;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_26));
                                return(t);
                              }
                              ATerm w_3 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, u_3, v_3, w_3);
                              PopChoice();
                            }
                          else
                            {
                              t = y_10;
                              {
                                ATerm z_10 = t;
                                if((PushChoice() == 0))
                                  {
                                    ATerm x_3 (ATerm t)
                                    {
                                      ATerm o_26 = NULL;
                                      o_26 = t;
                                      b_26 :
                                      if(!(match_string(o_26, "-o")))
                                        {
                                          if(!(match_string(o_26, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm d_4 (ATerm t)
                                    {
                                      ATerm p_26 = NULL;
                                      ATerm q_26 = NULL;
                                      q_26 = t;
                                      if(((p_26 != NULL) && (p_26 != q_26)))
                                        _fail(q_26);
                                      else
                                        p_26 = q_26;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_26));
                                      return(t);
                                    }
                                    ATerm e_4 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, x_3, d_4, e_4);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = z_10;
                                    {
                                      ATerm a_11 = t;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm f_4 (ATerm t)
                                          {
                                            ATerm r_26 = NULL;
                                            r_26 = t;
                                            d_26 :
                                            if(!(match_string(r_26, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm g_4 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm h_4 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, f_4, g_4, h_4);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = a_11;
                                          {
                                            ATerm r_4 (ATerm t)
                                            {
                                              ATerm s_26 = NULL;
                                              s_26 = t;
                                              e_26 :
                                              if(!(match_string(s_26, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm s_4 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm t_4 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, r_4, s_4, t_4);
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
  ATerm x_26 = NULL;
  x_26 = t;
  t = SSL_table_destroy(not_null(x_26));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm b_27 = NULL;
  b_27 = t;
  t = SSL_exit(not_null(b_27));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm f_27 = NULL;
  f_27 = t;
  t = SSL_implode_string(not_null(f_27));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm o_55 (ATerm))
{
  ATerm i_27 (ATerm t)
  {
    ATerm b_11 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, i_27);
        PopChoice();
      }
    else
      {
        t = b_11;
        {
          t = Nil_0(t);
          t = o_55(t);
        }
      }
    return(t);
  }
  t = i_27(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_11 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = c_11;
      {
        ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
        l_27 = t;
        k_27 :
        if(((ATgetType(l_27) == AT_LIST) && ((ATermList) l_27 != ATempty)))
          {
            m_27 = ATgetFirst((ATermList) l_27);
            n_27 = (ATerm) ATgetNext((ATermList) l_27);
            {
              t = not_null(m_27);
              {
                ATerm e_5 (ATerm t)
                {
                  t = not_null(n_27);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, e_5);
              }
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
  ATerm t_27 = NULL;
  t_27 = t;
  t = SSL_explode_string(not_null(t_27));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm d_44 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm a_55 (ATerm))
{
  ATerm w_27 (ATerm t)
  {
    ATerm d_11 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = d_11;
        t = Cons_2(t, a_55, w_27);
      }
    return(t);
  }
  t = w_27(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL;
  d_28 = t;
  a_28 :
  if(((ATgetType(d_28) == AT_LIST) && ((ATermList) d_28 != ATempty)))
    {
      b_28 = ATgetFirst((ATermList) d_28);
      c_28 = (ATerm) ATgetNext((ATermList) d_28);
      {
        t = not_null(c_28);
        {
          ATerm f_5 (ATerm t)
          {
            ATerm g_28 = NULL;
            ATerm h_28 = NULL;
            t = g_0(t);
            {
              h_28 = t;
              if(((g_28 != NULL) && (g_28 != h_28)))
                _fail(h_28);
              else
                g_28 = h_28;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(g_28)), not_null(b_28));
            return(t);
          }
          t = reverse_1(t, f_5);
        }
      }
    }
  else
    {
      if(((ATermList) d_28 == ATempty))
        {
          {
            t = (ATerm) ATmakeAppl(sym__0);
            t = g_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, g_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm c_44 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm g_34 (ATerm))
{
  ATerm o_28 = NULL,p_28 = NULL;
  o_28 = t;
  n_28 :
  if(match_cons(o_28, sym_Program_1))
    {
      p_28 = ATgetArgument(o_28, 0);
      {
        ATerm r_28 = NULL;
        t = not_null(p_28);
        {
          t = g_34(t);
          {
            r_28 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_28));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm z_28 = NULL;
  ATerm i_5 (ATerm t)
  {
    ATerm j_5 (ATerm t)
    {
      ATerm a_29 = NULL;
      a_29 = t;
      if(((z_28 != NULL) && (z_28 != a_29)))
        _fail(a_29);
      else
        z_28 = a_29;
      return(t);
    }
    t = Program_1(t, j_5);
    return(t);
  }
  t = option_defined_1(t, i_5);
  {
    ATerm k_5 (ATerm t)
    {
      ATerm b_29 = NULL;
      ATerm c_29 = NULL;
      t = (ATerm) ATmakeAppl(sym__0);
      {
        ATerm p_5 (ATerm t)
        {
          t = not_null(z_28);
          return(t);
        }
        t = short_description_1(t, p_5);
        {
          t = concat_strings_0(t);
          {
            c_29 = t;
            if(((b_29 != NULL) && (b_29 != c_29)))
              _fail(c_29);
            else
              b_29 = c_29;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, not_null(b_29)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, k_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue))));
      {
        t = printnl_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm q_5 (ATerm t)
                {
                  ATerm d_29 = NULL;
                  d_29 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(d_29)), (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue))));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, q_5);
                {
                  ATerm s_5 (ATerm t)
                  {
                    ATerm f_29 = NULL;
                    ATerm g_29 = NULL;
                    t = (ATerm) ATmakeAppl(sym__0);
                    {
                      ATerm u_5 (ATerm t)
                      {
                        t = not_null(z_28);
                        return(t);
                      }
                      t = long_description_1(t, u_5);
                      {
                        t = concat_strings_0(t);
                        {
                          g_29 = t;
                          if(((f_29 != NULL) && (f_29 != g_29)))
                            _fail(g_29);
                          else
                            f_29 = g_29;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(f_29)), (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue))));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, s_5);
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
ATerm printnl_0 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
  p_29 = t;
  o_29 :
  if(match_cons(p_29, sym__2))
    {
      q_29 = ATgetArgument(p_29, 0);
      r_29 = ATgetArgument(p_29, 1);
      {
        ATerm e_11;
        e_11 = t;
        t = SSL_printnl(not_null(q_29), not_null(r_29));
        t = e_11;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm h_34 (ATerm))
{
  ATerm e_30 = NULL,f_30 = NULL;
  e_30 = t;
  d_30 :
  if(match_cons(e_30, sym_Undefined_1))
    {
      f_30 = ATgetArgument(e_30, 0);
      {
        ATerm h_30 = NULL;
        t = not_null(f_30);
        {
          t = h_34(t);
          {
            h_30 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_30));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm m_30 = NULL;
  m_30 = t;
  l_30 :
  if(!(match_cons(m_30, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
  a_33 = t;
  z_32 :
  if(match_cons(a_33, sym__2))
    {
      b_33 = ATgetArgument(a_33, 0);
      c_33 = ATgetArgument(a_33, 1);
      t = SSL_table_get(not_null(b_33), not_null(c_33));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL;
  j_33 = t;
  i_33 :
  if(match_cons(j_33, sym__3))
    {
      k_33 = ATgetArgument(j_33, 0);
      l_33 = ATgetArgument(j_33, 1);
      m_33 = ATgetArgument(j_33, 2);
      {
        ATerm f_11;
        f_11 = t;
        {
          ATerm q_33 = NULL;
          ATerm r_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_33), not_null(l_33));
          {
            ATerm g_11 = t;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                PopChoice();
              }
            else
              {
                t = g_11;
                t = (ATerm) ATempty;
              }
            {
              r_33 = t;
              if(((q_33 != NULL) && (q_33 != r_33)))
                _fail(r_33);
              else
                q_33 = r_33;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_33), not_null(l_33), (ATerm) ATinsert(CheckATermList(not_null(q_33)), not_null(m_33)));
            t = table_put_0(t);
          }
        }
        t = f_11;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm h_44 (ATerm))
{
  ATerm v_33 = NULL;
  ATerm w_33 = NULL;
  t = (ATerm) ATmakeAppl(sym__0);
  {
    t = h_44(t);
    {
      w_33 = t;
      if(((v_33 != NULL) && (v_33 != w_33)))
        _fail(w_33);
      else
        v_33 = w_33;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), not_null(v_33));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL;
  c_34 = t;
  b_34 :
  if(match_string(c_34, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(c_34) == AT_LIST) && ((ATermList) c_34 != ATempty)))
        {
          d_34 = ATgetFirst((ATermList) c_34);
          e_34 = (ATerm) ATgetNext((ATermList) c_34);
          {
            ATerm j_34 = NULL;
            ATerm h_11;
            h_11 = t;
            {
              t = not_null(d_34);
              t = d_0(t);
            }
            t = h_11;
            {
              ATerm k_34 = NULL;
              t = (ATerm) ATmakeAppl(sym__0);
              {
                t = e_0(t);
                {
                  k_34 = t;
                  if(((j_34 != NULL) && (j_34 != k_34)))
                    _fail(k_34);
                  else
                    j_34 = k_34;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(e_34)), not_null(j_34));
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    ATerm p_34 = NULL;
    p_34 = t;
    o_34 :
    if(!(match_string(p_34, "--help")))
      {
        if(!(match_string(p_34, "-h")))
          {
            if(!(match_string(p_34, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm x_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, v_5, w_5, x_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
  s_34 = t;
  r_34 :
  if(((ATgetType(s_34) == AT_LIST) && ((ATermList) s_34 != ATempty)))
    {
      t_34 = ATgetFirst((ATermList) s_34);
      u_34 = (ATerm) ATgetNext((ATermList) s_34);
      t = (ATerm) ATinsert(CheckATermList(not_null(u_34)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(t_34)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_40 (ATerm), ATerm s_40 (ATerm))
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
  c_35 = t;
  b_35 :
  if(((ATgetType(c_35) == AT_LIST) && ((ATermList) c_35 != ATempty)))
    {
      d_35 = ATgetFirst((ATermList) c_35);
      e_35 = (ATerm) ATgetNext((ATermList) c_35);
      {
        ATerm h_35 = NULL;
        t = not_null(d_35);
        {
          ATerm j_35 = NULL;
          t = r_40(t);
          {
            h_35 = t;
            {
              t = not_null(e_35);
              {
                t = s_40(t);
                {
                  j_35 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(j_35)), not_null(h_35));
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
ATerm Nil_0 (ATerm t)
{
  ATerm p_35 = NULL;
  p_35 = t;
  o_35 :
  if(((ATermList) p_35 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm f_44 (ATerm))
{
  ATerm i_11;
  i_11 = t;
  {
    ATerm y_5 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = f_44(t);
      return(t);
    }
    t = try_1(t, y_5);
  }
  t = i_11;
  {
    ATerm d_6 (ATerm t)
    {
      ATerm r_35 = NULL;
      r_35 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_35));
      return(t);
    }
    ATerm e_6 (ATerm t)
    {
      ATerm j_11 = t;
      if((PushChoice() == 0))
        {
          ATerm k_11 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = k_11;
              {
                t = f_44(t);
                t = Cons_2(t, _id, e_6);
              }
            }
          PopChoice();
        }
      else
        {
          t = j_11;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, d_6, e_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
  ATerm o_11;
  o_11 = t;
  {
    ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL;
    a_36 = t;
    w_35 :
    if(match_cons(a_36, sym__3))
      {
        b_36 = ATgetArgument(a_36, 0);
        c_36 = ATgetArgument(a_36, 1);
        d_36 = ATgetArgument(a_36, 2);
        {
          if(((x_35 != NULL) && (x_35 != b_36)))
            _fail(b_36);
          else
            x_35 = b_36;
          {
            if(((y_35 != NULL) && (y_35 != c_36)))
              _fail(c_36);
            else
              y_35 = c_36;
            {
              if(((z_35 != NULL) && (z_35 != d_36)))
                _fail(d_36);
              else
                z_35 = d_36;
              t = SSL_table_put(not_null(x_35), not_null(y_35), not_null(z_35));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = o_11;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm e_44 (ATerm))
{
  ATerm g_36 = NULL;
  ATerm r_11;
  r_11 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
    t = table_put_0(t);
  }
  t = r_11;
  {
    ATerm f_6 (ATerm t)
    {
      ATerm s_11 = t;
      if((PushChoice() == 0))
        {
          t = e_44(t);
          PopChoice();
        }
      else
        {
          t = s_11;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, f_6);
    {
      ATerm g_6 (ATerm t)
      {
        ATerm t_11 = t;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = (ATerm) ATmakeInt(0);
                t = exit_0(t);
              }
            }
            PopChoice();
          }
        else
          {
            t = t_11;
            {
              ATerm h_6 (ATerm t)
              {
                ATerm m_6 (ATerm t)
                {
                  ATerm h_36 = NULL;
                  h_36 = t;
                  if(((g_36 != NULL) && (g_36 != h_36)))
                    _fail(h_36);
                  else
                    g_36 = h_36;
                  return(t);
                }
                t = Undefined_1(t, m_6);
                return(t);
              }
              t = option_defined_1(t, h_6);
              {
                ATerm u_11;
                u_11 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(g_36)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                  t = printnl_0(t);
                }
                t = u_11;
                {
                  t = system_usage_0(t);
                  {
                    t = (ATerm) ATmakeInt(1);
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, g_6);
      {
        ATerm v_11;
        v_11 = t;
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
          t = table_destroy_0(t);
        }
        t = v_11;
      }
    }
  }
  return(t);
}
ATerm Abox2text_0 (ATerm t)
{
  ATerm p_36 = NULL;
  ATerm r_36 = NULL,s_36 = NULL;
  t = parse_options_1(t, io_options_0);
  {
    p_36 = t;
    {
      ATerm w_11 = t;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, usage_0);
          PopChoice();
        }
      else
        {
          t = w_11;
          {
            ATerm x_11 = t;
            if((PushChoice() == 0))
              {
                ATerm c_12;
                c_12 = t;
                {
                  ATerm d_12 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm n_6 (ATerm t)
                      {
                        ATerm t_36 = NULL,u_36 = NULL;
                        t_36 = t;
                        l_36 :
                        if(match_cons(t_36, sym_Output_1))
                          {
                            u_36 = ATgetArgument(t_36, 0);
                            if(((s_36 != NULL) && (s_36 != u_36)))
                              _fail(u_36);
                            else
                              s_36 = u_36;
                          }
                        else
                          _fail(t);
                        return(t);
                      }
                      t = option_defined_1(t, n_6);
                      {
                        t = not_null(s_36);
                        t = open_file_0(t);
                      }
                      PopChoice();
                    }
                  else
                    {
                      t = d_12;
                      {
                        ATerm v_36 = NULL;
                        t = (ATerm) ATmakeAppl(sym_stdout_0);
                        {
                          v_36 = t;
                          if(((s_36 != NULL) && (s_36 != v_36)))
                            _fail(v_36);
                          else
                            s_36 = v_36;
                        }
                      }
                    }
                }
                t = c_12;
                {
                  t = input_file_0(t);
                  {
                    ATerm s_6 (ATerm t)
                    {
                      ATerm w_36 = NULL;
                      t = abox2text_0(t);
                      {
                        w_36 = t;
                        if(((r_36 != NULL) && (r_36 != w_36)))
                          _fail(w_36);
                        else
                          r_36 = w_36;
                      }
                      return(t);
                    }
                    t = _2(t, _id, s_6);
                    {
                      t = not_null(r_36);
                      {
                        ATerm t_6 (ATerm t)
                        {
                          ATerm u_6 (ATerm t)
                          {
                            t = is_string_0(t);
                            {
                              ATerm e_12;
                              e_12 = t;
                              {
                                ATerm x_6 (ATerm t)
                                {
                                  t = not_null(s_36);
                                  return(t);
                                }
                                ATerm y_6 (ATerm t)
                                {
                                  ATerm x_36 = NULL;
                                  x_36 = t;
                                  t = (ATerm) ATinsert(ATempty, not_null(x_36));
                                  return(t);
                                }
                                t = split_2(t, x_6, y_6);
                                t = print_0(t);
                              }
                              t = e_12;
                            }
                            return(t);
                          }
                          t = try_1(t, u_6);
                          return(t);
                        }
                        t = topdown_1(t, t_6);
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(s_36), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))));
                          {
                            t = print_0(t);
                            t = report_success_0(t);
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
                t = x_11;
                t = report_failure_0(t);
              }
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
