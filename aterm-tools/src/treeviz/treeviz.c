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
Symbol sym_GraphXML_2;
Symbol sym_graph_2;
Symbol sym_node_2;
Symbol sym_name_1;
Symbol sym_edge1_1;
Symbol sym_name_1;
Symbol sym_source_1;
Symbol sym_target_1;
Symbol sym_label_2;
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
  sym_GraphXML_2 = ATmakeSymbol("GraphXML", 2, ATfalse);
  ATprotectSymbol(sym_GraphXML_2);
  sym_graph_2 = ATmakeSymbol("graph", 2, ATfalse);
  ATprotectSymbol(sym_graph_2);
  sym_node_2 = ATmakeSymbol("node", 2, ATfalse);
  ATprotectSymbol(sym_node_2);
  sym_name_1 = ATmakeSymbol("name", 1, ATfalse);
  ATprotectSymbol(sym_name_1);
  sym_edge1_1 = ATmakeSymbol("edge1", 1, ATfalse);
  ATprotectSymbol(sym_edge1_1);
  sym_name_1 = ATmakeSymbol("name", 1, ATfalse);
  ATprotectSymbol(sym_name_1);
  sym_source_1 = ATmakeSymbol("source", 1, ATfalse);
  ATprotectSymbol(sym_source_1);
  sym_target_1 = ATmakeSymbol("target", 1, ATfalse);
  ATprotectSymbol(sym_target_1);
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
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
ATerm term_l_17;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_z_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_u_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_j_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_b_11;
ATerm term_u_10;
ATerm term_p_10;
ATerm term_j_10;
ATerm term_s_8;
ATerm term_o_8;
ATerm term_k_8;
ATerm term_d_8;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_r_6;
ATerm term_z_5;
ATerm term_f_2;
void init_constant_terms (void)
{
  ATprotect(&(term_f_2));
  term_f_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("[ ]", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_k_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym__2, term_p_11, term_f_2);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym__2, term_y_11, term_z_11);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("This program outputs a term in abstract GraphXML format.", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym__2, term_j_14, term_f_2);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym__2, term_m_14, term_f_2);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym__2, term_k_13, term_f_2);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__2, term_k_16, term_f_2);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm l_4 (ATerm y_25, ATerm a_26, ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm s_81 (ATerm), ATerm);
ATerm s_3 (ATerm h_3, ATerm);
ATerm conc_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm q_4 (ATerm c_26, ATerm e_26, ATerm);
ATerm MkEdges_2_0 (ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm);
ATerm TreeViz_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm g_1 (ATerm);
ATerm NewNodeName_0_0 (ATerm);
ATerm Treeviz_0_0 (ATerm);
ATerm t_4 (ATerm x_45, ATerm y_45, ATerm);
ATerm u_4 (ATerm l_49, ATerm m_49, ATerm);
ATerm w_4 (ATerm t_93 (ATerm), ATerm q_427, ATerm p_49, ATerm);
ATerm v_4 (ATerm h_49, ATerm i_49, ATerm);
ATerm l_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm v_96 (ATerm), ATerm);
ATerm y_13 (ATerm a_13, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_4 (ATerm n_49, ATerm);
ATerm y_4 (ATerm z_45, ATerm a_46, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm t_16 (ATerm w_14, ATerm);
ATerm w_16 (ATerm e_15, ATerm i_15, ATerm j_15, ATerm);
ATerm x_16 (ATerm w_15, ATerm x_15, ATerm a_16, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm p_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_81 (ATerm), ATerm);
ATerm s_4 (ATerm n_40, ATerm o_40, ATerm);
ATerm debug_1_0 (ATerm r_93 (ATerm), ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm e_95 (ATerm), ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm j_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm e_5 (ATerm o_50, ATerm p_50, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm k_2 (ATerm);
ATerm m_2 (ATerm);
ATerm q_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm c_5 (ATerm m_55, ATerm n_55, ATerm l_55, ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm z_4 (ATerm x_42, ATerm y_42, ATerm);
ATerm foldr_2_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm f_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_95 (ATerm), ATerm);
ATerm j_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm n_3 (ATerm);
ATerm need_help_1_0 (ATerm t_97 (ATerm), ATerm);
ATerm map_1_0 (ATerm c_81 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm b_5 (ATerm d_57, ATerm e_57, ATerm);
ATerm x_3 (ATerm);
ATerm z_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm c_4 (ATerm);
ATerm f_4 (ATerm);
ATerm r_4 (ATerm);
ATerm a_5 (ATerm);
ATerm f_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm t_64 (ATerm), ATerm u_64 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm w_99 (ATerm), ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm n_5 (ATerm);
ATerm parse_options_1_0 (ATerm v_99 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm);
ATerm s_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm k_6 (ATerm);
ATerm iowrap_3_0 (ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm g_97 (ATerm), ATerm);
ATerm q_6 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,m_0 = NULL,n_0 = NULL,o_0 = NULL;
  b_0 = t;
  t = term_f_2;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_z_5;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_6), f_0), term_r_6);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_u_6;
  m_0 = t;
  t = SSL_exit(m_0);
  t = b_0;
  return(t);
}
ATerm l_4 (ATerm y_25, ATerm a_26, ATerm t)
{
  ATerm u_0 = NULL,v_0 = NULL,f_1 = NULL,i_1 = NULL,m_1 = NULL,y_0 = NULL,c_1 = NULL,q_0 = NULL,r_0 = NULL,t_0 = NULL,e_0 = NULL,i_0 = NULL;
  t = y_25;
  {
    ATerm v_6 = t;
    int x_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_0 = NULL;
        t = SSL_is_int(y_25);
        w_0 = t;
        t = SSL_int_to_string(w_0);
        ;
        LocalPopChoice(x_6);
      }
    else
      {
        t = v_6;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_y_6;
          }
        else
          {
            t = y_25;
          }
      }
    i_0 = t;
    t = SSL_explode_string(i_0);
    t = escape_chars_0_0(t);
    e_0 = t;
    t = SSL_implode_string(e_0);
    r_0 = t;
    t = SSL_explode_string(r_0);
    t_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_0), term_z_6), (ATerm) ATinsert(ATempty, term_z_6));
    t = conc_0_0(t);
    q_0 = t;
    t = SSL_implode_string(q_0);
    u_0 = t;
    t = a_26;
    {
      ATerm a_7 = t;
      int b_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_1 = NULL;
          t = SSL_is_int(a_26);
          b_1 = t;
          t = SSL_int_to_string(b_1);
          ;
          LocalPopChoice(b_7);
        }
      else
        {
          t = a_7;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = term_y_6;
            }
          else
            {
              t = a_26;
            }
        }
      c_1 = t;
      t = SSL_explode_string(c_1);
      t = escape_chars_0_0(t);
      y_0 = t;
      t = SSL_implode_string(y_0);
      i_1 = t;
      t = SSL_explode_string(i_1);
      m_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_1), term_z_6), (ATerm) ATinsert(ATempty, term_z_6));
      t = conc_0_0(t);
      f_1 = t;
      t = SSL_implode_string(f_1);
      v_0 = t;
      t = (ATerm) ATmakeAppl(sym_node_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_name_1, u_0)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_label_2, (ATerm)ATempty, v_0)));
    }
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_1 = NULL,k_1 = NULL,q_1 = NULL;
  j_1 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_1;
    }
  else
    {
      ATerm s_0 (ATerm t)
      {
        t = not_null(q_1);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((k_1 != NULL) && (k_1 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            k_1 = ATgetFirst((ATermList) t);
          if(((q_1 != NULL) && (q_1 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(k_1);
      t = at_end_1_0(s_0, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm s_81 (ATerm), ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm v_2 = NULL,x_2 = NULL,y_2 = NULL;
    y_2 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_2 = ATgetFirst((ATermList) t);
        x_2 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_1 = NULL,u_1 = NULL,p_0 = NULL;
          t = SSLgetAnnotations(y_2);
          r_1 = t;
          t = x_2;
          t = z_2(t);
          u_1 = t;
          t = (ATerm) ATinsert(CheckATermList(u_1), v_2);
          p_0 = t;
          t = SSLsetAnnotations(p_0, r_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_2;
        t = s_81(t);
      }
    return(t);
  }
  t = z_2(t);
  return(t);
}
ATerm s_3 (ATerm h_3, ATerm t)
{
  ATerm i_3 = NULL;
  t = SSL_explode_term(h_3);
  if(match_cons(t, sym__2))
    {
      ATerm c_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      i_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_3;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL;
  if(((m_3 != NULL) && (m_3 != t)))
    _fail(t);
  else
    m_3 = t;
  if(match_cons(t, sym__2))
    {
      k_3 = ATgetArgument(t, 0);
      l_3 = ATgetArgument(t, 1);
      {
        ATerm i_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_0 (ATerm t)
            {
              t = not_null(l_3);
              return(t);
            }
            t = not_null(k_3);
            t = at_end_1_0(x_0, t);
            ;
            LocalPopChoice(j_7);
          }
        else
          {
            t = i_7;
            t = s_3(not_null(m_3), t);
          }
      }
    }
  else
    {
      t = s_3(not_null(m_3), t);
    }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm k_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_4 = NULL,e_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,a_1 = NULL;
      ATerm q_7 = t;
      int s_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_5 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm t_7 = ATgetFirst((ATermList) t);
              if(((ATgetType(t_7) != AT_INT) || (ATgetInt((ATermInt) t_7) != 34)))
                _fail(t);
              d_5 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(d_5), term_z_6), term_u_7);
          ;
          LocalPopChoice(s_7);
        }
      else
        {
          t = q_7;
          {
            ATerm g_5 = NULL,h_5 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_5 = ATgetFirst((ATermList) t);
                h_5 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_5;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(h_5), term_u_7), term_u_7);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(h_5), term_v_7), term_u_7);
              }
          }
        }
      o_4 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_4 = ATgetFirst((ATermList) t);
          m_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_4);
      d_4 = t;
      t = m_4;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      n_4 = t;
      t = (ATerm) ATinsert(CheckATermList(n_4), e_4);
      a_1 = t;
      t = SSLsetAnnotations(a_1, d_4);
      ;
      LocalPopChoice(p_7);
    }
  else
    {
      t = k_7;
      {
        ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL;
        y_5 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_5 = ATgetFirst((ATermList) t);
            x_5 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm e_2 = NULL,i_2 = NULL,d_1 = NULL;
              t = SSLgetAnnotations(y_5);
              e_2 = t;
              t = x_5;
              t = escape_chars_0_0(t);
              i_2 = t;
              t = (ATerm) ATinsert(CheckATermList(i_2), w_5);
              d_1 = t;
              t = SSLsetAnnotations(d_1, e_2);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = y_5;
          }
      }
    }
  return(t);
}
ATerm q_4 (ATerm c_26, ATerm e_26, ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL,t_3 = NULL,w_3 = NULL,y_3 = NULL,o_3 = NULL,p_3 = NULL,d_3 = NULL,e_3 = NULL,g_3 = NULL,w_2 = NULL,b_3 = NULL;
  t = c_26;
  {
    ATerm w_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_6 = NULL;
        t = SSL_is_int(c_26);
        j_6 = t;
        t = SSL_int_to_string(j_6);
        ;
        LocalPopChoice(x_7);
      }
    else
      {
        t = w_7;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_y_6;
          }
        else
          {
            t = c_26;
          }
      }
    b_3 = t;
    t = SSL_explode_string(b_3);
    t = escape_chars_0_0(t);
    w_2 = t;
    t = SSL_implode_string(w_2);
    e_3 = t;
    t = SSL_explode_string(e_3);
    g_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_3), term_z_6), (ATerm) ATinsert(ATempty, term_z_6));
    t = conc_0_0(t);
    d_3 = t;
    t = SSL_implode_string(d_3);
    h_6 = t;
    t = e_26;
    {
      ATerm y_7 = t;
      int z_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_6 = NULL;
          t = SSL_is_int(e_26);
          w_6 = t;
          t = SSL_int_to_string(w_6);
          ;
          LocalPopChoice(z_7);
        }
      else
        {
          t = y_7;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = term_y_6;
            }
          else
            {
              t = e_26;
            }
        }
      p_3 = t;
      t = SSL_explode_string(p_3);
      t = escape_chars_0_0(t);
      o_3 = t;
      t = SSL_implode_string(o_3);
      w_3 = t;
      t = SSL_explode_string(w_3);
      y_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_3), term_z_6), (ATerm) ATinsert(ATempty, term_z_6));
      t = conc_0_0(t);
      t_3 = t;
      t = SSL_implode_string(t_3);
      i_6 = t;
      t = (ATerm) ATmakeAppl(sym_edge1_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_target_1, i_6)), (ATerm) ATmakeAppl(sym_source_1, h_6)));
    }
  }
  return(t);
}
ATerm MkEdges_2_0 (ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,l_7 = NULL,m_7 = NULL;
  m_7 = t;
  t = SSL_explode_term(m_7);
  if(match_cons(t, sym__2))
    {
      f_7 = ATgetArgument(t, 0);
      g_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7;
  {
    ATerm a_8 = t;
    int b_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_7 = NULL;
        t = SSL_is_int(f_7);
        o_7 = t;
        t = SSL_int_to_string(o_7);
        ;
        LocalPopChoice(b_8);
      }
    else
      {
        t = a_8;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_y_6;
          }
        else
          {
            t = f_7;
          }
      }
    t = NewNodeName_0_0(t);
    e_7 = t;
    t = term_f_2;
    t = n_73(t);
    l_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_7, l_7);
    t = q_4(e_7, l_7, t);
    d_7 = t;
    t = (ATerm) ATmakeAppl(sym__3, e_7, f_7, g_7);
    t = o_73(t);
    h_7 = t;
    t = (ATerm) ATinsert(CheckATermList(h_7), d_7);
  }
  return(t);
}
ATerm TreeViz_0_0 (ATerm t)
{
  ATerm c_8 = NULL,e_8 = NULL,h_8 = NULL,i_8 = NULL,p_8 = NULL;
  if(match_cons(t, sym__3))
    {
      h_8 = ATgetArgument(t, 0);
      i_8 = ATgetArgument(t, 1);
      p_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_8;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      t = p_8;
      {
        ATerm z_0 (ATerm t)
        {
          ATerm e_1 (ATerm t)
          {
            t = not_null(h_8);
            return(t);
          }
          t = MkEdges_2_0(e_1, TreeViz_0_0, t);
          return(t);
        }
        t = map_1_0(z_0, t);
        t = concat_0_0(t);
      }
    }
  if(((e_8 != NULL) && (e_8 != t)))
    _fail(t);
  else
    e_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_8), not_null(i_8));
  t = l_4(not_null(h_8), not_null(i_8), t);
  if(((c_8 != NULL) && (c_8 != t)))
    _fail(t);
  else
    c_8 = t;
  t = (ATerm) ATinsert(CheckATermList(not_null(e_8)), not_null(c_8));
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm a_9 = NULL;
  a_9 = t;
  if(match_int(t, 10))
    {
      t = term_d_8;
    }
  else
    {
      t = a_9;
    }
  return(t);
}
ATerm NewNodeName_0_0 (ATerm t)
{
  ATerm t_8 = NULL,v_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL;
  t_8 = t;
  t = term_f_2;
  t = new_0_0(t);
  v_8 = t;
  t = SSL_explode_string(t_8);
  t = map_1_0(g_1, t);
  z_8 = t;
  t = SSL_implode_string(z_8);
  x_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_8), v_8);
  y_8 = t;
  t = SSL_concat_strings(y_8);
  return(t);
}
ATerm Treeviz_0_0 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,j_9 = NULL;
  j_9 = t;
  t = SSL_explode_term(j_9);
  if(match_cons(t, sym__2))
    {
      f_9 = ATgetArgument(t, 0);
      g_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9;
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_9 = NULL;
        t = SSL_is_int(f_9);
        l_9 = t;
        t = SSL_int_to_string(l_9);
        ;
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_y_6;
          }
        else
          {
            t = f_9;
          }
      }
    t = NewNodeName_0_0(t);
    e_9 = t;
    t = (ATerm) ATmakeAppl(sym__3, e_9, f_9, g_9);
    t = TreeViz_0_0(t);
    h_9 = t;
    t = (ATerm) ATmakeAppl(sym_GraphXML_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_graph_2, (ATerm)ATempty, h_9)));
  }
  return(t);
}
ATerm t_4 (ATerm x_45, ATerm y_45, ATerm t)
{
  ATerm p_9 = NULL;
  t = SSL_fputc(x_45, y_45);
  p_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_9);
  return(t);
}
ATerm u_4 (ATerm l_49, ATerm m_49, ATerm t)
{
  ATerm q_9 = NULL;
  t = SSL_write_term_to_stream_text(l_49, m_49);
  q_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_9);
  return(t);
}
ATerm w_4 (ATerm t_93 (ATerm), ATerm q_427, ATerm p_49, ATerm t)
{
  ATerm r_9 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_427, term_k_8);
  t = open_stream_0_0(t);
  r_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_9, p_49);
  t = t_93(t);
  t = fclose_0_0(t);
  t = p_49;
  return(t);
}
ATerm v_4 (ATerm h_49, ATerm i_49, ATerm t)
{
  ATerm s_9 = NULL;
  t = SSL_write_term_to_stream_baf(h_49, i_49);
  s_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_9);
  return(t);
}
ATerm l_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm k_4 = NULL,p_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_8 = ATgetArgument(t, 0);
      if(match_cons(l_8, sym_Stream_1))
        {
          k_4 = ATgetArgument(l_8, 0);
        }
      else
        _fail(t);
      p_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_4(k_4, p_4, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm g_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_8 = ATgetArgument(t, 0);
      if(match_cons(n_8, sym_Stream_1))
        {
          n_6 = ATgetArgument(n_8, 0);
        }
      else
        _fail(t);
      o_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_4(n_6, o_6, t);
  g_6 = t;
  t = term_o_8;
  l_6 = t;
  t = g_6;
  if(match_cons(t, sym_Stream_1))
    {
      m_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_8, g_6);
  t = t_4(l_6, m_6, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,b_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,l_10 = NULL,m_10 = NULL,a_12 = NULL,c_12 = NULL,n_2 = NULL,l_2 = NULL;
  if(((x_9 != NULL) && (x_9 != t)))
    _fail(t);
  else
    x_9 = t;
  if(match_cons(t, sym__2))
    {
      if(((f_10 != NULL) && (f_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_10 = ATgetArgument(t, 0);
      if(((l_10 != NULL) && (l_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(x_9));
  if(((e_10 != NULL) && (e_10 != t)))
    _fail(t);
  else
    e_10 = t;
  t = not_null(f_10);
  {
    ATerm q_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((w_9 != NULL) && (w_9 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                w_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(h_1, t);
        ;
        LocalPopChoice(r_8);
      }
    else
      {
        t = q_8;
        t = term_s_8;
        if(((w_9 != NULL) && (w_9 != t)))
          _fail(t);
        else
          w_9 = t;
      }
    if(((m_10 != NULL) && (m_10 != t)))
      _fail(t);
    else
      m_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_10), not_null(l_10));
    if(((l_2 != NULL) && (l_2 != t)))
      _fail(t);
    else
      l_2 = t;
    t = SSLsetAnnotations(not_null(l_2), not_null(e_10));
    t = not_null(x_9);
    if(match_cons(t, sym__2))
      {
        if(((z_9 != NULL) && (z_9 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          z_9 = ATgetArgument(t, 0);
        if(((b_10 != NULL) && (b_10 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          b_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(x_9));
    if(((y_9 != NULL) && (y_9 != t)))
      _fail(t);
    else
      y_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_9), (ATerm) ATmakeAppl(sym__2, not_null(w_9), not_null(b_10)));
    if(((n_2 != NULL) && (n_2 != t)))
      _fail(t);
    else
      n_2 = t;
    t = SSLsetAnnotations(not_null(n_2), not_null(y_9));
    if(((d_10 != NULL) && (d_10 != t)))
      _fail(t);
    else
      d_10 = t;
    if(match_cons(t, sym__2))
      {
        if(((a_12 != NULL) && (a_12 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          a_12 = ATgetArgument(t, 0);
        if(((c_12 != NULL) && (c_12 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          c_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm u_8 = t;
      int w_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,o_2 = NULL;
          t = SSLgetAnnotations(not_null(d_10));
          b_4 = t;
          t = not_null(a_12);
          t = fetch_1_0(l_1, t);
          g_4 = t;
          t = not_null(c_12);
          if(match_cons(t, sym__2))
            {
              i_4 = ATgetArgument(t, 0);
              j_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_4(n_1, i_4, j_4, t);
          h_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_4, h_4);
          o_2 = t;
          t = SSLsetAnnotations(o_2, b_4);
          ;
          LocalPopChoice(w_8);
        }
      else
        {
          t = u_8;
          {
            ATerm m_5 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL,p_2 = NULL;
            t = SSLgetAnnotations(not_null(d_10));
            m_5 = t;
            t = not_null(c_12);
            if(match_cons(t, sym__2))
              {
                e_6 = ATgetArgument(t, 0);
                f_6 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_4(o_1, e_6, f_6, t);
            d_6 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_12), d_6);
            p_2 = t;
            t = SSLsetAnnotations(p_2, m_5);
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
ATerm apply_strategy_1_0 (ATerm v_96 (ATerm), ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
  p_12 = t;
  t = dtime_0_0(t);
  t = p_12;
  t = v_96(t);
  o_12 = t;
  t = dtime_0_0(t);
  l_12 = t;
  t = o_12;
  if(match_cons(t, sym__2))
    {
      m_12 = ATgetArgument(t, 0);
      n_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_12), (ATerm) ATmakeAppl(sym_Runtime_1, l_12)), n_12);
  return(t);
}
ATerm y_13 (ATerm a_13, ATerm t)
{
  t = SSL_fclose(a_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL;
  u_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_13 = ATgetArgument(t, 0);
      {
        ATerm b_9 = t;
        int c_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_13);
            ;
            LocalPopChoice(c_9);
          }
        else
          {
            t = b_9;
            t = y_13(u_13, t);
          }
      }
    }
  else
    {
      t = y_13(u_13, t);
    }
  return(t);
}
ATerm x_4 (ATerm n_49, ATerm t)
{
  t = SSL_read_term_from_stream(n_49);
  return(t);
}
ATerm y_4 (ATerm z_45, ATerm a_46, ATerm t)
{
  ATerm z_13 = NULL;
  t = SSL_fopen(z_45, a_46);
  z_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_13);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_14 = NULL;
  t = SSL_stdin_stream();
  a_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_14 = NULL;
  t = SSL_stdout_stream();
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_14 = NULL;
  t = SSL_stderr_stream();
  e_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_14);
  return(t);
}
ATerm t_16 (ATerm w_14, ATerm t)
{
  ATerm x_14 = NULL;
  t = SSL_explode_term(w_14);
  if(match_cons(t, sym__2))
    {
      ATerm d_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_9 = ATgetArgument(t, 1);
        if(((ATgetType(i_9) == AT_LIST) && !(ATisEmpty(i_9))))
          {
            x_14 = ATgetFirst((ATermList) i_9);
            {
              ATerm k_9 = (ATerm) ATgetNext((ATermList) i_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_14;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_14;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_14;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_14;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm w_16 (ATerm e_15, ATerm i_15, ATerm j_15, ATerm t)
{
  ATerm k_15 = NULL,m_15 = NULL,n_15 = NULL,t_15 = NULL,a_3 = NULL;
  t = SSLgetAnnotations(j_15);
  n_15 = t;
  t = e_15;
  if(match_cons(t, sym_Path_1))
    {
      t_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_15, i_15);
  a_3 = t;
  t = SSLsetAnnotations(a_3, n_15);
  if(match_cons(t, sym__2))
    {
      k_15 = ATgetArgument(t, 0);
      m_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_4(k_15, m_15, t);
  return(t);
}
ATerm x_16 (ATerm w_15, ATerm x_15, ATerm a_16, ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,i_16 = NULL,o_16 = NULL,c_3 = NULL;
  t = SSLgetAnnotations(a_16);
  i_16 = t;
  t = SSL_is_string(w_15);
  o_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_16, x_15);
  c_3 = t;
  t = SSLsetAnnotations(c_3, i_16);
  if(match_cons(t, sym__2))
    {
      b_16 = ATgetArgument(t, 0);
      c_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_4(b_16, c_16, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_9 = ATgetArgument(t, 0);
      ATerm n_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  q_16 = t;
  if(match_cons(t, sym__2))
    {
      r_16 = ATgetArgument(t, 0);
      s_16 = ATgetArgument(t, 1);
      {
        ATerm o_9 = t;
        int t_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_16(q_16, t);
            ;
            LocalPopChoice(t_9);
          }
        else
          {
            t = o_9;
            {
              ATerm c_10 = t;
              int g_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_16(r_16, s_16, q_16, t);
                  ;
                  LocalPopChoice(g_10);
                }
              else
                {
                  t = c_10;
                  t = x_16(r_16, s_16, q_16, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_16(q_16, t);
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_16 = NULL,b_17 = NULL,c_17 = NULL;
  ATerm k_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_17 = NULL;
      d_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_17, term_p_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(o_10);
    }
  else
    {
      t = k_10;
      t = debug_1_0(p_1, t);
      _fail(t);
    }
  b_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_4(c_17, t);
  y_16 = t;
  t = b_17;
  t = fclose_0_0(t);
  t = y_16;
  return(t);
}
ATerm fetch_1_0 (ATerm m_81 (ATerm), ATerm t)
{
  ATerm k_18 (ATerm t)
  {
    ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL;
    h_18 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_18 = ATgetFirst((ATermList) t);
        j_18 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_10 = t;
      int r_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_7 = NULL,r_7 = NULL,u_3 = NULL;
          t = SSLgetAnnotations(h_18);
          n_7 = t;
          t = i_18;
          t = m_81(t);
          r_7 = t;
          t = (ATerm) ATinsert(CheckATermList(j_18), r_7);
          u_3 = t;
          t = SSLsetAnnotations(u_3, n_7);
          ;
          LocalPopChoice(r_10);
        }
      else
        {
          t = q_10;
          {
            ATerm j_8 = NULL,m_8 = NULL,v_3 = NULL;
            t = SSLgetAnnotations(h_18);
            j_8 = t;
            t = j_18;
            t = k_18(t);
            m_8 = t;
            t = (ATerm) ATinsert(CheckATermList(m_8), i_18);
            v_3 = t;
            t = SSLsetAnnotations(v_3, j_8);
          }
        }
    }
    return(t);
  }
  t = k_18(t);
  return(t);
}
ATerm s_4 (ATerm n_40, ATerm o_40, ATerm t)
{
  t = SSL_strcat(n_40, o_40);
  return(t);
}
ATerm debug_1_0 (ATerm r_93 (ATerm), ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,w_18 = NULL,x_18 = NULL;
  t_18 = t;
  t = r_93(t);
  u_18 = t;
  t = term_z_5;
  w_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_18), u_18);
  x_18 = t;
  t = SSL_printnl(w_18, x_18);
  t = t_18;
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm s_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(t_10);
    }
  else
    {
      t = s_10;
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_u_10;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_19 = NULL;
      h_19 = t;
      t = SSL_is_string(h_19);
      ;
      LocalPopChoice(w_10);
    }
  else
    {
      t = v_10;
      {
        ATerm x_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_1, t);
            ;
            LocalPopChoice(y_10);
          }
        else
          {
            t = x_10;
            {
              ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
              o_19 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_19 = ATgetArgument(t, 0);
                  t = p_19;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_19 = ATgetArgument(t, 0);
                      t = p_19;
                      {
                        ATerm z_10 = t;
                        int a_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(a_11);
                          }
                        else
                          {
                            t = z_10;
                            t = debug_1_0(t_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm u_19 = NULL,v_19 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_19 = ATgetArgument(t, 0);
                          q_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_19;
                      t = eval_config_0_0(t);
                      u_19 = t;
                      t = q_19;
                      t = eval_config_0_0(t);
                      v_19 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_19, v_19);
                      t = s_4(u_19, v_19, t);
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
  ATerm d_20 = NULL,e_20 = NULL;
  d_20 = t;
  t = term_b_11;
  e_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_11, d_20);
  t = b_5(e_20, d_20, t);
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_20 = NULL,g_20 = NULL;
        t = eval_config_0_0(t);
        f_20 = t;
        t = term_b_11;
        g_20 = t;
        t = SSL_table_put(g_20, d_20, f_20);
        t = f_20;
        ;
        LocalPopChoice(d_11);
      }
    else
      {
        t = c_11;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_95 (ATerm), ATerm t)
{
  ATerm t_20 = NULL;
  t_20 = t;
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_20 = NULL;
        t = term_g_11;
        t = get_config_0_0(t);
        v_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_20, term_h_11);
        t = geq_0_0(t);
        t = t_20;
        t = e_95(t);
        ;
        LocalPopChoice(f_11);
      }
    else
      {
        t = e_11;
        t = t_20;
      }
  }
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm a_21 = NULL;
  a_21 = t;
  if(match_string(t, "-k"))
    {
      t = a_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_21;
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm b_21 = NULL,f_21 = NULL,j_21 = NULL;
  b_21 = t;
  t = SSL_string_to_int(b_21);
  f_21 = t;
  t = term_i_11;
  j_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_11, f_21);
  t = e_5(j_21, f_21, t);
  t = b_21;
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_j_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_1, w_1, x_1, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm l_21 = NULL;
  l_21 = t;
  if(match_string(t, "-S"))
    {
      t = l_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_21;
    }
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL;
  t = term_g_11;
  m_21 = t;
  t = term_k_11;
  n_21 = t;
  t = term_l_11;
  t = e_5(m_21, n_21, t);
  t = term_m_11;
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_n_11;
  return(t);
}
ATerm b_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
  o_21 = t;
  t = SSL_string_to_int(o_21);
  p_21 = t;
  t = term_g_11;
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_11, p_21);
  t = e_5(q_21, p_21, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_21);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_o_11;
  return(t);
}
ATerm g_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL;
  t = term_p_11;
  r_21 = t;
  t = term_f_2;
  s_21 = t;
  t = term_q_11;
  t = e_5(r_21, s_21, t);
  t = term_s_11;
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_t_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_1, z_1, a_2, t);
      ;
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      {
        ATerm w_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_2, c_2, d_2, t);
            ;
            LocalPopChoice(x_11);
          }
        else
          {
            t = w_11;
            t = Option_3_0(g_2, h_2, j_2, t);
          }
      }
    }
  return(t);
}
ATerm e_5 (ATerm o_50, ATerm p_50, ATerm t)
{
  ATerm t_21 = NULL;
  t = term_b_11;
  t_21 = t;
  t = SSL_table_put(t_21, o_50, p_50);
  t = (ATerm) ATmakeAppl(sym__3, term_b_11, o_50, p_50);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL;
      t = term_f_2;
      t = d_0(t);
      y_21 = t;
      t = term_y_11;
      z_21 = t;
      t = term_z_11;
      a_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_11, term_z_11, y_21);
      t = c_5(z_21, a_22, y_21, t);
      _fail(t);
    }
  else
    {
      ATerm h_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_21 = ATgetFirst((ATermList) t);
          x_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_21;
      t = a_0(t);
      t = term_f_2;
      t = c_0(t);
      h_22 = t;
      t = (ATerm) ATinsert(CheckATermList(x_21), h_22);
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm l_22 = NULL;
  l_22 = t;
  if(match_string(t, "-o"))
    {
      t = l_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_22;
    }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL;
  m_22 = t;
  t = term_b_12;
  n_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_12, m_22);
  t = e_5(n_22, m_22, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_22);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_d_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_2, m_2, q_2, t);
  return(t);
}
ATerm c_5 (ATerm m_55, ATerm n_55, ATerm l_55, ATerm t)
{
  ATerm r_22 = NULL,t_22 = NULL,u_22 = NULL;
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_55, n_55);
  {
    ATerm e_12 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_12 = ATgetArgument(t, 0);
            ATerm i_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_55, n_55);
        t = b_5(m_55, n_55, t);
        ;
        LocalPopChoice(f_12);
      }
    else
      {
        t = e_12;
        t = (ATerm) ATempty;
      }
    t_22 = t;
    t = (ATerm) ATinsert(CheckATermList(t_22), l_55);
    u_22 = t;
    t = SSL_table_put(m_55, n_55, u_22);
    t = r_22;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL;
      t = term_f_2;
      t = l_0(t);
      f_23 = t;
      t = term_y_11;
      g_23 = t;
      t = term_z_11;
      h_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_11, term_z_11, f_23);
      t = c_5(g_23, h_23, f_23, t);
      _fail(t);
    }
  else
    {
      ATerm l_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_23 = ATgetFirst((ATermList) t);
          c_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_23 = ATgetFirst((ATermList) t);
          e_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_23;
      t = j_0(t);
      t = d_23;
      t = k_0(t);
      l_23 = t;
      t = (ATerm) ATinsert(CheckATermList(e_23), l_23);
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm n_23 = NULL;
  n_23 = t;
  if(match_string(t, "-i"))
    {
      t = n_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_23;
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL;
  o_23 = t;
  t = term_j_12;
  p_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_12, o_23);
  t = e_5(p_23, o_23, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_23);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_r_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_2, s_2, t_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_2;
  t = whoami_0_0(t);
  q_23 = t;
  t = term_z_5;
  s_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_12), q_23);
  t_23 = t;
  t = SSL_printnl(s_23, t_23);
  t = term_u_6;
  r_23 = t;
  t = SSL_exit(r_23);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_t_12;
  t = get_config_0_0(t);
  return(t);
}
ATerm z_4 (ATerm x_42, ATerm y_42, ATerm t)
{
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_42, y_42);
      ;
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      t = SSL_addr(x_42, y_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
  v_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_23;
      t = f_87(t);
    }
  else
    {
      ATerm a_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_23 = ATgetFirst((ATermList) t);
          x_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_23;
      t = foldr_2_0(f_87, g_87, t);
      a_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_23, a_24);
      t = g_87(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_k_11;
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL;
  if(match_cons(t, sym__2))
    {
      h_10 = ATgetArgument(t, 0);
      i_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_4(h_10, i_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_24 = NULL,u_9 = NULL,v_9 = NULL;
  t = times_0_0(t);
  v_9 = t;
  t = SSL_explode_term(v_9);
  if(match_cons(t, sym__2))
    {
      ATerm w_12 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_9;
  t = foldr_2_0(u_2, f_3, t);
  d_24 = t;
  t = SSL_TicksToSeconds(d_24);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL;
  o_24 = t;
  if(match_cons(t, sym__2))
    {
      p_24 = ATgetArgument(t, 0);
      q_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_24;
        if((p_24 != t))
          {
            _fail(t);
          }
        t = o_24;
        ;
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
        t = (ATerm) ATmakeAppl(sym__2, p_24, q_24);
        {
          ATerm z_12 = t;
          int b_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_24, q_24);
              ;
              LocalPopChoice(b_13);
            }
          else
            {
              t = z_12;
              t = SSL_gtr(p_24, q_24);
            }
          t = (ATerm) ATmakeAppl(sym__2, p_24, q_24);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_95 (ATerm), ATerm t)
{
  ATerm u_24 = NULL;
  u_24 = t;
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_24 = NULL;
        t = term_g_11;
        t = get_config_0_0(t);
        w_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_24, term_u_6);
        t = geq_0_0(t);
        t = u_24;
        t = d_95(t);
        ;
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        t = u_24;
      }
  }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,b_25 = NULL,c_25 = NULL;
  t = run_time_0_0(t);
  y_24 = t;
  t = term_f_2;
  t = whoami_0_0(t);
  z_24 = t;
  t = term_z_5;
  b_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_13), y_24), term_f_13), z_24);
  c_25 = t;
  t = SSL_printnl(b_25, c_25);
  t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_13), y_24), term_f_13), z_24));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_11;
  d_25 = t;
  t = SSL_exit(d_25);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL;
  j_26 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = j_26;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          i_26 = ATgetArgument(t, 0);
          {
            ATerm r_11 = NULL,p_5 = NULL;
            t = SSLgetAnnotations(j_26);
            r_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, i_26);
            p_5 = t;
            t = SSLsetAnnotations(p_5, r_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = j_26;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm t_97 (ATerm), ATerm t)
{
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_13);
    }
  else
    {
      t = i_13;
      t = fetch_1_0(n_3, t);
    }
  t = t_97(t);
  return(t);
}
ATerm map_1_0 (ATerm c_81 (ATerm), ATerm t)
{
  ATerm z_26 (ATerm t)
  {
    ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
    w_26 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_26;
      }
    else
      {
        ATerm h_12 = NULL,k_12 = NULL,q_12 = NULL,r_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_26 = ATgetFirst((ATermList) t);
            y_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_26);
        h_12 = t;
        t = x_26;
        t = c_81(t);
        k_12 = t;
        t = y_26;
        t = z_26(t);
        q_12 = t;
        t = (ATerm) ATinsert(CheckATermList(q_12), k_12);
        r_5 = t;
        t = SSLsetAnnotations(r_5, h_12);
      }
    return(t);
  }
  t = z_26(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_27 = ATgetFirst((ATermList) t);
      d_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_27 = NULL,i_27 = NULL;
        ATerm q_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(h_27)), not_null(i_27));
          return(t);
        }
        t = not_null(d_27);
        t = h_0(t);
        if(((h_27 != NULL) && (h_27 != t)))
          _fail(t);
        else
          h_27 = t;
        t = not_null(c_27);
        t = g_0(t);
        if(((i_27 != NULL) && (i_27 != t)))
          _fail(t);
        else
          i_27 = t;
        t = not_null(d_27);
        t = reverse_acc_2_0(g_0, q_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_2;
      t = h_0(t);
    }
  return(t);
}
ATerm b_5 (ATerm d_57, ATerm e_57, ATerm t)
{
  t = SSL_table_get(d_57, e_57);
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm a_28 = NULL;
  a_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_28), term_l_13);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_12;
      t = get_config_0_0(t);
      m_27 = t;
      ;
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      {
        ATerm r_3 (ATerm t)
        {
          ATerm p_27 = NULL,q_27 = NULL,w_27 = NULL,t_5 = NULL;
          w_27 = t;
          if(match_cons(t, sym_Program_1))
            {
              q_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_27);
          p_27 = t;
          t = q_27;
          if(((m_27 != NULL) && (m_27 != t)))
            _fail(t);
          else
            m_27 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, q_27);
          t_5 = t;
          t = SSLsetAnnotations(t_5, p_27);
          return(t);
        }
        t = fetch_1_0(r_3, t);
      }
    }
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_13), not_null(m_27)), term_q_13);
        t = echo_0_0(t);
        ;
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
      }
    t = term_s_13;
    t = echo_0_0(t);
    t = term_y_11;
    if(((n_27 != NULL) && (n_27 != t)))
      _fail(t);
    else
      n_27 = t;
    t = term_z_11;
    if(((o_27 != NULL) && (o_27 != t)))
      _fail(t);
    else
      o_27 = t;
    t = term_v_13;
    t = b_5(not_null(n_27), not_null(o_27), t);
    t = reverse_acc_2_0(_id, x_3, t);
    t = map_1_0(z_3, t);
    {
      ATerm w_13 = t;
      int x_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, term_c_14), term_b_14);
          t = echo_0_0(t);
          ;
          LocalPopChoice(x_13);
        }
      else
        {
          t = w_13;
        }
    }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL;
  e_28 = t;
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_28;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_14 = ATgetFirst((ATermList) t);
                ATerm i_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_28;
          }
        ;
        LocalPopChoice(g_14);
      }
    else
      {
        t = f_14;
        t = (ATerm) ATinsert(ATempty, e_28);
      }
    f_28 = t;
    t = term_s_8;
    g_28 = t;
    t = SSL_printnl(g_28, f_28);
    t = e_28;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_t_12;
  t = get_config_0_0(t);
  t = echo_0_0(t);
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
  ATerm m_28 = NULL,n_28 = NULL;
  t = term_j_14;
  m_28 = t;
  t = term_f_2;
  n_28 = t;
  t = term_k_14;
  t = e_5(m_28, n_28, t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_l_14;
  return(t);
}
ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL;
  t = term_j_14;
  q_28 = t;
  t = term_f_2;
  r_28 = t;
  t = term_k_14;
  t = e_5(q_28, r_28, t);
  t = term_m_14;
  o_28 = t;
  t = term_f_2;
  p_28 = t;
  t = term_n_14;
  t = e_5(o_28, p_28, t);
  t = term_o_14;
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_p_14;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_4, c_4, f_4, t);
      ;
      LocalPopChoice(r_14);
    }
  else
    {
      t = q_14;
      t = Option_3_0(r_4, a_5, f_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_64 (ATerm), ATerm u_64 (ATerm), ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,v_5 = NULL;
  x_28 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_28 = ATgetFirst((ATermList) t);
      u_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_28);
  s_28 = t;
  t = t_28;
  t = t_64(t);
  v_28 = t;
  t = u_28;
  t = u_64(t);
  w_28 = t;
  t = (ATerm) ATinsert(CheckATermList(w_28), v_28);
  v_5 = t;
  t = SSLsetAnnotations(v_5, s_28);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_99 (ATerm), ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,h_29 = NULL,i_29 = NULL,s_6 = NULL;
  if(((c_29 != NULL) && (c_29 != t)))
    _fail(t);
  else
    c_29 = t;
  {
    ATerm s_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_14;
        t = w_99(t);
        ;
        LocalPopChoice(t_14);
      }
    else
      {
        t = s_14;
      }
    t = not_null(c_29);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((e_29 != NULL) && (e_29 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          e_29 = ATgetFirst((ATermList) t);
        if(((f_29 != NULL) && (f_29 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          f_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(c_29));
    if(((d_29 != NULL) && (d_29 != t)))
      _fail(t);
    else
      d_29 = t;
    t = term_t_12;
    if(((i_29 != NULL) && (i_29 != t)))
      _fail(t);
    else
      i_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_12, not_null(e_29));
    t = e_5(not_null(i_29), not_null(e_29), t);
    t = not_null(f_29);
    {
      ATerm s_29 (ATerm t)
      {
        ATerm v_14 = t;
        int y_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_14 = t;
            int a_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_29 = NULL;
                l_29 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = l_29;
                ;
                LocalPopChoice(a_15);
              }
            else
              {
                t = z_14;
                t = w_99(t);
                t = Cons_2_0(_id, s_29, t);
              }
            ;
            LocalPopChoice(y_14);
          }
        else
          {
            t = v_14;
            {
              ATerm o_29 = NULL,p_29 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_29 = ATgetFirst((ATermList) t);
                  p_29 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_29), (ATerm) ATmakeAppl(sym_Undefined_1, o_29));
            }
          }
        return(t);
      }
      t = s_29(t);
      if(((h_29 != NULL) && (h_29 != t)))
        _fail(t);
      else
        h_29 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(h_29)), (ATerm) ATmakeAppl(sym_Program_1, not_null(e_29)));
      if(((s_6 != NULL) && (s_6 != t)))
        _fail(t);
      else
        s_6 = t;
      t = SSLsetAnnotations(not_null(s_6), not_null(d_29));
    }
  }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm e_30 = NULL;
  e_30 = t;
  if(match_string(t, "--help"))
    {
      t = e_30;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_30;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_30;
        }
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL;
  t = term_k_13;
  f_30 = t;
  t = term_f_2;
  g_30 = t;
  t = term_b_15;
  t = e_5(f_30, g_30, t);
  t = term_c_15;
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_d_15;
  return(t);
}
ATerm n_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_99 (ATerm), ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL;
  if(((z_29 != NULL) && (z_29 != t)))
    _fail(t);
  else
    z_29 = t;
  t = term_y_11;
  if(((b_30 != NULL) && (b_30 != t)))
    _fail(t);
  else
    b_30 = t;
  t = term_z_11;
  if(((c_30 != NULL) && (c_30 != t)))
    _fail(t);
  else
    c_30 = t;
  t = (ATerm) ATempty;
  if(((d_30 != NULL) && (d_30 != t)))
    _fail(t);
  else
    d_30 = t;
  t = SSL_table_put(not_null(b_30), not_null(c_30), not_null(d_30));
  t = not_null(z_29);
  {
    ATerm i_5 (ATerm t)
    {
      ATerm f_15 = t;
      int g_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_99(t);
          ;
          LocalPopChoice(g_15);
        }
      else
        {
          t = f_15;
          {
            ATerm h_15 = t;
            int l_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_5, k_5, l_5, t);
                ;
                LocalPopChoice(l_15);
              }
            else
              {
                t = h_15;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_5, t);
    {
      ATerm o_15 = t;
      int p_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_30 = NULL;
          n_30 = t;
          {
            ATerm q_15 = t;
            int r_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_13 = NULL;
                t = n_30;
                {
                  ATerm s_15 = t;
                  int u_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_k_13;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(u_15);
                    }
                  else
                    {
                      t = s_15;
                      t = fetch_1_0(n_5, t);
                    }
                  t = n_30;
                  t = default_system_usage_0_0(t);
                  t = term_k_11;
                  c_13 = t;
                  t = SSL_exit(c_13);
                }
                ;
                LocalPopChoice(r_15);
              }
            else
              {
                t = q_15;
                {
                  ATerm h_13 = NULL;
                  t = term_j_14;
                  t = get_config_0_0(t);
                  t = n_30;
                  t = default_system_about_0_0(t);
                  t = term_k_11;
                  h_13 = t;
                  t = SSL_exit(h_13);
                }
              }
          }
          ;
          LocalPopChoice(p_15);
        }
      else
        {
          t = o_15;
          {
            ATerm v_15 = t;
            int y_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
                ATerm o_5 (ATerm t)
                {
                  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL,a_10 = NULL;
                  t_30 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      s_30 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_30);
                  r_30 = t;
                  t = s_30;
                  if(((x_29 != NULL) && (x_29 != t)))
                    _fail(t);
                  else
                    x_29 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, s_30);
                  a_10 = t;
                  t = SSLsetAnnotations(a_10, r_30);
                  return(t);
                }
                t = fetch_1_0(o_5, t);
                t = term_z_5;
                if(((p_30 != NULL) && (p_30 != t)))
                  _fail(t);
                else
                  p_30 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_29)), term_z_15);
                if(((q_30 != NULL) && (q_30 != t)))
                  _fail(t);
                else
                  q_30 = t;
                t = SSL_printnl(not_null(p_30), not_null(q_30));
                t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_29)), term_z_15));
                t = default_system_usage_0_0(t);
                t = term_u_6;
                if(((o_30 != NULL) && (o_30 != t)))
                  _fail(t);
                else
                  o_30 = t;
                t = SSL_exit(not_null(o_30));
                ;
                LocalPopChoice(y_15);
              }
            else
              {
                t = v_15;
              }
          }
        }
      if(((y_29 != NULL) && (y_29 != t)))
        _fail(t);
      else
        y_29 = t;
      t = term_y_11;
      if(((a_30 != NULL) && (a_30 != t)))
        _fail(t);
      else
        a_30 = t;
      t = SSL_table_destroy(not_null(a_30));
      t = not_null(y_29);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL;
  t = parse_options_1_0(v_97, t);
  y_30 = t;
  t = term_d_16;
  b_31 = t;
  t = SSL_table_create(b_31);
  t = term_d_16;
  z_30 = t;
  t = term_e_16;
  a_31 = t;
  t = SSL_table_put(z_30, a_31, y_30);
  t = y_30;
  t = x_97(t);
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_97, t);
        ;
        LocalPopChoice(g_16);
      }
    else
      {
        t = f_16;
        {
          ATerm h_16 = t;
          int j_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_97(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(j_16);
            }
          else
            {
              t = h_16;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = if_verbose2_1_0(k_6, t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL;
  t = term_k_16;
  c_31 = t;
  t = term_f_2;
  d_31 = t;
  t = term_l_16;
  t = e_5(c_31, d_31, t);
  t = term_m_16;
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_n_16;
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
  e_31 = t;
  t = term_t_12;
  t = get_config_0_0(t);
  f_31 = t;
  t = term_z_5;
  g_31 = t;
  t = (ATerm) ATinsert(ATempty, f_31);
  h_31 = t;
  t = SSL_printnl(g_31, h_31);
  t = e_31;
  return(t);
}
ATerm iowrap_3_0 (ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm g_97 (ATerm), ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm p_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_97(t);
        ;
        LocalPopChoice(u_16);
      }
    else
      {
        t = p_16;
        {
          ATerm v_16 = t;
          int z_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(z_16);
            }
          else
            {
              t = v_16;
              {
                ATerm a_17 = t;
                int e_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(e_17);
                  }
                else
                  {
                    t = a_17;
                    {
                      ATerm f_17 = t;
                      int g_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(a_6, b_6, c_6, t);
                          ;
                          LocalPopChoice(g_17);
                        }
                      else
                        {
                          t = f_17;
                          {
                            ATerm h_17 = t;
                            int i_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(i_17);
                              }
                            else
                              {
                                t = h_17;
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
  ATerm u_5 (ATerm t)
  {
    ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL;
    if(((j_31 != NULL) && (j_31 != t)))
      _fail(t);
    else
      j_31 = t;
    {
      ATerm j_17 = t;
      int k_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((i_31 != NULL) && (i_31 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_31 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(p_6, t);
          ;
          LocalPopChoice(k_17);
        }
      else
        {
          t = j_17;
          t = term_l_17;
          if(((i_31 != NULL) && (i_31 != t)))
            _fail(t);
          else
            i_31 = t;
        }
      t = not_null(i_31);
      t = ReadFromFile_0_0(t);
      if(((k_31 != NULL) && (k_31 != t)))
        _fail(t);
      else
        k_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_31), not_null(k_31));
      t = apply_strategy_1_0(e_97, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(q_5, g_97, s_5, u_5, t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,n_10 = NULL;
  p_31 = t;
  if(match_cons(t, sym__2))
    {
      m_31 = ATgetArgument(t, 0);
      n_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_31);
  l_31 = t;
  t = n_31;
  t = Treeviz_0_0(t);
  o_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_31, o_31);
  n_10 = t;
  t = SSLsetAnnotations(n_10, l_31);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(q_6, _fail, default_usage_0_0, t);
  return(t);
}
