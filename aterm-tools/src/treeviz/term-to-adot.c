#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
#include "xtc-conf.h"
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
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Scopes_0;
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
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
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
Symbol sym_Graph_0;
Symbol sym_Tree_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
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
  sym_Graph_0 = ATmakeSymbol("Graph", 0, ATfalse);
  ATprotectSymbol(sym_Graph_0);
  sym_Tree_0 = ATmakeSymbol("Tree", 0, ATfalse);
  ATprotectSymbol(sym_Tree_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_b_22;
ATerm term_u_21;
ATerm term_n_20;
ATerm term_j_20;
ATerm term_g_20;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_w_18;
ATerm term_r_18;
ATerm term_f_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_d_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_i_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_n_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_a_15;
ATerm term_v_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_h_14;
ATerm term_p_13;
ATerm term_i_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_i_8;
ATerm term_f_8;
ATerm term_d_8;
ATerm term_b_8;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_k_6;
ATerm term_j_6;
void init_constant_terms (void)
{
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(sym__2, term_j_6, term_k_6);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym__2, term_p_6, term_k_6);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_AttrId_2, term_b_8, term_f_8);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym__2, term_e_10, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i         Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__2, term_b_16, term_k_6);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym__2, term_o_16, term_k_6);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym__2, term_v_16, term_k_6);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_p_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__3, term_o_19, term_p_19, (ATerm) ATempty);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm term_to_adot_options_0 (ATerm);
ATerm Escape_linefeed_0 (ATerm);
ATerm Escape_backslash_0 (ATerm);
ATerm Escape_double_quote_0 (ATerm);
ATerm Escape_0 (ATerm);
ATerm escape_chars_0 (ATerm);
ATerm escape_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm quote_chars_0 (ATerm);
ATerm double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm r_62 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm EdgeToDot_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm ListEdgeToDot_0 (ATerm);
ATerm graph_to_adot_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm NodeId_0 (ATerm);
ATerm address_0 (ATerm);
ATerm term_to_graph_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm q_66 (ATerm), ATerm r_66 (ATerm));
ATerm union_1 (ATerm, ATerm s_66 (ATerm));
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm d_67 (ATerm), ATerm e_67 (ATerm), ATerm f_67 (ATerm));
ATerm foldr_3 (ATerm, ATerm l_65 (ATerm), ATerm m_65 (ATerm), ATerm n_65 (ATerm));
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm new_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm p_58 (ATerm));
ATerm term_to_tree_0 (ATerm);
ATerm to_adot_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm i_61 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm m_58 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm m_45 (ATerm), ATerm n_45 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm s_60 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm x_63 (ATerm), ATerm y_63 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm j_65 (ATerm), ATerm k_65 (ATerm));
ATerm crush_2 (ATerm, ATerm b_67 (ATerm), ATerm c_67 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm l_58 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm q_60 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm f_57 (ATerm));
ATerm map_1 (ATerm, ATerm z_70 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm o_71 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm e_57 (ATerm));
ATerm Program_1 (ATerm, ATerm a_47 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm b_47 (ATerm));
ATerm fetch_1 (ATerm, ATerm i_71 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_58 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm t_79 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm j_57 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm d_53 (ATerm), ATerm e_53 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm h_57 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm g_57 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm n_59 (ATerm), ATerm o_59 (ATerm), ATerm p_59 (ATerm), ATerm q_59 (ATerm));
ATerm iowrap_4 (ATerm, ATerm e_60 (ATerm), ATerm f_60 (ATerm), ATerm g_60 (ATerm), ATerm h_60 (ATerm));
ATerm iowrap_3 (ATerm, ATerm y_59 (ATerm), ATerm z_59 (ATerm), ATerm a_60 (ATerm));
ATerm iowrap_2 (ATerm, ATerm w_59 (ATerm), ATerm x_59 (ATerm));
ATerm term_to_adot_0 (ATerm);
ATerm main_0 (ATerm);
ATerm term_to_adot_options_0 (ATerm t)
{
  ATerm r_2 = t;
  int g_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_0 (ATerm t)
      {
        ATerm r_0 = NULL;
        r_0 = t;
        p_0 :
        if(!(match_string(r_0, "--graph")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm d_0 (ATerm t)
      {
        t = term_m_6;
        t = set_config_0(t);
        t = term_n_6;
        return(t);
      }
      ATerm e_0 (ATerm t)
      {
        t = term_o_6;
        return(t);
      }
      t = Option_3(t, c_0, d_0, e_0);
      LocalPopChoice(g_6);
    }
  else
    {
      t = r_2;
      {
        ATerm f_0 (ATerm t)
        {
          ATerm f_1 = NULL;
          f_1 = t;
          q_0 :
          if(!(match_string(f_1, "--tree")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm m_0 (ATerm t)
        {
          t = term_q_6;
          t = set_config_0(t);
          t = term_x_6;
          return(t);
        }
        ATerm n_0 (ATerm t)
        {
          t = term_y_6;
          return(t);
        }
        t = Option_3(t, f_0, m_0, n_0);
      }
    }
  return(t);
}
ATerm Escape_linefeed_0 (ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL,y_1 = NULL;
  t_1 = t;
  h_1 :
  if(((ATgetType(t_1) == AT_LIST) && ((ATermList) t_1 != ATempty)))
    {
      u_1 = ATgetFirst((ATermList) t_1);
      y_1 = (ATerm) ATgetNext((ATermList) t_1);
      s_1 :
      if(match_int(u_1, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(y_1)), term_a_7), term_z_6);
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
  ATerm e_2 = NULL,f_2 = NULL,g_2 = NULL;
  e_2 = t;
  c_2 :
  if(((ATgetType(e_2) == AT_LIST) && ((ATermList) e_2 != ATempty)))
    {
      f_2 = ATgetFirst((ATermList) e_2);
      g_2 = (ATerm) ATgetNext((ATermList) e_2);
      d_2 :
      if(match_int(f_2, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(g_2)), term_z_6), term_z_6);
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
  ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL;
  m_2 = t;
  k_2 :
  if(((ATgetType(m_2) == AT_LIST) && ((ATermList) m_2 != ATempty)))
    {
      n_2 = ATgetFirst((ATermList) m_2);
      o_2 = (ATerm) ATgetNext((ATermList) m_2);
      l_2 :
      if(match_int(n_2, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(o_2)), term_b_7), term_z_6);
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
  ATerm g_7 = t;
  int h_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      LocalPopChoice(h_7);
    }
  else
    {
      t = g_7;
      {
        ATerm i_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            LocalPopChoice(j_7);
          }
        else
          {
            t = i_7;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm o_7 = t;
  int p_7 = stack_ptr;
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
      LocalPopChoice(p_7);
    }
  else
    {
      t = o_7;
      {
        ATerm r_7 = t;
        int s_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            LocalPopChoice(s_7);
          }
        else
          {
            t = r_7;
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
  ATerm t_2 = NULL;
  t_2 = t;
  t = SSL_is_int(not_null(t_2));
  return(t);
}
ATerm quote_chars_0 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
  y_2 = t;
  x_2 :
  if(match_cons(y_2, sym__2))
    {
      z_2 = ATgetArgument(y_2, 0);
      a_3 = ATgetArgument(y_2, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_3)), not_null(z_2)), (ATerm) ATinsert(ATempty, not_null(z_2)));
        t = conc_0(t);
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
  ATerm f_3 = NULL;
  ATerm g_3 = NULL;
  g_3 = t;
  if(((f_3 != NULL) && (f_3 != g_3)))
    _fail(g_3);
  else
    f_3 = g_3;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_b_7, not_null(f_3));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm r_62 (ATerm))
{
  t = explode_string_0(t);
  {
    t = r_62(t);
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
  ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL;
  t_3 = t;
  s_3 :
  if(match_cons(t_3, sym__2))
    {
      u_3 = ATgetArgument(t_3, 0);
      v_3 = ATgetArgument(t_3, 1);
      {
        ATerm t_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_3 = NULL,z_3 = NULL,f_4 = NULL,h_4 = NULL;
            ATerm z_7;
            z_7 = t;
            {
              ATerm a_4 = NULL;
              ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL;
              t = not_null(v_3);
              {
                a_4 = t;
                {
                  t = SSL_explode_term(not_null(a_4));
                  {
                    c_4 = t;
                    m_3 :
                    if(match_cons(c_4, sym__2))
                      {
                        d_4 = ATgetArgument(c_4, 0);
                        e_4 = ATgetArgument(c_4, 1);
                        {
                          if(((y_3 != NULL) && (y_3 != d_4)))
                            _fail(d_4);
                          else
                            y_3 = d_4;
                          if(((z_3 != NULL) && (z_3 != e_4)))
                            _fail(e_4);
                          else
                            z_3 = e_4;
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
            t = z_7;
            {
              ATerm a_8;
              a_8 = t;
              {
                ATerm g_4 = NULL;
                t = not_null(y_3);
                {
                  t = escape_0(t);
                  {
                    t = double_quote_0(t);
                    {
                      g_4 = t;
                      if(((f_4 != NULL) && (f_4 != g_4)))
                        _fail(g_4);
                      else
                        f_4 = g_4;
                    }
                  }
                }
              }
              t = a_8;
              {
                ATerm k_4 = NULL;
                t = not_null(z_3);
                {
                  ATerm s_0 (ATerm t)
                  {
                    ATerm i_4 = NULL;
                    i_4 = t;
                    t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(u_3)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(i_4)))));
                    return(t);
                  }
                  t = map_1(t, s_0);
                  {
                    k_4 = t;
                    if(((h_4 != NULL) && (h_4 != k_4)))
                      _fail(k_4);
                    else
                      h_4 = k_4;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(h_4)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(u_3)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_b_8, not_null(f_4)))))));
              }
            }
            LocalPopChoice(u_7);
          }
        else
          {
            t = t_7;
            {
              ATerm n_4 = NULL;
              ATerm o_4 = NULL,q_4 = NULL;
              t = not_null(v_3);
              {
                t = is_int_0(t);
                {
                  ATerm p_4 = NULL;
                  t = not_null(v_3);
                  {
                    t = int_to_string_0(t);
                    {
                      t = escape_0(t);
                      {
                        p_4 = t;
                        if(((o_4 != NULL) && (o_4 != p_4)))
                          _fail(p_4);
                        else
                          o_4 = p_4;
                      }
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), not_null(o_4)), term_d_8);
                    {
                      t = concat_strings_0(t);
                      {
                        q_4 = t;
                        if(((n_4 != NULL) && (n_4 != q_4)))
                          _fail(q_4);
                        else
                          n_4 = q_4;
                      }
                    }
                  }
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(u_3)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_b_8, not_null(n_4)))))));
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
ATerm is_list_0 (ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL;
  b_5 = t;
  a_5 :
  if(((ATermList) b_5 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(b_5) == AT_LIST) && ((ATermList) b_5 != ATempty)))
        {
          c_5 = ATgetFirst((ATermList) b_5);
          d_5 = (ATerm) ATgetNext((ATermList) b_5);
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
ATerm ListEdgeToDot_0 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL;
  i_5 = t;
  h_5 :
  if(match_cons(i_5, sym__2))
    {
      j_5 = ATgetArgument(i_5, 0);
      k_5 = ATgetArgument(i_5, 1);
      {
        ATerm n_5 = NULL;
        ATerm e_8;
        e_8 = t;
        {
          t = not_null(k_5);
          t = is_list_0(t);
        }
        t = e_8;
        {
          ATerm q_5 = NULL;
          t = not_null(k_5);
          {
            ATerm t_0 (ATerm t)
            {
              ATerm o_5 = NULL;
              o_5 = t;
              t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_5)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(o_5)))));
              return(t);
            }
            t = map_1(t, t_0);
            {
              q_5 = t;
              if(((n_5 != NULL) && (n_5 != q_5)))
                _fail(q_5);
              else
                n_5 = q_5;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(n_5)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_5)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_i_8)))));
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
  ATerm w_5 = NULL;
  ATerm y_5 = NULL;
  w_5 = t;
  {
    ATerm z_5 = NULL;
    t = not_null(w_5);
    {
      ATerm u_0 (ATerm t)
      {
        ATerm l_8 = t;
        int p_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ListEdgeToDot_0(t);
            LocalPopChoice(p_8);
          }
        else
          {
            t = l_8;
            t = EdgeToDot_0(t);
          }
        return(t);
      }
      t = map_1(t, u_0);
      {
        t = concat_0(t);
        {
          z_5 = t;
          if(((y_5 != NULL) && (y_5 != z_5)))
            _fail(z_5);
          else
            y_5 = z_5;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_q_8, not_null(y_5));
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm d_6 = NULL;
  d_6 = t;
  t = SSL_int_to_string(not_null(d_6));
  return(t);
}
ATerm NodeId_0 (ATerm t)
{
  ATerm h_6 = NULL;
  ATerm i_6 = NULL;
  t = int_to_string_0(t);
  {
    i_6 = t;
    if(((h_6 != NULL) && (h_6 != i_6)))
      _fail(i_6);
    else
      h_6 = i_6;
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, term_r_8, not_null(h_6));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm address_0 (ATerm t)
{
  ATerm l_6 = NULL;
  l_6 = t;
  t = SSL_address(not_null(l_6));
  return(t);
}
ATerm term_to_graph_0 (ATerm t)
{
  ATerm r_6 = NULL,t_6 = NULL,v_6 = NULL;
  ATerm s_8;
  s_8 = t;
  {
    ATerm s_6 = NULL;
    t = address_0(t);
    {
      t = NodeId_0(t);
      {
        s_6 = t;
        if(((r_6 != NULL) && (r_6 != s_6)))
          _fail(s_6);
        else
          r_6 = s_6;
      }
    }
  }
  t = s_8;
  {
    ATerm t_8;
    t_8 = t;
    {
      ATerm u_6 = NULL;
      ATerm u_8 = t;
      int z_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_0 (ATerm t)
          {
            t = address_0(t);
            t = NodeId_0(t);
            return(t);
          }
          t = map_1(t, v_0);
          LocalPopChoice(z_8);
        }
      else
        {
          t = u_8;
          {
            ATerm w_0 (ATerm t)
            {
              t = address_0(t);
              t = NodeId_0(t);
              return(t);
            }
            t = _all(t, w_0);
          }
        }
      {
        u_6 = t;
        if(((t_6 != NULL) && (t_6 != u_6)))
          _fail(u_6);
        else
          t_6 = u_6;
      }
    }
    t = t_8;
    {
      ATerm w_6 = NULL;
      ATerm a_9 = t;
      int f_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_0 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = foldr_3(t, x_0, union_0, term_to_graph_0);
          LocalPopChoice(f_9);
        }
      else
        {
          t = a_9;
          {
            ATerm y_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, y_0, union_0, term_to_graph_0);
          }
        }
      {
        w_6 = t;
        if(((v_6 != NULL) && (v_6 != w_6)))
          _fail(w_6);
        else
          v_6 = w_6;
      }
      t = (ATerm) ATinsert(CheckATermList(not_null(v_6)), (ATerm) ATmakeAppl(sym__2, not_null(r_6), not_null(t_6)));
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL;
  d_7 = t;
  c_7 :
  if(match_cons(d_7, sym__2))
    {
      e_7 = ATgetArgument(d_7, 0);
      f_7 = ATgetArgument(d_7, 1);
      if(((e_7 != NULL) && (e_7 != f_7)))
        _fail(f_7);
      else
        e_7 = f_7;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm q_66 (ATerm), ATerm r_66 (ATerm))
{
  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL;
  l_7 = t;
  k_7 :
  if(((ATgetType(l_7) == AT_LIST) && ((ATermList) l_7 != ATempty)))
    {
      m_7 = ATgetFirst((ATermList) l_7);
      n_7 = (ATerm) ATgetNext((ATermList) l_7);
      {
        t = r_66(t);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm q_7 = NULL;
            q_7 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_7), not_null(q_7));
              t = q_66(t);
            }
            return(t);
          }
          t = fetch_1(t, z_0);
        }
        t = not_null(n_7);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm s_66 (ATerm))
{
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL;
  w_7 = t;
  v_7 :
  if(match_cons(w_7, sym__2))
    {
      x_7 = ATgetArgument(w_7, 0);
      y_7 = ATgetArgument(w_7, 1);
      {
        t = not_null(x_7);
        {
          ATerm c_8 (ATerm t)
          {
            ATerm g_9 = t;
            int h_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(y_7);
                LocalPopChoice(h_9);
              }
            else
              {
                t = g_9;
                {
                  ATerm i_9 = t;
                  int j_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_1 (ATerm t)
                      {
                        t = not_null(y_7);
                        return(t);
                      }
                      t = HdMember_p__2(t, s_66, a_1);
                      t = c_8(t);
                      LocalPopChoice(j_9);
                    }
                  else
                    {
                      t = i_9;
                      t = Cons_2(t, _id, c_8);
                    }
                }
              }
            return(t);
          }
          t = c_8(t);
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
ATerm crush_3 (ATerm t, ATerm d_67 (ATerm), ATerm e_67 (ATerm), ATerm f_67 (ATerm))
{
  ATerm h_8 = NULL;
  ATerm j_8 = NULL;
  h_8 = t;
  {
    ATerm k_8 = NULL;
    ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL;
    t = not_null(h_8);
    {
      k_8 = t;
      {
        t = SSL_explode_term(not_null(k_8));
        {
          m_8 = t;
          g_8 :
          if(match_cons(m_8, sym__2))
            {
              n_8 = ATgetArgument(m_8, 0);
              o_8 = ATgetArgument(m_8, 1);
              if(((j_8 != NULL) && (j_8 != o_8)))
                _fail(o_8);
              else
                j_8 = o_8;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(j_8);
      t = foldr_3(t, d_67, e_67, f_67);
    }
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm l_65 (ATerm), ATerm m_65 (ATerm), ATerm n_65 (ATerm))
{
  ATerm k_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_65(t);
      LocalPopChoice(q_9);
    }
  else
    {
      t = k_9;
      {
        ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
        w_8 = t;
        v_8 :
        if(((ATgetType(w_8) == AT_LIST) && ((ATermList) w_8 != ATempty)))
          {
            x_8 = ATgetFirst((ATermList) w_8);
            y_8 = (ATerm) ATgetNext((ATermList) w_8);
            {
              ATerm b_9 = NULL,d_9 = NULL;
              ATerm v_9;
              v_9 = t;
              {
                ATerm c_9 = NULL;
                t = not_null(x_8);
                {
                  t = n_65(t);
                  {
                    c_9 = t;
                    if(((b_9 != NULL) && (b_9 != c_9)))
                      _fail(c_9);
                    else
                      b_9 = c_9;
                  }
                }
              }
              t = v_9;
              {
                ATerm e_9 = NULL;
                t = not_null(y_8);
                {
                  t = foldr_3(t, l_65, m_65, n_65);
                  {
                    e_9 = t;
                    if(((d_9 != NULL) && (d_9 != e_9)))
                      _fail(e_9);
                    else
                      d_9 = e_9;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_9), not_null(d_9));
                  t = m_65(t);
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
  ATerm p_9 = NULL;
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL;
  p_9 = t;
  {
    ATerm u_9 = NULL;
    ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL;
    t = not_null(p_9);
    {
      u_9 = t;
      {
        t = SSL_explode_term(not_null(u_9));
        {
          w_9 = t;
          l_9 :
          if(match_cons(w_9, sym__2))
            {
              x_9 = ATgetArgument(w_9, 0);
              y_9 = ATgetArgument(w_9, 1);
              m_9 :
              if(match_string(x_9, ""))
                {
                  n_9 :
                  if(((ATgetType(y_9) == AT_LIST) && ((ATermList) y_9 != ATempty)))
                    {
                      z_9 = ATgetFirst((ATermList) y_9);
                      a_10 = (ATerm) ATgetNext((ATermList) y_9);
                      o_9 :
                      if(((ATgetType(a_10) == AT_LIST) && ((ATermList) a_10 != ATempty)))
                        {
                          b_10 = ATgetFirst((ATermList) a_10);
                          c_10 = (ATerm) ATgetNext((ATermList) a_10);
                          {
                            if(((r_9 != NULL) && (r_9 != z_9)))
                              _fail(z_9);
                            else
                              r_9 = z_9;
                            {
                              if(((t_9 != NULL) && (t_9 != b_10)))
                                _fail(b_10);
                              else
                                t_9 = b_10;
                              if(((s_9 != NULL) && (s_9 != c_10)))
                                _fail(c_10);
                              else
                                s_9 = c_10;
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
    t = not_null(t_9);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm m_10 = NULL;
  ATerm o_10 = NULL,p_10 = NULL;
  m_10 = t;
  {
    ATerm q_10 = NULL;
    ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL;
    t = not_null(m_10);
    {
      q_10 = t;
      {
        t = SSL_explode_term(not_null(q_10));
        {
          s_10 = t;
          j_10 :
          if(match_cons(s_10, sym__2))
            {
              t_10 = ATgetArgument(s_10, 0);
              u_10 = ATgetArgument(s_10, 1);
              k_10 :
              if(match_string(t_10, ""))
                {
                  l_10 :
                  if(((ATgetType(u_10) == AT_LIST) && ((ATermList) u_10 != ATempty)))
                    {
                      v_10 = ATgetFirst((ATermList) u_10);
                      w_10 = (ATerm) ATgetNext((ATermList) u_10);
                      {
                        if(((p_10 != NULL) && (p_10 != v_10)))
                          _fail(v_10);
                        else
                          p_10 = v_10;
                        if(((o_10 != NULL) && (o_10 != w_10)))
                          _fail(w_10);
                        else
                          o_10 = w_10;
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
    t = not_null(p_10);
  }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm p_58 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm d_10;
    d_10 = t;
    {
      ATerm b_11 = NULL;
      ATerm c_11 = NULL;
      t = term_e_10;
      {
        t = get_config_0(t);
        {
          c_11 = t;
          if(((b_11 != NULL) && (b_11 != c_11)))
            _fail(c_11);
          else
            b_11 = c_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_11), term_f_10);
        t = geq_0(t);
      }
    }
    t = d_10;
    t = p_58(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm term_to_tree_0 (ATerm t)
{
  ATerm m_11 = NULL,o_11 = NULL;
  ATerm c_1 (ATerm t)
  {
    ATerm d_1 (ATerm t)
    {
      t = term_g_10;
      return(t);
    }
    t = debug_1(t, d_1);
    return(t);
  }
  t = if_verbose5_1(t, c_1);
  {
    ATerm h_10;
    h_10 = t;
    {
      ATerm n_11 = NULL;
      t = new_0(t);
      {
        n_11 = t;
        if(((m_11 != NULL) && (m_11 != n_11)))
          _fail(n_11);
        else
          m_11 = n_11;
      }
    }
    t = h_10;
    {
      ATerm p_11 = NULL;
      p_11 = t;
      if(((o_11 != NULL) && (o_11 != p_11)))
        _fail(p_11);
      else
        o_11 = p_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_11), not_null(o_11));
        {
          ATerm e_12 (ATerm t)
          {
            ATerm y_11 = NULL,a_12 = NULL;
            ATerm e_1 (ATerm t)
            {
              ATerm i_10 = t;
              int n_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_1 (ATerm t)
                  {
                    ATerm q_11 = NULL,s_11 = NULL;
                    ATerm r_10;
                    r_10 = t;
                    {
                      ATerm r_11 = NULL;
                      t = new_0(t);
                      {
                        r_11 = t;
                        if(((q_11 != NULL) && (q_11 != r_11)))
                          _fail(r_11);
                        else
                          q_11 = r_11;
                      }
                    }
                    t = r_10;
                    {
                      ATerm t_11 = NULL;
                      t_11 = t;
                      if(((s_11 != NULL) && (s_11 != t_11)))
                        _fail(t_11);
                      else
                        s_11 = t_11;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), not_null(s_11));
                    }
                    return(t);
                  }
                  t = map_1(t, g_1);
                  LocalPopChoice(n_10);
                }
              else
                {
                  t = i_10;
                  {
                    ATerm i_1 (ATerm t)
                    {
                      ATerm u_11 = NULL,w_11 = NULL;
                      ATerm x_10;
                      x_10 = t;
                      {
                        ATerm v_11 = NULL;
                        t = new_0(t);
                        {
                          v_11 = t;
                          if(((u_11 != NULL) && (u_11 != v_11)))
                            _fail(v_11);
                          else
                            u_11 = v_11;
                        }
                      }
                      t = x_10;
                      {
                        ATerm x_11 = NULL;
                        x_11 = t;
                        if(((w_11 != NULL) && (w_11 != x_11)))
                          _fail(x_11);
                        else
                          w_11 = x_11;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(u_11), not_null(w_11));
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
              ATerm y_10;
              y_10 = t;
              {
                ATerm z_11 = NULL;
                ATerm j_1 (ATerm t)
                {
                  ATerm z_10 = t;
                  int a_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = map_1(t, Fst_0);
                      LocalPopChoice(a_11);
                    }
                  else
                    {
                      t = z_10;
                      t = _all(t, Fst_0);
                    }
                  return(t);
                }
                t = _2(t, _id, j_1);
                {
                  z_11 = t;
                  if(((y_11 != NULL) && (y_11 != z_11)))
                    _fail(z_11);
                  else
                    y_11 = z_11;
                }
              }
              t = y_10;
              {
                ATerm b_12 = NULL;
                t = Snd_0(t);
                {
                  ATerm d_11 = t;
                  int e_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_1 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = foldr_3(t, k_1, union_0, e_12);
                      LocalPopChoice(e_11);
                    }
                  else
                    {
                      t = d_11;
                      {
                        ATerm l_1 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        t = crush_3(t, l_1, union_0, e_12);
                      }
                    }
                  {
                    b_12 = t;
                    if(((a_12 != NULL) && (a_12 != b_12)))
                      _fail(b_12);
                    else
                      a_12 = b_12;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(a_12)), not_null(y_11));
              }
            }
            return(t);
          }
          t = e_12(t);
        }
      }
    }
  }
  return(t);
}
ATerm to_adot_0 (ATerm t)
{
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_11;
      h_11 = t;
      {
        t = term_p_6;
        t = get_config_0(t);
      }
      t = h_11;
      t = term_to_tree_0(t);
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      {
        ATerm i_11;
        i_11 = t;
        {
          t = term_j_6;
          t = get_config_0(t);
        }
        t = i_11;
        t = term_to_graph_0(t);
      }
    }
  t = graph_to_adot_0(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm n_12 = NULL;
  ATerm j_11;
  j_11 = t;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm o_12 = NULL,p_12 = NULL;
      o_12 = t;
      m_12 :
      if(match_cons(o_12, sym_Program_1))
        {
          p_12 = ATgetArgument(o_12, 0);
          if(((n_12 != NULL) && (n_12 != p_12)))
            _fail(p_12);
          else
            n_12 = p_12;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, m_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_12), not_null(n_12)), term_l_11));
      {
        t = printnl_0(t);
        {
          t = term_d_12;
          t = exit_0(t);
        }
      }
    }
  }
  t = j_11;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym__2))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      {
        ATerm f_12;
        f_12 = t;
        t = SSL_printnl(not_null(u_12), not_null(v_12));
        t = f_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm e_13 = NULL;
  ATerm g_13 = NULL;
  e_13 = t;
  {
    ATerm h_13 = NULL;
    ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL;
    t = not_null(e_13);
    {
      h_13 = t;
      {
        t = SSL_explode_term(not_null(h_13));
        {
          j_13 = t;
          c_13 :
          if(match_cons(j_13, sym__2))
            {
              k_13 = ATgetArgument(j_13, 0);
              l_13 = ATgetArgument(j_13, 1);
              d_13 :
              if(match_string(k_13, ""))
                {
                  if(((g_13 != NULL) && (g_13 != l_13)))
                    _fail(l_13);
                  else
                    g_13 = l_13;
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
      t = not_null(g_13);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
  r_13 = t;
  q_13 :
  if(match_cons(r_13, sym__2))
    {
      s_13 = ATgetArgument(r_13, 0);
      t_13 = ATgetArgument(r_13, 1);
      {
        t = not_null(s_13);
        {
          ATerm n_1 (ATerm t)
          {
            t = not_null(t_13);
            return(t);
          }
          t = at_end_1(t, n_1);
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
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm i_61 (ATerm))
{
  ATerm i_12;
  i_12 = t;
  {
    ATerm z_13 = NULL,b_14 = NULL;
    ATerm j_12;
    j_12 = t;
    {
      ATerm a_14 = NULL;
      t = i_61(t);
      {
        a_14 = t;
        if(((z_13 != NULL) && (z_13 != a_14)))
          _fail(a_14);
        else
          z_13 = a_14;
      }
    }
    t = j_12;
    {
      ATerm c_14 = NULL;
      c_14 = t;
      if(((b_14 != NULL) && (b_14 != c_14)))
        _fail(c_14);
      else
        b_14 = c_14;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_14)), not_null(z_13)));
        t = printnl_0(t);
      }
    }
  }
  t = i_12;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm g_14 = NULL;
  g_14 = t;
  t = SSL_is_string(not_null(g_14));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm k_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(l_12);
    }
  else
    {
      t = k_12;
      {
        ATerm q_12 = t;
        int r_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, o_1);
            LocalPopChoice(r_12);
          }
        else
          {
            t = q_12;
            {
              ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL;
              p_14 = t;
              o_14 :
              if(match_cons(p_14, sym_Path_1))
                {
                  q_14 = ATgetArgument(p_14, 0);
                  t = not_null(q_14);
                }
              else
                {
                  if(match_cons(p_14, sym_Var_1))
                    {
                      q_14 = ATgetArgument(p_14, 0);
                      {
                        t = not_null(q_14);
                        {
                          ATerm w_12 = t;
                          int x_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(x_12);
                            }
                          else
                            {
                              t = w_12;
                              {
                                ATerm p_1 (ATerm t)
                                {
                                  t = term_y_12;
                                  return(t);
                                }
                                t = debug_1(t, p_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(p_14, sym_Prefix_2))
                        {
                          q_14 = ATgetArgument(p_14, 0);
                          r_14 = ATgetArgument(p_14, 1);
                          {
                            ATerm w_14 = NULL,y_14 = NULL;
                            ATerm z_12;
                            z_12 = t;
                            {
                              ATerm x_14 = NULL;
                              t = not_null(q_14);
                              {
                                t = eval_config_0(t);
                                {
                                  x_14 = t;
                                  if(((w_14 != NULL) && (w_14 != x_14)))
                                    _fail(x_14);
                                  else
                                    w_14 = x_14;
                                }
                              }
                            }
                            t = z_12;
                            {
                              ATerm z_14 = NULL;
                              t = not_null(r_14);
                              {
                                t = eval_config_0(t);
                                {
                                  z_14 = t;
                                  if(((y_14 != NULL) && (y_14 != z_14)))
                                    _fail(z_14);
                                  else
                                    y_14 = z_14;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_14), not_null(y_14));
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
  ATerm h_15 = NULL;
  h_15 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_13, not_null(h_15));
    {
      t = table_get_0(t);
      {
        ATerm q_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm b_13;
            b_13 = t;
            {
              ATerm j_15 = NULL;
              ATerm k_15 = NULL;
              k_15 = t;
              if(((j_15 != NULL) && (j_15 != k_15)))
                _fail(k_15);
              else
                j_15 = k_15;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_a_13, not_null(h_15), not_null(j_15));
                t = table_put_0(t);
              }
            }
            t = b_13;
          }
          return(t);
        }
        t = try_1(t, q_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm m_58 (ATerm))
{
  ATerm r_1 (ATerm t)
  {
    ATerm f_13;
    f_13 = t;
    {
      ATerm o_15 = NULL;
      ATerm p_15 = NULL;
      t = term_e_10;
      {
        t = get_config_0(t);
        {
          p_15 = t;
          if(((o_15 != NULL) && (o_15 != p_15)))
            _fail(p_15);
          else
            o_15 = p_15;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_15), term_i_13);
        t = geq_0(t);
      }
    }
    t = f_13;
    t = m_58(t);
    return(t);
  }
  t = try_1(t, r_1);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL;
  t_15 = t;
  s_15 :
  if(match_cons(t_15, sym__2))
    {
      u_15 = ATgetArgument(t_15, 0);
      v_15 = ATgetArgument(t_15, 1);
      t = SSL_WriteToTextFile(not_null(u_15), not_null(v_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm m_45 (ATerm), ATerm n_45 (ATerm))
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL;
  f_16 = t;
  e_16 :
  if(match_cons(f_16, sym__2))
    {
      g_16 = ATgetArgument(f_16, 0);
      h_16 = ATgetArgument(f_16, 1);
      {
        ATerm l_16 = NULL,n_16 = NULL;
        ATerm m_16 = NULL;
        t = SSLgetAnnotations(not_null(f_16));
        {
          m_16 = t;
          if(((l_16 != NULL) && (l_16 != m_16)))
            _fail(m_16);
          else
            l_16 = m_16;
        }
        {
          t = not_null(g_16);
          {
            ATerm p_16 = NULL;
            t = m_45(t);
            {
              n_16 = t;
              {
                t = not_null(h_16);
                {
                  ATerm r_16 = NULL;
                  t = n_45(t);
                  {
                    p_16 = t;
                    {
                      ATerm s_16 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(n_16), not_null(p_16)), not_null(l_16));
                      {
                        s_16 = t;
                        if(((r_16 != NULL) && (r_16 != s_16)))
                          _fail(s_16);
                        else
                          r_16 = s_16;
                      }
                      t = not_null(r_16);
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
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
  a_17 = t;
  z_16 :
  if(match_cons(a_17, sym__2))
    {
      b_17 = ATgetArgument(a_17, 0);
      c_17 = ATgetArgument(a_17, 1);
      t = SSL_WriteToBinaryFile(not_null(b_17), not_null(c_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm k_17 = NULL;
  ATerm m_13;
  m_13 = t;
  {
    ATerm v_1 (ATerm t)
    {
      ATerm n_13 = t;
      int o_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_1 (ATerm t)
          {
            ATerm l_17 = NULL,m_17 = NULL;
            l_17 = t;
            h_17 :
            if(match_cons(l_17, sym_Output_1))
              {
                m_17 = ATgetArgument(l_17, 0);
                if(((k_17 != NULL) && (k_17 != m_17)))
                  _fail(m_17);
                else
                  k_17 = m_17;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, w_1);
          LocalPopChoice(o_13);
        }
      else
        {
          t = n_13;
          {
            ATerm n_17 = NULL;
            t = term_p_13;
            {
              n_17 = t;
              if(((k_17 != NULL) && (k_17 != n_17)))
                _fail(n_17);
              else
                k_17 = n_17;
            }
          }
        }
      return(t);
    }
    t = _2(t, v_1, _id);
  }
  t = m_13;
  {
    ATerm x_1 (ATerm t)
    {
      ATerm z_1 (ATerm t)
      {
        t = not_null(k_17);
        return(t);
      }
      t = split_2(t, z_1, _id);
      return(t);
    }
    t = _2(t, _id, x_1);
    {
      ATerm u_13 = t;
      int v_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_2 (ATerm t)
          {
            ATerm b_2 (ATerm t)
            {
              ATerm o_17 = NULL;
              o_17 = t;
              j_17 :
              if(!(match_cons(o_17, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, b_2);
            return(t);
          }
          t = _2(t, a_2, WriteToBinaryFile_0);
          LocalPopChoice(v_13);
        }
      else
        {
          t = u_13;
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
ATerm apply_strategy_1 (ATerm t, ATerm s_60 (ATerm))
{
  ATerm u_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL;
  ATerm w_13;
  w_13 = t;
  t = dtime_0(t);
  t = w_13;
  {
    t = s_60(t);
    {
      ATerm x_13;
      x_13 = t;
      {
        ATerm v_17 = NULL;
        t = dtime_0(t);
        {
          v_17 = t;
          if(((u_17 != NULL) && (u_17 != v_17)))
            _fail(v_17);
          else
            u_17 = v_17;
        }
      }
      t = x_13;
      {
        w_17 = t;
        t_17 :
        if(match_cons(w_17, sym__2))
          {
            x_17 = ATgetArgument(w_17, 0);
            y_17 = ATgetArgument(w_17, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_17)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(u_17))), not_null(y_17));
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
  ATerm e_18 = NULL;
  e_18 = t;
  t = SSL_ReadFromFile(not_null(e_18));
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_63 (ATerm), ATerm y_63 (ATerm))
{
  ATerm j_18 = NULL,l_18 = NULL;
  ATerm y_13;
  y_13 = t;
  {
    ATerm k_18 = NULL;
    t = x_63(t);
    {
      k_18 = t;
      if(((j_18 != NULL) && (j_18 != k_18)))
        _fail(k_18);
      else
        j_18 = k_18;
    }
  }
  t = y_13;
  {
    ATerm m_18 = NULL;
    t = y_63(t);
    {
      m_18 = t;
      if(((l_18 != NULL) && (l_18 != m_18)))
        _fail(m_18);
      else
        l_18 = m_18;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_18), not_null(l_18));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm s_18 = NULL;
  ATerm d_14;
  d_14 = t;
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_2 (ATerm t)
        {
          ATerm t_18 = NULL,u_18 = NULL;
          t_18 = t;
          q_18 :
          if(match_cons(t_18, sym_Input_1))
            {
              u_18 = ATgetArgument(t_18, 0);
              if(((s_18 != NULL) && (s_18 != u_18)))
                _fail(u_18);
              else
                s_18 = u_18;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, h_2);
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        {
          ATerm v_18 = NULL;
          t = term_h_14;
          {
            v_18 = t;
            if(((s_18 != NULL) && (s_18 != v_18)))
              _fail(v_18);
            else
              s_18 = v_18;
          }
        }
      }
  }
  t = d_14;
  {
    ATerm i_2 (ATerm t)
    {
      t = not_null(s_18);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, i_2);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm z_18 = NULL;
  z_18 = t;
  t = SSL_string_to_int(not_null(z_18));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
  h_19 = t;
  f_19 :
  if(match_string(h_19, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(h_19) == AT_LIST) && ((ATermList) h_19 != ATempty)))
        {
          i_19 = ATgetFirst((ATermList) h_19);
          j_19 = (ATerm) ATgetNext((ATermList) h_19);
          g_19 :
          if(((ATgetType(j_19) == AT_LIST) && ((ATermList) j_19 != ATempty)))
            {
              k_19 = ATgetFirst((ATermList) j_19);
              l_19 = (ATerm) ATgetNext((ATermList) j_19);
              {
                ATerm w_19 = NULL;
                ATerm i_14;
                i_14 = t;
                {
                  t = not_null(i_19);
                  t = j_0(t);
                }
                t = i_14;
                {
                  ATerm x_19 = NULL;
                  t = not_null(k_19);
                  {
                    t = k_0(t);
                    {
                      x_19 = t;
                      if(((w_19 != NULL) && (w_19 != x_19)))
                        _fail(x_19);
                      else
                        w_19 = x_19;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(l_19)), not_null(w_19));
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
ATerm io_options_0 (ATerm t)
{
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_2 (ATerm t)
      {
        ATerm t_20 = NULL;
        t_20 = t;
        b_20 :
        if(!(match_string(t_20, "-i")))
          {
            if(!(match_string(t_20, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        ATerm w_20 = NULL;
        ATerm l_14;
        l_14 = t;
        {
          ATerm u_20 = NULL;
          ATerm v_20 = NULL;
          v_20 = t;
          if(((u_20 != NULL) && (u_20 != v_20)))
            _fail(v_20);
          else
            u_20 = v_20;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_m_14, not_null(u_20));
            t = set_config_0(t);
          }
        }
        t = l_14;
        {
          ATerm x_20 = NULL;
          x_20 = t;
          if(((w_20 != NULL) && (w_20 != x_20)))
            _fail(x_20);
          else
            w_20 = x_20;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_20));
        }
        return(t);
      }
      ATerm q_2 (ATerm t)
      {
        t = term_n_14;
        return(t);
      }
      t = ArgOption_3(t, j_2, p_2, q_2);
      LocalPopChoice(k_14);
    }
  else
    {
      t = j_14;
      {
        ATerm s_14 = t;
        int t_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_2 (ATerm t)
            {
              ATerm y_20 = NULL;
              y_20 = t;
              e_20 :
              if(!(match_string(y_20, "-o")))
                {
                  if(!(match_string(y_20, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm u_2 (ATerm t)
            {
              ATerm b_21 = NULL;
              ATerm u_14;
              u_14 = t;
              {
                ATerm z_20 = NULL;
                ATerm a_21 = NULL;
                a_21 = t;
                if(((z_20 != NULL) && (z_20 != a_21)))
                  _fail(a_21);
                else
                  z_20 = a_21;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_14, not_null(z_20));
                  t = set_config_0(t);
                }
              }
              t = u_14;
              {
                ATerm c_21 = NULL;
                c_21 = t;
                if(((b_21 != NULL) && (b_21 != c_21)))
                  _fail(c_21);
                else
                  b_21 = c_21;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_21));
              }
              return(t);
            }
            ATerm v_2 (ATerm t)
            {
              t = term_a_15;
              return(t);
            }
            t = ArgOption_3(t, s_2, u_2, v_2);
            LocalPopChoice(t_14);
          }
        else
          {
            t = s_14;
            {
              ATerm b_15 = t;
              int c_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_2 (ATerm t)
                  {
                    ATerm d_21 = NULL;
                    d_21 = t;
                    h_20 :
                    if(!(match_string(d_21, "-S")))
                      {
                        if(!(match_string(d_21, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm b_3 (ATerm t)
                  {
                    t = term_e_15;
                    t = set_config_0(t);
                    t = term_f_15;
                    return(t);
                  }
                  ATerm c_3 (ATerm t)
                  {
                    t = term_g_15;
                    return(t);
                  }
                  t = Option_3(t, w_2, b_3, c_3);
                  LocalPopChoice(c_15);
                }
              else
                {
                  t = b_15;
                  {
                    ATerm i_15 = t;
                    int l_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm d_3 (ATerm t)
                        {
                          ATerm e_21 = NULL;
                          e_21 = t;
                          i_20 :
                          if(!(match_string(e_21, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm e_3 (ATerm t)
                        {
                          ATerm h_21 = NULL;
                          ATerm m_15;
                          m_15 = t;
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
                              t = (ATerm) ATmakeAppl(sym__2, term_e_10, not_null(f_21));
                              t = set_config_0(t);
                            }
                          }
                          t = m_15;
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
                          t = term_n_15;
                          return(t);
                        }
                        t = ArgOption_3(t, d_3, e_3, h_3);
                        LocalPopChoice(l_15);
                      }
                    else
                      {
                        t = i_15;
                        {
                          ATerm q_15 = t;
                          int r_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm i_3 (ATerm t)
                              {
                                ATerm j_21 = NULL;
                                j_21 = t;
                                l_20 :
                                if(!(match_string(j_21, "--keep")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm j_3 (ATerm t)
                              {
                                ATerm w_15;
                                w_15 = t;
                                {
                                  ATerm l_21 = NULL;
                                  ATerm m_21 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    m_21 = t;
                                    if(((l_21 != NULL) && (l_21 != m_21)))
                                      _fail(m_21);
                                    else
                                      l_21 = m_21;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_x_15, not_null(l_21));
                                    t = set_config_0(t);
                                  }
                                }
                                t = w_15;
                                return(t);
                              }
                              ATerm k_3 (ATerm t)
                              {
                                t = term_y_15;
                                return(t);
                              }
                              t = ArgOption_3(t, i_3, j_3, k_3);
                              LocalPopChoice(r_15);
                            }
                          else
                            {
                              t = q_15;
                              {
                                ATerm z_15 = t;
                                int a_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm l_3 (ATerm t)
                                    {
                                      ATerm n_21 = NULL;
                                      n_21 = t;
                                      q_20 :
                                      if(!(match_string(n_21, "-v")))
                                        {
                                          if(!(match_string(n_21, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm n_3 (ATerm t)
                                    {
                                      t = term_c_16;
                                      t = set_config_0(t);
                                      t = term_d_16;
                                      return(t);
                                    }
                                    ATerm o_3 (ATerm t)
                                    {
                                      t = term_i_16;
                                      return(t);
                                    }
                                    t = Option_3(t, l_3, n_3, o_3);
                                    LocalPopChoice(a_16);
                                  }
                                else
                                  {
                                    t = z_15;
                                    {
                                      ATerm j_16 = t;
                                      int k_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm p_3 (ATerm t)
                                          {
                                            ATerm o_21 = NULL;
                                            o_21 = t;
                                            r_20 :
                                            if(!(match_string(o_21, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm q_3 (ATerm t)
                                          {
                                            t = term_q_16;
                                            t = set_config_0(t);
                                            t = term_t_16;
                                            return(t);
                                          }
                                          ATerm r_3 (ATerm t)
                                          {
                                            t = term_u_16;
                                            return(t);
                                          }
                                          t = Option_3(t, p_3, q_3, r_3);
                                          LocalPopChoice(k_16);
                                        }
                                      else
                                        {
                                          t = j_16;
                                          {
                                            ATerm w_3 (ATerm t)
                                            {
                                              ATerm p_21 = NULL;
                                              p_21 = t;
                                              s_20 :
                                              if(!(match_string(p_21, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm x_3 (ATerm t)
                                            {
                                              t = term_w_16;
                                              t = set_config_0(t);
                                              t = term_x_16;
                                              return(t);
                                            }
                                            ATerm b_4 (ATerm t)
                                            {
                                              t = term_y_16;
                                              return(t);
                                            }
                                            t = Option_3(t, w_3, x_3, b_4);
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_k_11, (ATerm) ATinsert(ATempty, term_d_17));
  {
    t = printnl_0(t);
    {
      t = term_d_12;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm y_21 = NULL;
  y_21 = t;
  t = SSL_TicksToSeconds(not_null(y_21));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
  d_22 = t;
  c_22 :
  if(match_cons(d_22, sym__2))
    {
      e_22 = ATgetArgument(d_22, 0);
      f_22 = ATgetArgument(d_22, 1);
      {
        ATerm e_17 = t;
        int f_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(e_22), not_null(f_22));
            LocalPopChoice(f_17);
          }
        else
          {
            t = e_17;
            t = SSL_addr(not_null(e_22), not_null(f_22));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm j_65 (ATerm), ATerm k_65 (ATerm))
{
  ATerm g_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_65(t);
      LocalPopChoice(i_17);
    }
  else
    {
      t = g_17;
      {
        ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
        m_22 = t;
        l_22 :
        if(((ATgetType(m_22) == AT_LIST) && ((ATermList) m_22 != ATempty)))
          {
            n_22 = ATgetFirst((ATermList) m_22);
            o_22 = (ATerm) ATgetNext((ATermList) m_22);
            {
              ATerm r_22 = NULL;
              ATerm s_22 = NULL;
              t = not_null(o_22);
              {
                t = foldr_2(t, j_65, k_65);
                {
                  s_22 = t;
                  if(((r_22 != NULL) && (r_22 != s_22)))
                    _fail(s_22);
                  else
                    r_22 = s_22;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_22), not_null(r_22));
                t = k_65(t);
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
ATerm crush_2 (ATerm t, ATerm b_67 (ATerm), ATerm c_67 (ATerm))
{
  ATerm g_23 = NULL;
  ATerm i_23 = NULL;
  g_23 = t;
  {
    ATerm j_23 = NULL;
    ATerm l_23 = NULL,o_23 = NULL,p_23 = NULL;
    t = not_null(g_23);
    {
      j_23 = t;
      {
        t = SSL_explode_term(not_null(j_23));
        {
          l_23 = t;
          f_23 :
          if(match_cons(l_23, sym__2))
            {
              o_23 = ATgetArgument(l_23, 0);
              p_23 = ATgetArgument(l_23, 1);
              if(((i_23 != NULL) && (i_23 != p_23)))
                _fail(p_23);
              else
                i_23 = p_23;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(i_23);
      t = foldr_2(t, b_67, c_67);
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
    ATerm j_4 (ATerm t)
    {
      t = term_d_15;
      return(t);
    }
    t = crush_2(t, j_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
  v_23 = t;
  u_23 :
  if(match_cons(v_23, sym__2))
    {
      w_23 = ATgetArgument(v_23, 0);
      x_23 = ATgetArgument(v_23, 1);
      {
        ATerm p_17;
        p_17 = t;
        {
          ATerm q_17 = t;
          int r_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(w_23), not_null(x_23));
              LocalPopChoice(r_17);
            }
          else
            {
              t = q_17;
              t = SSL_gtr(not_null(w_23), not_null(x_23));
            }
        }
        t = p_17;
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
  ATerm f_24 = NULL;
  ATerm s_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
      g_24 = t;
      e_24 :
      if(match_cons(g_24, sym__2))
        {
          h_24 = ATgetArgument(g_24, 0);
          i_24 = ATgetArgument(g_24, 1);
          {
            if(((f_24 != NULL) && (f_24 != h_24)))
              _fail(h_24);
            else
              f_24 = h_24;
            if(((f_24 != NULL) && (f_24 != i_24)))
              _fail(i_24);
            else
              f_24 = i_24;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(z_17);
    }
  else
    {
      t = s_17;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm l_58 (ATerm))
{
  ATerm l_4 (ATerm t)
  {
    ATerm a_18;
    a_18 = t;
    {
      ATerm r_24 = NULL;
      ATerm y_24 = NULL;
      t = term_e_10;
      {
        t = get_config_0(t);
        {
          y_24 = t;
          if(((r_24 != NULL) && (r_24 != y_24)))
            _fail(y_24);
          else
            r_24 = y_24;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_24), term_d_12);
        t = geq_0(t);
      }
    }
    t = a_18;
    t = l_58(t);
    return(t);
  }
  t = try_1(t, l_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm m_4 (ATerm t)
  {
    ATerm c_25 = NULL,e_25 = NULL;
    ATerm b_18;
    b_18 = t;
    {
      ATerm d_25 = NULL;
      t = run_time_0(t);
      {
        d_25 = t;
        if(((c_25 != NULL) && (c_25 != d_25)))
          _fail(d_25);
        else
          c_25 = d_25;
      }
    }
    t = b_18;
    {
      ATerm f_25 = NULL;
      t = term_c_18;
      {
        t = get_config_0(t);
        {
          f_25 = t;
          if(((e_25 != NULL) && (e_25 != f_25)))
            _fail(f_25);
          else
            e_25 = f_25;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_18), not_null(c_25)), term_d_18), not_null(e_25)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, m_4);
  {
    t = term_d_15;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm n_25 = NULL;
  n_25 = t;
  m_25 :
  if(match_cons(n_25, sym_Version_0))
    {
      ATerm p_25 = NULL,r_25 = NULL;
      ATerm g_18;
      g_18 = t;
      {
        ATerm q_25 = NULL;
        t = SSLgetAnnotations(not_null(n_25));
        {
          q_25 = t;
          if(((p_25 != NULL) && (p_25 != q_25)))
            _fail(q_25);
          else
            p_25 = q_25;
        }
      }
      t = g_18;
      {
        ATerm s_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(p_25));
        {
          s_25 = t;
          if(((r_25 != NULL) && (r_25 != s_25)))
            _fail(s_25);
          else
            r_25 = s_25;
        }
        t = not_null(r_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm q_60 (ATerm))
{
  ATerm r_4 (ATerm t)
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        {
          ATerm n_18 = t;
          int o_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(o_18);
            }
          else
            {
              t = n_18;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, r_4);
  t = q_60(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm x_25 = NULL;
  x_25 = t;
  t = SSL_table_create(not_null(x_25));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_26 = NULL;
  b_26 = t;
  {
    ATerm p_18;
    p_18 = t;
    {
      t = term_r_18;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_r_18, term_w_18, not_null(b_26));
          t = table_put_0(t);
        }
      }
    }
    t = p_18;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  t = SSL_table_destroy(not_null(f_26));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm j_26 = NULL;
  j_26 = t;
  t = SSL_exit(not_null(j_26));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm f_57 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm z_70 (ATerm))
{
  ATerm m_26 (ATerm t)
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        t = Cons_2(t, z_70, m_26);
      }
    return(t);
  }
  t = m_26(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
  v_26 = t;
  s_26 :
  if(((ATgetType(v_26) == AT_LIST) && ((ATermList) v_26 != ATempty)))
    {
      t_26 = ATgetFirst((ATermList) v_26);
      u_26 = (ATerm) ATgetNext((ATermList) v_26);
      {
        ATerm y_26 = NULL;
        t = not_null(u_26);
        {
          ATerm a_19;
          a_19 = t;
          {
            ATerm z_26 = NULL,b_27 = NULL,d_27 = NULL;
            ATerm b_19;
            b_19 = t;
            {
              ATerm a_27 = NULL;
              t = i_0(t);
              {
                a_27 = t;
                if(((z_26 != NULL) && (z_26 != a_27)))
                  _fail(a_27);
                else
                  z_26 = a_27;
              }
            }
            t = b_19;
            {
              ATerm c_27 = NULL;
              t = not_null(t_26);
              {
                t = h_0(t);
                {
                  c_27 = t;
                  if(((b_27 != NULL) && (b_27 != c_27)))
                    _fail(c_27);
                  else
                    b_27 = c_27;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(z_26)), not_null(b_27));
                {
                  d_27 = t;
                  if(((y_26 != NULL) && (y_26 != d_27)))
                    _fail(d_27);
                  else
                    y_26 = d_27;
                }
              }
            }
          }
          t = a_19;
          {
            ATerm s_4 (ATerm t)
            {
              t = not_null(y_26);
              return(t);
            }
            t = reverse_acc_2(t, h_0, s_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) v_26 == ATempty))
        {
          {
            t = term_k_6;
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
  ATerm t_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, t_4);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm m_27 = NULL;
  m_27 = t;
  t = SSL_implode_string(not_null(m_27));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm o_71 (ATerm))
{
  ATerm u_27 (ATerm t)
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, u_27);
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        {
          t = Nil_0(t);
          t = o_71(t);
        }
      }
    return(t);
  }
  t = u_27(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm e_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(m_19);
    }
  else
    {
      t = e_19;
      {
        ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL;
        x_27 = t;
        w_27 :
        if(((ATgetType(x_27) == AT_LIST) && ((ATermList) x_27 != ATempty)))
          {
            y_27 = ATgetFirst((ATermList) x_27);
            z_27 = (ATerm) ATgetNext((ATermList) x_27);
            {
              t = not_null(y_27);
              {
                ATerm u_4 (ATerm t)
                {
                  t = not_null(z_27);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, u_4);
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
ATerm explode_string_0 (ATerm t)
{
  ATerm f_28 = NULL;
  f_28 = t;
  t = SSL_explode_string(not_null(f_28));
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
ATerm short_description_1 (ATerm t, ATerm e_57 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_47 (ATerm))
{
  ATerm n_28 = NULL,o_28 = NULL;
  n_28 = t;
  m_28 :
  if(match_cons(n_28, sym_Program_1))
    {
      o_28 = ATgetArgument(n_28, 0);
      {
        ATerm r_28 = NULL,w_28 = NULL;
        ATerm v_28 = NULL;
        t = SSLgetAnnotations(not_null(n_28));
        {
          v_28 = t;
          if(((r_28 != NULL) && (r_28 != v_28)))
            _fail(v_28);
          else
            r_28 = v_28;
        }
        {
          t = not_null(o_28);
          {
            ATerm y_28 = NULL;
            t = a_47(t);
            {
              w_28 = t;
              {
                ATerm z_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(w_28)), not_null(r_28));
                {
                  z_28 = t;
                  if(((y_28 != NULL) && (y_28 != z_28)))
                    _fail(z_28);
                  else
                    y_28 = z_28;
                }
                t = not_null(y_28);
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
  ATerm i_29 = NULL;
  ATerm v_4 (ATerm t)
  {
    ATerm w_4 (ATerm t)
    {
      ATerm j_29 = NULL;
      j_29 = t;
      if(((i_29 != NULL) && (i_29 != j_29)))
        _fail(j_29);
      else
        i_29 = j_29;
      return(t);
    }
    t = Program_1(t, w_4);
    return(t);
  }
  t = option_defined_1(t, v_4);
  {
    ATerm x_4 (ATerm t)
    {
      ATerm k_29 = NULL;
      ATerm l_29 = NULL;
      t = term_k_6;
      {
        ATerm y_4 (ATerm t)
        {
          t = not_null(i_29);
          return(t);
        }
        t = short_description_1(t, y_4);
        {
          t = concat_strings_0(t);
          {
            l_29 = t;
            if(((k_29 != NULL) && (k_29 != l_29)))
              _fail(l_29);
            else
              k_29 = l_29;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_13, (ATerm) ATinsert(ATempty, not_null(k_29)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, x_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_13, (ATerm) ATinsert(ATempty, term_n_19));
      {
        t = printnl_0(t);
        {
          t = term_q_19;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm z_4 (ATerm t)
                {
                  ATerm m_29 = NULL;
                  ATerm n_29 = NULL;
                  n_29 = t;
                  if(((m_29 != NULL) && (m_29 != n_29)))
                    _fail(n_29);
                  else
                    m_29 = n_29;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_p_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_29)), term_r_19));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, z_4);
                {
                  ATerm e_5 (ATerm t)
                  {
                    ATerm o_29 = NULL;
                    ATerm p_29 = NULL;
                    ATerm f_5 (ATerm t)
                    {
                      t = not_null(i_29);
                      return(t);
                    }
                    t = long_description_1(t, f_5);
                    {
                      p_29 = t;
                      if(((o_29 != NULL) && (o_29 != p_29)))
                        _fail(p_29);
                      else
                        o_29 = p_29;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_p_13, (ATerm) ATinsert(CheckATermList(not_null(o_29)), term_s_19));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, e_5);
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
ATerm Undefined_1 (ATerm t, ATerm b_47 (ATerm))
{
  ATerm c_30 = NULL,d_30 = NULL;
  c_30 = t;
  b_30 :
  if(match_cons(c_30, sym_Undefined_1))
    {
      d_30 = ATgetArgument(c_30, 0);
      {
        ATerm i_30 = NULL,k_30 = NULL;
        ATerm j_30 = NULL;
        t = SSLgetAnnotations(not_null(c_30));
        {
          j_30 = t;
          if(((i_30 != NULL) && (i_30 != j_30)))
            _fail(j_30);
          else
            i_30 = j_30;
        }
        {
          t = not_null(d_30);
          {
            ATerm m_30 = NULL;
            t = b_47(t);
            {
              k_30 = t;
              {
                ATerm n_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(k_30)), not_null(i_30));
                {
                  n_30 = t;
                  if(((m_30 != NULL) && (m_30 != n_30)))
                    _fail(n_30);
                  else
                    m_30 = n_30;
                }
                t = not_null(m_30);
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
ATerm fetch_1 (ATerm t, ATerm i_71 (ATerm))
{
  ATerm s_30 (ATerm t)
  {
    ATerm t_19 = t;
    int u_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, i_71, _id);
        LocalPopChoice(u_19);
      }
    else
      {
        t = t_19;
        t = Cons_2(t, _id, s_30);
      }
    return(t);
  }
  t = s_30(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_58 (ATerm))
{
  t = fetch_1(t, j_58);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_30 = NULL;
  x_30 = t;
  w_30 :
  if(match_cons(x_30, sym_Help_0))
    {
      ATerm z_30 = NULL,b_31 = NULL;
      ATerm v_19;
      v_19 = t;
      {
        ATerm a_31 = NULL;
        t = SSLgetAnnotations(not_null(x_30));
        {
          a_31 = t;
          if(((z_30 != NULL) && (z_30 != a_31)))
            _fail(a_31);
          else
            z_30 = a_31;
        }
      }
      t = v_19;
      {
        ATerm c_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(z_30));
        {
          c_31 = t;
          if(((b_31 != NULL) && (b_31 != c_31)))
            _fail(c_31);
          else
            b_31 = c_31;
        }
        t = not_null(b_31);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm t_79 (ATerm))
{
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_79(t);
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL;
  i_31 = t;
  h_31 :
  if(match_cons(i_31, sym__2))
    {
      j_31 = ATgetArgument(i_31, 0);
      k_31 = ATgetArgument(i_31, 1);
      t = SSL_table_get(not_null(j_31), not_null(k_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm r_31 = NULL,x_31 = NULL,a_32 = NULL,b_32 = NULL;
  r_31 = t;
  q_31 :
  if(match_cons(r_31, sym__3))
    {
      x_31 = ATgetArgument(r_31, 0);
      a_32 = ATgetArgument(r_31, 1);
      b_32 = ATgetArgument(r_31, 2);
      {
        ATerm a_20;
        a_20 = t;
        {
          ATerm f_32 = NULL;
          ATerm g_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_31), not_null(a_32));
          {
            ATerm c_20 = t;
            int d_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(d_20);
              }
            else
              {
                t = c_20;
                t = (ATerm) ATempty;
              }
            {
              g_32 = t;
              if(((f_32 != NULL) && (f_32 != g_32)))
                _fail(g_32);
              else
                f_32 = g_32;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_31), not_null(a_32), (ATerm) ATinsert(CheckATermList(not_null(f_32)), not_null(b_32)));
            t = table_put_0(t);
          }
        }
        t = a_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm j_57 (ATerm))
{
  ATerm m_32 = NULL;
  ATerm n_32 = NULL;
  t = term_k_6;
  {
    t = j_57(t);
    {
      n_32 = t;
      if(((m_32 != NULL) && (m_32 != n_32)))
        _fail(n_32);
      else
        m_32 = n_32;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_19, term_p_19, not_null(m_32));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
  t_32 = t;
  s_32 :
  if(match_string(t_32, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(t_32) == AT_LIST) && ((ATermList) t_32 != ATempty)))
        {
          u_32 = ATgetFirst((ATermList) t_32);
          v_32 = (ATerm) ATgetNext((ATermList) t_32);
          {
            ATerm y_32 = NULL;
            ATerm f_20;
            f_20 = t;
            {
              t = not_null(u_32);
              t = a_0(t);
            }
            t = f_20;
            {
              ATerm z_32 = NULL;
              t = term_k_6;
              {
                t = b_0(t);
                {
                  z_32 = t;
                  if(((y_32 != NULL) && (y_32 != z_32)))
                    _fail(z_32);
                  else
                    y_32 = z_32;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_32)), not_null(y_32));
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
  ATerm g_5 (ATerm t)
  {
    ATerm e_33 = NULL;
    e_33 = t;
    d_33 :
    if(!(match_string(e_33, "--help")))
      {
        if(!(match_string(e_33, "-h")))
          {
            if(!(match_string(e_33, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = term_g_20;
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = term_j_20;
    return(t);
  }
  t = Option_3(t, g_5, l_5, m_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
  h_33 = t;
  g_33 :
  if(((ATgetType(h_33) == AT_LIST) && ((ATermList) h_33 != ATempty)))
    {
      i_33 = ATgetFirst((ATermList) h_33);
      j_33 = (ATerm) ATgetNext((ATermList) h_33);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_33)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_33)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm d_53 (ATerm), ATerm e_53 (ATerm))
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
  t_33 = t;
  s_33 :
  if(((ATgetType(t_33) == AT_LIST) && ((ATermList) t_33 != ATempty)))
    {
      u_33 = ATgetFirst((ATermList) t_33);
      v_33 = (ATerm) ATgetNext((ATermList) t_33);
      {
        ATerm z_33 = NULL,b_34 = NULL;
        ATerm a_34 = NULL;
        t = SSLgetAnnotations(not_null(t_33));
        {
          a_34 = t;
          if(((z_33 != NULL) && (z_33 != a_34)))
            _fail(a_34);
          else
            z_33 = a_34;
        }
        {
          t = not_null(u_33);
          {
            ATerm d_34 = NULL;
            t = d_53(t);
            {
              b_34 = t;
              {
                t = not_null(v_33);
                {
                  ATerm f_34 = NULL;
                  t = e_53(t);
                  {
                    d_34 = t;
                    {
                      ATerm g_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(d_34)), not_null(b_34)), not_null(z_33));
                      {
                        g_34 = t;
                        if(((f_34 != NULL) && (f_34 != g_34)))
                          _fail(g_34);
                        else
                          f_34 = g_34;
                      }
                      t = not_null(f_34);
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
  ATerm q_34 = NULL;
  q_34 = t;
  p_34 :
  if(((ATermList) q_34 == ATempty))
    {
      {
        ATerm s_34 = NULL,u_34 = NULL;
        ATerm k_20;
        k_20 = t;
        {
          ATerm t_34 = NULL;
          t = SSLgetAnnotations(not_null(q_34));
          {
            t_34 = t;
            if(((s_34 != NULL) && (s_34 != t_34)))
              _fail(t_34);
            else
              s_34 = t_34;
          }
        }
        t = k_20;
        {
          ATerm v_34 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(s_34));
          {
            v_34 = t;
            if(((u_34 != NULL) && (u_34 != v_34)))
              _fail(v_34);
            else
              u_34 = v_34;
          }
          t = not_null(u_34);
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
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL;
  b_35 = t;
  a_35 :
  if(match_cons(b_35, sym__2))
    {
      c_35 = ATgetArgument(b_35, 0);
      d_35 = ATgetArgument(b_35, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_a_13, not_null(c_35), not_null(d_35));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm h_57 (ATerm))
{
  ATerm m_20;
  m_20 = t;
  {
    ATerm p_5 (ATerm t)
    {
      t = term_n_20;
      t = h_57(t);
      return(t);
    }
    t = try_1(t, p_5);
  }
  t = m_20;
  {
    ATerm r_5 (ATerm t)
    {
      ATerm l_35 = NULL;
      ATerm o_20;
      o_20 = t;
      {
        ATerm j_35 = NULL;
        ATerm k_35 = NULL;
        k_35 = t;
        if(((j_35 != NULL) && (j_35 != k_35)))
          _fail(k_35);
        else
          j_35 = k_35;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_18, not_null(j_35));
          t = set_config_0(t);
        }
      }
      t = o_20;
      {
        ATerm m_35 = NULL;
        m_35 = t;
        if(((l_35 != NULL) && (l_35 != m_35)))
          _fail(m_35);
        else
          l_35 = m_35;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_35));
      }
      return(t);
    }
    ATerm s_5 (ATerm t)
    {
      ATerm p_20 = t;
      int k_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_21 = t;
          int r_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(r_21);
            }
          else
            {
              t = q_21;
              {
                t = h_57(t);
                t = Cons_2(t, _id, s_5);
              }
            }
          LocalPopChoice(k_21);
        }
      else
        {
          t = p_20;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, r_5, s_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
  ATerm s_21;
  s_21 = t;
  {
    ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL;
    a_36 = t;
    w_35 :
    if(match_cons(a_36, sym__3))
      {
        b_36 = ATgetArgument(a_36, 0);
        c_36 = ATgetArgument(a_36, 1);
        d_36 = ATgetArgument(a_36, 2);
        {
          if(((x_35 != NULL) && (x_35 != b_36)))
            _fail(b_36);
          else
            x_35 = b_36;
          {
            if(((y_35 != NULL) && (y_35 != c_36)))
              _fail(c_36);
            else
              y_35 = c_36;
            {
              if(((z_35 != NULL) && (z_35 != d_36)))
                _fail(d_36);
              else
                z_35 = d_36;
              t = SSL_table_put(not_null(x_35), not_null(y_35), not_null(z_35));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = s_21;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm g_57 (ATerm))
{
  ATerm g_36 = NULL;
  ATerm t_21;
  t_21 = t;
  {
    t = term_u_21;
    t = table_put_0(t);
  }
  t = t_21;
  {
    ATerm t_5 (ATerm t)
    {
      ATerm v_21 = t;
      int w_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_57(t);
          LocalPopChoice(w_21);
        }
      else
        {
          t = v_21;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, t_5);
    {
      ATerm u_5 (ATerm t)
      {
        ATerm x_21 = t;
        int z_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_d_15;
                t = exit_0(t);
              }
            }
            LocalPopChoice(z_21);
          }
        else
          {
            t = x_21;
            {
              ATerm v_5 (ATerm t)
              {
                ATerm x_5 (ATerm t)
                {
                  ATerm h_36 = NULL;
                  h_36 = t;
                  if(((g_36 != NULL) && (g_36 != h_36)))
                    _fail(h_36);
                  else
                    g_36 = h_36;
                  return(t);
                }
                t = Undefined_1(t, x_5);
                return(t);
              }
              t = option_defined_1(t, v_5);
              {
                ATerm a_22;
                a_22 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_36)), term_b_22));
                  t = printnl_0(t);
                }
                t = a_22;
                {
                  t = system_usage_0(t);
                  {
                    t = term_d_12;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, u_5);
      {
        ATerm g_22;
        g_22 = t;
        {
          t = term_o_19;
          t = table_destroy_0(t);
        }
        t = g_22;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm n_59 (ATerm), ATerm o_59 (ATerm), ATerm p_59 (ATerm), ATerm q_59 (ATerm))
{
  t = parse_options_1(t, n_59);
  {
    t = store_options_0(t);
    {
      t = p_59(t);
      {
        ATerm h_22 = t;
        int i_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, o_59);
            LocalPopChoice(i_22);
          }
        else
          {
            t = h_22;
            {
              ATerm j_22 = t;
              int k_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_59(t);
                  t = report_success_0(t);
                  LocalPopChoice(k_22);
                }
              else
                {
                  t = j_22;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm e_60 (ATerm), ATerm f_60 (ATerm), ATerm g_60 (ATerm), ATerm h_60 (ATerm))
{
  ATerm a_6 (ATerm t)
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_60(t);
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, e_60);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, a_6, g_60, h_60, b_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm y_59 (ATerm), ATerm z_59 (ATerm), ATerm a_60 (ATerm))
{
  ATerm c_6 (ATerm t)
  {
    ATerm e_6 (ATerm t)
    {
      ATerm t_22;
      t_22 = t;
      {
        ATerm k_36 = NULL;
        ATerm l_36 = NULL;
        t = term_c_18;
        {
          t = get_config_0(t);
          {
            l_36 = t;
            if(((k_36 != NULL) && (k_36 != l_36)))
              _fail(l_36);
            else
              k_36 = l_36;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_11, (ATerm) ATinsert(ATempty, not_null(k_36)));
          t = printnl_0(t);
        }
      }
      t = t_22;
      return(t);
    }
    t = if_verbose2_1(t, e_6);
    return(t);
  }
  t = iowrap_4(t, y_59, z_59, a_60, c_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm w_59 (ATerm), ATerm x_59 (ATerm))
{
  t = iowrap_3(t, w_59, x_59, default_usage_0);
  return(t);
}
ATerm term_to_adot_0 (ATerm t)
{
  ATerm f_6 (ATerm t)
  {
    ATerm p_36 = NULL,q_36 = NULL,v_36 = NULL;
    p_36 = t;
    o_36 :
    if(match_cons(p_36, sym__2))
      {
        q_36 = ATgetArgument(p_36, 0);
        v_36 = ATgetArgument(p_36, 1);
        {
          t = not_null(q_36);
          t = to_adot_0(t);
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = iowrap_2(t, f_6, term_to_adot_options_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = term_to_adot_0(t);
  return(t);
}
