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
ATerm term_e_17;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_j_16;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_m_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_v_14;
ATerm term_o_14;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_b_12;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_i_9;
ATerm term_b_8;
ATerm term_r_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_j_6;
void init_constant_terms (void)
{
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\n** Warning: Starting with Stratego 0.9.3 the calling convention of\n   strategies has been changed such that the current term is the *last*\n   argument. For most strategy definitions this is not a problem. Only\n   strategies which explicitly declare the type of a higher-order\n   strategy argument are affected. The argument declarations should be\n   changed such that the current term is the last argument. This change\n   is currently done automatically by the compiler. In the future source\n   programs are expected to incorporate this change.\n", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_11);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym__3, term_c_15, term_d_15, term_j_6);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm explanation_0_0 (ATerm);
ATerm RepairVarDec_2_0 (ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm);
ATerm map1_1_0 (ATerm l_92 (ATerm), ATerm);
ATerm y_0 (ATerm);
ATerm b_1 (ATerm);
ATerm e_1 (ATerm);
ATerm i_1 (ATerm);
ATerm RepairDefinition_0_0 (ATerm);
ATerm sometd_1_0 (ATerm w_87 (ATerm), ATerm);
ATerm _2_0 (ATerm b_67 (ATerm), ATerm c_67 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm b_108 (ATerm), ATerm);
ATerm n_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm z_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm d_111 (ATerm), ATerm);
ATerm h_5 (ATerm b_5, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm u_92 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm a_93 (ATerm), ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm i_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm m_109 (ATerm), ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm x_2 (ATerm);
ATerm z_2 (ATerm);
ATerm b_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm j_97 (ATerm), ATerm k_97 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm l_109 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm s_3 (ATerm);
ATerm need_help_1_0 (ATerm b_112 (ATerm), ATerm);
ATerm map_1_0 (ATerm j_92 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm i_84 (ATerm), ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm j_84 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_71 (ATerm), ATerm r_71 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm e_114 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm parse_options_1_0 (ATerm d_114 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm d_112 (ATerm), ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm);
ATerm l_5 (ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm c_6 (ATerm);
ATerm iowrap_3_0 (ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
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
  t = term_j_6;
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
  t = (ATerm) ATmakeAppl(sym__2, term_k_6, (ATerm) ATinsert(ATempty, term_l_6));
  return(t);
}
ATerm RepairVarDec_2_0 (ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm t)
{
  ATerm m_0 = NULL,n_0 = NULL,o_0 = NULL,p_0 = NULL,r_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      m_0 = ATgetArgument(t, 0);
      {
        ATerm n_6 = ATgetArgument(t, 1);
        if(match_cons(n_6, sym_FunType_2))
          {
            ATerm o_6 = ATgetArgument(n_6, 0);
            if(((ATgetType(o_6) == AT_LIST) && !(ATisEmpty(o_6))))
              {
                ATerm r_6 = ATgetFirst((ATermList) o_6);
                if(match_cons(r_6, sym_ConstType_1))
                  {
                    n_0 = ATgetArgument(r_6, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm s_6 = (ATerm) ATgetNext((ATermList) o_6);
                  o_0 = s_6;
                  if(((ATgetType(s_6) == AT_LIST) && !(ATisEmpty(s_6))))
                    {
                      ATerm t_6 = ATgetFirst((ATermList) s_6);
                      if(match_cons(t_6, sym_FunType_2))
                        {
                          ATerm v_6 = ATgetArgument(t_6, 0);
                          ATerm x_6 = ATgetArgument(t_6, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm u_6 = (ATerm) ATgetNext((ATermList) s_6);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            p_0 = ATgetArgument(n_6, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  r_0 = t;
  t = o_84(t);
  t_0 = t;
  t = r_0;
  t = p_84(t);
  u_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("' starts with constant type", 0, ATtrue))), u_0), (ATerm) ATmakeAppl(ATmakeSymbol(" '", 0, ATtrue))), t_0), (ATerm) ATmakeAppl(ATmakeSymbol("' of ", 0, ATtrue))), m_0), (ATerm) ATmakeAppl(ATmakeSymbol("** Warning: argument '", 0, ATtrue))));
  t = (ATerm) ATmakeAppl(sym__2, o_0, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, n_0)));
  {
    ATerm y_6 = t;
    int z_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_7 = ATgetArgument(t, 0);
            ATerm g_7 = ATgetArgument(t, 1);
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
        LocalPopChoice(z_6);
      }
    else
      {
        t = y_6;
        {
          ATerm s_0 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, o_0, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, n_0))));
          if(match_cons(t, sym__2))
            {
              ATerm h_7 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) h_7) != ATmakeSymbol("", 0, ATtrue)))
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
ATerm map1_1_0 (ATerm l_92 (ATerm), ATerm t)
{
  ATerm i_7 = t;
  int j_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(l_92, _id, t);
      {
        ATerm l_0 (ATerm t)
        {
          ATerm k_7 = t;
          int l_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(l_92, t);
              ;
              LocalPopChoice(l_7);
            }
          else
            {
              t = k_7;
            }
          return(t);
        }
        t = Cons_2_0(_id, l_0, t);
      }
      ;
      LocalPopChoice(j_7);
    }
  else
    {
      t = i_7;
      {
        ATerm q_0 (ATerm t)
        {
          t = map1_1_0(l_92, t);
          return(t);
        }
        t = Cons_2_0(_id, q_0, t);
      }
    }
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = term_m_7;
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_m_7;
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_n_7;
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_n_7;
  return(t);
}
ATerm RepairDefinition_0_0 (ATerm t)
{
  ATerm h_1 = NULL,p_1 = NULL,q_1 = NULL,v_1 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      p_1 = ATgetArgument(t, 0);
      q_1 = ATgetArgument(t, 1);
      v_1 = ATgetArgument(t, 2);
      h_1 = ATgetArgument(t, 3);
      {
        ATerm g_2 = NULL;
        t = q_1;
        {
          ATerm x_0 (ATerm t)
          {
            ATerm z_0 (ATerm t)
            {
              t = p_1;
              return(t);
            }
            t = RepairVarDec_2_0(y_0, z_0, t);
            return(t);
          }
          t = map1_1_0(x_0, t);
          g_2 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, p_1, g_2, v_1, h_1);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          p_1 = ATgetArgument(t, 0);
          q_1 = ATgetArgument(t, 1);
          v_1 = ATgetArgument(t, 2);
          {
            ATerm m_2 = NULL;
            t = q_1;
            {
              ATerm a_1 (ATerm t)
              {
                ATerm c_1 (ATerm t)
                {
                  t = p_1;
                  return(t);
                }
                t = RepairVarDec_2_0(b_1, c_1, t);
                return(t);
              }
              t = map1_1_0(a_1, t);
              m_2 = t;
              t = (ATerm) ATmakeAppl(sym_RDef_3, p_1, m_2, v_1);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              p_1 = ATgetArgument(t, 0);
              q_1 = ATgetArgument(t, 1);
              v_1 = ATgetArgument(t, 2);
              h_1 = ATgetArgument(t, 3);
              {
                ATerm s_2 = NULL;
                t = q_1;
                {
                  ATerm d_1 (ATerm t)
                  {
                    ATerm f_1 (ATerm t)
                    {
                      t = p_1;
                      return(t);
                    }
                    t = RepairVarDec_2_0(e_1, f_1, t);
                    return(t);
                  }
                  t = map1_1_0(d_1, t);
                  s_2 = t;
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, p_1, s_2, v_1, h_1);
                }
              }
            }
          else
            {
              ATerm y_2 = NULL;
              if(match_cons(t, sym_SDef_3))
                {
                  p_1 = ATgetArgument(t, 0);
                  q_1 = ATgetArgument(t, 1);
                  v_1 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = q_1;
              {
                ATerm g_1 (ATerm t)
                {
                  ATerm j_1 (ATerm t)
                  {
                    t = p_1;
                    return(t);
                  }
                  t = RepairVarDec_2_0(i_1, j_1, t);
                  return(t);
                }
                t = map1_1_0(g_1, t);
                y_2 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, p_1, y_2, v_1);
              }
            }
        }
    }
  return(t);
}
ATerm sometd_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm o_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_87(t);
        ;
        LocalPopChoice(q_7);
      }
    else
      {
        t = o_7;
        t = SRTS_some(a_3, t);
      }
    return(t);
  }
  t = a_3(t);
  return(t);
}
ATerm _2_0 (ATerm b_67 (ATerm), ATerm c_67 (ATerm), ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,k_3 = NULL;
  k_3 = t;
  if(match_cons(t, sym__2))
    {
      d_3 = ATgetArgument(t, 0);
      e_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_3);
  c_3 = t;
  t = d_3;
  t = b_67(t);
  f_3 = t;
  t = e_3;
  t = c_67(t);
  g_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, f_3, g_3), c_3);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm b_108 (ATerm), ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,q_3 = NULL;
  if(match_cons(t, sym__2))
    {
      n_3 = ATgetArgument(t, 0);
      o_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_3, term_r_7);
  t = open_stream_0_0(t);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_3, o_3);
  t = b_108(t);
  t = fclose_0_0(t);
  t = o_3;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = fetch_1_0(u_1, t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = WriteToFile_1_0(w_1, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm v_3 = NULL,b_4 = NULL,h_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_7 = ATgetArgument(t, 0);
      if(match_cons(s_7, sym_Stream_1))
        {
          v_3 = ATgetArgument(s_7, 0);
        }
      else
        _fail(t);
      b_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(v_3, b_4);
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_4);
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = WriteToFile_1_0(z_1, t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL,n_4 = NULL,o_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_7 = ATgetArgument(t, 0);
      if(match_cons(w_7, sym_Stream_1))
        {
          i_4 = ATgetArgument(w_7, 0);
        }
      else
        _fail(t);
      j_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(i_4, j_4);
  n_4 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), n_4);
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_4);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm r_3 = NULL,u_3 = NULL;
  r_3 = t;
  {
    ATerm k_1 (ATerm t)
    {
      ATerm x_7 = t;
      int y_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((u_3 != NULL) && (u_3 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_3 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_1, t);
          ;
          LocalPopChoice(y_7);
        }
      else
        {
          t = x_7;
          t = term_b_8;
          if(((u_3 != NULL) && (u_3 != t)))
            _fail(t);
          else
            u_3 = t;
        }
      return(t);
    }
    t = _2_0(k_1, _id, t);
    t = r_3;
    {
      ATerm m_1 (ATerm t)
      {
        ATerm w_0 = NULL;
        w_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_3), w_0);
        return(t);
      }
      t = _2_0(_id, m_1, t);
      {
        ATerm c_8 = t;
        int d_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(n_1, t_1, t);
            ;
            LocalPopChoice(d_8);
          }
        else
          {
            t = c_8;
            t = _2_0(_id, x_1, t);
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
ATerm apply_strategy_1_0 (ATerm d_111 (ATerm), ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL;
  p_4 = t;
  t = dtime_0_0(t);
  t = p_4;
  t = d_111(t);
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
ATerm h_5 (ATerm b_5, ATerm t)
{
  t = SSL_fclose(b_5);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL;
  f_5 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_5 = ATgetArgument(t, 0);
      {
        ATerm e_8 = t;
        int f_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_5);
            ;
            LocalPopChoice(f_8);
          }
        else
          {
            t = e_8;
            t = h_5(f_5, t);
          }
      }
    }
  else
    {
      t = h_5(f_5, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_5 = NULL;
  t = SSL_stdin_stream();
  i_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_5);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_5 = NULL;
  t = SSL_stdout_stream();
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_5);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_5 = NULL;
  t = SSL_stderr_stream();
  k_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_5);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm u_5 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      u_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_5;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm a_6 = NULL;
  a_6 = t;
  t = SSL_is_string(a_6);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_8 = ATgetArgument(t, 0);
      ATerm j_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_1 = NULL,r_1 = NULL;
        o_1 = t;
        t = SSL_explode_term(o_1);
        if(match_cons(t, sym__2))
          {
            ATerm q_8 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_8) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm s_8 = ATgetArgument(t, 1);
              if(((ATgetType(s_8) == AT_LIST) && !(ATisEmpty(s_8))))
                {
                  r_1 = ATgetFirst((ATermList) s_8);
                  {
                    ATerm w_8 = (ATerm) ATgetNext((ATermList) s_8);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = r_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = r_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = r_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = r_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(p_8);
      }
    else
      {
        t = l_8;
        {
          ATerm x_8 = t;
          int a_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_5 = NULL,r_5 = NULL,t_5 = NULL;
              t = _2_0(b_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  p_5 = ATgetArgument(t, 0);
                  r_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(p_5, r_5);
              t_5 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, t_5);
              ;
              LocalPopChoice(a_9);
            }
          else
            {
              t = x_8;
              {
                ATerm v_5 = NULL,w_5 = NULL,z_5 = NULL;
                t = _2_0(c_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    v_5 = ATgetArgument(t, 0);
                    w_5 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(v_5, w_5);
                z_5 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, z_5);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_6 = NULL,d_6 = NULL,f_6 = NULL;
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_6 = NULL;
      g_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_6, term_i_9);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(d_9);
    }
  else
    {
      t = c_9;
      {
        ATerm s_1 = NULL;
        s_1 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_1), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = s_1;
        _fail(t);
      }
    }
  b_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(f_6);
  d_6 = t;
  t = b_6;
  t = fclose_0_0(t);
  t = d_6;
  return(t);
}
ATerm fetch_1_0 (ATerm u_92 (ATerm), ATerm t)
{
  ATerm m_6 (ATerm t)
  {
    ATerm j_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(u_92, _id, t);
        ;
        LocalPopChoice(m_9);
      }
    else
      {
        t = j_9;
        t = Cons_2_0(_id, m_6, t);
      }
    return(t);
  }
  t = m_6(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(r_9);
    }
  else
    {
      t = o_9;
      {
        ATerm p_6 = NULL,q_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_6 = ATgetFirst((ATermList) t);
            q_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_6;
        {
          ATerm d_2 (ATerm t)
          {
            t = q_6;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(d_2, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm a_93 (ATerm), ATerm t)
{
  ATerm w_6 (ATerm t)
  {
    ATerm s_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, w_6, t);
        ;
        LocalPopChoice(t_9);
      }
    else
      {
        t = s_9;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_93(t);
      }
    return(t);
  }
  t = w_6(t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm b_7 = NULL;
  b_7 = t;
  t = SSL_explode_string(b_7);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm c_7 = NULL;
  c_7 = t;
  t = SSL_explode_string(c_7);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm a_7 = NULL;
  t = _2_0(e_2, f_2, t);
  {
    ATerm u_9 = t;
    int v_9 = stack_ptr;
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
          ATerm h_2 (ATerm t)
          {
            t = f_7;
            return(t);
          }
          t = at_end_1_0(h_2, t);
        }
        ;
        LocalPopChoice(v_9);
      }
    else
      {
        t = u_9;
        {
          ATerm y_1 = NULL,a_2 = NULL;
          y_1 = t;
          t = SSL_explode_term(y_1);
          if(match_cons(t, sym__2))
            {
              ATerm w_9 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_9) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              a_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_2;
          t = concat_0_0(t);
        }
      }
    a_7 = t;
    t = SSL_implode_string(a_7);
  }
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm x_9 = t;
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(y_9);
    }
  else
    {
      t = x_9;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_7 = NULL;
      p_7 = t;
      t = SSL_is_string(p_7);
      ;
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      {
        ATerm b_10 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_2, t);
            ;
            LocalPopChoice(c_10);
          }
        else
          {
            t = b_10;
            {
              ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
              t_7 = t;
              if(match_cons(t, sym_Path_1))
                {
                  u_7 = ATgetArgument(t, 0);
                  t = u_7;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      u_7 = ATgetArgument(t, 0);
                      t = u_7;
                      {
                        ATerm i_10 = t;
                        int j_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), u_7);
                            {
                              ATerm k_10 = t;
                              int m_10 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm z_3 = NULL;
                                  t = eval_config_0_0(t);
                                  z_3 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), u_7, z_3);
                                  t = z_3;
                                  ;
                                  LocalPopChoice(m_10);
                                }
                              else
                                {
                                  t = k_10;
                                }
                            }
                            ;
                            LocalPopChoice(j_10);
                          }
                        else
                          {
                            t = i_10;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_7), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = u_7;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm z_7 = NULL,a_8 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          u_7 = ATgetArgument(t, 0);
                          v_7 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_7;
                      t = eval_config_0_0(t);
                      z_7 = t;
                      t = v_7;
                      t = eval_config_0_0(t);
                      a_8 = t;
                      t = (ATerm) ATmakeAppl(sym__2, z_7, a_8);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm m_109 (ATerm), ATerm t)
{
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_8 = NULL,k_8 = NULL;
      i_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm u_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_4 = NULL;
            t = eval_config_0_0(t);
            k_4 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_4);
            t = k_4;
            ;
            LocalPopChoice(v_10);
          }
        else
          {
            t = u_10;
          }
        k_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_8, term_x_10);
        t = geq_0_0(t);
        t = i_8;
        t = m_109(t);
      }
      ;
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm m_8 = NULL;
  m_8 = t;
  if(match_string(t, "-k"))
    {
      t = m_8;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_8;
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL;
  n_8 = t;
  t = SSL_string_to_int(n_8);
  o_8 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), o_8);
  t = n_8;
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_y_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_2, k_2, l_2, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm t_8 = NULL;
  t_8 = t;
  if(match_string(t, "-S"))
    {
      t = t_8;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_8;
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_b_11;
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_c_11;
  return(t);
}
ATerm q_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL;
  u_8 = t;
  t = SSL_string_to_int(u_8);
  v_8 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), v_8);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_8);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_d_11;
  return(t);
}
ATerm u_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_e_11;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_2, o_2, p_2, t);
      ;
      LocalPopChoice(h_11);
    }
  else
    {
      t = g_11;
      {
        ATerm i_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_2, r_2, t_2, t);
            ;
            LocalPopChoice(j_11);
          }
        else
          {
            t = i_11;
            t = Option_3_0(u_2, v_2, w_2, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_9 = NULL;
      t = term_j_6;
      t = d_0(t);
      b_9 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_11, term_o_11, b_9);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm e_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_8 = ATgetFirst((ATermList) t);
          z_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_8;
      t = a_0(t);
      t = term_j_6;
      t = b_0(t);
      e_9 = t;
      t = (ATerm) ATinsert(CheckATermList(z_8), e_9);
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm g_9 = NULL;
  g_9 = t;
  if(match_string(t, "-o"))
    {
      t = g_9;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_9;
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm h_9 = NULL;
  h_9 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), h_9);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_9);
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_q_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_2, z_2, b_3, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL,p_9 = NULL,q_9 = NULL;
  if(match_cons(t, sym__3))
    {
      k_9 = ATgetArgument(t, 0);
      l_9 = ATgetArgument(t, 1);
      p_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_9, l_9);
  {
    ATerm s_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_11 = ATgetArgument(t, 0);
            ATerm a_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(k_9, l_9);
        ;
        LocalPopChoice(w_11);
      }
    else
      {
        t = s_11;
        t = (ATerm) ATempty;
      }
    q_9 = t;
    t = SSL_table_put(k_9, l_9, (ATerm) ATinsert(CheckATermList(q_9), p_9));
    t = (ATerm) ATmakeAppl(sym__3, k_9, l_9, p_9);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_10 = NULL;
      t = term_j_6;
      t = j_0(t);
      h_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_11, term_o_11, h_10);
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
ATerm h_3 (ATerm t)
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
ATerm i_3 (ATerm t)
{
  ATerm o_10 = NULL;
  o_10 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), o_10);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_10);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_b_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_3, i_3, j_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_10 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_6;
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
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_4 = NULL;
        t = eval_config_0_0(t);
        v_4 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_4);
        t = v_4;
        ;
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm j_97 (ATerm), ATerm k_97 (ATerm), ATerm t)
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_97(t);
      ;
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
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
        t = foldr_2_0(j_97, k_97, t);
        w_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_10, w_10);
        t = k_97(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_a_11;
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL;
  if(match_cons(t, sym__2))
    {
      x_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(x_5, y_5);
        ;
        LocalPopChoice(u_12);
      }
    else
      {
        t = r_12;
        t = SSL_addr(x_5, y_5);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_10 = NULL,w_4 = NULL,n_5 = NULL;
  t = times_0_0(t);
  w_4 = t;
  t = SSL_explode_term(w_4);
  if(match_cons(t, sym__2))
    {
      ATerm v_12 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5;
  t = foldr_2_0(l_3, m_3, t);
  z_10 = t;
  t = SSL_TicksToSeconds(z_10);
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
    ATerm w_12 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_11;
        if((l_11 != t))
          {
            _fail(t);
          }
        t = k_11;
        ;
        LocalPopChoice(e_13);
      }
    else
      {
        t = w_12;
        t = k_11;
        {
          ATerm f_13 = t;
          int g_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_11, m_11);
              ;
              LocalPopChoice(g_13);
            }
          else
            {
              t = f_13;
              t = SSL_gtr(l_11, m_11);
            }
          t = (ATerm) ATmakeAppl(sym__2, l_11, m_11);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_109 (ATerm), ATerm t)
{
  ATerm j_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_11 = NULL,r_11 = NULL;
      p_11 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_8 = NULL;
            t = eval_config_0_0(t);
            g_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), g_8);
            t = g_8;
            ;
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
          }
        r_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_11, term_p_13);
        t = geq_0_0(t);
        t = p_11;
        t = l_109(t);
      }
      ;
      LocalPopChoice(m_13);
    }
  else
    {
      t = j_13;
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL;
  t = run_time_0_0(t);
  t_11 = t;
  t = term_j_6;
  t = whoami_0_0(t);
  u_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), t_11), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), u_11));
  t = (ATerm) ATmakeAppl(sym__2, term_k_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_13), t_11), term_q_13), u_11));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(x_13);
    }
  else
    {
      t = w_13;
      {
        ATerm y_13 = t;
        int z_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(z_13);
          }
        else
          {
            t = y_13;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_112 (ATerm), ATerm t)
{
  ATerm b_14 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm j_14 = t;
        int k_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_8 = NULL;
            t = eval_config_0_0(t);
            r_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), r_8);
            t = r_8;
            ;
            LocalPopChoice(k_14);
          }
        else
          {
            t = j_14;
          }
      }
      ;
      LocalPopChoice(c_14);
    }
  else
    {
      t = b_14;
      t = fetch_1_0(s_3, t);
    }
  t = b_112(t);
  return(t);
}
ATerm map_1_0 (ATerm j_92 (ATerm), ATerm t)
{
  ATerm v_11 (ATerm t)
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        t = Cons_2_0(j_92, v_11, t);
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
          ATerm t_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(c_12), d_12);
            return(t);
          }
          t = reverse_acc_2_0(f_0, t_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_6;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm i_84 (ATerm), ATerm t)
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
  t = i_84(t);
  g_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, g_12), e_12);
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm k_12 = NULL;
  k_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_12), term_o_14);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm t_14 = t;
        int u_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_9 = NULL;
            t = eval_config_0_0(t);
            f_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_9);
            t = f_9;
            ;
            LocalPopChoice(u_14);
          }
        else
          {
            t = t_14;
          }
      }
      ;
      LocalPopChoice(r_14);
    }
  else
    {
      t = q_14;
      t = fetch_1_0(w_3, t);
    }
  t = term_v_14;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, x_3, t);
  t = map_1_0(y_3, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm j_84 (ATerm), ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL;
  o_12 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      m_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_12);
  l_12 = t;
  t = m_12;
  t = j_84(t);
  n_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, n_12), l_12);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL;
  s_12 = t;
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_12;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_14 = ATgetFirst((ATermList) t);
                ATerm z_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_12;
          }
        ;
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        t = (ATerm) ATinsert(ATempty, s_12);
      }
    t_12 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), t_12);
    t = s_12;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_9 = NULL;
        t = eval_config_0_0(t);
        n_9 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_9);
        t = n_9;
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm a_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_e_15;
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_f_15;
  return(t);
}
ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_g_15;
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_h_15;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_4, c_4, d_4, t);
      ;
      LocalPopChoice(j_15);
    }
  else
    {
      t = i_15;
      t = Option_3_0(e_4, f_4, g_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_71 (ATerm), ATerm r_71 (ATerm), ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,d_13 = NULL;
  d_13 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_12 = ATgetFirst((ATermList) t);
      z_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_13);
  x_12 = t;
  t = y_12;
  t = q_71(t);
  a_13 = t;
  t = z_12;
  t = r_71(t);
  b_13 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(b_13), a_13), x_12);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm i_13 = NULL;
  i_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_13);
  t = (ATerm) ATmakeAppl(sym_Program_1, i_13);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_114 (ATerm), ATerm t)
{
  ATerm h_13 = NULL;
  h_13 = t;
  {
    ATerm k_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_15;
        t = e_114(t);
        ;
        LocalPopChoice(l_15);
      }
    else
      {
        t = k_15;
      }
    t = h_13;
    {
      ATerm m_4 (ATerm t)
      {
        ATerm n_15 = t;
        int o_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_15 = t;
            int q_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(q_15);
              }
            else
              {
                t = p_15;
                t = e_114(t);
                t = Cons_2_0(_id, m_4, t);
              }
            ;
            LocalPopChoice(o_15);
          }
        else
          {
            t = n_15;
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
      t = Cons_2_0(l_4, m_4, t);
    }
  }
  return(t);
}
ATerm x_4 (ATerm t)
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
ATerm y_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_r_15;
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_s_15;
  return(t);
}
ATerm a_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm d_114 (ATerm), ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
  s_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = s_13;
  {
    ATerm u_4 (ATerm t)
    {
      ATerm t_15 = t;
      int u_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_114(t);
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
                t = Option_3_0(x_4, y_4, z_4, t);
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
    t = parse_options_p__1_0(u_4, t);
    {
      ATerm x_15 = t;
      int y_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_14 = NULL;
          a_14 = t;
          {
            ATerm z_15 = t;
            int a_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = a_14;
                {
                  ATerm b_16 = t;
                  int c_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm d_16 = t;
                        int e_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm c_13 = NULL;
                            t = eval_config_0_0(t);
                            c_13 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), c_13);
                            t = c_13;
                            ;
                            LocalPopChoice(e_16);
                          }
                        else
                          {
                            t = d_16;
                          }
                      }
                      ;
                      LocalPopChoice(c_16);
                    }
                  else
                    {
                      t = b_16;
                      t = fetch_1_0(a_5, t);
                    }
                  t = a_14;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(a_16);
              }
            else
              {
                t = z_15;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm f_16 = t;
                  int g_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_14 = NULL;
                      t = eval_config_0_0(t);
                      l_14 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), l_14);
                      t = l_14;
                      ;
                      LocalPopChoice(g_16);
                    }
                  else
                    {
                      t = f_16;
                    }
                  t = a_14;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(y_15);
        }
      else
        {
          t = x_15;
          {
            ATerm h_16 = t;
            int i_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_5 (ATerm t)
                {
                  ATerm d_5 (ATerm t)
                  {
                    if(((t_13 != NULL) && (t_13 != t)))
                      _fail(t);
                    else
                      t_13 = t;
                    return(t);
                  }
                  t = Undefined_1_0(d_5, t);
                  return(t);
                }
                t = fetch_1_0(c_5, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_13)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_k_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_13)), term_j_16));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(i_16);
              }
            else
              {
                t = h_16;
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
ATerm option_wrap_4_0 (ATerm d_112 (ATerm), ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm t)
{
  ATerm d_14 = NULL;
  t = parse_options_1_0(d_112, t);
  d_14 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), d_14);
  t = d_14;
  t = f_112(t);
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_112, t);
        ;
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        {
          ATerm m_16 = t;
          int n_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_112(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(n_16);
            }
          else
            {
              t = m_16;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = if_verbose2_1_0(c_6, t);
  return(t);
}
ATerm o_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_o_16;
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL;
  e_14 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm q_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_14 = NULL;
        t = eval_config_0_0(t);
        p_14 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), p_14);
        t = p_14;
        ;
        LocalPopChoice(r_16);
      }
    else
      {
        t = q_16;
      }
    f_14 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, f_14));
    t = e_14;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_111(t);
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
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(x_16);
                  }
                else
                  {
                    t = w_16;
                    {
                      ATerm y_16 = t;
                      int z_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(o_5, q_5, s_5, t);
                          ;
                          LocalPopChoice(z_16);
                        }
                      else
                        {
                          t = y_16;
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
  ATerm m_5 (ATerm t)
  {
    ATerm g_14 = NULL,h_14 = NULL,s_14 = NULL;
    g_14 = t;
    {
      ATerm c_17 = t;
      int d_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((h_14 != NULL) && (h_14 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_14 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(e_6, t);
          ;
          LocalPopChoice(d_17);
        }
      else
        {
          t = c_17;
          t = term_e_17;
          h_14 = t;
        }
      t = not_null(h_14);
      t = ReadFromFile_0_0(t);
      s_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_14, s_14);
      t = apply_strategy_1_0(m_111, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(g_5, o_111, l_5, m_5, t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = _2_0(_id, i_6, t);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm f_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_14 = NULL;
      t = sometd_1_0(RepairDefinition_0_0, t);
      i_14 = t;
      t = explanation_0_0(t);
      t = i_14;
      ;
      LocalPopChoice(g_17);
    }
  else
    {
      t = f_17;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(h_6, _fail, default_usage_0_0, t);
  return(t);
}
