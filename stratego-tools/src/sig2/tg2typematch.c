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
ATerm term_z_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_y_11;
ATerm term_v_11;
ATerm term_r_11;
ATerm term_l_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_j_9;
ATerm term_h_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_u_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_i_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_m_7;
ATerm term_c_7;
ATerm term_x_6;
ATerm term_u_6;
ATerm term_e_6;
ATerm term_b_6;
ATerm term_x_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_r_5;
ATerm term_q_5;
ATerm term_p_5;
void init_constant_terms (void)
{
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym__2, term_w_7, term_a_8);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_8);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym__2, term_g_8, term_p_5);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym__2, term_u_8, term_y_8);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym__2, term_y_10, term_p_5);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym__2, term_b_11, term_p_5);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym__2, term_j_10, term_p_5);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_p_5);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TODO", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("is-", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm b_0 (ATerm);
ATerm l_0 (ATerm);
ATerm to_TypeMatch_Strat_0_0 (ATerm);
ATerm a_4 (ATerm g_64, ATerm h_64, ATerm);
ATerm map_1_0 (ATerm y_88 (ATerm), ATerm);
ATerm b_4 (ATerm t_31, ATerm u_31, ATerm);
ATerm c_4 (ATerm j_50, ATerm k_50, ATerm);
ATerm e_4 (ATerm g_99 (ATerm), ATerm n_387, ATerm n_50, ATerm);
ATerm d_4 (ATerm f_50, ATerm g_50, ATerm);
ATerm o_0 (ATerm);
ATerm p_0 (ATerm);
ATerm s_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm q_82 (ATerm), ATerm);
ATerm v_8 (ATerm e_8, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm f_4 (ATerm l_50, ATerm);
ATerm g_4 (ATerm v_31, ATerm w_31, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm w_11 (ATerm k_9, ATerm);
ATerm x_11 (ATerm w_9, ATerm x_9, ATerm d_10, ATerm);
ATerm a_12 (ATerm q_10, ATerm u_10, ATerm v_10, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm t_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm i_89 (ATerm), ATerm);
ATerm debug_1_0 (ATerm e_99 (ATerm), ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm p_109 (ATerm), ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm m_4 (ATerm x_56, ATerm y_56, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm t_1 (ATerm);
ATerm x_1 (ATerm);
ATerm z_1 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm k_4 (ATerm c_44, ATerm d_44, ATerm b_44, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm h_4 (ATerm g_42, ATerm h_42, ATerm);
ATerm foldr_2_0 (ATerm q_95 (ATerm), ATerm r_95 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm o_109 (ATerm), ATerm);
ATerm i_2 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm k_2 (ATerm);
ATerm need_help_1_0 (ATerm o_83 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm j_4 (ATerm t_45, ATerm u_45, ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm u_2 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm v_2 (ATerm);
ATerm x_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm c_69 (ATerm), ATerm d_69 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm n_101 (ATerm), ATerm);
ATerm j_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm parse_options_1_0 (ATerm m_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm);
ATerm y_3 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm iowrap_3_0 (ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_0 = NULL,k_0 = NULL,n_0 = NULL,q_0 = NULL,r_0 = NULL;
  f_0 = t;
  t = term_p_5;
  t = whoami_0_0(t);
  k_0 = t;
  t = term_q_5;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_5), k_0), term_r_5);
  r_0 = t;
  t = SSL_printnl(q_0, r_0);
  t = term_t_5;
  n_0 = t;
  t = SSL_exit(n_0);
  t = f_0;
  return(t);
}
ATerm b_0 (ATerm t)
{
  t = term_u_5;
  return(t);
}
ATerm l_0 (ATerm t)
{
  t = term_u_5;
  return(t);
}
ATerm to_TypeMatch_Strat_0_0 (ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL;
  n_2 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_2 = ATgetFirst((ATermList) t);
      p_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_2 = ATgetFirst((ATermList) t);
      m_2 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_0 = NULL,v_0 = NULL,w_0 = NULL,x_0 = NULL;
        t = o_2;
        if(match_cons(t, sym_Prod_2))
          {
            ATerm v_5 = ATgetArgument(t, 0);
            if(match_cons(v_5, sym_Id_1))
              {
                v_0 = ATgetArgument(v_5, 0);
              }
            else
              _fail(t);
            w_0 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_0;
        t = map_1_0(b_0, t);
        x_0 = t;
        t = (ATerm) ATinsert(CheckATermList(m_2), l_2);
        t = to_TypeMatch_Strat_0_0(t);
        u_0 = t;
        t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, v_0, x_0)), u_0);
      }
    }
  else
    {
      ATerm j_1 = NULL,k_1 = NULL,l_1 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_2;
      if(match_cons(t, sym_Prod_2))
        {
          ATerm w_5 = ATgetArgument(t, 0);
          if(match_cons(w_5, sym_Id_1))
            {
              j_1 = ATgetArgument(w_5, 0);
            }
          else
            _fail(t);
          k_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_1;
      t = map_1_0(l_0, t);
      l_1 = t;
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, j_1, l_1));
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
  ATerm x_3 (ATerm t)
  {
    ATerm k_3 = NULL,n_3 = NULL,w_3 = NULL;
    k_3 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_3;
      }
    else
      {
        ATerm r_1 = NULL,v_1 = NULL,y_1 = NULL,a_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_3 = ATgetFirst((ATermList) t);
            w_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_3);
        r_1 = t;
        t = n_3;
        t = y_88(t);
        v_1 = t;
        t = w_3;
        t = x_3(t);
        y_1 = t;
        t = (ATerm) ATinsert(CheckATermList(y_1), v_1);
        a_1 = t;
        t = SSLsetAnnotations(a_1, r_1);
      }
    return(t);
  }
  t = x_3(t);
  return(t);
}
ATerm b_4 (ATerm t_31, ATerm u_31, ATerm t)
{
  ATerm o_4 = NULL;
  t = SSL_fputc(t_31, u_31);
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_4);
  return(t);
}
ATerm c_4 (ATerm j_50, ATerm k_50, ATerm t)
{
  ATerm p_4 = NULL;
  t = SSL_write_term_to_stream_text(j_50, k_50);
  p_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_4);
  return(t);
}
ATerm e_4 (ATerm g_99 (ATerm), ATerm n_387, ATerm n_50, ATerm t)
{
  ATerm q_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_387, term_x_5);
  t = open_stream_0_0(t);
  q_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_4, n_50);
  t = g_99(t);
  t = fclose_0_0(t);
  t = n_50;
  return(t);
}
ATerm d_4 (ATerm f_50, ATerm g_50, ATerm t)
{
  ATerm r_4 = NULL;
  t = SSL_write_term_to_stream_baf(f_50, g_50);
  r_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_4);
  return(t);
}
ATerm o_0 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_5 = ATgetArgument(t, 0);
      if(match_cons(z_5, sym_Stream_1))
        {
          o_3 = ATgetArgument(z_5, 0);
        }
      else
        _fail(t);
      p_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_4(o_3, p_3, t);
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_6 = ATgetArgument(t, 0);
      if(match_cons(a_6, sym_Stream_1))
        {
          v_4 = ATgetArgument(a_6, 0);
        }
      else
        _fail(t);
      w_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_4(v_4, w_4, t);
  s_4 = t;
  t = term_b_6;
  t_4 = t;
  t = s_4;
  if(match_cons(t, sym_Stream_1))
    {
      u_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_b_6, s_4);
  t = b_4(t_4, u_4, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL,d_5 = NULL,e_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,h_7 = NULL,i_7 = NULL,i_1 = NULL,h_1 = NULL;
  if(((z_4 != NULL) && (z_4 != t)))
    _fail(t);
  else
    z_4 = t;
  if(match_cons(t, sym__2))
    {
      if(((j_5 != NULL) && (j_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_5 = ATgetArgument(t, 0);
      if(((k_5 != NULL) && (k_5 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(z_4));
  if(((i_5 != NULL) && (i_5 != t)))
    _fail(t);
  else
    i_5 = t;
  t = not_null(j_5);
  {
    ATerm c_6 = t;
    int d_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_0 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((y_4 != NULL) && (y_4 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                y_4 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(m_0, t);
        ;
        LocalPopChoice(d_6);
      }
    else
      {
        t = c_6;
        t = term_e_6;
        if(((y_4 != NULL) && (y_4 != t)))
          _fail(t);
        else
          y_4 = t;
      }
    if(((l_5 != NULL) && (l_5 != t)))
      _fail(t);
    else
      l_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_5), not_null(k_5));
    if(((h_1 != NULL) && (h_1 != t)))
      _fail(t);
    else
      h_1 = t;
    t = SSLsetAnnotations(not_null(h_1), not_null(i_5));
    t = not_null(z_4);
    if(match_cons(t, sym__2))
      {
        if(((d_5 != NULL) && (d_5 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          d_5 = ATgetArgument(t, 0);
        if(((e_5 != NULL) && (e_5 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          e_5 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(z_4));
    if(((a_5 != NULL) && (a_5 != t)))
      _fail(t);
    else
      a_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_5), (ATerm) ATmakeAppl(sym__2, not_null(y_4), not_null(e_5)));
    if(((i_1 != NULL) && (i_1 != t)))
      _fail(t);
    else
      i_1 = t;
    t = SSLsetAnnotations(not_null(i_1), not_null(a_5));
    if(((h_5 != NULL) && (h_5 != t)))
      _fail(t);
    else
      h_5 = t;
    if(match_cons(t, sym__2))
      {
        if(((h_7 != NULL) && (h_7 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          h_7 = ATgetArgument(t, 0);
        if(((i_7 != NULL) && (i_7 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          i_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm f_6 = t;
      int g_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_2 = NULL,e_3 = NULL,h_3 = NULL,l_3 = NULL,m_3 = NULL,u_1 = NULL;
          t = SSLgetAnnotations(not_null(h_5));
          w_2 = t;
          t = not_null(h_7);
          t = fetch_1_0(o_0, t);
          e_3 = t;
          t = not_null(i_7);
          if(match_cons(t, sym__2))
            {
              l_3 = ATgetArgument(t, 0);
              m_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_4(p_0, l_3, m_3, t);
          h_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_3, h_3);
          u_1 = t;
          t = SSLsetAnnotations(u_1, w_2);
          ;
          LocalPopChoice(g_6);
        }
      else
        {
          t = f_6;
          {
            ATerm u_3 = NULL,z_3 = NULL,i_4 = NULL,n_4 = NULL,w_1 = NULL;
            t = SSLgetAnnotations(not_null(h_5));
            u_3 = t;
            t = not_null(i_7);
            if(match_cons(t, sym__2))
              {
                i_4 = ATgetArgument(t, 0);
                n_4 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = e_4(s_0, i_4, n_4, t);
            z_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_7), z_3);
            w_1 = t;
            t = SSLsetAnnotations(w_1, u_3);
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
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL,s_7 = NULL,t_7 = NULL;
  t_7 = t;
  t = dtime_0_0(t);
  t = t_7;
  t = q_82(t);
  s_7 = t;
  t = dtime_0_0(t);
  o_7 = t;
  t = s_7;
  if(match_cons(t, sym__2))
    {
      p_7 = ATgetArgument(t, 0);
      q_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_7), (ATerm) ATmakeAppl(sym_Runtime_1, o_7)), q_7);
  return(t);
}
ATerm v_8 (ATerm e_8, ATerm t)
{
  t = SSL_fclose(e_8);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL;
  n_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_8 = ATgetArgument(t, 0);
      {
        ATerm i_6 = t;
        int j_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_8);
            ;
            LocalPopChoice(j_6);
          }
        else
          {
            t = i_6;
            t = v_8(n_8, t);
          }
      }
    }
  else
    {
      t = v_8(n_8, t);
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
  ATerm w_8 = NULL;
  t = SSL_fopen(v_31, w_31);
  w_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_8);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_8 = NULL;
  t = SSL_stdin_stream();
  x_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_9 = NULL;
  t = SSL_stdout_stream();
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_9);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_9 = NULL;
  t = SSL_stderr_stream();
  d_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_9);
  return(t);
}
ATerm w_11 (ATerm k_9, ATerm t)
{
  ATerm n_9 = NULL;
  t = SSL_explode_term(k_9);
  if(match_cons(t, sym__2))
    {
      ATerm k_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_6 = ATgetArgument(t, 1);
        if(((ATgetType(l_6) == AT_LIST) && !(ATisEmpty(l_6))))
          {
            n_9 = ATgetFirst((ATermList) l_6);
            {
              ATerm m_6 = (ATerm) ATgetNext((ATermList) l_6);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_9;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_9;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_9;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_9;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm x_11 (ATerm w_9, ATerm x_9, ATerm d_10, ATerm t)
{
  ATerm e_10 = NULL,h_10 = NULL,i_10 = NULL,n_10 = NULL,d_2 = NULL;
  t = SSLgetAnnotations(d_10);
  i_10 = t;
  t = w_9;
  if(match_cons(t, sym_Path_1))
    {
      n_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_10, x_9);
  d_2 = t;
  t = SSLsetAnnotations(d_2, i_10);
  if(match_cons(t, sym__2))
    {
      e_10 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(e_10, h_10, t);
  return(t);
}
ATerm a_12 (ATerm q_10, ATerm u_10, ATerm v_10, ATerm t)
{
  ATerm w_10 = NULL,d_11 = NULL,g_11 = NULL,m_11 = NULL,e_2 = NULL;
  t = SSLgetAnnotations(v_10);
  g_11 = t;
  t = SSL_is_string(q_10);
  m_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_11, u_10);
  e_2 = t;
  t = SSLsetAnnotations(e_2, g_11);
  if(match_cons(t, sym__2))
    {
      w_10 = ATgetArgument(t, 0);
      d_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(w_10, d_11, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_6 = ATgetArgument(t, 0);
      ATerm o_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  s_11 = t;
  if(match_cons(t, sym__2))
    {
      t_11 = ATgetArgument(t, 0);
      u_11 = ATgetArgument(t, 1);
      {
        ATerm p_6 = t;
        int q_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_11(s_11, t);
            ;
            LocalPopChoice(q_6);
          }
        else
          {
            t = p_6;
            {
              ATerm r_6 = t;
              int t_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_11(t_11, u_11, s_11, t);
                  ;
                  LocalPopChoice(t_6);
                }
              else
                {
                  t = r_6;
                  t = a_12(t_11, u_11, s_11, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_11(s_11, t);
    }
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_u_6;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
  ATerm v_6 = t;
  int w_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_12 = NULL;
      f_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_12, term_x_6);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(w_6);
    }
  else
    {
      t = v_6;
      t = debug_1_0(t_0, t);
      _fail(t);
    }
  d_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_4(e_12, t);
  c_12 = t;
  t = d_12;
  t = fclose_0_0(t);
  t = c_12;
  return(t);
}
ATerm fetch_1_0 (ATerm i_89 (ATerm), ATerm t)
{
  ATerm q_13 (ATerm t)
  {
    ATerm m_13 = NULL,n_13 = NULL,p_13 = NULL;
    m_13 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_13 = ATgetFirst((ATermList) t);
        p_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_6 = t;
      int z_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_5 = NULL,h_6 = NULL,h_2 = NULL;
          t = SSLgetAnnotations(m_13);
          y_5 = t;
          t = n_13;
          t = i_89(t);
          h_6 = t;
          t = (ATerm) ATinsert(CheckATermList(p_13), h_6);
          h_2 = t;
          t = SSLsetAnnotations(h_2, y_5);
          ;
          LocalPopChoice(z_6);
        }
      else
        {
          t = y_6;
          {
            ATerm s_6 = NULL,f_7 = NULL,j_2 = NULL;
            t = SSLgetAnnotations(m_13);
            s_6 = t;
            t = p_13;
            t = q_13(t);
            f_7 = t;
            t = (ATerm) ATinsert(CheckATermList(f_7), n_13);
            j_2 = t;
            t = SSLsetAnnotations(j_2, s_6);
          }
        }
    }
    return(t);
  }
  t = q_13(t);
  return(t);
}
ATerm debug_1_0 (ATerm e_99 (ATerm), ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL;
  t_13 = t;
  t = e_99(t);
  u_13 = t;
  t = term_q_5;
  v_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_13), u_13);
  w_13 = t;
  t = SSL_printnl(v_13, w_13);
  t = t_13;
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm a_7 = t;
  int b_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(b_7);
    }
  else
    {
      t = a_7;
    }
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_c_7;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm d_7 = t;
  int e_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_14 = NULL;
      f_14 = t;
      t = SSL_is_string(f_14);
      ;
      LocalPopChoice(e_7);
    }
  else
    {
      t = d_7;
      {
        ATerm g_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(y_0, t);
            ;
            LocalPopChoice(j_7);
          }
        else
          {
            t = g_7;
            {
              ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
              l_14 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_14 = ATgetArgument(t, 0);
                  t = m_14;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_14 = ATgetArgument(t, 0);
                      t = m_14;
                      {
                        ATerm k_7 = t;
                        int l_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(l_7);
                          }
                        else
                          {
                            t = k_7;
                            t = debug_1_0(z_0, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm s_14 = NULL,z_14 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_14 = ATgetArgument(t, 0);
                          n_14 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_14;
                      t = eval_config_0_0(t);
                      s_14 = t;
                      t = n_14;
                      t = eval_config_0_0(t);
                      z_14 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_14, z_14);
                      t = a_4(s_14, z_14, t);
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
  ATerm e_15 = NULL,f_15 = NULL;
  e_15 = t;
  t = term_m_7;
  f_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_7, e_15);
  t = j_4(f_15, e_15, t);
  {
    ATerm n_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_15 = NULL,h_15 = NULL;
        t = eval_config_0_0(t);
        g_15 = t;
        t = term_m_7;
        h_15 = t;
        t = SSL_table_put(h_15, e_15, g_15);
        t = g_15;
        ;
        LocalPopChoice(r_7);
      }
    else
      {
        t = n_7;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm p_109 (ATerm), ATerm t)
{
  ATerm o_15 = NULL;
  o_15 = t;
  {
    ATerm u_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_15 = NULL;
        t = term_w_7;
        t = get_config_0_0(t);
        q_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_15, term_x_7);
        t = geq_0_0(t);
        t = o_15;
        t = p_109(t);
        ;
        LocalPopChoice(v_7);
      }
    else
      {
        t = u_7;
        t = o_15;
      }
  }
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm t_15 = NULL;
  t_15 = t;
  if(match_string(t, "-k"))
    {
      t = t_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_15;
    }
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  v_15 = t;
  t = SSL_string_to_int(v_15);
  w_15 = t;
  t = term_y_7;
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_7, w_15);
  t = m_4(x_15, w_15, t);
  t = v_15;
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = term_z_7;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_1, c_1, d_1, t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm z_15 = NULL;
  z_15 = t;
  if(match_string(t, "-S"))
    {
      t = z_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_15;
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL;
  t = term_w_7;
  a_16 = t;
  t = term_a_8;
  b_16 = t;
  t = term_b_8;
  t = m_4(a_16, b_16, t);
  t = term_c_8;
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_d_8;
  return(t);
}
ATerm m_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
  c_16 = t;
  t = SSL_string_to_int(c_16);
  d_16 = t;
  t = term_w_7;
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_7, d_16);
  t = m_4(e_16, d_16, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_16);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_f_8;
  return(t);
}
ATerm p_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm f_16 = NULL,i_16 = NULL;
  t = term_g_8;
  f_16 = t;
  t = term_p_5;
  i_16 = t;
  t = term_i_8;
  t = m_4(f_16, i_16, t);
  t = term_k_8;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_l_8;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_1, f_1, g_1, t);
      ;
      LocalPopChoice(p_8);
    }
  else
    {
      t = o_8;
      {
        ATerm s_8 = t;
        int t_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_1, n_1, o_1, t);
            ;
            LocalPopChoice(t_8);
          }
        else
          {
            t = s_8;
            t = Option_3_0(p_1, q_1, s_1, t);
          }
      }
    }
  return(t);
}
ATerm m_4 (ATerm x_56, ATerm y_56, ATerm t)
{
  ATerm l_16 = NULL;
  t = term_m_7;
  l_16 = t;
  t = SSL_table_put(l_16, x_56, y_56);
  t = (ATerm) ATmakeAppl(sym__3, term_m_7, x_56, y_56);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,s_16 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_16 = NULL,y_16 = NULL,b_17 = NULL;
      t = term_p_5;
      t = d_0(t);
      v_16 = t;
      t = term_u_8;
      y_16 = t;
      t = term_y_8;
      b_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_8, term_y_8, v_16);
      t = k_4(y_16, b_17, v_16, t);
      _fail(t);
    }
  else
    {
      ATerm e_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_16 = ATgetFirst((ATermList) t);
          s_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_16;
      t = a_0(t);
      t = term_p_5;
      t = c_0(t);
      e_17 = t;
      t = (ATerm) ATinsert(CheckATermList(s_16), e_17);
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm i_17 = NULL;
  i_17 = t;
  if(match_string(t, "-o"))
    {
      t = i_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_17;
    }
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm j_17 = NULL,n_17 = NULL;
  j_17 = t;
  t = term_z_8;
  n_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_8, j_17);
  t = m_4(n_17, j_17, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_17);
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_a_9;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_1, x_1, z_1, t);
  return(t);
}
ATerm k_4 (ATerm c_44, ATerm d_44, ATerm b_44, ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
  s_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_44, d_44);
  {
    ATerm b_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_9 = ATgetArgument(t, 0);
            ATerm g_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_44, d_44);
        t = j_4(c_44, d_44, t);
        ;
        LocalPopChoice(e_9);
      }
    else
      {
        t = b_9;
        t = (ATerm) ATempty;
      }
    t_17 = t;
    t = (ATerm) ATinsert(CheckATermList(t_17), b_44);
    u_17 = t;
    t = SSL_table_put(c_44, d_44, u_17);
    t = s_17;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL;
      t = term_p_5;
      t = j_0(t);
      f_18 = t;
      t = term_u_8;
      g_18 = t;
      t = term_y_8;
      h_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_8, term_y_8, f_18);
      t = k_4(g_18, h_18, f_18, t);
      _fail(t);
    }
  else
    {
      ATerm p_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_18 = ATgetFirst((ATermList) t);
          c_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_18;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_18 = ATgetFirst((ATermList) t);
          e_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_18;
      t = h_0(t);
      t = d_18;
      t = i_0(t);
      p_18 = t;
      t = (ATerm) ATinsert(CheckATermList(e_18), p_18);
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm t_18 = NULL;
  t_18 = t;
  if(match_string(t, "-i"))
    {
      t = t_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_18;
    }
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL;
  u_18 = t;
  t = term_h_9;
  v_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_9, u_18);
  t = m_4(v_18, u_18, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_18);
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_j_9;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_2, b_2, c_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,b_19 = NULL,c_19 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_5;
  t = whoami_0_0(t);
  y_18 = t;
  t = term_q_5;
  b_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_9), y_18);
  c_19 = t;
  t = SSL_printnl(b_19, c_19);
  t = term_t_5;
  z_18 = t;
  t = SSL_exit(z_18);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_m_9;
  t = get_config_0_0(t);
  return(t);
}
ATerm h_4 (ATerm g_42, ATerm h_42, ATerm t)
{
  ATerm o_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_42, h_42);
      ;
      LocalPopChoice(p_9);
    }
  else
    {
      t = o_9;
      t = SSL_addr(g_42, h_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm q_95 (ATerm), ATerm r_95 (ATerm), ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
  e_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_19;
      t = q_95(t);
    }
  else
    {
      ATerm j_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_19 = ATgetFirst((ATermList) t);
          g_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_19;
      t = foldr_2_0(q_95, r_95, t);
      j_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_19, j_19);
      t = r_95(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_a_8;
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL;
  if(match_cons(t, sym__2))
    {
      q_8 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_4(q_8, r_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_19 = NULL,h_8 = NULL,j_8 = NULL;
  t = times_0_0(t);
  j_8 = t;
  t = SSL_explode_term(j_8);
  if(match_cons(t, sym__2))
    {
      ATerm q_9 = ATgetArgument(t, 0);
      h_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_8;
  t = foldr_2_0(f_2, g_2, t);
  m_19 = t;
  t = SSL_TicksToSeconds(m_19);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
  x_19 = t;
  if(match_cons(t, sym__2))
    {
      y_19 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_19;
        if((y_19 != t))
          {
            _fail(t);
          }
        t = x_19;
        ;
        LocalPopChoice(s_9);
      }
    else
      {
        t = r_9;
        t = (ATerm) ATmakeAppl(sym__2, y_19, z_19);
        {
          ATerm u_9 = t;
          int v_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_19, z_19);
              ;
              LocalPopChoice(v_9);
            }
          else
            {
              t = u_9;
              t = SSL_gtr(y_19, z_19);
            }
          t = (ATerm) ATmakeAppl(sym__2, y_19, z_19);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_109 (ATerm), ATerm t)
{
  ATerm d_20 = NULL;
  d_20 = t;
  {
    ATerm y_9 = t;
    int a_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_20 = NULL;
        t = term_w_7;
        t = get_config_0_0(t);
        f_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_20, term_t_5);
        t = geq_0_0(t);
        t = d_20;
        t = o_109(t);
        ;
        LocalPopChoice(a_10);
      }
    else
      {
        t = y_9;
        t = d_20;
      }
  }
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,k_20 = NULL,l_20 = NULL;
  t = run_time_0_0(t);
  h_20 = t;
  t = term_p_5;
  t = whoami_0_0(t);
  i_20 = t;
  t = term_q_5;
  k_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_10), h_20), term_b_10), i_20);
  l_20 = t;
  t = SSL_printnl(k_20, l_20);
  t = (ATerm) ATmakeAppl(sym__2, term_q_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_10), h_20), term_b_10), i_20));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_20 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_8;
  n_20 = t;
  t = SSL_exit(n_20);
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL;
  c_21 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_21;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_21 = ATgetArgument(t, 0);
          {
            ATerm i_9 = NULL,t_2 = NULL;
            t = SSLgetAnnotations(c_21);
            i_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_21);
            t_2 = t;
            t = SSLsetAnnotations(t_2, i_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_21;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm o_83 (ATerm), ATerm t)
{
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_10;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      t = fetch_1_0(k_2, t);
    }
  t = o_83(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_21 = ATgetFirst((ATermList) t);
      h_21 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_21 = NULL,m_21 = NULL;
        ATerm q_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(l_21)), not_null(m_21));
          return(t);
        }
        t = not_null(h_21);
        t = g_0(t);
        if(((l_21 != NULL) && (l_21 != t)))
          _fail(t);
        else
          l_21 = t;
        t = not_null(g_21);
        t = e_0(t);
        if(((m_21 != NULL) && (m_21 != t)))
          _fail(t);
        else
          m_21 = t;
        t = not_null(h_21);
        t = reverse_acc_2_0(e_0, q_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_5;
      t = g_0(t);
    }
  return(t);
}
ATerm j_4 (ATerm t_45, ATerm u_45, ATerm t)
{
  t = SSL_table_get(t_45, u_45);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,y_2 = NULL;
  s_21 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_21);
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_21);
  y_2 = t;
  t = SSLsetAnnotations(y_2, q_21);
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm u_21 = NULL;
  u_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_21), term_k_10);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL;
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_9;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
      t = fetch_1_0(r_2, t);
    }
  t = term_o_10;
  t = echo_0_0(t);
  t = term_u_8;
  o_21 = t;
  t = term_y_8;
  p_21 = t;
  t = term_p_10;
  t = j_4(o_21, p_21, t);
  t = reverse_acc_2_0(_id, s_2, t);
  t = map_1_0(u_2, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  w_21 = t;
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_21;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_10 = ATgetFirst((ATermList) t);
                ATerm x_10 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_21;
          }
        ;
        LocalPopChoice(s_10);
      }
    else
      {
        t = r_10;
        t = (ATerm) ATinsert(ATempty, w_21);
      }
    x_21 = t;
    t = term_e_6;
    y_21 = t;
    t = SSL_printnl(y_21, x_21);
    t = w_21;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_m_9;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL;
  t = term_y_10;
  c_22 = t;
  t = term_p_5;
  d_22 = t;
  t = term_z_10;
  t = m_4(c_22, d_22, t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_a_11;
  return(t);
}
ATerm a_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL;
  t = term_y_10;
  g_22 = t;
  t = term_p_5;
  h_22 = t;
  t = term_z_10;
  t = m_4(g_22, h_22, t);
  t = term_b_11;
  e_22 = t;
  t = term_p_5;
  f_22 = t;
  t = term_c_11;
  t = m_4(e_22, f_22, t);
  t = term_e_11;
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_2, x_2, z_2, t);
      ;
      LocalPopChoice(i_11);
    }
  else
    {
      t = h_11;
      t = Option_3_0(a_3, b_3, d_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_69 (ATerm), ATerm d_69 (ATerm), ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,c_3 = NULL;
  n_22 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_22 = ATgetFirst((ATermList) t);
      k_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_22);
  i_22 = t;
  t = j_22;
  t = c_69(t);
  l_22 = t;
  t = k_22;
  t = d_69(t);
  m_22 = t;
  t = (ATerm) ATinsert(CheckATermList(m_22), l_22);
  c_3 = t;
  t = SSLsetAnnotations(c_3, i_22);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_101 (ATerm), ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,x_22 = NULL,y_22 = NULL,f_3 = NULL;
  if(((s_22 != NULL) && (s_22 != t)))
    _fail(t);
  else
    s_22 = t;
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_11;
        t = n_101(t);
        ;
        LocalPopChoice(k_11);
      }
    else
      {
        t = j_11;
      }
    t = not_null(s_22);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((u_22 != NULL) && (u_22 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          u_22 = ATgetFirst((ATermList) t);
        if(((v_22 != NULL) && (v_22 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          v_22 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(s_22));
    if(((t_22 != NULL) && (t_22 != t)))
      _fail(t);
    else
      t_22 = t;
    t = term_m_9;
    if(((y_22 != NULL) && (y_22 != t)))
      _fail(t);
    else
      y_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_m_9, not_null(u_22));
    t = m_4(not_null(y_22), not_null(u_22), t);
    t = not_null(v_22);
    {
      ATerm i_23 (ATerm t)
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_11 = t;
            int q_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_23 = NULL;
                b_23 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = b_23;
                ;
                LocalPopChoice(q_11);
              }
            else
              {
                t = p_11;
                t = n_101(t);
                t = Cons_2_0(_id, i_23, t);
              }
            ;
            LocalPopChoice(o_11);
          }
        else
          {
            t = n_11;
            {
              ATerm e_23 = NULL,f_23 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_23 = ATgetFirst((ATermList) t);
                  f_23 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(f_23), (ATerm) ATmakeAppl(sym_Undefined_1, e_23));
            }
          }
        return(t);
      }
      t = i_23(t);
      if(((x_22 != NULL) && (x_22 != t)))
        _fail(t);
      else
        x_22 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(x_22)), (ATerm) ATmakeAppl(sym_Program_1, not_null(u_22)));
      if(((f_3 != NULL) && (f_3 != t)))
        _fail(t);
      else
        f_3 = t;
      t = SSLsetAnnotations(not_null(f_3), not_null(t_22));
    }
  }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm u_23 = NULL;
  u_23 = t;
  if(match_string(t, "--help"))
    {
      t = u_23;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_23;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_23;
        }
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL;
  t = term_j_10;
  v_23 = t;
  t = term_p_5;
  w_23 = t;
  t = term_r_11;
  t = m_4(v_23, w_23, t);
  t = term_v_11;
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_y_11;
  return(t);
}
ATerm s_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_101 (ATerm), ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
  if(((p_23 != NULL) && (p_23 != t)))
    _fail(t);
  else
    p_23 = t;
  t = term_u_8;
  if(((r_23 != NULL) && (r_23 != t)))
    _fail(t);
  else
    r_23 = t;
  t = term_y_8;
  if(((s_23 != NULL) && (s_23 != t)))
    _fail(t);
  else
    s_23 = t;
  t = (ATerm) ATempty;
  if(((t_23 != NULL) && (t_23 != t)))
    _fail(t);
  else
    t_23 = t;
  t = SSL_table_put(not_null(r_23), not_null(s_23), not_null(t_23));
  t = not_null(p_23);
  {
    ATerm g_3 (ATerm t)
    {
      ATerm z_11 = t;
      int b_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_101(t);
          ;
          LocalPopChoice(b_12);
        }
      else
        {
          t = z_11;
          {
            ATerm g_12 = t;
            int h_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_3, q_3, r_3, t);
                ;
                LocalPopChoice(h_12);
              }
            else
              {
                t = g_12;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_3, t);
    {
      ATerm i_12 = t;
      int j_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_24 = NULL;
          d_24 = t;
          {
            ATerm k_12 = t;
            int l_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_9 = NULL;
                t = d_24;
                {
                  ATerm m_12 = t;
                  int n_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_j_10;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(n_12);
                    }
                  else
                    {
                      t = m_12;
                      t = fetch_1_0(s_3, t);
                    }
                  t = d_24;
                  t = default_system_usage_0_0(t);
                  t = term_a_8;
                  t_9 = t;
                  t = SSL_exit(t_9);
                }
                ;
                LocalPopChoice(l_12);
              }
            else
              {
                t = k_12;
                {
                  ATerm z_9 = NULL;
                  t = term_y_10;
                  t = get_config_0_0(t);
                  t = d_24;
                  t = default_system_about_0_0(t);
                  t = term_a_8;
                  z_9 = t;
                  t = SSL_exit(z_9);
                }
              }
          }
          ;
          LocalPopChoice(j_12);
        }
      else
        {
          t = i_12;
          {
            ATerm o_12 = t;
            int p_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
                ATerm t_3 (ATerm t)
                {
                  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,i_3 = NULL;
                  j_24 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      i_24 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(j_24);
                  h_24 = t;
                  t = i_24;
                  if(((n_23 != NULL) && (n_23 != t)))
                    _fail(t);
                  else
                    n_23 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, i_24);
                  i_3 = t;
                  t = SSLsetAnnotations(i_3, h_24);
                  return(t);
                }
                t = fetch_1_0(t_3, t);
                t = term_q_5;
                if(((f_24 != NULL) && (f_24 != t)))
                  _fail(t);
                else
                  f_24 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_23)), term_q_12);
                if(((g_24 != NULL) && (g_24 != t)))
                  _fail(t);
                else
                  g_24 = t;
                t = SSL_printnl(not_null(f_24), not_null(g_24));
                t = (ATerm) ATmakeAppl(sym__2, term_q_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_23)), term_q_12));
                t = default_system_usage_0_0(t);
                t = term_t_5;
                if(((e_24 != NULL) && (e_24 != t)))
                  _fail(t);
                else
                  e_24 = t;
                t = SSL_exit(not_null(e_24));
                ;
                LocalPopChoice(p_12);
              }
            else
              {
                t = o_12;
              }
          }
        }
      if(((o_23 != NULL) && (o_23 != t)))
        _fail(t);
      else
        o_23 = t;
      t = term_u_8;
      if(((q_23 != NULL) && (q_23 != t)))
        _fail(t);
      else
        q_23 = t;
      t = SSL_table_destroy(not_null(q_23));
      t = not_null(o_23);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL;
  t = parse_options_1_0(q_83, t);
  o_24 = t;
  t = term_r_12;
  r_24 = t;
  t = SSL_table_create(r_24);
  t = term_r_12;
  p_24 = t;
  t = term_s_12;
  q_24 = t;
  t = SSL_table_put(p_24, q_24, o_24);
  t = o_24;
  t = s_83(t);
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(r_83, t);
        ;
        LocalPopChoice(u_12);
      }
    else
      {
        t = t_12;
        {
          ATerm v_12 = t;
          int w_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_83(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(w_12);
            }
          else
            {
              t = v_12;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = if_verbose2_1_0(g_5, t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL;
  t = term_x_12;
  s_24 = t;
  t = term_p_5;
  t_24 = t;
  t = term_y_12;
  t = m_4(s_24, t_24, t);
  t = term_z_12;
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_a_13;
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
  u_24 = t;
  t = term_m_9;
  t = get_config_0_0(t);
  v_24 = t;
  t = term_q_5;
  w_24 = t;
  t = (ATerm) ATinsert(ATempty, v_24);
  x_24 = t;
  t = SSL_printnl(w_24, x_24);
  t = u_24;
  return(t);
}
ATerm iowrap_3_0 (ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm b_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_83(t);
        ;
        LocalPopChoice(c_13);
      }
    else
      {
        t = b_13;
        {
          ATerm d_13 = t;
          int e_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(e_13);
            }
          else
            {
              t = d_13;
              {
                ATerm f_13 = t;
                int g_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(g_13);
                  }
                else
                  {
                    t = f_13;
                    {
                      ATerm h_13 = t;
                      int i_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(b_5, c_5, f_5, t);
                          ;
                          LocalPopChoice(i_13);
                        }
                      else
                        {
                          t = h_13;
                          {
                            ATerm j_13 = t;
                            int k_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(k_13);
                              }
                            else
                              {
                                t = j_13;
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
  ATerm x_4 (ATerm t)
  {
    ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL;
    if(((z_24 != NULL) && (z_24 != t)))
      _fail(t);
    else
      z_24 = t;
    {
      ATerm l_13 = t;
      int o_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((y_24 != NULL) && (y_24 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(m_5, t);
          ;
          LocalPopChoice(o_13);
        }
      else
        {
          t = l_13;
          t = term_r_13;
          if(((y_24 != NULL) && (y_24 != t)))
            _fail(t);
          else
            y_24 = t;
        }
      t = not_null(y_24);
      t = ReadFromFile_0_0(t);
      if(((a_25 != NULL) && (a_25 != t)))
        _fail(t);
      else
        a_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_24), not_null(a_25));
      t = apply_strategy_1_0(z_82, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(v_3, b_83, y_3, x_4, t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,l_4 = NULL;
  h_25 = t;
  if(match_cons(t, sym__2))
    {
      c_25 = ATgetArgument(t, 0);
      d_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_25);
  b_25 = t;
  t = d_25;
  if(match_cons(t, sym_TreeGrammar_1))
    {
      f_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_25;
  t = map_1_0(o_5, t);
  g_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_25, (ATerm) ATmakeAppl(sym_Module_2, term_s_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, g_25))));
  l_4 = t;
  t = SSLsetAnnotations(l_4, b_25);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm i_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL;
  if(match_cons(t, sym_NonTermDec_3))
    {
      ATerm x_13 = ATgetArgument(t, 0);
      if(match_cons(x_13, sym_Id_1))
        {
          i_25 = ATgetArgument(x_13, 0);
        }
      else
        _fail(t);
      {
        ATerm y_13 = ATgetArgument(t, 1);
      }
      k_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = term_z_13;
  n_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_13, i_25);
  t = a_4(n_25, i_25, t);
  l_25 = t;
  t = k_25;
  t = to_TypeMatch_Strat_0_0(t);
  m_25 = t;
  t = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, l_25, m_25);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(n_5, _fail, default_usage_0_0, t);
  return(t);
}
