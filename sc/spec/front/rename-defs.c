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
ATerm term_t_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_t_20;
ATerm term_o_19;
ATerm term_l_19;
ATerm term_v_18;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_r_17;
ATerm term_l_17;
ATerm term_o_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_s_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_x_10;
ATerm term_g_9;
ATerm term_b_9;
ATerm term_y_8;
ATerm term_v_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_i_6;
ATerm term_e_6;
ATerm term_o_5;
void init_constant_terms (void)
{
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_6);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym__3, term_b_18, term_c_18, term_o_5);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm g_1 (ATerm w_0, ATerm);
ATerm RenameVar_0_0 (ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm r_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm x_0 (ATerm);
ATerm z_0 (ATerm);
ATerm RenameCall_0_0 (ATerm);
ATerm topdown_1_0 (ATerm r_87 (ATerm), ATerm);
ATerm assert_1_0 (ATerm v_115 (ATerm), ATerm);
ATerm HoArg_0_0 (ATerm);
ATerm c_1 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm Cify_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm escape_1_0 (ATerm v_103 (ATerm (ATerm), ATerm), ATerm);
ATerm foldr_3_0 (ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm h_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm RenameSDef_0_0 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm rename_sdefs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm f_73 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm b_73 (ATerm), ATerm c_73 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm k_73 (ATerm), ATerm);
ATerm _2_0 (ATerm m_68 (ATerm), ATerm n_68 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm a_109 (ATerm), ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm c_112 (ATerm), ATerm);
ATerm j_12 (ATerm d_12, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm d_94 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm j_94 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm l_110 (ATerm), ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm n_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm k_110 (ATerm), ATerm);
ATerm e_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm f_4 (ATerm);
ATerm need_help_1_0 (ATerm a_113 (ATerm), ATerm);
ATerm map_1_0 (ATerm s_93 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm n_81 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm o_81 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm q_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm d_115 (ATerm), ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm parse_options_1_0 (ATerm c_115 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm c_113 (ATerm), ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm iowrap_3_0 (ATerm l_112 (ATerm), ATerm m_112 (ATerm), ATerm n_112 (ATerm), ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm n_5 (ATerm);
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
  t = term_o_5;
  t = whoami_0_0(t);
  o_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), o_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = n_0;
  return(t);
}
ATerm g_1 (ATerm w_0, ATerm t)
{
  ATerm y_0 = NULL,i_1 = NULL;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue)), w_0);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_1 = ATgetFirst((ATermList) t);
      {
        ATerm p_5 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_1;
  if(match_cons(t, sym_Defined_2))
    {
      ATerm r_5 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_5) != ATmakeSymbol("c_0", 0, ATtrue)))
        _fail(t);
      y_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_0;
  return(t);
}
ATerm RenameVar_0_0 (ATerm t)
{
  ATerm b_1 = NULL,d_1 = NULL;
  b_1 = t;
  if(match_cons(t, sym__2))
    {
      ATerm s_5 = ATgetArgument(t, 0);
      d_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_1;
  {
    ATerm u_5 = t;
    int v_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_5 = ATgetArgument(t, 0);
            ATerm y_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(v_5);
        {
          ATerm z_5 = t;
          int a_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_1 = NULL,y_1 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue)), b_1);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_1 = ATgetFirst((ATermList) t);
                  {
                    ATerm b_6 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = y_1;
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm d_6 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) d_6) != ATmakeSymbol("i_0", 0, ATtrue)))
                    _fail(t);
                  m_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_1;
              ;
              LocalPopChoice(a_6);
            }
          else
            {
              t = z_5;
              t = g_1(b_1, t);
            }
        }
      }
    else
      {
        t = u_5;
        t = g_1(b_1, t);
      }
  }
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = term_e_6;
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm q_2 = NULL,t_2 = NULL;
  if(match_cons(t, sym__2))
    {
      q_2 = ATgetArgument(t, 0);
      t_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_6 = t;
    int h_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(q_2, t_2);
        ;
        LocalPopChoice(h_6);
      }
    else
      {
        t = g_6;
        t = SSL_addr(q_2, t_2);
      }
  }
  return(t);
}
ATerm r_0 (ATerm t)
{
  t = term_i_6;
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = term_e_6;
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL;
  if(match_cons(t, sym__2))
    {
      u_2 = ATgetArgument(t, 0);
      v_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_6 = t;
    int l_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(u_2, v_2);
        ;
        LocalPopChoice(l_6);
      }
    else
      {
        t = k_6;
        t = SSL_addr(u_2, v_2);
      }
  }
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = term_i_6;
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_e_6;
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm z_3 = NULL,b_4 = NULL;
  if(match_cons(t, sym__2))
    {
      z_3 = ATgetArgument(t, 0);
      b_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_6 = t;
    int o_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(z_3, b_4);
        ;
        LocalPopChoice(o_6);
      }
    else
      {
        t = m_6;
        t = SSL_addr(z_3, b_4);
      }
  }
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_i_6;
  return(t);
}
ATerm RenameCall_0_0 (ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL,o_3 = NULL,p_3 = NULL,r_3 = NULL;
  m_3 = t;
  if(match_cons(t, sym_CallT_3))
    {
      o_3 = ATgetArgument(t, 0);
      r_3 = ATgetArgument(t, 1);
      l_3 = ATgetArgument(t, 2);
      {
        ATerm n_2 = NULL,o_2 = NULL,p_2 = NULL;
        t = o_3;
        if(match_cons(t, sym_SVar_1))
          {
            p_3 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_3;
        t = foldr_3_0(p_0, q_0, r_0, t);
        n_2 = t;
        t = l_3;
        t = foldr_3_0(s_0, t_0, u_0, t);
        o_2 = t;
        {
          ATerm r_6 = t;
          int s_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, p_3, (ATerm) ATmakeAppl(sym__2, n_2, o_2));
              t = RenameVar_0_0(t);
              p_2 = t;
              ;
              LocalPopChoice(s_6);
            }
          else
            {
              t = r_6;
              t = p_3;
              t = HoArg_0_0(t);
              p_2 = t;
            }
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_2), r_3, l_3);
        }
      }
    }
  else
    {
      ATerm q_3 = NULL,y_3 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          o_3 = ATgetArgument(t, 0);
          r_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_3;
      if(match_cons(t, sym_SVar_1))
        {
          p_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_3;
      t = foldr_3_0(v_0, x_0, z_0, t);
      q_3 = t;
      {
        ATerm u_6 = t;
        int v_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, p_3, q_3);
            t = RenameVar_0_0(t);
            y_3 = t;
            ;
            LocalPopChoice(v_6);
          }
        else
          {
            t = u_6;
            t = p_3;
            t = HoArg_0_0(t);
            y_3 = t;
          }
        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, y_3), r_3);
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  t = r_87(t);
  {
    ATerm a_1 (ATerm t)
    {
      t = topdown_1_0(r_87, t);
      return(t);
    }
    t = SRTS_all(a_1, t);
  }
  return(t);
}
ATerm assert_1_0 (ATerm v_115 (ATerm), ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,a_4 = NULL;
  if(match_cons(t, sym__2))
    {
      u_3 = ATgetArgument(t, 0);
      v_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_115(t);
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_3, u_3, v_3);
  t = table_push_0_0(t);
  {
    ATerm w_6 = t;
    int z_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(w_3, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(z_6);
      }
    else
      {
        t = w_6;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_3 = ATgetFirst((ATermList) t);
        a_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(w_3, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(a_4), (ATerm) ATinsert(CheckATermList(x_3), u_3)));
    t = (ATerm) ATmakeAppl(sym__2, u_3, v_3);
  }
  return(t);
}
ATerm HoArg_0_0 (ATerm t)
{
  ATerm t_5 = NULL;
  t_5 = t;
  {
    ATerm a_7 = t;
    int f_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_5 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue)), t_5);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_5 = ATgetFirst((ATermList) t);
            {
              ATerm g_7 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = m_5;
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(f_7);
      }
    else
      {
        t = a_7;
        {
          ATerm h_7 = t;
          int i_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_5 = NULL,x_5 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue)), t_5);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_5 = ATgetFirst((ATermList) t);
                  {
                    ATerm j_7 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = x_5;
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm k_7 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) k_7) != ATmakeSymbol("l_0", 0, ATtrue)))
                    _fail(t);
                  q_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = q_5;
              ;
              LocalPopChoice(i_7);
            }
          else
            {
              t = h_7;
              {
                ATerm l_7 = t;
                int m_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_6 = NULL;
                    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue)), t_5);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        j_6 = ATgetFirst((ATermList) t);
                        {
                          ATerm p_7 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = j_6;
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    _fail(t);
                    ;
                    LocalPopChoice(m_7);
                  }
                else
                  {
                    t = l_7;
                    {
                      ATerm n_6 = NULL,y_6 = NULL;
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue)), t_5);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          y_6 = ATgetFirst((ATermList) t);
                          {
                            ATerm q_7 = (ATerm) ATgetNext((ATermList) t);
                          }
                        }
                      else
                        _fail(t);
                      t = y_6;
                      if(match_cons(t, sym_Defined_2))
                        {
                          ATerm t_7 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) t_7) != ATmakeSymbol("g_0", 0, ATtrue)))
                            _fail(t);
                          n_6 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_6;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm f_6 = NULL;
  f_6 = t;
  t = SSL_explode_string(f_6);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm c_6 = NULL;
  t = map_1_0(c_1, t);
  t = concat_0_0(t);
  c_6 = t;
  t = SSL_implode_string(c_6);
  return(t);
}
ATerm Cify_1_0 (ATerm m_0 (ATerm), ATerm t)
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
  if(match_int(t, 95))
    {
      ATerm t_6 = NULL;
      t = q_6;
      t = m_0(t);
      t_6 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(t_6), term_u_7), term_u_7);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm x_6 = NULL;
          t = q_6;
          t = m_0(t);
          x_6 = t;
          t = (ATerm) ATinsert(CheckATermList(x_6), term_u_7);
        }
      else
        {
          ATerm b_7 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = q_6;
          t = m_0(t);
          b_7 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(b_7), term_u_7), term_v_7), term_u_7);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm v_103 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL;
  c_7 = t;
  t = SSL_explode_string(c_7);
  {
    ATerm e_7 (ATerm t)
    {
      ATerm w_7 = t;
      int x_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_103(e_7, t);
          ;
          LocalPopChoice(x_7);
        }
      else
        {
          t = w_7;
          {
            ATerm y_7 = t;
            int z_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(_id, e_7, t);
                ;
                LocalPopChoice(z_7);
              }
            else
              {
                t = y_7;
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
ATerm foldr_3_0 (ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm t)
{
  ATerm a_8 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_98(t);
      ;
      LocalPopChoice(b_8);
    }
  else
    {
      t = a_8;
      {
        ATerm n_7 = NULL,o_7 = NULL,r_7 = NULL,s_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_7 = ATgetFirst((ATermList) t);
            o_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_7;
        t = w_98(t);
        r_7 = t;
        t = o_7;
        t = foldr_3_0(u_98, v_98, w_98, t);
        s_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_7, s_7);
        t = v_98(t);
      }
    }
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_e_6;
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL;
  if(match_cons(t, sym__2))
    {
      s_11 = ATgetArgument(t, 0);
      t_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_8 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(s_11, t_11);
        ;
        LocalPopChoice(d_8);
      }
    else
      {
        t = c_8;
        t = SSL_addr(s_11, t_11);
      }
  }
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_i_6;
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_e_6;
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL;
  if(match_cons(t, sym__2))
    {
      v_11 = ATgetArgument(t, 0);
      w_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_8 = t;
    int f_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(v_11, w_11);
        ;
        LocalPopChoice(f_8);
      }
    else
      {
        t = e_8;
        t = SSL_addr(v_11, w_11);
      }
  }
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_i_6;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_g_8;
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_h_8;
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_h_8;
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_e_6;
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL;
  if(match_cons(t, sym__2))
    {
      d_16 = ATgetArgument(t, 0);
      e_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(d_16, e_16);
        ;
        LocalPopChoice(j_8);
      }
    else
      {
        t = i_8;
        t = SSL_addr(d_16, e_16);
      }
  }
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_i_6;
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_g_8;
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_h_8;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_h_8;
  return(t);
}
ATerm RenameSDef_0_0 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL;
  o_9 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      p_9 = ATgetArgument(t, 0);
      q_9 = ATgetArgument(t, 1);
      r_9 = ATgetArgument(t, 2);
      n_9 = ATgetArgument(t, 3);
      {
        ATerm y_9 = NULL,a_10 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,r_11 = NULL;
        t = q_9;
        t = foldr_3_0(e_1, f_1, h_1, t);
        y_9 = t;
        t = r_9;
        t = foldr_3_0(j_1, k_1, l_1, t);
        a_10 = t;
        t = p_9;
        {
          ATerm k_8 = t;
          int l_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_12 = NULL,z_12 = NULL;
              if(match_cons(t, sym_Mod_2))
                {
                  y_12 = ATgetArgument(t, 0);
                  z_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_12), term_m_8), y_12);
              t = concat_strings_0_0(t);
              ;
              LocalPopChoice(l_8);
            }
          else
            {
              t = k_8;
            }
          t = escape_1_0(Cify_1_0, t);
          f_11 = t;
          t = SSL_int_to_string(y_9);
          g_11 = t;
          t = SSL_int_to_string(a_10);
          h_11 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_11), term_n_8), g_11), term_n_8), f_11);
          t = concat_strings_0_0(t);
          r_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_9, (ATerm) ATmakeAppl(sym__2, y_9, a_10)), (ATerm) ATmakeAppl(sym_Defined_2, term_o_8, r_11));
          t = assert_1_0(n_1, t);
          t = r_11;
          {
            ATerm p_8 = t;
            int q_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_11 = NULL;
                t = p_9;
                t = HoArg_0_0(t);
                x_11 = t;
                t = (ATerm) ATmakeAppl(sym__2, p_9, term_r_8);
                t = assert_1_0(o_1, t);
                t = x_11;
                ;
                LocalPopChoice(q_8);
              }
            else
              {
                t = p_8;
                t = (ATerm) ATmakeAppl(sym__2, p_9, (ATerm) ATmakeAppl(sym_Defined_2, term_s_8, r_11));
                t = assert_1_0(p_1, t);
                t = r_11;
              }
            t = (ATerm) ATmakeAppl(sym_SDefT_4, r_11, q_9, r_9, n_9);
          }
        }
      }
    }
  else
    {
      ATerm n_15 = NULL,r_15 = NULL,z_15 = NULL,c_16 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          p_9 = ATgetArgument(t, 0);
          q_9 = ATgetArgument(t, 1);
          r_9 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = q_9;
      t = foldr_3_0(q_1, r_1, s_1, t);
      n_15 = t;
      t = p_9;
      {
        ATerm t_8 = t;
        int u_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_17 = NULL,t_17 = NULL;
            if(match_cons(t, sym_Mod_2))
              {
                s_17 = ATgetArgument(t, 0);
                t_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_17), term_m_8), s_17);
            t = concat_strings_0_0(t);
            ;
            LocalPopChoice(u_8);
          }
        else
          {
            t = t_8;
          }
        t = escape_1_0(Cify_1_0, t);
        r_15 = t;
        t = SSL_int_to_string(n_15);
        z_15 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_15), term_n_8), r_15);
        t = concat_strings_0_0(t);
        c_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_9, n_15), (ATerm) ATmakeAppl(sym_Defined_2, term_v_8, c_16));
        t = assert_1_0(t_1, t);
        t = c_16;
        {
          ATerm w_8 = t;
          int x_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_16 = NULL;
              t = p_9;
              t = HoArg_0_0(t);
              n_16 = t;
              t = (ATerm) ATmakeAppl(sym__2, p_9, term_r_8);
              t = assert_1_0(u_1, t);
              t = n_16;
              ;
              LocalPopChoice(x_8);
            }
          else
            {
              t = w_8;
              t = (ATerm) ATmakeAppl(sym__2, p_9, (ATerm) ATmakeAppl(sym_Defined_2, term_y_8, c_16));
              t = assert_1_0(v_1, t);
              t = c_16;
            }
          t = (ATerm) ATmakeAppl(sym_SDef_3, c_16, q_9, r_9);
        }
      }
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = topdown_1_0(x_1, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm z_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RenameCall_0_0(t);
      ;
      LocalPopChoice(a_9);
    }
  else
    {
      t = z_8;
    }
  return(t);
}
ATerm rename_sdefs_0_0 (ATerm t)
{
  t = map_1_0(RenameSDef_0_0, t);
  t = map_1_0(w_1, t);
  return(t);
}
ATerm Strategies_1_0 (ATerm f_73 (ATerm), ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL;
  x_9 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_9);
  u_9 = t;
  t = v_9;
  t = f_73(t);
  w_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, w_9), u_9);
  return(t);
}
ATerm Cons_2_0 (ATerm b_73 (ATerm), ATerm c_73 (ATerm), ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL;
  h_10 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_10 = ATgetFirst((ATermList) t);
      e_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_10);
  c_10 = t;
  t = d_10;
  t = b_73(t);
  f_10 = t;
  t = e_10;
  t = c_73(t);
  g_10 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(g_10), f_10), c_10);
  return(t);
}
ATerm Specification_1_0 (ATerm k_73 (ATerm), ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL;
  n_10 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_10);
  k_10 = t;
  t = l_10;
  t = k_73(t);
  m_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, m_10), k_10);
  return(t);
}
ATerm _2_0 (ATerm m_68 (ATerm), ATerm n_68 (ATerm), ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL;
  v_10 = t;
  if(match_cons(t, sym__2))
    {
      r_10 = ATgetArgument(t, 0);
      s_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_10);
  q_10 = t;
  t = r_10;
  t = m_68(t);
  t_10 = t;
  t = s_10;
  t = n_68(t);
  u_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, t_10, u_10), q_10);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm a_109 (ATerm), ATerm t)
{
  ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL;
  if(match_cons(t, sym__2))
    {
      y_10 = ATgetArgument(t, 0);
      z_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_10, term_b_9);
  t = open_stream_0_0(t);
  a_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_11, z_10);
  t = a_109(t);
  t = fclose_0_0(t);
  t = z_10;
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = fetch_1_0(e_2, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = WriteToFile_1_0(f_2, t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL,i_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_9 = ATgetArgument(t, 0);
      if(match_cons(c_9, sym_Stream_1))
        {
          d_11 = ATgetArgument(c_9, 0);
        }
      else
        _fail(t);
      e_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(d_11, e_11);
  i_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_11);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = WriteToFile_1_0(h_2, t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_9 = ATgetArgument(t, 0);
      if(match_cons(d_9, sym_Stream_1))
        {
          j_11 = ATgetArgument(d_9, 0);
        }
      else
        _fail(t);
      k_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(j_11, k_11);
  l_11 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), l_11);
  m_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_11);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL;
  b_11 = t;
  {
    ATerm z_1 (ATerm t)
    {
      ATerm e_9 = t;
      int f_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((c_11 != NULL) && (c_11 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_11 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(a_2, t);
          ;
          LocalPopChoice(f_9);
        }
      else
        {
          t = e_9;
          t = term_g_9;
          if(((c_11 != NULL) && (c_11 != t)))
            _fail(t);
          else
            c_11 = t;
        }
      return(t);
    }
    t = _2_0(z_1, _id, t);
    t = b_11;
    {
      ATerm b_2 (ATerm t)
      {
        ATerm w_17 = NULL;
        w_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_11), w_17);
        return(t);
      }
      t = _2_0(_id, b_2, t);
      {
        ATerm h_9 = t;
        int i_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(c_2, d_2, t);
            ;
            LocalPopChoice(i_9);
          }
        else
          {
            t = h_9;
            t = _2_0(_id, g_2, t);
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
ATerm apply_strategy_1_0 (ATerm c_112 (ATerm), ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,u_11 = NULL;
  n_11 = t;
  t = dtime_0_0(t);
  t = n_11;
  t = c_112(t);
  o_11 = t;
  t = dtime_0_0(t);
  p_11 = t;
  t = o_11;
  if(match_cons(t, sym__2))
    {
      q_11 = ATgetArgument(t, 0);
      u_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_11), (ATerm) ATmakeAppl(sym_Runtime_1, p_11)), u_11);
  return(t);
}
ATerm j_12 (ATerm d_12, ATerm t)
{
  t = SSL_fclose(d_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL;
  h_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_12 = ATgetArgument(t, 0);
      {
        ATerm j_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_12);
            ;
            LocalPopChoice(k_9);
          }
        else
          {
            t = j_9;
            t = j_12(h_12, t);
          }
      }
    }
  else
    {
      t = j_12(h_12, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_12 = NULL;
  t = SSL_stdin_stream();
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_12);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_12 = NULL;
  t = SSL_stdout_stream();
  l_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_12 = NULL;
  t = SSL_stderr_stream();
  m_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_12);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm b_13 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      b_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_13;
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm g_13 = NULL;
  g_13 = t;
  t = SSL_is_string(g_13);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_9 = ATgetArgument(t, 0);
      ATerm m_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_20 = NULL,x_20 = NULL;
        w_20 = t;
        t = SSL_explode_term(w_20);
        if(match_cons(t, sym__2))
          {
            ATerm z_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_9) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm b_10 = ATgetArgument(t, 1);
              if(((ATgetType(b_10) == AT_LIST) && !(ATisEmpty(b_10))))
                {
                  x_20 = ATgetFirst((ATermList) b_10);
                  {
                    ATerm i_10 = (ATerm) ATgetNext((ATermList) b_10);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_20;
        if(match_cons(t, sym_stderr_0))
          {
            t = x_20;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = x_20;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = x_20;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(t_9);
      }
    else
      {
        t = s_9;
        {
          ATerm j_10 = t;
          int o_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_12 = NULL,w_12 = NULL,a_13 = NULL;
              t = _2_0(i_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  v_12 = ATgetArgument(t, 0);
                  w_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(v_12, w_12);
              a_13 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, a_13);
              ;
              LocalPopChoice(o_10);
            }
          else
            {
              t = j_10;
              {
                ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
                t = _2_0(j_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    d_13 = ATgetArgument(t, 0);
                    e_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(d_13, e_13);
                f_13 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, f_13);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
  ATerm p_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_13 = NULL;
      k_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_13, term_x_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(w_10);
    }
  else
    {
      t = p_10;
      {
        ATerm y_20 = NULL;
        y_20 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_20), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = y_20;
        _fail(t);
      }
    }
  h_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(j_13);
  i_13 = t;
  t = h_13;
  t = fclose_0_0(t);
  t = i_13;
  return(t);
}
ATerm fetch_1_0 (ATerm d_94 (ATerm), ATerm t)
{
  ATerm p_13 (ATerm t)
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(d_94, _id, t);
        ;
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
        t = Cons_2_0(_id, p_13, t);
      }
    return(t);
  }
  t = p_13(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      {
        ATerm s_13 = NULL,t_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_13 = ATgetFirst((ATermList) t);
            t_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_13;
        {
          ATerm k_2 (ATerm t)
          {
            t = t_13;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(k_2, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm j_94 (ATerm), ATerm t)
{
  ATerm z_13 (ATerm t)
  {
    ATerm c_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, z_13, t);
        ;
        LocalPopChoice(e_12);
      }
    else
      {
        t = c_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_94(t);
      }
    return(t);
  }
  t = z_13(t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm c_14 = NULL;
  c_14 = t;
  t = SSL_explode_string(c_14);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm d_14 = NULL;
  d_14 = t;
  t = SSL_explode_string(d_14);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm b_14 = NULL;
  t = _2_0(l_2, m_2, t);
  {
    ATerm f_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_14 = NULL,g_14 = NULL;
        if(match_cons(t, sym__2))
          {
            f_14 = ATgetArgument(t, 0);
            g_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_14;
        {
          ATerm r_2 (ATerm t)
          {
            t = g_14;
            return(t);
          }
          t = at_end_1_0(r_2, t);
        }
        ;
        LocalPopChoice(i_12);
      }
    else
      {
        t = f_12;
        {
          ATerm d_21 = NULL,e_21 = NULL;
          d_21 = t;
          t = SSL_explode_term(d_21);
          if(match_cons(t, sym__2))
            {
              ATerm n_12 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) n_12) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              e_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_21;
          t = concat_0_0(t);
        }
      }
    b_14 = t;
    t = SSL_implode_string(b_14);
  }
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(p_12);
    }
  else
    {
      t = o_12;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_14 = NULL;
      q_14 = t;
      t = SSL_is_string(q_14);
      ;
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      {
        ATerm s_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_2, t);
            ;
            LocalPopChoice(t_12);
          }
        else
          {
            t = s_12;
            {
              ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL;
              u_14 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_14 = ATgetArgument(t, 0);
                  t = v_14;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_14 = ATgetArgument(t, 0);
                      t = v_14;
                      {
                        ATerm u_12 = t;
                        int x_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_14);
                            {
                              ATerm c_13 = t;
                              int l_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm x_21 = NULL;
                                  t = eval_config_0_0(t);
                                  x_21 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_14, x_21);
                                  t = x_21;
                                  ;
                                  LocalPopChoice(l_13);
                                }
                              else
                                {
                                  t = c_13;
                                }
                            }
                            ;
                            LocalPopChoice(x_12);
                          }
                        else
                          {
                            t = u_12;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_14), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = v_14;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_15 = NULL,b_15 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_14 = ATgetArgument(t, 0);
                          w_14 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_14;
                      t = eval_config_0_0(t);
                      a_15 = t;
                      t = w_14;
                      t = eval_config_0_0(t);
                      b_15 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_15, b_15);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm l_110 (ATerm), ATerm t)
{
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_15 = NULL,i_15 = NULL;
      g_15 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm o_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_22 = NULL;
            t = eval_config_0_0(t);
            e_22 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_22);
            t = e_22;
            ;
            LocalPopChoice(q_13);
          }
        else
          {
            t = o_13;
          }
        i_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_15, term_r_13);
        t = geq_0_0(t);
        t = g_15;
        t = l_110(t);
      }
      ;
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm k_15 = NULL;
  k_15 = t;
  if(match_string(t, "-k"))
    {
      t = k_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_15;
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL;
  l_15 = t;
  t = SSL_string_to_int(l_15);
  m_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), m_15);
  t = l_15;
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_u_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_2, x_2, y_2, t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm o_15 = NULL;
  o_15 = t;
  if(match_string(t, "-S"))
    {
      t = o_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_15;
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_v_13;
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_w_13;
  return(t);
}
ATerm c_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL;
  p_15 = t;
  t = SSL_string_to_int(p_15);
  q_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), q_15);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_15);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm f_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_y_13;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_2, a_3, b_3, t);
      ;
      LocalPopChoice(h_14);
    }
  else
    {
      t = e_14;
      {
        ATerm i_14 = t;
        int j_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_3, d_3, e_3, t);
            ;
            LocalPopChoice(j_14);
          }
        else
          {
            t = i_14;
            t = Option_3_0(f_3, g_3, h_3, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_15 = NULL;
      t = term_o_5;
      t = d_0(t);
      v_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_14, term_l_14, v_15);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm y_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_15 = ATgetFirst((ATermList) t);
          u_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_15;
      t = a_0(t);
      t = term_o_5;
      t = b_0(t);
      y_15 = t;
      t = (ATerm) ATinsert(CheckATermList(u_15), y_15);
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm a_16 = NULL;
  a_16 = t;
  if(match_string(t, "-o"))
    {
      t = a_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_16;
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm b_16 = NULL;
  b_16 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), b_16);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_16);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_m_14;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_3, j_3, k_3, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL;
  if(match_cons(t, sym__3))
    {
      f_16 = ATgetArgument(t, 0);
      g_16 = ATgetArgument(t, 1);
      h_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_16, g_16);
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_14 = ATgetArgument(t, 0);
            ATerm r_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(f_16, g_16);
        ;
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        t = (ATerm) ATempty;
      }
    i_16 = t;
    t = SSL_table_put(f_16, g_16, (ATerm) ATinsert(CheckATermList(i_16), h_16));
    t = (ATerm) ATmakeAppl(sym__3, f_16, g_16, h_16);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_16 = NULL;
      t = term_o_5;
      t = k_0(t);
      u_16 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_14, term_l_14, u_16);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm y_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_16 = ATgetFirst((ATermList) t);
          r_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_16;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_16 = ATgetFirst((ATermList) t);
          t_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_16;
      t = h_0(t);
      t = s_16;
      t = j_0(t);
      y_16 = t;
      t = (ATerm) ATinsert(CheckATermList(t_16), y_16);
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm a_17 = NULL;
  a_17 = t;
  if(match_string(t, "-i"))
    {
      t = a_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_17;
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm b_17 = NULL;
  b_17 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), b_17);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_17);
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_s_14;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_3, s_3, t_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_17 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_5;
  t = whoami_0_0(t);
  c_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), c_17));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm t_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_22 = NULL;
        t = eval_config_0_0(t);
        i_22 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_22);
        t = i_22;
        ;
        LocalPopChoice(x_14);
      }
    else
      {
        t = t_14;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm t)
{
  ATerm y_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_98(t);
      ;
      LocalPopChoice(z_14);
    }
  else
    {
      t = y_14;
      {
        ATerm f_17 = NULL,g_17 = NULL,j_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_17 = ATgetFirst((ATermList) t);
            g_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_17;
        t = foldr_2_0(s_98, t_98, t);
        j_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_17, j_17);
        t = t_98(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_e_6;
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL;
  if(match_cons(t, sym__2))
    {
      n_22 = ATgetArgument(t, 0);
      o_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(n_22, o_22);
        ;
        LocalPopChoice(d_15);
      }
    else
      {
        t = c_15;
        t = SSL_addr(n_22, o_22);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_17 = NULL,j_22 = NULL,k_22 = NULL;
  t = times_0_0(t);
  j_22 = t;
  t = SSL_explode_term(j_22);
  if(match_cons(t, sym__2))
    {
      ATerm e_15 = ATgetArgument(t, 0);
      k_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_22;
  t = foldr_2_0(c_4, d_4, t);
  m_17 = t;
  t = SSL_TicksToSeconds(m_17);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
  e_18 = t;
  if(match_cons(t, sym__2))
    {
      f_18 = ATgetArgument(t, 0);
      g_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_18;
        if((f_18 != t))
          {
            _fail(t);
          }
        t = e_18;
        ;
        LocalPopChoice(h_15);
      }
    else
      {
        t = f_15;
        t = e_18;
        {
          ATerm j_15 = t;
          int s_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_18, g_18);
              ;
              LocalPopChoice(s_15);
            }
          else
            {
              t = j_15;
              t = SSL_gtr(f_18, g_18);
            }
          t = (ATerm) ATmakeAppl(sym__2, f_18, g_18);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_110 (ATerm), ATerm t)
{
  ATerm w_15 = t;
  int x_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_18 = NULL,l_18 = NULL;
      j_18 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm j_16 = t;
        int k_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_23 = NULL;
            t = eval_config_0_0(t);
            b_23 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_23);
            t = b_23;
            ;
            LocalPopChoice(k_16);
          }
        else
          {
            t = j_16;
          }
        l_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_18, term_i_6);
        t = geq_0_0(t);
        t = j_18;
        t = k_110(t);
      }
      ;
      LocalPopChoice(x_15);
    }
  else
    {
      t = w_15;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL;
  t = run_time_0_0(t);
  n_18 = t;
  t = term_o_5;
  t = whoami_0_0(t);
  o_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), n_18), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), o_18));
  t = (ATerm) ATmakeAppl(sym__2, term_l_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_16), n_18), term_m_16), o_18));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm p_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(v_16);
    }
  else
    {
      t = p_16;
      {
        ATerm w_16 = t;
        int x_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(x_16);
          }
        else
          {
            t = w_16;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_113 (ATerm), ATerm t)
{
  ATerm z_16 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm e_17 = t;
        int h_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_23 = NULL;
            t = eval_config_0_0(t);
            f_23 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), f_23);
            t = f_23;
            ;
            LocalPopChoice(h_17);
          }
        else
          {
            t = e_17;
          }
      }
      ;
      LocalPopChoice(d_17);
    }
  else
    {
      t = z_16;
      t = fetch_1_0(f_4, t);
    }
  t = a_113(t);
  return(t);
}
ATerm map_1_0 (ATerm s_93 (ATerm), ATerm t)
{
  ATerm p_18 (ATerm t)
  {
    ATerm i_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(k_17);
      }
    else
      {
        t = i_17;
        t = Cons_2_0(s_93, p_18, t);
      }
    return(t);
  }
  t = p_18(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_18 = ATgetFirst((ATermList) t);
      s_18 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_18 = NULL,x_18 = NULL;
        t = s_18;
        t = f_0(t);
        w_18 = t;
        t = r_18;
        t = e_0(t);
        x_18 = t;
        t = s_18;
        {
          ATerm g_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(w_18), x_18);
            return(t);
          }
          t = reverse_acc_2_0(e_0, g_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_5;
      t = f_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm n_81 (ATerm), ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL;
  b_19 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_19);
  y_18 = t;
  t = z_18;
  t = n_81(t);
  a_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, a_19), y_18);
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm e_19 = NULL;
  e_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_19), term_l_17);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm p_17 = t;
        int q_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_23 = NULL;
            t = eval_config_0_0(t);
            j_23 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), j_23);
            t = j_23;
            ;
            LocalPopChoice(q_17);
          }
        else
          {
            t = p_17;
          }
      }
      ;
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      t = fetch_1_0(h_4, t);
    }
  t = term_r_17;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, i_4, t);
  t = map_1_0(j_4, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm o_81 (ATerm), ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
  i_19 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      g_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_19);
  f_19 = t;
  t = g_19;
  t = o_81(t);
  h_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, h_19), f_19);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL;
  m_19 = t;
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_19;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_17 = ATgetFirst((ATermList) t);
                ATerm y_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_19;
          }
        ;
        LocalPopChoice(v_17);
      }
    else
      {
        t = u_17;
        t = (ATerm) ATinsert(ATempty, m_19);
      }
    n_19 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), n_19);
    t = m_19;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_23 = NULL;
        t = eval_config_0_0(t);
        n_23 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_23);
        t = n_23;
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm k_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_d_18;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_h_18;
  return(t);
}
ATerm n_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_i_18;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_k_18;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_4, l_4, m_4, t);
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = m_18;
      t = Option_3_0(n_4, o_4, p_4, t);
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm t_19 = NULL;
  t_19 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), t_19);
  t = (ATerm) ATmakeAppl(sym_Program_1, t_19);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_115 (ATerm), ATerm t)
{
  ATerm s_19 = NULL;
  s_19 = t;
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_18;
        t = d_115(t);
        ;
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
      }
    t = s_19;
    {
      ATerm r_4 (ATerm t)
      {
        ATerm c_19 = t;
        int d_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_19 = t;
            int k_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(k_19);
              }
            else
              {
                t = j_19;
                t = d_115(t);
                t = Cons_2_0(_id, r_4, t);
              }
            ;
            LocalPopChoice(d_19);
          }
        else
          {
            t = c_19;
            {
              ATerm v_19 = NULL,w_19 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_19 = ATgetFirst((ATermList) t);
                  w_19 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(w_19), (ATerm) ATmakeAppl(sym_Undefined_1, v_19));
            }
          }
        return(t);
      }
      t = Cons_2_0(q_4, r_4, t);
    }
  }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm g_20 = NULL;
  g_20 = t;
  if(match_string(t, "--help"))
    {
      t = g_20;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_20;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_20;
        }
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_l_19;
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_o_19;
  return(t);
}
ATerm w_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_115 (ATerm), ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL;
  d_20 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = d_20;
  {
    ATerm s_4 (ATerm t)
    {
      ATerm p_19 = t;
      int q_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_115(t);
          ;
          LocalPopChoice(q_19);
        }
      else
        {
          t = p_19;
          {
            ATerm r_19 = t;
            int u_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_4, u_4, v_4, t);
                ;
                LocalPopChoice(u_19);
              }
            else
              {
                t = r_19;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_4, t);
    {
      ATerm x_19 = t;
      int y_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_20 = NULL;
          l_20 = t;
          {
            ATerm z_19 = t;
            int a_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = l_20;
                {
                  ATerm b_20 = t;
                  int c_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm h_20 = t;
                        int i_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm c_24 = NULL;
                            t = eval_config_0_0(t);
                            c_24 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), c_24);
                            t = c_24;
                            ;
                            LocalPopChoice(i_20);
                          }
                        else
                          {
                            t = h_20;
                          }
                      }
                      ;
                      LocalPopChoice(c_20);
                    }
                  else
                    {
                      t = b_20;
                      t = fetch_1_0(w_4, t);
                    }
                  t = l_20;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(a_20);
              }
            else
              {
                t = z_19;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm j_20 = t;
                  int k_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_24 = NULL;
                      t = eval_config_0_0(t);
                      j_24 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), j_24);
                      t = j_24;
                      ;
                      LocalPopChoice(k_20);
                    }
                  else
                    {
                      t = j_20;
                    }
                  t = l_20;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(y_19);
        }
      else
        {
          t = x_19;
          {
            ATerm m_20 = t;
            int n_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_4 (ATerm t)
                {
                  ATerm y_4 (ATerm t)
                  {
                    if(((e_20 != NULL) && (e_20 != t)))
                      _fail(t);
                    else
                      e_20 = t;
                    return(t);
                  }
                  t = Undefined_1_0(y_4, t);
                  return(t);
                }
                t = fetch_1_0(x_4, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(e_20)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_l_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_20)), term_t_20));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(n_20);
              }
            else
              {
                t = m_20;
              }
          }
        }
      f_20 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = f_20;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_113 (ATerm), ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm t)
{
  ATerm o_20 = NULL;
  t = parse_options_1_0(c_113, t);
  o_20 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), o_20);
  t = o_20;
  t = e_113(t);
  {
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_113, t);
        ;
        LocalPopChoice(v_20);
      }
    else
      {
        t = u_20;
        {
          ATerm z_20 = t;
          int a_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_113(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(a_21);
            }
          else
            {
              t = z_20;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = if_verbose2_1_0(f_5, t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_b_21;
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_c_21;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL;
  p_20 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_24 = NULL;
        t = eval_config_0_0(t);
        n_24 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_24);
        t = n_24;
        ;
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
      }
    q_20 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, q_20));
    t = p_20;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm l_112 (ATerm), ATerm m_112 (ATerm), ATerm n_112 (ATerm), ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_112(t);
        ;
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        {
          ATerm j_21 = t;
          int k_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(k_21);
            }
          else
            {
              t = j_21;
              {
                ATerm l_21 = t;
                int m_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(m_21);
                  }
                else
                  {
                    t = l_21;
                    {
                      ATerm n_21 = t;
                      int o_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(c_5, d_5, e_5, t);
                          ;
                          LocalPopChoice(o_21);
                        }
                      else
                        {
                          t = n_21;
                          {
                            ATerm p_21 = t;
                            int q_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(q_21);
                              }
                            else
                              {
                                t = p_21;
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
  ATerm b_5 (ATerm t)
  {
    ATerm r_20 = NULL,s_20 = NULL,q_24 = NULL;
    r_20 = t;
    {
      ATerm r_21 = t;
      int s_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((s_20 != NULL) && (s_20 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(g_5, t);
          ;
          LocalPopChoice(s_21);
        }
      else
        {
          t = r_21;
          t = term_t_21;
          s_20 = t;
        }
      t = not_null(s_20);
      t = ReadFromFile_0_0(t);
      q_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_20, q_24);
      t = apply_strategy_1_0(l_112, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(z_4, n_112, a_5, b_5, t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = _2_0(_id, i_5, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = Specification_1_0(j_5, t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = Cons_2_0(_id, k_5, t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = Cons_2_0(l_5, n_5, t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = Strategies_1_0(rename_sdefs_0_0, t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(h_5, _fail, default_usage_0_0, t);
  return(t);
}
