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
ATerm term_w_20;
ATerm term_l_20;
ATerm term_y_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_w_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_c_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_l_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_a_15;
ATerm term_v_14;
ATerm term_l_14;
ATerm term_v_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_y_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_h_12;
ATerm term_b_12;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_t_9;
ATerm term_l_9;
ATerm term_g_9;
ATerm term_b_8;
ATerm term_y_7;
ATerm term_t_7;
ATerm term_r_7;
ATerm term_p_7;
ATerm term_k_7;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_a_6;
ATerm term_z_5;
void init_constant_terms (void)
{
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(sym__2, term_z_5, term_a_6);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(sym__2, term_f_6, term_a_6);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_AttrId_2, term_k_7, term_r_7);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym__2, term_g_9, term_y_12);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_12);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i         Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym__2, term_e_17, term_a_6);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym__2, term_o_17, term_a_6);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym__2, term_w_17, term_a_6);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym__2, term_t_18, term_u_18);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym__3, term_t_18, term_u_18, (ATerm) ATempty);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm term_to_adot_options_0 (ATerm);
ATerm Escape_0 (ATerm);
ATerm escape_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm quote_1 (ATerm, ATerm g_62 (ATerm));
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
ATerm HdMember_p__2 (ATerm, ATerm n_65 (ATerm), ATerm o_65 (ATerm));
ATerm union_1 (ATerm, ATerm p_65 (ATerm));
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm a_66 (ATerm), ATerm b_66 (ATerm), ATerm c_66 (ATerm));
ATerm foldr_3 (ATerm, ATerm i_64 (ATerm), ATerm j_64 (ATerm), ATerm k_64 (ATerm));
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm new_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm w_57 (ATerm));
ATerm term_to_tree_0 (ATerm);
ATerm to_adot_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm j_60 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm t_57 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm g_64 (ATerm), ATerm h_64 (ATerm));
ATerm crush_2 (ATerm, ATerm y_65 (ATerm), ATerm z_65 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm s_57 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm u_44 (ATerm), ATerm v_44 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm t_59 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm u_62 (ATerm), ATerm v_62 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm r_59 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_70 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm m_56 (ATerm));
ATerm map_1 (ATerm, ATerm w_69 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm l_56 (ATerm));
ATerm Program_1 (ATerm, ATerm i_46 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm j_46 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_70 (ATerm));
ATerm option_defined_1 (ATerm, ATerm q_57 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm q_78 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm q_56 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm l_52 (ATerm), ATerm m_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm o_56 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm n_56 (ATerm));
ATerm iowrap_4 (ATerm, ATerm f_59 (ATerm), ATerm g_59 (ATerm), ATerm h_59 (ATerm), ATerm i_59 (ATerm));
ATerm iowrap_3 (ATerm, ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm b_59 (ATerm));
ATerm iowrap_2 (ATerm, ATerm x_58 (ATerm), ATerm y_58 (ATerm));
ATerm term_to_adot_0 (ATerm);
ATerm main_0 (ATerm);
ATerm term_to_adot_options_0 (ATerm t)
{
  ATerm v_5 = t;
  int w_5 = stack_ptr;
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
        t = term_c_6;
        t = set_config_0(t);
        t = term_d_6;
        return(t);
      }
      ATerm e_0 (ATerm t)
      {
        t = term_e_6;
        return(t);
      }
      t = Option_3(t, c_0, d_0, e_0);
      LocalPopChoice(w_5);
    }
  else
    {
      t = v_5;
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
          t = term_g_6;
          t = set_config_0(t);
          t = term_n_6;
          return(t);
        }
        ATerm n_0 (ATerm t)
        {
          t = term_o_6;
          return(t);
        }
        t = Option_3(t, f_0, m_0, n_0);
      }
    }
  return(t);
}
ATerm Escape_0 (ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL,a_2 = NULL;
  y_1 = t;
  t_1 :
  if(((ATgetType(y_1) == AT_LIST) && ((ATermList) y_1 != ATempty)))
    {
      z_1 = ATgetFirst((ATermList) y_1);
      a_2 = (ATerm) ATgetNext((ATermList) y_1);
      u_1 :
      if(match_int(z_1, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(a_2)), term_q_6), term_p_6);
        }
      else
        {
          if(match_int(z_1, 92))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(a_2)), term_p_6), term_p_6);
            }
          else
            {
              if(match_int(z_1, 34))
                {
                  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(a_2)), term_r_6), term_p_6);
                }
              else
                {
                  _fail(t);
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
ATerm escape_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm h_2 (ATerm t)
    {
      ATerm w_6 = t;
      int x_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Escape_0(t);
          {
            ATerm o_0 (ATerm t)
            {
              t = Cons_2(t, _id, h_2);
              return(t);
            }
            t = Cons_2(t, _id, o_0);
          }
          LocalPopChoice(x_6);
        }
      else
        {
          t = w_6;
          {
            ATerm y_6 = t;
            int z_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, h_2);
                LocalPopChoice(z_6);
              }
            else
              {
                t = y_6;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = h_2(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm j_2 = NULL;
  j_2 = t;
  t = SSL_is_int(not_null(j_2));
  return(t);
}
ATerm quote_1 (ATerm t, ATerm g_62 (ATerm))
{
  ATerm p_2 = NULL;
  ATerm r_2 = NULL,t_2 = NULL;
  p_2 = t;
  {
    ATerm e_7;
    e_7 = t;
    {
      ATerm s_2 = NULL;
      t = g_62(t);
      {
        s_2 = t;
        if(((r_2 != NULL) && (r_2 != s_2)))
          _fail(s_2);
        else
          r_2 = s_2;
      }
    }
    t = e_7;
    {
      ATerm u_2 = NULL;
      t = not_null(p_2);
      {
        t = explode_string_0(t);
        {
          u_2 = t;
          if(((t_2 != NULL) && (t_2 != u_2)))
            _fail(u_2);
          else
            t_2 = u_2;
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, not_null(r_2))), not_null(t_2)), (ATerm) ATinsert(ATempty, not_null(r_2)));
        {
          t = concat_0(t);
          t = implode_string_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm double_quote_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    t = term_r_6;
    return(t);
  }
  t = quote_1(t, s_0);
  return(t);
}
ATerm EdgeToDot_0 (ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL;
  j_3 = t;
  i_3 :
  if(match_cons(j_3, sym__2))
    {
      k_3 = ATgetArgument(j_3, 0);
      l_3 = ATgetArgument(j_3, 1);
      {
        ATerm f_7 = t;
        int h_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_3 = NULL,p_3 = NULL,v_3 = NULL,x_3 = NULL;
            ATerm i_7;
            i_7 = t;
            {
              ATerm q_3 = NULL;
              ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL;
              t = not_null(l_3);
              {
                q_3 = t;
                {
                  t = SSL_explode_term(not_null(q_3));
                  {
                    s_3 = t;
                    c_3 :
                    if(match_cons(s_3, sym__2))
                      {
                        t_3 = ATgetArgument(s_3, 0);
                        u_3 = ATgetArgument(s_3, 1);
                        {
                          if(((o_3 != NULL) && (o_3 != t_3)))
                            _fail(t_3);
                          else
                            o_3 = t_3;
                          if(((p_3 != NULL) && (p_3 != u_3)))
                            _fail(u_3);
                          else
                            p_3 = u_3;
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
            t = i_7;
            {
              ATerm j_7;
              j_7 = t;
              {
                ATerm w_3 = NULL;
                t = not_null(o_3);
                {
                  t = escape_0(t);
                  {
                    t = double_quote_0(t);
                    {
                      w_3 = t;
                      if(((v_3 != NULL) && (v_3 != w_3)))
                        _fail(w_3);
                      else
                        v_3 = w_3;
                    }
                  }
                }
              }
              t = j_7;
              {
                ATerm a_4 = NULL;
                t = not_null(p_3);
                {
                  ATerm t_0 (ATerm t)
                  {
                    ATerm y_3 = NULL;
                    y_3 = t;
                    t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_3)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(y_3)))));
                    return(t);
                  }
                  t = map_1(t, t_0);
                  {
                    a_4 = t;
                    if(((x_3 != NULL) && (x_3 != a_4)))
                      _fail(a_4);
                    else
                      x_3 = a_4;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(x_3)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_3)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_k_7, not_null(v_3)))))));
              }
            }
            LocalPopChoice(h_7);
          }
        else
          {
            t = f_7;
            {
              ATerm d_4 = NULL;
              ATerm e_4 = NULL,g_4 = NULL;
              t = not_null(l_3);
              {
                t = is_int_0(t);
                {
                  ATerm f_4 = NULL;
                  t = not_null(l_3);
                  {
                    t = int_to_string_0(t);
                    {
                      t = escape_0(t);
                      {
                        f_4 = t;
                        if(((e_4 != NULL) && (e_4 != f_4)))
                          _fail(f_4);
                        else
                          e_4 = f_4;
                      }
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_7), not_null(e_4)), term_p_7);
                    {
                      t = concat_strings_0(t);
                      {
                        g_4 = t;
                        if(((d_4 != NULL) && (d_4 != g_4)))
                          _fail(g_4);
                        else
                          d_4 = g_4;
                      }
                    }
                  }
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_3)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_k_7, not_null(d_4)))))));
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
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
  r_4 = t;
  q_4 :
  if(((ATermList) r_4 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(r_4) == AT_LIST) && ((ATermList) r_4 != ATempty)))
        {
          s_4 = ATgetFirst((ATermList) r_4);
          t_4 = (ATerm) ATgetNext((ATermList) r_4);
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
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
  y_4 = t;
  x_4 :
  if(match_cons(y_4, sym__2))
    {
      z_4 = ATgetArgument(y_4, 0);
      a_5 = ATgetArgument(y_4, 1);
      {
        ATerm d_5 = NULL;
        ATerm q_7;
        q_7 = t;
        {
          t = not_null(a_5);
          t = is_list_0(t);
        }
        t = q_7;
        {
          ATerm g_5 = NULL;
          t = not_null(a_5);
          {
            ATerm u_0 (ATerm t)
            {
              ATerm e_5 = NULL;
              e_5 = t;
              t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_4)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(e_5)))));
              return(t);
            }
            t = map_1(t, u_0);
            {
              g_5 = t;
              if(((d_5 != NULL) && (d_5 != g_5)))
                _fail(g_5);
              else
                d_5 = g_5;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(d_5)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_4)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_t_7)))));
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
  ATerm m_5 = NULL;
  ATerm o_5 = NULL;
  m_5 = t;
  {
    ATerm p_5 = NULL;
    t = not_null(m_5);
    {
      ATerm v_0 (ATerm t)
      {
        ATerm u_7 = t;
        int v_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ListEdgeToDot_0(t);
            LocalPopChoice(v_7);
          }
        else
          {
            t = u_7;
            t = EdgeToDot_0(t);
          }
        return(t);
      }
      t = map_1(t, v_0);
      {
        t = concat_0(t);
        {
          p_5 = t;
          if(((o_5 != NULL) && (o_5 != p_5)))
            _fail(p_5);
          else
            o_5 = p_5;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_y_7, not_null(o_5));
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm t_5 = NULL;
  t_5 = t;
  t = SSL_int_to_string(not_null(t_5));
  return(t);
}
ATerm NodeId_0 (ATerm t)
{
  ATerm x_5 = NULL;
  ATerm y_5 = NULL;
  t = int_to_string_0(t);
  {
    y_5 = t;
    if(((x_5 != NULL) && (x_5 != y_5)))
      _fail(y_5);
    else
      x_5 = y_5;
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, term_b_8, not_null(x_5));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm address_0 (ATerm t)
{
  ATerm b_6 = NULL;
  b_6 = t;
  t = SSL_address(not_null(b_6));
  return(t);
}
ATerm term_to_graph_0 (ATerm t)
{
  ATerm h_6 = NULL,j_6 = NULL,l_6 = NULL;
  ATerm f_8;
  f_8 = t;
  {
    ATerm i_6 = NULL;
    t = address_0(t);
    {
      t = NodeId_0(t);
      {
        i_6 = t;
        if(((h_6 != NULL) && (h_6 != i_6)))
          _fail(i_6);
        else
          h_6 = i_6;
      }
    }
  }
  t = f_8;
  {
    ATerm g_8;
    g_8 = t;
    {
      ATerm k_6 = NULL;
      ATerm h_8 = t;
      int i_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_0 (ATerm t)
          {
            t = address_0(t);
            t = NodeId_0(t);
            return(t);
          }
          t = map_1(t, w_0);
          LocalPopChoice(i_8);
        }
      else
        {
          t = h_8;
          {
            ATerm x_0 (ATerm t)
            {
              t = address_0(t);
              t = NodeId_0(t);
              return(t);
            }
            t = _all(t, x_0);
          }
        }
      {
        k_6 = t;
        if(((j_6 != NULL) && (j_6 != k_6)))
          _fail(k_6);
        else
          j_6 = k_6;
      }
    }
    t = g_8;
    {
      ATerm m_6 = NULL;
      ATerm j_8 = t;
      int k_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_0 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = foldr_3(t, y_0, union_0, term_to_graph_0);
          LocalPopChoice(k_8);
        }
      else
        {
          t = j_8;
          {
            ATerm z_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, z_0, union_0, term_to_graph_0);
          }
        }
      {
        m_6 = t;
        if(((l_6 != NULL) && (l_6 != m_6)))
          _fail(m_6);
        else
          l_6 = m_6;
      }
      t = (ATerm) ATinsert(CheckATermList(not_null(l_6)), (ATerm) ATmakeAppl(sym__2, not_null(h_6), not_null(j_6)));
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL;
  t_6 = t;
  s_6 :
  if(match_cons(t_6, sym__2))
    {
      u_6 = ATgetArgument(t_6, 0);
      v_6 = ATgetArgument(t_6, 1);
      if(((u_6 != NULL) && (u_6 != v_6)))
        _fail(v_6);
      else
        u_6 = v_6;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm n_65 (ATerm), ATerm o_65 (ATerm))
{
  ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
  b_7 = t;
  a_7 :
  if(((ATgetType(b_7) == AT_LIST) && ((ATermList) b_7 != ATempty)))
    {
      c_7 = ATgetFirst((ATermList) b_7);
      d_7 = (ATerm) ATgetNext((ATermList) b_7);
      {
        t = o_65(t);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm g_7 = NULL;
            g_7 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_7), not_null(g_7));
              t = n_65(t);
            }
            return(t);
          }
          t = fetch_1(t, a_1);
        }
        t = not_null(d_7);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm p_65 (ATerm))
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL;
  m_7 = t;
  l_7 :
  if(match_cons(m_7, sym__2))
    {
      n_7 = ATgetArgument(m_7, 0);
      o_7 = ATgetArgument(m_7, 1);
      {
        t = not_null(n_7);
        {
          ATerm s_7 (ATerm t)
          {
            ATerm p_8 = t;
            int q_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(o_7);
                LocalPopChoice(q_8);
              }
            else
              {
                t = p_8;
                {
                  ATerm v_8 = t;
                  int w_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_1 (ATerm t)
                      {
                        t = not_null(o_7);
                        return(t);
                      }
                      t = HdMember_p__2(t, p_65, b_1);
                      t = s_7(t);
                      LocalPopChoice(w_8);
                    }
                  else
                    {
                      t = v_8;
                      t = Cons_2(t, _id, s_7);
                    }
                }
              }
            return(t);
          }
          t = s_7(t);
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
ATerm crush_3 (ATerm t, ATerm a_66 (ATerm), ATerm b_66 (ATerm), ATerm c_66 (ATerm))
{
  ATerm x_7 = NULL;
  ATerm z_7 = NULL;
  x_7 = t;
  {
    ATerm a_8 = NULL;
    ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
    t = not_null(x_7);
    {
      a_8 = t;
      {
        t = SSL_explode_term(not_null(a_8));
        {
          c_8 = t;
          w_7 :
          if(match_cons(c_8, sym__2))
            {
              d_8 = ATgetArgument(c_8, 0);
              e_8 = ATgetArgument(c_8, 1);
              if(((z_7 != NULL) && (z_7 != e_8)))
                _fail(e_8);
              else
                z_7 = e_8;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_7);
      t = foldr_3(t, a_66, b_66, c_66);
    }
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm i_64 (ATerm), ATerm j_64 (ATerm), ATerm k_64 (ATerm))
{
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_64(t);
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
      {
        ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL;
        m_8 = t;
        l_8 :
        if(((ATgetType(m_8) == AT_LIST) && ((ATermList) m_8 != ATempty)))
          {
            n_8 = ATgetFirst((ATermList) m_8);
            o_8 = (ATerm) ATgetNext((ATermList) m_8);
            {
              ATerm r_8 = NULL,t_8 = NULL;
              ATerm z_8;
              z_8 = t;
              {
                ATerm s_8 = NULL;
                t = not_null(n_8);
                {
                  t = k_64(t);
                  {
                    s_8 = t;
                    if(((r_8 != NULL) && (r_8 != s_8)))
                      _fail(s_8);
                    else
                      r_8 = s_8;
                  }
                }
              }
              t = z_8;
              {
                ATerm u_8 = NULL;
                t = not_null(o_8);
                {
                  t = foldr_3(t, i_64, j_64, k_64);
                  {
                    u_8 = t;
                    if(((t_8 != NULL) && (t_8 != u_8)))
                      _fail(u_8);
                    else
                      t_8 = u_8;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_8), not_null(t_8));
                  t = j_64(t);
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
  ATerm f_9 = NULL;
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL;
  f_9 = t;
  {
    ATerm k_9 = NULL;
    ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL;
    t = not_null(f_9);
    {
      k_9 = t;
      {
        t = SSL_explode_term(not_null(k_9));
        {
          m_9 = t;
          b_9 :
          if(match_cons(m_9, sym__2))
            {
              n_9 = ATgetArgument(m_9, 0);
              o_9 = ATgetArgument(m_9, 1);
              c_9 :
              if(match_string(n_9, ""))
                {
                  d_9 :
                  if(((ATgetType(o_9) == AT_LIST) && ((ATermList) o_9 != ATempty)))
                    {
                      p_9 = ATgetFirst((ATermList) o_9);
                      q_9 = (ATerm) ATgetNext((ATermList) o_9);
                      e_9 :
                      if(((ATgetType(q_9) == AT_LIST) && ((ATermList) q_9 != ATempty)))
                        {
                          r_9 = ATgetFirst((ATermList) q_9);
                          s_9 = (ATerm) ATgetNext((ATermList) q_9);
                          {
                            if(((h_9 != NULL) && (h_9 != p_9)))
                              _fail(p_9);
                            else
                              h_9 = p_9;
                            {
                              if(((j_9 != NULL) && (j_9 != r_9)))
                                _fail(r_9);
                              else
                                j_9 = r_9;
                              if(((i_9 != NULL) && (i_9 != s_9)))
                                _fail(s_9);
                              else
                                i_9 = s_9;
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
    t = not_null(j_9);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm c_10 = NULL;
  ATerm e_10 = NULL,f_10 = NULL;
  c_10 = t;
  {
    ATerm g_10 = NULL;
    ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL;
    t = not_null(c_10);
    {
      g_10 = t;
      {
        t = SSL_explode_term(not_null(g_10));
        {
          i_10 = t;
          z_9 :
          if(match_cons(i_10, sym__2))
            {
              j_10 = ATgetArgument(i_10, 0);
              k_10 = ATgetArgument(i_10, 1);
              a_10 :
              if(match_string(j_10, ""))
                {
                  b_10 :
                  if(((ATgetType(k_10) == AT_LIST) && ((ATermList) k_10 != ATempty)))
                    {
                      l_10 = ATgetFirst((ATermList) k_10);
                      m_10 = (ATerm) ATgetNext((ATermList) k_10);
                      {
                        if(((f_10 != NULL) && (f_10 != l_10)))
                          _fail(l_10);
                        else
                          f_10 = l_10;
                        if(((e_10 != NULL) && (e_10 != m_10)))
                          _fail(m_10);
                        else
                          e_10 = m_10;
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
    t = not_null(f_10);
  }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm w_57 (ATerm))
{
  ATerm c_1 (ATerm t)
  {
    ATerm a_9;
    a_9 = t;
    {
      ATerm r_10 = NULL;
      ATerm s_10 = NULL;
      t = term_g_9;
      {
        t = get_config_0(t);
        {
          s_10 = t;
          if(((r_10 != NULL) && (r_10 != s_10)))
            _fail(s_10);
          else
            r_10 = s_10;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_10), term_l_9);
        t = geq_0(t);
      }
    }
    t = a_9;
    t = w_57(t);
    return(t);
  }
  t = try_1(t, c_1);
  return(t);
}
ATerm term_to_tree_0 (ATerm t)
{
  ATerm c_11 = NULL,e_11 = NULL;
  ATerm d_1 (ATerm t)
  {
    ATerm e_1 (ATerm t)
    {
      t = term_t_9;
      return(t);
    }
    t = debug_1(t, e_1);
    return(t);
  }
  t = if_verbose5_1(t, d_1);
  {
    ATerm u_9;
    u_9 = t;
    {
      ATerm d_11 = NULL;
      t = new_0(t);
      {
        d_11 = t;
        if(((c_11 != NULL) && (c_11 != d_11)))
          _fail(d_11);
        else
          c_11 = d_11;
      }
    }
    t = u_9;
    {
      ATerm f_11 = NULL;
      f_11 = t;
      if(((e_11 != NULL) && (e_11 != f_11)))
        _fail(f_11);
      else
        e_11 = f_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_11), not_null(e_11));
        {
          ATerm u_11 (ATerm t)
          {
            ATerm o_11 = NULL,q_11 = NULL;
            ATerm g_1 (ATerm t)
            {
              ATerm v_9 = t;
              int w_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_1 (ATerm t)
                  {
                    ATerm g_11 = NULL,i_11 = NULL;
                    ATerm x_9;
                    x_9 = t;
                    {
                      ATerm h_11 = NULL;
                      t = new_0(t);
                      {
                        h_11 = t;
                        if(((g_11 != NULL) && (g_11 != h_11)))
                          _fail(h_11);
                        else
                          g_11 = h_11;
                      }
                    }
                    t = x_9;
                    {
                      ATerm j_11 = NULL;
                      j_11 = t;
                      if(((i_11 != NULL) && (i_11 != j_11)))
                        _fail(j_11);
                      else
                        i_11 = j_11;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(g_11), not_null(i_11));
                    }
                    return(t);
                  }
                  t = map_1(t, h_1);
                  LocalPopChoice(w_9);
                }
              else
                {
                  t = v_9;
                  {
                    ATerm i_1 (ATerm t)
                    {
                      ATerm k_11 = NULL,m_11 = NULL;
                      ATerm y_9;
                      y_9 = t;
                      {
                        ATerm l_11 = NULL;
                        t = new_0(t);
                        {
                          l_11 = t;
                          if(((k_11 != NULL) && (k_11 != l_11)))
                            _fail(l_11);
                          else
                            k_11 = l_11;
                        }
                      }
                      t = y_9;
                      {
                        ATerm n_11 = NULL;
                        n_11 = t;
                        if(((m_11 != NULL) && (m_11 != n_11)))
                          _fail(n_11);
                        else
                          m_11 = n_11;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_11), not_null(m_11));
                      }
                      return(t);
                    }
                    t = _all(t, i_1);
                  }
                }
              return(t);
            }
            t = _2(t, _id, g_1);
            {
              ATerm d_10;
              d_10 = t;
              {
                ATerm p_11 = NULL;
                ATerm j_1 (ATerm t)
                {
                  ATerm h_10 = t;
                  int n_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = map_1(t, Fst_0);
                      LocalPopChoice(n_10);
                    }
                  else
                    {
                      t = h_10;
                      t = _all(t, Fst_0);
                    }
                  return(t);
                }
                t = _2(t, _id, j_1);
                {
                  p_11 = t;
                  if(((o_11 != NULL) && (o_11 != p_11)))
                    _fail(p_11);
                  else
                    o_11 = p_11;
                }
              }
              t = d_10;
              {
                ATerm r_11 = NULL;
                t = Snd_0(t);
                {
                  ATerm o_10 = t;
                  int p_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_1 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = foldr_3(t, k_1, union_0, u_11);
                      LocalPopChoice(p_10);
                    }
                  else
                    {
                      t = o_10;
                      {
                        ATerm l_1 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        t = crush_3(t, l_1, union_0, u_11);
                      }
                    }
                  {
                    r_11 = t;
                    if(((q_11 != NULL) && (q_11 != r_11)))
                      _fail(r_11);
                    else
                      q_11 = r_11;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(q_11)), not_null(o_11));
              }
            }
            return(t);
          }
          t = u_11(t);
        }
      }
    }
  }
  return(t);
}
ATerm to_adot_0 (ATerm t)
{
  ATerm q_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_10;
      u_10 = t;
      {
        t = term_f_6;
        t = get_config_0(t);
      }
      t = u_10;
      t = term_to_tree_0(t);
      LocalPopChoice(t_10);
    }
  else
    {
      t = q_10;
      {
        ATerm v_10;
        v_10 = t;
        {
          t = term_z_5;
          t = get_config_0(t);
        }
        t = v_10;
        t = term_to_graph_0(t);
      }
    }
  t = graph_to_adot_0(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm d_12 = NULL;
  ATerm w_10;
  w_10 = t;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm e_12 = NULL,f_12 = NULL;
      e_12 = t;
      c_12 :
      if(match_cons(e_12, sym_Program_1))
        {
          f_12 = ATgetArgument(e_12, 0);
          if(((d_12 != NULL) && (d_12 != f_12)))
            _fail(f_12);
          else
            d_12 = f_12;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, m_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_10), not_null(d_12)), term_y_10));
      {
        t = printnl_0(t);
        {
          t = term_a_11;
          t = exit_0(t);
        }
      }
    }
  }
  t = w_10;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
  j_12 = t;
  i_12 :
  if(match_cons(j_12, sym__2))
    {
      k_12 = ATgetArgument(j_12, 0);
      l_12 = ATgetArgument(j_12, 1);
      {
        ATerm b_11;
        b_11 = t;
        t = SSL_printnl(not_null(k_12), not_null(l_12));
        t = b_11;
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
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
  r_12 = t;
  q_12 :
  if(match_cons(r_12, sym__2))
    {
      s_12 = ATgetArgument(r_12, 0);
      t_12 = ATgetArgument(r_12, 1);
      {
        t = not_null(s_12);
        {
          ATerm n_1 (ATerm t)
          {
            t = not_null(t_12);
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
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm j_60 (ATerm))
{
  ATerm s_11;
  s_11 = t;
  {
    ATerm z_12 = NULL,b_13 = NULL;
    ATerm t_11;
    t_11 = t;
    {
      ATerm a_13 = NULL;
      t = j_60(t);
      {
        a_13 = t;
        if(((z_12 != NULL) && (z_12 != a_13)))
          _fail(a_13);
        else
          z_12 = a_13;
      }
    }
    t = t_11;
    {
      ATerm c_13 = NULL;
      c_13 = t;
      if(((b_13 != NULL) && (b_13 != c_13)))
        _fail(c_13);
      else
        b_13 = c_13;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_13)), not_null(z_12)));
        t = printnl_0(t);
      }
    }
  }
  t = s_11;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm g_13 = NULL;
  g_13 = t;
  t = SSL_is_string(not_null(g_13));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(w_11);
    }
  else
    {
      t = v_11;
      {
        ATerm x_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, o_1);
            LocalPopChoice(y_11);
          }
        else
          {
            t = x_11;
            {
              ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
              p_13 = t;
              o_13 :
              if(match_cons(p_13, sym_Path_1))
                {
                  q_13 = ATgetArgument(p_13, 0);
                  t = not_null(q_13);
                }
              else
                {
                  if(match_cons(p_13, sym_Var_1))
                    {
                      q_13 = ATgetArgument(p_13, 0);
                      {
                        t = not_null(q_13);
                        {
                          ATerm z_11 = t;
                          int a_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(a_12);
                            }
                          else
                            {
                              t = z_11;
                              {
                                ATerm p_1 (ATerm t)
                                {
                                  t = term_b_12;
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
                      if(match_cons(p_13, sym_Prefix_2))
                        {
                          q_13 = ATgetArgument(p_13, 0);
                          r_13 = ATgetArgument(p_13, 1);
                          {
                            ATerm w_13 = NULL,y_13 = NULL;
                            ATerm g_12;
                            g_12 = t;
                            {
                              ATerm x_13 = NULL;
                              t = not_null(q_13);
                              {
                                t = eval_config_0(t);
                                {
                                  x_13 = t;
                                  if(((w_13 != NULL) && (w_13 != x_13)))
                                    _fail(x_13);
                                  else
                                    w_13 = x_13;
                                }
                              }
                            }
                            t = g_12;
                            {
                              ATerm z_13 = NULL;
                              t = not_null(r_13);
                              {
                                t = eval_config_0(t);
                                {
                                  z_13 = t;
                                  if(((y_13 != NULL) && (y_13 != z_13)))
                                    _fail(z_13);
                                  else
                                    y_13 = z_13;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_13), not_null(y_13));
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
  ATerm h_14 = NULL;
  h_14 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_h_12, not_null(h_14));
    {
      t = table_get_0(t);
      {
        ATerm q_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm m_12;
            m_12 = t;
            {
              ATerm j_14 = NULL;
              ATerm k_14 = NULL;
              k_14 = t;
              if(((j_14 != NULL) && (j_14 != k_14)))
                _fail(k_14);
              else
                j_14 = k_14;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_h_12, not_null(h_14), not_null(j_14));
                t = table_put_0(t);
              }
            }
            t = m_12;
          }
          return(t);
        }
        t = try_1(t, q_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm t_57 (ATerm))
{
  ATerm r_1 (ATerm t)
  {
    ATerm n_12;
    n_12 = t;
    {
      ATerm o_14 = NULL;
      ATerm p_14 = NULL;
      t = term_g_9;
      {
        t = get_config_0(t);
        {
          p_14 = t;
          if(((o_14 != NULL) && (o_14 != p_14)))
            _fail(p_14);
          else
            o_14 = p_14;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_14), term_o_12);
        t = geq_0(t);
      }
    }
    t = n_12;
    t = t_57(t);
    return(t);
  }
  t = try_1(t, r_1);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_x_10, (ATerm) ATinsert(ATempty, term_p_12));
  {
    t = printnl_0(t);
    {
      t = term_a_11;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm s_14 = NULL;
  s_14 = t;
  t = SSL_TicksToSeconds(not_null(s_14));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL;
  x_14 = t;
  w_14 :
  if(match_cons(x_14, sym__2))
    {
      y_14 = ATgetArgument(x_14, 0);
      z_14 = ATgetArgument(x_14, 1);
      {
        ATerm u_12 = t;
        int v_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_14), not_null(z_14));
            LocalPopChoice(v_12);
          }
        else
          {
            t = u_12;
            t = SSL_addr(not_null(y_14), not_null(z_14));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm g_64 (ATerm), ATerm h_64 (ATerm))
{
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_64(t);
      LocalPopChoice(x_12);
    }
  else
    {
      t = w_12;
      {
        ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL;
        g_15 = t;
        f_15 :
        if(((ATgetType(g_15) == AT_LIST) && ((ATermList) g_15 != ATempty)))
          {
            h_15 = ATgetFirst((ATermList) g_15);
            i_15 = (ATerm) ATgetNext((ATermList) g_15);
            {
              ATerm l_15 = NULL;
              ATerm m_15 = NULL;
              t = not_null(i_15);
              {
                t = foldr_2(t, g_64, h_64);
                {
                  m_15 = t;
                  if(((l_15 != NULL) && (l_15 != m_15)))
                    _fail(m_15);
                  else
                    l_15 = m_15;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_15), not_null(l_15));
                t = h_64(t);
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
ATerm crush_2 (ATerm t, ATerm y_65 (ATerm), ATerm z_65 (ATerm))
{
  ATerm t_15 = NULL;
  ATerm v_15 = NULL;
  t_15 = t;
  {
    ATerm w_15 = NULL;
    ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL;
    t = not_null(t_15);
    {
      w_15 = t;
      {
        t = SSL_explode_term(not_null(w_15));
        {
          y_15 = t;
          s_15 :
          if(match_cons(y_15, sym__2))
            {
              z_15 = ATgetArgument(y_15, 0);
              a_16 = ATgetArgument(y_15, 1);
              if(((v_15 != NULL) && (v_15 != a_16)))
                _fail(a_16);
              else
                v_15 = a_16;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(v_15);
      t = foldr_2(t, y_65, z_65);
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
    ATerm s_1 (ATerm t)
    {
      t = term_y_12;
      return(t);
    }
    t = crush_2(t, s_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
  g_16 = t;
  f_16 :
  if(match_cons(g_16, sym__2))
    {
      h_16 = ATgetArgument(g_16, 0);
      i_16 = ATgetArgument(g_16, 1);
      {
        ATerm d_13;
        d_13 = t;
        {
          ATerm e_13 = t;
          int f_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(h_16), not_null(i_16));
              LocalPopChoice(f_13);
            }
          else
            {
              t = e_13;
              t = SSL_gtr(not_null(h_16), not_null(i_16));
            }
        }
        t = d_13;
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
  ATerm o_16 = NULL;
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
      p_16 = t;
      n_16 :
      if(match_cons(p_16, sym__2))
        {
          q_16 = ATgetArgument(p_16, 0);
          r_16 = ATgetArgument(p_16, 1);
          {
            if(((o_16 != NULL) && (o_16 != q_16)))
              _fail(q_16);
            else
              o_16 = q_16;
            if(((o_16 != NULL) && (o_16 != r_16)))
              _fail(r_16);
            else
              o_16 = r_16;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm s_57 (ATerm))
{
  ATerm v_1 (ATerm t)
  {
    ATerm j_13;
    j_13 = t;
    {
      ATerm u_16 = NULL;
      ATerm v_16 = NULL;
      t = term_g_9;
      {
        t = get_config_0(t);
        {
          v_16 = t;
          if(((u_16 != NULL) && (u_16 != v_16)))
            _fail(v_16);
          else
            u_16 = v_16;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_16), term_a_11);
        t = geq_0(t);
      }
    }
    t = j_13;
    t = s_57(t);
    return(t);
  }
  t = try_1(t, v_1);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    ATerm z_16 = NULL,b_17 = NULL;
    ATerm k_13;
    k_13 = t;
    {
      ATerm a_17 = NULL;
      t = run_time_0(t);
      {
        a_17 = t;
        if(((z_16 != NULL) && (z_16 != a_17)))
          _fail(a_17);
        else
          z_16 = a_17;
      }
    }
    t = k_13;
    {
      ATerm c_17 = NULL;
      t = term_l_13;
      {
        t = get_config_0(t);
        {
          c_17 = t;
          if(((b_17 != NULL) && (b_17 != c_17)))
            _fail(c_17);
          else
            b_17 = c_17;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_13), not_null(z_16)), term_m_13), not_null(b_17)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, w_1);
  {
    t = term_y_12;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL;
  h_17 = t;
  g_17 :
  if(match_cons(h_17, sym__2))
    {
      i_17 = ATgetArgument(h_17, 0);
      j_17 = ATgetArgument(h_17, 1);
      t = SSL_WriteToTextFile(not_null(i_17), not_null(j_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm u_44 (ATerm), ATerm v_44 (ATerm))
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
  t_17 = t;
  s_17 :
  if(match_cons(t_17, sym__2))
    {
      u_17 = ATgetArgument(t_17, 0);
      v_17 = ATgetArgument(t_17, 1);
      {
        ATerm z_17 = NULL,b_18 = NULL;
        ATerm a_18 = NULL;
        t = SSLgetAnnotations(not_null(t_17));
        {
          a_18 = t;
          if(((z_17 != NULL) && (z_17 != a_18)))
            _fail(a_18);
          else
            z_17 = a_18;
        }
        {
          t = not_null(u_17);
          {
            ATerm d_18 = NULL;
            t = u_44(t);
            {
              b_18 = t;
              {
                t = not_null(v_17);
                {
                  ATerm f_18 = NULL;
                  t = v_44(t);
                  {
                    d_18 = t;
                    {
                      ATerm g_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(b_18), not_null(d_18)), not_null(z_17));
                      {
                        g_18 = t;
                        if(((f_18 != NULL) && (f_18 != g_18)))
                          _fail(g_18);
                        else
                          f_18 = g_18;
                      }
                      t = not_null(f_18);
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
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL;
  o_18 = t;
  n_18 :
  if(match_cons(o_18, sym__2))
    {
      p_18 = ATgetArgument(o_18, 0);
      q_18 = ATgetArgument(o_18, 1);
      t = SSL_WriteToBinaryFile(not_null(p_18), not_null(q_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm y_18 = NULL;
  ATerm s_13;
  s_13 = t;
  {
    ATerm x_1 (ATerm t)
    {
      ATerm t_13 = t;
      int u_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_2 (ATerm t)
          {
            ATerm z_18 = NULL,a_19 = NULL;
            z_18 = t;
            v_18 :
            if(match_cons(z_18, sym_Output_1))
              {
                a_19 = ATgetArgument(z_18, 0);
                if(((y_18 != NULL) && (y_18 != a_19)))
                  _fail(a_19);
                else
                  y_18 = a_19;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, b_2);
          LocalPopChoice(u_13);
        }
      else
        {
          t = t_13;
          {
            ATerm b_19 = NULL;
            t = term_v_13;
            {
              b_19 = t;
              if(((y_18 != NULL) && (y_18 != b_19)))
                _fail(b_19);
              else
                y_18 = b_19;
            }
          }
        }
      return(t);
    }
    t = _2(t, x_1, _id);
  }
  t = s_13;
  {
    ATerm c_2 (ATerm t)
    {
      ATerm d_2 (ATerm t)
      {
        t = not_null(y_18);
        return(t);
      }
      t = split_2(t, d_2, _id);
      return(t);
    }
    t = _2(t, _id, c_2);
    {
      ATerm a_14 = t;
      int b_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_2 (ATerm t)
          {
            ATerm f_2 (ATerm t)
            {
              ATerm c_19 = NULL;
              c_19 = t;
              x_18 :
              if(!(match_cons(c_19, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, f_2);
            return(t);
          }
          t = _2(t, e_2, WriteToBinaryFile_0);
          LocalPopChoice(b_14);
        }
      else
        {
          t = a_14;
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
ATerm apply_strategy_1 (ATerm t, ATerm t_59 (ATerm))
{
  ATerm i_19 = NULL,k_19 = NULL,s_19 = NULL,t_19 = NULL;
  ATerm c_14;
  c_14 = t;
  t = dtime_0(t);
  t = c_14;
  {
    t = t_59(t);
    {
      ATerm d_14;
      d_14 = t;
      {
        ATerm j_19 = NULL;
        t = dtime_0(t);
        {
          j_19 = t;
          if(((i_19 != NULL) && (i_19 != j_19)))
            _fail(j_19);
          else
            i_19 = j_19;
        }
      }
      t = d_14;
      {
        k_19 = t;
        h_19 :
        if(match_cons(k_19, sym__2))
          {
            s_19 = ATgetArgument(k_19, 0);
            t_19 = ATgetArgument(k_19, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_19)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(i_19))), not_null(t_19));
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
  ATerm z_19 = NULL;
  z_19 = t;
  t = SSL_ReadFromFile(not_null(z_19));
  return(t);
}
ATerm split_2 (ATerm t, ATerm u_62 (ATerm), ATerm v_62 (ATerm))
{
  ATerm e_20 = NULL,j_20 = NULL;
  ATerm e_14;
  e_14 = t;
  {
    ATerm i_20 = NULL;
    t = u_62(t);
    {
      i_20 = t;
      if(((e_20 != NULL) && (e_20 != i_20)))
        _fail(i_20);
      else
        e_20 = i_20;
    }
  }
  t = e_14;
  {
    ATerm k_20 = NULL;
    t = v_62(t);
    {
      k_20 = t;
      if(((j_20 != NULL) && (j_20 != k_20)))
        _fail(k_20);
      else
        j_20 = k_20;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_20), not_null(j_20));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm q_20 = NULL;
  ATerm f_14;
  f_14 = t;
  {
    ATerm g_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_2 (ATerm t)
        {
          ATerm r_20 = NULL,s_20 = NULL;
          r_20 = t;
          o_20 :
          if(match_cons(r_20, sym_Input_1))
            {
              s_20 = ATgetArgument(r_20, 0);
              if(((q_20 != NULL) && (q_20 != s_20)))
                _fail(s_20);
              else
                q_20 = s_20;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, g_2);
        LocalPopChoice(i_14);
      }
    else
      {
        t = g_14;
        {
          ATerm t_20 = NULL;
          t = term_l_14;
          {
            t_20 = t;
            if(((q_20 != NULL) && (q_20 != t_20)))
              _fail(t_20);
            else
              q_20 = t_20;
          }
        }
      }
  }
  t = f_14;
  {
    ATerm i_2 (ATerm t)
    {
      t = not_null(q_20);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, i_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm b_21 = NULL;
  b_21 = t;
  z_20 :
  if(match_cons(b_21, sym_Version_0))
    {
      ATerm d_21 = NULL,f_21 = NULL;
      ATerm m_14;
      m_14 = t;
      {
        ATerm e_21 = NULL;
        t = SSLgetAnnotations(not_null(b_21));
        {
          e_21 = t;
          if(((d_21 != NULL) && (d_21 != e_21)))
            _fail(e_21);
          else
            d_21 = e_21;
        }
      }
      t = m_14;
      {
        ATerm g_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(d_21));
        {
          g_21 = t;
          if(((f_21 != NULL) && (f_21 != g_21)))
            _fail(g_21);
          else
            f_21 = g_21;
        }
        t = not_null(f_21);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm r_59 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm n_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(q_14);
      }
    else
      {
        t = n_14;
        {
          ATerm r_14 = t;
          int t_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(t_14);
            }
          else
            {
              t = r_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, k_2);
  t = r_59(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm l_21 = NULL;
  l_21 = t;
  t = SSL_table_create(not_null(l_21));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm p_21 = NULL;
  p_21 = t;
  {
    ATerm u_14;
    u_14 = t;
    {
      t = term_v_14;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_v_14, term_a_15, not_null(p_21));
          t = table_put_0(t);
        }
      }
    }
    t = u_14;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm t_21 = NULL;
  t_21 = t;
  t = SSL_string_to_int(not_null(t_21));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
  b_22 = t;
  z_21 :
  if(match_string(b_22, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(b_22) == AT_LIST) && ((ATermList) b_22 != ATempty)))
        {
          c_22 = ATgetFirst((ATermList) b_22);
          d_22 = (ATerm) ATgetNext((ATermList) b_22);
          a_22 :
          if(((ATgetType(d_22) == AT_LIST) && ((ATermList) d_22 != ATempty)))
            {
              e_22 = ATgetFirst((ATermList) d_22);
              f_22 = (ATerm) ATgetNext((ATermList) d_22);
              {
                ATerm j_22 = NULL;
                ATerm b_15;
                b_15 = t;
                {
                  t = not_null(c_22);
                  t = j_0(t);
                }
                t = b_15;
                {
                  ATerm k_22 = NULL;
                  t = not_null(e_22);
                  {
                    t = k_0(t);
                    {
                      k_22 = t;
                      if(((j_22 != NULL) && (j_22 != k_22)))
                        _fail(k_22);
                      else
                        j_22 = k_22;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_22)), not_null(j_22));
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
  ATerm c_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_2 (ATerm t)
      {
        ATerm n_23 = NULL;
        n_23 = t;
        w_22 :
        if(!(match_string(n_23, "-i")))
          {
            if(!(match_string(n_23, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        ATerm q_23 = NULL;
        ATerm e_15;
        e_15 = t;
        {
          ATerm o_23 = NULL;
          ATerm p_23 = NULL;
          p_23 = t;
          if(((o_23 != NULL) && (o_23 != p_23)))
            _fail(p_23);
          else
            o_23 = p_23;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_j_15, not_null(o_23));
            t = set_config_0(t);
          }
        }
        t = e_15;
        {
          ATerm r_23 = NULL;
          r_23 = t;
          if(((q_23 != NULL) && (q_23 != r_23)))
            _fail(r_23);
          else
            q_23 = r_23;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(q_23));
        }
        return(t);
      }
      ATerm n_2 (ATerm t)
      {
        t = term_k_15;
        return(t);
      }
      t = ArgOption_3(t, l_2, m_2, n_2);
      LocalPopChoice(d_15);
    }
  else
    {
      t = c_15;
      {
        ATerm n_15 = t;
        int o_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_2 (ATerm t)
            {
              ATerm u_23 = NULL;
              u_23 = t;
              z_22 :
              if(!(match_string(u_23, "-o")))
                {
                  if(!(match_string(u_23, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm q_2 (ATerm t)
            {
              ATerm x_23 = NULL;
              ATerm p_15;
              p_15 = t;
              {
                ATerm v_23 = NULL;
                ATerm w_23 = NULL;
                w_23 = t;
                if(((v_23 != NULL) && (v_23 != w_23)))
                  _fail(w_23);
                else
                  v_23 = w_23;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_15, not_null(v_23));
                  t = set_config_0(t);
                }
              }
              t = p_15;
              {
                ATerm y_23 = NULL;
                y_23 = t;
                if(((x_23 != NULL) && (x_23 != y_23)))
                  _fail(y_23);
                else
                  x_23 = y_23;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(x_23));
              }
              return(t);
            }
            ATerm v_2 (ATerm t)
            {
              t = term_r_15;
              return(t);
            }
            t = ArgOption_3(t, o_2, q_2, v_2);
            LocalPopChoice(o_15);
          }
        else
          {
            t = n_15;
            {
              ATerm u_15 = t;
              int x_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_2 (ATerm t)
                  {
                    ATerm z_23 = NULL;
                    z_23 = t;
                    c_23 :
                    if(!(match_string(z_23, "-S")))
                      {
                        if(!(match_string(z_23, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm x_2 (ATerm t)
                  {
                    t = term_b_16;
                    t = set_config_0(t);
                    t = term_c_16;
                    return(t);
                  }
                  ATerm y_2 (ATerm t)
                  {
                    t = term_d_16;
                    return(t);
                  }
                  t = Option_3(t, w_2, x_2, y_2);
                  LocalPopChoice(x_15);
                }
              else
                {
                  t = u_15;
                  {
                    ATerm e_16 = t;
                    int j_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_2 (ATerm t)
                        {
                          ATerm a_24 = NULL;
                          a_24 = t;
                          f_23 :
                          if(!(match_string(a_24, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm a_3 (ATerm t)
                        {
                          ATerm p_24 = NULL;
                          ATerm k_16;
                          k_16 = t;
                          {
                            ATerm h_24 = NULL;
                            ATerm i_24 = NULL;
                            t = string_to_int_0(t);
                            {
                              i_24 = t;
                              if(((h_24 != NULL) && (h_24 != i_24)))
                                _fail(i_24);
                              else
                                h_24 = i_24;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_g_9, not_null(h_24));
                              t = set_config_0(t);
                            }
                          }
                          t = k_16;
                          {
                            ATerm q_24 = NULL;
                            q_24 = t;
                            if(((p_24 != NULL) && (p_24 != q_24)))
                              _fail(q_24);
                            else
                              p_24 = q_24;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(p_24));
                          }
                          return(t);
                        }
                        ATerm b_3 (ATerm t)
                        {
                          t = term_l_16;
                          return(t);
                        }
                        t = ArgOption_3(t, z_2, a_3, b_3);
                        LocalPopChoice(j_16);
                      }
                    else
                      {
                        t = e_16;
                        {
                          ATerm m_16 = t;
                          int s_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm d_3 (ATerm t)
                              {
                                ATerm r_24 = NULL;
                                r_24 = t;
                                i_23 :
                                if(!(match_string(r_24, "--keep")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm e_3 (ATerm t)
                              {
                                ATerm t_16;
                                t_16 = t;
                                {
                                  ATerm s_24 = NULL;
                                  ATerm t_24 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    t_24 = t;
                                    if(((s_24 != NULL) && (s_24 != t_24)))
                                      _fail(t_24);
                                    else
                                      s_24 = t_24;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_w_16, not_null(s_24));
                                    t = set_config_0(t);
                                  }
                                }
                                t = t_16;
                                return(t);
                              }
                              ATerm f_3 (ATerm t)
                              {
                                t = term_x_16;
                                return(t);
                              }
                              t = ArgOption_3(t, d_3, e_3, f_3);
                              LocalPopChoice(s_16);
                            }
                          else
                            {
                              t = m_16;
                              {
                                ATerm y_16 = t;
                                int d_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_3 (ATerm t)
                                    {
                                      ATerm u_24 = NULL;
                                      u_24 = t;
                                      k_23 :
                                      if(!(match_string(u_24, "-v")))
                                        {
                                          if(!(match_string(u_24, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm h_3 (ATerm t)
                                    {
                                      t = term_f_17;
                                      t = set_config_0(t);
                                      t = term_k_17;
                                      return(t);
                                    }
                                    ATerm m_3 (ATerm t)
                                    {
                                      t = term_l_17;
                                      return(t);
                                    }
                                    t = Option_3(t, g_3, h_3, m_3);
                                    LocalPopChoice(d_17);
                                  }
                                else
                                  {
                                    t = y_16;
                                    {
                                      ATerm m_17 = t;
                                      int n_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm n_3 (ATerm t)
                                          {
                                            ATerm v_24 = NULL;
                                            v_24 = t;
                                            l_23 :
                                            if(!(match_string(v_24, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm r_3 (ATerm t)
                                          {
                                            t = term_p_17;
                                            t = set_config_0(t);
                                            t = term_q_17;
                                            return(t);
                                          }
                                          ATerm z_3 (ATerm t)
                                          {
                                            t = term_r_17;
                                            return(t);
                                          }
                                          t = Option_3(t, n_3, r_3, z_3);
                                          LocalPopChoice(n_17);
                                        }
                                      else
                                        {
                                          t = m_17;
                                          {
                                            ATerm b_4 (ATerm t)
                                            {
                                              ATerm w_24 = NULL;
                                              w_24 = t;
                                              m_23 :
                                              if(!(match_string(w_24, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm c_4 (ATerm t)
                                            {
                                              t = term_x_17;
                                              t = set_config_0(t);
                                              t = term_y_17;
                                              return(t);
                                            }
                                            ATerm h_4 (ATerm t)
                                            {
                                              t = term_c_18;
                                              return(t);
                                            }
                                            t = Option_3(t, b_4, c_4, h_4);
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
ATerm table_destroy_0 (ATerm t)
{
  ATerm g_25 = NULL;
  g_25 = t;
  t = SSL_table_destroy(not_null(g_25));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm k_25 = NULL;
  k_25 = t;
  t = SSL_exit(not_null(k_25));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm o_25 = NULL;
  o_25 = t;
  t = SSL_implode_string(not_null(o_25));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_70 (ATerm))
{
  ATerm r_25 (ATerm t)
  {
    ATerm e_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, r_25);
        LocalPopChoice(h_18);
      }
    else
      {
        t = e_18;
        {
          t = Nil_0(t);
          t = l_70(t);
        }
      }
    return(t);
  }
  t = r_25(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(j_18);
    }
  else
    {
      t = i_18;
      {
        ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
        u_25 = t;
        t_25 :
        if(((ATgetType(u_25) == AT_LIST) && ((ATermList) u_25 != ATempty)))
          {
            v_25 = ATgetFirst((ATermList) u_25);
            w_25 = (ATerm) ATgetNext((ATermList) u_25);
            {
              t = not_null(v_25);
              {
                ATerm i_4 (ATerm t)
                {
                  t = not_null(w_25);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, i_4);
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
  ATerm c_26 = NULL;
  c_26 = t;
  t = SSL_explode_string(not_null(c_26));
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
ATerm long_description_1 (ATerm t, ATerm m_56 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_69 (ATerm))
{
  ATerm f_26 (ATerm t)
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        t = Cons_2(t, w_69, f_26);
      }
    return(t);
  }
  t = f_26(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
  o_26 = t;
  l_26 :
  if(((ATgetType(o_26) == AT_LIST) && ((ATermList) o_26 != ATempty)))
    {
      m_26 = ATgetFirst((ATermList) o_26);
      n_26 = (ATerm) ATgetNext((ATermList) o_26);
      {
        ATerm r_26 = NULL;
        t = not_null(n_26);
        {
          ATerm m_18;
          m_18 = t;
          {
            ATerm s_26 = NULL,u_26 = NULL,w_26 = NULL;
            ATerm r_18;
            r_18 = t;
            {
              ATerm t_26 = NULL;
              t = i_0(t);
              {
                t_26 = t;
                if(((s_26 != NULL) && (s_26 != t_26)))
                  _fail(t_26);
                else
                  s_26 = t_26;
              }
            }
            t = r_18;
            {
              ATerm v_26 = NULL;
              t = not_null(m_26);
              {
                t = h_0(t);
                {
                  v_26 = t;
                  if(((u_26 != NULL) && (u_26 != v_26)))
                    _fail(v_26);
                  else
                    u_26 = v_26;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(s_26)), not_null(u_26));
                {
                  w_26 = t;
                  if(((r_26 != NULL) && (r_26 != w_26)))
                    _fail(w_26);
                  else
                    r_26 = w_26;
                }
              }
            }
          }
          t = m_18;
          {
            ATerm j_4 (ATerm t)
            {
              t = not_null(r_26);
              return(t);
            }
            t = reverse_acc_2(t, h_0, j_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) o_26 == ATempty))
        {
          {
            t = term_a_6;
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
  ATerm k_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, k_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm l_56 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm i_46 (ATerm))
{
  ATerm o_27 = NULL,p_27 = NULL;
  o_27 = t;
  n_27 :
  if(match_cons(o_27, sym_Program_1))
    {
      p_27 = ATgetArgument(o_27, 0);
      {
        ATerm s_27 = NULL,u_27 = NULL;
        ATerm t_27 = NULL;
        t = SSLgetAnnotations(not_null(o_27));
        {
          t_27 = t;
          if(((s_27 != NULL) && (s_27 != t_27)))
            _fail(t_27);
          else
            s_27 = t_27;
        }
        {
          t = not_null(p_27);
          {
            ATerm w_27 = NULL;
            t = i_46(t);
            {
              u_27 = t;
              {
                ATerm x_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(u_27)), not_null(s_27));
                {
                  x_27 = t;
                  if(((w_27 != NULL) && (w_27 != x_27)))
                    _fail(x_27);
                  else
                    w_27 = x_27;
                }
                t = not_null(w_27);
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
  ATerm g_28 = NULL;
  ATerm l_4 (ATerm t)
  {
    ATerm m_4 (ATerm t)
    {
      ATerm h_28 = NULL;
      h_28 = t;
      if(((g_28 != NULL) && (g_28 != h_28)))
        _fail(h_28);
      else
        g_28 = h_28;
      return(t);
    }
    t = Program_1(t, m_4);
    return(t);
  }
  t = option_defined_1(t, l_4);
  {
    ATerm n_4 (ATerm t)
    {
      ATerm i_28 = NULL;
      ATerm m_28 = NULL;
      t = term_a_6;
      {
        ATerm o_4 (ATerm t)
        {
          t = not_null(g_28);
          return(t);
        }
        t = short_description_1(t, o_4);
        {
          t = concat_strings_0(t);
          {
            m_28 = t;
            if(((i_28 != NULL) && (i_28 != m_28)))
              _fail(m_28);
            else
              i_28 = m_28;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_10, (ATerm) ATinsert(ATempty, not_null(i_28)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, n_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_10, (ATerm) ATinsert(ATempty, term_s_18));
      {
        t = printnl_0(t);
        {
          t = term_w_18;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm p_4 (ATerm t)
                {
                  ATerm n_28 = NULL;
                  n_28 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_x_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_28)), term_d_19));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, p_4);
                {
                  ATerm u_4 (ATerm t)
                  {
                    ATerm p_28 = NULL;
                    ATerm q_28 = NULL;
                    t = term_a_6;
                    {
                      ATerm v_4 (ATerm t)
                      {
                        t = not_null(g_28);
                        return(t);
                      }
                      t = long_description_1(t, v_4);
                      {
                        t = concat_strings_0(t);
                        {
                          q_28 = t;
                          if(((p_28 != NULL) && (p_28 != q_28)))
                            _fail(q_28);
                          else
                            p_28 = q_28;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_x_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_28)), term_e_19));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, u_4);
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
ATerm Undefined_1 (ATerm t, ATerm j_46 (ATerm))
{
  ATerm a_29 = NULL,b_29 = NULL;
  a_29 = t;
  z_28 :
  if(match_cons(a_29, sym_Undefined_1))
    {
      b_29 = ATgetArgument(a_29, 0);
      {
        ATerm e_29 = NULL,g_29 = NULL;
        ATerm f_29 = NULL;
        t = SSLgetAnnotations(not_null(a_29));
        {
          f_29 = t;
          if(((e_29 != NULL) && (e_29 != f_29)))
            _fail(f_29);
          else
            e_29 = f_29;
        }
        {
          t = not_null(b_29);
          {
            ATerm i_29 = NULL;
            t = j_46(t);
            {
              g_29 = t;
              {
                ATerm j_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(g_29)), not_null(e_29));
                {
                  j_29 = t;
                  if(((i_29 != NULL) && (i_29 != j_29)))
                    _fail(j_29);
                  else
                    i_29 = j_29;
                }
                t = not_null(i_29);
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
ATerm fetch_1 (ATerm t, ATerm f_70 (ATerm))
{
  ATerm r_29 (ATerm t)
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_70, _id);
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = Cons_2(t, _id, r_29);
      }
    return(t);
  }
  t = r_29(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_57 (ATerm))
{
  t = fetch_1(t, q_57);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm y_29 = NULL;
  y_29 = t;
  x_29 :
  if(match_cons(y_29, sym_Help_0))
    {
      ATerm a_30 = NULL,c_30 = NULL;
      ATerm l_19;
      l_19 = t;
      {
        ATerm b_30 = NULL;
        t = SSLgetAnnotations(not_null(y_29));
        {
          b_30 = t;
          if(((a_30 != NULL) && (a_30 != b_30)))
            _fail(b_30);
          else
            a_30 = b_30;
        }
      }
      t = l_19;
      {
        ATerm d_30 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(a_30));
        {
          d_30 = t;
          if(((c_30 != NULL) && (c_30 != d_30)))
            _fail(d_30);
          else
            c_30 = d_30;
        }
        t = not_null(c_30);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm q_78 (ATerm))
{
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_78(t);
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
  j_30 = t;
  i_30 :
  if(match_cons(j_30, sym__2))
    {
      k_30 = ATgetArgument(j_30, 0);
      l_30 = ATgetArgument(j_30, 1);
      t = SSL_table_get(not_null(k_30), not_null(l_30));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL;
  s_30 = t;
  r_30 :
  if(match_cons(s_30, sym__3))
    {
      t_30 = ATgetArgument(s_30, 0);
      u_30 = ATgetArgument(s_30, 1);
      v_30 = ATgetArgument(s_30, 2);
      {
        ATerm o_19;
        o_19 = t;
        {
          ATerm a_31 = NULL;
          ATerm b_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_30), not_null(u_30));
          {
            ATerm p_19 = t;
            int q_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(q_19);
              }
            else
              {
                t = p_19;
                t = (ATerm) ATempty;
              }
            {
              b_31 = t;
              if(((a_31 != NULL) && (a_31 != b_31)))
                _fail(b_31);
              else
                a_31 = b_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_30), not_null(u_30), (ATerm) ATinsert(CheckATermList(not_null(a_31)), not_null(v_30)));
            t = table_put_0(t);
          }
        }
        t = o_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm q_56 (ATerm))
{
  ATerm i_31 = NULL;
  ATerm j_31 = NULL;
  t = term_a_6;
  {
    t = q_56(t);
    {
      j_31 = t;
      if(((i_31 != NULL) && (i_31 != j_31)))
        _fail(j_31);
      else
        i_31 = j_31;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_t_18, term_u_18, not_null(i_31));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL;
  s_31 = t;
  r_31 :
  if(match_string(s_31, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(s_31) == AT_LIST) && ((ATermList) s_31 != ATempty)))
        {
          t_31 = ATgetFirst((ATermList) s_31);
          u_31 = (ATerm) ATgetNext((ATermList) s_31);
          {
            ATerm x_31 = NULL;
            ATerm r_19;
            r_19 = t;
            {
              t = not_null(t_31);
              t = a_0(t);
            }
            t = r_19;
            {
              ATerm y_31 = NULL;
              t = term_a_6;
              {
                t = b_0(t);
                {
                  y_31 = t;
                  if(((x_31 != NULL) && (x_31 != y_31)))
                    _fail(y_31);
                  else
                    x_31 = y_31;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_31)), not_null(x_31));
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
  ATerm w_4 (ATerm t)
  {
    ATerm d_32 = NULL;
    d_32 = t;
    c_32 :
    if(!(match_string(d_32, "--help")))
      {
        if(!(match_string(d_32, "-h")))
          {
            if(!(match_string(d_32, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    t = term_u_19;
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    t = term_v_19;
    return(t);
  }
  t = Option_3(t, w_4, b_5, c_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
  g_32 = t;
  f_32 :
  if(((ATgetType(g_32) == AT_LIST) && ((ATermList) g_32 != ATempty)))
    {
      h_32 = ATgetFirst((ATermList) g_32);
      i_32 = (ATerm) ATgetNext((ATermList) g_32);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_32)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_32)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm l_52 (ATerm), ATerm m_52 (ATerm))
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
  u_32 = t;
  t_32 :
  if(((ATgetType(u_32) == AT_LIST) && ((ATermList) u_32 != ATempty)))
    {
      v_32 = ATgetFirst((ATermList) u_32);
      w_32 = (ATerm) ATgetNext((ATermList) u_32);
      {
        ATerm a_33 = NULL,c_33 = NULL;
        ATerm b_33 = NULL;
        t = SSLgetAnnotations(not_null(u_32));
        {
          b_33 = t;
          if(((a_33 != NULL) && (a_33 != b_33)))
            _fail(b_33);
          else
            a_33 = b_33;
        }
        {
          t = not_null(v_32);
          {
            ATerm e_33 = NULL;
            t = l_52(t);
            {
              c_33 = t;
              {
                t = not_null(w_32);
                {
                  ATerm g_33 = NULL;
                  t = m_52(t);
                  {
                    e_33 = t;
                    {
                      ATerm h_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_33)), not_null(c_33)), not_null(a_33));
                      {
                        h_33 = t;
                        if(((g_33 != NULL) && (g_33 != h_33)))
                          _fail(h_33);
                        else
                          g_33 = h_33;
                      }
                      t = not_null(g_33);
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
  ATerm r_33 = NULL;
  r_33 = t;
  q_33 :
  if(((ATermList) r_33 == ATempty))
    {
      {
        ATerm t_33 = NULL,v_33 = NULL;
        ATerm w_19;
        w_19 = t;
        {
          ATerm u_33 = NULL;
          t = SSLgetAnnotations(not_null(r_33));
          {
            u_33 = t;
            if(((t_33 != NULL) && (t_33 != u_33)))
              _fail(u_33);
            else
              t_33 = u_33;
          }
        }
        t = w_19;
        {
          ATerm w_33 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_33));
          {
            w_33 = t;
            if(((v_33 != NULL) && (v_33 != w_33)))
              _fail(w_33);
            else
              v_33 = w_33;
          }
          t = not_null(v_33);
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
  ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL;
  c_34 = t;
  b_34 :
  if(match_cons(c_34, sym__2))
    {
      d_34 = ATgetArgument(c_34, 0);
      e_34 = ATgetArgument(c_34, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_h_12, not_null(d_34), not_null(e_34));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm o_56 (ATerm))
{
  ATerm x_19;
  x_19 = t;
  {
    ATerm f_5 (ATerm t)
    {
      t = term_y_19;
      t = o_56(t);
      return(t);
    }
    t = try_1(t, f_5);
  }
  t = x_19;
  {
    ATerm h_5 (ATerm t)
    {
      ATerm m_34 = NULL;
      ATerm a_20;
      a_20 = t;
      {
        ATerm k_34 = NULL;
        ATerm l_34 = NULL;
        l_34 = t;
        if(((k_34 != NULL) && (k_34 != l_34)))
          _fail(l_34);
        else
          k_34 = l_34;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_13, not_null(k_34));
          t = set_config_0(t);
        }
      }
      t = a_20;
      {
        ATerm n_34 = NULL;
        n_34 = t;
        if(((m_34 != NULL) && (m_34 != n_34)))
          _fail(n_34);
        else
          m_34 = n_34;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_34));
      }
      return(t);
    }
    ATerm i_5 (ATerm t)
    {
      ATerm b_20 = t;
      int c_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_20 = t;
          int f_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(f_20);
            }
          else
            {
              t = d_20;
              {
                t = o_56(t);
                t = Cons_2(t, _id, i_5);
              }
            }
          LocalPopChoice(c_20);
        }
      else
        {
          t = b_20;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_5, i_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
  ATerm g_20;
  g_20 = t;
  {
    ATerm w_34 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL;
    w_34 = t;
    s_34 :
    if(match_cons(w_34, sym__3))
      {
        c_35 = ATgetArgument(w_34, 0);
        d_35 = ATgetArgument(w_34, 1);
        e_35 = ATgetArgument(w_34, 2);
        {
          if(((t_34 != NULL) && (t_34 != c_35)))
            _fail(c_35);
          else
            t_34 = c_35;
          {
            if(((u_34 != NULL) && (u_34 != d_35)))
              _fail(d_35);
            else
              u_34 = d_35;
            {
              if(((v_34 != NULL) && (v_34 != e_35)))
                _fail(e_35);
              else
                v_34 = e_35;
              t = SSL_table_put(not_null(t_34), not_null(u_34), not_null(v_34));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = g_20;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm n_56 (ATerm))
{
  ATerm h_35 = NULL;
  ATerm h_20;
  h_20 = t;
  {
    t = term_l_20;
    t = table_put_0(t);
  }
  t = h_20;
  {
    ATerm j_5 (ATerm t)
    {
      ATerm m_20 = t;
      int n_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_56(t);
          LocalPopChoice(n_20);
        }
      else
        {
          t = m_20;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, j_5);
    {
      ATerm k_5 (ATerm t)
      {
        ATerm p_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_y_12;
                t = exit_0(t);
              }
            }
            LocalPopChoice(u_20);
          }
        else
          {
            t = p_20;
            {
              ATerm l_5 (ATerm t)
              {
                ATerm n_5 (ATerm t)
                {
                  ATerm i_35 = NULL;
                  i_35 = t;
                  if(((h_35 != NULL) && (h_35 != i_35)))
                    _fail(i_35);
                  else
                    h_35 = i_35;
                  return(t);
                }
                t = Undefined_1(t, n_5);
                return(t);
              }
              t = option_defined_1(t, l_5);
              {
                ATerm v_20;
                v_20 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_35)), term_w_20));
                  t = printnl_0(t);
                }
                t = v_20;
                {
                  t = system_usage_0(t);
                  {
                    t = term_a_11;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, k_5);
      {
        ATerm x_20;
        x_20 = t;
        {
          t = term_t_18;
          t = table_destroy_0(t);
        }
        t = x_20;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm f_59 (ATerm), ATerm g_59 (ATerm), ATerm h_59 (ATerm), ATerm i_59 (ATerm))
{
  ATerm q_5 (ATerm t)
  {
    ATerm y_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_59(t);
        LocalPopChoice(a_21);
      }
    else
      {
        t = y_20;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, q_5);
  {
    t = store_options_0(t);
    {
      t = i_59(t);
      {
        ATerm c_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, h_59);
            LocalPopChoice(h_21);
          }
        else
          {
            t = c_21;
            {
              ATerm i_21 = t;
              int j_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, f_59);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(j_21);
                }
              else
                {
                  t = i_21;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm b_59 (ATerm))
{
  ATerm r_5 (ATerm t)
  {
    ATerm s_5 (ATerm t)
    {
      ATerm k_21;
      k_21 = t;
      {
        ATerm l_35 = NULL;
        ATerm m_35 = NULL;
        t = term_l_13;
        {
          t = get_config_0(t);
          {
            m_35 = t;
            if(((l_35 != NULL) && (l_35 != m_35)))
              _fail(m_35);
            else
              l_35 = m_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_10, (ATerm) ATinsert(ATempty, not_null(l_35)));
          t = printnl_0(t);
        }
      }
      t = k_21;
      return(t);
    }
    t = if_verbose2_1(t, s_5);
    return(t);
  }
  t = iowrap_4(t, z_58, a_59, b_59, r_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm x_58 (ATerm), ATerm y_58 (ATerm))
{
  t = iowrap_3(t, x_58, y_58, default_usage_0);
  return(t);
}
ATerm term_to_adot_0 (ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL;
    q_35 = t;
    p_35 :
    if(match_cons(q_35, sym__2))
      {
        r_35 = ATgetArgument(q_35, 0);
        s_35 = ATgetArgument(q_35, 1);
        {
          t = not_null(r_35);
          t = to_adot_0(t);
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = iowrap_2(t, u_5, term_to_adot_options_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = term_to_adot_0(t);
  return(t);
}
