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
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_List_1;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_CallT_3;
Symbol sym_Path_2;
Symbol sym_Mod_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
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
Symbol sym_Scopes_0;
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
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_i_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_d_21;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_r_19;
ATerm term_i_19;
ATerm term_b_19;
ATerm term_z_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_y_16;
ATerm term_r_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_r_14;
ATerm term_p_12;
ATerm term_x_10;
ATerm term_s_10;
ATerm term_k_10;
ATerm term_g_10;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_o_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_u_7;
ATerm term_r_7;
ATerm term_t_6;
void init_constant_terms (void)
{
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_7);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym__3, term_v_18, term_w_18, term_t_6);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm RenameVar_0_0 (ATerm);
ATerm RenameCall_0_0 (ATerm);
ATerm topdown_1_0 (ATerm s_87 (ATerm), ATerm);
ATerm assert_1_0 (ATerm w_115 (ATerm), ATerm);
ATerm HoArg_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm Cify_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm escape_1_0 (ATerm w_103 (ATerm (ATerm), ATerm), ATerm);
ATerm foldr_3_0 (ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm);
ATerm RenameSDef_0_0 (ATerm);
ATerm rename_sdefs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm g_73 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm c_73 (ATerm), ATerm d_73 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm l_73 (ATerm), ATerm);
ATerm _2_0 (ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm b_109 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm d_112 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm e_94 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm k_94 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm f_110 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm e_110 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm b_113 (ATerm), ATerm);
ATerm map_1_0 (ATerm t_93 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm o_81 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm p_81 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm e_115 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm d_115 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm m_112 (ATerm), ATerm n_112 (ATerm), ATerm o_112 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_0 = NULL,o_0 = NULL;
  n_0 = t;
  t = term_t_6;
  t = whoami_0_0(t);
  o_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), o_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = n_0;
  return(t);
}
ATerm RenameVar_0_0 (ATerm t)
{
  ATerm k_1 (ATerm y_0, ATerm t)
  {
    ATerm a_1 = NULL,b_1 = NULL;
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue)), y_0);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_1 = ATgetFirst((ATermList) t);
        {
          ATerm w_6 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = b_1;
    if(match_cons(t, sym_Defined_2))
      {
        ATerm y_6 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) y_6) != ATmakeSymbol("c_0", 0, ATtrue)))
          _fail(t);
        a_1 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = a_1;
    return(t);
  }
  ATerm e_1 = NULL,i_1 = NULL;
  e_1 = t;
  if(match_cons(t, sym__2))
    {
      ATerm a_7 = ATgetArgument(t, 0);
      i_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_1;
  {
    ATerm f_7 = t;
    int g_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_7 = ATgetArgument(t, 0);
            ATerm k_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(g_7);
        {
          ATerm n_7 = t;
          int o_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_0 = NULL,s_0 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue)), e_1);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_0 = ATgetFirst((ATermList) t);
                  {
                    ATerm p_7 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = s_0;
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm q_7 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) q_7) != ATmakeSymbol("i_0", 0, ATtrue)))
                    _fail(t);
                  r_0 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_0;
              ;
              LocalPopChoice(o_7);
            }
          else
            {
              t = n_7;
              t = k_1(e_1, t);
            }
        }
      }
    else
      {
        t = f_7;
        t = k_1(e_1, t);
      }
  }
  return(t);
}
ATerm RenameCall_0_0 (ATerm t)
{
  ATerm s_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,a_4 = NULL;
  u_3 = t;
  if(match_cons(t, sym_CallT_3))
    {
      v_3 = ATgetArgument(t, 0);
      a_4 = ATgetArgument(t, 1);
      s_3 = ATgetArgument(t, 2);
      {
        ATerm p_1 = NULL,q_1 = NULL,r_1 = NULL;
        t = v_3;
        if(match_cons(t, sym_SVar_1))
          {
            w_3 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_4;
        {
          ATerm p_0 (ATerm t)
          {
            t = term_r_7;
            return(t);
          }
          ATerm q_0 (ATerm t)
          {
            ATerm s_1 = NULL,v_1 = NULL;
            if(match_cons(t, sym__2))
              {
                s_1 = ATgetArgument(t, 0);
                v_1 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm s_7 = t;
              int t_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_addi(s_1, v_1);
                  ;
                  LocalPopChoice(t_7);
                }
              else
                {
                  t = s_7;
                  t = SSL_addr(s_1, v_1);
                }
            }
            return(t);
          }
          ATerm t_0 (ATerm t)
          {
            t = term_u_7;
            return(t);
          }
          t = foldr_3_0(p_0, q_0, t_0, t);
          p_1 = t;
          t = s_3;
          {
            ATerm u_0 (ATerm t)
            {
              t = term_r_7;
              return(t);
            }
            ATerm v_0 (ATerm t)
            {
              ATerm w_1 = NULL,x_1 = NULL;
              if(match_cons(t, sym__2))
                {
                  w_1 = ATgetArgument(t, 0);
                  x_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm v_7 = t;
                int w_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SSL_addi(w_1, x_1);
                    ;
                    LocalPopChoice(w_7);
                  }
                else
                  {
                    t = v_7;
                    t = SSL_addr(w_1, x_1);
                  }
              }
              return(t);
            }
            ATerm w_0 (ATerm t)
            {
              t = term_u_7;
              return(t);
            }
            t = foldr_3_0(u_0, v_0, w_0, t);
            q_1 = t;
            {
              ATerm x_7 = t;
              int y_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, w_3, (ATerm) ATmakeAppl(sym__2, p_1, q_1));
                  t = RenameVar_0_0(t);
                  r_1 = t;
                  ;
                  LocalPopChoice(y_7);
                }
              else
                {
                  t = x_7;
                  t = w_3;
                  t = HoArg_0_0(t);
                  r_1 = t;
                }
              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_1), a_4, s_3);
            }
          }
        }
      }
    }
  else
    {
      ATerm f_2 = NULL,g_2 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          v_3 = ATgetArgument(t, 0);
          a_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_3;
      if(match_cons(t, sym_SVar_1))
        {
          w_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_4;
      {
        ATerm x_0 (ATerm t)
        {
          t = term_r_7;
          return(t);
        }
        ATerm z_0 (ATerm t)
        {
          ATerm h_2 = NULL,i_2 = NULL;
          if(match_cons(t, sym__2))
            {
              h_2 = ATgetArgument(t, 0);
              i_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          {
            ATerm z_7 = t;
            int a_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(h_2, i_2);
                ;
                LocalPopChoice(a_8);
              }
            else
              {
                t = z_7;
                t = SSL_addr(h_2, i_2);
              }
          }
          return(t);
        }
        ATerm c_1 (ATerm t)
        {
          t = term_u_7;
          return(t);
        }
        t = foldr_3_0(x_0, z_0, c_1, t);
        f_2 = t;
        {
          ATerm b_8 = t;
          int c_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, w_3, f_2);
              t = RenameVar_0_0(t);
              g_2 = t;
              ;
              LocalPopChoice(c_8);
            }
          else
            {
              t = b_8;
              t = w_3;
              t = HoArg_0_0(t);
              g_2 = t;
            }
          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, g_2), a_4);
        }
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm s_87 (ATerm), ATerm t)
{
  t = s_87(t);
  {
    ATerm d_1 (ATerm t)
    {
      t = topdown_1_0(s_87, t);
      return(t);
    }
    t = SRTS_all(d_1, t);
  }
  return(t);
}
ATerm assert_1_0 (ATerm w_115 (ATerm), ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL,g_4 = NULL,h_4 = NULL,k_4 = NULL;
  if(match_cons(t, sym__2))
    {
      d_4 = ATgetArgument(t, 0);
      e_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_115(t);
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_4, d_4, e_4);
  t = table_push_0_0(t);
  {
    ATerm d_8 = t;
    int e_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(g_4, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(e_8);
      }
    else
      {
        t = d_8;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_4 = ATgetFirst((ATermList) t);
        k_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(g_4, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(k_4), (ATerm) ATinsert(CheckATermList(h_4), d_4)));
    t = (ATerm) ATmakeAppl(sym__2, d_4, e_4);
  }
  return(t);
}
ATerm HoArg_0_0 (ATerm t)
{
  ATerm j_6 = NULL;
  j_6 = t;
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_2 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue)), j_6);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_2 = ATgetFirst((ATermList) t);
            {
              ATerm h_8 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = n_2;
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        {
          ATerm i_8 = t;
          int j_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_2 = NULL,s_2 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue)), j_6);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_2 = ATgetFirst((ATermList) t);
                  {
                    ATerm l_8 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = s_2;
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm m_8 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) m_8) != ATmakeSymbol("l_0", 0, ATtrue)))
                    _fail(t);
                  r_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_2;
              ;
              LocalPopChoice(j_8);
            }
          else
            {
              t = i_8;
              {
                ATerm n_8 = t;
                int o_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_2 = NULL;
                    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue)), j_6);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        y_2 = ATgetFirst((ATermList) t);
                        {
                          ATerm p_8 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = y_2;
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    _fail(t);
                    ;
                    LocalPopChoice(o_8);
                  }
                else
                  {
                    t = n_8;
                    {
                      ATerm i_3 = NULL,o_3 = NULL;
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue)), j_6);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          o_3 = ATgetFirst((ATermList) t);
                          {
                            ATerm q_8 = (ATerm) ATgetNext((ATermList) t);
                          }
                        }
                      else
                        _fail(t);
                      t = o_3;
                      if(match_cons(t, sym_Defined_2))
                        {
                          ATerm r_8 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) r_8) != ATmakeSymbol("g_0", 0, ATtrue)))
                            _fail(t);
                          i_3 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_3;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm p_6 = NULL;
  ATerm f_1 (ATerm t)
  {
    ATerm q_6 = NULL;
    q_6 = t;
    t = SSL_explode_string(q_6);
    return(t);
  }
  t = map_1_0(f_1, t);
  t = concat_0_0(t);
  p_6 = t;
  t = SSL_implode_string(p_6);
  return(t);
}
ATerm Cify_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm u_6 = NULL,v_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_6 = ATgetFirst((ATermList) t);
      v_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_6;
  if(match_int(t, 95))
    {
      ATerm x_6 = NULL;
      t = v_6;
      t = m_0(t);
      x_6 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(x_6), term_s_8), term_s_8);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm z_6 = NULL;
          t = v_6;
          t = m_0(t);
          z_6 = t;
          t = (ATerm) ATinsert(CheckATermList(z_6), term_s_8);
        }
      else
        {
          ATerm b_7 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = v_6;
          t = m_0(t);
          b_7 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(b_7), term_s_8), term_t_8), term_s_8);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm w_103 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL;
  c_7 = t;
  t = SSL_explode_string(c_7);
  {
    ATerm e_7 (ATerm t)
    {
      ATerm u_8 = t;
      int v_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_103(e_7, t);
          ;
          LocalPopChoice(v_8);
        }
      else
        {
          t = u_8;
          {
            ATerm w_8 = t;
            int x_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(_id, e_7, t);
                ;
                LocalPopChoice(x_8);
              }
            else
              {
                t = w_8;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
              }
          }
        }
      return(t);
    }
    t = e_7(t);
    d_7 = t;
    t = SSL_implode_string(d_7);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm t)
{
  ATerm z_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_98(t);
      ;
      LocalPopChoice(a_9);
    }
  else
    {
      t = z_8;
      {
        ATerm h_7 = NULL,i_7 = NULL,l_7 = NULL,m_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_7 = ATgetFirst((ATermList) t);
            i_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_7;
        t = x_98(t);
        l_7 = t;
        t = i_7;
        t = foldr_3_0(v_98, w_98, x_98, t);
        m_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_7, m_7);
        t = w_98(t);
      }
    }
  return(t);
}
ATerm RenameSDef_0_0 (ATerm t)
{
  ATerm p_9 = NULL,r_9 = NULL,t_9 = NULL,v_9 = NULL,w_9 = NULL;
  r_9 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      t_9 = ATgetArgument(t, 0);
      v_9 = ATgetArgument(t, 1);
      w_9 = ATgetArgument(t, 2);
      p_9 = ATgetArgument(t, 3);
      {
        ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL;
        t = v_9;
        {
          ATerm g_1 (ATerm t)
          {
            t = term_r_7;
            return(t);
          }
          ATerm h_1 (ATerm t)
          {
            ATerm r_4 = NULL,s_4 = NULL;
            if(match_cons(t, sym__2))
              {
                r_4 = ATgetArgument(t, 0);
                s_4 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm b_9 = t;
              int c_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_addi(r_4, s_4);
                  ;
                  LocalPopChoice(c_9);
                }
              else
                {
                  t = b_9;
                  t = SSL_addr(r_4, s_4);
                }
            }
            return(t);
          }
          ATerm j_1 (ATerm t)
          {
            t = term_u_7;
            return(t);
          }
          t = foldr_3_0(g_1, h_1, j_1, t);
          l_4 = t;
          t = w_9;
          {
            ATerm l_1 (ATerm t)
            {
              t = term_r_7;
              return(t);
            }
            ATerm m_1 (ATerm t)
            {
              ATerm t_4 = NULL,u_4 = NULL;
              if(match_cons(t, sym__2))
                {
                  t_4 = ATgetArgument(t, 0);
                  u_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm d_9 = t;
                int e_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SSL_addi(t_4, u_4);
                    ;
                    LocalPopChoice(e_9);
                  }
                else
                  {
                    t = d_9;
                    t = SSL_addr(t_4, u_4);
                  }
              }
              return(t);
            }
            ATerm n_1 (ATerm t)
            {
              t = term_u_7;
              return(t);
            }
            t = foldr_3_0(l_1, m_1, n_1, t);
            m_4 = t;
            t = t_9;
            {
              ATerm f_9 = t;
              int g_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_4 = NULL,y_4 = NULL;
                  if(match_cons(t, sym_Mod_2))
                    {
                      x_4 = ATgetArgument(t, 0);
                      y_4 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_4), term_h_9), x_4);
                  t = concat_strings_0_0(t);
                  ;
                  LocalPopChoice(g_9);
                }
              else
                {
                  t = f_9;
                }
              t = escape_1_0(Cify_1_0, t);
              n_4 = t;
              t = SSL_int_to_string(l_4);
              o_4 = t;
              t = SSL_int_to_string(m_4);
              p_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_4), term_i_9), o_4), term_i_9), n_4);
              t = concat_strings_0_0(t);
              q_4 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_9, (ATerm) ATmakeAppl(sym__2, l_4, m_4)), (ATerm) ATmakeAppl(sym_Defined_2, term_j_9, q_4));
              {
                ATerm o_1 (ATerm t)
                {
                  t = term_k_9;
                  return(t);
                }
                t = assert_1_0(o_1, t);
                t = q_4;
                {
                  ATerm l_9 = t;
                  int n_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_5 = NULL;
                      t = t_9;
                      t = HoArg_0_0(t);
                      f_5 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_9, term_o_9);
                      {
                        ATerm t_1 (ATerm t)
                        {
                          t = term_q_9;
                          return(t);
                        }
                        t = assert_1_0(t_1, t);
                        t = f_5;
                      }
                      ;
                      LocalPopChoice(n_9);
                    }
                  else
                    {
                      t = l_9;
                      t = (ATerm) ATmakeAppl(sym__2, t_9, (ATerm) ATmakeAppl(sym_Defined_2, term_s_9, q_4));
                      {
                        ATerm u_1 (ATerm t)
                        {
                          t = term_q_9;
                          return(t);
                        }
                        t = assert_1_0(u_1, t);
                        t = q_4;
                      }
                    }
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, q_4, v_9, w_9, p_9);
                }
              }
            }
          }
        }
      }
    }
  else
    {
      ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          t_9 = ATgetArgument(t, 0);
          v_9 = ATgetArgument(t, 1);
          w_9 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_9;
      {
        ATerm y_1 (ATerm t)
        {
          t = term_r_7;
          return(t);
        }
        ATerm z_1 (ATerm t)
        {
          ATerm a_6 = NULL,b_6 = NULL;
          if(match_cons(t, sym__2))
            {
              a_6 = ATgetArgument(t, 0);
              b_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          {
            ATerm u_9 = t;
            int x_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(a_6, b_6);
                ;
                LocalPopChoice(x_9);
              }
            else
              {
                t = u_9;
                t = SSL_addr(a_6, b_6);
              }
          }
          return(t);
        }
        ATerm a_2 (ATerm t)
        {
          t = term_u_7;
          return(t);
        }
        t = foldr_3_0(y_1, z_1, a_2, t);
        v_5 = t;
        t = t_9;
        {
          ATerm y_9 = t;
          int f_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_6 = NULL,e_6 = NULL;
              if(match_cons(t, sym_Mod_2))
                {
                  d_6 = ATgetArgument(t, 0);
                  e_6 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_6), term_h_9), d_6);
              t = concat_strings_0_0(t);
              ;
              LocalPopChoice(f_10);
            }
          else
            {
              t = y_9;
            }
          t = escape_1_0(Cify_1_0, t);
          w_5 = t;
          t = SSL_int_to_string(v_5);
          x_5 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_5), term_i_9), w_5);
          t = concat_strings_0_0(t);
          y_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_9, v_5), (ATerm) ATmakeAppl(sym_Defined_2, term_g_10, y_5));
          {
            ATerm b_2 (ATerm t)
            {
              t = term_k_9;
              return(t);
            }
            t = assert_1_0(b_2, t);
            t = y_5;
            {
              ATerm h_10 = t;
              int i_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_6 = NULL;
                  t = t_9;
                  t = HoArg_0_0(t);
                  h_6 = t;
                  t = (ATerm) ATmakeAppl(sym__2, t_9, term_o_9);
                  {
                    ATerm c_2 (ATerm t)
                    {
                      t = term_q_9;
                      return(t);
                    }
                    t = assert_1_0(c_2, t);
                    t = h_6;
                  }
                  ;
                  LocalPopChoice(i_10);
                }
              else
                {
                  t = h_10;
                  t = (ATerm) ATmakeAppl(sym__2, t_9, (ATerm) ATmakeAppl(sym_Defined_2, term_k_10, y_5));
                  {
                    ATerm d_2 (ATerm t)
                    {
                      t = term_q_9;
                      return(t);
                    }
                    t = assert_1_0(d_2, t);
                    t = y_5;
                  }
                }
              t = (ATerm) ATmakeAppl(sym_SDef_3, y_5, v_9, w_9);
            }
          }
        }
      }
    }
  return(t);
}
ATerm rename_sdefs_0_0 (ATerm t)
{
  t = map_1_0(RenameSDef_0_0, t);
  {
    ATerm e_2 (ATerm t)
    {
      ATerm j_2 (ATerm t)
      {
        ATerm l_10 = t;
        int r_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RenameCall_0_0(t);
            ;
            LocalPopChoice(r_10);
          }
        else
          {
            t = l_10;
          }
        return(t);
      }
      t = topdown_1_0(j_2, t);
      return(t);
    }
    t = map_1_0(e_2, t);
  }
  return(t);
}
ATerm Strategies_1_0 (ATerm g_73 (ATerm), ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,d_10 = NULL,e_10 = NULL;
  e_10 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      a_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_10);
  z_9 = t;
  t = a_10;
  t = g_73(t);
  d_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, d_10), z_9);
  return(t);
}
ATerm Cons_2_0 (ATerm c_73 (ATerm), ATerm d_73 (ATerm), ATerm t)
{
  ATerm j_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL;
  q_10 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_10 = ATgetFirst((ATermList) t);
      n_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_10);
  j_10 = t;
  t = m_10;
  t = c_73(t);
  o_10 = t;
  t = n_10;
  t = d_73(t);
  p_10 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(p_10), o_10), j_10);
  return(t);
}
ATerm Specification_1_0 (ATerm l_73 (ATerm), ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL,z_10 = NULL,a_11 = NULL;
  a_11 = t;
  if(match_cons(t, sym_Specification_1))
    {
      w_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_11);
  v_10 = t;
  t = w_10;
  t = l_73(t);
  z_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, z_10), v_10);
  return(t);
}
ATerm _2_0 (ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL;
  i_11 = t;
  if(match_cons(t, sym__2))
    {
      e_11 = ATgetArgument(t, 0);
      f_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_11);
  d_11 = t;
  t = e_11;
  t = n_68(t);
  g_11 = t;
  t = f_11;
  t = o_68(t);
  h_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, g_11, h_11), d_11);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm b_109 (ATerm), ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
  if(match_cons(t, sym__2))
    {
      l_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_11, term_s_10);
  t = open_stream_0_0(t);
  n_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_11, m_11);
  t = b_109(t);
  t = fclose_0_0(t);
  t = m_11;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm o_11 = NULL,q_11 = NULL;
  o_11 = t;
  {
    ATerm k_2 (ATerm t)
    {
      ATerm t_10 = t;
      int u_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((q_11 != NULL) && (q_11 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_11 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_2, t);
          ;
          LocalPopChoice(u_10);
        }
      else
        {
          t = t_10;
          t = term_x_10;
          if(((q_11 != NULL) && (q_11 != t)))
            _fail(t);
          else
            q_11 = t;
        }
      return(t);
    }
    t = _2_0(k_2, _id, t);
    t = o_11;
    {
      ATerm m_2 (ATerm t)
      {
        ATerm i_6 = NULL;
        i_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), i_6);
        return(t);
      }
      t = _2_0(_id, m_2, t);
      {
        ATerm y_10 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_2 (ATerm t)
            {
              ATerm q_2 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(q_2, t);
              return(t);
            }
            ATerm p_2 (ATerm t)
            {
              ATerm t_2 (ATerm t)
              {
                ATerm s_11 = NULL,t_11 = NULL,w_11 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm c_11 = ATgetArgument(t, 0);
                    if(match_cons(c_11, sym_Stream_1))
                      {
                        s_11 = ATgetArgument(c_11, 0);
                      }
                    else
                      _fail(t);
                    t_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(s_11, t_11);
                w_11 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, w_11);
                return(t);
              }
              t = WriteToFile_1_0(t_2, t);
              return(t);
            }
            t = _2_0(o_2, p_2, t);
            ;
            LocalPopChoice(b_11);
          }
        else
          {
            t = y_10;
            {
              ATerm u_2 (ATerm t)
              {
                ATerm v_2 (ATerm t)
                {
                  ATerm y_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm j_11 = ATgetArgument(t, 0);
                      if(match_cons(j_11, sym_Stream_1))
                        {
                          y_11 = ATgetArgument(j_11, 0);
                        }
                      else
                        _fail(t);
                      a_12 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(y_11, a_12);
                  b_12 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), b_12);
                  c_12 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, c_12);
                  return(t);
                }
                t = WriteToFile_1_0(v_2, t);
                return(t);
              }
              t = _2_0(_id, u_2, t);
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
ATerm apply_strategy_1_0 (ATerm d_112 (ATerm), ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL,h_12 = NULL,i_12 = NULL;
  d_12 = t;
  t = dtime_0_0(t);
  t = d_12;
  t = d_112(t);
  e_12 = t;
  t = dtime_0_0(t);
  f_12 = t;
  t = e_12;
  if(match_cons(t, sym__2))
    {
      h_12 = ATgetArgument(t, 0);
      i_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_12), (ATerm) ATmakeAppl(sym_Runtime_1, f_12)), i_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_12 (ATerm q_12, ATerm t)
  {
    t = SSL_fclose(q_12);
    return(t);
  }
  ATerm v_12 = NULL,w_12 = NULL;
  w_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_12 = ATgetArgument(t, 0);
      {
        ATerm k_11 = t;
        int p_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_12);
            ;
            LocalPopChoice(p_11);
          }
        else
          {
            t = k_11;
            t = y_12(w_12, t);
          }
      }
    }
  else
    {
      t = y_12(w_12, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_12 = NULL;
  t = SSL_stdin_stream();
  z_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_12);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_13 = NULL;
  t = SSL_stdout_stream();
  a_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_13 = NULL;
  t = SSL_stderr_stream();
  b_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_13);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_11 = ATgetArgument(t, 0);
      ATerm u_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_8 = NULL,y_8 = NULL;
        k_8 = t;
        t = SSL_explode_term(k_8);
        if(match_cons(t, sym__2))
          {
            ATerm z_11 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_11) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_12 = ATgetArgument(t, 1);
              if(((ATgetType(g_12) == AT_LIST) && !(ATisEmpty(g_12))))
                {
                  y_8 = ATgetFirst((ATermList) g_12);
                  {
                    ATerm k_12 = (ATerm) ATgetNext((ATermList) g_12);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = y_8;
        if(match_cons(t, sym_stderr_0))
          {
            t = y_8;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = y_8;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = y_8;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(x_11);
      }
    else
      {
        t = v_11;
        {
          ATerm l_12 = t;
          int m_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
              ATerm w_2 (ATerm t)
              {
                ATerm j_13 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    j_13 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = j_13;
                return(t);
              }
              t = _2_0(w_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  g_13 = ATgetArgument(t, 0);
                  h_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(g_13, h_13);
              i_13 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, i_13);
              ;
              LocalPopChoice(m_12);
            }
          else
            {
              t = l_12;
              {
                ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
                ATerm x_2 (ATerm t)
                {
                  ATerm n_13 = NULL;
                  n_13 = t;
                  t = SSL_is_string(n_13);
                  return(t);
                }
                t = _2_0(x_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    k_13 = ATgetArgument(t, 0);
                    l_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(k_13, l_13);
                m_13 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, m_13);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_13 = NULL;
      r_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_13, term_p_12);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      {
        ATerm m_9 = NULL;
        m_9 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_9), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = m_9;
        _fail(t);
      }
    }
  o_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(q_13);
  p_13 = t;
  t = o_13;
  t = fclose_0_0(t);
  t = p_13;
  return(t);
}
ATerm fetch_1_0 (ATerm e_94 (ATerm), ATerm t)
{
  ATerm w_13 (ATerm t)
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(e_94, _id, t);
        ;
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        t = Cons_2_0(_id, w_13, t);
      }
    return(t);
  }
  t = w_13(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      {
        ATerm c_14 = NULL,d_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_14 = ATgetFirst((ATermList) t);
            d_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_14;
        {
          ATerm z_2 (ATerm t)
          {
            t = d_14;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(z_2, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm k_94 (ATerm), ATerm t)
{
  ATerm j_14 (ATerm t)
  {
    ATerm x_12 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, j_14, t);
        ;
        LocalPopChoice(c_13);
      }
    else
      {
        t = x_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_94(t);
      }
    return(t);
  }
  t = j_14(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm o_14 = NULL;
  ATerm a_3 (ATerm t)
  {
    ATerm p_14 = NULL;
    p_14 = t;
    t = SSL_explode_string(p_14);
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    ATerm q_14 = NULL;
    q_14 = t;
    t = SSL_explode_string(q_14);
    return(t);
  }
  t = _2_0(a_3, b_3, t);
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_14 = NULL,t_14 = NULL;
        if(match_cons(t, sym__2))
          {
            s_14 = ATgetArgument(t, 0);
            t_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_14;
        {
          ATerm c_3 (ATerm t)
          {
            t = t_14;
            return(t);
          }
          t = at_end_1_0(c_3, t);
        }
        ;
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        {
          ATerm b_10 = NULL,c_10 = NULL;
          b_10 = t;
          t = SSL_explode_term(b_10);
          if(match_cons(t, sym__2))
            {
              ATerm f_13 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_13) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              c_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_10;
          t = concat_0_0(t);
        }
      }
    o_14 = t;
    t = SSL_implode_string(o_14);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_15 = NULL;
      e_15 = t;
      t = SSL_is_string(e_15);
      ;
      LocalPopChoice(t_13);
    }
  else
    {
      t = s_13;
      {
        ATerm u_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_3 (ATerm t)
            {
              ATerm x_13 = t;
              int y_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(y_13);
                }
              else
                {
                  t = x_13;
                }
              return(t);
            }
            t = map_1_0(d_3, t);
            ;
            LocalPopChoice(v_13);
          }
        else
          {
            t = u_13;
            {
              ATerm l_15 = NULL,n_15 = NULL,o_15 = NULL;
              l_15 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_15 = ATgetArgument(t, 0);
                  t = n_15;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_15 = ATgetArgument(t, 0);
                      t = n_15;
                      {
                        ATerm a_14 = t;
                        int b_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_15);
                            {
                              ATerm e_14 = t;
                              int f_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm j_12 = NULL;
                                  t = eval_config_0_0(t);
                                  j_12 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_15, j_12);
                                  t = j_12;
                                  ;
                                  LocalPopChoice(f_14);
                                }
                              else
                                {
                                  t = e_14;
                                }
                            }
                            ;
                            LocalPopChoice(b_14);
                          }
                        else
                          {
                            t = a_14;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_15), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = n_15;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_15 = NULL,x_15 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_15 = ATgetArgument(t, 0);
                          o_15 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_15;
                      t = eval_config_0_0(t);
                      v_15 = t;
                      t = o_15;
                      t = eval_config_0_0(t);
                      x_15 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_15, x_15);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm f_110 (ATerm), ATerm t)
{
  ATerm g_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_16 = NULL,e_16 = NULL;
      c_16 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm i_14 = t;
        int k_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_13 = NULL;
            t = eval_config_0_0(t);
            z_13 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), z_13);
            t = z_13;
            ;
            LocalPopChoice(k_14);
          }
        else
          {
            t = i_14;
          }
        e_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_16, term_r_14);
        t = geq_0_0(t);
        t = c_16;
        t = f_110(t);
      }
      ;
      LocalPopChoice(h_14);
    }
  else
    {
      t = g_14;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm g_16 = NULL;
    g_16 = t;
    if(match_string(t, "-k"))
      {
        t = g_16;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = g_16;
      }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    ATerm h_16 = NULL,i_16 = NULL;
    h_16 = t;
    t = SSL_string_to_int(h_16);
    i_16 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), i_16);
    t = h_16;
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = term_u_14;
    return(t);
  }
  t = ArgOption_3_0(e_3, f_3, g_3, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_3 (ATerm t)
      {
        ATerm k_16 = NULL;
        k_16 = t;
        if(match_string(t, "-S"))
          {
            t = k_16;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = k_16;
          }
        return(t);
      }
      ATerm j_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_x_14;
        return(t);
      }
      ATerm k_3 (ATerm t)
      {
        t = term_y_14;
        return(t);
      }
      t = Option_3_0(h_3, j_3, k_3, t);
      ;
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      {
        ATerm z_14 = t;
        int c_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm m_3 (ATerm t)
            {
              ATerm l_16 = NULL,m_16 = NULL;
              l_16 = t;
              t = SSL_string_to_int(l_16);
              m_16 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), m_16);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, l_16);
              return(t);
            }
            ATerm n_3 (ATerm t)
            {
              t = term_d_15;
              return(t);
            }
            t = ArgOption_3_0(l_3, m_3, n_3, t);
            ;
            LocalPopChoice(c_15);
          }
        else
          {
            t = z_14;
            {
              ATerm p_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm q_3 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_f_15;
                return(t);
              }
              ATerm r_3 (ATerm t)
              {
                t = term_g_15;
                return(t);
              }
              t = Option_3_0(p_3, q_3, r_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_16 = NULL;
      t = term_t_6;
      t = d_0(t);
      r_16 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_15, term_i_15, r_16);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm u_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_16 = ATgetFirst((ATermList) t);
          q_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_16;
      t = a_0(t);
      t = term_t_6;
      t = b_0(t);
      u_16 = t;
      t = (ATerm) ATinsert(CheckATermList(q_16), u_16);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm t_3 (ATerm t)
  {
    ATerm w_16 = NULL;
    w_16 = t;
    if(match_string(t, "-o"))
      {
        t = w_16;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = w_16;
      }
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    ATerm x_16 = NULL;
    x_16 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), x_16);
    t = (ATerm) ATmakeAppl(sym_Output_1, x_16);
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_j_15;
    return(t);
  }
  t = ArgOption_3_0(t_3, x_3, y_3, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
  if(match_cons(t, sym__3))
    {
      a_17 = ATgetArgument(t, 0);
      b_17 = ATgetArgument(t, 1);
      c_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_17, b_17);
  {
    ATerm k_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_15 = ATgetArgument(t, 0);
            ATerm q_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(a_17, b_17);
        ;
        LocalPopChoice(m_15);
      }
    else
      {
        t = k_15;
        t = (ATerm) ATempty;
      }
    d_17 = t;
    t = SSL_table_put(a_17, b_17, (ATerm) ATinsert(CheckATermList(d_17), c_17));
    t = (ATerm) ATmakeAppl(sym__3, a_17, b_17, c_17);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_17 = NULL;
      t = term_t_6;
      t = k_0(t);
      p_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_15, term_i_15, p_17);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm t_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_17 = ATgetFirst((ATermList) t);
          m_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_17;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_17 = ATgetFirst((ATermList) t);
          o_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_17;
      t = h_0(t);
      t = n_17;
      t = j_0(t);
      t_17 = t;
      t = (ATerm) ATinsert(CheckATermList(o_17), t_17);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    ATerm v_17 = NULL;
    v_17 = t;
    if(match_string(t, "-i"))
      {
        t = v_17;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = v_17;
      }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    ATerm w_17 = NULL;
    w_17 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), w_17);
    t = (ATerm) ATmakeAppl(sym_Input_1, w_17);
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_r_15;
    return(t);
  }
  t = ArgOption_3_0(z_3, b_4, c_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm x_17 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_6;
  t = whoami_0_0(t);
  x_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), x_17));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm s_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_14 = NULL;
        t = eval_config_0_0(t);
        l_14 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_14);
        t = l_14;
        ;
        LocalPopChoice(t_15);
      }
    else
      {
        t = s_15;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm t)
{
  ATerm u_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_98(t);
      ;
      LocalPopChoice(w_15);
    }
  else
    {
      t = u_15;
      {
        ATerm a_18 = NULL,b_18 = NULL,e_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_18 = ATgetFirst((ATermList) t);
            b_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_18;
        t = foldr_2_0(t_98, u_98, t);
        e_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_18, e_18);
        t = u_98(t);
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
  ATerm h_18 = NULL,m_14 = NULL,n_14 = NULL;
  t = times_0_0(t);
  m_14 = t;
  t = SSL_explode_term(m_14);
  if(match_cons(t, sym__2))
    {
      ATerm y_15 = ATgetArgument(t, 0);
      n_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_14;
  {
    ATerm f_4 (ATerm t)
    {
      t = term_r_7;
      return(t);
    }
    ATerm i_4 (ATerm t)
    {
      ATerm a_15 = NULL,b_15 = NULL;
      if(match_cons(t, sym__2))
        {
          a_15 = ATgetArgument(t, 0);
          b_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm z_15 = t;
        int a_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(a_15, b_15);
            ;
            LocalPopChoice(a_16);
          }
        else
          {
            t = z_15;
            t = SSL_addr(a_15, b_15);
          }
      }
      return(t);
    }
    t = foldr_2_0(f_4, i_4, t);
    h_18 = t;
    t = SSL_TicksToSeconds(h_18);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
  s_18 = t;
  if(match_cons(t, sym__2))
    {
      t_18 = ATgetArgument(t, 0);
      u_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_16 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_18;
        if((t_18 != t))
          {
            _fail(t);
          }
        t = s_18;
        ;
        LocalPopChoice(d_16);
      }
    else
      {
        t = b_16;
        t = s_18;
        {
          ATerm f_16 = t;
          int n_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_18, u_18);
              ;
              LocalPopChoice(n_16);
            }
          else
            {
              t = f_16;
              t = SSL_gtr(t_18, u_18);
            }
          t = (ATerm) ATmakeAppl(sym__2, t_18, u_18);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_110 (ATerm), ATerm t)
{
  ATerm o_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_18 = NULL,a_19 = NULL;
      y_18 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm t_16 = t;
        int v_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_16 = NULL;
            t = eval_config_0_0(t);
            j_16 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_16);
            t = j_16;
            ;
            LocalPopChoice(v_16);
          }
        else
          {
            t = t_16;
          }
        a_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_19, term_u_7);
        t = geq_0_0(t);
        t = y_18;
        t = e_110(t);
      }
      ;
      LocalPopChoice(s_16);
    }
  else
    {
      t = o_16;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm c_19 = NULL,d_19 = NULL;
    t = run_time_0_0(t);
    c_19 = t;
    t = term_t_6;
    t = whoami_0_0(t);
    d_19 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), c_19), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), d_19));
    t = (ATerm) ATmakeAppl(sym__2, term_y_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_17), c_19), term_e_17), d_19));
    return(t);
  }
  t = if_verbose1_1_0(j_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm b_113 (ATerm), ATerm t)
{
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm i_17 = t;
        int j_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_16 = NULL;
            t = eval_config_0_0(t);
            z_16 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), z_16);
            t = z_16;
            ;
            LocalPopChoice(j_17);
          }
        else
          {
            t = i_17;
          }
      }
      ;
      LocalPopChoice(h_17);
    }
  else
    {
      t = g_17;
      {
        ATerm v_4 (ATerm t)
        {
          ATerm k_17 = t;
          int q_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(q_17);
            }
          else
            {
              t = k_17;
              {
                ATerm r_17 = t;
                int s_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(s_17);
                  }
                else
                  {
                    t = r_17;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(v_4, t);
      }
    }
  t = b_113(t);
  return(t);
}
ATerm map_1_0 (ATerm t_93 (ATerm), ATerm t)
{
  ATerm e_19 (ATerm t)
  {
    ATerm u_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(z_17);
      }
    else
      {
        t = u_17;
        t = Cons_2_0(t_93, e_19, t);
      }
    return(t);
  }
  t = e_19(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_19 = ATgetFirst((ATermList) t);
      h_19 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_19 = NULL,m_19 = NULL;
        t = h_19;
        t = f_0(t);
        l_19 = t;
        t = g_19;
        t = e_0(t);
        m_19 = t;
        t = h_19;
        {
          ATerm w_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(l_19), m_19);
            return(t);
          }
          t = reverse_acc_2_0(e_0, w_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_6;
      t = f_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm o_81 (ATerm), ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL;
  q_19 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_19);
  n_19 = t;
  t = o_19;
  t = o_81(t);
  p_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, p_19), n_19);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm f_18 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_17 = NULL;
            t = eval_config_0_0(t);
            y_17 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), y_17);
            t = y_17;
            ;
            LocalPopChoice(g_18);
          }
        else
          {
            t = f_18;
          }
      }
      ;
      LocalPopChoice(d_18);
    }
  else
    {
      t = c_18;
      {
        ATerm z_4 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(z_4, t);
      }
    }
  t = term_i_18;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm a_5 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, a_5, t);
    {
      ATerm b_5 (ATerm t)
      {
        ATerm t_19 = NULL;
        t_19 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, t_19), term_j_18);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(b_5, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm p_81 (ATerm), ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
  x_19 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      v_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_19);
  u_19 = t;
  t = v_19;
  t = p_81(t);
  w_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, w_19), u_19);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL;
  b_20 = t;
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_20;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_18 = ATgetFirst((ATermList) t);
                ATerm n_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_20;
          }
        ;
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        t = (ATerm) ATinsert(ATempty, b_20);
      }
    c_20 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), c_20);
    t = b_20;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_19 = NULL;
        t = eval_config_0_0(t);
        f_19 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_19);
        t = f_19;
        ;
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_5 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm d_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_x_18;
        return(t);
      }
      ATerm e_5 (ATerm t)
      {
        t = term_z_18;
        return(t);
      }
      t = Option_3_0(c_5, d_5, e_5, t);
      ;
      LocalPopChoice(r_18);
    }
  else
    {
      t = q_18;
      {
        ATerm g_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm h_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_b_19;
          return(t);
        }
        ATerm i_5 (ATerm t)
        {
          t = term_i_19;
          return(t);
        }
        t = Option_3_0(g_5, h_5, i_5, t);
      }
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_115 (ATerm), ATerm t)
{
  ATerm h_20 = NULL;
  h_20 = t;
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_19;
        t = e_115(t);
        ;
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
      }
    t = h_20;
    {
      ATerm j_5 (ATerm t)
      {
        ATerm i_20 = NULL;
        i_20 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_20);
        t = (ATerm) ATmakeAppl(sym_Program_1, i_20);
        return(t);
      }
      ATerm k_5 (ATerm t)
      {
        ATerm s_19 = t;
        int y_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_19 = t;
            int a_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(a_20);
              }
            else
              {
                t = z_19;
                t = e_115(t);
                t = Cons_2_0(_id, k_5, t);
              }
            ;
            LocalPopChoice(y_19);
          }
        else
          {
            t = s_19;
            {
              ATerm n_20 = NULL,o_20 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_20 = ATgetFirst((ATermList) t);
                  o_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_20), (ATerm) ATmakeAppl(sym_Undefined_1, n_20));
            }
          }
        return(t);
      }
      t = Cons_2_0(j_5, k_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm d_115 (ATerm), ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
  z_20 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = z_20;
  {
    ATerm l_5 (ATerm t)
    {
      ATerm d_20 = t;
      int e_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_115(t);
          ;
          LocalPopChoice(e_20);
        }
      else
        {
          t = d_20;
          {
            ATerm f_20 = t;
            int g_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_5 (ATerm t)
                {
                  ATerm c_21 = NULL;
                  c_21 = t;
                  if(match_string(t, "--help"))
                    {
                      t = c_21;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = c_21;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = c_21;
                        }
                    }
                  return(t);
                }
                ATerm n_5 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_j_20;
                  return(t);
                }
                ATerm o_5 (ATerm t)
                {
                  t = term_k_20;
                  return(t);
                }
                t = Option_3_0(m_5, n_5, o_5, t);
                ;
                LocalPopChoice(g_20);
              }
            else
              {
                t = f_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_5, t);
    {
      ATerm l_20 = t;
      int m_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_21 = NULL;
          h_21 = t;
          {
            ATerm p_20 = t;
            int q_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = h_21;
                {
                  ATerm r_20 = t;
                  int s_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm t_20 = t;
                        int u_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm q_21 = NULL;
                            t = eval_config_0_0(t);
                            q_21 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), q_21);
                            t = q_21;
                            ;
                            LocalPopChoice(u_20);
                          }
                        else
                          {
                            t = t_20;
                          }
                      }
                      ;
                      LocalPopChoice(s_20);
                    }
                  else
                    {
                      t = r_20;
                      {
                        ATerm p_5 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(p_5, t);
                      }
                    }
                  t = h_21;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(q_20);
              }
            else
              {
                t = p_20;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm v_20 = t;
                  int w_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_21 = NULL;
                      t = eval_config_0_0(t);
                      w_21 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), w_21);
                      t = w_21;
                      ;
                      LocalPopChoice(w_20);
                    }
                  else
                    {
                      t = v_20;
                    }
                  t = h_21;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(m_20);
        }
      else
        {
          t = l_20;
          {
            ATerm x_20 = t;
            int y_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_5 (ATerm t)
                {
                  ATerm r_5 (ATerm t)
                  {
                    if(((a_21 != NULL) && (a_21 != t)))
                      _fail(t);
                    else
                      a_21 = t;
                    return(t);
                  }
                  t = Undefined_1_0(r_5, t);
                  return(t);
                }
                t = fetch_1_0(q_5, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(a_21)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_y_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_21)), term_d_21));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(y_20);
              }
            else
              {
                t = x_20;
              }
          }
        }
      b_21 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = b_21;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm t)
{
  ATerm k_21 = NULL;
  t = parse_options_1_0(d_113, t);
  k_21 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), k_21);
  t = k_21;
  t = f_113(t);
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_113, t);
        ;
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        {
          ATerm g_21 = t;
          int i_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_113(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_21);
            }
          else
            {
              t = g_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm m_112 (ATerm), ATerm n_112 (ATerm), ATerm o_112 (ATerm), ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm j_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_112(t);
        ;
        LocalPopChoice(p_21);
      }
    else
      {
        t = j_21;
        {
          ATerm r_21 = t;
          int s_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(s_21);
            }
          else
            {
              t = r_21;
              {
                ATerm t_21 = t;
                int u_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(u_21);
                  }
                else
                  {
                    t = t_21;
                    {
                      ATerm v_21 = t;
                      int x_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_5 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm c_6 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_y_21;
                            return(t);
                          }
                          ATerm f_6 (ATerm t)
                          {
                            t = term_z_21;
                            return(t);
                          }
                          t = Option_3_0(z_5, c_6, f_6, t);
                          ;
                          LocalPopChoice(x_21);
                        }
                      else
                        {
                          t = v_21;
                          {
                            ATerm b_22 = t;
                            int c_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(c_22);
                              }
                            else
                              {
                                t = b_22;
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
  ATerm t_5 (ATerm t)
  {
    ATerm g_6 (ATerm t)
    {
      ATerm l_21 = NULL,m_21 = NULL;
      l_21 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm e_22 = t;
        int f_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_22 = NULL;
            t = eval_config_0_0(t);
            a_22 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), a_22);
            t = a_22;
            ;
            LocalPopChoice(f_22);
          }
        else
          {
            t = e_22;
          }
        m_21 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, m_21));
        t = l_21;
      }
      return(t);
    }
    t = if_verbose2_1_0(g_6, t);
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    ATerm n_21 = NULL,o_21 = NULL,d_22 = NULL;
    n_21 = t;
    {
      ATerm g_22 = t;
      int h_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((o_21 != NULL) && (o_21 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_21 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(k_6, t);
          ;
          LocalPopChoice(h_22);
        }
      else
        {
          t = g_22;
          t = term_i_22;
          o_21 = t;
        }
      t = not_null(o_21);
      t = ReadFromFile_0_0(t);
      d_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_21, d_22);
      t = apply_strategy_1_0(m_112, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(s_5, o_112, t_5, u_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm l_6 (ATerm t)
  {
    ATerm m_6 (ATerm t)
    {
      ATerm n_6 (ATerm t)
      {
        ATerm o_6 (ATerm t)
        {
          ATerm r_6 (ATerm t)
          {
            t = Strategies_1_0(rename_sdefs_0_0, t);
            return(t);
          }
          ATerm s_6 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = Cons_2_0(r_6, s_6, t);
          return(t);
        }
        t = Cons_2_0(_id, o_6, t);
        return(t);
      }
      t = Specification_1_0(n_6, t);
      return(t);
    }
    t = _2_0(_id, m_6, t);
    return(t);
  }
  t = iowrap_3_0(l_6, _fail, default_usage_0_0, t);
  return(t);
}
