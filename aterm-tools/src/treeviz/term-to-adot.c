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
Symbol sym_Graph_0;
Symbol sym_Tree_0;
Symbol sym_DotDigraph_2;
Symbol sym_AttrId_2;
Symbol sym_Node_2;
Symbol sym_Id_1;
Symbol sym_Attrs_1;
Symbol sym_EdgeNoAttrs_2;
Symbol sym_Arrow_1;
Symbol sym_Some_1;
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
  sym_Graph_0 = ATmakeSymbol("Graph", 0, ATfalse);
  ATprotectSymbol(sym_Graph_0);
  sym_Tree_0 = ATmakeSymbol("Tree", 0, ATfalse);
  ATprotectSymbol(sym_Tree_0);
  sym_DotDigraph_2 = ATmakeSymbol("DotDigraph", 2, ATfalse);
  ATprotectSymbol(sym_DotDigraph_2);
  sym_AttrId_2 = ATmakeSymbol("AttrId", 2, ATfalse);
  ATprotectSymbol(sym_AttrId_2);
  sym_Node_2 = ATmakeSymbol("Node", 2, ATfalse);
  ATprotectSymbol(sym_Node_2);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_Attrs_1 = ATmakeSymbol("Attrs", 1, ATfalse);
  ATprotectSymbol(sym_Attrs_1);
  sym_EdgeNoAttrs_2 = ATmakeSymbol("EdgeNoAttrs", 2, ATfalse);
  ATprotectSymbol(sym_EdgeNoAttrs_2);
  sym_Arrow_1 = ATmakeSymbol("Arrow", 1, ATfalse);
  ATprotectSymbol(sym_Arrow_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
ATerm term_d_20;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_g_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_f_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_q_17;
ATerm term_o_17;
ATerm term_j_17;
ATerm term_h_17;
ATerm term_e_17;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_x_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_d_14;
ATerm term_p_13;
ATerm term_h_13;
ATerm term_c_13;
ATerm term_i_12;
ATerm term_d_12;
ATerm term_x_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_w_9;
ATerm term_i_9;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_o_8;
ATerm term_y_7;
ATerm term_w_7;
ATerm term_t_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_h_3;
ATerm term_c_1;
void init_constant_terms (void)
{
  ATprotect(&(term_c_1));
  term_c_1 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_3));
  term_h_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym__2, term_l_7, term_c_1);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym__2, term_p_7, term_c_1);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_AttrId_2, term_i_9, term_z_9);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym__2, term_x_10, term_t_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_14);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__2, term_k_15, term_c_1);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym__2, term_v_15, term_w_15);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym__2, term_o_17, term_c_1);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym__2, term_v_17, term_c_1);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym__2, term_a_17, term_c_1);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym__2, term_g_19, term_c_1);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm o_0 (ATerm);
ATerm p_0 (ATerm);
ATerm t_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm term_to_adot_options_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm at_end_1_0 (ATerm v_77 (ATerm), ATerm);
ATerm w_4 (ATerm l_4, ATerm);
ATerm conc_0_0 (ATerm);
ATerm EdgeToDot_0_0 (ATerm);
ATerm k_5 (ATerm s_23, ATerm t_23, ATerm);
ATerm h_1 (ATerm);
ATerm graph_to_adot_0_0 (ATerm);
ATerm i_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
ATerm w_1 (ATerm);
ATerm y_1 (ATerm);
ATerm term_to_graph_0_0 (ATerm);
ATerm l_5 (ATerm m_81 (ATerm), ATerm n_81 (ATerm), ATerm y_30, ATerm x_30, ATerm);
ATerm m_5 (ATerm j_81 (ATerm), ATerm u_30, ATerm t_30, ATerm);
ATerm foldr_3_0 (ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm k_91 (ATerm), ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm k_2 (ATerm);
ATerm m_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm term_to_tree_0_0 (ATerm);
ATerm to_adot_0_0 (ATerm);
ATerm p_5 (ATerm t_43, ATerm u_43, ATerm);
ATerm q_5 (ATerm h_47, ATerm i_47, ATerm);
ATerm s_5 (ATerm w_89 (ATerm), ATerm w_424, ATerm l_47, ATerm);
ATerm r_5 (ATerm d_47, ATerm e_47, ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm j_3 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm y_92 (ATerm), ATerm);
ATerm o_20 (ATerm h_20, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm t_5 (ATerm j_47, ATerm);
ATerm u_5 (ATerm v_43, ATerm w_43, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm u_22 (ATerm c_21, ATerm);
ATerm v_22 (ATerm j_21, ATerm m_21, ATerm p_21, ATerm);
ATerm w_22 (ATerm e_22, ATerm i_22, ATerm j_22, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm k_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm p_77 (ATerm), ATerm);
ATerm o_5 (ATerm j_38, ATerm k_38, ATerm);
ATerm debug_1_0 (ATerm u_89 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm p_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm h_91 (ATerm), ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm c_4 (ATerm);
ATerm h_4 (ATerm);
ATerm n_4 (ATerm);
ATerm r_4 (ATerm);
ATerm t_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm a_6 (ATerm k_48, ATerm l_48, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm x_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm y_5 (ATerm i_53, ATerm j_53, ATerm h_53, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm d_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm v_5 (ATerm t_40, ATerm u_40, ATerm);
ATerm foldr_2_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm g_91 (ATerm), ATerm);
ATerm h_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm w_5 (ATerm);
ATerm need_help_1_0 (ATerm w_93 (ATerm), ATerm);
ATerm map_1_0 (ATerm f_77 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm x_5 (ATerm z_54, ATerm a_55, ATerm);
ATerm c_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm p_62 (ATerm), ATerm q_62 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm z_95 (ATerm), ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm parse_options_1_0 (ATerm y_95 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm);
ATerm y_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm iowrap_3_0 (ATerm h_93 (ATerm), ATerm i_93 (ATerm), ATerm j_93 (ATerm), ATerm);
ATerm g_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,k_0 = NULL,l_0 = NULL,m_0 = NULL;
  b_0 = t;
  t = term_c_1;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_h_3;
  l_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_7), f_0), term_h_7);
  m_0 = t;
  t = SSL_printnl(l_0, m_0);
  t = term_k_7;
  k_0 = t;
  t = SSL_exit(k_0);
  t = b_0;
  return(t);
}
ATerm o_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--graph", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm n_0 = NULL,q_0 = NULL;
  t = term_l_7;
  n_0 = t;
  t = term_c_1;
  q_0 = t;
  t = term_m_7;
  t = a_6(n_0, q_0, t);
  t = term_n_7;
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_o_7;
  return(t);
}
ATerm y_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tree", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL;
  t = term_p_7;
  r_0 = t;
  t = term_c_1;
  s_0 = t;
  t = term_t_7;
  t = a_6(r_0, s_0, t);
  t = term_w_7;
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = term_y_7;
  return(t);
}
ATerm term_to_adot_options_0_0 (ATerm t)
{
  ATerm z_7 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_0, p_0, t_0, t);
      ;
      LocalPopChoice(d_8);
    }
  else
    {
      t = z_7;
      t = Option_3_0(y_0, z_0, a_1, t);
    }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_0 = NULL,w_0 = NULL,x_0 = NULL;
  u_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_0;
    }
  else
    {
      ATerm b_1 (ATerm t)
      {
        t = not_null(x_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((w_0 != NULL) && (w_0 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            w_0 = ATgetFirst((ATermList) t);
          if(((x_0 != NULL) && (x_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(w_0);
      t = at_end_1_0(b_1, t);
    }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm e_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 = NULL,k_1 = NULL,l_1 = NULL,o_1 = NULL,q_1 = NULL,e_2 = NULL;
      ATerm i_8 = t;
      int j_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_1 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm l_8 = ATgetFirst((ATermList) t);
              if(((ATgetType(l_8) != AT_INT) || (ATgetInt((ATermInt) l_8) != 34)))
                _fail(t);
              t_1 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(t_1), term_t_8), term_o_8);
          ;
          LocalPopChoice(j_8);
        }
      else
        {
          t = i_8;
          {
            ATerm x_1 = NULL,a_2 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_1 = ATgetFirst((ATermList) t);
                a_2 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_1;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(a_2), term_o_8), term_o_8);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(a_2), term_u_8), term_o_8);
              }
          }
        }
      q_1 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_1 = ATgetFirst((ATermList) t);
          l_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_1);
      j_1 = t;
      t = l_1;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      o_1 = t;
      t = (ATerm) ATinsert(CheckATermList(o_1), k_1);
      e_2 = t;
      t = SSLsetAnnotations(e_2, j_1);
      ;
      LocalPopChoice(h_8);
    }
  else
    {
      t = e_8;
      {
        ATerm c_3 = NULL,e_3 = NULL,g_3 = NULL;
        g_3 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_3 = ATgetFirst((ATermList) t);
            e_3 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm v_0 = NULL,d_1 = NULL,g_2 = NULL;
              t = SSLgetAnnotations(g_3);
              v_0 = t;
              t = e_3;
              t = escape_chars_0_0(t);
              d_1 = t;
              t = (ATerm) ATinsert(CheckATermList(d_1), c_3);
              g_2 = t;
              t = SSLsetAnnotations(g_2, v_0);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = g_3;
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm v_77 (ATerm), ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm a_4 = NULL,d_4 = NULL,f_4 = NULL;
    f_4 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_4 = ATgetFirst((ATermList) t);
        d_4 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm p_1 = NULL,v_1 = NULL,j_2 = NULL;
          t = SSLgetAnnotations(f_4);
          p_1 = t;
          t = d_4;
          t = g_4(t);
          v_1 = t;
          t = (ATerm) ATinsert(CheckATermList(v_1), a_4);
          j_2 = t;
          t = SSLsetAnnotations(j_2, p_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_4;
        t = v_77(t);
      }
    return(t);
  }
  t = g_4(t);
  return(t);
}
ATerm w_4 (ATerm l_4, ATerm t)
{
  ATerm m_4 = NULL;
  t = SSL_explode_term(l_4);
  if(match_cons(t, sym__2))
    {
      ATerm w_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,s_4 = NULL;
  if(((s_4 != NULL) && (s_4 != t)))
    _fail(t);
  else
    s_4 = t;
  if(match_cons(t, sym__2))
    {
      p_4 = ATgetArgument(t, 0);
      q_4 = ATgetArgument(t, 1);
      {
        ATerm x_8 = t;
        int c_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_1 (ATerm t)
            {
              t = not_null(q_4);
              return(t);
            }
            t = not_null(p_4);
            t = at_end_1_0(e_1, t);
            ;
            LocalPopChoice(c_9);
          }
        else
          {
            t = x_8;
            t = w_4(not_null(s_4), t);
          }
      }
    }
  else
    {
      t = w_4(not_null(s_4), t);
    }
  return(t);
}
ATerm EdgeToDot_0_0 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,b_8 = NULL;
  if(((u_7 != NULL) && (u_7 != t)))
    _fail(t);
  else
    u_7 = t;
  if(match_cons(t, sym__2))
    {
      if(((v_7 != NULL) && (v_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_7 = ATgetArgument(t, 0);
      if(((b_8 != NULL) && (b_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_9 = t;
    int h_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_2 = NULL,d_3 = NULL,f_3 = NULL,i_3 = NULL,i_4 = NULL,j_4 = NULL,o_4 = NULL,b_4 = NULL;
        t = SSL_explode_term(not_null(b_8));
        if(match_cons(t, sym__2))
          {
            if(((z_2 != NULL) && (z_2 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              z_2 = ATgetArgument(t, 0);
            if(((d_3 != NULL) && (d_3 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              d_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_explode_string(not_null(z_2));
        t = escape_chars_0_0(t);
        if(((b_4 != NULL) && (b_4 != t)))
          _fail(t);
        else
          b_4 = t;
        t = SSL_implode_string(not_null(b_4));
        if(((j_4 != NULL) && (j_4 != t)))
          _fail(t);
        else
          j_4 = t;
        t = SSL_explode_string(not_null(j_4));
        if(((o_4 != NULL) && (o_4 != t)))
          _fail(t);
        else
          o_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_4)), term_t_8), (ATerm) ATinsert(ATempty, term_t_8));
        t = conc_0_0(t);
        if(((i_4 != NULL) && (i_4 != t)))
          _fail(t);
        else
          i_4 = t;
        t = SSL_implode_string(not_null(i_4));
        if(((f_3 != NULL) && (f_3 != t)))
          _fail(t);
        else
          f_3 = t;
        t = not_null(d_3);
        {
          ATerm f_1 (ATerm t)
          {
            ATerm o_3 = NULL;
            o_3 = t;
            t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_7)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, o_3))));
            return(t);
          }
          t = map_1_0(f_1, t);
          if(((i_3 != NULL) && (i_3 != t)))
            _fail(t);
          else
            i_3 = t;
          t = (ATerm) ATinsert(CheckATermList(not_null(i_3)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_7)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_i_9, not_null(f_3)))))));
        }
        ;
        LocalPopChoice(h_9);
      }
    else
      {
        t = d_9;
        {
          ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL,g_5 = NULL,i_5 = NULL;
          t = SSL_is_int(not_null(b_8));
          t = SSL_int_to_string(not_null(b_8));
          i_5 = t;
          t = SSL_explode_string(i_5);
          t = escape_chars_0_0(t);
          g_5 = t;
          t = SSL_implode_string(g_5);
          b_5 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), b_5), term_w_9);
          c_5 = t;
          t = SSL_concat_strings(c_5);
          a_5 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_7)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_i_9, a_5))))));
        }
      }
  }
  return(t);
}
ATerm k_5 (ATerm s_23, ATerm t_23, ATerm t)
{
  ATerm g_8 = NULL;
  t = not_null(t_23);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(t_23);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm x_9 = ATgetFirst((ATermList) t);
          ATerm y_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(t_23);
    }
  t = not_null(t_23);
  {
    ATerm g_1 (ATerm t)
    {
      ATerm m_8 = NULL;
      m_8 = t;
      t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_23)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, m_8))));
      return(t);
    }
    t = map_1_0(g_1, t);
    if(((g_8 != NULL) && (g_8 != t)))
      _fail(t);
    else
      g_8 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(g_8)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_23)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_a_10)))));
  }
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm b_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
      q_8 = t;
      if(match_cons(t, sym__2))
        {
          r_8 = ATgetArgument(t, 0);
          s_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_8;
      t = k_5(r_8, s_8, t);
      ;
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
      t = EdgeToDot_0_0(t);
    }
  return(t);
}
ATerm graph_to_adot_0_0 (ATerm t)
{
  ATerm p_8 = NULL;
  t = map_1_0(h_1, t);
  t = concat_0_0(t);
  p_8 = t;
  t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_d_10, p_8);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm m_9 = NULL,q_9 = NULL,s_9 = NULL,v_9 = NULL;
  v_9 = t;
  t = SSL_address(v_9);
  q_9 = t;
  t = SSL_int_to_string(q_9);
  m_9 = t;
  t = term_e_10;
  s_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_10, m_9);
  t = o_5(s_9, m_9, t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL,i_10 = NULL,o_10 = NULL;
  o_10 = t;
  t = SSL_address(o_10);
  g_10 = t;
  t = SSL_int_to_string(g_10);
  f_10 = t;
  t = term_e_10;
  i_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_10, f_10);
  t = o_5(i_10, f_10, t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm q_10 = NULL,s_10 = NULL;
  if(match_cons(t, sym__2))
    {
      q_10 = ATgetArgument(t, 0);
      s_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(s_1, q_10, s_10, t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm t_10 = NULL;
  if(match_cons(t, sym__2))
    {
      t_10 = ATgetArgument(t, 0);
      if((t_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL;
  if(match_cons(t, sym__2))
    {
      e_6 = ATgetArgument(t, 0);
      f_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(y_1, e_6, f_6, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm g_6 = NULL;
  if(match_cons(t, sym__2))
    {
      g_6 = ATgetArgument(t, 0);
      if((g_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm term_to_graph_0_0 (ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,e_9 = NULL,g_9 = NULL,k_9 = NULL;
  b_9 = t;
  t = SSL_address(b_9);
  g_9 = t;
  t = SSL_int_to_string(g_9);
  e_9 = t;
  t = term_e_10;
  k_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_10, e_9);
  t = o_5(k_9, e_9, t);
  y_8 = t;
  t = b_9;
  {
    ATerm h_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = map_1_0(i_1, t);
        ;
        LocalPopChoice(j_10);
      }
    else
      {
        t = h_10;
        t = SRTS_all(m_1, t);
      }
    z_8 = t;
    t = b_9;
    {
      ATerm l_10 = t;
      int m_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = foldr_3_0(n_1, r_1, term_to_graph_0_0, t);
          ;
          LocalPopChoice(m_10);
        }
      else
        {
          t = l_10;
          {
            ATerm n_5 = NULL;
            t = SSL_explode_term(b_9);
            if(match_cons(t, sym__2))
              {
                ATerm p_10 = ATgetArgument(t, 0);
                n_5 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_5;
            t = foldr_3_0(u_1, w_1, term_to_graph_0_0, t);
          }
        }
      a_9 = t;
      t = (ATerm) ATinsert(CheckATermList(a_9), (ATerm) ATmakeAppl(sym__2, y_8, z_8));
    }
  }
  return(t);
}
ATerm l_5 (ATerm m_81 (ATerm), ATerm n_81 (ATerm), ATerm y_30, ATerm x_30, ATerm t)
{
  t = n_81(t);
  {
    ATerm z_1 (ATerm t)
    {
      ATerm e_11 = NULL;
      e_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_30), e_11);
      t = m_81(t);
      return(t);
    }
    t = fetch_1_0(z_1, t);
    t = not_null(x_30);
  }
  return(t);
}
ATerm m_5 (ATerm j_81 (ATerm), ATerm u_30, ATerm t_30, ATerm t)
{
  ATerm l_12 (ATerm t)
  {
    ATerm z_11 = NULL,b_12 = NULL,c_12 = NULL;
    z_11 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(t_30);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_12 = ATgetFirst((ATermList) t);
            c_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_10 = t;
          int u_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_11;
              {
                ATerm b_2 (ATerm t)
                {
                  t = not_null(t_30);
                  return(t);
                }
                t = l_5(j_81, b_2, not_null(b_12), not_null(c_12), t);
                t = l_12(t);
              }
              ;
              LocalPopChoice(u_10);
            }
          else
            {
              t = r_10;
              {
                ATerm l_6 = NULL,t_6 = NULL,l_2 = NULL;
                t = SSLgetAnnotations(z_11);
                l_6 = t;
                t = c_12;
                t = l_12(t);
                t_6 = t;
                t = (ATerm) ATinsert(CheckATermList(t_6), b_12);
                l_2 = t;
                t = SSLsetAnnotations(l_2, l_6);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(u_30);
  t = l_12(t);
  return(t);
}
ATerm foldr_3_0 (ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  t_12 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_12;
      t = k_83(t);
    }
  else
    {
      ATerm f_13 = NULL,g_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_12 = ATgetFirst((ATermList) t);
          v_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_12;
      t = m_83(t);
      f_13 = t;
      t = v_12;
      t = foldr_3_0(k_83, l_83, m_83, t);
      g_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_13, g_13);
      t = l_83(t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm if_verbose5_1_0 (ATerm k_91 (ATerm), ATerm t)
{
  ATerm k_13 = NULL;
  k_13 = t;
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_13 = NULL;
        t = term_x_10;
        t = get_config_0_0(t);
        m_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_13, term_y_10);
        t = geq_0_0(t);
        t = k_13;
        t = k_91(t);
        ;
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        t = k_13;
      }
  }
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_z_10;
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL;
  z_14 = t;
  t = new_0_0(t);
  y_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_14, z_14);
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL;
  b_15 = t;
  t = new_0_0(t);
  a_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_15, b_15);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL;
  f_15 = t;
  t = SSL_explode_term(f_15);
  if(match_cons(t, sym__2))
    {
      ATerm a_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_11 = ATgetArgument(t, 1);
        if(((ATgetType(b_11) == AT_LIST) && !(ATisEmpty(b_11))))
          {
            e_15 = ATgetFirst((ATermList) b_11);
            {
              ATerm c_11 = (ATerm) ATgetNext((ATermList) b_11);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_15;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL;
  h_15 = t;
  t = SSL_explode_term(h_15);
  if(match_cons(t, sym__2))
    {
      ATerm f_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_11 = ATgetArgument(t, 1);
        if(((ATgetType(g_11) == AT_LIST) && !(ATisEmpty(g_11))))
          {
            g_15 = ATgetFirst((ATermList) g_11);
            {
              ATerm i_11 = (ATerm) ATgetNext((ATermList) g_11);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_15;
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm n_15 = NULL,r_15 = NULL;
  if(match_cons(t, sym__2))
    {
      n_15 = ATgetArgument(t, 0);
      r_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(q_2, n_15, r_15, t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm t_15 = NULL;
  if(match_cons(t, sym__2))
    {
      t_15 = ATgetArgument(t, 0);
      if((t_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm q_7 = NULL,r_7 = NULL;
  if(match_cons(t, sym__2))
    {
      q_7 = ATgetArgument(t, 0);
      r_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(x_2, q_7, r_7, t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm s_7 = NULL;
  if(match_cons(t, sym__2))
    {
      s_7 = ATgetArgument(t, 0);
      if((s_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm term_to_tree_0_0 (ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL;
  ATerm a_16 (ATerm t)
  {
    ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,n_14 = NULL,o_14 = NULL,u_14 = NULL,v_14 = NULL,e_7 = NULL,o_2 = NULL,n_2 = NULL;
    v_14 = t;
    if(match_cons(t, sym__2))
      {
        k_14 = ATgetArgument(t, 0);
        n_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(v_14);
    j_14 = t;
    t = n_14;
    {
      ATerm j_11 = t;
      int k_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = map_1_0(f_2, t);
          ;
          LocalPopChoice(k_11);
        }
      else
        {
          t = j_11;
          t = SRTS_all(h_2, t);
        }
      o_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_14, o_14);
      n_2 = t;
      t = SSLsetAnnotations(n_2, j_14);
      u_14 = t;
      if(match_cons(t, sym__2))
        {
          v_13 = ATgetArgument(t, 0);
          w_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_14);
      u_13 = t;
      t = w_13;
      {
        ATerm l_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_2, t);
            ;
            LocalPopChoice(m_11);
          }
        else
          {
            t = l_11;
            t = SRTS_all(k_2, t);
          }
        x_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_13, x_13);
        o_2 = t;
        t = SSLsetAnnotations(o_2, u_13);
        i_14 = t;
        t = SSL_explode_term(u_14);
        if(match_cons(t, sym__2))
          {
            ATerm n_11 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_11) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm o_11 = ATgetArgument(t, 1);
              if(((ATgetType(o_11) == AT_LIST) && !(ATisEmpty(o_11))))
                {
                  ATerm p_11 = ATgetFirst((ATermList) o_11);
                  ATerm q_11 = (ATerm) ATgetNext((ATermList) o_11);
                  if(((ATgetType(q_11) == AT_LIST) && !(ATisEmpty(q_11))))
                    {
                      e_7 = ATgetFirst((ATermList) q_11);
                      {
                        ATerm r_11 = (ATerm) ATgetNext((ATermList) q_11);
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = e_7;
        {
          ATerm s_11 = t;
          int t_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = foldr_3_0(m_2, p_2, a_16, t);
              ;
              LocalPopChoice(t_11);
            }
          else
            {
              t = s_11;
              {
                ATerm j_7 = NULL;
                t = SSL_explode_term(e_7);
                if(match_cons(t, sym__2))
                  {
                    ATerm u_11 = ATgetArgument(t, 0);
                    j_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_7;
                t = foldr_3_0(v_2, w_2, a_16, t);
              }
            }
          t_13 = t;
          t = (ATerm) ATinsert(CheckATermList(t_13), i_14);
        }
      }
    }
    return(t);
  }
  t = if_verbose5_1_0(c_2, t);
  if(((s_13 != NULL) && (s_13 != t)))
    _fail(t);
  else
    s_13 = t;
  t = new_0_0(t);
  if(((r_13 != NULL) && (r_13 != t)))
    _fail(t);
  else
    r_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_13), not_null(s_13));
  t = a_16(t);
  return(t);
}
ATerm to_adot_0_0 (ATerm t)
{
  ATerm d_16 = NULL;
  d_16 = t;
  {
    ATerm v_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_7;
        t = get_config_0_0(t);
        t = d_16;
        t = term_to_tree_0_0(t);
        ;
        LocalPopChoice(w_11);
      }
    else
      {
        t = v_11;
        t = term_l_7;
        t = get_config_0_0(t);
        t = d_16;
        t = term_to_graph_0_0(t);
      }
    t = graph_to_adot_0_0(t);
  }
  return(t);
}
ATerm p_5 (ATerm t_43, ATerm u_43, ATerm t)
{
  ATerm n_16 = NULL;
  t = SSL_fputc(t_43, u_43);
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_16);
  return(t);
}
ATerm q_5 (ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm r_16 = NULL;
  t = SSL_write_term_to_stream_text(h_47, i_47);
  r_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_16);
  return(t);
}
ATerm s_5 (ATerm w_89 (ATerm), ATerm w_424, ATerm l_47, ATerm t)
{
  ATerm t_16 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_424, term_x_11);
  t = open_stream_0_0(t);
  t_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_16, l_47);
  t = w_89(t);
  t = fclose_0_0(t);
  t = l_47;
  return(t);
}
ATerm r_5 (ATerm d_47, ATerm e_47, ATerm t)
{
  ATerm v_16 = NULL;
  t = SSL_write_term_to_stream_baf(d_47, e_47);
  v_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_16);
  return(t);
}
ATerm a_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm n_8 = NULL,v_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_11 = ATgetArgument(t, 0);
      if(match_cons(y_11, sym_Stream_1))
        {
          n_8 = ATgetArgument(y_11, 0);
        }
      else
        _fail(t);
      v_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(n_8, v_8, t);
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL,r_9 = NULL,t_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_12 = ATgetArgument(t, 0);
      if(match_cons(a_12, sym_Stream_1))
        {
          t_9 = ATgetArgument(a_12, 0);
        }
      else
        _fail(t);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5(t_9, u_9, t);
  o_9 = t;
  t = term_d_12;
  p_9 = t;
  t = o_9;
  if(match_cons(t, sym_Stream_1))
    {
      r_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_12, o_9);
  t = p_5(p_9, r_9, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL,i_17 = NULL,p_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,x_17 = NULL,y_17 = NULL,h_19 = NULL,i_19 = NULL,s_2 = NULL,r_2 = NULL;
  if(((c_17 != NULL) && (c_17 != t)))
    _fail(t);
  else
    c_17 = t;
  if(match_cons(t, sym__2))
    {
      if(((t_17 != NULL) && (t_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_17 = ATgetArgument(t, 0);
      if(((x_17 != NULL) && (x_17 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(c_17));
  if(((s_17 != NULL) && (s_17 != t)))
    _fail(t);
  else
    s_17 = t;
  t = not_null(t_17);
  {
    ATerm e_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((b_17 != NULL) && (b_17 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(y_2, t);
        ;
        LocalPopChoice(h_12);
      }
    else
      {
        t = e_12;
        t = term_i_12;
        if(((b_17 != NULL) && (b_17 != t)))
          _fail(t);
        else
          b_17 = t;
      }
    if(((y_17 != NULL) && (y_17 != t)))
      _fail(t);
    else
      y_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_17), not_null(x_17));
    if(((r_2 != NULL) && (r_2 != t)))
      _fail(t);
    else
      r_2 = t;
    t = SSLsetAnnotations(not_null(r_2), not_null(s_17));
    t = not_null(c_17);
    if(match_cons(t, sym__2))
      {
        if(((i_17 != NULL) && (i_17 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          i_17 = ATgetArgument(t, 0);
        if(((p_17 != NULL) && (p_17 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          p_17 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(c_17));
    if(((d_17 != NULL) && (d_17 != t)))
      _fail(t);
    else
      d_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_17), (ATerm) ATmakeAppl(sym__2, not_null(b_17), not_null(p_17)));
    if(((s_2 != NULL) && (s_2 != t)))
      _fail(t);
    else
      s_2 = t;
    t = SSLsetAnnotations(not_null(s_2), not_null(d_17));
    if(((r_17 != NULL) && (r_17 != t)))
      _fail(t);
    else
      r_17 = t;
    if(match_cons(t, sym__2))
      {
        if(((h_19 != NULL) && (h_19 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          h_19 = ATgetArgument(t, 0);
        if(((i_19 != NULL) && (i_19 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          i_19 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm j_12 = t;
      int k_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_7 = NULL,a_8 = NULL,c_8 = NULL,f_8 = NULL,k_8 = NULL,t_2 = NULL;
          t = SSLgetAnnotations(not_null(r_17));
          x_7 = t;
          t = not_null(h_19);
          t = fetch_1_0(a_3, t);
          a_8 = t;
          t = not_null(i_19);
          if(match_cons(t, sym__2))
            {
              f_8 = ATgetArgument(t, 0);
              k_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_5(b_3, f_8, k_8, t);
          c_8 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_8, c_8);
          t_2 = t;
          t = SSLsetAnnotations(t_2, x_7);
          ;
          LocalPopChoice(k_12);
        }
      else
        {
          t = j_12;
          {
            ATerm f_9 = NULL,j_9 = NULL,l_9 = NULL,n_9 = NULL,u_2 = NULL;
            t = SSLgetAnnotations(not_null(r_17));
            f_9 = t;
            t = not_null(i_19);
            if(match_cons(t, sym__2))
              {
                l_9 = ATgetArgument(t, 0);
                n_9 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = s_5(j_3, l_9, n_9, t);
            j_9 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_19), j_9);
            u_2 = t;
            t = SSLsetAnnotations(u_2, f_9);
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
ATerm apply_strategy_1_0 (ATerm y_92 (ATerm), ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,v_19 = NULL,w_19 = NULL;
  w_19 = t;
  t = dtime_0_0(t);
  t = w_19;
  t = y_92(t);
  v_19 = t;
  t = dtime_0_0(t);
  r_19 = t;
  t = v_19;
  if(match_cons(t, sym__2))
    {
      s_19 = ATgetArgument(t, 0);
      t_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_19), (ATerm) ATmakeAppl(sym_Runtime_1, r_19)), t_19);
  return(t);
}
ATerm o_20 (ATerm h_20, ATerm t)
{
  t = SSL_fclose(h_20);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_20 = NULL,m_20 = NULL;
  m_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_20 = ATgetArgument(t, 0);
      {
        ATerm n_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_20);
            ;
            LocalPopChoice(o_12);
          }
        else
          {
            t = n_12;
            t = o_20(m_20, t);
          }
      }
    }
  else
    {
      t = o_20(m_20, t);
    }
  return(t);
}
ATerm t_5 (ATerm j_47, ATerm t)
{
  t = SSL_read_term_from_stream(j_47);
  return(t);
}
ATerm u_5 (ATerm v_43, ATerm w_43, ATerm t)
{
  ATerm p_20 = NULL;
  t = SSL_fopen(v_43, w_43);
  p_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_20);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_20 = NULL;
  t = SSL_stdin_stream();
  q_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_20);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_20 = NULL;
  t = SSL_stdout_stream();
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_20);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_20 = NULL;
  t = SSL_stderr_stream();
  s_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_20);
  return(t);
}
ATerm u_22 (ATerm c_21, ATerm t)
{
  ATerm d_21 = NULL;
  t = SSL_explode_term(c_21);
  if(match_cons(t, sym__2))
    {
      ATerm q_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_12 = ATgetArgument(t, 1);
        if(((ATgetType(r_12) == AT_LIST) && !(ATisEmpty(r_12))))
          {
            d_21 = ATgetFirst((ATermList) r_12);
            {
              ATerm s_12 = (ATerm) ATgetNext((ATermList) r_12);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_21;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_21;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_21;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_21;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm v_22 (ATerm j_21, ATerm m_21, ATerm p_21, ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL,z_21 = NULL,l_3 = NULL;
  t = SSLgetAnnotations(p_21);
  u_21 = t;
  t = j_21;
  if(match_cons(t, sym_Path_1))
    {
      z_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_21, m_21);
  l_3 = t;
  t = SSLsetAnnotations(l_3, u_21);
  if(match_cons(t, sym__2))
    {
      s_21 = ATgetArgument(t, 0);
      t_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(s_21, t_21, t);
  return(t);
}
ATerm w_22 (ATerm e_22, ATerm i_22, ATerm j_22, ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,p_22 = NULL,n_3 = NULL;
  t = SSLgetAnnotations(j_22);
  m_22 = t;
  t = SSL_is_string(e_22);
  p_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_22, i_22);
  n_3 = t;
  t = SSLsetAnnotations(n_3, m_22);
  if(match_cons(t, sym__2))
    {
      k_22 = ATgetArgument(t, 0);
      l_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(k_22, l_22, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_12 = ATgetArgument(t, 0);
      ATerm x_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  r_22 = t;
  if(match_cons(t, sym__2))
    {
      s_22 = ATgetArgument(t, 0);
      t_22 = ATgetArgument(t, 1);
      {
        ATerm y_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_22(r_22, t);
            ;
            LocalPopChoice(z_12);
          }
        else
          {
            t = y_12;
            {
              ATerm a_13 = t;
              int b_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_22(s_22, t_22, r_22, t);
                  ;
                  LocalPopChoice(b_13);
                }
              else
                {
                  t = a_13;
                  t = w_22(s_22, t_22, r_22, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_22(r_22, t);
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_c_13;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
  ATerm d_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_23 = NULL;
      c_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_23, term_h_13);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(e_13);
    }
  else
    {
      t = d_13;
      t = debug_1_0(k_3, t);
      _fail(t);
    }
  y_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_5(z_22, t);
  x_22 = t;
  t = y_22;
  t = fclose_0_0(t);
  t = x_22;
  return(t);
}
ATerm fetch_1_0 (ATerm p_77 (ATerm), ATerm t)
{
  ATerm u_24 (ATerm t)
  {
    ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
    r_24 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_24 = ATgetFirst((ATermList) t);
        t_24 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_13 = t;
      int j_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_10 = NULL,n_10 = NULL,t_3 = NULL;
          t = SSLgetAnnotations(r_24);
          k_10 = t;
          t = s_24;
          t = p_77(t);
          n_10 = t;
          t = (ATerm) ATinsert(CheckATermList(t_24), n_10);
          t_3 = t;
          t = SSLsetAnnotations(t_3, k_10);
          ;
          LocalPopChoice(j_13);
        }
      else
        {
          t = i_13;
          {
            ATerm d_11 = NULL,h_11 = NULL,u_3 = NULL;
            t = SSLgetAnnotations(r_24);
            d_11 = t;
            t = t_24;
            t = u_24(t);
            h_11 = t;
            t = (ATerm) ATinsert(CheckATermList(h_11), s_24);
            u_3 = t;
            t = SSLsetAnnotations(u_3, d_11);
          }
        }
    }
    return(t);
  }
  t = u_24(t);
  return(t);
}
ATerm o_5 (ATerm j_38, ATerm k_38, ATerm t)
{
  t = SSL_strcat(j_38, k_38);
  return(t);
}
ATerm debug_1_0 (ATerm u_89 (ATerm), ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL;
  x_24 = t;
  t = u_89(t);
  y_24 = t;
  t = term_h_3;
  z_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_24), y_24);
  a_25 = t;
  t = SSL_printnl(z_24, a_25);
  t = x_24;
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm l_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(n_13);
    }
  else
    {
      t = l_13;
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_p_13;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_25 = NULL;
      h_25 = t;
      t = SSL_is_string(h_25);
      ;
      LocalPopChoice(y_13);
    }
  else
    {
      t = q_13;
      {
        ATerm z_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(m_3, t);
            ;
            LocalPopChoice(a_14);
          }
        else
          {
            t = z_13;
            {
              ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
              s_25 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_25 = ATgetArgument(t, 0);
                  t = t_25;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_25 = ATgetArgument(t, 0);
                      t = t_25;
                      {
                        ATerm b_14 = t;
                        int c_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(c_14);
                          }
                        else
                          {
                            t = b_14;
                            t = debug_1_0(p_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_25 = NULL,z_25 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_25 = ATgetArgument(t, 0);
                          u_25 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_25;
                      t = eval_config_0_0(t);
                      y_25 = t;
                      t = u_25;
                      t = eval_config_0_0(t);
                      z_25 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_25, z_25);
                      t = o_5(y_25, z_25, t);
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
  ATerm d_26 = NULL,e_26 = NULL;
  d_26 = t;
  t = term_d_14;
  e_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_14, d_26);
  t = x_5(e_26, d_26, t);
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_26 = NULL,i_26 = NULL;
        t = eval_config_0_0(t);
        f_26 = t;
        t = term_d_14;
        i_26 = t;
        t = SSL_table_put(i_26, d_26, f_26);
        t = f_26;
        ;
        LocalPopChoice(g_14);
      }
    else
      {
        t = f_14;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm h_91 (ATerm), ATerm t)
{
  ATerm m_26 = NULL;
  m_26 = t;
  {
    ATerm m_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_26 = NULL;
        t = term_x_10;
        t = get_config_0_0(t);
        o_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_26, term_q_14);
        t = geq_0_0(t);
        t = m_26;
        t = h_91(t);
        ;
        LocalPopChoice(p_14);
      }
    else
      {
        t = m_14;
        t = m_26;
      }
  }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm r_26 = NULL;
  r_26 = t;
  if(match_string(t, "-k"))
    {
      t = r_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_26;
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL;
  s_26 = t;
  t = SSL_string_to_int(s_26);
  t_26 = t;
  t = term_r_14;
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_14, t_26);
  t = a_6(u_26, t_26, t);
  t = s_26;
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_s_14;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_3, r_3, s_3, t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm w_26 = NULL;
  w_26 = t;
  if(match_string(t, "-S"))
    {
      t = w_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_26;
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL;
  t = term_x_10;
  x_26 = t;
  t = term_t_14;
  y_26 = t;
  t = term_x_14;
  t = a_6(x_26, y_26, t);
  t = term_c_15;
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_d_15;
  return(t);
}
ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
  z_26 = t;
  t = SSL_string_to_int(z_26);
  a_27 = t;
  t = term_x_10;
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_10, a_27);
  t = a_6(b_27, a_27, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_26);
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_j_15;
  return(t);
}
ATerm n_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL;
  t = term_k_15;
  c_27 = t;
  t = term_c_1;
  d_27 = t;
  t = term_l_15;
  t = a_6(c_27, d_27, t);
  t = term_m_15;
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_o_15;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_3, w_3, y_3, t);
      ;
      LocalPopChoice(q_15);
    }
  else
    {
      t = p_15;
      {
        ATerm s_15 = t;
        int u_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_3, c_4, h_4, t);
            ;
            LocalPopChoice(u_15);
          }
        else
          {
            t = s_15;
            t = Option_3_0(n_4, r_4, t_4, t);
          }
      }
    }
  return(t);
}
ATerm a_6 (ATerm k_48, ATerm l_48, ATerm t)
{
  ATerm e_27 = NULL;
  t = term_d_14;
  e_27 = t;
  t = SSL_table_put(e_27, k_48, l_48);
  t = (ATerm) ATmakeAppl(sym__3, term_d_14, k_48, l_48);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
      t = term_c_1;
      t = d_0(t);
      j_27 = t;
      t = term_v_15;
      k_27 = t;
      t = term_w_15;
      l_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_15, term_w_15, j_27);
      t = y_5(k_27, l_27, j_27, t);
      _fail(t);
    }
  else
    {
      ATerm o_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_27 = ATgetFirst((ATermList) t);
          i_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_27;
      t = a_0(t);
      t = term_c_1;
      t = c_0(t);
      o_27 = t;
      t = (ATerm) ATinsert(CheckATermList(i_27), o_27);
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm q_27 = NULL;
  q_27 = t;
  if(match_string(t, "-o"))
    {
      t = q_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_27;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL;
  r_27 = t;
  t = term_x_15;
  s_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_15, r_27);
  t = a_6(s_27, r_27, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_27);
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_y_15;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, v_4, x_4, t);
  return(t);
}
ATerm y_5 (ATerm i_53, ATerm j_53, ATerm h_53, ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_53, j_53);
  {
    ATerm z_15 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_16 = ATgetArgument(t, 0);
            ATerm e_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_53, j_53);
        t = x_5(i_53, j_53, t);
        ;
        LocalPopChoice(b_16);
      }
    else
      {
        t = z_15;
        t = (ATerm) ATempty;
      }
    v_27 = t;
    t = (ATerm) ATinsert(CheckATermList(v_27), h_53);
    w_27 = t;
    t = SSL_table_put(i_53, j_53, w_27);
    t = u_27;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
      t = term_c_1;
      t = j_0(t);
      h_28 = t;
      t = term_v_15;
      i_28 = t;
      t = term_w_15;
      j_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_15, term_w_15, h_28);
      t = y_5(i_28, j_28, h_28, t);
      _fail(t);
    }
  else
    {
      ATerm n_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_28 = ATgetFirst((ATermList) t);
          e_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_28 = ATgetFirst((ATermList) t);
          g_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_28;
      t = h_0(t);
      t = f_28;
      t = i_0(t);
      n_28 = t;
      t = (ATerm) ATinsert(CheckATermList(g_28), n_28);
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm p_28 = NULL;
  p_28 = t;
  if(match_string(t, "-i"))
    {
      t = p_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_28;
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL;
  q_28 = t;
  t = term_f_16;
  r_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_16, q_28);
  t = a_6(r_28, q_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_28);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_g_16;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_4, z_4, d_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_1;
  t = whoami_0_0(t);
  s_28 = t;
  t = term_h_3;
  u_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_16), s_28);
  v_28 = t;
  t = SSL_printnl(u_28, v_28);
  t = term_k_7;
  t_28 = t;
  t = SSL_exit(t_28);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_i_16;
  t = get_config_0_0(t);
  return(t);
}
ATerm v_5 (ATerm t_40, ATerm u_40, ATerm t)
{
  ATerm j_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_40, u_40);
      ;
      LocalPopChoice(k_16);
    }
  else
    {
      t = j_16;
      t = SSL_addr(t_40, u_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
  x_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_28;
      t = i_83(t);
    }
  else
    {
      ATerm c_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_28 = ATgetFirst((ATermList) t);
          z_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_28;
      t = foldr_2_0(i_83, j_83, t);
      c_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_28, c_29);
      t = j_83(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_t_14;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm m_12 = NULL,p_12 = NULL;
  if(match_cons(t, sym__2))
    {
      m_12 = ATgetArgument(t, 0);
      p_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(m_12, p_12, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_29 = NULL,f_12 = NULL,g_12 = NULL;
  t = times_0_0(t);
  g_12 = t;
  t = SSL_explode_term(g_12);
  if(match_cons(t, sym__2))
    {
      ATerm l_16 = ATgetArgument(t, 0);
      f_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_12;
  t = foldr_2_0(e_5, f_5, t);
  f_29 = t;
  t = SSL_TicksToSeconds(f_29);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
  q_29 = t;
  if(match_cons(t, sym__2))
    {
      r_29 = ATgetArgument(t, 0);
      s_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_29;
        if((r_29 != t))
          {
            _fail(t);
          }
        t = q_29;
        ;
        LocalPopChoice(o_16);
      }
    else
      {
        t = m_16;
        t = (ATerm) ATmakeAppl(sym__2, r_29, s_29);
        {
          ATerm p_16 = t;
          int q_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_29, s_29);
              ;
              LocalPopChoice(q_16);
            }
          else
            {
              t = p_16;
              t = SSL_gtr(r_29, s_29);
            }
          t = (ATerm) ATmakeAppl(sym__2, r_29, s_29);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_91 (ATerm), ATerm t)
{
  ATerm w_29 = NULL;
  w_29 = t;
  {
    ATerm s_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_29 = NULL;
        t = term_x_10;
        t = get_config_0_0(t);
        y_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_29, term_k_7);
        t = geq_0_0(t);
        t = w_29;
        t = g_91(t);
        ;
        LocalPopChoice(u_16);
      }
    else
      {
        t = s_16;
        t = w_29;
      }
  }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,d_30 = NULL,e_30 = NULL;
  t = run_time_0_0(t);
  a_30 = t;
  t = term_c_1;
  t = whoami_0_0(t);
  b_30 = t;
  t = term_h_3;
  d_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_16), a_30), term_w_16), b_30);
  e_30 = t;
  t = SSL_printnl(d_30, e_30);
  t = (ATerm) ATmakeAppl(sym__2, term_h_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_16), a_30), term_w_16), b_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_14;
  f_30 = t;
  t = SSL_exit(f_30);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL;
  o_30 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_30;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_30 = ATgetArgument(t, 0);
          {
            ATerm o_13 = NULL,x_3 = NULL;
            t = SSLgetAnnotations(o_30);
            o_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_30);
            x_3 = t;
            t = SSLsetAnnotations(x_3, o_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_30;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_93 (ATerm), ATerm t)
{
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_16);
    }
  else
    {
      t = y_16;
      t = fetch_1_0(w_5, t);
    }
  t = w_93(t);
  return(t);
}
ATerm map_1_0 (ATerm f_77 (ATerm), ATerm t)
{
  ATerm j_31 (ATerm t)
  {
    ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL;
    g_31 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_31;
      }
    else
      {
        ATerm e_14 = NULL,h_14 = NULL,l_14 = NULL,e_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_31 = ATgetFirst((ATermList) t);
            i_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_31);
        e_14 = t;
        t = h_31;
        t = f_77(t);
        h_14 = t;
        t = i_31;
        t = j_31(t);
        l_14 = t;
        t = (ATerm) ATinsert(CheckATermList(l_14), h_14);
        e_4 = t;
        t = SSLsetAnnotations(e_4, e_14);
      }
    return(t);
  }
  t = j_31(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_31 = ATgetFirst((ATermList) t);
      n_31 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_31 = NULL,s_31 = NULL;
        ATerm z_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_31)), not_null(s_31));
          return(t);
        }
        t = not_null(n_31);
        t = g_0(t);
        if(((r_31 != NULL) && (r_31 != t)))
          _fail(t);
        else
          r_31 = t;
        t = not_null(m_31);
        t = e_0(t);
        if(((s_31 != NULL) && (s_31 != t)))
          _fail(t);
        else
          s_31 = t;
        t = not_null(n_31);
        t = reverse_acc_2_0(e_0, z_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_1;
      t = g_0(t);
    }
  return(t);
}
ATerm x_5 (ATerm z_54, ATerm a_55, ATerm t)
{
  t = SSL_table_get(z_54, a_55);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,k_4 = NULL;
  c_32 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_32);
  a_32 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_32);
  k_4 = t;
  t = SSLsetAnnotations(k_4, a_32);
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm e_32 = NULL;
  e_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_32), term_e_17);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL;
  ATerm f_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_17);
    }
  else
    {
      t = f_17;
      t = fetch_1_0(c_6, t);
    }
  t = term_h_17;
  t = echo_0_0(t);
  t = term_v_15;
  y_31 = t;
  t = term_w_15;
  z_31 = t;
  t = term_j_17;
  t = x_5(y_31, z_31, t);
  t = reverse_acc_2_0(_id, h_6, t);
  t = map_1_0(i_6, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
  g_32 = t;
  {
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_32;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_17 = ATgetFirst((ATermList) t);
                ATerm n_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_32;
          }
        ;
        LocalPopChoice(l_17);
      }
    else
      {
        t = k_17;
        t = (ATerm) ATinsert(ATempty, g_32);
      }
    h_32 = t;
    t = term_i_12;
    i_32 = t;
    t = SSL_printnl(i_32, h_32);
    t = g_32;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_i_16;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm m_32 = NULL,n_32 = NULL;
  t = term_o_17;
  m_32 = t;
  t = term_c_1;
  n_32 = t;
  t = term_q_17;
  t = a_6(m_32, n_32, t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_u_17;
  return(t);
}
ATerm n_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL;
  t = term_o_17;
  q_32 = t;
  t = term_c_1;
  r_32 = t;
  t = term_q_17;
  t = a_6(q_32, r_32, t);
  t = term_v_17;
  o_32 = t;
  t = term_c_1;
  p_32 = t;
  t = term_w_17;
  t = a_6(o_32, p_32, t);
  t = term_z_17;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_a_18;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_6, k_6, m_6, t);
      ;
      LocalPopChoice(c_18);
    }
  else
    {
      t = b_18;
      t = Option_3_0(n_6, o_6, p_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_62 (ATerm), ATerm q_62 (ATerm), ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,j_5 = NULL;
  x_32 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_32 = ATgetFirst((ATermList) t);
      u_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_32);
  s_32 = t;
  t = t_32;
  t = p_62(t);
  v_32 = t;
  t = u_32;
  t = q_62(t);
  w_32 = t;
  t = (ATerm) ATinsert(CheckATermList(w_32), v_32);
  j_5 = t;
  t = SSLsetAnnotations(j_5, s_32);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_95 (ATerm), ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,h_33 = NULL,i_33 = NULL,b_6 = NULL;
  if(((c_33 != NULL) && (c_33 != t)))
    _fail(t);
  else
    c_33 = t;
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_18;
        t = z_95(t);
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
      }
    t = not_null(c_33);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((e_33 != NULL) && (e_33 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          e_33 = ATgetFirst((ATermList) t);
        if(((f_33 != NULL) && (f_33 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          f_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(c_33));
    if(((d_33 != NULL) && (d_33 != t)))
      _fail(t);
    else
      d_33 = t;
    t = term_i_16;
    if(((i_33 != NULL) && (i_33 != t)))
      _fail(t);
    else
      i_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_i_16, not_null(e_33));
    t = a_6(not_null(i_33), not_null(e_33), t);
    t = not_null(f_33);
    {
      ATerm t_33 (ATerm t)
      {
        ATerm g_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_18 = t;
            int j_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_33 = NULL;
                l_33 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = l_33;
                ;
                LocalPopChoice(j_18);
              }
            else
              {
                t = i_18;
                t = z_95(t);
                t = Cons_2_0(_id, t_33, t);
              }
            ;
            LocalPopChoice(h_18);
          }
        else
          {
            t = g_18;
            {
              ATerm p_33 = NULL,q_33 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_33 = ATgetFirst((ATermList) t);
                  q_33 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_33), (ATerm) ATmakeAppl(sym_Undefined_1, p_33));
            }
          }
        return(t);
      }
      t = t_33(t);
      if(((h_33 != NULL) && (h_33 != t)))
        _fail(t);
      else
        h_33 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(h_33)), (ATerm) ATmakeAppl(sym_Program_1, not_null(e_33)));
      if(((b_6 != NULL) && (b_6 != t)))
        _fail(t);
      else
        b_6 = t;
      t = SSLsetAnnotations(not_null(b_6), not_null(d_33));
    }
  }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm f_34 = NULL;
  f_34 = t;
  if(match_string(t, "--help"))
    {
      t = f_34;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_34;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_34;
        }
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL;
  t = term_a_17;
  g_34 = t;
  t = term_c_1;
  h_34 = t;
  t = term_k_18;
  t = a_6(g_34, h_34, t);
  t = term_l_18;
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_m_18;
  return(t);
}
ATerm v_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_95 (ATerm), ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL;
  if(((a_34 != NULL) && (a_34 != t)))
    _fail(t);
  else
    a_34 = t;
  t = term_v_15;
  if(((c_34 != NULL) && (c_34 != t)))
    _fail(t);
  else
    c_34 = t;
  t = term_w_15;
  if(((d_34 != NULL) && (d_34 != t)))
    _fail(t);
  else
    d_34 = t;
  t = (ATerm) ATempty;
  if(((e_34 != NULL) && (e_34 != t)))
    _fail(t);
  else
    e_34 = t;
  t = SSL_table_put(not_null(c_34), not_null(d_34), not_null(e_34));
  t = not_null(a_34);
  {
    ATerm q_6 (ATerm t)
    {
      ATerm n_18 = t;
      int o_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_95(t);
          ;
          LocalPopChoice(o_18);
        }
      else
        {
          t = n_18;
          {
            ATerm p_18 = t;
            int q_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_6, s_6, u_6, t);
                ;
                LocalPopChoice(q_18);
              }
            else
              {
                t = p_18;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_6, t);
    {
      ATerm r_18 = t;
      int s_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_34 = NULL;
          o_34 = t;
          {
            ATerm t_18 = t;
            int u_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_14 = NULL;
                t = o_34;
                {
                  ATerm v_18 = t;
                  int w_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_a_17;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(w_18);
                    }
                  else
                    {
                      t = v_18;
                      t = fetch_1_0(v_6, t);
                    }
                  t = o_34;
                  t = default_system_usage_0_0(t);
                  t = term_t_14;
                  w_14 = t;
                  t = SSL_exit(w_14);
                }
                ;
                LocalPopChoice(u_18);
              }
            else
              {
                t = t_18;
                {
                  ATerm i_15 = NULL;
                  t = term_o_17;
                  t = get_config_0_0(t);
                  t = o_34;
                  t = default_system_about_0_0(t);
                  t = term_t_14;
                  i_15 = t;
                  t = SSL_exit(i_15);
                }
              }
          }
          ;
          LocalPopChoice(s_18);
        }
      else
        {
          t = r_18;
          {
            ATerm x_18 = t;
            int y_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
                ATerm w_6 (ATerm t)
                {
                  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,d_6 = NULL;
                  u_34 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      t_34 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_34);
                  s_34 = t;
                  t = t_34;
                  if(((y_33 != NULL) && (y_33 != t)))
                    _fail(t);
                  else
                    y_33 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, t_34);
                  d_6 = t;
                  t = SSLsetAnnotations(d_6, s_34);
                  return(t);
                }
                t = fetch_1_0(w_6, t);
                t = term_h_3;
                if(((q_34 != NULL) && (q_34 != t)))
                  _fail(t);
                else
                  q_34 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_33)), term_z_18);
                if(((r_34 != NULL) && (r_34 != t)))
                  _fail(t);
                else
                  r_34 = t;
                t = SSL_printnl(not_null(q_34), not_null(r_34));
                t = (ATerm) ATmakeAppl(sym__2, term_h_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_33)), term_z_18));
                t = default_system_usage_0_0(t);
                t = term_k_7;
                if(((p_34 != NULL) && (p_34 != t)))
                  _fail(t);
                else
                  p_34 = t;
                t = SSL_exit(not_null(p_34));
                ;
                LocalPopChoice(y_18);
              }
            else
              {
                t = x_18;
              }
          }
        }
      if(((z_33 != NULL) && (z_33 != t)))
        _fail(t);
      else
        z_33 = t;
      t = term_v_15;
      if(((b_34 != NULL) && (b_34 != t)))
        _fail(t);
      else
        b_34 = t;
      t = SSL_table_destroy(not_null(b_34));
      t = not_null(z_33);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL;
  t = parse_options_1_0(y_93, t);
  z_34 = t;
  t = term_a_19;
  c_35 = t;
  t = SSL_table_create(c_35);
  t = term_a_19;
  a_35 = t;
  t = term_b_19;
  b_35 = t;
  t = SSL_table_put(a_35, b_35, z_34);
  t = z_34;
  t = a_94(t);
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_93, t);
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        {
          ATerm e_19 = t;
          int f_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_94(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(f_19);
            }
          else
            {
              t = e_19;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = if_verbose2_1_0(d_7, t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL;
  t = term_g_19;
  d_35 = t;
  t = term_c_1;
  e_35 = t;
  t = term_j_19;
  t = a_6(d_35, e_35, t);
  t = term_k_19;
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_l_19;
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL;
  f_35 = t;
  t = term_i_16;
  t = get_config_0_0(t);
  g_35 = t;
  t = term_h_3;
  h_35 = t;
  t = (ATerm) ATinsert(ATempty, g_35);
  i_35 = t;
  t = SSL_printnl(h_35, i_35);
  t = f_35;
  return(t);
}
ATerm iowrap_3_0 (ATerm h_93 (ATerm), ATerm i_93 (ATerm), ATerm j_93 (ATerm), ATerm t)
{
  ATerm x_6 (ATerm t)
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_93(t);
        ;
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        {
          ATerm o_19 = t;
          int p_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(p_19);
            }
          else
            {
              t = o_19;
              {
                ATerm q_19 = t;
                int u_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(u_19);
                  }
                else
                  {
                    t = q_19;
                    {
                      ATerm x_19 = t;
                      int y_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(a_7, b_7, c_7, t);
                          ;
                          LocalPopChoice(y_19);
                        }
                      else
                        {
                          t = x_19;
                          {
                            ATerm z_19 = t;
                            int a_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(a_20);
                              }
                            else
                              {
                                t = z_19;
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
  ATerm z_6 (ATerm t)
  {
    ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
    if(((k_35 != NULL) && (k_35 != t)))
      _fail(t);
    else
      k_35 = t;
    {
      ATerm b_20 = t;
      int c_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((j_35 != NULL) && (j_35 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_35 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(f_7, t);
          ;
          LocalPopChoice(c_20);
        }
      else
        {
          t = b_20;
          t = term_d_20;
          if(((j_35 != NULL) && (j_35 != t)))
            _fail(t);
          else
            j_35 = t;
        }
      t = not_null(j_35);
      t = ReadFromFile_0_0(t);
      if(((l_35 != NULL) && (l_35 != t)))
        _fail(t);
      else
        l_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_35), not_null(l_35));
      t = apply_strategy_1_0(h_93, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(x_6, j_93, y_6, z_6, t);
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm m_35 = NULL;
  if(match_cons(t, sym__2))
    {
      m_35 = ATgetArgument(t, 0);
      {
        ATerm e_20 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = m_35;
  t = to_adot_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(g_7, term_to_adot_options_0_0, default_usage_0_0, t);
  return(t);
}
