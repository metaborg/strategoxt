#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_RDef_3;
Symbol sym_RDefT_4;
Symbol sym_Path_2;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_Undefined_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
void init_constructors (void)
{
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  sym__1 = ATmakeSymbol("", 1, ATfalse);
  ATprotectSymbol(sym__1);
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);
  sym__3 = ATmakeSymbol("", 3, ATfalse);
  ATprotectSymbol(sym__3);
  sym__4 = ATmakeSymbol("", 4, ATfalse);
  ATprotectSymbol(sym__4);
  sym__5 = ATmakeSymbol("", 5, ATfalse);
  ATprotectSymbol(sym__5);
  sym__6 = ATmakeSymbol("", 6, ATfalse);
  ATprotectSymbol(sym__6);
  sym__7 = ATmakeSymbol("", 7, ATfalse);
  ATprotectSymbol(sym__7);
  sym__8 = ATmakeSymbol("", 8, ATfalse);
  ATprotectSymbol(sym__8);
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_g_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_l_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_o_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_q_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_w_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_g_9;
ATerm term_c_8;
ATerm term_y_7;
ATerm term_q_7;
ATerm term_j_7;
ATerm term_k_6;
ATerm term_f_6;
ATerm term_v_5;
void init_constant_terms (void)
{
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\n** Warning: Starting with Stratego 0.9.3 the calling convention of\n   strategies has been changed such that the current term is the *last*\n   argument. For most strategy definitions this is not a problem. Only\n   strategies which explicitly declare the type of a higher-order\n   strategy argument are affected. The argument declarations should be\n   changed such that the current term is the last argument. This change\n   is currently done automatically by the compiler. In the future source\n   programs are expected to incorporate this change.\n", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym__3, term_g_15, term_h_15, term_v_5);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm explanation_0_0 (ATerm);
ATerm RepairVarDec_2_0 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm);
ATerm RepairDefinition_0_0 (ATerm);
ATerm sometd_1_0 (ATerm x_87 (ATerm), ATerm);
ATerm _2_0 (ATerm c_67 (ATerm), ATerm d_67 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm c_108 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm e_111 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm v_92 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm b_93 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm g_109 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm f_109 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm c_112 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_92 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm j_84 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm k_84 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm r_71 (ATerm), ATerm s_71 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm f_114 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm e_114 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm p_111 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_0 = NULL,k_0 = NULL;
  e_0 = t;
  t = term_v_5;
  t = whoami_0_0(t);
  k_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), k_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = e_0;
  return(t);
}
ATerm explanation_0_0 (ATerm t)
{
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\n** Warning: Starting with Stratego 0.9.3 the calling convention of\n   strategies has been changed such that the current term is the *last*\n   argument. For most strategy definitions this is not a problem. Only\n   strategies which explicitly declare the type of a higher-order\n   strategy argument are affected. The argument declarations should be\n   changed such that the current term is the last argument. This change\n   is currently done automatically by the compiler. In the future source\n   programs are expected to incorporate this change.\n", 0, ATtrue))));
  t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATempty, term_k_6));
  return(t);
}
ATerm RepairVarDec_2_0 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm t)
{
  ATerm m_0 = NULL,n_0 = NULL,o_0 = NULL,p_0 = NULL,r_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      m_0 = ATgetArgument(t, 0);
      {
        ATerm l_6 = ATgetArgument(t, 1);
        if(match_cons(l_6, sym_FunType_2))
          {
            ATerm m_6 = ATgetArgument(l_6, 0);
            if(((ATgetType(m_6) == AT_LIST) && !(ATisEmpty(m_6))))
              {
                ATerm n_6 = ATgetFirst((ATermList) m_6);
                if(match_cons(n_6, sym_ConstType_1))
                  {
                    n_0 = ATgetArgument(n_6, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm p_6 = (ATerm) ATgetNext((ATermList) m_6);
                  o_0 = p_6;
                  if(((ATgetType(p_6) == AT_LIST) && !(ATisEmpty(p_6))))
                    {
                      ATerm q_6 = ATgetFirst((ATermList) p_6);
                      if(match_cons(q_6, sym_FunType_2))
                        {
                          ATerm u_6 = ATgetArgument(q_6, 0);
                          ATerm v_6 = ATgetArgument(q_6, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm t_6 = (ATerm) ATgetNext((ATermList) p_6);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            p_0 = ATgetArgument(l_6, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  r_0 = t;
  t = p_84(t);
  t_0 = t;
  t = r_0;
  t = q_84(t);
  u_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("' starts with constant type", 0, ATtrue))), u_0), (ATerm) ATmakeAppl(ATmakeSymbol(" '", 0, ATtrue))), t_0), (ATerm) ATmakeAppl(ATmakeSymbol("' of ", 0, ATtrue))), m_0), (ATerm) ATmakeAppl(ATmakeSymbol("** Warning: argument '", 0, ATtrue))));
  t = (ATerm) ATmakeAppl(sym__2, o_0, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, n_0)));
  {
    ATerm w_6 = t;
    int x_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_6 = ATgetArgument(t, 0);
            ATerm d_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_0;
        {
          ATerm c_0 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, n_0));
            return(t);
          }
          t = at_end_1_0(c_0, t);
        }
        ;
        LocalPopChoice(x_6);
      }
    else
      {
        t = w_6;
        {
          ATerm s_0 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, o_0, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, n_0))));
          if(match_cons(t, sym__2))
            {
              ATerm g_7 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_7) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              s_0 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_0;
          t = concat_0_0(t);
        }
      }
    v_0 = t;
    t = (ATerm) ATmakeAppl(sym_VarDec_2, m_0, (ATerm) ATmakeAppl(sym_FunType_2, v_0, p_0));
  }
  return(t);
}
ATerm RepairDefinition_0_0 (ATerm t)
{
  ATerm q_1 = NULL,x_1 = NULL,y_1 = NULL,a_2 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      x_1 = ATgetArgument(t, 0);
      y_1 = ATgetArgument(t, 1);
      a_2 = ATgetArgument(t, 2);
      q_1 = ATgetArgument(t, 3);
      {
        ATerm h_2 = NULL;
        t = y_1;
        {
          ATerm l_0 (ATerm t)
          {
            ATerm h_7 = t;
            int i_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_0 (ATerm t)
                {
                  t = term_j_7;
                  return(t);
                }
                ATerm x_0 (ATerm t)
                {
                  t = x_1;
                  return(t);
                }
                t = RepairVarDec_2_0(q_0, x_0, t);
                ;
                LocalPopChoice(i_7);
              }
            else
              {
                t = h_7;
              }
            return(t);
          }
          t = map_1_0(l_0, t);
          h_2 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, x_1, h_2, a_2, q_1);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          x_1 = ATgetArgument(t, 0);
          y_1 = ATgetArgument(t, 1);
          a_2 = ATgetArgument(t, 2);
          {
            ATerm m_2 = NULL;
            t = y_1;
            {
              ATerm y_0 (ATerm t)
              {
                ATerm k_7 = t;
                int m_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_0 (ATerm t)
                    {
                      t = term_j_7;
                      return(t);
                    }
                    ATerm a_1 (ATerm t)
                    {
                      t = x_1;
                      return(t);
                    }
                    t = RepairVarDec_2_0(z_0, a_1, t);
                    ;
                    LocalPopChoice(m_7);
                  }
                else
                  {
                    t = k_7;
                  }
                return(t);
              }
              t = map_1_0(y_0, t);
              m_2 = t;
              t = (ATerm) ATmakeAppl(sym_RDef_3, x_1, m_2, a_2);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              x_1 = ATgetArgument(t, 0);
              y_1 = ATgetArgument(t, 1);
              a_2 = ATgetArgument(t, 2);
              q_1 = ATgetArgument(t, 3);
              {
                ATerm v_2 = NULL;
                t = y_1;
                {
                  ATerm b_1 (ATerm t)
                  {
                    ATerm n_7 = t;
                    int o_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm c_1 (ATerm t)
                        {
                          t = term_q_7;
                          return(t);
                        }
                        ATerm d_1 (ATerm t)
                        {
                          t = x_1;
                          return(t);
                        }
                        t = RepairVarDec_2_0(c_1, d_1, t);
                        ;
                        LocalPopChoice(o_7);
                      }
                    else
                      {
                        t = n_7;
                      }
                    return(t);
                  }
                  t = map_1_0(b_1, t);
                  v_2 = t;
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, x_1, v_2, a_2, q_1);
                }
              }
            }
          else
            {
              ATerm c_3 = NULL;
              if(match_cons(t, sym_SDef_3))
                {
                  x_1 = ATgetArgument(t, 0);
                  y_1 = ATgetArgument(t, 1);
                  a_2 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = y_1;
              {
                ATerm e_1 (ATerm t)
                {
                  ATerm r_7 = t;
                  int t_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_1 (ATerm t)
                      {
                        t = term_q_7;
                        return(t);
                      }
                      ATerm g_1 (ATerm t)
                      {
                        t = x_1;
                        return(t);
                      }
                      t = RepairVarDec_2_0(f_1, g_1, t);
                      ;
                      LocalPopChoice(t_7);
                    }
                  else
                    {
                      t = r_7;
                    }
                  return(t);
                }
                t = map_1_0(e_1, t);
                c_3 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, x_1, c_3, a_2);
              }
            }
        }
    }
  return(t);
}
ATerm sometd_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm u_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_87(t);
        ;
        LocalPopChoice(v_7);
      }
    else
      {
        t = u_7;
        t = SRTS_some(d_3, t);
      }
    return(t);
  }
  t = d_3(t);
  return(t);
}
ATerm _2_0 (ATerm c_67 (ATerm), ATerm d_67 (ATerm), ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,h_3 = NULL,i_3 = NULL,l_3 = NULL,m_3 = NULL;
  m_3 = t;
  if(match_cons(t, sym__2))
    {
      f_3 = ATgetArgument(t, 0);
      h_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_3);
  e_3 = t;
  t = f_3;
  t = c_67(t);
  i_3 = t;
  t = h_3;
  t = d_67(t);
  l_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, i_3, l_3), e_3);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm c_108 (ATerm), ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,e_4 = NULL;
  if(match_cons(t, sym__2))
    {
      z_3 = ATgetArgument(t, 0);
      a_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_3, term_y_7);
  t = open_stream_0_0(t);
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_4, a_4);
  t = c_108(t);
  t = fclose_0_0(t);
  t = a_4;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL;
  f_4 = t;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm z_7 = t;
      int a_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((g_4 != NULL) && (g_4 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_4 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_1, t);
          ;
          LocalPopChoice(a_8);
        }
      else
        {
          t = z_7;
          t = term_c_8;
          if(((g_4 != NULL) && (g_4 != t)))
            _fail(t);
          else
            g_4 = t;
        }
      return(t);
    }
    t = _2_0(h_1, _id, t);
    t = f_4;
    {
      ATerm k_1 (ATerm t)
      {
        ATerm w_0 = NULL;
        w_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_4), w_0);
        return(t);
      }
      t = _2_0(_id, k_1, t);
      {
        ATerm d_8 = t;
        int e_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              ATerm p_1 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(p_1, t);
              return(t);
            }
            ATerm o_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm h_8 = ATgetArgument(t, 0);
                    if(match_cons(h_8, sym_Stream_1))
                      {
                        i_4 = ATgetArgument(h_8, 0);
                      }
                    else
                      _fail(t);
                    j_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(i_4, j_4);
                k_4 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, k_4);
                return(t);
              }
              t = WriteToFile_1_0(r_1, t);
              return(t);
            }
            t = _2_0(n_1, o_1, t);
            ;
            LocalPopChoice(e_8);
          }
        else
          {
            t = d_8;
            {
              ATerm u_1 (ATerm t)
              {
                ATerm v_1 (ATerm t)
                {
                  ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm j_8 = ATgetArgument(t, 0);
                      if(match_cons(j_8, sym_Stream_1))
                        {
                          l_4 = ATgetArgument(j_8, 0);
                        }
                      else
                        _fail(t);
                      m_4 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(l_4, m_4);
                  n_4 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), n_4);
                  o_4 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, o_4);
                  return(t);
                }
                t = WriteToFile_1_0(v_1, t);
                return(t);
              }
              t = _2_0(_id, u_1, t);
            }
          }
      }
    }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm e_111 (ATerm), ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL;
  p_4 = t;
  t = dtime_0_0(t);
  t = p_4;
  t = e_111(t);
  q_4 = t;
  t = dtime_0_0(t);
  r_4 = t;
  t = q_4;
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_4), (ATerm) ATmakeAppl(sym_Runtime_1, r_4)), t_4);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_5 (ATerm b_5, ATerm t)
  {
    t = SSL_fclose(b_5);
    return(t);
  }
  ATerm g_5 = NULL,j_5 = NULL;
  j_5 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_5 = ATgetArgument(t, 0);
      {
        ATerm k_8 = t;
        int l_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_5);
            ;
            LocalPopChoice(l_8);
          }
        else
          {
            t = k_8;
            t = n_5(j_5, t);
          }
      }
    }
  else
    {
      t = n_5(j_5, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_5 = NULL;
  t = SSL_stdin_stream();
  o_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_5);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_5 = NULL;
  t = SSL_stdout_stream();
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_5);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_5 = NULL;
  t = SSL_stderr_stream();
  q_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_5);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_8 = ATgetArgument(t, 0);
      ATerm p_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_8 = t;
    int u_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 = NULL,l_1 = NULL;
        j_1 = t;
        t = SSL_explode_term(j_1);
        if(match_cons(t, sym__2))
          {
            ATerm v_8 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_8) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_8 = ATgetArgument(t, 1);
              if(((ATgetType(w_8) == AT_LIST) && !(ATisEmpty(w_8))))
                {
                  l_1 = ATgetFirst((ATermList) w_8);
                  {
                    ATerm z_8 = (ATerm) ATgetNext((ATermList) w_8);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = l_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = l_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = l_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = l_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(u_8);
      }
    else
      {
        t = t_8;
        {
          ATerm b_9 = t;
          int c_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL;
              ATerm w_1 (ATerm t)
              {
                ATerm z_5 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    z_5 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = z_5;
                return(t);
              }
              t = _2_0(w_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  w_5 = ATgetArgument(t, 0);
                  x_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(w_5, x_5);
              y_5 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, y_5);
              ;
              LocalPopChoice(c_9);
            }
          else
            {
              t = b_9;
              {
                ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
                ATerm z_1 (ATerm t)
                {
                  ATerm d_6 = NULL;
                  d_6 = t;
                  t = SSL_is_string(d_6);
                  return(t);
                }
                t = _2_0(z_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    a_6 = ATgetArgument(t, 0);
                    b_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(a_6, b_6);
                c_6 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, c_6);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_6 = NULL,g_6 = NULL,i_6 = NULL;
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_6 = NULL;
      j_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_6, term_g_9);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      {
        ATerm m_1 = NULL;
        m_1 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_1), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = m_1;
        _fail(t);
      }
    }
  e_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(i_6);
  g_6 = t;
  t = e_6;
  t = fclose_0_0(t);
  t = g_6;
  return(t);
}
ATerm fetch_1_0 (ATerm v_92 (ATerm), ATerm t)
{
  ATerm o_6 (ATerm t)
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(v_92, _id, t);
        ;
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
        t = Cons_2_0(_id, o_6, t);
      }
    return(t);
  }
  t = o_6(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(n_9);
    }
  else
    {
      t = l_9;
      {
        ATerm r_6 = NULL,s_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_6 = ATgetFirst((ATermList) t);
            s_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_6;
        {
          ATerm b_2 (ATerm t)
          {
            t = s_6;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(b_2, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm b_93 (ATerm), ATerm t)
{
  ATerm y_6 (ATerm t)
  {
    ATerm q_9 = t;
    int w_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, y_6, t);
        ;
        LocalPopChoice(w_9);
      }
    else
      {
        t = q_9;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_93(t);
      }
    return(t);
  }
  t = y_6(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm a_7 = NULL;
  ATerm c_2 (ATerm t)
  {
    ATerm b_7 = NULL;
    b_7 = t;
    t = SSL_explode_string(b_7);
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm c_7 = NULL;
    c_7 = t;
    t = SSL_explode_string(c_7);
    return(t);
  }
  t = _2_0(c_2, d_2, t);
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_7 = NULL,f_7 = NULL;
        if(match_cons(t, sym__2))
          {
            e_7 = ATgetArgument(t, 0);
            f_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_7;
        {
          ATerm e_2 (ATerm t)
          {
            t = f_7;
            return(t);
          }
          t = at_end_1_0(e_2, t);
        }
        ;
        LocalPopChoice(y_9);
      }
    else
      {
        t = x_9;
        {
          ATerm s_1 = NULL,t_1 = NULL;
          s_1 = t;
          t = SSL_explode_term(s_1);
          if(match_cons(t, sym__2))
            {
              ATerm z_9 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) z_9) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              t_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_1;
          t = concat_0_0(t);
        }
      }
    a_7 = t;
    t = SSL_implode_string(a_7);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_10 = t;
  int b_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_7 = NULL;
      s_7 = t;
      t = SSL_is_string(s_7);
      ;
      LocalPopChoice(b_10);
    }
  else
    {
      t = a_10;
      {
        ATerm c_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_2 (ATerm t)
            {
              ATerm j_10 = t;
              int k_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(k_10);
                }
              else
                {
                  t = j_10;
                }
              return(t);
            }
            t = map_1_0(f_2, t);
            ;
            LocalPopChoice(i_10);
          }
        else
          {
            t = c_10;
            {
              ATerm w_7 = NULL,x_7 = NULL,b_8 = NULL;
              w_7 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_7 = ATgetArgument(t, 0);
                  t = x_7;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_7 = ATgetArgument(t, 0);
                      t = x_7;
                      {
                        ATerm m_10 = t;
                        int q_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), x_7);
                            {
                              ATerm r_10 = t;
                              int u_10 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm k_3 = NULL;
                                  t = eval_config_0_0(t);
                                  k_3 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), x_7, k_3);
                                  t = k_3;
                                  ;
                                  LocalPopChoice(u_10);
                                }
                              else
                                {
                                  t = r_10;
                                }
                            }
                            ;
                            LocalPopChoice(q_10);
                          }
                        else
                          {
                            t = m_10;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_7), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = x_7;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm f_8 = NULL,g_8 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_7 = ATgetArgument(t, 0);
                          b_8 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_7;
                      t = eval_config_0_0(t);
                      f_8 = t;
                      t = b_8;
                      t = eval_config_0_0(t);
                      g_8 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_8, g_8);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm g_109 (ATerm), ATerm t)
{
  ATerm v_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_8 = NULL,o_8 = NULL;
      m_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm y_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_3 = NULL;
            t = eval_config_0_0(t);
            u_3 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), u_3);
            t = u_3;
            ;
            LocalPopChoice(a_11);
          }
        else
          {
            t = y_10;
          }
        o_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_8, term_b_11);
        t = geq_0_0(t);
        t = m_8;
        t = g_109(t);
      }
      ;
      LocalPopChoice(x_10);
    }
  else
    {
      t = v_10;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm q_8 = NULL;
    q_8 = t;
    if(match_string(t, "-k"))
      {
        t = q_8;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = q_8;
      }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm r_8 = NULL,s_8 = NULL;
    r_8 = t;
    t = SSL_string_to_int(r_8);
    s_8 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), s_8);
    t = r_8;
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_c_11;
    return(t);
  }
  t = ArgOption_3_0(g_2, i_2, j_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_2 (ATerm t)
      {
        ATerm x_8 = NULL;
        x_8 = t;
        if(match_string(t, "-S"))
          {
            t = x_8;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = x_8;
          }
        return(t);
      }
      ATerm l_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_h_11;
        return(t);
      }
      ATerm n_2 (ATerm t)
      {
        t = term_i_11;
        return(t);
      }
      t = Option_3_0(k_2, l_2, n_2, t);
      ;
      LocalPopChoice(f_11);
    }
  else
    {
      t = e_11;
      {
        ATerm j_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm p_2 (ATerm t)
            {
              ATerm y_8 = NULL,a_9 = NULL;
              y_8 = t;
              t = SSL_string_to_int(y_8);
              a_9 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), a_9);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, y_8);
              return(t);
            }
            ATerm q_2 (ATerm t)
            {
              t = term_o_11;
              return(t);
            }
            t = ArgOption_3_0(o_2, p_2, q_2, t);
            ;
            LocalPopChoice(n_11);
          }
        else
          {
            t = j_11;
            {
              ATerm r_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm s_2 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_q_11;
                return(t);
              }
              ATerm t_2 (ATerm t)
              {
                t = term_s_11;
                return(t);
              }
              t = Option_3_0(r_2, s_2, t_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm d_9 = NULL,h_9 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_9 = NULL;
      t = term_v_5;
      t = d_0(t);
      i_9 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_11, term_z_11, i_9);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm m_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_9 = ATgetFirst((ATermList) t);
          h_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_9;
      t = a_0(t);
      t = term_v_5;
      t = b_0(t);
      m_9 = t;
      t = (ATerm) ATinsert(CheckATermList(h_9), m_9);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm o_9 = NULL;
    o_9 = t;
    if(match_string(t, "-o"))
      {
        t = o_9;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = o_9;
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    ATerm p_9 = NULL;
    p_9 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), p_9);
    t = (ATerm) ATmakeAppl(sym_Output_1, p_9);
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_a_12;
    return(t);
  }
  t = ArgOption_3_0(u_2, w_2, x_2, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
  if(match_cons(t, sym__3))
    {
      s_9 = ATgetArgument(t, 0);
      t_9 = ATgetArgument(t, 1);
      u_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_9, t_9);
  {
    ATerm b_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_12 = ATgetArgument(t, 0);
            ATerm k_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(s_9, t_9);
        ;
        LocalPopChoice(i_12);
      }
    else
      {
        t = b_12;
        t = (ATerm) ATempty;
      }
    v_9 = t;
    t = SSL_table_put(s_9, t_9, (ATerm) ATinsert(CheckATermList(v_9), u_9));
    t = (ATerm) ATmakeAppl(sym__3, s_9, t_9, u_9);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_10 = NULL;
      t = term_v_5;
      t = j_0(t);
      h_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_11, term_z_11, h_10);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm l_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_10 = ATgetFirst((ATermList) t);
          e_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_10;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_10 = ATgetFirst((ATermList) t);
          g_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_10;
      t = h_0(t);
      t = f_10;
      t = i_0(t);
      l_10 = t;
      t = (ATerm) ATinsert(CheckATermList(g_10), l_10);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm n_10 = NULL;
    n_10 = t;
    if(match_string(t, "-i"))
      {
        t = n_10;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = n_10;
      }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    ATerm o_10 = NULL;
    o_10 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), o_10);
    t = (ATerm) ATmakeAppl(sym_Input_1, o_10);
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_q_12;
    return(t);
  }
  t = ArgOption_3_0(y_2, z_2, a_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_10 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_5;
  t = whoami_0_0(t);
  p_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), p_10));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_4 = NULL;
        t = eval_config_0_0(t);
        b_4 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), b_4);
        t = b_4;
        ;
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm t)
{
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_97(t);
      ;
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      {
        ATerm s_10 = NULL,t_10 = NULL,w_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_10 = ATgetFirst((ATermList) t);
            t_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_10;
        t = foldr_2_0(k_97, l_97, t);
        w_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_10, w_10);
        t = l_97(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_10 = NULL,c_4 = NULL,d_4 = NULL;
  t = times_0_0(t);
  c_4 = t;
  t = SSL_explode_term(c_4);
  if(match_cons(t, sym__2))
    {
      ATerm x_12 = ATgetArgument(t, 0);
      d_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_4;
  {
    ATerm b_3 (ATerm t)
    {
      t = term_g_11;
      return(t);
    }
    ATerm g_3 (ATerm t)
    {
      ATerm v_4 = NULL,w_4 = NULL;
      if(match_cons(t, sym__2))
        {
          v_4 = ATgetArgument(t, 0);
          w_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm e_13 = t;
        int f_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(v_4, w_4);
            ;
            LocalPopChoice(f_13);
          }
        else
          {
            t = e_13;
            t = SSL_addr(v_4, w_4);
          }
      }
      return(t);
    }
    t = foldr_2_0(b_3, g_3, t);
    z_10 = t;
    t = SSL_TicksToSeconds(z_10);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL;
  k_11 = t;
  if(match_cons(t, sym__2))
    {
      l_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_11;
        if((l_11 != t))
          {
            _fail(t);
          }
        t = k_11;
        ;
        LocalPopChoice(m_13);
      }
    else
      {
        t = j_13;
        t = k_11;
        {
          ATerm n_13 = t;
          int o_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_11, m_11);
              ;
              LocalPopChoice(o_13);
            }
          else
            {
              t = n_13;
              t = SSL_gtr(l_11, m_11);
            }
          t = (ATerm) ATmakeAppl(sym__2, l_11, m_11);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_109 (ATerm), ATerm t)
{
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_11 = NULL,r_11 = NULL;
      p_11 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm w_13 = t;
        int x_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_6 = NULL;
            t = eval_config_0_0(t);
            h_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_6);
            t = h_6;
            ;
            LocalPopChoice(x_13);
          }
        else
          {
            t = w_13;
          }
        r_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_11, term_y_13);
        t = geq_0_0(t);
        t = p_11;
        t = f_109(t);
      }
      ;
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    ATerm t_11 = NULL,u_11 = NULL;
    t = run_time_0_0(t);
    t_11 = t;
    t = term_v_5;
    t = whoami_0_0(t);
    u_11 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), t_11), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), u_11));
    t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_14), t_11), term_z_13), u_11));
    return(t);
  }
  t = if_verbose1_1_0(j_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm c_112 (ATerm), ATerm t)
{
  ATerm b_14 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm d_14 = t;
        int e_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_7 = NULL;
            t = eval_config_0_0(t);
            l_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), l_7);
            t = l_7;
            ;
            LocalPopChoice(e_14);
          }
        else
          {
            t = d_14;
          }
      }
      ;
      LocalPopChoice(c_14);
    }
  else
    {
      t = b_14;
      {
        ATerm n_3 (ATerm t)
        {
          ATerm g_14 = t;
          int h_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(h_14);
            }
          else
            {
              t = g_14;
              {
                ATerm i_14 = t;
                int j_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(j_14);
                  }
                else
                  {
                    t = i_14;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(n_3, t);
      }
    }
  t = c_112(t);
  return(t);
}
ATerm map_1_0 (ATerm k_92 (ATerm), ATerm t)
{
  ATerm v_11 (ATerm t)
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        t = Cons_2_0(k_92, v_11, t);
      }
    return(t);
  }
  t = v_11(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_11 = ATgetFirst((ATermList) t);
      y_11 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_12 = NULL,d_12 = NULL;
        t = y_11;
        t = g_0(t);
        c_12 = t;
        t = x_11;
        t = f_0(t);
        d_12 = t;
        t = y_11;
        {
          ATerm o_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(c_12), d_12);
            return(t);
          }
          t = reverse_acc_2_0(f_0, o_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_5;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm j_84 (ATerm), ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL;
  h_12 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_12);
  e_12 = t;
  t = f_12;
  t = j_84(t);
  g_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, g_12), e_12);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm u_14 = t;
        int v_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_7 = NULL;
            t = eval_config_0_0(t);
            p_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), p_7);
            t = p_7;
            ;
            LocalPopChoice(v_14);
          }
        else
          {
            t = u_14;
          }
      }
      ;
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      {
        ATerm p_3 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(p_3, t);
      }
    }
  t = term_w_14;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm q_3 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, q_3, t);
    {
      ATerm r_3 (ATerm t)
      {
        ATerm l_12 = NULL;
        l_12 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, l_12), term_x_14);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(r_3, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm k_84 (ATerm), ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
  p_12 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      n_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_12);
  m_12 = t;
  t = n_12;
  t = k_84(t);
  o_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, o_12), m_12);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL;
  t_12 = t;
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_12;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_15 = ATgetFirst((ATermList) t);
                ATerm b_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_12;
          }
        ;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        t = (ATerm) ATinsert(ATempty, t_12);
      }
    u_12 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), u_12);
    t = t_12;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_8 = NULL;
        t = eval_config_0_0(t);
        i_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_8);
        t = i_8;
        ;
        LocalPopChoice(d_15);
      }
    else
      {
        t = c_15;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_3 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm t_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_i_15;
        return(t);
      }
      ATerm v_3 (ATerm t)
      {
        t = term_j_15;
        return(t);
      }
      t = Option_3_0(s_3, t_3, v_3, t);
      ;
      LocalPopChoice(f_15);
    }
  else
    {
      t = e_15;
      {
        ATerm w_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm x_3 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_k_15;
          return(t);
        }
        ATerm y_3 (ATerm t)
        {
          t = term_l_15;
          return(t);
        }
        t = Option_3_0(w_3, x_3, y_3, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_71 (ATerm), ATerm s_71 (ATerm), ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
  d_13 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_12 = ATgetFirst((ATermList) t);
      a_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_13);
  y_12 = t;
  t = z_12;
  t = r_71(t);
  b_13 = t;
  t = a_13;
  t = s_71(t);
  c_13 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(c_13), b_13), y_12);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_114 (ATerm), ATerm t)
{
  ATerm h_13 = NULL;
  h_13 = t;
  {
    ATerm m_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_15;
        t = f_114(t);
        ;
        LocalPopChoice(n_15);
      }
    else
      {
        t = m_15;
      }
    t = h_13;
    {
      ATerm h_4 (ATerm t)
      {
        ATerm i_13 = NULL;
        i_13 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_13);
        t = (ATerm) ATmakeAppl(sym_Program_1, i_13);
        return(t);
      }
      ATerm u_4 (ATerm t)
      {
        ATerm p_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_15 = t;
            int s_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(s_15);
              }
            else
              {
                t = r_15;
                t = f_114(t);
                t = Cons_2_0(_id, u_4, t);
              }
            ;
            LocalPopChoice(q_15);
          }
        else
          {
            t = p_15;
            {
              ATerm k_13 = NULL,l_13 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_13 = ATgetFirst((ATermList) t);
                  l_13 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(l_13), (ATerm) ATmakeAppl(sym_Undefined_1, k_13));
            }
          }
        return(t);
      }
      t = Cons_2_0(h_4, u_4, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm e_114 (ATerm), ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
  s_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = s_13;
  {
    ATerm x_4 (ATerm t)
    {
      ATerm t_15 = t;
      int u_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_114(t);
          ;
          LocalPopChoice(u_15);
        }
      else
        {
          t = t_15;
          {
            ATerm v_15 = t;
            int w_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_4 (ATerm t)
                {
                  ATerm v_13 = NULL;
                  v_13 = t;
                  if(match_string(t, "--help"))
                    {
                      t = v_13;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = v_13;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = v_13;
                        }
                    }
                  return(t);
                }
                ATerm z_4 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_x_15;
                  return(t);
                }
                ATerm a_5 (ATerm t)
                {
                  t = term_y_15;
                  return(t);
                }
                t = Option_3_0(y_4, z_4, a_5, t);
                ;
                LocalPopChoice(w_15);
              }
            else
              {
                t = v_15;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_4, t);
    {
      ATerm z_15 = t;
      int a_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_14 = NULL;
          f_14 = t;
          {
            ATerm b_16 = t;
            int c_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = f_14;
                {
                  ATerm d_16 = t;
                  int e_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm f_16 = t;
                        int g_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm r_9 = NULL;
                            t = eval_config_0_0(t);
                            r_9 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), r_9);
                            t = r_9;
                            ;
                            LocalPopChoice(g_16);
                          }
                        else
                          {
                            t = f_16;
                          }
                      }
                      ;
                      LocalPopChoice(e_16);
                    }
                  else
                    {
                      t = d_16;
                      {
                        ATerm c_5 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(c_5, t);
                      }
                    }
                  t = f_14;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(c_16);
              }
            else
              {
                t = b_16;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm h_16 = t;
                  int i_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_11 = NULL;
                      t = eval_config_0_0(t);
                      d_11 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), d_11);
                      t = d_11;
                      ;
                      LocalPopChoice(i_16);
                    }
                  else
                    {
                      t = h_16;
                    }
                  t = f_14;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(a_16);
        }
      else
        {
          t = z_15;
          {
            ATerm j_16 = t;
            int k_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_5 (ATerm t)
                {
                  ATerm e_5 (ATerm t)
                  {
                    if(((t_13 != NULL) && (t_13 != t)))
                      _fail(t);
                    else
                      t_13 = t;
                    return(t);
                  }
                  t = Undefined_1_0(e_5, t);
                  return(t);
                }
                t = fetch_1_0(d_5, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_13)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_13)), term_l_16));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(k_16);
              }
            else
              {
                t = j_16;
              }
          }
        }
      u_13 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = u_13;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm t)
{
  ATerm k_14 = NULL;
  t = parse_options_1_0(e_112, t);
  k_14 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), k_14);
  t = k_14;
  t = g_112(t);
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_112, t);
        ;
        LocalPopChoice(n_16);
      }
    else
      {
        t = m_16;
        {
          ATerm o_16 = t;
          int p_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_112(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(p_16);
            }
          else
            {
              t = o_16;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm p_111 (ATerm), ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm q_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_111(t);
        ;
        LocalPopChoice(r_16);
      }
    else
      {
        t = q_16;
        {
          ATerm s_16 = t;
          int t_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(t_16);
            }
          else
            {
              t = s_16;
              {
                ATerm u_16 = t;
                int v_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(v_16);
                  }
                else
                  {
                    t = u_16;
                    {
                      ATerm w_16 = t;
                      int x_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm k_5 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm l_5 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_y_16;
                            return(t);
                          }
                          ATerm m_5 (ATerm t)
                          {
                            t = term_z_16;
                            return(t);
                          }
                          t = Option_3_0(k_5, l_5, m_5, t);
                          ;
                          LocalPopChoice(x_16);
                        }
                      else
                        {
                          t = w_16;
                          {
                            ATerm a_17 = t;
                            int b_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(b_17);
                              }
                            else
                              {
                                t = a_17;
                                t = keep_option_0_0(t);
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
  ATerm h_5 (ATerm t)
  {
    ATerm r_5 (ATerm t)
    {
      ATerm l_14 = NULL,m_14 = NULL;
      l_14 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm c_17 = t;
        int d_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_13 = NULL;
            t = eval_config_0_0(t);
            g_13 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_13);
            t = g_13;
            ;
            LocalPopChoice(d_17);
          }
        else
          {
            t = c_17;
          }
        m_14 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, m_14));
        t = l_14;
      }
      return(t);
    }
    t = if_verbose2_1_0(r_5, t);
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    ATerm n_14 = NULL,o_14 = NULL,r_13 = NULL;
    n_14 = t;
    {
      ATerm e_17 = t;
      int f_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((o_14 != NULL) && (o_14 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_14 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(s_5, t);
          ;
          LocalPopChoice(f_17);
        }
      else
        {
          t = e_17;
          t = term_g_17;
          o_14 = t;
        }
      t = not_null(o_14);
      t = ReadFromFile_0_0(t);
      r_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_14, r_13);
      t = apply_strategy_1_0(n_111, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(f_5, p_111, h_5, i_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    ATerm u_5 (ATerm t)
    {
      ATerm h_17 = t;
      int i_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_14 = NULL;
          t = sometd_1_0(RepairDefinition_0_0, t);
          p_14 = t;
          t = explanation_0_0(t);
          t = p_14;
          ;
          LocalPopChoice(i_17);
        }
      else
        {
          t = h_17;
        }
      return(t);
    }
    t = _2_0(_id, u_5, t);
    return(t);
  }
  t = iowrap_3_0(t_5, _fail, default_usage_0_0, t);
  return(t);
}
