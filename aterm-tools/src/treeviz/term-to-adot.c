#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Graph_0;
Symbol sym_Tree_0;
Symbol sym_DotGraph_2;
Symbol sym_StrictDotGraph_2;
Symbol sym_DotDigraph_2;
Symbol sym_StrictDotDigraph_2;
Symbol sym_Alias_2;
Symbol sym_GraphAttrs_1;
Symbol sym_NodeAttrs_1;
Symbol sym_EdgeAttrs_1;
Symbol sym_AttrId_2;
Symbol sym_AttrNumCon_2;
Symbol sym_Node_2;
Symbol sym_Id_1;
Symbol sym_QualId_2;
Symbol sym_QualId_2;
Symbol sym_Attrs_1;
Symbol sym_EdgeNoAttrs_2;
Symbol sym_Edge_3;
Symbol sym_SubGraph_2;
Symbol sym_SubGraphNoArgs_1;
Symbol sym_Arrow_1;
Symbol sym_Line_1;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Infinite_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
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
Symbol sym_Dummy_0;
Symbol sym_Scopes_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Graph_0 = ATmakeSymbol("Graph", 0, ATfalse);
  ATprotectSymbol(sym_Graph_0);
  sym_Tree_0 = ATmakeSymbol("Tree", 0, ATfalse);
  ATprotectSymbol(sym_Tree_0);
  sym_DotGraph_2 = ATmakeSymbol("DotGraph", 2, ATfalse);
  ATprotectSymbol(sym_DotGraph_2);
  sym_StrictDotGraph_2 = ATmakeSymbol("StrictDotGraph", 2, ATfalse);
  ATprotectSymbol(sym_StrictDotGraph_2);
  sym_DotDigraph_2 = ATmakeSymbol("DotDigraph", 2, ATfalse);
  ATprotectSymbol(sym_DotDigraph_2);
  sym_StrictDotDigraph_2 = ATmakeSymbol("StrictDotDigraph", 2, ATfalse);
  ATprotectSymbol(sym_StrictDotDigraph_2);
  sym_Alias_2 = ATmakeSymbol("Alias", 2, ATfalse);
  ATprotectSymbol(sym_Alias_2);
  sym_GraphAttrs_1 = ATmakeSymbol("GraphAttrs", 1, ATfalse);
  ATprotectSymbol(sym_GraphAttrs_1);
  sym_NodeAttrs_1 = ATmakeSymbol("NodeAttrs", 1, ATfalse);
  ATprotectSymbol(sym_NodeAttrs_1);
  sym_EdgeAttrs_1 = ATmakeSymbol("EdgeAttrs", 1, ATfalse);
  ATprotectSymbol(sym_EdgeAttrs_1);
  sym_AttrId_2 = ATmakeSymbol("AttrId", 2, ATfalse);
  ATprotectSymbol(sym_AttrId_2);
  sym_AttrNumCon_2 = ATmakeSymbol("AttrNumCon", 2, ATfalse);
  ATprotectSymbol(sym_AttrNumCon_2);
  sym_Node_2 = ATmakeSymbol("Node", 2, ATfalse);
  ATprotectSymbol(sym_Node_2);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_QualId_2 = ATmakeSymbol("QualId", 2, ATfalse);
  ATprotectSymbol(sym_QualId_2);
  sym_QualId_2 = ATmakeSymbol("QualId", 2, ATfalse);
  ATprotectSymbol(sym_QualId_2);
  sym_Attrs_1 = ATmakeSymbol("Attrs", 1, ATfalse);
  ATprotectSymbol(sym_Attrs_1);
  sym_EdgeNoAttrs_2 = ATmakeSymbol("EdgeNoAttrs", 2, ATfalse);
  ATprotectSymbol(sym_EdgeNoAttrs_2);
  sym_Edge_3 = ATmakeSymbol("Edge", 3, ATfalse);
  ATprotectSymbol(sym_Edge_3);
  sym_SubGraph_2 = ATmakeSymbol("SubGraph", 2, ATfalse);
  ATprotectSymbol(sym_SubGraph_2);
  sym_SubGraphNoArgs_1 = ATmakeSymbol("SubGraphNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SubGraphNoArgs_1);
  sym_Arrow_1 = ATmakeSymbol("Arrow", 1, ATfalse);
  ATprotectSymbol(sym_Arrow_1);
  sym_Line_1 = ATmakeSymbol("Line", 1, ATfalse);
  ATprotectSymbol(sym_Line_1);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
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
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
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
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  init_constant_terms();
}
ATerm term_c_23;
ATerm term_j_22;
ATerm term_n_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_m_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_p_16;
ATerm term_k_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_g_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_r_14;
ATerm term_c_14;
ATerm term_t_13;
ATerm term_j_13;
ATerm term_d_13;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_r_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_e_8;
ATerm term_c_8;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_s_7;
ATerm term_q_7;
ATerm term_n_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_y_5;
ATerm term_w_5;
ATerm term_v_5;
void init_constant_terms (void)
{
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym__2, term_v_5, term_w_5);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym__2, term_d_6, term_w_5);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_AttrId_2, term_q_7, term_u_7);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym__2, term_w_14, term_w_5);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_g_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym__2, term_w_15, term_w_5);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym__2, term_s_16, term_w_5);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_q_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym__2, term_t_20, term_w_5);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym__3, term_o_19, term_q_19, (ATerm) ATempty);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm term_to_adot_options_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm Escape_linefeed_0 (ATerm);
ATerm Escape_backslash_0 (ATerm);
ATerm Escape_double_quote_0 (ATerm);
ATerm Escape_0 (ATerm);
ATerm escape_chars_0 (ATerm);
ATerm escape_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm quote_chars_0 (ATerm);
ATerm double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm y_72 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm EdgeToDot_0 (ATerm);
ATerm ListEdgeToDot_0 (ATerm);
ATerm graph_to_adot_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm NodeId_0 (ATerm);
ATerm address_0 (ATerm);
ATerm term_to_graph_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm z_68 (ATerm), ATerm a_69 (ATerm));
ATerm union_1 (ATerm, ATerm v_68 (ATerm));
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm m_68 (ATerm), ATerm n_68 (ATerm), ATerm o_68 (ATerm));
ATerm foldr_3 (ATerm, ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm q_69 (ATerm));
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm new_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm w_76 (ATerm));
ATerm term_to_tree_0 (ATerm);
ATerm to_adot_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_63 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm w_73 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm t_76 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm i_47 (ATerm), ATerm j_47 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm a_75 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm b_71 (ATerm), ATerm c_71 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm m_69 (ATerm), ATerm n_69 (ATerm));
ATerm crush_2 (ATerm, ATerm k_68 (ATerm), ATerm l_68 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm s_76 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm y_74 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm w_78 (ATerm));
ATerm map_1 (ATerm, ATerm y_62 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm v_78 (ATerm));
ATerm Program_1 (ATerm, ATerm u_54 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm x_73 (ATerm));
ATerm Undefined_1 (ATerm, ATerm v_54 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_63 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_77 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm h_55 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm a_79 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_48 (ATerm), ATerm s_48 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm y_78 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm x_78 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm e_75 (ATerm), ATerm f_75 (ATerm), ATerm g_75 (ATerm), ATerm h_75 (ATerm));
ATerm iowrap_4 (ATerm, ATerm v_75 (ATerm), ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm));
ATerm iowrap_3 (ATerm, ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm r_75 (ATerm));
ATerm iowrap_2 (ATerm, ATerm n_75 (ATerm), ATerm o_75 (ATerm));
ATerm term_to_adot_0 (ATerm);
ATerm main_0 (ATerm);
ATerm term_to_adot_options_0 (ATerm t)
{
  ATerm w_2 = t;
  int u_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        ATerm f_1 = NULL;
        f_1 = t;
        p_0 :
        if(!(match_string(f_1, "--graph")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm c_0 (ATerm t)
      {
        t = term_y_5;
        t = set_config_0(t);
        t = term_b_6;
        return(t);
      }
      ATerm e_0 (ATerm t)
      {
        t = term_c_6;
        return(t);
      }
      t = Option_3(t, b_0, c_0, e_0);
      LocalPopChoice(u_5);
    }
  else
    {
      t = w_2;
      {
        ATerm f_0 (ATerm t)
        {
          ATerm g_1 = NULL;
          g_1 = t;
          r_0 :
          if(!(match_string(g_1, "--tree")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm m_0 (ATerm t)
        {
          t = term_f_6;
          t = set_config_0(t);
          t = term_g_6;
          return(t);
        }
        ATerm n_0 (ATerm t)
        {
          t = term_h_6;
          return(t);
        }
        t = Option_3(t, f_0, m_0, n_0);
      }
    }
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Escape_linefeed_0 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,c_2 = NULL;
  z_1 = t;
  u_1 :
  if(((ATgetType(z_1) == AT_LIST) && !(ATisEmpty(z_1))))
    {
      a_2 = ATgetFirst((ATermList) z_1);
      c_2 = (ATerm) ATgetNext((ATermList) z_1);
      y_1 :
      if(match_int(a_2, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(c_2)), term_l_6), term_k_6);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_backslash_0 (ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL;
  j_2 = t;
  g_2 :
  if(((ATgetType(j_2) == AT_LIST) && !(ATisEmpty(j_2))))
    {
      k_2 = ATgetFirst((ATermList) j_2);
      l_2 = (ATerm) ATgetNext((ATermList) j_2);
      i_2 :
      if(match_int(k_2, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(l_2)), term_k_6), term_k_6);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_double_quote_0 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL;
  r_2 = t;
  p_2 :
  if(((ATgetType(r_2) == AT_LIST) && !(ATisEmpty(r_2))))
    {
      s_2 = ATgetFirst((ATermList) r_2);
      t_2 = (ATerm) ATgetNext((ATermList) r_2);
      q_2 :
      if(match_int(s_2, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(t_2)), term_n_6), term_k_6);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_0 (ATerm t)
{
  ATerm o_6 = t;
  int p_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      LocalPopChoice(p_6);
    }
  else
    {
      t = o_6;
      {
        ATerm q_6 = t;
        int r_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            LocalPopChoice(r_6);
          }
        else
          {
            t = q_6;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm y_6 = t;
  int z_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0(t);
      {
        ATerm o_0 (ATerm t)
        {
          t = Cons_2(t, _id, escape_chars_0);
          return(t);
        }
        t = Cons_2(t, _id, o_0);
      }
      LocalPopChoice(z_6);
    }
  else
    {
      t = y_6;
      {
        ATerm a_7 = t;
        int b_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            LocalPopChoice(b_7);
          }
        else
          {
            t = a_7;
            t = Nil_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_0 (ATerm t)
{
  t = string_as_chars_1(t, escape_chars_0);
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm y_2 = NULL;
  y_2 = t;
  t = SSL_is_int(not_null(y_2));
  return(t);
}
ATerm quote_chars_0 (ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL;
  d_3 = t;
  c_3 :
  if(match_cons(d_3, sym__2))
    {
      e_3 = ATgetArgument(d_3, 0);
      f_3 = ATgetArgument(d_3, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_3)), not_null(e_3)), (ATerm) ATinsert(ATempty, not_null(e_3)));
        {
          ATerm c_7 = t;
          int h_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_two_lists_0(t);
              LocalPopChoice(h_7);
            }
          else
            {
              t = c_7;
              t = conc_more_lists_0(t);
            }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm double_quote_chars_0 (ATerm t)
{
  ATerm k_3 = NULL;
  ATerm l_3 = NULL;
  l_3 = t;
  if(((k_3 != NULL) && (k_3 != l_3)))
    _fail(l_3);
  else
    k_3 = l_3;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_n_6, not_null(k_3));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm y_72 (ATerm))
{
  t = explode_string_0(t);
  {
    t = y_72(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm double_quote_0 (ATerm t)
{
  t = string_as_chars_1(t, double_quote_chars_0);
  return(t);
}
ATerm EdgeToDot_0 (ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL;
  y_3 = t;
  x_3 :
  if(match_cons(y_3, sym__2))
    {
      z_3 = ATgetArgument(y_3, 0);
      a_4 = ATgetArgument(y_3, 1);
      {
        ATerm i_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_4 = NULL,e_4 = NULL,k_4 = NULL,m_4 = NULL;
            ATerm k_7;
            k_7 = t;
            {
              ATerm f_4 = NULL;
              ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL;
              t = not_null(a_4);
              {
                f_4 = t;
                {
                  t = SSL_explode_term(not_null(f_4));
                  {
                    h_4 = t;
                    r_3 :
                    if(match_cons(h_4, sym__2))
                      {
                        i_4 = ATgetArgument(h_4, 0);
                        j_4 = ATgetArgument(h_4, 1);
                        {
                          if(((d_4 != NULL) && (d_4 != i_4)))
                            _fail(i_4);
                          else
                            d_4 = i_4;
                          if(((e_4 != NULL) && (e_4 != j_4)))
                            _fail(j_4);
                          else
                            e_4 = j_4;
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                }
              }
            }
            t = k_7;
            {
              ATerm p_7;
              p_7 = t;
              {
                ATerm l_4 = NULL;
                t = not_null(d_4);
                {
                  t = string_as_chars_1(t, escape_chars_0);
                  {
                    t = string_as_chars_1(t, double_quote_chars_0);
                    {
                      l_4 = t;
                      if(((k_4 != NULL) && (k_4 != l_4)))
                        _fail(l_4);
                      else
                        k_4 = l_4;
                    }
                  }
                }
              }
              t = p_7;
              {
                ATerm p_4 = NULL;
                t = not_null(e_4);
                {
                  ATerm q_0 (ATerm t)
                  {
                    ATerm n_4 = NULL;
                    n_4 = t;
                    t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_3)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_4)))));
                    return(t);
                  }
                  t = map_1(t, q_0);
                  {
                    p_4 = t;
                    if(((m_4 != NULL) && (m_4 != p_4)))
                      _fail(p_4);
                    else
                      m_4 = p_4;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(m_4)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_3)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_q_7, not_null(k_4)))))));
              }
            }
            LocalPopChoice(j_7);
          }
        else
          {
            t = i_7;
            {
              ATerm s_4 = NULL;
              ATerm t_4 = NULL,v_4 = NULL;
              t = not_null(a_4);
              {
                t = is_int_0(t);
                {
                  ATerm u_4 = NULL;
                  t = not_null(a_4);
                  {
                    t = int_to_string_0(t);
                    {
                      t = string_as_chars_1(t, escape_chars_0);
                      {
                        u_4 = t;
                        if(((t_4 != NULL) && (t_4 != u_4)))
                          _fail(u_4);
                        else
                          t_4 = u_4;
                      }
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_7), not_null(t_4)), term_s_7);
                    {
                      t = concat_strings_0(t);
                      {
                        v_4 = t;
                        if(((s_4 != NULL) && (s_4 != v_4)))
                          _fail(v_4);
                        else
                          s_4 = v_4;
                      }
                    }
                  }
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_3)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_q_7, not_null(s_4)))))));
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ListEdgeToDot_0 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL;
  j_5 = t;
  i_5 :
  if(match_cons(j_5, sym__2))
    {
      k_5 = ATgetArgument(j_5, 0);
      l_5 = ATgetArgument(j_5, 1);
      {
        ATerm o_5 = NULL;
        ATerm t_7;
        t_7 = t;
        {
          t = not_null(l_5);
          t = is_list_0(t);
        }
        t = t_7;
        {
          ATerm r_5 = NULL;
          t = not_null(l_5);
          {
            ATerm s_0 (ATerm t)
            {
              ATerm p_5 = NULL;
              p_5 = t;
              t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_5)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(p_5)))));
              return(t);
            }
            t = map_1(t, s_0);
            {
              r_5 = t;
              if(((o_5 != NULL) && (o_5 != r_5)))
                _fail(r_5);
              else
                o_5 = r_5;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(o_5)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_5)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_v_7)))));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm graph_to_adot_0 (ATerm t)
{
  ATerm x_5 = NULL;
  ATerm z_5 = NULL;
  x_5 = t;
  {
    ATerm a_6 = NULL;
    t = not_null(x_5);
    {
      ATerm t_0 (ATerm t)
      {
        ATerm a_8 = t;
        int b_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ListEdgeToDot_0(t);
            LocalPopChoice(b_8);
          }
        else
          {
            t = a_8;
            t = EdgeToDot_0(t);
          }
        return(t);
      }
      t = map_1(t, t_0);
      {
        t = concat_0(t);
        {
          a_6 = t;
          if(((z_5 != NULL) && (z_5 != a_6)))
            _fail(a_6);
          else
            z_5 = a_6;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_c_8, not_null(z_5));
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm e_6 = NULL;
  e_6 = t;
  t = SSL_int_to_string(not_null(e_6));
  return(t);
}
ATerm NodeId_0 (ATerm t)
{
  ATerm i_6 = NULL;
  ATerm j_6 = NULL;
  t = int_to_string_0(t);
  {
    j_6 = t;
    if(((i_6 != NULL) && (i_6 != j_6)))
      _fail(j_6);
    else
      i_6 = j_6;
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, term_e_8, not_null(i_6));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm address_0 (ATerm t)
{
  ATerm m_6 = NULL;
  m_6 = t;
  t = SSL_address(not_null(m_6));
  return(t);
}
ATerm term_to_graph_0 (ATerm t)
{
  ATerm s_6 = NULL,u_6 = NULL,w_6 = NULL;
  ATerm f_8;
  f_8 = t;
  {
    ATerm t_6 = NULL;
    t = address_0(t);
    {
      t = NodeId_0(t);
      {
        t_6 = t;
        if(((s_6 != NULL) && (s_6 != t_6)))
          _fail(t_6);
        else
          s_6 = t_6;
      }
    }
  }
  t = f_8;
  {
    ATerm g_8;
    g_8 = t;
    {
      ATerm v_6 = NULL;
      ATerm j_8 = t;
      int m_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_0 (ATerm t)
          {
            t = address_0(t);
            t = NodeId_0(t);
            return(t);
          }
          t = map_1(t, u_0);
          LocalPopChoice(m_8);
        }
      else
        {
          t = j_8;
          {
            ATerm v_0 (ATerm t)
            {
              t = address_0(t);
              t = NodeId_0(t);
              return(t);
            }
            t = _all(t, v_0);
          }
        }
      {
        v_6 = t;
        if(((u_6 != NULL) && (u_6 != v_6)))
          _fail(v_6);
        else
          u_6 = v_6;
      }
    }
    t = g_8;
    {
      ATerm x_6 = NULL;
      ATerm q_8 = t;
      int r_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_0 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm x_0 (ATerm t)
          {
            t = union_1(t, eq_0);
            return(t);
          }
          t = foldr_3(t, w_0, x_0, term_to_graph_0);
          LocalPopChoice(r_8);
        }
      else
        {
          t = q_8;
          {
            ATerm y_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            ATerm z_0 (ATerm t)
            {
              t = union_1(t, eq_0);
              return(t);
            }
            t = crush_3(t, y_0, z_0, term_to_graph_0);
          }
        }
      {
        x_6 = t;
        if(((w_6 != NULL) && (w_6 != x_6)))
          _fail(x_6);
        else
          w_6 = x_6;
      }
      t = (ATerm) ATinsert(CheckATermList(not_null(w_6)), (ATerm) ATmakeAppl(sym__2, not_null(s_6), not_null(u_6)));
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL;
  e_7 = t;
  d_7 :
  if(match_cons(e_7, sym__2))
    {
      f_7 = ATgetArgument(e_7, 0);
      g_7 = ATgetArgument(e_7, 1);
      if(((f_7 != NULL) && (f_7 != g_7)))
        _fail(g_7);
      else
        f_7 = g_7;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm z_68 (ATerm), ATerm a_69 (ATerm))
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL;
  m_7 = t;
  l_7 :
  if(((ATgetType(m_7) == AT_LIST) && !(ATisEmpty(m_7))))
    {
      n_7 = ATgetFirst((ATermList) m_7);
      o_7 = (ATerm) ATgetNext((ATermList) m_7);
      {
        t = a_69(t);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm r_7 = NULL;
            r_7 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_7), not_null(r_7));
              t = z_68(t);
            }
            return(t);
          }
          t = fetch_1(t, a_1);
        }
        t = not_null(o_7);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm v_68 (ATerm))
{
  ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL;
  x_7 = t;
  w_7 :
  if(match_cons(x_7, sym__2))
    {
      y_7 = ATgetArgument(x_7, 0);
      z_7 = ATgetArgument(x_7, 1);
      {
        t = not_null(y_7);
        {
          ATerm d_8 (ATerm t)
          {
            ATerm s_8 = t;
            int t_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(z_7);
                LocalPopChoice(t_8);
              }
            else
              {
                t = s_8;
                {
                  ATerm u_8 = t;
                  int v_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_1 (ATerm t)
                      {
                        t = not_null(z_7);
                        return(t);
                      }
                      t = HdMember_p__2(t, v_68, b_1);
                      t = d_8(t);
                      LocalPopChoice(v_8);
                    }
                  else
                    {
                      t = u_8;
                      t = Cons_2(t, _id, d_8);
                    }
                }
              }
            return(t);
          }
          t = d_8(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  t = union_1(t, eq_0);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm m_68 (ATerm), ATerm n_68 (ATerm), ATerm o_68 (ATerm))
{
  ATerm i_8 = NULL;
  ATerm k_8 = NULL;
  i_8 = t;
  {
    ATerm l_8 = NULL;
    ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL;
    t = not_null(i_8);
    {
      l_8 = t;
      {
        t = SSL_explode_term(not_null(l_8));
        {
          n_8 = t;
          h_8 :
          if(match_cons(n_8, sym__2))
            {
              o_8 = ATgetArgument(n_8, 0);
              p_8 = ATgetArgument(n_8, 1);
              if(((k_8 != NULL) && (k_8 != p_8)))
                _fail(p_8);
              else
                k_8 = p_8;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(k_8);
      t = foldr_3(t, m_68, n_68, o_68);
    }
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm q_69 (ATerm))
{
  ATerm a_9 = t;
  int b_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_69(t);
      LocalPopChoice(b_9);
    }
  else
    {
      t = a_9;
      {
        ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
        x_8 = t;
        w_8 :
        if(((ATgetType(x_8) == AT_LIST) && !(ATisEmpty(x_8))))
          {
            y_8 = ATgetFirst((ATermList) x_8);
            z_8 = (ATerm) ATgetNext((ATermList) x_8);
            {
              ATerm c_9 = NULL,e_9 = NULL;
              ATerm g_9;
              g_9 = t;
              {
                ATerm d_9 = NULL;
                t = not_null(y_8);
                {
                  t = q_69(t);
                  {
                    d_9 = t;
                    if(((c_9 != NULL) && (c_9 != d_9)))
                      _fail(d_9);
                    else
                      c_9 = d_9;
                  }
                }
              }
              t = g_9;
              {
                ATerm f_9 = NULL;
                t = not_null(z_8);
                {
                  t = foldr_3(t, o_69, p_69, q_69);
                  {
                    f_9 = t;
                    if(((e_9 != NULL) && (e_9 != f_9)))
                      _fail(f_9);
                    else
                      e_9 = f_9;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_9), not_null(e_9));
                  t = p_69(t);
                }
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm q_9 = NULL;
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
  q_9 = t;
  {
    ATerm v_9 = NULL;
    ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL;
    t = not_null(q_9);
    {
      v_9 = t;
      {
        t = SSL_explode_term(not_null(v_9));
        {
          x_9 = t;
          m_9 :
          if(match_cons(x_9, sym__2))
            {
              y_9 = ATgetArgument(x_9, 0);
              z_9 = ATgetArgument(x_9, 1);
              n_9 :
              if(match_string(y_9, ""))
                {
                  o_9 :
                  if(((ATgetType(z_9) == AT_LIST) && !(ATisEmpty(z_9))))
                    {
                      a_10 = ATgetFirst((ATermList) z_9);
                      b_10 = (ATerm) ATgetNext((ATermList) z_9);
                      p_9 :
                      if(((ATgetType(b_10) == AT_LIST) && !(ATisEmpty(b_10))))
                        {
                          c_10 = ATgetFirst((ATermList) b_10);
                          d_10 = (ATerm) ATgetNext((ATermList) b_10);
                          {
                            if(((s_9 != NULL) && (s_9 != a_10)))
                              _fail(a_10);
                            else
                              s_9 = a_10;
                            {
                              if(((u_9 != NULL) && (u_9 != c_10)))
                                _fail(c_10);
                              else
                                u_9 = c_10;
                              if(((t_9 != NULL) && (t_9 != d_10)))
                                _fail(d_10);
                              else
                                t_9 = d_10;
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    t = not_null(u_9);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm n_10 = NULL;
  ATerm p_10 = NULL,q_10 = NULL;
  n_10 = t;
  {
    ATerm r_10 = NULL;
    ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL;
    t = not_null(n_10);
    {
      r_10 = t;
      {
        t = SSL_explode_term(not_null(r_10));
        {
          t_10 = t;
          k_10 :
          if(match_cons(t_10, sym__2))
            {
              u_10 = ATgetArgument(t_10, 0);
              v_10 = ATgetArgument(t_10, 1);
              l_10 :
              if(match_string(u_10, ""))
                {
                  m_10 :
                  if(((ATgetType(v_10) == AT_LIST) && !(ATisEmpty(v_10))))
                    {
                      w_10 = ATgetFirst((ATermList) v_10);
                      x_10 = (ATerm) ATgetNext((ATermList) v_10);
                      {
                        if(((q_10 != NULL) && (q_10 != w_10)))
                          _fail(w_10);
                        else
                          q_10 = w_10;
                        if(((p_10 != NULL) && (p_10 != x_10)))
                          _fail(x_10);
                        else
                          p_10 = x_10;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    t = not_null(q_10);
  }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm w_76 (ATerm))
{
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_9;
      j_9 = t;
      {
        ATerm c_11 = NULL;
        ATerm d_11 = NULL;
        t = term_k_9;
        {
          t = get_config_0(t);
          {
            d_11 = t;
            if(((c_11 != NULL) && (c_11 != d_11)))
              _fail(d_11);
            else
              c_11 = d_11;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_11), term_l_9);
          t = geq_0(t);
        }
      }
      t = j_9;
      t = w_76(t);
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
      {
      }
    }
  return(t);
}
ATerm term_to_tree_0 (ATerm t)
{
  ATerm n_11 = NULL,p_11 = NULL;
  ATerm c_1 (ATerm t)
  {
    ATerm d_1 (ATerm t)
    {
      t = term_r_9;
      return(t);
    }
    t = debug_1(t, d_1);
    return(t);
  }
  t = if_verbose5_1(t, c_1);
  {
    ATerm w_9;
    w_9 = t;
    {
      ATerm o_11 = NULL;
      t = new_0(t);
      {
        o_11 = t;
        if(((n_11 != NULL) && (n_11 != o_11)))
          _fail(o_11);
        else
          n_11 = o_11;
      }
    }
    t = w_9;
    {
      ATerm q_11 = NULL;
      q_11 = t;
      if(((p_11 != NULL) && (p_11 != q_11)))
        _fail(q_11);
      else
        p_11 = q_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_11), not_null(p_11));
        {
          ATerm f_12 (ATerm t)
          {
            ATerm z_11 = NULL,b_12 = NULL;
            ATerm e_1 (ATerm t)
            {
              ATerm e_10 = t;
              int f_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_1 (ATerm t)
                  {
                    ATerm r_11 = NULL,t_11 = NULL;
                    ATerm g_10;
                    g_10 = t;
                    {
                      ATerm s_11 = NULL;
                      t = new_0(t);
                      {
                        s_11 = t;
                        if(((r_11 != NULL) && (r_11 != s_11)))
                          _fail(s_11);
                        else
                          r_11 = s_11;
                      }
                    }
                    t = g_10;
                    {
                      ATerm u_11 = NULL;
                      u_11 = t;
                      if(((t_11 != NULL) && (t_11 != u_11)))
                        _fail(u_11);
                      else
                        t_11 = u_11;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_11), not_null(t_11));
                    }
                    return(t);
                  }
                  t = map_1(t, h_1);
                  LocalPopChoice(f_10);
                }
              else
                {
                  t = e_10;
                  {
                    ATerm i_1 (ATerm t)
                    {
                      ATerm v_11 = NULL,x_11 = NULL;
                      ATerm h_10;
                      h_10 = t;
                      {
                        ATerm w_11 = NULL;
                        t = new_0(t);
                        {
                          w_11 = t;
                          if(((v_11 != NULL) && (v_11 != w_11)))
                            _fail(w_11);
                          else
                            v_11 = w_11;
                        }
                      }
                      t = h_10;
                      {
                        ATerm y_11 = NULL;
                        y_11 = t;
                        if(((x_11 != NULL) && (x_11 != y_11)))
                          _fail(y_11);
                        else
                          x_11 = y_11;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(v_11), not_null(x_11));
                      }
                      return(t);
                    }
                    t = _all(t, i_1);
                  }
                }
              return(t);
            }
            t = _2(t, _id, e_1);
            {
              ATerm i_10;
              i_10 = t;
              {
                ATerm a_12 = NULL;
                ATerm j_1 (ATerm t)
                {
                  ATerm j_10 = t;
                  int o_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = map_1(t, Fst_0);
                      LocalPopChoice(o_10);
                    }
                  else
                    {
                      t = j_10;
                      t = _all(t, Fst_0);
                    }
                  return(t);
                }
                t = _2(t, _id, j_1);
                {
                  a_12 = t;
                  if(((z_11 != NULL) && (z_11 != a_12)))
                    _fail(a_12);
                  else
                    z_11 = a_12;
                }
              }
              t = i_10;
              {
                ATerm c_12 = NULL;
                t = Snd_0(t);
                {
                  ATerm s_10 = t;
                  int y_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_1 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      ATerm l_1 (ATerm t)
                      {
                        t = union_1(t, eq_0);
                        return(t);
                      }
                      t = foldr_3(t, k_1, l_1, f_12);
                      LocalPopChoice(y_10);
                    }
                  else
                    {
                      t = s_10;
                      {
                        ATerm m_1 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        ATerm n_1 (ATerm t)
                        {
                          t = union_1(t, eq_0);
                          return(t);
                        }
                        t = crush_3(t, m_1, n_1, f_12);
                      }
                    }
                  {
                    c_12 = t;
                    if(((b_12 != NULL) && (b_12 != c_12)))
                      _fail(c_12);
                    else
                      b_12 = c_12;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(b_12)), not_null(z_11));
              }
            }
            return(t);
          }
          t = f_12(t);
        }
      }
    }
  }
  return(t);
}
ATerm to_adot_0 (ATerm t)
{
  ATerm z_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_11;
      b_11 = t;
      {
        t = term_d_6;
        t = get_config_0(t);
      }
      t = b_11;
      t = term_to_tree_0(t);
      LocalPopChoice(a_11);
    }
  else
    {
      t = z_10;
      {
        ATerm e_11;
        e_11 = t;
        {
          t = term_v_5;
          t = get_config_0(t);
        }
        t = e_11;
        t = term_to_graph_0(t);
      }
    }
  t = graph_to_adot_0(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm o_12 = NULL;
  ATerm f_11;
  f_11 = t;
  {
    ATerm o_1 (ATerm t)
    {
      ATerm p_12 = NULL,q_12 = NULL;
      p_12 = t;
      n_12 :
      if(match_cons(p_12, sym_Program_1))
        {
          q_12 = ATgetArgument(p_12, 0);
          if(((o_12 != NULL) && (o_12 != q_12)))
            _fail(q_12);
          else
            o_12 = q_12;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, o_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(o_12)), term_h_11));
      {
        t = printnl_0(t);
        {
          t = term_j_11;
          t = exit_0(t);
        }
      }
    }
  }
  t = f_11;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
  u_12 = t;
  t_12 :
  if(match_cons(u_12, sym__2))
    {
      v_12 = ATgetArgument(u_12, 0);
      w_12 = ATgetArgument(u_12, 1);
      {
        ATerm k_11;
        k_11 = t;
        t = SSL_printnl(not_null(v_12), not_null(w_12));
        t = k_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm b_13 = NULL;
  b_13 = t;
  t = SSL_implode_string(not_null(b_13));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      {
        ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
        g_13 = t;
        f_13 :
        if(((ATgetType(g_13) == AT_LIST) && !(ATisEmpty(g_13))))
          {
            h_13 = ATgetFirst((ATermList) g_13);
            i_13 = (ATerm) ATgetNext((ATermList) g_13);
            {
              t = not_null(h_13);
              {
                ATerm p_1 (ATerm t)
                {
                  t = not_null(i_13);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, p_1);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm s_13 = NULL;
  ATerm u_13 = NULL;
  s_13 = t;
  {
    ATerm v_13 = NULL;
    ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL;
    t = not_null(s_13);
    {
      v_13 = t;
      {
        t = SSL_explode_term(not_null(v_13));
        {
          x_13 = t;
          q_13 :
          if(match_cons(x_13, sym__2))
            {
              y_13 = ATgetArgument(x_13, 0);
              z_13 = ATgetArgument(x_13, 1);
              r_13 :
              if(match_string(y_13, ""))
                {
                  if(((u_13 != NULL) && (u_13 != z_13)))
                    _fail(z_13);
                  else
                    u_13 = z_13;
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_13);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_63 (ATerm))
{
  ATerm d_14 (ATerm t)
  {
    ATerm d_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_14);
        LocalPopChoice(e_12);
      }
    else
      {
        t = d_12;
        {
          t = Nil_0(t);
          t = n_63(t);
        }
      }
    return(t);
  }
  t = d_14(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL;
  g_14 = t;
  f_14 :
  if(match_cons(g_14, sym__2))
    {
      h_14 = ATgetArgument(g_14, 0);
      i_14 = ATgetArgument(g_14, 1);
      {
        t = not_null(h_14);
        {
          ATerm q_1 (ATerm t)
          {
            t = not_null(i_14);
            return(t);
          }
          t = at_end_1(t, q_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm n_14 = NULL;
  n_14 = t;
  t = SSL_explode_string(not_null(n_14));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm w_73 (ATerm))
{
  ATerm k_12;
  k_12 = t;
  {
    ATerm s_14 = NULL,u_14 = NULL;
    ATerm l_12;
    l_12 = t;
    {
      ATerm t_14 = NULL;
      t = w_73(t);
      {
        t_14 = t;
        if(((s_14 != NULL) && (s_14 != t_14)))
          _fail(t_14);
        else
          s_14 = t_14;
      }
    }
    t = l_12;
    {
      ATerm v_14 = NULL;
      v_14 = t;
      if(((u_14 != NULL) && (u_14 != v_14)))
        _fail(v_14);
      else
        u_14 = v_14;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_14)), not_null(s_14)));
        t = printnl_0(t);
      }
    }
  }
  t = k_12;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm z_14 = NULL;
  z_14 = t;
  t = SSL_is_string(not_null(z_14));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm m_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(r_12);
    }
  else
    {
      t = m_12;
      {
        ATerm s_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              ATerm y_12 = t;
              int z_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(z_12);
                }
              else
                {
                  t = y_12;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, r_1);
            LocalPopChoice(x_12);
          }
        else
          {
            t = s_12;
            {
              ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL;
              i_15 = t;
              h_15 :
              if(match_cons(i_15, sym_Path_1))
                {
                  j_15 = ATgetArgument(i_15, 0);
                  t = not_null(j_15);
                }
              else
                {
                  if(match_cons(i_15, sym_Var_1))
                    {
                      j_15 = ATgetArgument(i_15, 0);
                      {
                        t = not_null(j_15);
                        {
                          ATerm a_13 = t;
                          int c_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(c_13);
                            }
                          else
                            {
                              t = a_13;
                              {
                                ATerm s_1 (ATerm t)
                                {
                                  t = term_d_13;
                                  return(t);
                                }
                                t = debug_1(t, s_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(i_15, sym_Prefix_2))
                        {
                          j_15 = ATgetArgument(i_15, 0);
                          k_15 = ATgetArgument(i_15, 1);
                          {
                            ATerm p_15 = NULL,r_15 = NULL;
                            ATerm e_13;
                            e_13 = t;
                            {
                              ATerm q_15 = NULL;
                              t = not_null(j_15);
                              {
                                t = eval_config_0(t);
                                {
                                  q_15 = t;
                                  if(((p_15 != NULL) && (p_15 != q_15)))
                                    _fail(q_15);
                                  else
                                    p_15 = q_15;
                                }
                              }
                            }
                            t = e_13;
                            {
                              ATerm s_15 = NULL;
                              t = not_null(k_15);
                              {
                                t = eval_config_0(t);
                                {
                                  s_15 = t;
                                  if(((r_15 != NULL) && (r_15 != s_15)))
                                    _fail(s_15);
                                  else
                                    r_15 = s_15;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_15), not_null(r_15));
                                t = conc_strings_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm a_16 = NULL;
  a_16 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_j_13, not_null(a_16));
    {
      t = table_get_0(t);
      {
        ATerm k_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm m_13;
              m_13 = t;
              {
                ATerm c_16 = NULL;
                ATerm d_16 = NULL;
                d_16 = t;
                if(((c_16 != NULL) && (c_16 != d_16)))
                  _fail(d_16);
                else
                  c_16 = d_16;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_j_13, not_null(a_16), not_null(c_16));
                  t = table_put_0(t);
                }
              }
              t = m_13;
            }
            LocalPopChoice(l_13);
          }
        else
          {
            t = k_13;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm t_76 (ATerm))
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_13;
      p_13 = t;
      {
        ATerm h_16 = NULL;
        ATerm i_16 = NULL;
        t = term_k_9;
        {
          t = get_config_0(t);
          {
            i_16 = t;
            if(((h_16 != NULL) && (h_16 != i_16)))
              _fail(i_16);
            else
              h_16 = i_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_16), term_t_13);
          t = geq_0(t);
        }
      }
      t = p_13;
      t = t_76(t);
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL;
  m_16 = t;
  l_16 :
  if(match_cons(m_16, sym__2))
    {
      n_16 = ATgetArgument(m_16, 0);
      o_16 = ATgetArgument(m_16, 1);
      t = SSL_WriteToTextFile(not_null(n_16), not_null(o_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm i_47 (ATerm), ATerm j_47 (ATerm))
{
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL;
  y_16 = t;
  x_16 :
  if(match_cons(y_16, sym__2))
    {
      z_16 = ATgetArgument(y_16, 0);
      a_17 = ATgetArgument(y_16, 1);
      {
        ATerm e_17 = NULL,g_17 = NULL;
        ATerm f_17 = NULL;
        t = SSLgetAnnotations(not_null(y_16));
        {
          f_17 = t;
          if(((e_17 != NULL) && (e_17 != f_17)))
            _fail(f_17);
          else
            e_17 = f_17;
        }
        {
          t = not_null(z_16);
          {
            ATerm i_17 = NULL;
            t = i_47(t);
            {
              g_17 = t;
              {
                t = not_null(a_17);
                {
                  ATerm x_17 = NULL;
                  t = j_47(t);
                  {
                    i_17 = t;
                    {
                      ATerm y_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_17), not_null(i_17)), not_null(e_17));
                      {
                        y_17 = t;
                        if(((x_17 != NULL) && (x_17 != y_17)))
                          _fail(y_17);
                        else
                          x_17 = y_17;
                      }
                      t = not_null(x_17);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL;
  g_18 = t;
  f_18 :
  if(match_cons(g_18, sym__2))
    {
      h_18 = ATgetArgument(g_18, 0);
      i_18 = ATgetArgument(g_18, 1);
      t = SSL_WriteToBinaryFile(not_null(h_18), not_null(i_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm q_18 = NULL;
  ATerm w_13;
  w_13 = t;
  {
    ATerm t_1 (ATerm t)
    {
      ATerm a_14 = t;
      int b_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_1 (ATerm t)
          {
            ATerm r_18 = NULL,s_18 = NULL;
            r_18 = t;
            n_18 :
            if(match_cons(r_18, sym_Output_1))
              {
                s_18 = ATgetArgument(r_18, 0);
                if(((q_18 != NULL) && (q_18 != s_18)))
                  _fail(s_18);
                else
                  q_18 = s_18;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, v_1);
          LocalPopChoice(b_14);
        }
      else
        {
          t = a_14;
          {
            ATerm t_18 = NULL;
            t = term_c_14;
            {
              t_18 = t;
              if(((q_18 != NULL) && (q_18 != t_18)))
                _fail(t_18);
              else
                q_18 = t_18;
            }
          }
        }
      return(t);
    }
    t = _2(t, t_1, _id);
  }
  t = w_13;
  {
    ATerm w_1 (ATerm t)
    {
      ATerm x_1 (ATerm t)
      {
        t = not_null(q_18);
        return(t);
      }
      t = split_2(t, x_1, _id);
      return(t);
    }
    t = _2(t, _id, w_1);
    {
      ATerm e_14 = t;
      int j_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_2 (ATerm t)
          {
            ATerm d_2 (ATerm t)
            {
              ATerm u_18 = NULL;
              u_18 = t;
              p_18 :
              if(!(match_cons(u_18, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, d_2);
            return(t);
          }
          t = _2(t, b_2, WriteToBinaryFile_0);
          LocalPopChoice(j_14);
        }
      else
        {
          t = e_14;
          t = _2(t, _id, WriteToTextFile_0);
        }
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm a_75 (ATerm))
{
  ATerm a_19 = NULL,c_19 = NULL,i_19 = NULL,j_19 = NULL;
  ATerm k_14;
  k_14 = t;
  t = dtime_0(t);
  t = k_14;
  {
    t = a_75(t);
    {
      ATerm l_14;
      l_14 = t;
      {
        ATerm b_19 = NULL;
        t = dtime_0(t);
        {
          b_19 = t;
          if(((a_19 != NULL) && (a_19 != b_19)))
            _fail(b_19);
          else
            a_19 = b_19;
        }
      }
      t = l_14;
      {
        c_19 = t;
        z_18 :
        if(match_cons(c_19, sym__2))
          {
            i_19 = ATgetArgument(c_19, 0);
            j_19 = ATgetArgument(c_19, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_19)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(a_19))), not_null(j_19));
          }
        else
          {
            _fail(t);
          }
      }
    }
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm p_19 = NULL;
  p_19 = t;
  t = SSL_ReadFromFile(not_null(p_19));
  return(t);
}
ATerm split_2 (ATerm t, ATerm b_71 (ATerm), ATerm c_71 (ATerm))
{
  ATerm u_19 = NULL,z_19 = NULL;
  ATerm m_14;
  m_14 = t;
  {
    ATerm v_19 = NULL;
    t = b_71(t);
    {
      v_19 = t;
      if(((u_19 != NULL) && (u_19 != v_19)))
        _fail(v_19);
      else
        u_19 = v_19;
    }
  }
  t = m_14;
  {
    ATerm a_20 = NULL;
    t = c_71(t);
    {
      a_20 = t;
      if(((z_19 != NULL) && (z_19 != a_20)))
        _fail(a_20);
      else
        z_19 = a_20;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_19), not_null(z_19));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm g_20 = NULL;
  ATerm o_14;
  o_14 = t;
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_2 (ATerm t)
        {
          ATerm h_20 = NULL,i_20 = NULL;
          h_20 = t;
          e_20 :
          if(match_cons(h_20, sym_Input_1))
            {
              i_20 = ATgetArgument(h_20, 0);
              if(((g_20 != NULL) && (g_20 != i_20)))
                _fail(i_20);
              else
                g_20 = i_20;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, e_2);
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        {
          ATerm j_20 = NULL;
          t = term_r_14;
          {
            j_20 = t;
            if(((g_20 != NULL) && (g_20 != j_20)))
              _fail(j_20);
            else
              g_20 = j_20;
          }
        }
      }
  }
  t = o_14;
  {
    ATerm f_2 (ATerm t)
    {
      t = not_null(g_20);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, f_2);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm n_20 = NULL;
    n_20 = t;
    m_20 :
    if(!(match_string(n_20, "-v")))
      {
        if(!(match_string(n_20, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    t = term_x_14;
    t = set_config_0(t);
    t = term_y_14;
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = term_a_15;
    return(t);
  }
  t = Option_3(t, h_2, m_2, n_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm q_20 = NULL;
    q_20 = t;
    o_20 :
    if(!(match_string(q_20, "-k")))
      {
        if(!(match_string(q_20, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm b_15;
    b_15 = t;
    {
      ATerm r_20 = NULL;
      ATerm s_20 = NULL;
      t = string_to_int_0(t);
      {
        s_20 = t;
        if(((r_20 != NULL) && (r_20 != s_20)))
          _fail(s_20);
        else
          r_20 = s_20;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_15, not_null(r_20));
        t = set_config_0(t);
      }
    }
    t = b_15;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_d_15;
    return(t);
  }
  t = ArgOption_3(t, o_2, u_2, v_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm v_20 = NULL;
  v_20 = t;
  t = SSL_string_to_int(not_null(v_20));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_2 (ATerm t)
      {
        ATerm d_21 = NULL;
        d_21 = t;
        y_20 :
        if(!(match_string(d_21, "-S")))
          {
            if(!(match_string(d_21, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm z_2 (ATerm t)
      {
        t = term_l_15;
        t = set_config_0(t);
        t = term_m_15;
        return(t);
      }
      ATerm a_3 (ATerm t)
      {
        t = term_n_15;
        return(t);
      }
      t = Option_3(t, x_2, z_2, a_3);
      LocalPopChoice(f_15);
    }
  else
    {
      t = e_15;
      {
        ATerm o_15 = t;
        int t_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_3 (ATerm t)
            {
              ATerm e_21 = NULL;
              e_21 = t;
              z_20 :
              if(!(match_string(e_21, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm g_3 (ATerm t)
            {
              ATerm h_21 = NULL;
              ATerm u_15;
              u_15 = t;
              {
                ATerm f_21 = NULL;
                ATerm g_21 = NULL;
                t = string_to_int_0(t);
                {
                  g_21 = t;
                  if(((f_21 != NULL) && (f_21 != g_21)))
                    _fail(g_21);
                  else
                    f_21 = g_21;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_9, not_null(f_21));
                  t = set_config_0(t);
                }
              }
              t = u_15;
              {
                ATerm i_21 = NULL;
                i_21 = t;
                if(((h_21 != NULL) && (h_21 != i_21)))
                  _fail(i_21);
                else
                  h_21 = i_21;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(h_21));
              }
              return(t);
            }
            ATerm h_3 (ATerm t)
            {
              t = term_v_15;
              return(t);
            }
            t = ArgOption_3(t, b_3, g_3, h_3);
            LocalPopChoice(t_15);
          }
        else
          {
            t = o_15;
            {
              ATerm i_3 (ATerm t)
              {
                ATerm j_21 = NULL;
                j_21 = t;
                c_21 :
                if(!(match_string(j_21, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm j_3 (ATerm t)
              {
                t = term_x_15;
                t = set_config_0(t);
                t = term_y_15;
                return(t);
              }
              ATerm m_3 (ATerm t)
              {
                t = term_z_15;
                return(t);
              }
              t = Option_3(t, i_3, j_3, m_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm b_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(e_16);
    }
  else
    {
      t = b_16;
      {
        ATerm f_16 = t;
        int g_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(g_16);
          }
        else
          {
            t = f_16;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm p_21 = NULL;
    p_21 = t;
    m_21 :
    if(!(match_string(p_21, "-o")))
      {
        if(!(match_string(p_21, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    ATerm s_21 = NULL;
    ATerm j_16;
    j_16 = t;
    {
      ATerm q_21 = NULL;
      ATerm r_21 = NULL;
      r_21 = t;
      if(((q_21 != NULL) && (q_21 != r_21)))
        _fail(r_21);
      else
        q_21 = r_21;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_16, not_null(q_21));
        t = set_config_0(t);
      }
    }
    t = j_16;
    {
      ATerm t_21 = NULL;
      t_21 = t;
      if(((s_21 != NULL) && (s_21 != t_21)))
        _fail(t_21);
      else
        s_21 = t_21;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(s_21));
    }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    t = term_p_16;
    return(t);
  }
  t = ArgOption_3(t, n_3, o_3, p_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm q_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(r_16);
    }
  else
    {
      t = q_16;
      {
        ATerm q_3 (ATerm t)
        {
          ATerm x_21 = NULL;
          x_21 = t;
          w_21 :
          if(!(match_string(x_21, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm s_3 (ATerm t)
        {
          t = term_t_16;
          t = set_config_0(t);
          t = term_u_16;
          return(t);
        }
        ATerm t_3 (ATerm t)
        {
          t = term_v_16;
          return(t);
        }
        t = Option_3(t, q_3, s_3, t_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL;
  d_22 = t;
  b_22 :
  if(match_string(d_22, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(d_22) == AT_LIST) && !(ATisEmpty(d_22))))
        {
          e_22 = ATgetFirst((ATermList) d_22);
          f_22 = (ATerm) ATgetNext((ATermList) d_22);
          c_22 :
          if(((ATgetType(f_22) == AT_LIST) && !(ATisEmpty(f_22))))
            {
              g_22 = ATgetFirst((ATermList) f_22);
              h_22 = (ATerm) ATgetNext((ATermList) f_22);
              {
                ATerm l_22 = NULL;
                ATerm w_16;
                w_16 = t;
                {
                  t = not_null(e_22);
                  t = j_0(t);
                }
                t = w_16;
                {
                  ATerm m_22 = NULL;
                  t = not_null(g_22);
                  {
                    t = k_0(t);
                    {
                      m_22 = t;
                      if(((l_22 != NULL) && (l_22 != m_22)))
                        _fail(m_22);
                      else
                        l_22 = m_22;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_22)), not_null(l_22));
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm t_22 = NULL;
    t_22 = t;
    q_22 :
    if(!(match_string(t_22, "-i")))
      {
        if(!(match_string(t_22, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    ATerm w_22 = NULL;
    ATerm b_17;
    b_17 = t;
    {
      ATerm u_22 = NULL;
      ATerm v_22 = NULL;
      v_22 = t;
      if(((u_22 != NULL) && (u_22 != v_22)))
        _fail(v_22);
      else
        u_22 = v_22;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_17, not_null(u_22));
        t = set_config_0(t);
      }
    }
    t = b_17;
    {
      ATerm x_22 = NULL;
      x_22 = t;
      if(((w_22 != NULL) && (w_22 != x_22)))
        _fail(x_22);
      else
        w_22 = x_22;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_22));
    }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_d_17;
    return(t);
  }
  t = ArgOption_3(t, u_3, v_3, w_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm h_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(j_17);
    }
  else
    {
      t = h_17;
      {
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_g_11, (ATerm) ATinsert(ATempty, term_m_17));
  {
    t = printnl_0(t);
    {
      t = term_j_11;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm b_23 = NULL;
  b_23 = t;
  t = SSL_TicksToSeconds(not_null(b_23));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL;
  g_23 = t;
  f_23 :
  if(match_cons(g_23, sym__2))
    {
      h_23 = ATgetArgument(g_23, 0);
      i_23 = ATgetArgument(g_23, 1);
      {
        ATerm n_17 = t;
        int o_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(h_23), not_null(i_23));
            LocalPopChoice(o_17);
          }
        else
          {
            t = n_17;
            t = SSL_addr(not_null(h_23), not_null(i_23));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm m_69 (ATerm), ATerm n_69 (ATerm))
{
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_69(t);
      LocalPopChoice(q_17);
    }
  else
    {
      t = p_17;
      {
        ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
        p_23 = t;
        o_23 :
        if(((ATgetType(p_23) == AT_LIST) && !(ATisEmpty(p_23))))
          {
            q_23 = ATgetFirst((ATermList) p_23);
            r_23 = (ATerm) ATgetNext((ATermList) p_23);
            {
              ATerm u_23 = NULL;
              ATerm v_23 = NULL;
              t = not_null(r_23);
              {
                t = foldr_2(t, m_69, n_69);
                {
                  v_23 = t;
                  if(((u_23 != NULL) && (u_23 != v_23)))
                    _fail(v_23);
                  else
                    u_23 = v_23;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_23), not_null(u_23));
                t = n_69(t);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2 (ATerm t, ATerm k_68 (ATerm), ATerm l_68 (ATerm))
{
  ATerm c_24 = NULL;
  ATerm e_24 = NULL;
  c_24 = t;
  {
    ATerm f_24 = NULL;
    ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
    t = not_null(c_24);
    {
      f_24 = t;
      {
        t = SSL_explode_term(not_null(f_24));
        {
          h_24 = t;
          b_24 :
          if(match_cons(h_24, sym__2))
            {
              i_24 = ATgetArgument(h_24, 0);
              j_24 = ATgetArgument(h_24, 1);
              if(((e_24 != NULL) && (e_24 != j_24)))
                _fail(j_24);
              else
                e_24 = j_24;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_24);
      t = foldr_2(t, k_68, l_68);
    }
  }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm b_4 (ATerm t)
    {
      t = term_g_15;
      return(t);
    }
    t = crush_2(t, b_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm r_24 = NULL,u_24 = NULL,v_24 = NULL;
  r_24 = t;
  q_24 :
  if(match_cons(r_24, sym__2))
    {
      u_24 = ATgetArgument(r_24, 0);
      v_24 = ATgetArgument(r_24, 1);
      {
        ATerm r_17;
        r_17 = t;
        {
          ATerm s_17 = t;
          int t_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(u_24), not_null(v_24));
              LocalPopChoice(t_17);
            }
          else
            {
              t = s_17;
              t = SSL_gtr(not_null(u_24), not_null(v_24));
            }
        }
        t = r_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm e_25 = NULL;
  ATerm u_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL;
      f_25 = t;
      d_25 :
      if(match_cons(f_25, sym__2))
        {
          g_25 = ATgetArgument(f_25, 0);
          h_25 = ATgetArgument(f_25, 1);
          {
            if(((e_25 != NULL) && (e_25 != g_25)))
              _fail(g_25);
            else
              e_25 = g_25;
            if(((e_25 != NULL) && (e_25 != h_25)))
              _fail(h_25);
            else
              e_25 = h_25;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(v_17);
    }
  else
    {
      t = u_17;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm s_76 (ATerm))
{
  ATerm w_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_18;
      a_18 = t;
      {
        ATerm o_25 = NULL;
        ATerm p_25 = NULL;
        t = term_k_9;
        {
          t = get_config_0(t);
          {
            p_25 = t;
            if(((o_25 != NULL) && (o_25 != p_25)))
              _fail(p_25);
            else
              o_25 = p_25;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_25), term_j_11);
          t = geq_0(t);
        }
      }
      t = a_18;
      t = s_76(t);
      LocalPopChoice(z_17);
    }
  else
    {
      t = w_17;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm t_25 = NULL,v_25 = NULL;
    ATerm b_18;
    b_18 = t;
    {
      ATerm u_25 = NULL;
      t = run_time_0(t);
      {
        u_25 = t;
        if(((t_25 != NULL) && (t_25 != u_25)))
          _fail(u_25);
        else
          t_25 = u_25;
      }
    }
    t = b_18;
    {
      ATerm w_25 = NULL;
      t = term_c_18;
      {
        t = get_config_0(t);
        {
          w_25 = t;
          if(((v_25 != NULL) && (v_25 != w_25)))
            _fail(w_25);
          else
            v_25 = w_25;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_18), not_null(t_25)), term_d_18), not_null(v_25)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, c_4);
  {
    t = term_g_15;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_26 = NULL;
  d_26 = t;
  c_26 :
  if(match_cons(d_26, sym_Version_0))
    {
      ATerm f_26 = NULL,h_26 = NULL;
      ATerm j_18;
      j_18 = t;
      {
        ATerm g_26 = NULL;
        t = SSLgetAnnotations(not_null(d_26));
        {
          g_26 = t;
          if(((f_26 != NULL) && (f_26 != g_26)))
            _fail(g_26);
          else
            f_26 = g_26;
        }
      }
      t = j_18;
      {
        ATerm i_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(f_26));
        {
          i_26 = t;
          if(((h_26 != NULL) && (h_26 != i_26)))
            _fail(i_26);
          else
            h_26 = i_26;
        }
        t = not_null(h_26);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm y_74 (ATerm))
{
  ATerm g_4 (ATerm t)
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        {
          ATerm m_18 = t;
          int o_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(o_18);
            }
          else
            {
              t = m_18;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, g_4);
  t = y_74(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_26 = NULL;
  n_26 = t;
  t = SSL_table_create(not_null(n_26));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_26 = NULL;
  r_26 = t;
  {
    ATerm v_18;
    v_18 = t;
    {
      t = term_w_18;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_18, term_x_18, not_null(r_26));
          t = table_put_0(t);
        }
      }
    }
    t = v_18;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm v_26 = NULL;
  v_26 = t;
  t = SSL_table_destroy(not_null(v_26));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_27 = NULL;
  e_27 = t;
  t = SSL_exit(not_null(e_27));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
  i_27 = t;
  h_27 :
  if(((ATgetType(i_27) == AT_LIST) && ATisEmpty(i_27)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(i_27) == AT_LIST) && !(ATisEmpty(i_27))))
        {
          j_27 = ATgetFirst((ATermList) i_27);
          k_27 = (ATerm) ATgetNext((ATermList) i_27);
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0 (ATerm t)
{
  ATerm y_18;
  y_18 = t;
  {
    ATerm n_27 = NULL;
    ATerm q_27 = NULL;
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        {
          ATerm o_27 = NULL;
          ATerm p_27 = NULL;
          p_27 = t;
          if(((o_27 != NULL) && (o_27 != p_27)))
            _fail(p_27);
          else
            o_27 = p_27;
          t = (ATerm) ATinsert(ATempty, not_null(o_27));
        }
      }
    {
      q_27 = t;
      if(((n_27 != NULL) && (n_27 != q_27)))
        _fail(q_27);
      else
        n_27 = q_27;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_14, not_null(n_27));
      t = printnl_0(t);
    }
  }
  t = y_18;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm w_78 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_62 (ATerm))
{
  ATerm t_27 (ATerm t)
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = Cons_2(t, y_62, t_27);
      }
    return(t);
  }
  t = t_27(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
  c_28 = t;
  z_27 :
  if(((ATgetType(c_28) == AT_LIST) && !(ATisEmpty(c_28))))
    {
      a_28 = ATgetFirst((ATermList) c_28);
      b_28 = (ATerm) ATgetNext((ATermList) c_28);
      {
        ATerm f_28 = NULL;
        t = not_null(b_28);
        {
          ATerm h_19;
          h_19 = t;
          {
            ATerm g_28 = NULL,i_28 = NULL,k_28 = NULL;
            ATerm k_19;
            k_19 = t;
            {
              ATerm h_28 = NULL;
              t = i_0(t);
              {
                h_28 = t;
                if(((g_28 != NULL) && (g_28 != h_28)))
                  _fail(h_28);
                else
                  g_28 = h_28;
              }
            }
            t = k_19;
            {
              ATerm j_28 = NULL;
              t = not_null(a_28);
              {
                t = h_0(t);
                {
                  j_28 = t;
                  if(((i_28 != NULL) && (i_28 != j_28)))
                    _fail(j_28);
                  else
                    i_28 = j_28;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(g_28)), not_null(i_28));
                {
                  k_28 = t;
                  if(((f_28 != NULL) && (f_28 != k_28)))
                    _fail(k_28);
                  else
                    f_28 = k_28;
                }
              }
            }
          }
          t = h_19;
          {
            ATerm o_4 (ATerm t)
            {
              t = not_null(f_28);
              return(t);
            }
            t = reverse_acc_2(t, h_0, o_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(c_28) == AT_LIST) && ATisEmpty(c_28)))
        {
          {
            t = term_w_5;
            t = i_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, q_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm v_78 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm u_54 (ATerm))
{
  ATerm v_28 = NULL,w_28 = NULL;
  v_28 = t;
  u_28 :
  if(match_cons(v_28, sym_Program_1))
    {
      w_28 = ATgetArgument(v_28, 0);
      {
        ATerm z_28 = NULL,b_29 = NULL;
        ATerm a_29 = NULL;
        t = SSLgetAnnotations(not_null(v_28));
        {
          a_29 = t;
          if(((z_28 != NULL) && (z_28 != a_29)))
            _fail(a_29);
          else
            z_28 = a_29;
        }
        {
          t = not_null(w_28);
          {
            ATerm d_29 = NULL;
            t = u_54(t);
            {
              b_29 = t;
              {
                ATerm e_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_29)), not_null(z_28));
                {
                  e_29 = t;
                  if(((d_29 != NULL) && (d_29 != e_29)))
                    _fail(e_29);
                  else
                    d_29 = e_29;
                }
                t = not_null(d_29);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm m_29 = NULL;
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_29 = NULL;
      t = term_c_18;
      {
        t = get_config_0(t);
        {
          n_29 = t;
          if(((m_29 != NULL) && (m_29 != n_29)))
            _fail(n_29);
          else
            m_29 = n_29;
        }
      }
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
      {
        ATerm r_4 (ATerm t)
        {
          ATerm w_4 (ATerm t)
          {
            ATerm o_29 = NULL;
            o_29 = t;
            if(((m_29 != NULL) && (m_29 != o_29)))
              _fail(o_29);
            else
              m_29 = o_29;
            return(t);
          }
          t = Program_1(t, w_4);
          return(t);
        }
        t = fetch_1(t, r_4);
      }
    }
  {
    t = term_n_19;
    {
      t = echo_0(t);
      {
        t = term_r_19;
        {
          t = table_get_0(t);
          {
            ATerm x_4 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, x_4);
            {
              ATerm y_4 (ATerm t)
              {
                ATerm p_29 = NULL;
                ATerm q_29 = NULL;
                q_29 = t;
                if(((p_29 != NULL) && (p_29 != q_29)))
                  _fail(q_29);
                else
                  p_29 = q_29;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_29)), term_s_19);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, y_4);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm t_19;
  t_19 = t;
  {
    ATerm v_29 = NULL;
    ATerm w_29 = NULL;
    w_29 = t;
    if(((v_29 != NULL) && (v_29 != w_29)))
      _fail(w_29);
    else
      v_29 = w_29;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_11, (ATerm) ATinsert(ATempty, not_null(v_29)));
      t = printnl_0(t);
    }
  }
  t = t_19;
  return(t);
}
ATerm say_1 (ATerm t, ATerm x_73 (ATerm))
{
  ATerm w_19;
  w_19 = t;
  {
    t = x_73(t);
    t = debug_0(t);
  }
  t = w_19;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm v_54 (ATerm))
{
  ATerm d_30 = NULL,e_30 = NULL;
  d_30 = t;
  c_30 :
  if(match_cons(d_30, sym_Undefined_1))
    {
      e_30 = ATgetArgument(d_30, 0);
      {
        ATerm h_30 = NULL,j_30 = NULL;
        ATerm i_30 = NULL;
        t = SSLgetAnnotations(not_null(d_30));
        {
          i_30 = t;
          if(((h_30 != NULL) && (h_30 != i_30)))
            _fail(i_30);
          else
            h_30 = i_30;
        }
        {
          t = not_null(e_30);
          {
            ATerm l_30 = NULL;
            t = v_54(t);
            {
              j_30 = t;
              {
                ATerm m_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(j_30)), not_null(h_30));
                {
                  m_30 = t;
                  if(((l_30 != NULL) && (l_30 != m_30)))
                    _fail(m_30);
                  else
                    l_30 = m_30;
                }
                t = not_null(l_30);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm h_63 (ATerm))
{
  ATerm r_30 (ATerm t)
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_63, _id);
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        t = Cons_2(t, _id, r_30);
      }
    return(t);
  }
  t = r_30(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_77 (ATerm))
{
  t = fetch_1(t, v_77);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_30 = NULL;
  w_30 = t;
  v_30 :
  if(match_cons(w_30, sym_Help_0))
    {
      ATerm y_30 = NULL,a_31 = NULL;
      ATerm b_20;
      b_20 = t;
      {
        ATerm z_30 = NULL;
        t = SSLgetAnnotations(not_null(w_30));
        {
          z_30 = t;
          if(((y_30 != NULL) && (y_30 != z_30)))
            _fail(z_30);
          else
            y_30 = z_30;
        }
      }
      t = b_20;
      {
        ATerm b_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(y_30));
        {
          b_31 = t;
          if(((a_31 != NULL) && (a_31 != b_31)))
            _fail(b_31);
          else
            a_31 = b_31;
        }
        t = not_null(a_31);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm h_55 (ATerm))
{
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_55(t);
      LocalPopChoice(d_20);
    }
  else
    {
      t = c_20;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
  j_31 = t;
  g_31 :
  if(match_cons(j_31, sym__2))
    {
      k_31 = ATgetArgument(j_31, 0);
      l_31 = ATgetArgument(j_31, 1);
      t = SSL_table_get(not_null(k_31), not_null(l_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,a_32 = NULL,b_32 = NULL;
  v_31 = t;
  u_31 :
  if(match_cons(v_31, sym__3))
    {
      w_31 = ATgetArgument(v_31, 0);
      a_32 = ATgetArgument(v_31, 1);
      b_32 = ATgetArgument(v_31, 2);
      {
        ATerm f_20;
        f_20 = t;
        {
          ATerm g_32 = NULL;
          ATerm h_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_31), not_null(a_32));
          {
            ATerm k_20 = t;
            int l_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(l_20);
              }
            else
              {
                t = k_20;
                t = (ATerm) ATempty;
              }
            {
              h_32 = t;
              if(((g_32 != NULL) && (g_32 != h_32)))
                _fail(h_32);
              else
                g_32 = h_32;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_31), not_null(a_32), (ATerm) ATinsert(CheckATermList(not_null(g_32)), not_null(b_32)));
            t = table_put_0(t);
          }
        }
        t = f_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm a_79 (ATerm))
{
  ATerm l_32 = NULL;
  ATerm m_32 = NULL;
  t = term_w_5;
  {
    t = a_79(t);
    {
      m_32 = t;
      if(((l_32 != NULL) && (l_32 != m_32)))
        _fail(m_32);
      else
        l_32 = m_32;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_19, term_q_19, not_null(l_32));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL;
  s_32 = t;
  r_32 :
  if(match_string(s_32, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(s_32) == AT_LIST) && !(ATisEmpty(s_32))))
        {
          t_32 = ATgetFirst((ATermList) s_32);
          u_32 = (ATerm) ATgetNext((ATermList) s_32);
          {
            ATerm x_32 = NULL;
            ATerm p_20;
            p_20 = t;
            {
              t = not_null(t_32);
              t = a_0(t);
            }
            t = p_20;
            {
              ATerm y_32 = NULL;
              t = term_w_5;
              {
                t = d_0(t);
                {
                  y_32 = t;
                  if(((x_32 != NULL) && (x_32 != y_32)))
                    _fail(y_32);
                  else
                    x_32 = y_32;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_32)), not_null(x_32));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    ATerm d_33 = NULL;
    d_33 = t;
    c_33 :
    if(!(match_string(d_33, "--help")))
      {
        if(!(match_string(d_33, "-h")))
          {
            if(!(match_string(d_33, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    t = term_u_20;
    {
      t = set_config_0(t);
      t = term_w_20;
    }
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    t = term_x_20;
    return(t);
  }
  t = Option_3(t, z_4, a_5, b_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
  g_33 = t;
  f_33 :
  if(((ATgetType(g_33) == AT_LIST) && !(ATisEmpty(g_33))))
    {
      h_33 = ATgetFirst((ATermList) g_33);
      i_33 = (ATerm) ATgetNext((ATermList) g_33);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_33)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_33)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_48 (ATerm), ATerm s_48 (ATerm))
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
  x_33 = t;
  t_33 :
  if(((ATgetType(x_33) == AT_LIST) && !(ATisEmpty(x_33))))
    {
      y_33 = ATgetFirst((ATermList) x_33);
      z_33 = (ATerm) ATgetNext((ATermList) x_33);
      {
        ATerm d_34 = NULL,f_34 = NULL;
        ATerm e_34 = NULL;
        t = SSLgetAnnotations(not_null(x_33));
        {
          e_34 = t;
          if(((d_34 != NULL) && (d_34 != e_34)))
            _fail(e_34);
          else
            d_34 = e_34;
        }
        {
          t = not_null(y_33);
          {
            ATerm h_34 = NULL;
            t = r_48(t);
            {
              f_34 = t;
              {
                t = not_null(z_33);
                {
                  ATerm j_34 = NULL;
                  t = s_48(t);
                  {
                    h_34 = t;
                    {
                      ATerm k_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_34)), not_null(f_34)), not_null(d_34));
                      {
                        k_34 = t;
                        if(((j_34 != NULL) && (j_34 != k_34)))
                          _fail(k_34);
                        else
                          j_34 = k_34;
                      }
                      t = not_null(j_34);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm u_34 = NULL;
  u_34 = t;
  t_34 :
  if(((ATgetType(u_34) == AT_LIST) && ATisEmpty(u_34)))
    {
      {
        ATerm y_34 = NULL,a_35 = NULL;
        ATerm a_21;
        a_21 = t;
        {
          ATerm z_34 = NULL;
          t = SSLgetAnnotations(not_null(u_34));
          {
            z_34 = t;
            if(((y_34 != NULL) && (y_34 != z_34)))
              _fail(z_34);
            else
              y_34 = z_34;
          }
        }
        t = a_21;
        {
          ATerm c_35 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(y_34));
          {
            c_35 = t;
            if(((a_35 != NULL) && (a_35 != c_35)))
              _fail(c_35);
            else
              a_35 = c_35;
          }
          t = not_null(a_35);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL;
  i_35 = t;
  h_35 :
  if(match_cons(i_35, sym__2))
    {
      j_35 = ATgetArgument(i_35, 0);
      k_35 = ATgetArgument(i_35, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_j_13, not_null(j_35), not_null(k_35));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm y_78 (ATerm))
{
  ATerm b_21;
  b_21 = t;
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_21;
        t = y_78(t);
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
        {
        }
      }
  }
  t = b_21;
  {
    ATerm c_5 (ATerm t)
    {
      ATerm s_35 = NULL;
      ATerm o_21;
      o_21 = t;
      {
        ATerm q_35 = NULL;
        ATerm r_35 = NULL;
        r_35 = t;
        if(((q_35 != NULL) && (q_35 != r_35)))
          _fail(r_35);
        else
          q_35 = r_35;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_18, not_null(q_35));
          t = set_config_0(t);
        }
      }
      t = o_21;
      {
        ATerm t_35 = NULL;
        t_35 = t;
        if(((s_35 != NULL) && (s_35 != t_35)))
          _fail(t_35);
        else
          s_35 = t_35;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_35));
      }
      return(t);
    }
    ATerm d_5 (ATerm t)
    {
      ATerm u_21 = t;
      int v_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_21 = t;
          int z_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(z_21);
            }
          else
            {
              t = y_21;
              {
                t = y_78(t);
                t = Cons_2(t, _id, d_5);
              }
            }
          LocalPopChoice(v_21);
        }
      else
        {
          t = u_21;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, c_5, d_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL;
  ATerm a_22;
  a_22 = t;
  {
    ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL;
    c_36 = t;
    y_35 :
    if(match_cons(c_36, sym__3))
      {
        d_36 = ATgetArgument(c_36, 0);
        e_36 = ATgetArgument(c_36, 1);
        f_36 = ATgetArgument(c_36, 2);
        {
          if(((z_35 != NULL) && (z_35 != d_36)))
            _fail(d_36);
          else
            z_35 = d_36;
          {
            if(((a_36 != NULL) && (a_36 != e_36)))
              _fail(e_36);
            else
              a_36 = e_36;
            {
              if(((b_36 != NULL) && (b_36 != f_36)))
                _fail(f_36);
              else
                b_36 = f_36;
              t = SSL_table_put(not_null(z_35), not_null(a_36), not_null(b_36));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = a_22;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm x_78 (ATerm))
{
  ATerm k_36 = NULL;
  ATerm i_22;
  i_22 = t;
  {
    t = term_j_22;
    t = table_put_0(t);
  }
  t = i_22;
  {
    ATerm e_5 (ATerm t)
    {
      ATerm k_22 = t;
      int n_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_78(t);
          LocalPopChoice(n_22);
        }
      else
        {
          t = k_22;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_5);
    {
      ATerm o_22 = t;
      int p_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_22;
          r_22 = t;
          {
            ATerm s_22 = t;
            int y_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_t_20;
                t = get_config_0(t);
                LocalPopChoice(y_22);
              }
            else
              {
                t = s_22;
                t = fetch_1(t, Help_0);
              }
          }
          t = r_22;
          {
            t = system_usage_0(t);
            {
              t = term_g_15;
              t = exit_0(t);
            }
          }
          LocalPopChoice(p_22);
        }
      else
        {
          t = o_22;
          {
            ATerm z_22 = t;
            int a_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_5 (ATerm t)
                {
                  ATerm g_5 (ATerm t)
                  {
                    ATerm l_36 = NULL;
                    l_36 = t;
                    if(((k_36 != NULL) && (k_36 != l_36)))
                      _fail(l_36);
                    else
                      k_36 = l_36;
                    return(t);
                  }
                  t = Undefined_1(t, g_5);
                  return(t);
                }
                t = fetch_1(t, f_5);
                {
                  ATerm h_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_36)), term_c_23);
                    return(t);
                  }
                  t = say_1(t, h_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_j_11;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(a_23);
              }
            else
              {
                t = z_22;
                {
                }
              }
          }
        }
      {
        ATerm d_23;
        d_23 = t;
        {
          t = term_o_19;
          t = table_destroy_0(t);
        }
        t = d_23;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm e_75 (ATerm), ATerm f_75 (ATerm), ATerm g_75 (ATerm), ATerm h_75 (ATerm))
{
  t = parse_options_1(t, e_75);
  {
    t = store_options_0(t);
    {
      t = g_75(t);
      {
        ATerm e_23 = t;
        int j_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, f_75);
            LocalPopChoice(j_23);
          }
        else
          {
            t = e_23;
            {
              ATerm k_23 = t;
              int l_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_75(t);
                  t = report_success_0(t);
                  LocalPopChoice(l_23);
                }
              else
                {
                  t = k_23;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm v_75 (ATerm), ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm))
{
  ATerm m_5 (ATerm t)
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_75(t);
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, v_75);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, m_5, x_75, y_75, n_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm r_75 (ATerm))
{
  ATerm q_5 (ATerm t)
  {
    ATerm s_5 (ATerm t)
    {
      ATerm s_23;
      s_23 = t;
      {
        ATerm u_36 = NULL;
        ATerm v_36 = NULL;
        t = term_c_18;
        {
          t = get_config_0(t);
          {
            v_36 = t;
            if(((u_36 != NULL) && (u_36 != v_36)))
              _fail(v_36);
            else
              u_36 = v_36;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_11, (ATerm) ATinsert(ATempty, not_null(u_36)));
          t = printnl_0(t);
        }
      }
      t = s_23;
      return(t);
    }
    t = if_verbose2_1(t, s_5);
    return(t);
  }
  t = iowrap_4(t, p_75, q_75, r_75, q_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm n_75 (ATerm), ATerm o_75 (ATerm))
{
  t = iowrap_3(t, n_75, o_75, default_usage_0);
  return(t);
}
ATerm term_to_adot_0 (ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
    z_36 = t;
    y_36 :
    if(match_cons(z_36, sym__2))
      {
        a_37 = ATgetArgument(z_36, 0);
        b_37 = ATgetArgument(z_36, 1);
        {
          t = not_null(a_37);
          t = to_adot_0(t);
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = iowrap_2(t, t_5, term_to_adot_options_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = term_to_adot_0(t);
  return(t);
}
