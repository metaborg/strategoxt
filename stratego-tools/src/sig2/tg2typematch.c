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
Symbol sym_Module_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_Choice_2;
Symbol sym_Id_0;
Symbol sym_Match_1;
Symbol sym_Path_2;
Symbol sym_SDefNoArgs_2;
Symbol sym_TreeGrammar_1;
Symbol sym_NonTermDec_3;
Symbol sym_Prod_2;
Symbol sym_Id_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Undefined_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_SDefNoArgs_2 = ATmakeSymbol("SDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SDefNoArgs_2);
  sym_TreeGrammar_1 = ATmakeSymbol("TreeGrammar", 1, ATfalse);
  ATprotectSymbol(sym_TreeGrammar_1);
  sym_NonTermDec_3 = ATmakeSymbol("NonTermDec", 3, ATfalse);
  ATprotectSymbol(sym_NonTermDec_3);
  sym_Prod_2 = ATmakeSymbol("Prod", 2, ATfalse);
  ATprotectSymbol(sym_Prod_2);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_n_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_e_15;
ATerm term_a_15;
ATerm term_w_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_n_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_j_9;
ATerm term_t_8;
ATerm term_e_8;
ATerm term_z_7;
ATerm term_h_7;
ATerm term_z_6;
ATerm term_l_6;
ATerm term_b_6;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_t_5;
void init_constant_terms (void)
{
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym__2, term_s_9, term_x_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym__2, term_g_10, term_t_5);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__2, term_r_10, term_s_10);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_t_5);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym__2, term_c_13, term_t_5);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym__2, term_n_12, term_t_5);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__2, term_k_15, term_t_5);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TODO", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("is-", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm to_TypeMatch_Strat_0_0 (ATerm);
ATerm a_4 (ATerm g_64, ATerm h_64, ATerm);
ATerm map_1_0 (ATerm y_88 (ATerm), ATerm);
ATerm _2_0 (ATerm n_64 (ATerm), ATerm o_64 (ATerm), ATerm);
ATerm b_4 (ATerm t_31, ATerm u_31, ATerm);
ATerm c_4 (ATerm j_50, ATerm k_50, ATerm);
ATerm e_4 (ATerm g_99 (ATerm), ATerm n_387, ATerm n_50, ATerm);
ATerm d_4 (ATerm f_50, ATerm g_50, ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm q_82 (ATerm), ATerm);
ATerm c_6 (ATerm w_5, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm f_4 (ATerm l_50, ATerm);
ATerm g_4 (ATerm v_31, ATerm w_31, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm p_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm i_89 (ATerm), ATerm);
ATerm debug_1_0 (ATerm e_99 (ATerm), ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm p_109 (ATerm), ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm m_4 (ATerm x_56, ATerm y_56, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm k_4 (ATerm c_44, ATerm d_44, ATerm b_44, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm h_4 (ATerm g_42, ATerm h_42, ATerm);
ATerm foldr_2_0 (ATerm q_95 (ATerm), ATerm r_95 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm o_109 (ATerm), ATerm);
ATerm n_2 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm p_2 (ATerm);
ATerm need_help_1_0 (ATerm o_83 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm j_4 (ATerm t_45, ATerm u_45, ATerm);
ATerm Program_1_0 (ATerm v_81 (ATerm), ATerm);
ATerm s_2 (ATerm);
ATerm u_2 (ATerm);
ATerm x_2 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm w_81 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm y_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm c_69 (ATerm), ATerm d_69 (ATerm), ATerm);
ATerm n_3 (ATerm);
ATerm parse_options_p__1_0 (ATerm n_101 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm parse_options_1_0 (ATerm m_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm);
ATerm i_4 (ATerm);
ATerm t_4 (ATerm);
ATerm y_4 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm iowrap_3_0 (ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_0 = NULL,k_0 = NULL,o_0 = NULL,q_0 = NULL,r_0 = NULL;
  f_0 = t;
  t = term_t_5;
  t = whoami_0_0(t);
  k_0 = t;
  t = term_u_5;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_5), k_0), term_v_5);
  q_0 = t;
  t = SSL_printnl(o_0, q_0);
  t = term_y_5;
  r_0 = t;
  t = SSL_exit(r_0);
  t = f_0;
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_b_6;
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = term_b_6;
  return(t);
}
ATerm to_TypeMatch_Strat_0_0 (ATerm t)
{
  ATerm o_2 = NULL,q_2 = NULL,t_2 = NULL,v_2 = NULL,w_2 = NULL;
  t_2 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_2 = ATgetFirst((ATermList) t);
      w_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_2 = ATgetFirst((ATermList) t);
      q_2 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL;
        t = v_2;
        if(match_cons(t, sym_Prod_2))
          {
            ATerm h_6 = ATgetArgument(t, 0);
            if(match_cons(h_6, sym_Id_1))
              {
                w_0 = ATgetArgument(h_6, 0);
              }
            else
              _fail(t);
            x_0 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_0;
        t = map_1_0(z_0, t);
        y_0 = t;
        t = (ATerm) ATinsert(CheckATermList(q_2), o_2);
        t = to_TypeMatch_Strat_0_0(t);
        v_0 = t;
        t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, w_0, y_0)), v_0);
      }
    }
  else
    {
      ATerm g_1 = NULL,h_1 = NULL,k_1 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_2;
      if(match_cons(t, sym_Prod_2))
        {
          ATerm i_6 = ATgetArgument(t, 0);
          if(match_cons(i_6, sym_Id_1))
            {
              g_1 = ATgetArgument(i_6, 0);
            }
          else
            _fail(t);
          h_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_1;
      t = map_1_0(a_1, t);
      k_1 = t;
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, g_1, k_1));
    }
  return(t);
}
ATerm a_4 (ATerm g_64, ATerm h_64, ATerm t)
{
  t = SSL_strcat(g_64, h_64);
  return(t);
}
ATerm map_1_0 (ATerm y_88 (ATerm), ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm j_6 = t;
    int k_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(k_6);
      }
    else
      {
        t = j_6;
        t = Cons_2_0(y_88, z_2, t);
      }
    return(t);
  }
  t = z_2(t);
  return(t);
}
ATerm _2_0 (ATerm n_64 (ATerm), ATerm o_64 (ATerm), ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL,h_3 = NULL,j_3 = NULL,k_3 = NULL,b_0 = NULL,l_0 = NULL;
  k_3 = t;
  if(match_cons(t, sym__2))
    {
      e_3 = ATgetArgument(t, 0);
      f_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_3);
  d_3 = t;
  t = e_3;
  t = n_64(t);
  h_3 = t;
  t = f_3;
  t = o_64(t);
  j_3 = t;
  l_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_3, j_3);
  b_0 = t;
  t = SSLsetAnnotations(b_0, d_3);
  return(t);
}
ATerm b_4 (ATerm t_31, ATerm u_31, ATerm t)
{
  ATerm s_3 = NULL;
  t = SSL_fputc(t_31, u_31);
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_3);
  return(t);
}
ATerm c_4 (ATerm j_50, ATerm k_50, ATerm t)
{
  ATerm n_4 = NULL;
  t = SSL_write_term_to_stream_text(j_50, k_50);
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_4);
  return(t);
}
ATerm e_4 (ATerm g_99 (ATerm), ATerm n_387, ATerm n_50, ATerm t)
{
  ATerm o_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_387, term_l_6);
  t = open_stream_0_0(t);
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_4, n_50);
  t = g_99(t);
  t = fclose_0_0(t);
  t = n_50;
  return(t);
}
ATerm d_4 (ATerm f_50, ATerm g_50, ATerm t)
{
  ATerm p_4 = NULL;
  t = SSL_write_term_to_stream_baf(f_50, g_50);
  p_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_4);
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = fetch_1_0(i_1, t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL;
  if(match_cons(t, sym__2))
    {
      v_4 = ATgetArgument(t, 0);
      w_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_4(j_1, v_4, w_4, t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm x_4 = NULL,z_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_6 = ATgetArgument(t, 0);
      if(match_cons(m_6, sym_Stream_1))
        {
          x_4 = ATgetArgument(m_6, 0);
        }
      else
        _fail(t);
      z_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_4(x_4, z_4, t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm a_5 = NULL,d_5 = NULL;
  if(match_cons(t, sym__2))
    {
      a_5 = ATgetArgument(t, 0);
      d_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_4(m_1, a_5, d_5, t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_6 = ATgetArgument(t, 0);
      if(match_cons(u_6, sym_Stream_1))
        {
          f_5 = ATgetArgument(u_6, 0);
        }
      else
        _fail(t);
      h_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_4(f_5, h_5, t);
  e_5 = t;
  t = term_z_6;
  i_5 = t;
  t = e_5;
  if(match_cons(t, sym_Stream_1))
    {
      j_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_6, e_5);
  t = b_4(i_5, j_5, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL;
  q_4 = t;
  {
    ATerm b_1 (ATerm t)
    {
      ATerm e_7 = t;
      int f_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((r_4 != NULL) && (r_4 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_4 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(c_1, t);
          ;
          LocalPopChoice(f_7);
        }
      else
        {
          t = e_7;
          t = term_h_7;
          if(((r_4 != NULL) && (r_4 != t)))
            _fail(t);
          else
            r_4 = t;
        }
      return(t);
    }
    t = _2_0(b_1, _id, t);
    t = q_4;
    {
      ATerm d_1 (ATerm t)
      {
        ATerm s_4 = NULL;
        s_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_4), s_4);
        return(t);
      }
      t = _2_0(_id, d_1, t);
      {
        ATerm i_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(e_1, f_1, t);
            ;
            LocalPopChoice(j_7);
          }
        else
          {
            t = i_7;
            t = _2_0(_id, l_1, t);
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
ATerm apply_strategy_1_0 (ATerm q_82 (ATerm), ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
  k_5 = t;
  t = dtime_0_0(t);
  t = k_5;
  t = q_82(t);
  l_5 = t;
  t = dtime_0_0(t);
  m_5 = t;
  t = l_5;
  if(match_cons(t, sym__2))
    {
      n_5 = ATgetArgument(t, 0);
      o_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_5), (ATerm) ATmakeAppl(sym_Runtime_1, m_5)), o_5);
  return(t);
}
ATerm c_6 (ATerm w_5, ATerm t)
{
  t = SSL_fclose(w_5);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL;
  a_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_5 = ATgetArgument(t, 0);
      {
        ATerm k_7 = t;
        int l_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_5);
            ;
            LocalPopChoice(l_7);
          }
        else
          {
            t = k_7;
            t = c_6(a_6, t);
          }
      }
    }
  else
    {
      t = c_6(a_6, t);
    }
  return(t);
}
ATerm f_4 (ATerm l_50, ATerm t)
{
  t = SSL_read_term_from_stream(l_50);
  return(t);
}
ATerm g_4 (ATerm v_31, ATerm w_31, ATerm t)
{
  ATerm d_6 = NULL;
  t = SSL_fopen(v_31, w_31);
  d_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_6);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_6 = NULL;
  t = SSL_stdin_stream();
  e_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_6);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_6 = NULL;
  t = SSL_stdout_stream();
  f_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_6);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_6 = NULL;
  t = SSL_stderr_stream();
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_6);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm q_6 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      q_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_6;
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm t_6 = NULL;
  t_6 = t;
  t = SSL_is_string(t_6);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_7 = ATgetArgument(t, 0);
      ATerm o_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_6 = NULL,x_1 = NULL;
        n_6 = t;
        t = SSL_explode_term(n_6);
        if(match_cons(t, sym__2))
          {
            ATerm r_7 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_7) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm v_7 = ATgetArgument(t, 1);
              if(((ATgetType(v_7) == AT_LIST) && !(ATisEmpty(v_7))))
                {
                  x_1 = ATgetFirst((ATermList) v_7);
                  {
                    ATerm w_7 = (ATerm) ATgetNext((ATermList) v_7);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = x_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = x_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = x_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(q_7);
      }
    else
      {
        t = p_7;
        {
          ATerm x_7 = t;
          int y_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_6 = NULL,p_6 = NULL;
              t = _2_0(n_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  o_6 = ATgetArgument(t, 0);
                  p_6 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_4(o_6, p_6, t);
              ;
              LocalPopChoice(y_7);
            }
          else
            {
              t = x_7;
              {
                ATerm r_6 = NULL,s_6 = NULL;
                t = _2_0(o_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    r_6 = ATgetArgument(t, 0);
                    s_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_4(r_6, s_6, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_z_7;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
  ATerm c_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_6 = NULL;
      y_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_6, term_e_8);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(d_8);
    }
  else
    {
      t = c_8;
      t = debug_1_0(p_1, t);
      _fail(t);
    }
  v_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_4(x_6, t);
  w_6 = t;
  t = v_6;
  t = fclose_0_0(t);
  t = w_6;
  return(t);
}
ATerm fetch_1_0 (ATerm i_89 (ATerm), ATerm t)
{
  ATerm a_7 (ATerm t)
  {
    ATerm g_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(i_89, _id, t);
        ;
        LocalPopChoice(i_8);
      }
    else
      {
        t = g_8;
        t = Cons_2_0(_id, a_7, t);
      }
    return(t);
  }
  t = a_7(t);
  return(t);
}
ATerm debug_1_0 (ATerm e_99 (ATerm), ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL,g_7 = NULL;
  b_7 = t;
  t = e_99(t);
  c_7 = t;
  t = term_u_5;
  d_7 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_7), c_7);
  g_7 = t;
  t = SSL_printnl(d_7, g_7);
  t = b_7;
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm m_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(o_8);
    }
  else
    {
      t = m_8;
    }
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_t_8;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm y_8 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_7 = NULL;
      n_7 = t;
      t = SSL_is_string(n_7);
      ;
      LocalPopChoice(e_9);
    }
  else
    {
      t = y_8;
      {
        ATerm f_9 = t;
        int g_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(q_1, t);
            ;
            LocalPopChoice(g_9);
          }
        else
          {
            t = f_9;
            {
              ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
              s_7 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_7 = ATgetArgument(t, 0);
                  t = t_7;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_7 = ATgetArgument(t, 0);
                      t = t_7;
                      {
                        ATerm h_9 = t;
                        int i_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(i_9);
                          }
                        else
                          {
                            t = h_9;
                            t = debug_1_0(r_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_8 = NULL,b_8 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_7 = ATgetArgument(t, 0);
                          u_7 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_7;
                      t = eval_config_0_0(t);
                      a_8 = t;
                      t = u_7;
                      t = eval_config_0_0(t);
                      b_8 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_8, b_8);
                      t = a_4(a_8, b_8, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm f_8 = NULL,h_8 = NULL;
  f_8 = t;
  t = term_j_9;
  h_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_9, f_8);
  t = j_4(h_8, f_8, t);
  {
    ATerm m_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_8 = NULL,k_8 = NULL;
        t = eval_config_0_0(t);
        j_8 = t;
        t = term_j_9;
        k_8 = t;
        t = SSL_table_put(k_8, f_8, j_8);
        t = j_8;
        ;
        LocalPopChoice(n_9);
      }
    else
      {
        t = m_9;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm p_109 (ATerm), ATerm t)
{
  ATerm p_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_8 = NULL,n_8 = NULL;
      l_8 = t;
      t = term_s_9;
      t = get_config_0_0(t);
      n_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_8, term_t_9);
      t = geq_0_0(t);
      t = l_8;
      t = p_109(t);
      ;
      LocalPopChoice(r_9);
    }
  else
    {
      t = p_9;
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm p_8 = NULL;
  p_8 = t;
  if(match_string(t, "-k"))
    {
      t = p_8;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_8;
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
  q_8 = t;
  t = SSL_string_to_int(q_8);
  r_8 = t;
  t = term_u_9;
  s_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_9, r_8);
  t = m_4(s_8, r_8, t);
  t = q_8;
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_w_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_1, t_1, u_1, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm u_8 = NULL;
  u_8 = t;
  if(match_string(t, "-S"))
    {
      t = u_8;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_8;
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL;
  t = term_s_9;
  v_8 = t;
  t = term_x_9;
  w_8 = t;
  t = term_y_9;
  t = m_4(v_8, w_8, t);
  t = term_z_9;
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_b_10;
  return(t);
}
ATerm z_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm x_8 = NULL,z_8 = NULL,a_9 = NULL;
  x_8 = t;
  t = SSL_string_to_int(x_8);
  z_8 = t;
  t = term_s_9;
  a_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_9, z_8);
  t = m_4(a_9, z_8, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_8);
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_c_10;
  return(t);
}
ATerm c_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL;
  t = term_g_10;
  b_9 = t;
  t = term_t_5;
  c_9 = t;
  t = term_h_10;
  t = m_4(b_9, c_9, t);
  t = term_i_10;
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_1, w_1, y_1, t);
      ;
      LocalPopChoice(l_10);
    }
  else
    {
      t = k_10;
      {
        ATerm m_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_1, a_2, b_2, t);
            ;
            LocalPopChoice(n_10);
          }
        else
          {
            t = m_10;
            t = Option_3_0(c_2, d_2, e_2, t);
          }
      }
    }
  return(t);
}
ATerm m_4 (ATerm x_56, ATerm y_56, ATerm t)
{
  ATerm d_9 = NULL;
  t = term_j_9;
  d_9 = t;
  t = SSL_table_put(d_9, x_56, y_56);
  t = (ATerm) ATmakeAppl(sym__3, term_j_9, x_56, y_56);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_9 = NULL,q_9 = NULL,v_9 = NULL;
      t = term_t_5;
      t = d_0(t);
      o_9 = t;
      t = term_r_10;
      q_9 = t;
      t = term_s_10;
      v_9 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_10, term_s_10, o_9);
      t = k_4(q_9, v_9, o_9, t);
      _fail(t);
    }
  else
    {
      ATerm a_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_9 = ATgetFirst((ATermList) t);
          l_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_9;
      t = a_0(t);
      t = term_t_5;
      t = c_0(t);
      a_10 = t;
      t = (ATerm) ATinsert(CheckATermList(l_9), a_10);
    }
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm d_10 = NULL;
  d_10 = t;
  if(match_string(t, "-o"))
    {
      t = d_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_10;
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL;
  e_10 = t;
  t = term_t_10;
  f_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_10, e_10);
  t = m_4(f_10, e_10, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_10);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_u_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_2, g_2, h_2, t);
  return(t);
}
ATerm k_4 (ATerm c_44, ATerm d_44, ATerm b_44, ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
  o_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_44, d_44);
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_10 = ATgetArgument(t, 0);
            ATerm y_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_44, d_44);
        t = j_4(c_44, d_44, t);
        ;
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        t = (ATerm) ATempty;
      }
    p_10 = t;
    t = (ATerm) ATinsert(CheckATermList(p_10), b_44);
    q_10 = t;
    t = SSL_table_put(c_44, d_44, q_10);
    t = o_10;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm b_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_11 = NULL,k_11 = NULL,n_11 = NULL;
      t = term_t_5;
      t = j_0(t);
      i_11 = t;
      t = term_r_10;
      k_11 = t;
      t = term_s_10;
      n_11 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_10, term_s_10, i_11);
      t = k_4(k_11, n_11, i_11, t);
      _fail(t);
    }
  else
    {
      ATerm s_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_11 = ATgetFirst((ATermList) t);
          f_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_11;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_11 = ATgetFirst((ATermList) t);
          h_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_11;
      t = h_0(t);
      t = g_11;
      t = i_0(t);
      s_11 = t;
      t = (ATerm) ATinsert(CheckATermList(h_11), s_11);
    }
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm u_11 = NULL;
  u_11 = t;
  if(match_string(t, "-i"))
    {
      t = u_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_11;
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL;
  x_11 = t;
  t = term_z_10;
  y_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_10, x_11);
  t = m_4(y_11, x_11, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_11);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_a_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_2, j_2, k_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_11 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_5;
  t = whoami_0_0(t);
  z_11 = t;
  t = term_u_5;
  e_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_11), z_11);
  f_12 = t;
  t = SSL_printnl(e_12, f_12);
  t = term_y_5;
  g_12 = t;
  t = SSL_exit(g_12);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_11;
  t = get_config_0_0(t);
  return(t);
}
ATerm h_4 (ATerm g_42, ATerm h_42, ATerm t)
{
  ATerm e_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_42, h_42);
      ;
      LocalPopChoice(j_11);
    }
  else
    {
      t = e_11;
      t = SSL_addr(g_42, h_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm q_95 (ATerm), ATerm r_95 (ATerm), ATerm t)
{
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_95(t);
      ;
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      {
        ATerm l_12 = NULL,m_12 = NULL,p_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_12 = ATgetFirst((ATermList) t);
            m_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_12;
        t = foldr_2_0(q_95, r_95, t);
        p_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_12, p_12);
        t = r_95(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_x_9;
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL;
  if(match_cons(t, sym__2))
    {
      p_3 = ATgetArgument(t, 0);
      q_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_4(p_3, q_3, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_12 = NULL,g_3 = NULL,i_3 = NULL;
  t = times_0_0(t);
  g_3 = t;
  t = SSL_explode_term(g_3);
  if(match_cons(t, sym__2))
    {
      ATerm o_11 = ATgetArgument(t, 0);
      i_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_3;
  t = foldr_2_0(l_2, m_2, t);
  u_12 = t;
  t = SSL_TicksToSeconds(u_12);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
  i_13 = t;
  if(match_cons(t, sym__2))
    {
      j_13 = ATgetArgument(t, 0);
      k_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_13;
        if((j_13 != t))
          {
            _fail(t);
          }
        t = i_13;
        ;
        LocalPopChoice(q_11);
      }
    else
      {
        t = p_11;
        t = (ATerm) ATmakeAppl(sym__2, j_13, k_13);
        {
          ATerm r_11 = t;
          int t_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_13, k_13);
              ;
              LocalPopChoice(t_11);
            }
          else
            {
              t = r_11;
              t = SSL_gtr(j_13, k_13);
            }
          t = (ATerm) ATmakeAppl(sym__2, j_13, k_13);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_109 (ATerm), ATerm t)
{
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_13 = NULL,r_13 = NULL;
      p_13 = t;
      t = term_s_9;
      t = get_config_0_0(t);
      r_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_13, term_y_5);
      t = geq_0_0(t);
      t = p_13;
      t = o_109(t);
      ;
      LocalPopChoice(w_11);
    }
  else
    {
      t = v_11;
    }
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL;
  t = run_time_0_0(t);
  u_13 = t;
  t = term_t_5;
  t = whoami_0_0(t);
  v_13 = t;
  t = term_u_5;
  w_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_12), u_13), term_a_12), v_13);
  x_13 = t;
  t = SSL_printnl(w_13, x_13);
  t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_12), u_13), term_a_12), v_13));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_14 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_9;
  e_14 = t;
  t = SSL_exit(e_14);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm o_83 (ATerm), ATerm t)
{
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      t = fetch_1_0(p_2, t);
    }
  t = o_83(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_14 = ATgetFirst((ATermList) t);
      h_14 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_14 = NULL,n_14 = NULL;
        t = h_14;
        t = g_0(t);
        m_14 = t;
        t = g_14;
        t = e_0(t);
        n_14 = t;
        t = h_14;
        {
          ATerm r_2 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(m_14), n_14);
            return(t);
          }
          t = reverse_acc_2_0(e_0, r_2, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_5;
      t = g_0(t);
    }
  return(t);
}
ATerm j_4 (ATerm t_45, ATerm u_45, ATerm t)
{
  t = SSL_table_get(t_45, u_45);
  return(t);
}
ATerm Program_1_0 (ATerm v_81 (ATerm), ATerm t)
{
  ATerm p_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,m_0 = NULL,n_0 = NULL;
  u_14 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_14);
  p_14 = t;
  t = s_14;
  t = v_81(t);
  t_14 = t;
  n_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_14);
  m_0 = t;
  t = SSLsetAnnotations(m_0, p_14);
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm z_14 = NULL;
  z_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_14), term_o_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL;
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      t = fetch_1_0(s_2, t);
    }
  t = term_s_12;
  t = echo_0_0(t);
  t = term_r_10;
  x_14 = t;
  t = term_s_10;
  y_14 = t;
  t = term_t_12;
  t = j_4(x_14, y_14, t);
  t = reverse_acc_2_0(_id, u_2, t);
  t = map_1_0(x_2, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm w_81 (ATerm), ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL,f_15 = NULL,p_0 = NULL,s_0 = NULL;
  f_15 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      c_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_15);
  b_15 = t;
  t = c_15;
  t = w_81(t);
  d_15 = t;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, d_15);
  p_0 = t;
  t = SSLsetAnnotations(p_0, b_15);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,s_15 = NULL;
  l_15 = t;
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_15;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_12 = ATgetFirst((ATermList) t);
                ATerm y_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_15;
          }
        ;
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
        t = (ATerm) ATinsert(ATempty, l_15);
      }
    m_15 = t;
    t = term_h_7;
    s_15 = t;
    t = SSL_printnl(s_15, m_15);
    t = l_15;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_11;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm a_16 = NULL,d_16 = NULL;
  t = term_z_12;
  a_16 = t;
  t = term_t_5;
  d_16 = t;
  t = term_a_13;
  t = m_4(a_16, d_16, t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_b_13;
  return(t);
}
ATerm c_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL,j_16 = NULL,l_16 = NULL;
  t = term_z_12;
  e_16 = t;
  t = term_t_5;
  f_16 = t;
  t = term_a_13;
  t = m_4(e_16, f_16, t);
  t = term_c_13;
  j_16 = t;
  t = term_t_5;
  l_16 = t;
  t = term_d_13;
  t = m_4(j_16, l_16, t);
  t = term_e_13;
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_f_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_2, a_3, b_3, t);
      ;
      LocalPopChoice(h_13);
    }
  else
    {
      t = g_13;
      t = Option_3_0(c_3, l_3, m_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_69 (ATerm), ATerm d_69 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,t_0 = NULL,u_0 = NULL;
  t_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_16 = ATgetFirst((ATermList) t);
      q_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_16);
  o_16 = t;
  t = p_16;
  t = c_69(t);
  r_16 = t;
  t = q_16;
  t = d_69(t);
  s_16 = t;
  u_0 = t;
  t = (ATerm) ATinsert(CheckATermList(s_16), r_16);
  t_0 = t;
  t = SSLsetAnnotations(t_0, o_16);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL;
  y_16 = t;
  t = term_d_11;
  z_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_11, y_16);
  t = m_4(z_16, y_16, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, y_16);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_101 (ATerm), ATerm t)
{
  ATerm x_16 = NULL;
  x_16 = t;
  {
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_13;
        t = n_101(t);
        ;
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
      }
    t = x_16;
    {
      ATerm o_3 (ATerm t)
      {
        ATerm o_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_13 = t;
            int t_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(t_13);
              }
            else
              {
                t = s_13;
                t = n_101(t);
                t = Cons_2_0(_id, o_3, t);
              }
            ;
            LocalPopChoice(q_13);
          }
        else
          {
            t = o_13;
            {
              ATerm b_17 = NULL,c_17 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_17 = ATgetFirst((ATermList) t);
                  c_17 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(c_17), (ATerm) ATmakeAppl(sym_Undefined_1, b_17));
            }
          }
        return(t);
      }
      t = Cons_2_0(n_3, o_3, t);
    }
  }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm z_17 = NULL;
  z_17 = t;
  if(match_string(t, "--help"))
    {
      t = z_17;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_17;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_17;
        }
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL;
  t = term_n_12;
  a_18 = t;
  t = term_t_5;
  b_18 = t;
  t = term_y_13;
  t = m_4(a_18, b_18, t);
  t = term_z_13;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm w_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_101 (ATerm), ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL;
  p_17 = t;
  t = term_r_10;
  u_17 = t;
  t = term_s_10;
  v_17 = t;
  t = (ATerm) ATempty;
  w_17 = t;
  t = SSL_table_put(u_17, v_17, w_17);
  t = p_17;
  {
    ATerm r_3 (ATerm t)
    {
      ATerm b_14 = t;
      int c_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_101(t);
          ;
          LocalPopChoice(c_14);
        }
      else
        {
          t = b_14;
          {
            ATerm d_14 = t;
            int f_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_3, u_3, v_3, t);
                ;
                LocalPopChoice(f_14);
              }
            else
              {
                t = d_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_3, t);
    {
      ATerm i_14 = t;
      int j_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_18 = NULL;
          i_18 = t;
          {
            ATerm k_14 = t;
            int l_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_4 = NULL;
                t = i_18;
                {
                  ATerm o_14 = t;
                  int q_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_n_12;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(q_14);
                    }
                  else
                    {
                      t = o_14;
                      t = fetch_1_0(w_3, t);
                    }
                  t = i_18;
                  t = default_system_usage_0_0(t);
                  t = term_x_9;
                  u_4 = t;
                  t = SSL_exit(u_4);
                }
                ;
                LocalPopChoice(l_14);
              }
            else
              {
                t = k_14;
                {
                  ATerm g_5 = NULL;
                  t = term_z_12;
                  t = get_config_0_0(t);
                  t = i_18;
                  t = default_system_about_0_0(t);
                  t = term_x_9;
                  g_5 = t;
                  t = SSL_exit(g_5);
                }
              }
          }
          ;
          LocalPopChoice(j_14);
        }
      else
        {
          t = i_14;
          {
            ATerm r_14 = t;
            int v_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL;
                ATerm x_3 (ATerm t)
                {
                  ATerm y_3 (ATerm t)
                  {
                    if(((q_17 != NULL) && (q_17 != t)))
                      _fail(t);
                    else
                      q_17 = t;
                    return(t);
                  }
                  t = Undefined_1_0(y_3, t);
                  return(t);
                }
                t = fetch_1_0(x_3, t);
                t = term_u_5;
                j_18 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_17)), term_w_14);
                k_18 = t;
                t = SSL_printnl(j_18, k_18);
                t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_17)), term_w_14));
                t = default_system_usage_0_0(t);
                t = term_y_5;
                l_18 = t;
                t = SSL_exit(l_18);
                ;
                LocalPopChoice(v_14);
              }
            else
              {
                t = r_14;
              }
          }
        }
      r_17 = t;
      t = term_r_10;
      x_17 = t;
      t = SSL_table_destroy(x_17);
      t = r_17;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
  t = parse_options_1_0(q_83, t);
  o_18 = t;
  t = term_a_15;
  p_18 = t;
  t = SSL_table_create(p_18);
  t = term_a_15;
  q_18 = t;
  t = term_e_15;
  r_18 = t;
  t = SSL_table_put(q_18, r_18, o_18);
  t = o_18;
  t = s_83(t);
  {
    ATerm g_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(r_83, t);
        ;
        LocalPopChoice(h_15);
      }
    else
      {
        t = g_15;
        {
          ATerm i_15 = t;
          int j_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_83(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(j_15);
            }
          else
            {
              t = i_15;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = if_verbose2_1_0(c_5, t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL;
  t = term_k_15;
  s_18 = t;
  t = term_t_5;
  t_18 = t;
  t = term_n_15;
  t = m_4(s_18, t_18, t);
  t = term_o_15;
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_p_15;
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL;
  u_18 = t;
  t = term_d_11;
  t = get_config_0_0(t);
  v_18 = t;
  t = term_u_5;
  w_18 = t;
  t = (ATerm) ATinsert(ATempty, v_18);
  x_18 = t;
  t = SSL_printnl(w_18, x_18);
  t = u_18;
  return(t);
}
ATerm iowrap_3_0 (ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    ATerm q_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_83(t);
        ;
        LocalPopChoice(r_15);
      }
    else
      {
        t = q_15;
        {
          ATerm t_15 = t;
          int u_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(w_15);
                  }
                else
                  {
                    t = v_15;
                    {
                      ATerm x_15 = t;
                      int y_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(t_4, y_4, b_5, t);
                          ;
                          LocalPopChoice(y_15);
                        }
                      else
                        {
                          t = x_15;
                          {
                            ATerm z_15 = t;
                            int b_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(b_16);
                              }
                            else
                              {
                                t = z_15;
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
  ATerm l_4 (ATerm t)
  {
    ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL;
    y_18 = t;
    {
      ATerm c_16 = t;
      int g_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((z_18 != NULL) && (z_18 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_18 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(p_5, t);
          ;
          LocalPopChoice(g_16);
        }
      else
        {
          t = c_16;
          t = term_h_16;
          z_18 = t;
        }
      t = not_null(z_18);
      t = ReadFromFile_0_0(t);
      a_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_18, a_19);
      t = apply_strategy_1_0(z_82, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(z_3, b_83, i_4, l_4, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = _2_0(_id, r_5, t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm b_19 = NULL,d_19 = NULL;
  if(match_cons(t, sym_TreeGrammar_1))
    {
      b_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_19;
  t = map_1_0(s_5, t);
  d_19 = t;
  t = (ATerm) ATmakeAppl(sym_Module_2, term_i_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, d_19)));
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm e_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL;
  if(match_cons(t, sym_NonTermDec_3))
    {
      ATerm k_16 = ATgetArgument(t, 0);
      if(match_cons(k_16, sym_Id_1))
        {
          e_19 = ATgetArgument(k_16, 0);
        }
      else
        _fail(t);
      {
        ATerm m_16 = ATgetArgument(t, 1);
      }
      k_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = term_n_16;
  n_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_16, e_19);
  t = a_4(n_19, e_19, t);
  l_19 = t;
  t = k_19;
  t = to_TypeMatch_Strat_0_0(t);
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, l_19, m_19);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(q_5, _fail, default_usage_0_0, t);
  return(t);
}
