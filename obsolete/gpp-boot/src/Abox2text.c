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
ATerm split_2 (ATerm, ATerm n_35 (ATerm), ATerm o_35 (ATerm));
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm l_48 (ATerm));
ATerm topdown_1 (ATerm, ATerm n_44 (ATerm));
ATerm TNil_0 (ATerm);
ATerm add_0 (ATerm);
ATerm length_0 (ATerm);
ATerm string_length_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm j_43 (ATerm));
ATerm separate_by_1 (ATerm, ATerm k_43 (ATerm));
ATerm Fst_0 (ATerm);
ATerm map_1 (ATerm, ATerm x_41 (ATerm));
ATerm at_last_1 (ATerm, ATerm w_42 (ATerm));
ATerm Tl_0 (ATerm);
ATerm filter_1 (ATerm, ATerm f_36 (ATerm));
ATerm at_end_1 (ATerm, ATerm m_42 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm f_48 (ATerm), ATerm g_48 (ATerm));
ATerm for_3 (ATerm, ATerm i_48 (ATerm), ATerm j_48 (ATerm), ATerm k_48 (ATerm));
ATerm copy_0 (ATerm);
ATerm copy_char_0 (ATerm);
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm Vspace_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm thread_map_1 (ATerm, ATerm u_37 (ATerm));
ATerm H_2 (ATerm, ATerm e_27 (ATerm), ATerm f_27 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm a_27 (ATerm), ATerm b_27 (ATerm));
ATerm Hspace_0 (ATerm);
ATerm Abox_2_text_0 (ATerm);
ATerm abox2text_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm y_28 (ATerm), ATerm z_28 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm input_file_0 (ATerm);
ATerm open_file_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm g_42 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_32 (ATerm));
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm u_26 (ATerm));
ATerm Help_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm m_33 (ATerm));
ATerm Option_2 (ATerm, ATerm k_32 (ATerm), ATerm l_32 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm m_32 (ATerm), ATerm n_32 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm c_29 (ATerm), ATerm d_29 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm i_32 (ATerm));
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
  ATerm l_1 = NULL,m_1 = NULL;
  ATerm v_3 = t;
  if(PushChoice()==0)
    {
      ATerm a_0 (ATerm t)
      {
        ATerm o_4 = t;
        if(PushChoice()==0)
          {
            ATerm c_0 (ATerm t)
            {
              ATerm o_1 = NULL;
              o_1 = t;
              c_1 :
              if(!(match_cons(o_1, sym_Silent_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, c_0);
            PopChoice();
            _fail(t);
          }
        else
          t = o_4;
        return(t);
      }
      ATerm b_0 (ATerm t)
      {
        ATerm e_0 (ATerm t)
        {
          ATerm p_1 = NULL;
          p_1 = t;
          d_1 :
          if(!(match_cons(p_1, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, _id, e_0);
        return(t);
      }
      t = TCons_2(t, a_0, b_0);
      {
        ATerm f_0 (ATerm t)
        {
          ATerm i_0 (ATerm t)
          {
            ATerm q_1 = NULL,r_1 = NULL;
            q_1 = t;
            f_1 :
            if(match_cons(q_1, sym_Runtime_1))
              {
                r_1 = ATgetArgument(q_1, 0);
                if(m_1 != NULL && m_1 != r_1)
                  _fail(r_1);
                else
                  m_1 = r_1;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, i_0);
          return(t);
        }
        ATerm h_0 (ATerm t)
        {
          ATerm j_0 (ATerm t)
          {
            ATerm s_1 = NULL;
            s_1 = t;
            g_1 :
            if(!(match_cons(s_1, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, _id, j_0);
          return(t);
        }
        t = TCons_2(t, f_0, h_0);
        {
          ATerm k_0 (ATerm t)
          {
            ATerm m_0 (ATerm t)
            {
              ATerm t_1 = NULL,u_1 = NULL;
              t_1 = t;
              j_1 :
              if(match_cons(t_1, sym_Program_1))
                {
                  u_1 = ATgetArgument(t_1, 0);
                  if(l_1 != NULL && l_1 != u_1)
                    _fail(u_1);
                  else
                    l_1 = u_1;
                }
              else
                _fail(t);
              return(t);
            }
            t = fetch_1(t, m_0);
            return(t);
          }
          ATerm l_0 (ATerm t)
          {
            ATerm n_0 (ATerm t)
            {
              ATerm v_1 = NULL;
              v_1 = t;
              k_1 :
              if(!(match_cons(v_1, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, _id, n_0);
            return(t);
          }
          t = TCons_2(t, k_0, l_0);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_1), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_1), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
        }
      }
      PopChoice();
    }
  else
    t = v_3;
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
              ATerm a_6;
              a_6 = t;
              t = SSL_print(not_null(d_2), not_null(f_2));
              t = a_6;
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
ATerm split_2 (ATerm t, ATerm n_35 (ATerm), ATerm o_35 (ATerm))
{
  ATerm n_2 = NULL;
  ATerm p_2 = NULL;
  n_2 = t;
  {
    ATerm r_2 = NULL;
    t = n_35(t);
    p_2 = t;
    t = not_null(n_2);
    t = o_35(t);
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
ATerm try_1 (ATerm t, ATerm l_48 (ATerm))
{
  ATerm y_6 = t;
  if(PushChoice()==0)
    {
      t = l_48(t);
      PopChoice();
    }
  else
    t = y_6;
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm n_44 (ATerm))
{
  ATerm a_3 (ATerm t)
  {
    t = n_44(t);
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
ATerm add_0 (ATerm t)
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
              ATerm h_7 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(i_3), not_null(k_3));
                  PopChoice();
                }
              else
                {
                  t = h_7;
                  t = SSL_addr(not_null(i_3), not_null(k_3));
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
  ATerm j_7 = t;
  if(PushChoice()==0)
    {
      ATerm s_3 = NULL;
      s_3 = t;
      q_3 :
      if(match_cons(s_3, sym_Nil_0))
        t = (ATerm) ATmakeInt(0);
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = j_7;
      {
        ATerm t_3 = NULL;
        t = Tl_0(t);
        t = length_0(t);
        t_3 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_3), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm Sep_1 (ATerm t, ATerm j_43 (ATerm))
{
  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL;
  b_4 = t;
  a_4 :
  if(match_cons(b_4, sym_Cons_2))
    {
      c_4 = ATgetArgument(b_4, 0);
      d_4 = ATgetArgument(b_4, 1);
      {
        ATerm g_4 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = j_43(t);
        g_4 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_4), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_4), not_null(d_4)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm k_43 (ATerm))
{
  ATerm n_7 = t;
  if(PushChoice()==0)
    {
      ATerm m_4 = NULL;
      m_4 = t;
      k_4 :
      if(!(match_cons(m_4, sym_Nil_0)))
        _fail(t);
      PopChoice();
    }
  else
    {
      t = n_7;
      {
        ATerm o_0 (ATerm t)
        {
          ATerm r_7 = t;
          if(PushChoice()==0)
            {
              ATerm n_4 = NULL;
              n_4 = t;
              l_4 :
              if(!(match_cons(n_4, sym_Nil_0)))
                _fail(t);
              PopChoice();
            }
          else
            {
              t = r_7;
              t = Cons_2(t, _id, o_0);
              t = Sep_1(t, k_43);
            }
          return(t);
        }
        t = Cons_2(t, _id, o_0);
      }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
  r_4 = t;
  q_4 :
  if(match_cons(r_4, sym_TCons_2))
    {
      s_4 = ATgetArgument(r_4, 0);
      t_4 = ATgetArgument(r_4, 1);
      t = not_null(s_4);
    }
  else
    _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_41 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    ATerm s_7 = t;
    if(PushChoice()==0)
      {
        ATerm y_4 = NULL;
        y_4 = t;
        x_4 :
        if(!(match_cons(y_4, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = s_7;
        t = Cons_2(t, x_41, z_4);
      }
    return(t);
  }
  t = z_4(t);
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm w_42 (ATerm))
{
  ATerm c_5 (ATerm t)
  {
    ATerm t_7 = t;
    if(PushChoice()==0)
      {
        ATerm p_0 (ATerm t)
        {
          ATerm b_5 = NULL;
          b_5 = t;
          a_5 :
          if(!(match_cons(b_5, sym_Nil_0)))
            _fail(t);
          return(t);
        }
        t = Cons_2(t, _id, p_0);
        t = w_42(t);
        PopChoice();
      }
    else
      {
        t = t_7;
        t = Cons_2(t, _id, c_5);
      }
    return(t);
  }
  t = c_5(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL;
  f_5 = t;
  e_5 :
  if(match_cons(f_5, sym_Cons_2))
    {
      g_5 = ATgetArgument(f_5, 0);
      h_5 = ATgetArgument(f_5, 1);
      t = not_null(h_5);
    }
  else
    _fail(t);
  return(t);
}
ATerm filter_1 (ATerm t, ATerm f_36 (ATerm))
{
  ATerm n_5 (ATerm t)
  {
    ATerm u_7 = t;
    if(PushChoice()==0)
      {
        ATerm m_5 = NULL;
        m_5 = t;
        l_5 :
        if(!(match_cons(m_5, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = u_7;
        {
          ATerm v_7 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, f_36, n_5);
              PopChoice();
            }
          else
            {
              t = v_7;
              t = Tl_0(t);
              t = n_5(t);
            }
        }
      }
    return(t);
  }
  t = n_5(t);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_42 (ATerm))
{
  ATerm r_5 (ATerm t)
  {
    ATerm w_7 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, r_5);
        PopChoice();
      }
    else
      {
        t = w_7;
        {
          ATerm q_5 = NULL;
          q_5 = t;
          p_5 :
          if(match_cons(q_5, sym_Nil_0))
            t = m_42(t);
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = r_5(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
  v_5 = t;
  u_5 :
  if(!(match_cons(v_5, sym_Nil_0)))
    {
      if(match_cons(v_5, sym_Cons_2))
        {
          w_5 = ATgetArgument(v_5, 0);
          x_5 = ATgetArgument(v_5, 1);
          t = not_null(w_5);
          {
            ATerm q_0 (ATerm t)
            {
              t = not_null(x_5);
              t = concat_0(t);
              return(t);
            }
            t = at_end_1(t, q_0);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm d_6 = NULL;
  d_6 = t;
  t = SSL_explode_string(not_null(d_6));
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
  ATerm h_6 = NULL;
  h_6 = t;
  t = SSL_implode_string(not_null(h_6));
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL;
  o_6 = t;
  l_6 :
  if(match_cons(o_6, sym_TCons_2))
    {
      p_6 = ATgetArgument(o_6, 0);
      q_6 = ATgetArgument(o_6, 1);
      m_6 :
      if(match_cons(q_6, sym_TCons_2))
        {
          r_6 = ATgetArgument(q_6, 0);
          s_6 = ATgetArgument(q_6, 1);
          n_6 :
          if(match_cons(s_6, sym_TNil_0))
            {
              ATerm z_7;
              z_7 = t;
              {
                ATerm a_8 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(p_6), not_null(r_6));
                    PopChoice();
                  }
                else
                  {
                    t = a_8;
                    t = SSL_gtr(not_null(p_6), not_null(r_6));
                  }
              }
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
ATerm geq_0 (ATerm t)
{
  ATerm b_7 = NULL;
  ATerm b_8 = t;
  if(PushChoice()==0)
    {
      ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
      c_7 = t;
      x_6 :
      if(match_cons(c_7, sym_TCons_2))
        {
          d_7 = ATgetArgument(c_7, 0);
          e_7 = ATgetArgument(c_7, 1);
          z_6 :
          if(match_cons(e_7, sym_TCons_2))
            {
              f_7 = ATgetArgument(e_7, 0);
              g_7 = ATgetArgument(e_7, 1);
              a_7 :
              if(match_cons(g_7, sym_TNil_0))
                {
                  if(b_7 != NULL && b_7 != d_7)
                    _fail(d_7);
                  else
                    b_7 = d_7;
                  if(b_7 != NULL && b_7 != f_7)
                    _fail(f_7);
                  else
                    b_7 = f_7;
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
      t = b_8;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm f_48 (ATerm), ATerm g_48 (ATerm))
{
  ATerm i_7 (ATerm t)
  {
    ATerm c_8 = t;
    if(PushChoice()==0)
      {
        t = f_48(t);
        PopChoice();
      }
    else
      {
        t = c_8;
        t = g_48(t);
        t = i_7(t);
      }
    return(t);
  }
  t = i_7(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm i_48 (ATerm), ATerm j_48 (ATerm), ATerm k_48 (ATerm))
{
  t = i_48(t);
  t = while_not_2(t, j_48, k_48);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,t_8 = NULL;
    n_8 = t;
    k_7 :
    if(match_cons(n_8, sym_TCons_2))
      {
        o_8 = ATgetArgument(n_8, 0);
        p_8 = ATgetArgument(n_8, 1);
        l_7 :
        if(match_cons(p_8, sym_TCons_2))
          {
            q_8 = ATgetArgument(p_8, 0);
            t_8 = ATgetArgument(p_8, 1);
            m_7 :
            if(match_cons(t_8, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_8), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_8), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm s_0 (ATerm t)
  {
    ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,h_9 = NULL;
    w_8 = t;
    o_7 :
    if(match_cons(w_8, sym_TCons_2))
      {
        x_8 = ATgetArgument(w_8, 0);
        y_8 = ATgetArgument(w_8, 1);
        p_7 :
        if(match_int(x_8, 0))
          {
            q_7 :
            if(match_cons(y_8, sym_TCons_2))
              {
                d_9 = ATgetArgument(y_8, 0);
                e_9 = ATgetArgument(y_8, 1);
                x_7 :
                if(match_cons(e_9, sym_TCons_2))
                  {
                    f_9 = ATgetArgument(e_9, 0);
                    h_9 = ATgetArgument(e_9, 1);
                    y_7 :
                    if(match_cons(h_9, sym_TNil_0))
                      t = not_null(f_9);
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
  ATerm t_0 (ATerm t)
  {
    ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL;
    l_9 = t;
    d_8 :
    if(match_cons(l_9, sym_TCons_2))
      {
        m_9 = ATgetArgument(l_9, 0);
        n_9 = ATgetArgument(l_9, 1);
        e_8 :
        if(match_cons(n_9, sym_TCons_2))
          {
            o_9 = ATgetArgument(n_9, 0);
            p_9 = ATgetArgument(n_9, 1);
            f_8 :
            if(match_cons(p_9, sym_TCons_2))
              {
                q_9 = ATgetArgument(p_9, 0);
                r_9 = ATgetArgument(p_9, 1);
                l_8 :
                if(match_cons(r_9, sym_TNil_0))
                  {
                    ATerm v_9 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_9), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = geq_0(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_9), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = subt_0(t);
                    v_9 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_9), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_9), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_9), not_null(q_9)), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  t = for_3(t, r_0, s_0, t_0);
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
  ATerm c_10 = NULL;
  c_10 = t;
  b_10 :
  if(!(match_cons(c_10, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0 (ATerm t)
{
  ATerm i_10 = NULL,n_10 = NULL;
  ATerm g_8 = t;
  if(PushChoice()==0)
    {
      ATerm u_0 (ATerm t)
      {
        ATerm v_0 (ATerm t)
        {
          ATerm j_10 = NULL;
          j_10 = t;
          d_10 :
          if(!(match_cons(j_10, sym_IS_0)))
            _fail(t);
          return(t);
        }
        ATerm w_0 (ATerm t)
        {
          ATerm k_10 = NULL;
          k_10 = t;
          if(i_10 != NULL && i_10 != k_10)
            _fail(k_10);
          else
            i_10 = k_10;
          return(t);
        }
        t = SOpt_2(t, v_0, w_0);
        return(t);
      }
      t = fetch_1(t, u_0);
      t = not_null(i_10);
      t = string_to_int_0(t);
      PopChoice();
    }
  else
    {
      t = g_8;
      t = (ATerm) ATmakeInt(0);
    }
  n_10 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_10), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(32), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = copy_char_0(t);
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm s_10 = NULL;
  s_10 = t;
  r_10 :
  if(!(match_cons(s_10, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0 (ATerm t)
{
  ATerm x_10 = NULL,a_11 = NULL;
  ATerm c_11 = NULL;
  ATerm h_8 = t;
  if(PushChoice()==0)
    {
      ATerm x_0 (ATerm t)
      {
        ATerm y_0 (ATerm t)
        {
          ATerm y_10 = NULL;
          y_10 = t;
          t_10 :
          if(!(match_cons(y_10, sym_VS_0)))
            _fail(t);
          return(t);
        }
        ATerm z_0 (ATerm t)
        {
          ATerm z_10 = NULL;
          z_10 = t;
          if(x_10 != NULL && x_10 != z_10)
            _fail(z_10);
          else
            x_10 = z_10;
          return(t);
        }
        t = SOpt_2(t, y_0, z_0);
        return(t);
      }
      t = fetch_1(t, x_0);
      t = not_null(x_10);
      t = string_to_int_0(t);
      PopChoice();
    }
  else
    {
      t = h_8;
      t = (ATerm) ATmakeInt(0);
    }
  a_11 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_11), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = add_0(t);
  c_11 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_11), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(10), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = copy_char_0(t);
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL;
  p_11 = t;
  k_11 :
  if(match_cons(p_11, sym_TCons_2))
    {
      q_11 = ATgetArgument(p_11, 0);
      r_11 = ATgetArgument(p_11, 1);
      m_11 :
      if(match_cons(r_11, sym_TCons_2))
        {
          s_11 = ATgetArgument(r_11, 0);
          t_11 = ATgetArgument(r_11, 1);
          n_11 :
          if(match_cons(t_11, sym_TNil_0))
            {
              ATerm i_8 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(q_11), not_null(s_11));
                  PopChoice();
                }
              else
                {
                  t = i_8;
                  t = SSL_subtr(not_null(q_11), not_null(s_11));
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
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL;
  a_12 = t;
  y_11 :
  if(match_cons(a_12, sym_Pair_2))
    {
      b_12 = ATgetArgument(a_12, 0);
      c_12 = ATgetArgument(a_12, 1);
      z_11 :
      if(match_cons(b_12, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Pair_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(c_12));
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_T_2 (ATerm t, ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
  p_12 = t;
  k_12 :
  if(match_cons(p_12, sym_Pair_2))
    {
      q_12 = ATgetArgument(p_12, 0);
      t_12 = ATgetArgument(p_12, 1);
      l_12 :
      if(match_cons(q_12, sym_Cons_2))
        {
          r_12 = ATgetArgument(q_12, 0);
          s_12 = ATgetArgument(q_12, 1);
          {
            ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL;
            t = (ATerm) ATmakeAppl(sym_Pair_2, not_null(r_12), not_null(t_12));
            t = d_0(t);
            x_12 = t;
            j_12 :
            if(match_cons(x_12, sym_Pair_2))
              {
                y_12 = ATgetArgument(x_12, 0);
                z_12 = ATgetArgument(x_12, 1);
                {
                  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Pair_2, not_null(s_12), not_null(z_12));
                  t = g_0(t);
                  c_13 = t;
                  i_12 :
                  if(match_cons(c_13, sym_Pair_2))
                    {
                      d_13 = ATgetArgument(c_13, 0);
                      e_13 = ATgetArgument(c_13, 1);
                      t = (ATerm) ATmakeAppl(sym_Pair_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_12), not_null(d_13)), not_null(e_13));
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
ATerm thread_map_1 (ATerm t, ATerm u_37 (ATerm))
{
  ATerm k_13 (ATerm t)
  {
    ATerm j_8 = t;
    if(PushChoice()==0)
      {
        t = Cons_T_2(t, u_37, k_13);
        PopChoice();
      }
    else
      {
        t = j_8;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = k_13(t);
  return(t);
}
ATerm H_2 (ATerm t, ATerm e_27 (ATerm), ATerm f_27 (ATerm))
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
  p_13 = t;
  o_13 :
  if(match_cons(p_13, sym_H_2))
    {
      q_13 = ATgetArgument(p_13, 0);
      r_13 = ATgetArgument(p_13, 1);
      {
        ATerm u_13 = NULL;
        t = not_null(q_13);
        {
          ATerm w_13 = NULL;
          t = e_27(t);
          u_13 = t;
          t = not_null(r_13);
          t = f_27(t);
          w_13 = t;
          t = (ATerm) ATmakeAppl(sym_H_2, not_null(u_13), not_null(w_13));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm c_14 = NULL;
  c_14 = t;
  t = SSL_string_to_int(not_null(c_14));
  return(t);
}
ATerm HS_0 (ATerm t)
{
  ATerm g_14 = NULL;
  g_14 = t;
  f_14 :
  if(!(match_cons(g_14, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm a_27 (ATerm), ATerm b_27 (ATerm))
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
  l_14 = t;
  k_14 :
  if(match_cons(l_14, sym_SOpt_2))
    {
      m_14 = ATgetArgument(l_14, 0);
      n_14 = ATgetArgument(l_14, 1);
      {
        ATerm q_14 = NULL;
        t = not_null(m_14);
        {
          ATerm s_14 = NULL;
          t = a_27(t);
          q_14 = t;
          t = not_null(n_14);
          t = b_27(t);
          s_14 = t;
          t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(q_14), not_null(s_14));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Hspace_0 (ATerm t)
{
  ATerm a_15 = NULL,d_15 = NULL;
  ATerm k_8 = t;
  if(PushChoice()==0)
    {
      ATerm a_1 (ATerm t)
      {
        ATerm b_1 (ATerm t)
        {
          ATerm b_15 = NULL;
          b_15 = t;
          x_14 :
          if(!(match_cons(b_15, sym_HS_0)))
            _fail(t);
          return(t);
        }
        ATerm e_1 (ATerm t)
        {
          ATerm c_15 = NULL;
          c_15 = t;
          if(a_15 != NULL && a_15 != c_15)
            _fail(c_15);
          else
            a_15 = c_15;
          return(t);
        }
        t = SOpt_2(t, b_1, e_1);
        return(t);
      }
      t = fetch_1(t, a_1);
      t = not_null(a_15);
      t = string_to_int_0(t);
      PopChoice();
    }
  else
    {
      t = k_8;
      t = (ATerm) ATmakeInt(1);
    }
  d_15 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_15), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(32), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = copy_char_0(t);
  return(t);
}
ATerm Abox_2_text_0 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
  v_18 = t;
  g_17 :
  if(match_cons(v_18, sym_TCons_2))
    {
      w_18 = ATgetArgument(v_18, 0);
      x_18 = ATgetArgument(v_18, 1);
      h_17 :
      if(match_cons(w_18, sym_H_2))
        {
          t_18 = ATgetArgument(w_18, 0);
          u_18 = ATgetArgument(w_18, 1);
          i_17 :
          if(match_cons(x_18, sym_TCons_2))
            {
              y_18 = ATgetArgument(x_18, 0);
              z_18 = ATgetArgument(x_18, 1);
              j_17 :
              if(match_cons(z_18, sym_TNil_0))
                {
                  ATerm d_19 = NULL;
                  t = not_null(t_18);
                  {
                    ATerm f_19 = NULL;
                    t = Hspace_0(t);
                    d_19 = t;
                    {
                      ATerm k_19 = NULL;
                      t = string_length_0(t);
                      f_19 = t;
                      t = not_null(u_18);
                      {
                        ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL;
                        ATerm h_1 (ATerm t)
                        {
                          ATerm m_8 = t;
                          if(PushChoice()==0)
                            {
                              ATerm r_8 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm h_19 = NULL;
                                  h_19 = t;
                                  u_15 :
                                  if(!(match_cons(h_19, sym_Nil_0)))
                                    _fail(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = r_8;
                                  {
                                    ATerm i_1 (ATerm t)
                                    {
                                      ATerm i_19 = NULL;
                                      i_19 = t;
                                      v_15 :
                                      if(!(match_cons(i_19, sym_Nil_0)))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm n_1 (ATerm t)
                                    {
                                      ATerm j_19 = NULL;
                                      j_19 = t;
                                      w_15 :
                                      if(!(match_cons(j_19, sym_Nil_0)))
                                        _fail(t);
                                      return(t);
                                    }
                                    t = H_2(t, i_1, n_1);
                                  }
                                }
                              PopChoice();
                              _fail(t);
                            }
                          else
                            t = m_8;
                          return(t);
                        }
                        t = filter_1(t, h_1);
                        k_19 = t;
                        t = (ATerm) ATmakeAppl(sym_Pair_2, not_null(k_19), not_null(y_18));
                        {
                          ATerm w_1 (ATerm t)
                          {
                            ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL;
                            m_19 = t;
                            g_16 :
                            if(match_cons(m_19, sym_Pair_2))
                              {
                                n_19 = ATgetArgument(m_19, 0);
                                o_19 = ATgetArgument(m_19, 1);
                                {
                                  ATerm r_19 = NULL,s_19 = NULL,y_19 = NULL;
                                  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = Abox_2_text_0(t);
                                  t_19 = t;
                                  c_16 :
                                  if(match_cons(t_19, sym_TCons_2))
                                    {
                                      u_19 = ATgetArgument(t_19, 0);
                                      v_19 = ATgetArgument(t_19, 1);
                                      d_16 :
                                      if(match_cons(v_19, sym_TCons_2))
                                        {
                                          w_19 = ATgetArgument(v_19, 0);
                                          x_19 = ATgetArgument(v_19, 1);
                                          e_16 :
                                          if(match_cons(x_19, sym_TNil_0))
                                            {
                                              if(r_19 != NULL && r_19 != u_19)
                                                _fail(u_19);
                                              else
                                                r_19 = u_19;
                                              if(s_19 != NULL && s_19 != w_19)
                                                _fail(w_19);
                                              else
                                                s_19 = w_19;
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = add_0(t);
                                  y_19 = t;
                                  t = (ATerm) ATmakeAppl(sym_Pair_2, not_null(r_19), not_null(y_19));
                                }
                              }
                            else
                              _fail(t);
                            return(t);
                          }
                          t = thread_map_1(t, w_1);
                          a_20 = t;
                          m_16 :
                          if(match_cons(a_20, sym_Pair_2))
                            {
                              b_20 = ATgetArgument(a_20, 0);
                              c_20 = ATgetArgument(a_20, 1);
                              {
                                ATerm f_20 = NULL;
                                t = not_null(b_20);
                                {
                                  ATerm x_1 (ATerm t)
                                  {
                                    t = not_null(d_19);
                                    return(t);
                                  }
                                  t = separate_by_1(t, x_1);
                                  f_20 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_20), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  {
                                    ATerm s_8 = t;
                                    if(PushChoice()==0)
                                      {
                                        ATerm y_1 (ATerm t)
                                        {
                                          ATerm u_8 = t;
                                          if(PushChoice()==0)
                                            {
                                              ATerm h_20 = NULL;
                                              h_20 = t;
                                              j_16 :
                                              if(!(match_cons(h_20, sym_Nil_0)))
                                                _fail(t);
                                              PopChoice();
                                              _fail(t);
                                            }
                                          else
                                            t = u_8;
                                          return(t);
                                        }
                                        ATerm h_2 (ATerm t)
                                        {
                                          ATerm i_2 (ATerm t)
                                          {
                                            ATerm i_20 = NULL;
                                            i_20 = t;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            t = subt_0(t);
                                            return(t);
                                          }
                                          ATerm j_2 (ATerm t)
                                          {
                                            ATerm k_20 = NULL;
                                            k_20 = t;
                                            l_16 :
                                            if(!(match_cons(k_20, sym_TNil_0)))
                                              _fail(t);
                                            return(t);
                                          }
                                          t = TCons_2(t, i_2, j_2);
                                          return(t);
                                        }
                                        t = TCons_2(t, y_1, h_2);
                                        PopChoice();
                                      }
                                    else
                                      t = s_8;
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
          if(match_cons(w_18, sym_V_2))
            {
              t_18 = ATgetArgument(w_18, 0);
              u_18 = ATgetArgument(w_18, 1);
              k_17 :
              if(match_cons(x_18, sym_TCons_2))
                {
                  y_18 = ATgetArgument(x_18, 0);
                  z_18 = ATgetArgument(x_18, 1);
                  l_17 :
                  if(match_cons(z_18, sym_TNil_0))
                    {
                      ATerm o_20 = NULL;
                      t = not_null(t_18);
                      {
                        ATerm q_20 = NULL;
                        t = Vspace_0(t);
                        o_20 = t;
                        t = not_null(t_18);
                        {
                          ATerm s_20 = NULL;
                          t = Ispace_0(t);
                          q_20 = t;
                          {
                            ATerm u_20 = NULL;
                            t = string_length_0(t);
                            s_20 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_18), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(32), (ATerm) ATmakeAppl(sym_TNil_0)));
                            {
                              ATerm w_20 = NULL;
                              t = copy_char_0(t);
                              u_20 = t;
                              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_20), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_20), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_20), (ATerm) ATmakeAppl(sym_Nil_0))));
                              {
                                ATerm z_20 = NULL;
                                t = concat_strings_0(t);
                                w_20 = t;
                                t = not_null(u_18);
                                {
                                  ATerm k_2 (ATerm t)
                                  {
                                    ATerm v_8 = t;
                                    if(PushChoice()==0)
                                      {
                                        ATerm y_20 = NULL;
                                        y_20 = t;
                                        t_16 :
                                        if(!(match_cons(y_20, sym_Nil_0)))
                                          _fail(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      t = v_8;
                                    return(t);
                                  }
                                  t = filter_1(t, k_2);
                                  {
                                    ATerm z_8 = t;
                                    if(PushChoice()==0)
                                      {
                                        ATerm a_21 = NULL;
                                        a_21 = t;
                                        v_16 :
                                        if(match_cons(a_21, sym_Nil_0))
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        else
                                          _fail(t);
                                        PopChoice();
                                      }
                                    else
                                      {
                                        t = z_8;
                                        {
                                          ATerm l_2 (ATerm t)
                                          {
                                            ATerm b_21 = NULL;
                                            b_21 = t;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            t = Abox_2_text_0(t);
                                            return(t);
                                          }
                                          ATerm m_2 (ATerm t)
                                          {
                                            ATerm o_2 (ATerm t)
                                            {
                                              ATerm d_21 = NULL;
                                              ATerm f_21 = NULL;
                                              d_21 = t;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_20), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              t = add_0(t);
                                              f_21 = t;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              t = Abox_2_text_0(t);
                                              return(t);
                                            }
                                            t = map_1(t, o_2);
                                            return(t);
                                          }
                                          t = Cons_2(t, l_2, m_2);
                                          {
                                            ATerm q_2 (ATerm t)
                                            {
                                              ATerm s_2 (ATerm t)
                                              {
                                                ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL;
                                                h_21 = t;
                                                a_17 :
                                                if(match_cons(h_21, sym_TCons_2))
                                                  {
                                                    i_21 = ATgetArgument(h_21, 0);
                                                    j_21 = ATgetArgument(h_21, 1);
                                                    b_17 :
                                                    if(match_cons(j_21, sym_TCons_2))
                                                      {
                                                        k_21 = ATgetArgument(j_21, 0);
                                                        l_21 = ATgetArgument(j_21, 1);
                                                        c_17 :
                                                        if(match_cons(l_21, sym_TNil_0))
                                                          {
                                                            if(z_20 != NULL && z_20 != k_21)
                                                              _fail(k_21);
                                                            else
                                                              z_20 = k_21;
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
                                              ATerm t_2 (ATerm t)
                                              {
                                                ATerm m_21 = NULL;
                                                m_21 = t;
                                                d_17 :
                                                if(!(match_cons(m_21, sym_Nil_0)))
                                                  _fail(t);
                                                return(t);
                                              }
                                              t = Cons_2(t, s_2, t_2);
                                              return(t);
                                            }
                                            t = at_last_1(t, q_2);
                                            t = map_1(t, Fst_0);
                                            {
                                              ATerm u_2 (ATerm t)
                                              {
                                                t = not_null(w_20);
                                                return(t);
                                              }
                                              t = separate_by_1(t, u_2);
                                              {
                                                ATerm v_2 (ATerm t)
                                                {
                                                  t = not_null(z_20);
                                                  return(t);
                                                }
                                                t = split_2(t, _id, v_2);
                                              }
                                            }
                                          }
                                        }
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
              if(match_cons(w_18, sym_S_1))
                {
                  t_18 = ATgetArgument(w_18, 0);
                  m_17 :
                  if(match_cons(x_18, sym_TCons_2))
                    {
                      y_18 = ATgetArgument(x_18, 0);
                      z_18 = ATgetArgument(x_18, 1);
                      n_17 :
                      if(match_cons(z_18, sym_TNil_0))
                        {
                          ATerm p_21 = NULL;
                          t = not_null(t_18);
                          {
                            ATerm r_21 = NULL;
                            t = string_length_0(t);
                            p_21 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = add_0(t);
                            r_21 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_21), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                  if(match_cons(w_18, sym_C_2))
                    {
                      t_18 = ATgetArgument(w_18, 0);
                      u_18 = ATgetArgument(w_18, 1);
                      o_17 :
                      if(match_cons(u_18, sym_Cons_2))
                        {
                          p_18 = ATgetArgument(u_18, 0);
                          r_18 = ATgetArgument(u_18, 1);
                          p_17 :
                          if(match_cons(p_18, sym_S_1))
                            {
                              q_18 = ATgetArgument(p_18, 0);
                              q_17 :
                              if(match_cons(r_18, sym_Nil_0))
                                {
                                  r_17 :
                                  if(match_cons(x_18, sym_TCons_2))
                                    {
                                      y_18 = ATgetArgument(x_18, 0);
                                      z_18 = ATgetArgument(x_18, 1);
                                      s_17 :
                                      if(match_cons(z_18, sym_TNil_0))
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_18), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                      if(match_cons(w_18, sym_FBOX_2))
                        {
                          t_18 = ATgetArgument(w_18, 0);
                          u_18 = ATgetArgument(w_18, 1);
                          t_17 :
                          if(match_cons(x_18, sym_TCons_2))
                            {
                              y_18 = ATgetArgument(x_18, 0);
                              z_18 = ATgetArgument(x_18, 1);
                              u_17 :
                              if(match_cons(z_18, sym_TNil_0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_18), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                          if(match_cons(w_18, sym_HV_2))
                            {
                              t_18 = ATgetArgument(w_18, 0);
                              u_18 = ATgetArgument(w_18, 1);
                              v_17 :
                              if(match_cons(x_18, sym_TCons_2))
                                {
                                  y_18 = ATgetArgument(x_18, 0);
                                  z_18 = ATgetArgument(x_18, 1);
                                  w_17 :
                                  if(match_cons(z_18, sym_TNil_0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_H_2, not_null(t_18), not_null(u_18)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_18), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                              if(match_cons(w_18, sym_R_2))
                                {
                                  t_18 = ATgetArgument(w_18, 0);
                                  u_18 = ATgetArgument(w_18, 1);
                                  x_17 :
                                  if(match_cons(x_18, sym_TCons_2))
                                    {
                                      y_18 = ATgetArgument(x_18, 0);
                                      z_18 = ATgetArgument(x_18, 1);
                                      y_17 :
                                      if(match_cons(z_18, sym_TNil_0))
                                        {
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_H_2, not_null(t_18), not_null(u_18)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_18), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                                  if(match_cons(w_18, sym_A_3))
                                    {
                                      t_18 = ATgetArgument(w_18, 0);
                                      u_18 = ATgetArgument(w_18, 1);
                                      s_18 = ATgetArgument(w_18, 2);
                                      z_17 :
                                      if(match_cons(x_18, sym_TCons_2))
                                        {
                                          y_18 = ATgetArgument(x_18, 0);
                                          z_18 = ATgetArgument(x_18, 1);
                                          a_18 :
                                          if(match_cons(z_18, sym_TNil_0))
                                            {
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_V_2, not_null(u_18), not_null(s_18)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_18), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                                      if(match_cons(w_18, sym_ALT_2))
                                        {
                                          t_18 = ATgetArgument(w_18, 0);
                                          u_18 = ATgetArgument(w_18, 1);
                                          i_18 :
                                          if(match_cons(x_18, sym_TCons_2))
                                            {
                                              y_18 = ATgetArgument(x_18, 0);
                                              z_18 = ATgetArgument(x_18, 1);
                                              j_18 :
                                              if(match_cons(z_18, sym_TNil_0))
                                                {
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_18), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                                          if(match_cons(w_18, sym_Cons_2))
                                            {
                                              t_18 = ATgetArgument(w_18, 0);
                                              u_18 = ATgetArgument(w_18, 1);
                                              k_18 :
                                              if(match_cons(u_18, sym_Nil_0))
                                                {
                                                  l_18 :
                                                  if(match_cons(x_18, sym_TCons_2))
                                                    {
                                                      y_18 = ATgetArgument(x_18, 0);
                                                      z_18 = ATgetArgument(x_18, 1);
                                                      m_18 :
                                                      if(match_cons(z_18, sym_TNil_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_18), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                                              if(match_cons(w_18, sym_Nil_0))
                                                {
                                                  n_18 :
                                                  if(match_cons(x_18, sym_TCons_2))
                                                    {
                                                      y_18 = ATgetArgument(x_18, 0);
                                                      z_18 = ATgetArgument(x_18, 1);
                                                      o_18 :
                                                      if(match_cons(z_18, sym_TNil_0))
                                                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_18), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm w_2 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  t = split_2(t, _id, w_2);
  t = Abox_2_text_0(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm y_28 (ATerm), ATerm z_28 (ATerm))
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
  d_24 = t;
  c_24 :
  if(match_cons(d_24, sym_TCons_2))
    {
      e_24 = ATgetArgument(d_24, 0);
      f_24 = ATgetArgument(d_24, 1);
      {
        ATerm i_24 = NULL;
        t = not_null(e_24);
        {
          ATerm k_24 = NULL;
          t = y_28(t);
          i_24 = t;
          t = not_null(f_24);
          t = z_28(t);
          k_24 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_24), not_null(k_24));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm q_24 = NULL;
  q_24 = t;
  t = SSL_ReadFromFile(not_null(q_24));
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_26 = NULL;
  ATerm a_9;
  a_9 = t;
  {
    ATerm b_9 = t;
    if(PushChoice()==0)
      {
        ATerm y_2 (ATerm t)
        {
          ATerm y_26 = NULL,z_26 = NULL;
          y_26 = t;
          v_26 :
          if(match_cons(y_26, sym_Input_1))
            {
              z_26 = ATgetArgument(y_26, 0);
              if(x_26 != NULL && x_26 != z_26)
                _fail(z_26);
              else
                x_26 = z_26;
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1(t, y_2);
        PopChoice();
      }
    else
      {
        t = b_9;
        {
          ATerm c_27 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          c_27 = t;
          if(x_26 != NULL && x_26 != c_27)
            _fail(c_27);
          else
            x_26 = c_27;
        }
      }
  }
  t = a_9;
  {
    ATerm z_2 (ATerm t)
    {
      t = not_null(x_26);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_2);
  }
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm i_27 = NULL;
  i_27 = t;
  t = SSL_open_file(not_null(i_27));
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm g_42 (ATerm))
{
  ATerm l_27 (ATerm t)
  {
    ATerm c_9 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, g_42, _id);
        PopChoice();
      }
    else
      {
        t = c_9;
        t = Cons_2(t, _id, l_27);
      }
    return(t);
  }
  t = l_27(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_32 (ATerm))
{
  t = fetch_1(t, r_32);
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm n_27 = NULL;
  n_27 = t;
  t = SSL_exit(not_null(n_27));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL;
  u_27 = t;
  r_27 :
  if(match_cons(u_27, sym_TCons_2))
    {
      v_27 = ATgetArgument(u_27, 0);
      w_27 = ATgetArgument(u_27, 1);
      s_27 :
      if(match_cons(w_27, sym_TCons_2))
        {
          x_27 = ATgetArgument(w_27, 0);
          y_27 = ATgetArgument(w_27, 1);
          t_27 :
          if(match_cons(y_27, sym_TNil_0))
            {
              ATerm g_9;
              g_9 = t;
              t = SSL_printnl(not_null(v_27), not_null(x_27));
              t = g_9;
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
  ATerm e_28 = NULL;
  ATerm i_9;
  i_9 = t;
  {
    ATerm d_3 (ATerm t)
    {
      ATerm f_28 = NULL,g_28 = NULL;
      f_28 = t;
      d_28 :
      if(match_cons(f_28, sym_Program_1))
        {
          g_28 = ATgetArgument(f_28, 0);
          if(e_28 != NULL && e_28 != g_28)
            _fail(g_28);
          else
            e_28 = g_28;
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1(t, d_3);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_28), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-i abox] [-o html] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
  }
  t = i_9;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_28 = NULL;
  j_28 = t;
  i_28 :
  if(!(match_cons(j_28, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_26 (ATerm))
{
  ATerm n_28 = NULL,o_28 = NULL;
  n_28 = t;
  m_28 :
  if(match_cons(n_28, sym_Undefined_1))
    {
      o_28 = ATgetArgument(n_28, 0);
      {
        ATerm q_28 = NULL;
        t = not_null(o_28);
        t = u_26(t);
        q_28 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_28));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm v_28 = NULL;
  v_28 = t;
  u_28 :
  if(!(match_cons(v_28, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm m_33 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    ATerm j_9 = t;
    if(PushChoice()==0)
      {
        ATerm a_29 = NULL;
        a_29 = t;
        w_28 :
        if(!(match_cons(a_29, sym_Help_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = j_9;
        {
          ATerm k_9 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = k_9;
              {
                ATerm b_29 = NULL;
                b_29 = t;
                x_28 :
                if(!(match_cons(b_29, sym_Version_0)))
                  _fail(t);
              }
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, m_3);
  t = m_33(t);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm k_32 (ATerm), ATerm l_32 (ATerm))
{
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL;
  h_29 = t;
  g_29 :
  if(match_cons(h_29, sym_Cons_2))
    {
      i_29 = ATgetArgument(h_29, 0);
      j_29 = ATgetArgument(h_29, 1);
      {
        ATerm m_29 = NULL;
        t = not_null(i_29);
        t = k_32(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = l_32(t);
        m_29 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_29), not_null(j_29));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm m_32 (ATerm), ATerm n_32 (ATerm))
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL;
  u_29 = t;
  s_29 :
  if(match_cons(u_29, sym_Cons_2))
    {
      v_29 = ATgetArgument(u_29, 0);
      w_29 = ATgetArgument(u_29, 1);
      t_29 :
      if(match_cons(w_29, sym_Cons_2))
        {
          x_29 = ATgetArgument(w_29, 0);
          y_29 = ATgetArgument(w_29, 1);
          {
            ATerm c_30 = NULL;
            t = not_null(v_29);
            t = m_32(t);
            t = not_null(x_29);
            t = n_32(t);
            c_30 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_30), not_null(y_29));
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
  ATerm s_9 = t;
  if(PushChoice()==0)
    {
      ATerm n_3 (ATerm t)
      {
        ATerm a_31 = NULL;
        a_31 = t;
        g_30 :
        if(!(match_string(a_31, "-S")))
          _fail(t);
        return(t);
      }
      ATerm o_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, n_3, o_3);
      PopChoice();
    }
  else
    {
      t = s_9;
      {
        ATerm t_9 = t;
        if(PushChoice()==0)
          {
            ATerm p_3 (ATerm t)
            {
              ATerm b_31 = NULL;
              b_31 = t;
              h_30 :
              if(!(match_string(b_31, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm r_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, p_3, r_3);
            PopChoice();
          }
        else
          {
            t = t_9;
            {
              ATerm u_9 = t;
              if(PushChoice()==0)
                {
                  ATerm u_3 (ATerm t)
                  {
                    ATerm c_31 = NULL;
                    c_31 = t;
                    i_30 :
                    if(!(match_string(c_31, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm w_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, u_3, w_3);
                  PopChoice();
                }
              else
                {
                  t = u_9;
                  {
                    ATerm w_9 = t;
                    if(PushChoice()==0)
                      {
                        ATerm x_3 (ATerm t)
                        {
                          ATerm d_31 = NULL;
                          d_31 = t;
                          j_30 :
                          if(!(match_string(d_31, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm y_3 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, x_3, y_3);
                        PopChoice();
                      }
                    else
                      {
                        t = w_9;
                        {
                          ATerm x_9 = t;
                          if(PushChoice()==0)
                            {
                              ATerm z_3 (ATerm t)
                              {
                                ATerm e_31 = NULL;
                                e_31 = t;
                                k_30 :
                                if(!(match_string(e_31, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm e_4 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, z_3, e_4);
                              PopChoice();
                            }
                          else
                            {
                              t = x_9;
                              {
                                ATerm y_9 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm f_4 (ATerm t)
                                    {
                                      ATerm f_31 = NULL;
                                      f_31 = t;
                                      l_30 :
                                      if(!(match_string(f_31, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm h_4 (ATerm t)
                                    {
                                      ATerm g_31 = NULL;
                                      g_31 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(g_31));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, f_4, h_4);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = y_9;
                                    {
                                      ATerm z_9 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm i_4 (ATerm t)
                                          {
                                            ATerm i_31 = NULL;
                                            i_31 = t;
                                            n_30 :
                                            if(!(match_string(i_31, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm j_4 (ATerm t)
                                          {
                                            ATerm j_31 = NULL;
                                            j_31 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_31));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, i_4, j_4);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = z_9;
                                          {
                                            ATerm a_10 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm p_4 (ATerm t)
                                                {
                                                  ATerm l_31 = NULL;
                                                  l_31 = t;
                                                  p_30 :
                                                  if(!(match_string(l_31, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm u_4 (ATerm t)
                                                {
                                                  ATerm m_31 = NULL;
                                                  m_31 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_31));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, p_4, u_4);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = a_10;
                                                {
                                                  ATerm e_10 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm v_4 (ATerm t)
                                                      {
                                                        ATerm o_31 = NULL;
                                                        o_31 = t;
                                                        r_30 :
                                                        if(!(match_string(o_31, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm w_4 (ATerm t)
                                                      {
                                                        ATerm p_31 = NULL;
                                                        p_31 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_31));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, v_4, w_4);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = e_10;
                                                      {
                                                        ATerm f_10 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm d_5 (ATerm t)
                                                            {
                                                              ATerm r_31 = NULL;
                                                              r_31 = t;
                                                              t_30 :
                                                              if(!(match_string(r_31, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm i_5 (ATerm t)
                                                            {
                                                              ATerm s_31 = NULL;
                                                              s_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(s_31));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, d_5, i_5);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = f_10;
                                                            {
                                                              ATerm g_10 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm j_5 (ATerm t)
                                                                  {
                                                                    ATerm u_31 = NULL;
                                                                    u_31 = t;
                                                                    v_30 :
                                                                    if(!(match_string(u_31, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm k_5 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, j_5, k_5);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = g_10;
                                                                  {
                                                                    ATerm h_10 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm o_5 (ATerm t)
                                                                        {
                                                                          ATerm v_31 = NULL;
                                                                          v_31 = t;
                                                                          w_30 :
                                                                          if(!(match_string(v_31, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm s_5 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, o_5, s_5);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = h_10;
                                                                        {
                                                                          ATerm l_10 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm t_5 (ATerm t)
                                                                              {
                                                                                ATerm w_31 = NULL;
                                                                                w_31 = t;
                                                                                x_30 :
                                                                                if(!(match_string(w_31, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm y_5 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, t_5, y_5);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = l_10;
                                                                              {
                                                                                ATerm m_10 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm z_5 (ATerm t)
                                                                                    {
                                                                                      ATerm x_31 = NULL;
                                                                                      x_31 = t;
                                                                                      y_30 :
                                                                                      if(!(match_string(x_31, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm b_6 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, z_5, b_6);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = m_10;
                                                                                    {
                                                                                      ATerm c_6 (ATerm t)
                                                                                      {
                                                                                        ATerm y_31 = NULL;
                                                                                        y_31 = t;
                                                                                        z_30 :
                                                                                        if(!(match_string(y_31, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm e_6 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, c_6, e_6);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm g_32 = NULL,h_32 = NULL,o_32 = NULL;
  g_32 = t;
  f_32 :
  if(match_cons(g_32, sym_Cons_2))
    {
      h_32 = ATgetArgument(g_32, 0);
      o_32 = ATgetArgument(g_32, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(h_32)), not_null(o_32));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm c_29 (ATerm), ATerm d_29 (ATerm))
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  x_32 = t;
  w_32 :
  if(match_cons(x_32, sym_Cons_2))
    {
      y_32 = ATgetArgument(x_32, 0);
      z_32 = ATgetArgument(x_32, 1);
      {
        ATerm c_33 = NULL;
        t = not_null(y_32);
        {
          ATerm e_33 = NULL;
          t = c_29(t);
          c_33 = t;
          t = not_null(z_32);
          t = d_29(t);
          e_33 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_33), not_null(e_33));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm k_33 = NULL;
  k_33 = t;
  j_33 :
  if(!(match_cons(k_33, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_32 (ATerm))
{
  ATerm f_6 (ATerm t)
  {
    ATerm o_33 = NULL;
    o_33 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_33));
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    ATerm o_10 = t;
    if(PushChoice()==0)
      {
        ATerm p_10 = t;
        if(PushChoice()==0)
          {
            ATerm q_33 = NULL;
            q_33 = t;
            n_33 :
            if(!(match_cons(q_33, sym_Nil_0)))
              _fail(t);
            PopChoice();
          }
        else
          {
            t = p_10;
            t = i_32(t);
            t = Cons_2(t, _id, g_6);
          }
        PopChoice();
      }
    else
      {
        t = o_10;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, f_6, g_6);
  return(t);
}
ATerm Abox2text_0 (ATerm t)
{
  ATerm a_34 = NULL;
  ATerm c_34 = NULL,d_34 = NULL;
  t = parse_options_1(t, io_options_0);
  a_34 = t;
  {
    ATerm q_10 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, usage_0);
        PopChoice();
      }
    else
      {
        t = q_10;
        {
          ATerm u_10 = t;
          if(PushChoice()==0)
            {
              ATerm v_10;
              v_10 = t;
              {
                ATerm w_10 = t;
                if(PushChoice()==0)
                  {
                    ATerm i_6 (ATerm t)
                    {
                      ATerm e_34 = NULL,f_34 = NULL;
                      e_34 = t;
                      v_33 :
                      if(match_cons(e_34, sym_Output_1))
                        {
                          f_34 = ATgetArgument(e_34, 0);
                          if(d_34 != NULL && d_34 != f_34)
                            _fail(f_34);
                          else
                            d_34 = f_34;
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1(t, i_6);
                    t = not_null(d_34);
                    t = open_file_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = w_10;
                    {
                      ATerm g_34 = NULL;
                      t = (ATerm) ATmakeAppl(sym_stdout_0);
                      g_34 = t;
                      if(d_34 != NULL && d_34 != g_34)
                        _fail(g_34);
                      else
                        d_34 = g_34;
                    }
                  }
              }
              t = v_10;
              t = input_file_0(t);
              {
                ATerm j_6 (ATerm t)
                {
                  ATerm k_6 (ATerm t)
                  {
                    ATerm h_34 = NULL;
                    t = abox2text_0(t);
                    h_34 = t;
                    if(c_34 != NULL && c_34 != h_34)
                      _fail(h_34);
                    else
                      c_34 = h_34;
                    return(t);
                  }
                  ATerm t_6 (ATerm t)
                  {
                    ATerm i_34 = NULL;
                    i_34 = t;
                    y_33 :
                    if(!(match_cons(i_34, sym_TNil_0)))
                      _fail(t);
                    return(t);
                  }
                  t = TCons_2(t, k_6, t_6);
                  return(t);
                }
                t = TCons_2(t, _id, j_6);
                t = not_null(c_34);
                {
                  ATerm u_6 (ATerm t)
                  {
                    ATerm b_11 = t;
                    if(PushChoice()==0)
                      {
                        t = is_string_0(t);
                        {
                          ATerm d_11;
                          d_11 = t;
                          {
                            ATerm v_6 (ATerm t)
                            {
                              t = not_null(d_34);
                              return(t);
                            }
                            ATerm w_6 (ATerm t)
                            {
                              ATerm j_34 = NULL;
                              j_34 = t;
                              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_34), (ATerm) ATmakeAppl(sym_Nil_0));
                              return(t);
                            }
                            t = split_2(t, v_6, w_6);
                            t = print_0(t);
                          }
                          t = d_11;
                        }
                        PopChoice();
                      }
                    else
                      t = b_11;
                    return(t);
                  }
                  t = topdown_1(t, u_6);
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = print_0(t);
                  t = report_success_0(t);
                }
              }
              PopChoice();
            }
          else
            {
              t = u_10;
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
