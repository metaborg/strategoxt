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
ATerm split_2 (ATerm, ATerm f_36 (ATerm), ATerm g_36 (ATerm));
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm f_49 (ATerm));
ATerm topdown_1 (ATerm, ATerm h_45 (ATerm));
ATerm TNil_0 (ATerm);
ATerm add_0 (ATerm);
ATerm length_0 (ATerm);
ATerm string_length_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm d_44 (ATerm));
ATerm separate_by_1 (ATerm, ATerm e_44 (ATerm));
ATerm Fst_0 (ATerm);
ATerm map_1 (ATerm, ATerm r_42 (ATerm));
ATerm at_last_1 (ATerm, ATerm q_43 (ATerm));
ATerm Tl_0 (ATerm);
ATerm filter_1 (ATerm, ATerm x_36 (ATerm));
ATerm at_end_1 (ATerm, ATerm g_43 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm z_48 (ATerm), ATerm a_49 (ATerm));
ATerm for_3 (ATerm, ATerm c_49 (ATerm), ATerm d_49 (ATerm), ATerm e_49 (ATerm));
ATerm copy_0 (ATerm);
ATerm copy_char_0 (ATerm);
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm Vspace_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm thread_map_1 (ATerm, ATerm m_38 (ATerm));
ATerm H_2 (ATerm, ATerm t_27 (ATerm), ATerm u_27 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm p_27 (ATerm), ATerm q_27 (ATerm));
ATerm Hspace_0 (ATerm);
ATerm Abox_2_text_0 (ATerm);
ATerm abox2text_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm n_29 (ATerm), ATerm o_29 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm input_file_0 (ATerm);
ATerm debug_1 (ATerm, ATerm m_34 (ATerm));
ATerm obsolete_1 (ATerm, ATerm t_34 (ATerm));
ATerm open_file_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm a_43 (ATerm));
ATerm option_defined_1 (ATerm, ATerm g_33 (ATerm));
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm j_27 (ATerm));
ATerm Help_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm b_34 (ATerm));
ATerm Option_2 (ATerm, ATerm z_32 (ATerm), ATerm a_33 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm b_33 (ATerm), ATerm c_33 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_29 (ATerm), ATerm s_29 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm x_32 (ATerm));
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
      ATerm k_3 = t;
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
        t = k_3;
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
              ATerm y_3;
              y_3 = t;
              t = SSL_print(not_null(v_1), not_null(x_1));
              t = y_3;
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
ATerm split_2 (ATerm t, ATerm f_36 (ATerm), ATerm g_36 (ATerm))
{
  ATerm f_2 = NULL;
  ATerm h_2 = NULL;
  f_2 = t;
  {
    ATerm j_2 = NULL;
    t = f_36(t);
    h_2 = t;
    t = not_null(f_2);
    t = g_36(t);
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
ATerm try_1 (ATerm t, ATerm f_49 (ATerm))
{
  ATerm a_5 = t;
  if(PushChoice()==0)
    {
      t = f_49(t);
      PopChoice();
    }
  else
    t = a_5;
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm h_45 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    t = h_45(t);
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
ATerm add_0 (ATerm t)
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
              ATerm i_6 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(a_3), not_null(c_3));
                  PopChoice();
                }
              else
                {
                  t = i_6;
                  t = SSL_addr(not_null(a_3), not_null(c_3));
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
  ATerm m_6 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = (ATerm) ATmakeInt(0);
      PopChoice();
    }
  else
    {
      t = m_6;
      {
        ATerm i_3 = NULL;
        t = Tl_0(t);
        t = length_0(t);
        i_3 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_3), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm Sep_1 (ATerm t, ATerm d_44 (ATerm))
{
  ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL;
  p_3 = t;
  o_3 :
  if(match_cons(p_3, sym_Cons_2))
    {
      q_3 = ATgetArgument(p_3, 0);
      r_3 = ATgetArgument(p_3, 1);
      {
        ATerm u_3 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = d_44(t);
        u_3 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_3), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_3), not_null(r_3)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm e_44 (ATerm))
{
  ATerm s_6 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = s_6;
      {
        ATerm m_0 (ATerm t)
        {
          ATerm t_6 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = t_6;
              t = Cons_2(t, _id, m_0);
              t = Sep_1(t, e_44);
            }
          return(t);
        }
        t = Cons_2(t, _id, m_0);
      }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL;
  b_4 = t;
  a_4 :
  if(match_cons(b_4, sym_TCons_2))
    {
      c_4 = ATgetArgument(b_4, 0);
      d_4 = ATgetArgument(b_4, 1);
      t = not_null(c_4);
    }
  else
    _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_42 (ATerm))
{
  ATerm h_4 (ATerm t)
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
        t = Cons_2(t, r_42, h_4);
      }
    return(t);
  }
  t = h_4(t);
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm q_43 (ATerm))
{
  ATerm i_4 (ATerm t)
  {
    ATerm e_7 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, Nil_0);
        t = q_43(t);
        PopChoice();
      }
    else
      {
        t = e_7;
        t = Cons_2(t, _id, i_4);
      }
    return(t);
  }
  t = i_4(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL;
  l_4 = t;
  k_4 :
  if(match_cons(l_4, sym_Cons_2))
    {
      m_4 = ATgetArgument(l_4, 0);
      n_4 = ATgetArgument(l_4, 1);
      t = not_null(n_4);
    }
  else
    _fail(t);
  return(t);
}
ATerm filter_1 (ATerm t, ATerm x_36 (ATerm))
{
  ATerm r_4 (ATerm t)
  {
    ATerm f_7 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = f_7;
        {
          ATerm n_7 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, x_36, r_4);
              PopChoice();
            }
          else
            {
              t = n_7;
              t = Tl_0(t);
              t = r_4(t);
            }
        }
      }
    return(t);
  }
  t = r_4(t);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm g_43 (ATerm))
{
  ATerm s_4 (ATerm t)
  {
    ATerm o_7 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, s_4);
        PopChoice();
      }
    else
      {
        t = o_7;
        t = Nil_0(t);
        t = g_43(t);
      }
    return(t);
  }
  t = s_4(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_7 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = r_7;
      {
        ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL;
        v_4 = t;
        u_4 :
        if(match_cons(v_4, sym_Cons_2))
          {
            w_4 = ATgetArgument(v_4, 0);
            x_4 = ATgetArgument(v_4, 1);
            t = not_null(w_4);
            {
              ATerm n_0 (ATerm t)
              {
                t = not_null(x_4);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, n_0);
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
  ATerm d_5 = NULL;
  d_5 = t;
  t = SSL_explode_string(not_null(d_5));
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
  ATerm h_5 = NULL;
  h_5 = t;
  t = SSL_implode_string(not_null(h_5));
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL;
  o_5 = t;
  l_5 :
  if(match_cons(o_5, sym_TCons_2))
    {
      p_5 = ATgetArgument(o_5, 0);
      q_5 = ATgetArgument(o_5, 1);
      m_5 :
      if(match_cons(q_5, sym_TCons_2))
        {
          r_5 = ATgetArgument(q_5, 0);
          s_5 = ATgetArgument(q_5, 1);
          n_5 :
          if(match_cons(s_5, sym_TNil_0))
            {
              ATerm s_7;
              s_7 = t;
              {
                ATerm t_7 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(p_5), not_null(r_5));
                    PopChoice();
                  }
                else
                  {
                    t = t_7;
                    t = SSL_gtr(not_null(p_5), not_null(r_5));
                  }
              }
              t = s_7;
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
  ATerm a_6 = NULL;
  ATerm u_7 = t;
  if(PushChoice()==0)
    {
      ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL;
      b_6 = t;
      x_5 :
      if(match_cons(b_6, sym_TCons_2))
        {
          c_6 = ATgetArgument(b_6, 0);
          d_6 = ATgetArgument(b_6, 1);
          y_5 :
          if(match_cons(d_6, sym_TCons_2))
            {
              e_6 = ATgetArgument(d_6, 0);
              f_6 = ATgetArgument(d_6, 1);
              z_5 :
              if(match_cons(f_6, sym_TNil_0))
                {
                  if(a_6 != NULL && a_6 != c_6)
                    _fail(c_6);
                  else
                    a_6 = c_6;
                  if(a_6 != NULL && a_6 != e_6)
                    _fail(e_6);
                  else
                    a_6 = e_6;
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
      t = u_7;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm z_48 (ATerm), ATerm a_49 (ATerm))
{
  ATerm h_6 (ATerm t)
  {
    ATerm v_7 = t;
    if(PushChoice()==0)
      {
        t = z_48(t);
        PopChoice();
      }
    else
      {
        t = v_7;
        t = a_49(t);
        t = h_6(t);
      }
    return(t);
  }
  t = h_6(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm c_49 (ATerm), ATerm d_49 (ATerm), ATerm e_49 (ATerm))
{
  t = c_49(t);
  t = while_not_2(t, d_49, e_49);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL;
    z_6 = t;
    j_6 :
    if(match_cons(z_6, sym_TCons_2))
      {
        a_7 = ATgetArgument(z_6, 0);
        b_7 = ATgetArgument(z_6, 1);
        k_6 :
        if(match_cons(b_7, sym_TCons_2))
          {
            c_7 = ATgetArgument(b_7, 0);
            d_7 = ATgetArgument(b_7, 1);
            l_6 :
            if(match_cons(d_7, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_7), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_7), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm p_0 (ATerm t)
  {
    ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL;
    g_7 = t;
    n_6 :
    if(match_cons(g_7, sym_TCons_2))
      {
        h_7 = ATgetArgument(g_7, 0);
        i_7 = ATgetArgument(g_7, 1);
        o_6 :
        if(match_int(h_7, 0))
          {
            p_6 :
            if(match_cons(i_7, sym_TCons_2))
              {
                j_7 = ATgetArgument(i_7, 0);
                k_7 = ATgetArgument(i_7, 1);
                q_6 :
                if(match_cons(k_7, sym_TCons_2))
                  {
                    l_7 = ATgetArgument(k_7, 0);
                    m_7 = ATgetArgument(k_7, 1);
                    r_6 :
                    if(match_cons(m_7, sym_TNil_0))
                      t = not_null(l_7);
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
  ATerm q_0 (ATerm t)
  {
    ATerm p_7 = NULL,q_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,d_8 = NULL;
    p_7 = t;
    u_6 :
    if(match_cons(p_7, sym_TCons_2))
      {
        q_7 = ATgetArgument(p_7, 0);
        x_7 = ATgetArgument(p_7, 1);
        v_6 :
        if(match_cons(x_7, sym_TCons_2))
          {
            y_7 = ATgetArgument(x_7, 0);
            z_7 = ATgetArgument(x_7, 1);
            w_6 :
            if(match_cons(z_7, sym_TCons_2))
              {
                a_8 = ATgetArgument(z_7, 0);
                d_8 = ATgetArgument(z_7, 1);
                x_6 :
                if(match_cons(d_8, sym_TNil_0))
                  {
                    ATerm n_8 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_7), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = geq_0(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_7), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = subt_0(t);
                    n_8 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_8), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_7), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_7), not_null(a_8)), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  t = for_3(t, o_0, p_0, q_0);
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
  ATerm w_8 = NULL;
  w_8 = t;
  v_8 :
  if(!(match_cons(w_8, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0 (ATerm t)
{
  ATerm z_8 = NULL,d_9 = NULL;
  ATerm w_7 = t;
  if(PushChoice()==0)
    {
      ATerm r_0 (ATerm t)
      {
        ATerm s_0 (ATerm t)
        {
          ATerm a_9 = NULL;
          a_9 = t;
          if(z_8 != NULL && z_8 != a_9)
            _fail(a_9);
          else
            z_8 = a_9;
          return(t);
        }
        t = SOpt_2(t, IS_0, s_0);
        return(t);
      }
      t = fetch_1(t, r_0);
      t = not_null(z_8);
      t = string_to_int_0(t);
      PopChoice();
    }
  else
    {
      t = w_7;
      t = (ATerm) ATmakeInt(0);
    }
  d_9 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_9), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(32), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = copy_char_0(t);
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm n_9 = NULL;
  n_9 = t;
  l_9 :
  if(!(match_cons(n_9, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0 (ATerm t)
{
  ATerm r_9 = NULL,u_9 = NULL;
  ATerm w_9 = NULL;
  ATerm b_8 = t;
  if(PushChoice()==0)
    {
      ATerm t_0 (ATerm t)
      {
        ATerm u_0 (ATerm t)
        {
          ATerm t_9 = NULL;
          t_9 = t;
          if(r_9 != NULL && r_9 != t_9)
            _fail(t_9);
          else
            r_9 = t_9;
          return(t);
        }
        t = SOpt_2(t, VS_0, u_0);
        return(t);
      }
      t = fetch_1(t, t_0);
      t = not_null(r_9);
      t = string_to_int_0(t);
      PopChoice();
    }
  else
    {
      t = b_8;
      t = (ATerm) ATmakeInt(0);
    }
  u_9 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_9), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = add_0(t);
  w_9 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_9), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(10), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = copy_char_0(t);
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL,k_10 = NULL,l_10 = NULL;
  f_10 = t;
  c_10 :
  if(match_cons(f_10, sym_TCons_2))
    {
      g_10 = ATgetArgument(f_10, 0);
      h_10 = ATgetArgument(f_10, 1);
      d_10 :
      if(match_cons(h_10, sym_TCons_2))
        {
          k_10 = ATgetArgument(h_10, 0);
          l_10 = ATgetArgument(h_10, 1);
          e_10 :
          if(match_cons(l_10, sym_TNil_0))
            {
              ATerm c_8 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(g_10), not_null(k_10));
                  PopChoice();
                }
              else
                {
                  t = c_8;
                  t = SSL_subtr(not_null(g_10), not_null(k_10));
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
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL;
  u_10 = t;
  s_10 :
  if(match_cons(u_10, sym_Pair_2))
    {
      v_10 = ATgetArgument(u_10, 0);
      w_10 = ATgetArgument(u_10, 1);
      t_10 :
      if(match_cons(v_10, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Pair_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(w_10));
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_T_2 (ATerm t, ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm g_11 = NULL,h_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL;
  g_11 = t;
  e_11 :
  if(match_cons(g_11, sym_Pair_2))
    {
      h_11 = ATgetArgument(g_11, 0);
      m_11 = ATgetArgument(g_11, 1);
      f_11 :
      if(match_cons(h_11, sym_Cons_2))
        {
          k_11 = ATgetArgument(h_11, 0);
          l_11 = ATgetArgument(h_11, 1);
          {
            ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
            t = (ATerm) ATmakeAppl(sym_Pair_2, not_null(k_11), not_null(m_11));
            t = d_0(t);
            s_11 = t;
            d_11 :
            if(match_cons(s_11, sym_Pair_2))
              {
                t_11 = ATgetArgument(s_11, 0);
                u_11 = ATgetArgument(s_11, 1);
                {
                  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Pair_2, not_null(l_11), not_null(u_11));
                  t = g_0(t);
                  x_11 = t;
                  c_11 :
                  if(match_cons(x_11, sym_Pair_2))
                    {
                      y_11 = ATgetArgument(x_11, 0);
                      z_11 = ATgetArgument(x_11, 1);
                      t = (ATerm) ATmakeAppl(sym_Pair_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_11), not_null(y_11)), not_null(z_11));
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
ATerm thread_map_1 (ATerm t, ATerm m_38 (ATerm))
{
  ATerm f_12 (ATerm t)
  {
    ATerm e_8 = t;
    if(PushChoice()==0)
      {
        t = Cons_T_2(t, m_38, f_12);
        PopChoice();
      }
    else
      {
        t = e_8;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = f_12(t);
  return(t);
}
ATerm H_2 (ATerm t, ATerm t_27 (ATerm), ATerm u_27 (ATerm))
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
  k_12 = t;
  j_12 :
  if(match_cons(k_12, sym_H_2))
    {
      l_12 = ATgetArgument(k_12, 0);
      m_12 = ATgetArgument(k_12, 1);
      {
        ATerm s_12 = NULL;
        t = not_null(l_12);
        {
          ATerm u_12 = NULL;
          t = t_27(t);
          s_12 = t;
          t = not_null(m_12);
          t = u_27(t);
          u_12 = t;
          t = (ATerm) ATmakeAppl(sym_H_2, not_null(s_12), not_null(u_12));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm a_13 = NULL;
  a_13 = t;
  t = SSL_string_to_int(not_null(a_13));
  return(t);
}
ATerm HS_0 (ATerm t)
{
  ATerm e_13 = NULL;
  e_13 = t;
  d_13 :
  if(!(match_cons(e_13, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm p_27 (ATerm), ATerm q_27 (ATerm))
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL;
  j_13 = t;
  i_13 :
  if(match_cons(j_13, sym_SOpt_2))
    {
      k_13 = ATgetArgument(j_13, 0);
      l_13 = ATgetArgument(j_13, 1);
      {
        ATerm o_13 = NULL;
        t = not_null(k_13);
        {
          ATerm q_13 = NULL;
          t = p_27(t);
          o_13 = t;
          t = not_null(l_13);
          t = q_27(t);
          q_13 = t;
          t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(o_13), not_null(q_13));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Hspace_0 (ATerm t)
{
  ATerm x_13 = NULL,z_13 = NULL;
  ATerm f_8 = t;
  if(PushChoice()==0)
    {
      ATerm v_0 (ATerm t)
      {
        ATerm w_0 (ATerm t)
        {
          ATerm y_13 = NULL;
          y_13 = t;
          if(x_13 != NULL && x_13 != y_13)
            _fail(y_13);
          else
            x_13 = y_13;
          return(t);
        }
        t = SOpt_2(t, HS_0, w_0);
        return(t);
      }
      t = fetch_1(t, v_0);
      t = not_null(x_13);
      t = string_to_int_0(t);
      PopChoice();
    }
  else
    {
      t = f_8;
      t = (ATerm) ATmakeInt(1);
    }
  z_13 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_13), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(32), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = copy_char_0(t);
  return(t);
}
ATerm Abox_2_text_0 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
  b_17 = t;
  q_15 :
  if(match_cons(b_17, sym_TCons_2))
    {
      c_17 = ATgetArgument(b_17, 0);
      d_17 = ATgetArgument(b_17, 1);
      r_15 :
      if(match_cons(c_17, sym_H_2))
        {
          z_16 = ATgetArgument(c_17, 0);
          a_17 = ATgetArgument(c_17, 1);
          s_15 :
          if(match_cons(d_17, sym_TCons_2))
            {
              e_17 = ATgetArgument(d_17, 0);
              f_17 = ATgetArgument(d_17, 1);
              t_15 :
              if(match_cons(f_17, sym_TNil_0))
                {
                  ATerm j_17 = NULL;
                  t = not_null(z_16);
                  {
                    ATerm l_17 = NULL;
                    t = Hspace_0(t);
                    j_17 = t;
                    {
                      ATerm n_17 = NULL;
                      t = string_length_0(t);
                      l_17 = t;
                      t = not_null(a_17);
                      {
                        ATerm d_18 = NULL,l_18 = NULL,m_18 = NULL;
                        ATerm x_0 (ATerm t)
                        {
                          ATerm g_8 = t;
                          if(PushChoice()==0)
                            {
                              ATerm h_8 = t;
                              if(PushChoice()==0)
                                {
                                  t = Nil_0(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = h_8;
                                  t = H_2(t, Nil_0, Nil_0);
                                }
                              PopChoice();
                              _fail(t);
                            }
                          else
                            t = g_8;
                          return(t);
                        }
                        t = filter_1(t, x_0);
                        n_17 = t;
                        t = (ATerm) ATmakeAppl(sym_Pair_2, not_null(n_17), not_null(e_17));
                        {
                          ATerm y_0 (ATerm t)
                          {
                            ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
                            p_17 = t;
                            x_14 :
                            if(match_cons(p_17, sym_Pair_2))
                              {
                                q_17 = ATgetArgument(p_17, 0);
                                r_17 = ATgetArgument(p_17, 1);
                                {
                                  ATerm u_17 = NULL,v_17 = NULL,b_18 = NULL;
                                  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_17), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = Abox_2_text_0(t);
                                  w_17 = t;
                                  t_14 :
                                  if(match_cons(w_17, sym_TCons_2))
                                    {
                                      x_17 = ATgetArgument(w_17, 0);
                                      y_17 = ATgetArgument(w_17, 1);
                                      u_14 :
                                      if(match_cons(y_17, sym_TCons_2))
                                        {
                                          z_17 = ATgetArgument(y_17, 0);
                                          a_18 = ATgetArgument(y_17, 1);
                                          v_14 :
                                          if(match_cons(a_18, sym_TNil_0))
                                            {
                                              if(u_17 != NULL && u_17 != x_17)
                                                _fail(x_17);
                                              else
                                                u_17 = x_17;
                                              if(v_17 != NULL && v_17 != z_17)
                                                _fail(z_17);
                                              else
                                                v_17 = z_17;
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_17), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = add_0(t);
                                  b_18 = t;
                                  t = (ATerm) ATmakeAppl(sym_Pair_2, not_null(u_17), not_null(b_18));
                                }
                              }
                            else
                              _fail(t);
                            return(t);
                          }
                          t = thread_map_1(t, y_0);
                          d_18 = t;
                          b_15 :
                          if(match_cons(d_18, sym_Pair_2))
                            {
                              l_18 = ATgetArgument(d_18, 0);
                              m_18 = ATgetArgument(d_18, 1);
                              {
                                ATerm p_18 = NULL;
                                t = not_null(l_18);
                                {
                                  ATerm z_0 (ATerm t)
                                  {
                                    t = not_null(j_17);
                                    return(t);
                                  }
                                  t = separate_by_1(t, z_0);
                                  p_18 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  {
                                    ATerm a_1 (ATerm t)
                                    {
                                      ATerm b_1 (ATerm t)
                                      {
                                        ATerm i_8 = t;
                                        if(PushChoice()==0)
                                          {
                                            t = Nil_0(t);
                                            PopChoice();
                                            _fail(t);
                                          }
                                        else
                                          t = i_8;
                                        return(t);
                                      }
                                      ATerm d_1 (ATerm t)
                                      {
                                        ATerm f_1 (ATerm t)
                                        {
                                          ATerm r_18 = NULL;
                                          r_18 = t;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_17), (ATerm) ATmakeAppl(sym_TNil_0)));
                                          t = subt_0(t);
                                          return(t);
                                        }
                                        t = TCons_2(t, f_1, TNil_0);
                                        return(t);
                                      }
                                      t = TCons_2(t, b_1, d_1);
                                      return(t);
                                    }
                                    t = try_1(t, a_1);
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
          if(match_cons(c_17, sym_V_2))
            {
              z_16 = ATgetArgument(c_17, 0);
              a_17 = ATgetArgument(c_17, 1);
              u_15 :
              if(match_cons(d_17, sym_TCons_2))
                {
                  e_17 = ATgetArgument(d_17, 0);
                  f_17 = ATgetArgument(d_17, 1);
                  v_15 :
                  if(match_cons(f_17, sym_TNil_0))
                    {
                      ATerm w_18 = NULL;
                      t = not_null(z_16);
                      {
                        ATerm y_18 = NULL;
                        t = Vspace_0(t);
                        w_18 = t;
                        t = not_null(z_16);
                        {
                          ATerm a_19 = NULL;
                          t = Ispace_0(t);
                          y_18 = t;
                          {
                            ATerm c_19 = NULL;
                            t = string_length_0(t);
                            a_19 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_17), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(32), (ATerm) ATmakeAppl(sym_TNil_0)));
                            {
                              ATerm e_19 = NULL;
                              t = copy_char_0(t);
                              c_19 = t;
                              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_18), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_18), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_19), (ATerm) ATmakeAppl(sym_Nil_0))));
                              {
                                ATerm g_19 = NULL;
                                t = concat_strings_0(t);
                                e_19 = t;
                                t = not_null(a_17);
                                {
                                  ATerm o_1 (ATerm t)
                                  {
                                    ATerm j_8 = t;
                                    if(PushChoice()==0)
                                      {
                                        t = Nil_0(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      t = j_8;
                                    return(t);
                                  }
                                  t = filter_1(t, o_1);
                                  {
                                    ATerm k_8 = t;
                                    if(PushChoice()==0)
                                      {
                                        t = Nil_0(t);
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_17), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        PopChoice();
                                      }
                                    else
                                      {
                                        t = k_8;
                                        {
                                          ATerm p_1 (ATerm t)
                                          {
                                            ATerm h_19 = NULL;
                                            h_19 = t;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_17), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            t = Abox_2_text_0(t);
                                            return(t);
                                          }
                                          ATerm q_1 (ATerm t)
                                          {
                                            ATerm z_1 (ATerm t)
                                            {
                                              ATerm j_19 = NULL;
                                              ATerm l_19 = NULL;
                                              j_19 = t;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              t = add_0(t);
                                              l_19 = t;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              t = Abox_2_text_0(t);
                                              return(t);
                                            }
                                            t = map_1(t, z_1);
                                            return(t);
                                          }
                                          t = Cons_2(t, p_1, q_1);
                                          {
                                            ATerm a_2 (ATerm t)
                                            {
                                              ATerm b_2 (ATerm t)
                                              {
                                                ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
                                                n_19 = t;
                                                l_15 :
                                                if(match_cons(n_19, sym_TCons_2))
                                                  {
                                                    o_19 = ATgetArgument(n_19, 0);
                                                    p_19 = ATgetArgument(n_19, 1);
                                                    m_15 :
                                                    if(match_cons(p_19, sym_TCons_2))
                                                      {
                                                        q_19 = ATgetArgument(p_19, 0);
                                                        r_19 = ATgetArgument(p_19, 1);
                                                        n_15 :
                                                        if(match_cons(r_19, sym_TNil_0))
                                                          {
                                                            if(g_19 != NULL && g_19 != q_19)
                                                              _fail(q_19);
                                                            else
                                                              g_19 = q_19;
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
                                              t = Cons_2(t, b_2, Nil_0);
                                              return(t);
                                            }
                                            t = at_last_1(t, a_2);
                                            t = map_1(t, Fst_0);
                                            {
                                              ATerm c_2 (ATerm t)
                                              {
                                                t = not_null(e_19);
                                                return(t);
                                              }
                                              t = separate_by_1(t, c_2);
                                              {
                                                ATerm d_2 (ATerm t)
                                                {
                                                  t = not_null(g_19);
                                                  return(t);
                                                }
                                                t = split_2(t, _id, d_2);
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
              if(match_cons(c_17, sym_S_1))
                {
                  z_16 = ATgetArgument(c_17, 0);
                  w_15 :
                  if(match_cons(d_17, sym_TCons_2))
                    {
                      e_17 = ATgetArgument(d_17, 0);
                      f_17 = ATgetArgument(d_17, 1);
                      x_15 :
                      if(match_cons(f_17, sym_TNil_0))
                        {
                          ATerm u_19 = NULL;
                          t = not_null(z_16);
                          {
                            ATerm w_19 = NULL;
                            t = string_length_0(t);
                            u_19 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = add_0(t);
                            w_19 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_19), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                  if(match_cons(c_17, sym_C_2))
                    {
                      z_16 = ATgetArgument(c_17, 0);
                      a_17 = ATgetArgument(c_17, 1);
                      y_15 :
                      if(match_cons(a_17, sym_Cons_2))
                        {
                          v_16 = ATgetArgument(a_17, 0);
                          x_16 = ATgetArgument(a_17, 1);
                          z_15 :
                          if(match_cons(v_16, sym_S_1))
                            {
                              w_16 = ATgetArgument(v_16, 0);
                              a_16 :
                              if(match_cons(x_16, sym_Nil_0))
                                {
                                  b_16 :
                                  if(match_cons(d_17, sym_TCons_2))
                                    {
                                      e_17 = ATgetArgument(d_17, 0);
                                      f_17 = ATgetArgument(d_17, 1);
                                      c_16 :
                                      if(match_cons(f_17, sym_TNil_0))
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_17), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                      if(match_cons(c_17, sym_FBOX_2))
                        {
                          z_16 = ATgetArgument(c_17, 0);
                          a_17 = ATgetArgument(c_17, 1);
                          f_16 :
                          if(match_cons(d_17, sym_TCons_2))
                            {
                              e_17 = ATgetArgument(d_17, 0);
                              f_17 = ATgetArgument(d_17, 1);
                              g_16 :
                              if(match_cons(f_17, sym_TNil_0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_17), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                          if(match_cons(c_17, sym_HV_2))
                            {
                              z_16 = ATgetArgument(c_17, 0);
                              a_17 = ATgetArgument(c_17, 1);
                              h_16 :
                              if(match_cons(d_17, sym_TCons_2))
                                {
                                  e_17 = ATgetArgument(d_17, 0);
                                  f_17 = ATgetArgument(d_17, 1);
                                  i_16 :
                                  if(match_cons(f_17, sym_TNil_0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_H_2, not_null(z_16), not_null(a_17)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_17), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                              if(match_cons(c_17, sym_R_2))
                                {
                                  z_16 = ATgetArgument(c_17, 0);
                                  a_17 = ATgetArgument(c_17, 1);
                                  j_16 :
                                  if(match_cons(d_17, sym_TCons_2))
                                    {
                                      e_17 = ATgetArgument(d_17, 0);
                                      f_17 = ATgetArgument(d_17, 1);
                                      k_16 :
                                      if(match_cons(f_17, sym_TNil_0))
                                        {
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_H_2, not_null(z_16), not_null(a_17)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_17), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                                  if(match_cons(c_17, sym_A_3))
                                    {
                                      z_16 = ATgetArgument(c_17, 0);
                                      a_17 = ATgetArgument(c_17, 1);
                                      y_16 = ATgetArgument(c_17, 2);
                                      l_16 :
                                      if(match_cons(d_17, sym_TCons_2))
                                        {
                                          e_17 = ATgetArgument(d_17, 0);
                                          f_17 = ATgetArgument(d_17, 1);
                                          m_16 :
                                          if(match_cons(f_17, sym_TNil_0))
                                            {
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_V_2, not_null(a_17), not_null(y_16)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_17), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                                      if(match_cons(c_17, sym_ALT_2))
                                        {
                                          z_16 = ATgetArgument(c_17, 0);
                                          a_17 = ATgetArgument(c_17, 1);
                                          n_16 :
                                          if(match_cons(d_17, sym_TCons_2))
                                            {
                                              e_17 = ATgetArgument(d_17, 0);
                                              f_17 = ATgetArgument(d_17, 1);
                                              o_16 :
                                              if(match_cons(f_17, sym_TNil_0))
                                                {
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_17), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                                          if(match_cons(c_17, sym_Cons_2))
                                            {
                                              z_16 = ATgetArgument(c_17, 0);
                                              a_17 = ATgetArgument(c_17, 1);
                                              p_16 :
                                              if(match_cons(a_17, sym_Nil_0))
                                                {
                                                  q_16 :
                                                  if(match_cons(d_17, sym_TCons_2))
                                                    {
                                                      e_17 = ATgetArgument(d_17, 0);
                                                      f_17 = ATgetArgument(d_17, 1);
                                                      r_16 :
                                                      if(match_cons(f_17, sym_TNil_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_17), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                                              if(match_cons(c_17, sym_Nil_0))
                                                {
                                                  t_16 :
                                                  if(match_cons(d_17, sym_TCons_2))
                                                    {
                                                      e_17 = ATgetArgument(d_17, 0);
                                                      f_17 = ATgetArgument(d_17, 1);
                                                      u_16 :
                                                      if(match_cons(f_17, sym_TNil_0))
                                                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_17), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm e_2 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  t = split_2(t, _id, e_2);
  t = Abox_2_text_0(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm n_29 (ATerm), ATerm o_29 (ATerm))
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL;
  a_22 = t;
  z_21 :
  if(match_cons(a_22, sym_TCons_2))
    {
      b_22 = ATgetArgument(a_22, 0);
      c_22 = ATgetArgument(a_22, 1);
      {
        ATerm f_22 = NULL;
        t = not_null(b_22);
        {
          ATerm h_22 = NULL;
          t = n_29(t);
          f_22 = t;
          t = not_null(c_22);
          t = o_29(t);
          h_22 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_22), not_null(h_22));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm n_22 = NULL;
  n_22 = t;
  t = SSL_ReadFromFile(not_null(n_22));
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm t_22 = NULL;
  ATerm l_8;
  l_8 = t;
  {
    ATerm m_8 = t;
    if(PushChoice()==0)
      {
        ATerm g_2 (ATerm t)
        {
          ATerm u_22 = NULL,v_22 = NULL;
          u_22 = t;
          r_22 :
          if(match_cons(u_22, sym_Input_1))
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
        t = option_defined_1(t, g_2);
        PopChoice();
      }
    else
      {
        t = m_8;
        {
          ATerm w_22 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          w_22 = t;
          if(t_22 != NULL && t_22 != w_22)
            _fail(w_22);
          else
            t_22 = w_22;
        }
      }
  }
  t = l_8;
  {
    ATerm i_2 (ATerm t)
    {
      t = not_null(t_22);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, i_2);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm m_34 (ATerm))
{
  ATerm o_8;
  o_8 = t;
  {
    ATerm k_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm l_2 (ATerm t)
    {
      ATerm b_23 = NULL;
      ATerm d_23 = NULL;
      b_23 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = m_34(t);
      d_23 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_23), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_23), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, k_2, l_2);
    t = printnl_0(t);
  }
  t = o_8;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm t_34 (ATerm))
{
  ATerm p_8;
  p_8 = t;
  t = t_34(t);
  {
    ATerm m_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
      return(t);
    }
    t = debug_1(t, m_2);
  }
  t = p_8;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL;
  ATerm q_8 = t;
  if(PushChoice()==0)
    {
      ATerm o_23 = NULL,p_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL;
      o_23 = t;
      i_23 :
      if(match_cons(o_23, sym_TCons_2))
        {
          p_23 = ATgetArgument(o_23, 0);
          s_23 = ATgetArgument(o_23, 1);
          j_23 :
          if(match_cons(s_23, sym_TCons_2))
            {
              t_23 = ATgetArgument(s_23, 0);
              u_23 = ATgetArgument(s_23, 1);
              k_23 :
              if(match_cons(u_23, sym_TNil_0))
                {
                  if(n_23 != NULL && n_23 != p_23)
                    _fail(p_23);
                  else
                    n_23 = p_23;
                  if(m_23 != NULL && m_23 != t_23)
                    _fail(t_23);
                  else
                    m_23 = t_23;
                  t = SSL_open_file(not_null(n_23), not_null(m_23));
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
      t = q_8;
      {
        ATerm v_23 = NULL;
        ATerm n_2 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
          return(t);
        }
        t = obsolete_1(t, n_2);
        v_23 = t;
        if(n_23 != NULL && n_23 != v_23)
          _fail(v_23);
        else
          n_23 = v_23;
        t = SSL_open_file(not_null(n_23), (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue)));
      }
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm a_43 (ATerm))
{
  ATerm z_23 (ATerm t)
  {
    ATerm r_8 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, a_43, _id);
        PopChoice();
      }
    else
      {
        t = r_8;
        t = Cons_2(t, _id, z_23);
      }
    return(t);
  }
  t = z_23(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm g_33 (ATerm))
{
  t = fetch_1(t, g_33);
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm b_24 = NULL;
  b_24 = t;
  t = SSL_exit(not_null(b_24));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL;
  i_24 = t;
  f_24 :
  if(match_cons(i_24, sym_TCons_2))
    {
      j_24 = ATgetArgument(i_24, 0);
      k_24 = ATgetArgument(i_24, 1);
      g_24 :
      if(match_cons(k_24, sym_TCons_2))
        {
          l_24 = ATgetArgument(k_24, 0);
          m_24 = ATgetArgument(k_24, 1);
          h_24 :
          if(match_cons(m_24, sym_TNil_0))
            {
              ATerm s_8;
              s_8 = t;
              t = SSL_printnl(not_null(j_24), not_null(l_24));
              t = s_8;
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
  ATerm w_24 = NULL;
  ATerm t_8;
  t_8 = t;
  {
    ATerm o_2 (ATerm t)
    {
      ATerm x_24 = NULL,y_24 = NULL;
      x_24 = t;
      v_24 :
      if(match_cons(x_24, sym_Program_1))
        {
          y_24 = ATgetArgument(x_24, 0);
          if(w_24 != NULL && w_24 != y_24)
            _fail(y_24);
          else
            w_24 = y_24;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, o_2);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_24), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-i abox] [-o html] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
  }
  t = t_8;
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
ATerm Undefined_1 (ATerm t, ATerm j_27 (ATerm))
{
  ATerm f_25 = NULL,i_27 = NULL;
  f_25 = t;
  e_25 :
  if(match_cons(f_25, sym_Undefined_1))
    {
      i_27 = ATgetArgument(f_25, 0);
      {
        ATerm l_27 = NULL;
        t = not_null(i_27);
        t = j_27(t);
        l_27 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(l_27));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm s_27 = NULL;
  s_27 = t;
  r_27 :
  if(!(match_cons(s_27, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm b_34 (ATerm))
{
  ATerm q_2 (ATerm t)
  {
    ATerm u_8 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = u_8;
        {
          ATerm x_8 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = x_8;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, q_2);
  t = b_34(t);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm z_32 (ATerm), ATerm a_33 (ATerm))
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL;
  y_27 = t;
  x_27 :
  if(match_cons(y_27, sym_Cons_2))
    {
      z_27 = ATgetArgument(y_27, 0);
      a_28 = ATgetArgument(y_27, 1);
      {
        ATerm d_28 = NULL;
        t = not_null(z_27);
        t = z_32(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = a_33(t);
        d_28 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_28), not_null(a_28));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm b_33 (ATerm), ATerm c_33 (ATerm))
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL;
  l_28 = t;
  j_28 :
  if(match_cons(l_28, sym_Cons_2))
    {
      m_28 = ATgetArgument(l_28, 0);
      n_28 = ATgetArgument(l_28, 1);
      k_28 :
      if(match_cons(n_28, sym_Cons_2))
        {
          o_28 = ATgetArgument(n_28, 0);
          p_28 = ATgetArgument(n_28, 1);
          {
            ATerm t_28 = NULL;
            t = not_null(m_28);
            t = b_33(t);
            t = not_null(o_28);
            t = c_33(t);
            t_28 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_28), not_null(p_28));
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
  ATerm y_8 = t;
  if(PushChoice()==0)
    {
      ATerm r_2 (ATerm t)
      {
        ATerm v_29 = NULL;
        v_29 = t;
        x_28 :
        if(!(match_string(v_29, "-S")))
          _fail(t);
        return(t);
      }
      ATerm v_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, r_2, v_2);
      PopChoice();
    }
  else
    {
      t = y_8;
      {
        ATerm b_9 = t;
        if(PushChoice()==0)
          {
            ATerm e_3 (ATerm t)
            {
              ATerm w_29 = NULL;
              w_29 = t;
              y_28 :
              if(!(match_string(w_29, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm f_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, e_3, f_3);
            PopChoice();
          }
        else
          {
            t = b_9;
            {
              ATerm c_9 = t;
              if(PushChoice()==0)
                {
                  ATerm g_3 (ATerm t)
                  {
                    ATerm x_29 = NULL;
                    x_29 = t;
                    z_28 :
                    if(!(match_string(x_29, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm h_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, g_3, h_3);
                  PopChoice();
                }
              else
                {
                  t = c_9;
                  {
                    ATerm e_9 = t;
                    if(PushChoice()==0)
                      {
                        ATerm j_3 (ATerm t)
                        {
                          ATerm y_29 = NULL;
                          y_29 = t;
                          a_29 :
                          if(!(match_string(y_29, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm l_3 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, j_3, l_3);
                        PopChoice();
                      }
                    else
                      {
                        t = e_9;
                        {
                          ATerm f_9 = t;
                          if(PushChoice()==0)
                            {
                              ATerm m_3 (ATerm t)
                              {
                                ATerm z_29 = NULL;
                                z_29 = t;
                                b_29 :
                                if(!(match_string(z_29, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm n_3 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, m_3, n_3);
                              PopChoice();
                            }
                          else
                            {
                              t = f_9;
                              {
                                ATerm g_9 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm s_3 (ATerm t)
                                    {
                                      ATerm a_30 = NULL;
                                      a_30 = t;
                                      c_29 :
                                      if(!(match_string(a_30, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm t_3 (ATerm t)
                                    {
                                      ATerm b_30 = NULL;
                                      b_30 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(b_30));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, s_3, t_3);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = g_9;
                                    {
                                      ATerm h_9 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm v_3 (ATerm t)
                                          {
                                            ATerm d_30 = NULL;
                                            d_30 = t;
                                            e_29 :
                                            if(!(match_string(d_30, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm w_3 (ATerm t)
                                          {
                                            ATerm e_30 = NULL;
                                            e_30 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_30));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, v_3, w_3);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = h_9;
                                          {
                                            ATerm i_9 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm x_3 (ATerm t)
                                                {
                                                  ATerm g_30 = NULL;
                                                  g_30 = t;
                                                  g_29 :
                                                  if(!(match_string(g_30, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm z_3 (ATerm t)
                                                {
                                                  ATerm h_30 = NULL;
                                                  h_30 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_30));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, x_3, z_3);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = i_9;
                                                {
                                                  ATerm j_9 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm e_4 (ATerm t)
                                                      {
                                                        ATerm j_30 = NULL;
                                                        j_30 = t;
                                                        i_29 :
                                                        if(!(match_string(j_30, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm f_4 (ATerm t)
                                                      {
                                                        ATerm k_30 = NULL;
                                                        k_30 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(k_30));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, e_4, f_4);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = j_9;
                                                      {
                                                        ATerm k_9 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm g_4 (ATerm t)
                                                            {
                                                              ATerm m_30 = NULL;
                                                              m_30 = t;
                                                              k_29 :
                                                              if(!(match_string(m_30, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm j_4 (ATerm t)
                                                            {
                                                              ATerm n_30 = NULL;
                                                              n_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_30));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, g_4, j_4);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = k_9;
                                                            {
                                                              ATerm m_9 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm o_4 (ATerm t)
                                                                  {
                                                                    ATerm p_30 = NULL;
                                                                    p_30 = t;
                                                                    m_29 :
                                                                    if(!(match_string(p_30, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm p_4 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, o_4, p_4);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = m_9;
                                                                  {
                                                                    ATerm o_9 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm q_4 (ATerm t)
                                                                        {
                                                                          ATerm q_30 = NULL;
                                                                          q_30 = t;
                                                                          p_29 :
                                                                          if(!(match_string(q_30, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm t_4 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, q_4, t_4);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = o_9;
                                                                        {
                                                                          ATerm p_9 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm y_4 (ATerm t)
                                                                              {
                                                                                ATerm r_30 = NULL;
                                                                                r_30 = t;
                                                                                q_29 :
                                                                                if(!(match_string(r_30, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm z_4 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, y_4, z_4);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = p_9;
                                                                              {
                                                                                ATerm q_9 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm b_5 (ATerm t)
                                                                                    {
                                                                                      ATerm s_30 = NULL;
                                                                                      s_30 = t;
                                                                                      t_29 :
                                                                                      if(!(match_string(s_30, "-h")))
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
                                                                                    t = q_9;
                                                                                    {
                                                                                      ATerm e_5 (ATerm t)
                                                                                      {
                                                                                        ATerm t_30 = NULL;
                                                                                        t_30 = t;
                                                                                        u_29 :
                                                                                        if(!(match_string(t_30, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm f_5 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, e_5, f_5);
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
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL;
  b_31 = t;
  a_31 :
  if(match_cons(b_31, sym_Cons_2))
    {
      c_31 = ATgetArgument(b_31, 0);
      d_31 = ATgetArgument(b_31, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(c_31)), not_null(d_31));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_29 (ATerm), ATerm s_29 (ATerm))
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
  l_31 = t;
  k_31 :
  if(match_cons(l_31, sym_Cons_2))
    {
      m_31 = ATgetArgument(l_31, 0);
      n_31 = ATgetArgument(l_31, 1);
      {
        ATerm q_31 = NULL;
        t = not_null(m_31);
        {
          ATerm s_31 = NULL;
          t = r_29(t);
          q_31 = t;
          t = not_null(n_31);
          t = s_29(t);
          s_31 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_31), not_null(s_31));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm y_31 = NULL;
  y_31 = t;
  x_31 :
  if(!(match_cons(y_31, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm x_32 (ATerm))
{
  ATerm g_5 (ATerm t)
  {
    ATerm a_32 = NULL;
    a_32 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_32));
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    ATerm s_9 = t;
    if(PushChoice()==0)
      {
        ATerm v_9 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = v_9;
            t = x_32(t);
            t = Cons_2(t, _id, i_5);
          }
        PopChoice();
      }
    else
      {
        t = s_9;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, g_5, i_5);
  return(t);
}
ATerm Abox2text_0 (ATerm t)
{
  ATerm k_32 = NULL;
  ATerm m_32 = NULL,n_32 = NULL;
  t = parse_options_1(t, io_options_0);
  k_32 = t;
  {
    ATerm x_9 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, usage_0);
        PopChoice();
      }
    else
      {
        t = x_9;
        {
          ATerm y_9 = t;
          if(PushChoice()==0)
            {
              ATerm z_9;
              z_9 = t;
              {
                ATerm a_10 = t;
                if(PushChoice()==0)
                  {
                    ATerm j_5 (ATerm t)
                    {
                      ATerm o_32 = NULL,p_32 = NULL;
                      o_32 = t;
                      g_32 :
                      if(match_cons(o_32, sym_Output_1))
                        {
                          p_32 = ATgetArgument(o_32, 0);
                          if(n_32 != NULL && n_32 != p_32)
                            _fail(p_32);
                          else
                            n_32 = p_32;
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = option_defined_1(t, j_5);
                    t = not_null(n_32);
                    t = open_file_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = a_10;
                    {
                      ATerm q_32 = NULL;
                      t = (ATerm) ATmakeAppl(sym_stdout_0);
                      q_32 = t;
                      if(n_32 != NULL && n_32 != q_32)
                        _fail(q_32);
                      else
                        n_32 = q_32;
                    }
                  }
              }
              t = z_9;
              t = input_file_0(t);
              {
                ATerm k_5 (ATerm t)
                {
                  ATerm t_5 (ATerm t)
                  {
                    ATerm r_32 = NULL;
                    t = abox2text_0(t);
                    r_32 = t;
                    if(m_32 != NULL && m_32 != r_32)
                      _fail(r_32);
                    else
                      m_32 = r_32;
                    return(t);
                  }
                  t = TCons_2(t, t_5, TNil_0);
                  return(t);
                }
                t = TCons_2(t, _id, k_5);
                t = not_null(m_32);
                {
                  ATerm u_5 (ATerm t)
                  {
                    ATerm v_5 (ATerm t)
                    {
                      t = is_string_0(t);
                      {
                        ATerm b_10;
                        b_10 = t;
                        {
                          ATerm w_5 (ATerm t)
                          {
                            t = not_null(n_32);
                            return(t);
                          }
                          ATerm g_6 (ATerm t)
                          {
                            ATerm s_32 = NULL;
                            s_32 = t;
                            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_32), (ATerm) ATmakeAppl(sym_Nil_0));
                            return(t);
                          }
                          t = split_2(t, w_5, g_6);
                          t = print_0(t);
                        }
                        t = b_10;
                      }
                      return(t);
                    }
                    t = try_1(t, v_5);
                    return(t);
                  }
                  t = topdown_1(t, u_5);
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_32), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = print_0(t);
                  t = report_success_0(t);
                }
              }
              PopChoice();
            }
          else
            {
              t = y_9;
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
