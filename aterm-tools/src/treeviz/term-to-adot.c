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
ATerm term_y_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_x_21;
ATerm term_v_21;
ATerm term_q_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_q_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_o_19;
ATerm term_l_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_d_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_j_17;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_t_15;
ATerm term_j_15;
ATerm term_d_15;
ATerm term_a_15;
ATerm term_e_14;
ATerm term_z_13;
ATerm term_r_13;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_q_10;
ATerm term_m_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_z_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_r_8;
ATerm term_m_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_g_8;
ATerm term_n_7;
ATerm term_q_1;
ATerm term_c_1;
void init_constant_terms (void)
{
  ATprotect(&(term_c_1));
  term_c_1 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_1));
  term_q_1 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_c_1);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym__2, term_x_8, term_c_1);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_AttrId_2, term_m_10, term_u_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym__2, term_f_12, term_g_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym__2, term_q_16, term_c_1);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym__2, term_j_17, term_p_17);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym__2, term_d_20, term_c_1);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym__2, term_g_20, term_c_1);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym__2, term_l_19, term_c_1);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_c_1);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm b_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm h_1 (ATerm);
ATerm k_1 (ATerm);
ATerm term_to_adot_options_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm m_1 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm at_end_1_0 (ATerm v_77 (ATerm), ATerm);
ATerm i_3 (ATerm c_2, ATerm);
ATerm conc_0_0 (ATerm);
ATerm EdgeToDot_0_0 (ATerm);
ATerm k_5 (ATerm s_23, ATerm t_23, ATerm);
ATerm r_1 (ATerm);
ATerm graph_to_adot_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm a_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm h_2 (ATerm);
ATerm term_to_graph_0_0 (ATerm);
ATerm l_5 (ATerm m_81 (ATerm), ATerm n_81 (ATerm), ATerm y_30, ATerm x_30, ATerm);
ATerm m_5 (ATerm j_81 (ATerm), ATerm u_30, ATerm t_30, ATerm);
ATerm foldr_3_0 (ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm k_91 (ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm j_3 (ATerm);
ATerm l_3 (ATerm);
ATerm term_to_tree_0_0 (ATerm);
ATerm to_adot_0_0 (ATerm);
ATerm p_5 (ATerm t_43, ATerm u_43, ATerm);
ATerm q_5 (ATerm h_47, ATerm i_47, ATerm);
ATerm s_5 (ATerm w_89 (ATerm), ATerm w_424, ATerm l_47, ATerm);
ATerm r_5 (ATerm d_47, ATerm e_47, ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm y_92 (ATerm), ATerm);
ATerm m_12 (ATerm g_12, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm t_5 (ATerm j_47, ATerm);
ATerm u_5 (ATerm v_43, ATerm w_43, ATerm);
ATerm _2_0 (ATerm a_58 (ATerm), ATerm b_58 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm x_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm p_77 (ATerm), ATerm);
ATerm o_5 (ATerm j_38, ATerm k_38, ATerm);
ATerm debug_1_0 (ATerm u_89 (ATerm), ATerm);
ATerm y_3 (ATerm);
ATerm c_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm h_91 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm s_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm a_6 (ATerm k_48, ATerm l_48, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm u_4 (ATerm);
ATerm x_4 (ATerm);
ATerm z_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm y_5 (ATerm i_53, ATerm j_53, ATerm h_53, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm v_5 (ATerm t_40, ATerm u_40, ATerm);
ATerm foldr_2_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm g_91 (ATerm), ATerm);
ATerm f_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm g_5 (ATerm);
ATerm need_help_1_0 (ATerm w_93 (ATerm), ATerm);
ATerm map_1_0 (ATerm f_77 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm x_5 (ATerm z_54, ATerm a_55, ATerm);
ATerm Program_1_0 (ATerm m_69 (ATerm), ATerm);
ATerm j_5 (ATerm);
ATerm w_5 (ATerm);
ATerm z_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm n_69 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm h_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm p_62 (ATerm), ATerm q_62 (ATerm), ATerm);
ATerm i_6 (ATerm);
ATerm parse_options_p__1_0 (ATerm z_95 (ATerm), ATerm);
ATerm u_6 (ATerm);
ATerm x_6 (ATerm);
ATerm a_7 (ATerm);
ATerm k_7 (ATerm);
ATerm parse_options_1_0 (ATerm y_95 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm);
ATerm v_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm iowrap_3_0 (ATerm h_93 (ATerm), ATerm i_93 (ATerm), ATerm j_93 (ATerm), ATerm);
ATerm f_8 (ATerm);
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
  t = term_q_1;
  k_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_8), f_0), term_n_7);
  l_0 = t;
  t = SSL_printnl(k_0, l_0);
  t = term_j_8;
  m_0 = t;
  t = SSL_exit(m_0);
  t = b_0;
  return(t);
}
ATerm b_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--graph", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm n_0 = NULL,q_0 = NULL;
  t = term_k_8;
  n_0 = t;
  t = term_c_1;
  q_0 = t;
  t = term_m_8;
  t = a_6(n_0, q_0, t);
  t = term_r_8;
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_w_8;
  return(t);
}
ATerm f_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tree", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL;
  t = term_x_8;
  r_0 = t;
  t = term_c_1;
  s_0 = t;
  t = term_z_8;
  t = a_6(r_0, s_0, t);
  t = term_b_9;
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_c_9;
  return(t);
}
ATerm term_to_adot_options_0_0 (ATerm t)
{
  ATerm d_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_1, d_1, e_1, t);
      ;
      LocalPopChoice(f_9);
    }
  else
    {
      t = d_9;
      t = Option_3_0(f_1, h_1, k_1, t);
    }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
      {
        ATerm w_0 = NULL,x_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_0 = ATgetFirst((ATermList) t);
            x_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_0;
        {
          ATerm l_1 (ATerm t)
          {
            t = x_0;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(l_1, t);
        }
      }
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = Cons_2_0(_id, escape_chars_0_0, t);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm j_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_9 = t;
      int q_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_1 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm s_9 = ATgetFirst((ATermList) t);
              if(((ATgetType(s_9) != AT_INT) || (ATgetInt((ATermInt) s_9) != 34)))
                _fail(t);
              g_1 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(g_1), term_v_9), term_u_9);
          ;
          LocalPopChoice(q_9);
        }
      else
        {
          t = o_9;
          {
            ATerm i_1 = NULL,j_1 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_1 = ATgetFirst((ATermList) t);
                j_1 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_1;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(j_1), term_u_9), term_u_9);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(j_1), term_w_9), term_u_9);
              }
          }
        }
      t = Cons_2_0(_id, m_1, t);
      ;
      LocalPopChoice(n_9);
    }
  else
    {
      t = j_9;
      {
        ATerm a_10 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(b_10);
          }
        else
          {
            t = a_10;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm v_77 (ATerm), ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm c_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, y_1, t);
        ;
        LocalPopChoice(e_10);
      }
    else
      {
        t = c_10;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_77(t);
      }
    return(t);
  }
  t = y_1(t);
  return(t);
}
ATerm i_3 (ATerm c_2, ATerm t)
{
  ATerm g_2 = NULL;
  t = SSL_explode_term(c_2);
  if(match_cons(t, sym__2))
    {
      ATerm g_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      g_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_2;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_2 = NULL,s_2 = NULL,t_2 = NULL;
  t_2 = t;
  if(match_cons(t, sym__2))
    {
      m_2 = ATgetArgument(t, 0);
      s_2 = ATgetArgument(t, 1);
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              t = s_2;
              return(t);
            }
            t = m_2;
            t = at_end_1_0(n_1, t);
            ;
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            t = i_3(t_2, t);
          }
      }
    }
  else
    {
      t = i_3(t_2, t);
    }
  return(t);
}
ATerm EdgeToDot_0_0 (ATerm t)
{
  ATerm p_4 = NULL,r_4 = NULL,t_4 = NULL;
  p_4 = t;
  if(match_cons(t, sym__2))
    {
      r_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL,z_1 = NULL,j_2 = NULL,l_2 = NULL,n_2 = NULL,p_2 = NULL;
        t = SSL_explode_term(t_4);
        if(match_cons(t, sym__2))
          {
            v_1 = ATgetArgument(t, 0);
            w_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_explode_string(v_1);
        t = escape_chars_0_0(t);
        j_2 = t;
        t = SSL_implode_string(j_2);
        l_2 = t;
        t = SSL_explode_string(l_2);
        p_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_2), term_v_9), (ATerm) ATinsert(ATempty, term_v_9));
        t = conc_0_0(t);
        n_2 = t;
        t = SSL_implode_string(n_2);
        x_1 = t;
        t = w_1;
        {
          ATerm o_1 (ATerm t)
          {
            ATerm b_2 = NULL;
            b_2 = t;
            t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, r_4), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, b_2))));
            return(t);
          }
          t = map_1_0(o_1, t);
          z_1 = t;
          t = (ATerm) ATinsert(CheckATermList(z_1), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, r_4), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_m_10, x_1))))));
        }
        ;
        LocalPopChoice(l_10);
      }
    else
      {
        t = j_10;
        {
          ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL,d_3 = NULL,e_3 = NULL;
          t = SSL_is_int(t_4);
          t = SSL_int_to_string(t_4);
          d_3 = t;
          t = SSL_explode_string(d_3);
          t = escape_chars_0_0(t);
          e_3 = t;
          t = SSL_implode_string(e_3);
          x_2 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_10), x_2), term_q_10);
          z_2 = t;
          t = SSL_concat_strings(z_2);
          y_2 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, r_4), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_m_10, y_2))))));
        }
      }
  }
  return(t);
}
ATerm k_5 (ATerm s_23, ATerm t_23, ATerm t)
{
  ATerm n_5 = NULL;
  t = t_23;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_23;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm r_10 = ATgetFirst((ATermList) t);
          ATerm s_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_23;
    }
  t = t_23;
  {
    ATerm p_1 (ATerm t)
    {
      ATerm g_6 = NULL;
      g_6 = t;
      t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, s_23), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, g_6))));
      return(t);
    }
    t = map_1_0(p_1, t);
    n_5 = t;
    t = (ATerm) ATinsert(CheckATermList(n_5), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, s_23), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_v_10)))));
  }
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm w_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
      k_6 = t;
      if(match_cons(t, sym__2))
        {
          l_6 = ATgetArgument(t, 0);
          m_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_6;
      t = k_5(l_6, m_6, t);
      ;
      LocalPopChoice(y_10);
    }
  else
    {
      t = w_10;
      t = EdgeToDot_0_0(t);
    }
  return(t);
}
ATerm graph_to_adot_0_0 (ATerm t)
{
  ATerm j_6 = NULL;
  t = map_1_0(r_1, t);
  t = concat_0_0(t);
  j_6 = t;
  t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_b_11, j_6);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL,b_7 = NULL,c_7 = NULL;
  b_7 = t;
  t = SSL_address(b_7);
  y_6 = t;
  t = SSL_int_to_string(y_6);
  z_6 = t;
  t = term_c_11;
  c_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_11, z_6);
  t = o_5(c_7, z_6, t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
  f_7 = t;
  t = SSL_address(f_7);
  d_7 = t;
  t = SSL_int_to_string(d_7);
  e_7 = t;
  t = term_c_11;
  g_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_11, e_7);
  t = o_5(g_7, e_7, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL;
  if(match_cons(t, sym__2))
    {
      h_7 = ATgetArgument(t, 0);
      i_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(d_2, h_7, i_7, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm j_7 = NULL;
  if(match_cons(t, sym__2))
    {
      j_7 = ATgetArgument(t, 0);
      if((j_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL;
  if(match_cons(t, sym__2))
    {
      z_3 = ATgetArgument(t, 0);
      a_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(h_2, z_3, a_4, t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm b_4 = NULL;
  if(match_cons(t, sym__2))
    {
      b_4 = ATgetArgument(t, 0);
      if((b_4 != ATgetArgument(t, 1)))
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
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,v_6 = NULL,w_6 = NULL;
  p_6 = t;
  t = SSL_address(p_6);
  t_6 = t;
  t = SSL_int_to_string(t_6);
  v_6 = t;
  t = term_c_11;
  w_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_11, v_6);
  t = o_5(w_6, v_6, t);
  q_6 = t;
  t = p_6;
  {
    ATerm g_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = map_1_0(s_1, t);
        ;
        LocalPopChoice(o_11);
      }
    else
      {
        t = g_11;
        t = SRTS_all(t_1, t);
      }
    r_6 = t;
    t = p_6;
    {
      ATerm s_11 = t;
      int v_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = foldr_3_0(u_1, a_2, term_to_graph_0_0, t);
          ;
          LocalPopChoice(v_11);
        }
      else
        {
          t = s_11;
          {
            ATerm k_3 = NULL;
            t = SSL_explode_term(p_6);
            if(match_cons(t, sym__2))
              {
                ATerm w_11 = ATgetArgument(t, 0);
                k_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = k_3;
            t = foldr_3_0(e_2, f_2, term_to_graph_0_0, t);
          }
        }
      s_6 = t;
      t = (ATerm) ATinsert(CheckATermList(s_6), (ATerm) ATmakeAppl(sym__2, q_6, r_6));
    }
  }
  return(t);
}
ATerm l_5 (ATerm m_81 (ATerm), ATerm n_81 (ATerm), ATerm y_30, ATerm x_30, ATerm t)
{
  t = n_81(t);
  {
    ATerm i_2 (ATerm t)
    {
      ATerm o_7 = NULL;
      o_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_30, o_7);
      t = m_81(t);
      return(t);
    }
    t = fetch_1_0(i_2, t);
    t = x_30;
  }
  return(t);
}
ATerm m_5 (ATerm j_81 (ATerm), ATerm u_30, ATerm t_30, ATerm t)
{
  t = u_30;
  {
    ATerm x_7 (ATerm t)
    {
      ATerm x_11 = t;
      int y_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = t_30;
          ;
          LocalPopChoice(y_11);
        }
      else
        {
          t = x_11;
          {
            ATerm z_11 = t;
            int a_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_7 = NULL,t_7 = NULL,u_7 = NULL;
                q_7 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    t_7 = ATgetFirst((ATermList) t);
                    u_7 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = q_7;
                {
                  ATerm k_2 (ATerm t)
                  {
                    t = t_30;
                    return(t);
                  }
                  t = l_5(j_81, k_2, t_7, u_7, t);
                  t = x_7(t);
                }
                ;
                LocalPopChoice(a_12);
              }
            else
              {
                t = z_11;
                t = Cons_2_0(_id, x_7, t);
              }
          }
        }
      return(t);
    }
    t = x_7(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm t)
{
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_83(t);
      ;
      LocalPopChoice(c_12);
    }
  else
    {
      t = b_12;
      {
        ATerm c_8 = NULL,e_8 = NULL,h_8 = NULL,i_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_8 = ATgetFirst((ATermList) t);
            e_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_8;
        t = m_83(t);
        h_8 = t;
        t = e_8;
        t = foldr_3_0(k_83, l_83, m_83, t);
        i_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_8, i_8);
        t = l_83(t);
      }
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
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_8 = NULL,n_8 = NULL;
      l_8 = t;
      t = term_f_12;
      t = get_config_0_0(t);
      n_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_8, term_h_12);
      t = geq_0_0(t);
      t = l_8;
      t = k_91(t);
      ;
      LocalPopChoice(e_12);
    }
  else
    {
      t = d_12;
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = debug_1_0(q_2, t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_i_12;
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm y_8 = NULL,a_9 = NULL;
  y_8 = t;
  t = new_0_0(t);
  a_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_9, y_8);
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm e_9 = NULL,g_9 = NULL;
  e_9 = t;
  t = new_0_0(t);
  g_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_9, e_9);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm k_9 = NULL,m_9 = NULL;
  k_9 = t;
  t = SSL_explode_term(k_9);
  if(match_cons(t, sym__2))
    {
      ATerm l_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_12 = ATgetArgument(t, 1);
        if(((ATgetType(u_12) == AT_LIST) && !(ATisEmpty(u_12))))
          {
            m_9 = ATgetFirst((ATermList) u_12);
            {
              ATerm v_12 = (ATerm) ATgetNext((ATermList) u_12);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_9;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm p_9 = NULL,t_9 = NULL;
  p_9 = t;
  t = SSL_explode_term(p_9);
  if(match_cons(t, sym__2))
    {
      ATerm w_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_13 = ATgetArgument(t, 1);
        if(((ATgetType(a_13) == AT_LIST) && !(ATisEmpty(a_13))))
          {
            t_9 = ATgetFirst((ATermList) a_13);
            {
              ATerm b_13 = (ATerm) ATgetNext((ATermList) a_13);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_9;
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL;
  if(match_cons(t, sym__2))
    {
      x_9 = ATgetArgument(t, 0);
      y_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(g_3, x_9, y_9, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm z_9 = NULL;
  if(match_cons(t, sym__2))
    {
      z_9 = ATgetArgument(t, 0);
      if((z_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL;
  if(match_cons(t, sym__2))
    {
      v_4 = ATgetArgument(t, 0);
      w_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(l_3, v_4, w_4, t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm y_4 = NULL;
  if(match_cons(t, sym__2))
    {
      y_4 = ATgetArgument(t, 0);
      if((y_4 != ATgetArgument(t, 1)))
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
  ATerm o_8 = NULL,s_8 = NULL;
  t = if_verbose5_1_0(o_2, t);
  o_8 = t;
  t = new_0_0(t);
  s_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_8, o_8);
  {
    ATerm d_10 (ATerm t)
    {
      ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL,e_4 = NULL;
      ATerm r_2 (ATerm t)
      {
        ATerm c_13 = t;
        int d_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(u_2, t);
            ;
            LocalPopChoice(d_13);
          }
        else
          {
            t = c_13;
            t = SRTS_all(v_2, t);
          }
        return(t);
      }
      t = _2_0(_id, r_2, t);
      t_8 = t;
      {
        ATerm w_2 (ATerm t)
        {
          ATerm e_13 = t;
          int f_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map_1_0(a_3, t);
              ;
              LocalPopChoice(f_13);
            }
          else
            {
              t = e_13;
              t = SRTS_all(b_3, t);
            }
          return(t);
        }
        t = _2_0(_id, w_2, t);
        u_8 = t;
        t = SSL_explode_term(t_8);
        if(match_cons(t, sym__2))
          {
            ATerm g_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_13) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm h_13 = ATgetArgument(t, 1);
              if(((ATgetType(h_13) == AT_LIST) && !(ATisEmpty(h_13))))
                {
                  ATerm i_13 = ATgetFirst((ATermList) h_13);
                  ATerm j_13 = (ATerm) ATgetNext((ATermList) h_13);
                  if(((ATgetType(j_13) == AT_LIST) && !(ATisEmpty(j_13))))
                    {
                      e_4 = ATgetFirst((ATermList) j_13);
                      {
                        ATerm k_13 = (ATerm) ATgetNext((ATermList) j_13);
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
        t = e_4;
        {
          ATerm l_13 = t;
          int m_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = foldr_3_0(c_3, f_3, d_10, t);
              ;
              LocalPopChoice(m_13);
            }
          else
            {
              t = l_13;
              {
                ATerm l_4 = NULL;
                t = SSL_explode_term(e_4);
                if(match_cons(t, sym__2))
                  {
                    ATerm o_13 = ATgetArgument(t, 0);
                    l_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_4;
                t = foldr_3_0(h_3, j_3, d_10, t);
              }
            }
          v_8 = t;
          t = (ATerm) ATinsert(CheckATermList(v_8), u_8);
        }
      }
      return(t);
    }
    t = d_10(t);
  }
  return(t);
}
ATerm to_adot_0_0 (ATerm t)
{
  ATerm f_10 = NULL;
  f_10 = t;
  {
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_8;
        t = get_config_0_0(t);
        t = f_10;
        t = term_to_tree_0_0(t);
        ;
        LocalPopChoice(q_13);
      }
    else
      {
        t = p_13;
        t = term_k_8;
        t = get_config_0_0(t);
        t = f_10;
        t = term_to_graph_0_0(t);
      }
    t = graph_to_adot_0_0(t);
  }
  return(t);
}
ATerm p_5 (ATerm t_43, ATerm u_43, ATerm t)
{
  ATerm k_10 = NULL;
  t = SSL_fputc(t_43, u_43);
  k_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_10);
  return(t);
}
ATerm q_5 (ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm n_10 = NULL;
  t = SSL_write_term_to_stream_text(h_47, i_47);
  n_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_10);
  return(t);
}
ATerm s_5 (ATerm w_89 (ATerm), ATerm w_424, ATerm l_47, ATerm t)
{
  ATerm o_10 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_424, term_r_13);
  t = open_stream_0_0(t);
  o_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_10, l_47);
  t = w_89(t);
  t = fclose_0_0(t);
  t = l_47;
  return(t);
}
ATerm r_5 (ATerm d_47, ATerm e_47, ATerm t)
{
  ATerm p_10 = NULL;
  t = SSL_write_term_to_stream_baf(d_47, e_47);
  p_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_10);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = fetch_1_0(r_3, t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm a_11 = NULL,d_11 = NULL;
  if(match_cons(t, sym__2))
    {
      a_11 = ATgetArgument(t, 0);
      d_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5(s_3, a_11, d_11, t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_13 = ATgetArgument(t, 0);
      if(match_cons(u_13, sym_Stream_1))
        {
          e_11 = ATgetArgument(u_13, 0);
        }
      else
        _fail(t);
      f_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(e_11, f_11, t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL;
  if(match_cons(t, sym__2))
    {
      h_11 = ATgetArgument(t, 0);
      i_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5(u_3, h_11, i_11, t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_13 = ATgetArgument(t, 0);
      if(match_cons(v_13, sym_Stream_1))
        {
          k_11 = ATgetArgument(v_13, 0);
        }
      else
        _fail(t);
      l_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5(k_11, l_11, t);
  j_11 = t;
  t = term_z_13;
  m_11 = t;
  t = j_11;
  if(match_cons(t, sym_Stream_1))
    {
      n_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_13, j_11);
  t = p_5(m_11, n_11, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm t_10 = NULL,x_10 = NULL;
  t_10 = t;
  {
    ATerm m_3 (ATerm t)
    {
      ATerm b_14 = t;
      int d_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_3 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((x_10 != NULL) && (x_10 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(n_3, t);
          ;
          LocalPopChoice(d_14);
        }
      else
        {
          t = b_14;
          t = term_e_14;
          if(((x_10 != NULL) && (x_10 != t)))
            _fail(t);
          else
            x_10 = t;
        }
      return(t);
    }
    t = _2_0(m_3, _id, t);
    t = t_10;
    {
      ATerm o_3 (ATerm t)
      {
        ATerm z_10 = NULL;
        z_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_10), z_10);
        return(t);
      }
      t = _2_0(_id, o_3, t);
      {
        ATerm f_14 = t;
        int g_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(p_3, q_3, t);
            ;
            LocalPopChoice(g_14);
          }
        else
          {
            t = f_14;
            t = _2_0(_id, t_3, t);
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
  ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL,t_11 = NULL,u_11 = NULL;
  p_11 = t;
  t = dtime_0_0(t);
  t = p_11;
  t = y_92(t);
  q_11 = t;
  t = dtime_0_0(t);
  r_11 = t;
  t = q_11;
  if(match_cons(t, sym__2))
    {
      t_11 = ATgetArgument(t, 0);
      u_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_11), (ATerm) ATmakeAppl(sym_Runtime_1, r_11)), u_11);
  return(t);
}
ATerm m_12 (ATerm g_12, ATerm t)
{
  t = SSL_fclose(g_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL;
  k_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_12 = ATgetArgument(t, 0);
      {
        ATerm h_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_12);
            ;
            LocalPopChoice(i_14);
          }
        else
          {
            t = h_14;
            t = m_12(k_12, t);
          }
      }
    }
  else
    {
      t = m_12(k_12, t);
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
  ATerm n_12 = NULL;
  t = SSL_fopen(v_43, w_43);
  n_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_12);
  return(t);
}
ATerm _2_0 (ATerm a_58 (ATerm), ATerm b_58 (ATerm), ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,o_0 = NULL,p_0 = NULL;
  t_12 = t;
  if(match_cons(t, sym__2))
    {
      p_12 = ATgetArgument(t, 0);
      q_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_12);
  o_12 = t;
  t = p_12;
  t = a_58(t);
  r_12 = t;
  t = q_12;
  t = b_58(t);
  s_12 = t;
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_12, s_12);
  o_0 = t;
  t = SSLsetAnnotations(o_0, o_12);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_12 = NULL;
  t = SSL_stdin_stream();
  x_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_12);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_12 = NULL;
  t = SSL_stdout_stream();
  y_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_12 = NULL;
  t = SSL_stderr_stream();
  z_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_12);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm w_13 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      w_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_13;
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm a_14 = NULL;
  a_14 = t;
  t = SSL_is_string(a_14);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_14 = ATgetArgument(t, 0);
      ATerm n_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_13 = NULL,i_5 = NULL;
        n_13 = t;
        t = SSL_explode_term(n_13);
        if(match_cons(t, sym__2))
          {
            ATerm v_14 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_14) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_14 = ATgetArgument(t, 1);
              if(((ATgetType(w_14) == AT_LIST) && !(ATisEmpty(w_14))))
                {
                  i_5 = ATgetFirst((ATermList) w_14);
                  {
                    ATerm x_14 = (ATerm) ATgetNext((ATermList) w_14);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_5;
        if(match_cons(t, sym_stderr_0))
          {
            t = i_5;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = i_5;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = i_5;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(u_14);
      }
    else
      {
        t = s_14;
        {
          ATerm y_14 = t;
          int z_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_13 = NULL,t_13 = NULL;
              t = _2_0(v_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  s_13 = ATgetArgument(t, 0);
                  t_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_5(s_13, t_13, t);
              ;
              LocalPopChoice(z_14);
            }
          else
            {
              t = y_14;
              {
                ATerm x_13 = NULL,y_13 = NULL;
                t = _2_0(w_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    x_13 = ATgetArgument(t, 0);
                    y_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_5(x_13, y_13, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_a_15;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_14 = NULL,k_14 = NULL,l_14 = NULL;
  ATerm b_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_14 = NULL;
      m_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_14, term_d_15);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_15);
    }
  else
    {
      t = b_15;
      t = debug_1_0(x_3, t);
      _fail(t);
    }
  c_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_5(l_14, t);
  k_14 = t;
  t = c_14;
  t = fclose_0_0(t);
  t = k_14;
  return(t);
}
ATerm fetch_1_0 (ATerm p_77 (ATerm), ATerm t)
{
  ATerm o_14 (ATerm t)
  {
    ATerm e_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(p_77, _id, t);
        ;
        LocalPopChoice(g_15);
      }
    else
      {
        t = e_15;
        t = Cons_2_0(_id, o_14, t);
      }
    return(t);
  }
  t = o_14(t);
  return(t);
}
ATerm o_5 (ATerm j_38, ATerm k_38, ATerm t)
{
  t = SSL_strcat(j_38, k_38);
  return(t);
}
ATerm debug_1_0 (ATerm u_89 (ATerm), ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,t_14 = NULL;
  p_14 = t;
  t = u_89(t);
  q_14 = t;
  t = term_q_1;
  r_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_14), q_14);
  t_14 = t;
  t = SSL_printnl(r_14, t_14);
  t = p_14;
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm h_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_15);
    }
  else
    {
      t = h_15;
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_j_15;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_15 = NULL;
      f_15 = t;
      t = SSL_is_string(f_15);
      ;
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
      {
        ATerm m_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(y_3, t);
            ;
            LocalPopChoice(q_15);
          }
        else
          {
            t = m_15;
            {
              ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL;
              n_15 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_15 = ATgetArgument(t, 0);
                  t = o_15;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_15 = ATgetArgument(t, 0);
                      t = o_15;
                      {
                        ATerm r_15 = t;
                        int s_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(s_15);
                          }
                        else
                          {
                            t = r_15;
                            t = debug_1_0(c_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_15 = NULL,w_15 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_15 = ATgetArgument(t, 0);
                          p_15 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_15;
                      t = eval_config_0_0(t);
                      v_15 = t;
                      t = p_15;
                      t = eval_config_0_0(t);
                      w_15 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_15, w_15);
                      t = o_5(v_15, w_15, t);
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
  ATerm d_16 = NULL,e_16 = NULL;
  d_16 = t;
  t = term_t_15;
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_15, d_16);
  t = x_5(e_16, d_16, t);
  {
    ATerm u_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_16 = NULL,i_16 = NULL;
        t = eval_config_0_0(t);
        f_16 = t;
        t = term_t_15;
        i_16 = t;
        t = SSL_table_put(i_16, d_16, f_16);
        t = f_16;
        ;
        LocalPopChoice(x_15);
      }
    else
      {
        t = u_15;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm h_91 (ATerm), ATerm t)
{
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_16 = NULL,l_16 = NULL;
      j_16 = t;
      t = term_f_12;
      t = get_config_0_0(t);
      l_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_16, term_a_16);
      t = geq_0_0(t);
      t = j_16;
      t = h_91(t);
      ;
      LocalPopChoice(z_15);
    }
  else
    {
      t = y_15;
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm n_16 = NULL;
  n_16 = t;
  if(match_string(t, "-k"))
    {
      t = n_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_16;
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm p_16 = NULL,r_16 = NULL,s_16 = NULL;
  p_16 = t;
  t = SSL_string_to_int(p_16);
  r_16 = t;
  t = term_b_16;
  s_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_16, r_16);
  t = a_6(s_16, r_16, t);
  t = p_16;
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_c_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_4, f_4, g_4, t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm w_16 = NULL;
  w_16 = t;
  if(match_string(t, "-S"))
    {
      t = w_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_16;
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm x_16 = NULL,z_16 = NULL;
  t = term_f_12;
  x_16 = t;
  t = term_g_16;
  z_16 = t;
  t = term_h_16;
  t = a_6(x_16, z_16, t);
  t = term_k_16;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_m_16;
  return(t);
}
ATerm k_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
  a_17 = t;
  t = SSL_string_to_int(a_17);
  b_17 = t;
  t = term_f_12;
  c_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_12, b_17);
  t = a_6(c_17, b_17, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_17);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_o_16;
  return(t);
}
ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL;
  t = term_q_16;
  d_17 = t;
  t = term_c_1;
  e_17 = t;
  t = term_t_16;
  t = a_6(d_17, e_17, t);
  t = term_u_16;
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_v_16;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_16 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_4, i_4, j_4, t);
      ;
      LocalPopChoice(g_17);
    }
  else
    {
      t = y_16;
      {
        ATerm h_17 = t;
        int i_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_4, m_4, n_4, t);
            ;
            LocalPopChoice(i_17);
          }
        else
          {
            t = h_17;
            t = Option_3_0(o_4, q_4, s_4, t);
          }
      }
    }
  return(t);
}
ATerm a_6 (ATerm k_48, ATerm l_48, ATerm t)
{
  ATerm f_17 = NULL;
  t = term_t_15;
  f_17 = t;
  t = SSL_table_put(f_17, k_48, l_48);
  t = (ATerm) ATmakeAppl(sym__3, term_t_15, k_48, l_48);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL;
      t = term_c_1;
      t = d_0(t);
      m_17 = t;
      t = term_j_17;
      n_17 = t;
      t = term_p_17;
      o_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_17, term_p_17, m_17);
      t = y_5(n_17, o_17, m_17, t);
      _fail(t);
    }
  else
    {
      ATerm s_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_17 = ATgetFirst((ATermList) t);
          l_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_17;
      t = a_0(t);
      t = term_c_1;
      t = c_0(t);
      s_17 = t;
      t = (ATerm) ATinsert(CheckATermList(l_17), s_17);
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm u_17 = NULL;
  u_17 = t;
  if(match_string(t, "-o"))
    {
      t = u_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_17;
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL;
  b_18 = t;
  t = term_q_17;
  c_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_17, b_18);
  t = a_6(c_18, b_18, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_18);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_r_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, x_4, z_4, t);
  return(t);
}
ATerm y_5 (ATerm i_53, ATerm j_53, ATerm h_53, ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,h_18 = NULL;
  e_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_53, j_53);
  {
    ATerm t_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_17 = ATgetArgument(t, 0);
            ATerm x_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_53, j_53);
        t = x_5(i_53, j_53, t);
        ;
        LocalPopChoice(v_17);
      }
    else
      {
        t = t_17;
        t = (ATerm) ATempty;
      }
    f_18 = t;
    t = (ATerm) ATinsert(CheckATermList(f_18), h_53);
    h_18 = t;
    t = SSL_table_put(i_53, j_53, h_18);
    t = e_18;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_18 = NULL,w_18 = NULL,y_18 = NULL;
      t = term_c_1;
      t = j_0(t);
      v_18 = t;
      t = term_j_17;
      w_18 = t;
      t = term_p_17;
      y_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_17, term_p_17, v_18);
      t = y_5(w_18, y_18, v_18, t);
      _fail(t);
    }
  else
    {
      ATerm f_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_18 = ATgetFirst((ATermList) t);
          s_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_18;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_18 = ATgetFirst((ATermList) t);
          u_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_18;
      t = h_0(t);
      t = t_18;
      t = i_0(t);
      f_19 = t;
      t = (ATerm) ATinsert(CheckATermList(u_18), f_19);
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm h_19 = NULL;
  h_19 = t;
  if(match_string(t, "-i"))
    {
      t = h_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_19;
    }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL;
  i_19 = t;
  t = term_y_17;
  j_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_17, i_19);
  t = a_6(j_19, i_19, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_19);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_z_17;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_5, b_5, c_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_19 = NULL,s_19 = NULL,v_19 = NULL,w_19 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_1;
  t = whoami_0_0(t);
  p_19 = t;
  t = term_q_1;
  s_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_18), p_19);
  v_19 = t;
  t = SSL_printnl(s_19, v_19);
  t = term_j_8;
  w_19 = t;
  t = SSL_exit(w_19);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_18;
  t = get_config_0_0(t);
  return(t);
}
ATerm v_5 (ATerm t_40, ATerm u_40, ATerm t)
{
  ATerm g_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_40, u_40);
      ;
      LocalPopChoice(i_18);
    }
  else
    {
      t = g_18;
      t = SSL_addr(t_40, u_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm t)
{
  ATerm j_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_83(t);
      ;
      LocalPopChoice(k_18);
    }
  else
    {
      t = j_18;
      {
        ATerm b_20 = NULL,c_20 = NULL,l_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_20 = ATgetFirst((ATermList) t);
            c_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_20;
        t = foldr_2_0(i_83, j_83, t);
        l_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_20, l_20);
        t = j_83(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_g_16;
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL;
  if(match_cons(t, sym__2))
    {
      p_8 = ATgetArgument(t, 0);
      q_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(p_8, q_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_20 = NULL,r_7 = NULL,s_7 = NULL;
  t = times_0_0(t);
  r_7 = t;
  t = SSL_explode_term(r_7);
  if(match_cons(t, sym__2))
    {
      ATerm l_18 = ATgetArgument(t, 0);
      s_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7;
  t = foldr_2_0(d_5, e_5, t);
  o_20 = t;
  t = SSL_TicksToSeconds(o_20);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
  z_20 = t;
  if(match_cons(t, sym__2))
    {
      a_21 = ATgetArgument(t, 0);
      b_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_21;
        if((a_21 != t))
          {
            _fail(t);
          }
        t = z_20;
        ;
        LocalPopChoice(n_18);
      }
    else
      {
        t = m_18;
        t = (ATerm) ATmakeAppl(sym__2, a_21, b_21);
        {
          ATerm o_18 = t;
          int p_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_21, b_21);
              ;
              LocalPopChoice(p_18);
            }
          else
            {
              t = o_18;
              t = SSL_gtr(a_21, b_21);
            }
          t = (ATerm) ATmakeAppl(sym__2, a_21, b_21);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_91 (ATerm), ATerm t)
{
  ATerm q_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_21 = NULL,m_21 = NULL;
      i_21 = t;
      t = term_f_12;
      t = get_config_0_0(t);
      m_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_21, term_j_8);
      t = geq_0_0(t);
      t = i_21;
      t = g_91(t);
      ;
      LocalPopChoice(x_18);
    }
  else
    {
      t = q_18;
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm o_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL;
  t = run_time_0_0(t);
  o_21 = t;
  t = term_c_1;
  t = whoami_0_0(t);
  r_21 = t;
  t = term_q_1;
  s_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_19), o_21), term_z_18), r_21);
  t_21 = t;
  t = SSL_printnl(s_21, t_21);
  t = (ATerm) ATmakeAppl(sym__2, term_q_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_19), o_21), term_z_18), r_21));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm u_21 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_16;
  u_21 = t;
  t = SSL_exit(u_21);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(c_19);
    }
  else
    {
      t = b_19;
      {
        ATerm d_19 = t;
        int e_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(e_19);
          }
        else
          {
            t = d_19;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_93 (ATerm), ATerm t)
{
  ATerm g_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_19);
    }
  else
    {
      t = g_19;
      t = fetch_1_0(g_5, t);
    }
  t = w_93(t);
  return(t);
}
ATerm map_1_0 (ATerm f_77 (ATerm), ATerm t)
{
  ATerm w_21 (ATerm t)
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        t = Cons_2_0(f_77, w_21, t);
      }
    return(t);
  }
  t = w_21(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_21 = ATgetFirst((ATermList) t);
      z_21 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_22 = NULL,f_22 = NULL;
        t = z_21;
        t = g_0(t);
        d_22 = t;
        t = y_21;
        t = e_0(t);
        f_22 = t;
        t = z_21;
        {
          ATerm h_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(d_22), f_22);
            return(t);
          }
          t = reverse_acc_2_0(e_0, h_5, t);
        }
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
ATerm Program_1_0 (ATerm m_69 (ATerm), ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,t_0 = NULL,u_0 = NULL;
  j_22 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_22);
  g_22 = t;
  t = h_22;
  t = m_69(t);
  i_22 = t;
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_22);
  t_0 = t;
  t = SSLsetAnnotations(t_0, g_22);
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm o_22 = NULL;
  o_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_22), term_o_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL;
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_19);
    }
  else
    {
      t = q_19;
      t = fetch_1_0(j_5, t);
    }
  t = term_t_19;
  t = echo_0_0(t);
  t = term_j_17;
  m_22 = t;
  t = term_p_17;
  n_22 = t;
  t = term_u_19;
  t = x_5(m_22, n_22, t);
  t = reverse_acc_2_0(_id, w_5, t);
  t = map_1_0(z_5, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm n_69 (ATerm), ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,v_0 = NULL,y_0 = NULL;
  s_22 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      q_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_22);
  p_22 = t;
  t = q_22;
  t = n_69(t);
  r_22 = t;
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, r_22);
  v_0 = t;
  t = SSLsetAnnotations(v_0, p_22);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL;
  w_22 = t;
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_22;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_19 = ATgetFirst((ATermList) t);
                ATerm a_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_22;
          }
        ;
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        t = (ATerm) ATinsert(ATempty, w_22);
      }
    x_22 = t;
    t = term_e_14;
    y_22 = t;
    t = SSL_printnl(y_22, x_22);
    t = w_22;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_18;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL;
  t = term_d_20;
  c_23 = t;
  t = term_c_1;
  d_23 = t;
  t = term_e_20;
  t = a_6(c_23, d_23, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_f_20;
  return(t);
}
ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL;
  t = term_d_20;
  e_23 = t;
  t = term_c_1;
  f_23 = t;
  t = term_e_20;
  t = a_6(e_23, f_23, t);
  t = term_g_20;
  g_23 = t;
  t = term_c_1;
  h_23 = t;
  t = term_h_20;
  t = a_6(g_23, h_23, t);
  t = term_i_20;
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_6, c_6, d_6, t);
      ;
      LocalPopChoice(m_20);
    }
  else
    {
      t = k_20;
      t = Option_3_0(e_6, f_6, h_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_62 (ATerm), ATerm q_62 (ATerm), ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,z_0 = NULL,a_1 = NULL;
  n_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_23 = ATgetFirst((ATermList) t);
      k_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_23);
  i_23 = t;
  t = j_23;
  t = p_62(t);
  l_23 = t;
  t = k_23;
  t = q_62(t);
  m_23 = t;
  a_1 = t;
  t = (ATerm) ATinsert(CheckATermList(m_23), l_23);
  z_0 = t;
  t = SSLsetAnnotations(z_0, i_23);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL;
  e_24 = t;
  t = term_d_18;
  f_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_18, e_24);
  t = a_6(f_24, e_24, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, e_24);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_95 (ATerm), ATerm t)
{
  ATerm d_24 = NULL;
  d_24 = t;
  {
    ATerm n_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_20;
        t = z_95(t);
        ;
        LocalPopChoice(p_20);
      }
    else
      {
        t = n_20;
      }
    t = d_24;
    {
      ATerm n_6 (ATerm t)
      {
        ATerm r_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_20 = t;
            int u_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(u_20);
              }
            else
              {
                t = t_20;
                t = z_95(t);
                t = Cons_2_0(_id, n_6, t);
              }
            ;
            LocalPopChoice(s_20);
          }
        else
          {
            t = r_20;
            {
              ATerm h_24 = NULL,i_24 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_24 = ATgetFirst((ATermList) t);
                  i_24 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(i_24), (ATerm) ATmakeAppl(sym_Undefined_1, h_24));
            }
          }
        return(t);
      }
      t = Cons_2_0(i_6, n_6, t);
    }
  }
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm w_24 = NULL;
  w_24 = t;
  if(match_string(t, "--help"))
    {
      t = w_24;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_24;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_24;
        }
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL;
  t = term_l_19;
  x_24 = t;
  t = term_c_1;
  y_24 = t;
  t = term_v_20;
  t = a_6(x_24, y_24, t);
  t = term_w_20;
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = term_x_20;
  return(t);
}
ATerm k_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_95 (ATerm), ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL;
  p_24 = t;
  t = term_j_17;
  s_24 = t;
  t = term_p_17;
  t_24 = t;
  t = (ATerm) ATempty;
  u_24 = t;
  t = SSL_table_put(s_24, t_24, u_24);
  t = p_24;
  {
    ATerm o_6 (ATerm t)
    {
      ATerm y_20 = t;
      int c_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_95(t);
          ;
          LocalPopChoice(c_21);
        }
      else
        {
          t = y_20;
          {
            ATerm d_21 = t;
            int e_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_6, x_6, a_7, t);
                ;
                LocalPopChoice(e_21);
              }
            else
              {
                t = d_21;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_6, t);
    {
      ATerm f_21 = t;
      int g_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_25 = NULL;
          f_25 = t;
          {
            ATerm h_21 = t;
            int j_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_9 = NULL;
                t = f_25;
                {
                  ATerm k_21 = t;
                  int l_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_l_19;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(l_21);
                    }
                  else
                    {
                      t = k_21;
                      t = fetch_1_0(k_7, t);
                    }
                  t = f_25;
                  t = default_system_usage_0_0(t);
                  t = term_g_16;
                  l_9 = t;
                  t = SSL_exit(l_9);
                }
                ;
                LocalPopChoice(j_21);
              }
            else
              {
                t = h_21;
                {
                  ATerm r_9 = NULL;
                  t = term_d_20;
                  t = get_config_0_0(t);
                  t = f_25;
                  t = default_system_about_0_0(t);
                  t = term_g_16;
                  r_9 = t;
                  t = SSL_exit(r_9);
                }
              }
          }
          ;
          LocalPopChoice(g_21);
        }
      else
        {
          t = f_21;
          {
            ATerm n_21 = t;
            int p_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL;
                ATerm l_7 (ATerm t)
                {
                  ATerm m_7 (ATerm t)
                  {
                    if(((q_24 != NULL) && (q_24 != t)))
                      _fail(t);
                    else
                      q_24 = t;
                    return(t);
                  }
                  t = Undefined_1_0(m_7, t);
                  return(t);
                }
                t = fetch_1_0(l_7, t);
                t = term_q_1;
                g_25 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_24)), term_q_21);
                h_25 = t;
                t = SSL_printnl(g_25, h_25);
                t = (ATerm) ATmakeAppl(sym__2, term_q_1, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_24)), term_q_21));
                t = default_system_usage_0_0(t);
                t = term_j_8;
                i_25 = t;
                t = SSL_exit(i_25);
                ;
                LocalPopChoice(p_21);
              }
            else
              {
                t = n_21;
              }
          }
        }
      r_24 = t;
      t = term_j_17;
      v_24 = t;
      t = SSL_table_destroy(v_24);
      t = r_24;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,s_25 = NULL,t_25 = NULL;
  t = parse_options_1_0(y_93, t);
  l_25 = t;
  t = term_v_21;
  m_25 = t;
  t = SSL_table_create(m_25);
  t = term_v_21;
  s_25 = t;
  t = term_x_21;
  t_25 = t;
  t = SSL_table_put(s_25, t_25, l_25);
  t = l_25;
  t = a_94(t);
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_93, t);
        ;
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        {
          ATerm c_22 = t;
          int e_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_94(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(e_22);
            }
          else
            {
              t = c_22;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = if_verbose2_1_0(b_8, t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL;
  t = term_k_22;
  u_25 = t;
  t = term_c_1;
  v_25 = t;
  t = term_l_22;
  t = a_6(u_25, v_25, t);
  t = term_t_22;
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_u_22;
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL;
  w_25 = t;
  t = term_d_18;
  t = get_config_0_0(t);
  x_25 = t;
  t = term_q_1;
  y_25 = t;
  t = (ATerm) ATinsert(ATempty, x_25);
  z_25 = t;
  t = SSL_printnl(y_25, z_25);
  t = w_25;
  return(t);
}
ATerm iowrap_3_0 (ATerm h_93 (ATerm), ATerm i_93 (ATerm), ATerm j_93 (ATerm), ATerm t)
{
  ATerm p_7 (ATerm t)
  {
    ATerm v_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_93(t);
        ;
        LocalPopChoice(z_22);
      }
    else
      {
        t = v_22;
        {
          ATerm a_23 = t;
          int b_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(b_23);
            }
          else
            {
              t = a_23;
              {
                ATerm o_23 = t;
                int p_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(p_23);
                  }
                else
                  {
                    t = o_23;
                    {
                      ATerm q_23 = t;
                      int r_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(y_7, z_7, a_8, t);
                          ;
                          LocalPopChoice(r_23);
                        }
                      else
                        {
                          t = q_23;
                          {
                            ATerm u_23 = t;
                            int v_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(v_23);
                              }
                            else
                              {
                                t = u_23;
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
  ATerm w_7 (ATerm t)
  {
    ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL;
    a_26 = t;
    {
      ATerm w_23 = t;
      int x_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((b_26 != NULL) && (b_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(d_8, t);
          ;
          LocalPopChoice(x_23);
        }
      else
        {
          t = w_23;
          t = term_y_23;
          b_26 = t;
        }
      t = not_null(b_26);
      t = ReadFromFile_0_0(t);
      c_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_26, c_26);
      t = apply_strategy_1_0(h_93, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(p_7, j_93, v_7, w_7, t);
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm d_26 = NULL;
  if(match_cons(t, sym__2))
    {
      d_26 = ATgetArgument(t, 0);
      {
        ATerm z_23 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = d_26;
  t = to_adot_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(f_8, term_to_adot_options_0_0, default_usage_0_0, t);
  return(t);
}
