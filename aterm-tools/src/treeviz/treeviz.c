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
ATerm term_d_22;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_e_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_w_19;
ATerm term_n_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_s_17;
ATerm term_p_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_u_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_j_14;
ATerm term_z_13;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_v_12;
ATerm term_q_12;
ATerm term_i_12;
ATerm term_d_12;
ATerm term_k_10;
ATerm term_e_10;
ATerm term_e_9;
ATerm term_b_9;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_p_5;
ATerm term_j_3;
ATerm term_h_1;
void init_constant_terms (void)
{
  ATprotect(&(term_h_1));
  term_h_1 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_3));
  term_j_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("[ ]", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym__2, term_p_14, term_t_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym__2, term_y_14, term_h_1);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym__2, term_j_15, term_k_15);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("This program outputs a term in abstract GraphXML format.", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym__2, term_a_19, term_h_1);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym__2, term_d_19, term_h_1);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym__2, term_p_17, term_h_1);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym__2, term_n_21, term_h_1);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm l_4 (ATerm y_25, ATerm a_26, ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm s_81 (ATerm), ATerm);
ATerm s_2 (ATerm x_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm t_1 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm q_4 (ATerm c_26, ATerm e_26, ATerm);
ATerm MkEdges_2_0 (ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm);
ATerm TreeViz_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm f_2 (ATerm);
ATerm NewNodeName_0_0 (ATerm);
ATerm Treeviz_0_0 (ATerm);
ATerm _2_0 (ATerm e_60 (ATerm), ATerm f_60 (ATerm), ATerm);
ATerm t_4 (ATerm x_45, ATerm y_45, ATerm);
ATerm u_4 (ATerm l_49, ATerm m_49, ATerm);
ATerm w_4 (ATerm t_93 (ATerm), ATerm q_427, ATerm p_49, ATerm);
ATerm v_4 (ATerm h_49, ATerm i_49, ATerm);
ATerm j_2 (ATerm);
ATerm l_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm t_2 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm v_96 (ATerm), ATerm);
ATerm x_7 (ATerm r_7, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_4 (ATerm n_49, ATerm);
ATerm y_4 (ATerm z_45, ATerm a_46, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm w_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_81 (ATerm), ATerm);
ATerm s_4 (ATerm n_40, ATerm o_40, ATerm);
ATerm debug_1_0 (ATerm r_93 (ATerm), ATerm);
ATerm z_2 (ATerm);
ATerm c_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm e_95 (ATerm), ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm t_3 (ATerm);
ATerm a_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm e_5 (ATerm o_50, ATerm p_50, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm b_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm c_5 (ATerm m_55, ATerm n_55, ATerm l_55, ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm z_4 (ATerm x_42, ATerm y_42, ATerm);
ATerm foldr_2_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_95 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm r_4 (ATerm);
ATerm need_help_1_0 (ATerm t_97 (ATerm), ATerm);
ATerm map_1_0 (ATerm c_81 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm b_5 (ATerm d_57, ATerm e_57, ATerm);
ATerm Program_1_0 (ATerm g_73 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm j_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm h_73 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm k_5 (ATerm);
ATerm q_5 (ATerm);
ATerm w_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm l_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm t_64 (ATerm), ATerm u_64 (ATerm), ATerm);
ATerm m_6 (ATerm);
ATerm parse_options_p__1_0 (ATerm w_99 (ATerm), ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm parse_options_1_0 (ATerm v_99 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm);
ATerm y_7 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm iowrap_3_0 (ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm g_97 (ATerm), ATerm);
ATerm j_8 (ATerm);
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
  t = term_h_1;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_j_3;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_8), f_0), term_p_5);
  n_0 = t;
  t = SSL_printnl(m_0, n_0);
  t = term_l_8;
  o_0 = t;
  t = SSL_exit(o_0);
  t = b_0;
  return(t);
}
ATerm l_4 (ATerm y_25, ATerm a_26, ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL,e_0 = NULL,i_0 = NULL,q_0 = NULL,x_0 = NULL,b_1 = NULL,d_1 = NULL,f_1 = NULL,j_1 = NULL,l_1 = NULL,n_1 = NULL;
  t = y_25;
  {
    ATerm m_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_0 = NULL;
        t = SSL_is_int(y_25);
        t_0 = t;
        t = SSL_int_to_string(t_0);
        ;
        LocalPopChoice(o_8);
      }
    else
      {
        t = m_8;
        {
          ATerm p_8 = t;
          int w_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_b_9;
              ;
              LocalPopChoice(w_8);
            }
          else
            {
              t = p_8;
            }
        }
      }
    e_0 = t;
    t = SSL_explode_string(e_0);
    t = escape_chars_0_0(t);
    i_0 = t;
    t = SSL_implode_string(i_0);
    q_0 = t;
    t = SSL_explode_string(q_0);
    b_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_1), term_e_9), (ATerm) ATinsert(ATempty, term_e_9));
    t = conc_0_0(t);
    x_0 = t;
    t = SSL_implode_string(x_0);
    r_0 = t;
    t = a_26;
    {
      ATerm f_9 = t;
      int j_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_0 = NULL;
          t = SSL_is_int(a_26);
          v_0 = t;
          t = SSL_int_to_string(v_0);
          ;
          LocalPopChoice(j_9);
        }
      else
        {
          t = f_9;
          {
            ATerm k_9 = t;
            int l_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = term_b_9;
                ;
                LocalPopChoice(l_9);
              }
            else
              {
                t = k_9;
              }
          }
        }
      d_1 = t;
      t = SSL_explode_string(d_1);
      t = escape_chars_0_0(t);
      f_1 = t;
      t = SSL_implode_string(f_1);
      j_1 = t;
      t = SSL_explode_string(j_1);
      n_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_1), term_e_9), (ATerm) ATinsert(ATempty, term_e_9));
      t = conc_0_0(t);
      l_1 = t;
      t = SSL_implode_string(l_1);
      s_0 = t;
      t = (ATerm) ATmakeAppl(sym_node_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_name_1, r_0)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_label_2, (ATerm)ATempty, s_0)));
    }
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm m_9 = t;
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
      t = m_9;
      {
        ATerm a_1 = NULL,c_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_1 = ATgetFirst((ATermList) t);
            c_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_1;
        {
          ATerm m_1 (ATerm t)
          {
            t = c_1;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(m_1, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm s_81 (ATerm), ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    ATerm p_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, k_1, t);
        ;
        LocalPopChoice(q_9);
      }
    else
      {
        t = p_9;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_81(t);
      }
    return(t);
  }
  t = k_1(t);
  return(t);
}
ATerm s_2 (ATerm x_1, ATerm t)
{
  ATerm k_2 = NULL;
  t = SSL_explode_term(x_1);
  if(match_cons(t, sym__2))
    {
      ATerm r_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_2;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL;
  o_2 = t;
  if(match_cons(t, sym__2))
    {
      m_2 = ATgetArgument(t, 0);
      n_2 = ATgetArgument(t, 1);
      {
        ATerm u_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              t = n_2;
              return(t);
            }
            t = m_2;
            t = at_end_1_0(q_1, t);
            ;
            LocalPopChoice(w_9);
          }
        else
          {
            t = u_9;
            t = s_2(o_2, t);
          }
      }
    }
  else
    {
      t = s_2(o_2, t);
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = Cons_2_0(_id, escape_chars_0_0, t);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm x_9 = t;
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_10 = t;
      int c_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_2 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm d_10 = ATgetFirst((ATermList) t);
              if(((ATgetType(d_10) != AT_INT) || (ATgetInt((ATermInt) d_10) != 34)))
                _fail(t);
              y_2 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(y_2), term_e_9), term_e_10);
          ;
          LocalPopChoice(c_10);
        }
      else
        {
          t = b_10;
          {
            ATerm a_3 = NULL,b_3 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_3 = ATgetFirst((ATermList) t);
                b_3 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_3;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(b_3), term_e_10), term_e_10);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(b_3), term_k_10), term_e_10);
              }
          }
        }
      t = Cons_2_0(_id, t_1, t);
      ;
      LocalPopChoice(y_9);
    }
  else
    {
      t = x_9;
      {
        ATerm l_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(n_10);
          }
        else
          {
            t = l_10;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm q_4 (ATerm c_26, ATerm e_26, ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,o_1 = NULL,p_1 = NULL,r_1 = NULL,s_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,z_1 = NULL,a_2 = NULL,c_2 = NULL;
  t = c_26;
  {
    ATerm o_10 = t;
    int p_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_3 = NULL;
        t = SSL_is_int(c_26);
        m_3 = t;
        t = SSL_int_to_string(m_3);
        ;
        LocalPopChoice(p_10);
      }
    else
      {
        t = o_10;
        {
          ATerm t_10 = t;
          int v_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_b_9;
              ;
              LocalPopChoice(v_10);
            }
          else
            {
              t = t_10;
            }
        }
      }
    o_1 = t;
    t = SSL_explode_string(o_1);
    t = escape_chars_0_0(t);
    p_1 = t;
    t = SSL_implode_string(p_1);
    r_1 = t;
    t = SSL_explode_string(r_1);
    u_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_1), term_e_9), (ATerm) ATinsert(ATempty, term_e_9));
    t = conc_0_0(t);
    s_1 = t;
    t = SSL_implode_string(s_1);
    k_3 = t;
    t = e_26;
    {
      ATerm b_11 = t;
      int f_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_3 = NULL;
          t = SSL_is_int(e_26);
          s_3 = t;
          t = SSL_int_to_string(s_3);
          ;
          LocalPopChoice(f_11);
        }
      else
        {
          t = b_11;
          {
            ATerm h_11 = t;
            int i_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = term_b_9;
                ;
                LocalPopChoice(i_11);
              }
            else
              {
                t = h_11;
              }
          }
        }
      v_1 = t;
      t = SSL_explode_string(v_1);
      t = escape_chars_0_0(t);
      w_1 = t;
      t = SSL_implode_string(w_1);
      z_1 = t;
      t = SSL_explode_string(z_1);
      c_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_2), term_e_9), (ATerm) ATinsert(ATempty, term_e_9));
      t = conc_0_0(t);
      a_2 = t;
      t = SSL_implode_string(a_2);
      l_3 = t;
      t = (ATerm) ATmakeAppl(sym_edge1_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_target_1, l_3)), (ATerm) ATmakeAppl(sym_source_1, k_3)));
    }
  }
  return(t);
}
ATerm MkEdges_2_0 (ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm t)
{
  ATerm u_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,c_4 = NULL,d_4 = NULL;
  u_3 = t;
  t = SSL_explode_term(u_3);
  if(match_cons(t, sym__2))
    {
      w_3 = ATgetArgument(t, 0);
      x_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_3;
  {
    ATerm j_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_4 = NULL;
        t = SSL_is_int(w_3);
        p_4 = t;
        t = SSL_int_to_string(p_4);
        ;
        LocalPopChoice(m_11);
      }
    else
      {
        t = j_11;
        {
          ATerm q_11 = t;
          int r_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_b_9;
              ;
              LocalPopChoice(r_11);
            }
          else
            {
              t = q_11;
            }
        }
      }
    t = NewNodeName_0_0(t);
    y_3 = t;
    t = term_h_1;
    t = n_73(t);
    z_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_3, z_3);
    t = q_4(y_3, z_3, t);
    c_4 = t;
    t = (ATerm) ATmakeAppl(sym__3, y_3, w_3, x_3);
    t = o_73(t);
    d_4 = t;
    t = (ATerm) ATinsert(CheckATermList(d_4), c_4);
  }
  return(t);
}
ATerm TreeViz_0_0 (ATerm t)
{
  ATerm h_5 = NULL,i_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
  if(match_cons(t, sym__3))
    {
      m_5 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
      o_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_5;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm s_11 = t;
      int t_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATempty;
          ;
          LocalPopChoice(t_11);
        }
      else
        {
          t = s_11;
          t = o_5;
          {
            ATerm y_1 (ATerm t)
            {
              ATerm b_2 (ATerm t)
              {
                t = m_5;
                return(t);
              }
              t = MkEdges_2_0(b_2, TreeViz_0_0, t);
              return(t);
            }
            t = map_1_0(y_1, t);
            t = concat_0_0(t);
          }
        }
    }
  else
    {
      t = o_5;
      {
        ATerm d_2 (ATerm t)
        {
          ATerm e_2 (ATerm t)
          {
            t = m_5;
            return(t);
          }
          t = MkEdges_2_0(e_2, TreeViz_0_0, t);
          return(t);
        }
        t = map_1_0(d_2, t);
        t = concat_0_0(t);
      }
    }
  h_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_5, n_5);
  t = l_4(m_5, n_5, t);
  i_5 = t;
  t = (ATerm) ATinsert(CheckATermList(h_5), i_5);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm v_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
        _fail(t);
      t = term_d_12;
      ;
      LocalPopChoice(z_11);
    }
  else
    {
      t = v_11;
    }
  return(t);
}
ATerm NewNodeName_0_0 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL;
  r_5 = t;
  t = term_h_1;
  t = new_0_0(t);
  s_5 = t;
  t = SSL_explode_string(r_5);
  t = map_1_0(f_2, t);
  u_5 = t;
  t = SSL_implode_string(u_5);
  t_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_5), s_5);
  v_5 = t;
  t = SSL_concat_strings(v_5);
  return(t);
}
ATerm Treeviz_0_0 (ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL,c_6 = NULL,d_6 = NULL;
  x_5 = t;
  t = SSL_explode_term(x_5);
  if(match_cons(t, sym__2))
    {
      y_5 = ATgetArgument(t, 0);
      z_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5;
  {
    ATerm e_12 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_6 = NULL;
        t = SSL_is_int(y_5);
        e_6 = t;
        t = SSL_int_to_string(e_6);
        ;
        LocalPopChoice(f_12);
      }
    else
      {
        t = e_12;
        {
          ATerm g_12 = t;
          int h_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_b_9;
              ;
              LocalPopChoice(h_12);
            }
          else
            {
              t = g_12;
            }
        }
      }
    t = NewNodeName_0_0(t);
    c_6 = t;
    t = (ATerm) ATmakeAppl(sym__3, c_6, y_5, z_5);
    t = TreeViz_0_0(t);
    d_6 = t;
    t = (ATerm) ATmakeAppl(sym_GraphXML_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_graph_2, (ATerm)ATempty, d_6)));
  }
  return(t);
}
ATerm _2_0 (ATerm e_60 (ATerm), ATerm f_60 (ATerm), ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,p_0 = NULL,u_0 = NULL;
  k_6 = t;
  if(match_cons(t, sym__2))
    {
      g_6 = ATgetArgument(t, 0);
      h_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_6);
  f_6 = t;
  t = g_6;
  t = e_60(t);
  i_6 = t;
  t = h_6;
  t = f_60(t);
  j_6 = t;
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_6, j_6);
  p_0 = t;
  t = SSLsetAnnotations(p_0, f_6);
  return(t);
}
ATerm t_4 (ATerm x_45, ATerm y_45, ATerm t)
{
  ATerm n_6 = NULL;
  t = SSL_fputc(x_45, y_45);
  n_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_6);
  return(t);
}
ATerm u_4 (ATerm l_49, ATerm m_49, ATerm t)
{
  ATerm o_6 = NULL;
  t = SSL_write_term_to_stream_text(l_49, m_49);
  o_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_6);
  return(t);
}
ATerm w_4 (ATerm t_93 (ATerm), ATerm q_427, ATerm p_49, ATerm t)
{
  ATerm p_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_427, term_i_12);
  t = open_stream_0_0(t);
  p_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_6, p_49);
  t = t_93(t);
  t = fclose_0_0(t);
  t = p_49;
  return(t);
}
ATerm v_4 (ATerm h_49, ATerm i_49, ATerm t)
{
  ATerm q_6 = NULL;
  t = SSL_write_term_to_stream_baf(h_49, i_49);
  q_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_6);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = fetch_1_0(p_2, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm u_6 = NULL,v_6 = NULL;
  if(match_cons(t, sym__2))
    {
      u_6 = ATgetArgument(t, 0);
      v_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_4(q_2, u_6, v_6, t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_12 = ATgetArgument(t, 0);
      if(match_cons(j_12, sym_Stream_1))
        {
          w_6 = ATgetArgument(j_12, 0);
        }
      else
        _fail(t);
      x_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_4(w_6, x_6, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL;
  if(match_cons(t, sym__2))
    {
      y_6 = ATgetArgument(t, 0);
      z_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_4(t_2, y_6, z_6, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_12 = ATgetArgument(t, 0);
      if(match_cons(p_12, sym_Stream_1))
        {
          b_7 = ATgetArgument(p_12, 0);
        }
      else
        _fail(t);
      c_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_4(b_7, c_7, t);
  a_7 = t;
  t = term_q_12;
  d_7 = t;
  t = a_7;
  if(match_cons(t, sym_Stream_1))
    {
      e_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_12, a_7);
  t = t_4(d_7, e_7, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm r_6 = NULL,s_6 = NULL;
  r_6 = t;
  {
    ATerm g_2 (ATerm t)
    {
      ATerm s_12 = t;
      int t_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((s_6 != NULL) && (s_6 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_6 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(h_2, t);
          ;
          LocalPopChoice(t_12);
        }
      else
        {
          t = s_12;
          t = term_v_12;
          if(((s_6 != NULL) && (s_6 != t)))
            _fail(t);
          else
            s_6 = t;
        }
      return(t);
    }
    t = _2_0(g_2, _id, t);
    t = r_6;
    {
      ATerm i_2 (ATerm t)
      {
        ATerm t_6 = NULL;
        t_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_6), t_6);
        return(t);
      }
      t = _2_0(_id, i_2, t);
      {
        ATerm w_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(j_2, l_2, t);
            ;
            LocalPopChoice(x_12);
          }
        else
          {
            t = w_12;
            t = _2_0(_id, r_2, t);
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
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL;
  f_7 = t;
  t = dtime_0_0(t);
  t = f_7;
  t = v_96(t);
  g_7 = t;
  t = dtime_0_0(t);
  h_7 = t;
  t = g_7;
  if(match_cons(t, sym__2))
    {
      i_7 = ATgetArgument(t, 0);
      j_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_7), (ATerm) ATmakeAppl(sym_Runtime_1, h_7)), j_7);
  return(t);
}
ATerm x_7 (ATerm r_7, ATerm t)
{
  t = SSL_fclose(r_7);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL;
  v_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_7 = ATgetArgument(t, 0);
      {
        ATerm y_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_7);
            ;
            LocalPopChoice(z_12);
          }
        else
          {
            t = y_12;
            t = x_7(v_7, t);
          }
      }
    }
  else
    {
      t = x_7(v_7, t);
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
  ATerm z_7 = NULL;
  t = SSL_fopen(z_45, a_46);
  z_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_7);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_8 = NULL;
  t = SSL_stdin_stream();
  a_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_8 = NULL;
  t = SSL_stdout_stream();
  c_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_8 = NULL;
  t = SSL_stderr_stream();
  d_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_8);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm s_8 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      s_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_8;
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm v_8 = NULL;
  v_8 = t;
  t = SSL_is_string(v_8);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_13 = ATgetArgument(t, 0);
      ATerm b_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_8 = NULL,v_2 = NULL;
        n_8 = t;
        t = SSL_explode_term(n_8);
        if(match_cons(t, sym__2))
          {
            ATerm e_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_13) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_13 = ATgetArgument(t, 1);
              if(((ATgetType(g_13) == AT_LIST) && !(ATisEmpty(g_13))))
                {
                  v_2 = ATgetFirst((ATermList) g_13);
                  {
                    ATerm h_13 = (ATerm) ATgetNext((ATermList) g_13);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = v_2;
        if(match_cons(t, sym_stderr_0))
          {
            t = v_2;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = v_2;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = v_2;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        {
          ATerm i_13 = t;
          int m_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_8 = NULL,r_8 = NULL;
              t = _2_0(u_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  q_8 = ATgetArgument(t, 0);
                  r_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_4(q_8, r_8, t);
              ;
              LocalPopChoice(m_13);
            }
          else
            {
              t = i_13;
              {
                ATerm t_8 = NULL,u_8 = NULL;
                t = _2_0(w_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    t_8 = ATgetArgument(t, 0);
                    u_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_4(t_8, u_8, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_q_13;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_9 = NULL;
      a_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_9, term_t_13);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_13);
    }
  else
    {
      t = r_13;
      t = debug_1_0(x_2, t);
      _fail(t);
    }
  x_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_4(z_8, t);
  y_8 = t;
  t = x_8;
  t = fclose_0_0(t);
  t = y_8;
  return(t);
}
ATerm fetch_1_0 (ATerm m_81 (ATerm), ATerm t)
{
  ATerm c_9 (ATerm t)
  {
    ATerm u_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(m_81, _id, t);
        ;
        LocalPopChoice(v_13);
      }
    else
      {
        t = u_13;
        t = Cons_2_0(_id, c_9, t);
      }
    return(t);
  }
  t = c_9(t);
  return(t);
}
ATerm s_4 (ATerm n_40, ATerm o_40, ATerm t)
{
  t = SSL_strcat(n_40, o_40);
  return(t);
}
ATerm debug_1_0 (ATerm r_93 (ATerm), ATerm t)
{
  ATerm d_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL;
  d_9 = t;
  t = r_93(t);
  g_9 = t;
  t = term_j_3;
  h_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_9), g_9);
  i_9 = t;
  t = SSL_printnl(h_9, i_9);
  t = d_9;
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm w_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(y_13);
    }
  else
    {
      t = w_13;
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_z_13;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_9 = NULL;
      o_9 = t;
      t = SSL_is_string(o_9);
      ;
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      {
        ATerm f_14 = t;
        int g_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_2, t);
            ;
            LocalPopChoice(g_14);
          }
        else
          {
            t = f_14;
            {
              ATerm s_9 = NULL,t_9 = NULL,v_9 = NULL;
              s_9 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_9 = ATgetArgument(t, 0);
                  t = t_9;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_9 = ATgetArgument(t, 0);
                      t = t_9;
                      {
                        ATerm h_14 = t;
                        int i_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(i_14);
                          }
                        else
                          {
                            t = h_14;
                            t = debug_1_0(c_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm z_9 = NULL,a_10 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_9 = ATgetArgument(t, 0);
                          v_9 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_9;
                      t = eval_config_0_0(t);
                      z_9 = t;
                      t = v_9;
                      t = eval_config_0_0(t);
                      a_10 = t;
                      t = (ATerm) ATmakeAppl(sym__2, z_9, a_10);
                      t = s_4(z_9, a_10, t);
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
  ATerm f_10 = NULL,g_10 = NULL;
  f_10 = t;
  t = term_j_14;
  g_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, f_10);
  t = b_5(g_10, f_10, t);
  {
    ATerm k_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_10 = NULL,i_10 = NULL;
        t = eval_config_0_0(t);
        h_10 = t;
        t = term_j_14;
        i_10 = t;
        t = SSL_table_put(i_10, f_10, h_10);
        t = h_10;
        ;
        LocalPopChoice(m_14);
      }
    else
      {
        t = k_14;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_95 (ATerm), ATerm t)
{
  ATerm n_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_10 = NULL,m_10 = NULL;
      j_10 = t;
      t = term_p_14;
      t = get_config_0_0(t);
      m_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_10, term_q_14);
      t = geq_0_0(t);
      t = j_10;
      t = e_95(t);
      ;
      LocalPopChoice(o_14);
    }
  else
    {
      t = n_14;
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm q_10 = NULL;
  q_10 = t;
  if(match_string(t, "-k"))
    {
      t = q_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_10;
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL,u_10 = NULL;
  r_10 = t;
  t = SSL_string_to_int(r_10);
  s_10 = t;
  t = term_r_14;
  u_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_14, s_10);
  t = e_5(u_10, s_10, t);
  t = r_10;
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_s_14;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_3, e_3, f_3, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm w_10 = NULL;
  w_10 = t;
  if(match_string(t, "-S"))
    {
      t = w_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_10;
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL;
  t = term_p_14;
  x_10 = t;
  t = term_t_14;
  y_10 = t;
  t = term_u_14;
  t = e_5(x_10, y_10, t);
  t = term_v_14;
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_w_14;
  return(t);
}
ATerm n_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,c_11 = NULL;
  z_10 = t;
  t = SSL_string_to_int(z_10);
  a_11 = t;
  t = term_p_14;
  c_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_14, a_11);
  t = e_5(c_11, a_11, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_10);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm q_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL;
  t = term_y_14;
  d_11 = t;
  t = term_h_1;
  e_11 = t;
  t = term_z_14;
  t = e_5(d_11, e_11, t);
  t = term_a_15;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_b_15;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_3, h_3, i_3, t);
      ;
      LocalPopChoice(f_15);
    }
  else
    {
      t = c_15;
      {
        ATerm g_15 = t;
        int i_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_3, o_3, p_3, t);
            ;
            LocalPopChoice(i_15);
          }
        else
          {
            t = g_15;
            t = Option_3_0(q_3, t_3, a_4, t);
          }
      }
    }
  return(t);
}
ATerm e_5 (ATerm o_50, ATerm p_50, ATerm t)
{
  ATerm g_11 = NULL;
  t = term_j_14;
  g_11 = t;
  t = SSL_table_put(g_11, o_50, p_50);
  t = (ATerm) ATmakeAppl(sym__3, term_j_14, o_50, p_50);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL;
      t = term_h_1;
      t = d_0(t);
      n_11 = t;
      t = term_j_15;
      o_11 = t;
      t = term_k_15;
      p_11 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_15, term_k_15, n_11);
      t = c_5(o_11, p_11, n_11, t);
      _fail(t);
    }
  else
    {
      ATerm u_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_11 = ATgetFirst((ATermList) t);
          l_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_11;
      t = a_0(t);
      t = term_h_1;
      t = c_0(t);
      u_11 = t;
      t = (ATerm) ATinsert(CheckATermList(l_11), u_11);
    }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm w_11 = NULL;
  w_11 = t;
  if(match_string(t, "-o"))
    {
      t = w_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_11;
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL;
  x_11 = t;
  t = term_l_15;
  y_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_15, x_11);
  t = e_5(y_11, x_11, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_11);
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_m_15;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_4, g_4, h_4, t);
  return(t);
}
ATerm c_5 (ATerm m_55, ATerm n_55, ATerm l_55, ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL;
  a_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_55, n_55);
  {
    ATerm n_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_15 = ATgetArgument(t, 0);
            ATerm t_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_55, n_55);
        t = b_5(m_55, n_55, t);
        ;
        LocalPopChoice(p_15);
      }
    else
      {
        t = n_15;
        t = (ATerm) ATempty;
      }
    b_12 = t;
    t = (ATerm) ATinsert(CheckATermList(b_12), l_55);
    c_12 = t;
    t = SSL_table_put(m_55, n_55, c_12);
    t = a_12;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_12 = NULL,r_12 = NULL,u_12 = NULL;
      t = term_h_1;
      t = l_0(t);
      o_12 = t;
      t = term_j_15;
      r_12 = t;
      t = term_k_15;
      u_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_15, term_k_15, o_12);
      t = c_5(r_12, u_12, o_12, t);
      _fail(t);
    }
  else
    {
      ATerm f_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_12 = ATgetFirst((ATermList) t);
          l_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_12;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_12 = ATgetFirst((ATermList) t);
          n_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_12;
      t = j_0(t);
      t = m_12;
      t = k_0(t);
      f_13 = t;
      t = (ATerm) ATinsert(CheckATermList(n_12), f_13);
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm j_13 = NULL;
  j_13 = t;
  if(match_string(t, "-i"))
    {
      t = j_13;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_13;
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL;
  k_13 = t;
  t = term_u_15;
  l_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_15, k_13);
  t = e_5(l_13, k_13, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_13);
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_a_16;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_4, j_4, k_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,x_13 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_1;
  t = whoami_0_0(t);
  n_13 = t;
  t = term_j_3;
  o_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_16), n_13);
  p_13 = t;
  t = SSL_printnl(o_13, p_13);
  t = term_l_8;
  x_13 = t;
  t = SSL_exit(x_13);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_16;
  t = get_config_0_0(t);
  return(t);
}
ATerm z_4 (ATerm x_42, ATerm y_42, ATerm t)
{
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_42, y_42);
      ;
      LocalPopChoice(g_16);
    }
  else
    {
      t = f_16;
      t = SSL_addr(x_42, y_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm t)
{
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_87(t);
      ;
      LocalPopChoice(i_16);
    }
  else
    {
      t = h_16;
      {
        ATerm a_14 = NULL,b_14 = NULL,e_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_14 = ATgetFirst((ATermList) t);
            b_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_14;
        t = foldr_2_0(f_87, g_87, t);
        e_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_14, e_14);
        t = g_87(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_t_14;
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL;
  if(match_cons(t, sym__2))
    {
      e_4 = ATgetArgument(t, 0);
      f_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_4(e_4, f_4, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_14 = NULL,r_3 = NULL,v_3 = NULL;
  t = times_0_0(t);
  r_3 = t;
  t = SSL_explode_term(r_3);
  if(match_cons(t, sym__2))
    {
      ATerm j_16 = ATgetArgument(t, 0);
      v_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3;
  t = foldr_2_0(m_4, n_4, t);
  l_14 = t;
  t = SSL_TicksToSeconds(l_14);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,h_15 = NULL;
  d_15 = t;
  if(match_cons(t, sym__2))
    {
      e_15 = ATgetArgument(t, 0);
      h_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_15;
        if((e_15 != t))
          {
            _fail(t);
          }
        t = d_15;
        ;
        LocalPopChoice(r_16);
      }
    else
      {
        t = l_16;
        t = (ATerm) ATmakeAppl(sym__2, e_15, h_15);
        {
          ATerm s_16 = t;
          int x_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_15, h_15);
              ;
              LocalPopChoice(x_16);
            }
          else
            {
              t = s_16;
              t = SSL_gtr(e_15, h_15);
            }
          t = (ATerm) ATmakeAppl(sym__2, e_15, h_15);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_95 (ATerm), ATerm t)
{
  ATerm y_16 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_15 = NULL,q_15 = NULL;
      o_15 = t;
      t = term_p_14;
      t = get_config_0_0(t);
      q_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_15, term_l_8);
      t = geq_0_0(t);
      t = o_15;
      t = d_95(t);
      ;
      LocalPopChoice(d_17);
    }
  else
    {
      t = y_16;
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm s_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
  t = run_time_0_0(t);
  s_15 = t;
  t = term_h_1;
  t = whoami_0_0(t);
  v_15 = t;
  t = term_j_3;
  w_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_17), s_15), term_e_17), v_15);
  x_15 = t;
  t = SSL_printnl(w_15, x_15);
  t = (ATerm) ATmakeAppl(sym__2, term_j_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_17), s_15), term_e_17), v_15));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_14;
  y_15 = t;
  t = SSL_exit(y_15);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm g_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(k_17);
    }
  else
    {
      t = g_17;
      {
        ATerm l_17 = t;
        int m_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(m_17);
          }
        else
          {
            t = l_17;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm t_97 (ATerm), ATerm t)
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      t = fetch_1_0(r_4, t);
    }
  t = t_97(t);
  return(t);
}
ATerm map_1_0 (ATerm c_81 (ATerm), ATerm t)
{
  ATerm z_15 (ATerm t)
  {
    ATerm q_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(r_17);
      }
    else
      {
        t = q_17;
        t = Cons_2_0(c_81, z_15, t);
      }
    return(t);
  }
  t = z_15(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm c_16 = NULL,e_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_16 = ATgetFirst((ATermList) t);
      e_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_16 = NULL,m_16 = NULL;
        t = e_16;
        t = h_0(t);
        k_16 = t;
        t = c_16;
        t = g_0(t);
        m_16 = t;
        t = e_16;
        {
          ATerm a_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(k_16), m_16);
            return(t);
          }
          t = reverse_acc_2_0(g_0, a_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_1;
      t = h_0(t);
    }
  return(t);
}
ATerm b_5 (ATerm d_57, ATerm e_57, ATerm t)
{
  t = SSL_table_get(d_57, e_57);
  return(t);
}
ATerm Program_1_0 (ATerm g_73 (ATerm), ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,w_0 = NULL,y_0 = NULL;
  q_16 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_16);
  n_16 = t;
  t = o_16;
  t = g_73(t);
  p_16 = t;
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_16);
  w_0 = t;
  t = SSLsetAnnotations(w_0, n_16);
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm w_16 = NULL;
  w_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_16), term_s_17);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
  ATerm v_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_16;
      t = get_config_0_0(t);
      t_16 = t;
      ;
      LocalPopChoice(a_18);
    }
  else
    {
      t = v_17;
      {
        ATerm d_5 (ATerm t)
        {
          ATerm f_5 (ATerm t)
          {
            if(((t_16 != NULL) && (t_16 != t)))
              _fail(t);
            else
              t_16 = t;
            return(t);
          }
          t = Program_1_0(f_5, t);
          return(t);
        }
        t = fetch_1_0(d_5, t);
      }
    }
  {
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_18), not_null(t_16)), term_j_18);
        t = echo_0_0(t);
        ;
        LocalPopChoice(d_18);
      }
    else
      {
        t = c_18;
      }
    t = term_l_18;
    t = echo_0_0(t);
    t = term_j_15;
    u_16 = t;
    t = term_k_15;
    v_16 = t;
    t = term_m_18;
    t = b_5(u_16, v_16, t);
    t = reverse_acc_2_0(_id, g_5, t);
    t = map_1_0(j_5, t);
    {
      ATerm q_18 = t;
      int r_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, term_t_18), term_s_18);
          t = echo_0_0(t);
          ;
          LocalPopChoice(r_18);
        }
      else
        {
          t = q_18;
        }
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm h_73 (ATerm), ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,z_0 = NULL,e_1 = NULL;
  c_17 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      a_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_17);
  z_16 = t;
  t = a_17;
  t = h_73(t);
  b_17 = t;
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, b_17);
  z_0 = t;
  t = SSLsetAnnotations(z_0, z_16);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL;
  h_17 = t;
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_17;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_18 = ATgetFirst((ATermList) t);
                ATerm z_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_17;
          }
        ;
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        t = (ATerm) ATinsert(ATempty, h_17);
      }
    i_17 = t;
    t = term_v_12;
    j_17 = t;
    t = SSL_printnl(j_17, i_17);
    t = h_17;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_16;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL;
  t = term_a_19;
  t_17 = t;
  t = term_h_1;
  u_17 = t;
  t = term_b_19;
  t = e_5(t_17, u_17, t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_c_19;
  return(t);
}
ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL;
  t = term_a_19;
  w_17 = t;
  t = term_h_1;
  x_17 = t;
  t = term_b_19;
  t = e_5(w_17, x_17, t);
  t = term_d_19;
  y_17 = t;
  t = term_h_1;
  z_17 = t;
  t = term_e_19;
  t = e_5(y_17, z_17, t);
  t = term_f_19;
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_g_19;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_5, q_5, w_5, t);
      ;
      LocalPopChoice(i_19);
    }
  else
    {
      t = h_19;
      t = Option_3_0(a_6, b_6, l_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_64 (ATerm), ATerm u_64 (ATerm), ATerm t)
{
  ATerm b_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,g_1 = NULL,i_1 = NULL;
  i_18 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_18 = ATgetFirst((ATermList) t);
      f_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_18);
  b_18 = t;
  t = e_18;
  t = t_64(t);
  g_18 = t;
  t = f_18;
  t = u_64(t);
  h_18 = t;
  i_1 = t;
  t = (ATerm) ATinsert(CheckATermList(h_18), g_18);
  g_1 = t;
  t = SSLsetAnnotations(g_1, b_18);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL;
  o_18 = t;
  t = term_d_16;
  p_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_16, o_18);
  t = e_5(p_18, o_18, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, o_18);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_99 (ATerm), ATerm t)
{
  ATerm n_18 = NULL;
  n_18 = t;
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_19;
        t = w_99(t);
        ;
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
      }
    t = n_18;
    {
      ATerm l_7 (ATerm t)
      {
        ATerm o_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_19 = t;
            int u_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(u_19);
              }
            else
              {
                t = t_19;
                t = w_99(t);
                t = Cons_2_0(_id, l_7, t);
              }
            ;
            LocalPopChoice(s_19);
          }
        else
          {
            t = o_19;
            {
              ATerm u_18 = NULL,v_18 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_18 = ATgetFirst((ATermList) t);
                  v_18 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(v_18), (ATerm) ATmakeAppl(sym_Undefined_1, u_18));
            }
          }
        return(t);
      }
      t = Cons_2_0(m_6, l_7, t);
    }
  }
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm a_20 = NULL;
  a_20 = t;
  if(match_string(t, "--help"))
    {
      t = a_20;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_20;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_20;
        }
    }
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL;
  t = term_p_17;
  b_20 = t;
  t = term_h_1;
  c_20 = t;
  t = term_w_19;
  t = e_5(b_20, c_20, t);
  t = term_y_19;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_z_19;
  return(t);
}
ATerm q_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_99 (ATerm), ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,v_19 = NULL,x_19 = NULL;
  l_19 = t;
  t = term_j_15;
  q_19 = t;
  t = term_k_15;
  r_19 = t;
  t = (ATerm) ATempty;
  v_19 = t;
  t = SSL_table_put(q_19, r_19, v_19);
  t = l_19;
  {
    ATerm m_7 (ATerm t)
    {
      ATerm d_20 = t;
      int e_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_99(t);
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
                t = Option_3_0(n_7, o_7, p_7, t);
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
    t = parse_options_p__1_0(m_7, t);
    {
      ATerm h_20 = t;
      int i_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_20 = NULL;
          j_20 = t;
          {
            ATerm n_20 = t;
            int o_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_5 = NULL;
                t = j_20;
                {
                  ATerm r_20 = t;
                  int t_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_p_17;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(t_20);
                    }
                  else
                    {
                      t = r_20;
                      t = fetch_1_0(q_7, t);
                    }
                  t = j_20;
                  t = default_system_usage_0_0(t);
                  t = term_t_14;
                  l_5 = t;
                  t = SSL_exit(l_5);
                }
                ;
                LocalPopChoice(o_20);
              }
            else
              {
                t = n_20;
                {
                  ATerm k_7 = NULL;
                  t = term_a_19;
                  t = get_config_0_0(t);
                  t = j_20;
                  t = default_system_about_0_0(t);
                  t = term_t_14;
                  k_7 = t;
                  t = SSL_exit(k_7);
                }
              }
          }
          ;
          LocalPopChoice(i_20);
        }
      else
        {
          t = h_20;
          {
            ATerm v_20 = t;
            int w_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
                ATerm s_7 (ATerm t)
                {
                  ATerm t_7 (ATerm t)
                  {
                    if(((m_19 != NULL) && (m_19 != t)))
                      _fail(t);
                    else
                      m_19 = t;
                    return(t);
                  }
                  t = Undefined_1_0(t_7, t);
                  return(t);
                }
                t = fetch_1_0(s_7, t);
                t = term_j_3;
                k_20 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_19)), term_z_20);
                l_20 = t;
                t = SSL_printnl(k_20, l_20);
                t = (ATerm) ATmakeAppl(sym__2, term_j_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_19)), term_z_20));
                t = default_system_usage_0_0(t);
                t = term_l_8;
                m_20 = t;
                t = SSL_exit(m_20);
                ;
                LocalPopChoice(w_20);
              }
            else
              {
                t = v_20;
              }
          }
        }
      p_19 = t;
      t = term_j_15;
      x_19 = t;
      t = SSL_table_destroy(x_19);
      t = p_19;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,s_20 = NULL,u_20 = NULL;
  t = parse_options_1_0(v_97, t);
  p_20 = t;
  t = term_a_21;
  q_20 = t;
  t = SSL_table_create(q_20);
  t = term_a_21;
  s_20 = t;
  t = term_e_21;
  u_20 = t;
  t = SSL_table_put(s_20, u_20, p_20);
  t = p_20;
  t = x_97(t);
  {
    ATerm f_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_97, t);
        ;
        LocalPopChoice(k_21);
      }
    else
      {
        t = f_21;
        {
          ATerm l_21 = t;
          int m_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_97(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(m_21);
            }
          else
            {
              t = l_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = if_verbose2_1_0(h_8, t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL;
  t = term_n_21;
  x_20 = t;
  t = term_h_1;
  y_20 = t;
  t = term_o_21;
  t = e_5(x_20, y_20, t);
  t = term_p_21;
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_q_21;
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL,g_21 = NULL;
  b_21 = t;
  t = term_d_16;
  t = get_config_0_0(t);
  c_21 = t;
  t = term_j_3;
  d_21 = t;
  t = (ATerm) ATinsert(ATempty, c_21);
  g_21 = t;
  t = SSL_printnl(d_21, g_21);
  t = b_21;
  return(t);
}
ATerm iowrap_3_0 (ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm g_97 (ATerm), ATerm t)
{
  ATerm w_7 (ATerm t)
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_97(t);
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
              t = input_option_0_0(t);
              ;
              LocalPopChoice(u_21);
            }
          else
            {
              t = t_21;
              {
                ATerm v_21 = t;
                int w_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(w_21);
                  }
                else
                  {
                    t = v_21;
                    {
                      ATerm x_21 = t;
                      int y_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(e_8, f_8, g_8, t);
                          ;
                          LocalPopChoice(y_21);
                        }
                      else
                        {
                          t = x_21;
                          {
                            ATerm z_21 = t;
                            int a_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(a_22);
                              }
                            else
                              {
                                t = z_21;
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
  ATerm b_8 (ATerm t)
  {
    ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL;
    h_21 = t;
    {
      ATerm b_22 = t;
      int c_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((i_21 != NULL) && (i_21 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_21 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_8, t);
          ;
          LocalPopChoice(c_22);
        }
      else
        {
          t = b_22;
          t = term_d_22;
          i_21 = t;
        }
      t = not_null(i_21);
      t = ReadFromFile_0_0(t);
      j_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_21, j_21);
      t = apply_strategy_1_0(e_97, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(w_7, g_97, y_7, b_8, t);
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = _2_0(_id, Treeviz_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(j_8, _fail, default_usage_0_0, t);
  return(t);
}
