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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Scopes_0;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_CUT_0;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Repository_0 = ATmakeSymbol("Repository", 0, ATfalse);
  ATprotectSymbol(sym_Repository_0);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
  ATprotectSymbol(sym_Imported_1);
  sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
  ATprotectSymbol(sym_XTC_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_g_27;
ATerm term_f_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_x_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_l_25;
ATerm term_z_24;
ATerm term_o_24;
ATerm term_m_24;
ATerm term_b_24;
ATerm term_w_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_c_23;
ATerm term_x_22;
ATerm term_r_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_s_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_k_20;
ATerm term_c_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_j_19;
ATerm term_t_18;
ATerm term_r_18;
ATerm term_p_18;
ATerm term_r_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_h_17;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_p_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_p_13;
ATerm term_e_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_g_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_q_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_y_10;
ATerm term_v_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_k_10;
ATerm term_h_10;
ATerm term_a_10;
ATerm term_u_9;
ATerm term_r_9;
ATerm term_l_9;
ATerm term_q_8;
ATerm term_o_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_r_5;
void init_constant_terms (void)
{
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym__2, term_p_10, term_q_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym__2, term_p_10, term_d_11);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_AttrId_2, term_p_14, term_x_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_p_13);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym__2, term_r_9, term_l_9);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_9);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i         Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym__2, term_s_20, term_u_9);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_u_9);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym__2, term_h_21, term_u_9);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym__2, term_j_17, term_u_9);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym__2, term_h_17, term_u_9);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym__2, term_x_22, term_c_23);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym__3, term_x_22, term_c_23, (ATerm) ATempty);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Input: ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Term read: ", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Abstract dot: ", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Written to file: ", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Dot-pretty.pp", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Box in: ", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Pretty-printed to: ", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".dot", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Output in: ", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
}
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm a_68 (ATerm), ATerm b_68 (ATerm));
ATerm crush_2 (ATerm, ATerm s_69 (ATerm), ATerm t_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm x_79 (ATerm));
ATerm debug_1 (ATerm, ATerm f_65 (ATerm));
ATerm new_file_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm o_0 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm z_79 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm i_66 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm a_80 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm q_66 (ATerm), ATerm r_66 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm h_66 (ATerm));
ATerm xtc_transform_file_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm j_66 (ATerm), ATerm k_66 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm assert_1 (ATerm, ATerm b_66 (ATerm));
ATerm xtc_new_file_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm Escape_0 (ATerm);
ATerm escape_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm quote_1 (ATerm, ATerm p_64 (ATerm));
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
ATerm HdMember_p__2 (ATerm, ATerm h_69 (ATerm), ATerm i_69 (ATerm));
ATerm union_1 (ATerm, ATerm j_69 (ATerm));
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm u_69 (ATerm), ATerm v_69 (ATerm), ATerm w_69 (ATerm));
ATerm foldr_3 (ATerm, ATerm c_68 (ATerm), ATerm d_68 (ATerm), ATerm e_68 (ATerm));
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm _2 (ATerm, ATerm k_46 (ATerm), ATerm l_46 (ATerm));
ATerm new_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm b_80 (ATerm));
ATerm term_to_tree_0 (ATerm);
ATerm to_adot_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm y_79 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm y_65 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm begin_scope_1 (ATerm, ATerm x_65 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm g_66 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm h_59 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm term_to_adot_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm f_74 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm e_57 (ATerm));
ATerm map_1 (ATerm, ATerm q_73 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm d_57 (ATerm));
ATerm Program_1 (ATerm, ATerm c_49 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm d_49 (ATerm));
ATerm fetch_1 (ATerm, ATerm z_73 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_58 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_76 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm i_57 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm f_54 (ATerm), ATerm g_54 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm g_57 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm f_57 (ATerm));
ATerm term_to_dot_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATempty, term_z_7));
  {
    t = printnl_0(t);
    {
      t = term_a_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm d_0 = NULL;
  d_0 = t;
  t = SSL_exit(not_null(d_0));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL;
  o_1 = t;
  a_1 :
  if(match_cons(o_1, sym__2))
    {
      p_1 = ATgetArgument(o_1, 0);
      q_1 = ATgetArgument(o_1, 1);
      {
        ATerm b_8;
        b_8 = t;
        t = SSL_printnl(not_null(p_1), not_null(q_1));
        t = b_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm i_2 = NULL;
  i_2 = t;
  t = SSL_is_string(not_null(i_2));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm d_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(f_8);
    }
  else
    {
      t = d_8;
      {
        ATerm i_8 = t;
        int j_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, c_0);
            LocalPopChoice(j_8);
          }
        else
          {
            t = i_8;
            {
              ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL;
              r_2 = t;
              q_2 :
              if(match_cons(r_2, sym_Path_1))
                {
                  s_2 = ATgetArgument(r_2, 0);
                  t = not_null(s_2);
                }
              else
                {
                  if(match_cons(r_2, sym_Var_1))
                    {
                      s_2 = ATgetArgument(r_2, 0);
                      {
                        t = not_null(s_2);
                        {
                          ATerm k_8 = t;
                          int l_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(l_8);
                            }
                          else
                            {
                              t = k_8;
                              {
                                ATerm e_0 (ATerm t)
                                {
                                  t = term_o_8;
                                  return(t);
                                }
                                t = debug_1(t, e_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(r_2, sym_Prefix_2))
                        {
                          s_2 = ATgetArgument(r_2, 0);
                          t_2 = ATgetArgument(r_2, 1);
                          {
                            ATerm y_2 = NULL,a_3 = NULL;
                            ATerm p_8;
                            p_8 = t;
                            {
                              ATerm z_2 = NULL;
                              t = not_null(s_2);
                              {
                                t = eval_config_0(t);
                                {
                                  z_2 = t;
                                  if(((y_2 != NULL) && (y_2 != z_2)))
                                    _fail(z_2);
                                  else
                                    y_2 = z_2;
                                }
                              }
                            }
                            t = p_8;
                            {
                              ATerm b_3 = NULL;
                              t = not_null(t_2);
                              {
                                t = eval_config_0(t);
                                {
                                  b_3 = t;
                                  if(((a_3 != NULL) && (a_3 != b_3)))
                                    _fail(b_3);
                                  else
                                    a_3 = b_3;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_2), not_null(a_3));
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
  ATerm j_3 = NULL;
  j_3 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_q_8, not_null(j_3));
    {
      t = table_get_0(t);
      {
        ATerm f_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm u_8;
            u_8 = t;
            {
              ATerm l_3 = NULL;
              ATerm m_3 = NULL;
              m_3 = t;
              if(((l_3 != NULL) && (l_3 != m_3)))
                _fail(m_3);
              else
                l_3 = m_3;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_q_8, not_null(j_3), not_null(l_3));
                t = table_put_0(t);
              }
            }
            t = u_8;
          }
          return(t);
        }
        t = try_1(t, f_0);
      }
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm q_3 = NULL;
  q_3 = t;
  t = SSL_TicksToSeconds(not_null(q_3));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL;
  v_3 = t;
  u_3 :
  if(match_cons(v_3, sym__2))
    {
      w_3 = ATgetArgument(v_3, 0);
      x_3 = ATgetArgument(v_3, 1);
      {
        ATerm c_9 = t;
        int d_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(w_3), not_null(x_3));
            LocalPopChoice(d_9);
          }
        else
          {
            t = c_9;
            t = SSL_addr(not_null(w_3), not_null(x_3));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm a_68 (ATerm), ATerm b_68 (ATerm))
{
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = a_68(t);
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      {
        ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL;
        e_4 = t;
        d_4 :
        if(((ATgetType(e_4) == AT_LIST) && ((ATermList) e_4 != ATempty)))
          {
            f_4 = ATgetFirst((ATermList) e_4);
            g_4 = (ATerm) ATgetNext((ATermList) e_4);
            {
              ATerm j_4 = NULL;
              ATerm k_4 = NULL;
              t = not_null(g_4);
              {
                t = foldr_2(t, a_68, b_68);
                {
                  k_4 = t;
                  if(((j_4 != NULL) && (j_4 != k_4)))
                    _fail(k_4);
                  else
                    j_4 = k_4;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_4), not_null(j_4));
                t = b_68(t);
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
ATerm crush_2 (ATerm t, ATerm s_69 (ATerm), ATerm t_69 (ATerm))
{
  ATerm r_4 = NULL;
  ATerm t_4 = NULL;
  r_4 = t;
  {
    ATerm u_4 = NULL;
    ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL;
    t = not_null(r_4);
    {
      u_4 = t;
      {
        t = SSL_explode_term(not_null(u_4));
        {
          w_4 = t;
          q_4 :
          if(match_cons(w_4, sym__2))
            {
              x_4 = ATgetArgument(w_4, 0);
              y_4 = ATgetArgument(w_4, 1);
              if(((t_4 != NULL) && (t_4 != y_4)))
                _fail(y_4);
              else
                t_4 = y_4;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(t_4);
      t = foldr_2(t, s_69, t_69);
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
    ATerm p_0 (ATerm t)
    {
      t = term_l_9;
      return(t);
    }
    t = crush_2(t, p_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm x_79 (ATerm))
{
  ATerm q_0 (ATerm t)
  {
    ATerm m_9;
    m_9 = t;
    {
      ATerm d_5 = NULL;
      ATerm e_5 = NULL;
      t = term_r_9;
      {
        t = get_config_0(t);
        {
          e_5 = t;
          if(((d_5 != NULL) && (d_5 != e_5)))
            _fail(e_5);
          else
            d_5 = e_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_5), term_a_8);
        t = geq_0(t);
      }
    }
    t = m_9;
    t = x_79(t);
    return(t);
  }
  t = try_1(t, q_0);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm f_65 (ATerm))
{
  ATerm s_9;
  s_9 = t;
  {
    ATerm i_5 = NULL,k_5 = NULL;
    ATerm t_9;
    t_9 = t;
    {
      ATerm j_5 = NULL;
      t = f_65(t);
      {
        j_5 = t;
        if(((i_5 != NULL) && (i_5 != j_5)))
          _fail(j_5);
        else
          i_5 = j_5;
      }
    }
    t = t_9;
    {
      ATerm l_5 = NULL;
      l_5 = t;
      if(((k_5 != NULL) && (k_5 != l_5)))
        _fail(l_5);
      else
        k_5 = l_5;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_5)), not_null(i_5)));
        t = printnl_0(t);
      }
    }
  }
  t = s_9;
  return(t);
}
ATerm new_file_0 (ATerm t)
{
  ATerm p_5 = NULL;
  ATerm q_5 = NULL;
  t = term_u_9;
  {
    t = new_0(t);
    {
      q_5 = t;
      if(((p_5 != NULL) && (p_5 != q_5)))
        _fail(q_5);
      else
        p_5 = q_5;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_5), term_a_10);
    {
      t = conc_strings_0(t);
      {
        ATerm r_0 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, r_0);
      }
    }
  }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
  v_5 = t;
  u_5 :
  if(match_cons(v_5, sym__2))
    {
      w_5 = ATgetArgument(v_5, 0);
      x_5 = ATgetArgument(v_5, 1);
      {
        t = not_null(w_5);
        {
          ATerm s_0 (ATerm t)
          {
            t = not_null(x_5);
            return(t);
          }
          t = at_end_1(t, s_0);
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
ATerm rename_file_0 (ATerm t)
{
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL;
  d_6 = t;
  c_6 :
  if(match_cons(d_6, sym__2))
    {
      e_6 = ATgetArgument(d_6, 0);
      f_6 = ATgetArgument(d_6, 1);
      t = SSL_rename(not_null(e_6), not_null(f_6));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm n_6 = NULL;
  n_6 = t;
  m_6 :
  if(match_cons(n_6, sym_stdout_0))
    {
      ATerm p_6 = NULL,r_6 = NULL;
      ATerm b_10;
      b_10 = t;
      {
        ATerm q_6 = NULL;
        t = SSLgetAnnotations(not_null(n_6));
        {
          q_6 = t;
          if(((p_6 != NULL) && (p_6 != q_6)))
            _fail(q_6);
          else
            p_6 = q_6;
        }
      }
      t = b_10;
      {
        ATerm s_6 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(p_6));
        {
          s_6 = t;
          if(((r_6 != NULL) && (r_6 != s_6)))
            _fail(s_6);
          else
            r_6 = s_6;
        }
        t = not_null(r_6);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm d_7 = NULL,e_7 = NULL;
  d_7 = t;
  c_7 :
  if(match_cons(d_7, sym_FILE_1))
    {
      e_7 = ATgetArgument(d_7, 0);
      {
        ATerm f_10 = t;
        int g_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_7 = NULL;
            ATerm h_7 = NULL;
            t = o_0(t);
            {
              h_7 = t;
              a_7 :
              if(match_cons(h_7, sym_stdout_0))
                {
                  ATerm i_7 = NULL;
                  t = not_null(e_7);
                  {
                    t = ReadFromFile_0(t);
                    {
                      i_7 = t;
                      {
                        if(((g_7 != NULL) && (g_7 != i_7)))
                          _fail(i_7);
                        else
                          g_7 = i_7;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_h_10, not_null(g_7));
                          t = WriteToTextFile_0(t);
                        }
                      }
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_h_10;
            LocalPopChoice(g_10);
          }
        else
          {
            t = f_10;
            {
              ATerm k_7 = NULL;
              ATerm l_7 = NULL;
              t = o_0(t);
              {
                l_7 = t;
                {
                  if(((k_7 != NULL) && (k_7 != l_7)))
                    _fail(l_7);
                  else
                    k_7 = l_7;
                  {
                    ATerm i_10 = t;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = i_10;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_7), not_null(k_7));
                      t = rename_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_7));
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
ATerm if_verbose3_1 (ATerm t, ATerm z_79 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm j_10;
    j_10 = t;
    {
      ATerm s_7 = NULL;
      ATerm t_7 = NULL;
      t = term_r_9;
      {
        t = get_config_0(t);
        {
          t_7 = t;
          if(((s_7 != NULL) && (s_7 != t_7)))
            _fail(t_7);
          else
            s_7 = t_7;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_7), term_k_10);
        t = geq_0(t);
      }
    }
    t = j_10;
    t = z_79(t);
    return(t);
  }
  t = try_1(t, t_0);
  return(t);
}
ATerm xtc_transform_1 (ATerm t, ATerm i_66 (ATerm))
{
  ATerm u_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, i_66, u_0);
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm w_7 = NULL;
  w_7 = t;
  t = SSL_table_keys(not_null(w_7));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm c_8 = NULL;
  c_8 = t;
  {
    t = table_keys_0(t);
    {
      ATerm v_0 (ATerm t)
      {
        ATerm e_8 = NULL;
        ATerm g_8 = NULL;
        e_8 = t;
        {
          ATerm h_8 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_8), not_null(e_8));
          {
            t = table_get_0(t);
            {
              h_8 = t;
              if(((g_8 != NULL) && (g_8 != h_8)))
                _fail(h_8);
              else
                g_8 = h_8;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_8), not_null(g_8));
        }
        return(t);
      }
      t = map_1(t, v_0);
    }
  }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm m_10;
  m_10 = t;
  {
    ATerm m_8 = NULL;
    ATerm n_8 = NULL;
    n_8 = t;
    if(((m_8 != NULL) && (m_8 != n_8)))
      _fail(n_8);
    else
      m_8 = n_8;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_5, not_null(m_8));
      t = printnl_0(t);
    }
  }
  t = m_10;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm t_8 = NULL;
  ATerm v_8 = NULL,w_8 = NULL;
  t_8 = t;
  {
    ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_p_10, (ATerm) ATmakeAppl(sym_Tool_1, not_null(t_8)));
    {
      t = table_get_0(t);
      {
        x_8 = t;
        r_8 :
        if(((ATgetType(x_8) == AT_LIST) && ((ATermList) x_8 != ATempty)))
          {
            y_8 = ATgetFirst((ATermList) x_8);
            b_9 = (ATerm) ATgetNext((ATermList) x_8);
            s_8 :
            if(match_cons(y_8, sym__2))
              {
                z_8 = ATgetArgument(y_8, 0);
                a_9 = ATgetArgument(y_8, 1);
                {
                  if(((v_8 != NULL) && (v_8 != z_8)))
                    _fail(z_8);
                  else
                    v_8 = z_8;
                  if(((w_8 != NULL) && (w_8 != a_9)))
                    _fail(a_9);
                  else
                    w_8 = a_9;
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
    t = not_null(w_8);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
  i_9 = t;
  h_9 :
  if(match_cons(i_9, sym__2))
    {
      j_9 = ATgetArgument(i_9, 0);
      k_9 = ATgetArgument(i_9, 1);
      {
        ATerm n_9 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_p_10, (ATerm) ATmakeAppl(sym_Tool_1, not_null(j_9)));
        {
          t = table_get_0(t);
          {
            ATerm w_0 (ATerm t)
            {
              ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL;
              o_9 = t;
              g_9 :
              if(match_cons(o_9, sym__2))
                {
                  p_9 = ATgetArgument(o_9, 0);
                  q_9 = ATgetArgument(o_9, 1);
                  {
                    if(((k_9 != NULL) && (k_9 != p_9)))
                      _fail(p_9);
                    else
                      k_9 = p_9;
                    if(((n_9 != NULL) && (n_9 != q_9)))
                      _fail(q_9);
                    else
                      n_9 = q_9;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, w_0);
          }
        }
        t = not_null(n_9);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    t = term_r_10;
    {
      t = table_get_0(t);
      {
        ATerm y_0 (ATerm t)
        {
          t = try_1(t, xtc_read_0);
          return(t);
        }
        t = map_1(t, y_0);
      }
    }
    return(t);
  }
  t = try_1(t, x_0);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL;
  x_9 = t;
  w_9 :
  if(match_cons(x_9, sym__2))
    {
      y_9 = ATgetArgument(x_9, 0);
      z_9 = ATgetArgument(x_9, 1);
      {
        t = not_null(z_9);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL;
            c_10 = t;
            v_9 :
            if(match_cons(c_10, sym__2))
              {
                d_10 = ATgetArgument(c_10, 0);
                e_10 = ATgetArgument(c_10, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(y_9), not_null(d_10), not_null(e_10));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, z_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm l_10 = NULL;
  ATerm n_10 = NULL;
  l_10 = t;
  {
    ATerm u_10;
    u_10 = t;
    {
      ATerm o_10 = NULL;
      t = term_v_10;
      {
        o_10 = t;
        if(((n_10 != NULL) && (n_10 != o_10)))
          _fail(o_10);
        else
          n_10 = o_10;
      }
    }
    t = u_10;
    {
      t = SSL_open_file(not_null(l_10), not_null(n_10));
      t = SSL_close_file(not_null(l_10));
    }
  }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm a_80 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm w_10;
    w_10 = t;
    {
      ATerm s_10 = NULL;
      ATerm t_10 = NULL;
      t = term_r_9;
      {
        t = get_config_0(t);
        {
          t_10 = t;
          if(((s_10 != NULL) && (s_10 != t_10)))
            _fail(t_10);
          else
            s_10 = t_10;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_10), term_y_10);
        t = geq_0(t);
      }
    }
    t = w_10;
    t = a_80(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm x_10 = NULL;
  ATerm z_10 = NULL;
  x_10 = t;
  {
    ATerm b_11 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_10, (ATerm) ATmakeAppl(sym_Imported_1, not_null(x_10)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_11;
      }
    {
      ATerm c_11;
      c_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_10, term_d_11, not_null(x_10));
        t = table_put_0(t);
      }
      t = c_11;
      {
        ATerm c_1 (ATerm t)
        {
          ATerm d_1 (ATerm t)
          {
            t = term_f_11;
            return(t);
          }
          t = debug_1(t, d_1);
          return(t);
        }
        t = if_verbose4_1(t, c_1);
        {
          ATerm g_11 = t;
          int h_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(h_11);
            }
          else
            {
              t = g_11;
              t = (ATerm) ATempty;
            }
          {
            ATerm a_11 = NULL;
            a_11 = t;
            if(((z_10 != NULL) && (z_10 != a_11)))
              _fail(a_11);
            else
              z_10 = a_11;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_p_10, not_null(z_10));
              {
                t = table_putlist_0(t);
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_p_10, (ATerm)ATmakeAppl(sym_Imported_1, not_null(x_10)), term_u_9);
                  t = table_put_0(t);
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
ATerm getenv_0 (ATerm t)
{
  ATerm e_11 = NULL;
  e_11 = t;
  t = SSL_getenv(not_null(e_11));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_11;
      t = get_config_0(t);
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_t_11;
            t = getenv_0(t);
            LocalPopChoice(s_11);
          }
        else
          {
            t = r_11;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm f_1 (ATerm t)
    {
      t = term_u_11;
      return(t);
    }
    t = debug_1(t, f_1);
    return(t);
  }
  t = if_verbose5_1(t, e_1);
  {
    ATerm z_11;
    z_11 = t;
    {
      ATerm a_12 = t;
      int b_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_c_12;
          t = table_get_0(t);
          LocalPopChoice(b_12);
        }
      else
        {
          t = a_12;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = z_11;
    {
      ATerm g_1 (ATerm t)
      {
        ATerm h_1 (ATerm t)
        {
          t = term_d_12;
          return(t);
        }
        t = debug_1(t, h_1);
        return(t);
      }
      t = if_verbose5_1(t, g_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_1 (ATerm t)
      {
        ATerm j_1 (ATerm t)
        {
          t = term_g_12;
          return(t);
        }
        t = debug_1(t, j_1);
        return(t);
      }
      t = if_verbose5_1(t, i_1);
      {
        t = xtc_load_0(t);
        {
          ATerm o_12 = t;
          int t_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(t_12);
            }
          else
            {
              t = o_12;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm k_1 (ATerm t)
            {
              ATerm l_1 (ATerm t)
              {
                t = term_g_12;
                return(t);
              }
              t = debug_1(t, l_1);
              return(t);
            }
            t = if_verbose5_1(t, k_1);
          }
        }
      }
      LocalPopChoice(f_12);
    }
  else
    {
      t = e_12;
      {
        ATerm i_11 = NULL;
        ATerm j_11 = NULL;
        j_11 = t;
        if(((i_11 != NULL) && (i_11 != j_11)))
          _fail(j_11);
        else
          i_11 = j_11;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_12), not_null(i_11)), term_u_12);
          {
            t = error_0(t);
            {
              ATerm m_1 (ATerm t)
              {
                t = term_p_10;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm n_1 (ATerm t)
                    {
                      t = term_w_12;
                      return(t);
                    }
                    t = debug_1(t, n_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, m_1);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm q_66 (ATerm), ATerm r_66 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, q_66, r_66);
    t = read_from_0(t);
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL;
  n_11 = t;
  m_11 :
  if(match_cons(n_11, sym__2))
    {
      o_11 = ATgetArgument(n_11, 0);
      p_11 = ATgetArgument(n_11, 1);
      t = SSL_call(not_null(o_11), not_null(p_11));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_find_warning_0 (ATerm t)
{
  t = xtc_find_0(t);
  return(t);
}
ATerm xtc_command_1 (ATerm t, ATerm h_66 (ATerm))
{
  ATerm v_11 = NULL;
  ATerm x_12;
  x_12 = t;
  {
    ATerm w_11 = NULL;
    t = h_66(t);
    {
      t = xtc_find_warning_0(t);
      {
        w_11 = t;
        if(((v_11 != NULL) && (v_11 != w_11)))
          _fail(w_11);
        else
          v_11 = w_11;
      }
    }
  }
  t = x_12;
  {
    ATerm y_12;
    y_12 = t;
    {
      ATerm x_11 = NULL;
      ATerm y_11 = NULL;
      y_11 = t;
      if(((x_11 != NULL) && (x_11 != y_11)))
        _fail(y_11);
      else
        x_11 = y_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_11), not_null(x_11));
        t = call_0(t);
      }
    }
    t = y_12;
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm i_12 = NULL,j_12 = NULL;
  i_12 = t;
  h_12 :
  if(match_cons(i_12, sym_stdin_0))
    {
      ATerm k_12 = NULL;
      ATerm l_12 = NULL;
      ATerm m_12 = NULL;
      t = xtc_new_file_0(t);
      {
        l_12 = t;
        {
          if(((k_12 != NULL) && (k_12 != l_12)))
            _fail(l_12);
          else
            k_12 = l_12;
          {
            ATerm n_12 = NULL;
            t = n_0(t);
            {
              n_12 = t;
              if(((m_12 != NULL) && (m_12 != n_12)))
                _fail(n_12);
              else
                m_12 = n_12;
            }
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(m_12)), not_null(k_12)), term_z_12);
              t = xtc_command_1(t, m_0);
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_12));
    }
  else
    {
      if(match_cons(i_12, sym_FILE_1))
        {
          j_12 = ATgetArgument(i_12, 0);
          {
            ATerm p_12 = NULL;
            ATerm q_12 = NULL;
            t = not_null(j_12);
            {
              ATerm r_12 = NULL;
              t = xtc_new_file_0(t);
              {
                q_12 = t;
                {
                  if(((p_12 != NULL) && (p_12 != q_12)))
                    _fail(q_12);
                  else
                    p_12 = q_12;
                  {
                    ATerm s_12 = NULL;
                    t = n_0(t);
                    {
                      s_12 = t;
                      if(((r_12 != NULL) && (r_12 != s_12)))
                        _fail(s_12);
                      else
                        r_12 = s_12;
                    }
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(r_12)), not_null(p_12)), term_z_12), not_null(j_12)), term_e_13);
                      t = xtc_command_1(t, m_0);
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_12));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm xtc_transform_2 (ATerm t, ATerm j_66 (ATerm), ATerm k_66 (ATerm))
{
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_transform_file_2(t, j_66, k_66);
      LocalPopChoice(g_13);
    }
  else
    {
      t = f_13;
      t = xtc_transform_term_2(t, j_66, k_66);
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
  b_13 = t;
  a_13 :
  if(match_cons(b_13, sym__2))
    {
      c_13 = ATgetArgument(b_13, 0);
      d_13 = ATgetArgument(b_13, 1);
      t = SSL_WriteToTextFile(not_null(c_13), not_null(d_13));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm b_66 (ATerm))
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
  m_13 = t;
  l_13 :
  if(match_cons(m_13, sym__2))
    {
      n_13 = ATgetArgument(m_13, 0);
      o_13 = ATgetArgument(m_13, 1);
      {
        ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
        ATerm h_13;
        h_13 = t;
        {
          ATerm u_13 = NULL;
          ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
          t = b_66(t);
          {
            u_13 = t;
            {
              if(((r_13 != NULL) && (r_13 != u_13)))
                _fail(u_13);
              else
                r_13 = u_13;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(r_13), not_null(n_13), not_null(o_13));
                {
                  t = table_push_0(t);
                  {
                    ATerm i_13 = t;
                    int j_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(r_13), term_p_13);
                        t = table_get_0(t);
                        LocalPopChoice(j_13);
                      }
                    else
                      {
                        t = i_13;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      v_13 = t;
                      k_13 :
                      if(((ATgetType(v_13) == AT_LIST) && ((ATermList) v_13 != ATempty)))
                        {
                          w_13 = ATgetFirst((ATermList) v_13);
                          x_13 = (ATerm) ATgetNext((ATermList) v_13);
                          {
                            if(((s_13 != NULL) && (s_13 != w_13)))
                              _fail(w_13);
                            else
                              s_13 = w_13;
                            {
                              if(((t_13 != NULL) && (t_13 != x_13)))
                                _fail(x_13);
                              else
                                t_13 = x_13;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(r_13), term_p_13, (ATerm) ATinsert(CheckATermList(not_null(t_13)), (ATerm) ATinsert(CheckATermList(not_null(s_13)), not_null(n_13))));
                                t = table_put_0(t);
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
        }
        t = h_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm c_14 = NULL;
  t = new_file_0(t);
  {
    c_14 = t;
    {
      ATerm q_13;
      q_13 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_14), term_u_9);
        {
          ATerm r_1 (ATerm t)
          {
            t = term_y_13;
            return(t);
          }
          t = assert_1(t, r_1);
        }
      }
      t = q_13;
    }
  }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm h_14 = NULL;
  ATerm j_14 = NULL;
  h_14 = t;
  {
    ATerm k_14 = NULL;
    t = xtc_new_file_0(t);
    {
      k_14 = t;
      {
        if(((j_14 != NULL) && (j_14 != k_14)))
          _fail(k_14);
        else
          j_14 = k_14;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_14), not_null(h_14));
          t = WriteToTextFile_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_14));
  }
  return(t);
}
ATerm Escape_0 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL;
  s_14 = t;
  q_14 :
  if(((ATgetType(s_14) == AT_LIST) && ((ATermList) s_14 != ATempty)))
    {
      t_14 = ATgetFirst((ATermList) s_14);
      u_14 = (ATerm) ATgetNext((ATermList) s_14);
      r_14 :
      if(match_int(t_14, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(u_14)), term_a_14), term_z_13);
        }
      else
        {
          if(match_int(t_14, 92))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(u_14)), term_z_13), term_z_13);
            }
          else
            {
              if(match_int(t_14, 34))
                {
                  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(u_14)), term_b_14), term_z_13);
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
    ATerm b_15 (ATerm t)
    {
      ATerm d_14 = t;
      int e_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Escape_0(t);
          {
            ATerm s_1 (ATerm t)
            {
              t = Cons_2(t, _id, b_15);
              return(t);
            }
            t = Cons_2(t, _id, s_1);
          }
          LocalPopChoice(e_14);
        }
      else
        {
          t = d_14;
          {
            ATerm f_14 = t;
            int g_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, b_15);
                LocalPopChoice(g_14);
              }
            else
              {
                t = f_14;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = b_15(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm d_15 = NULL;
  d_15 = t;
  t = SSL_is_int(not_null(d_15));
  return(t);
}
ATerm quote_1 (ATerm t, ATerm p_64 (ATerm))
{
  ATerm j_15 = NULL;
  ATerm l_15 = NULL,n_15 = NULL;
  j_15 = t;
  {
    ATerm i_14;
    i_14 = t;
    {
      ATerm m_15 = NULL;
      t = p_64(t);
      {
        m_15 = t;
        if(((l_15 != NULL) && (l_15 != m_15)))
          _fail(m_15);
        else
          l_15 = m_15;
      }
    }
    t = i_14;
    {
      ATerm o_15 = NULL;
      t = not_null(j_15);
      {
        t = explode_string_0(t);
        {
          o_15 = t;
          if(((n_15 != NULL) && (n_15 != o_15)))
            _fail(o_15);
          else
            n_15 = o_15;
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, not_null(l_15))), not_null(n_15)), (ATerm) ATinsert(ATempty, not_null(l_15)));
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
  ATerm t_1 (ATerm t)
  {
    t = term_b_14;
    return(t);
  }
  t = quote_1(t, t_1);
  return(t);
}
ATerm EdgeToDot_0 (ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL;
  d_16 = t;
  c_16 :
  if(match_cons(d_16, sym__2))
    {
      e_16 = ATgetArgument(d_16, 0);
      f_16 = ATgetArgument(d_16, 1);
      {
        ATerm l_14 = t;
        int m_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_16 = NULL,j_16 = NULL,p_16 = NULL,r_16 = NULL;
            ATerm n_14;
            n_14 = t;
            {
              ATerm k_16 = NULL;
              ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL;
              t = not_null(f_16);
              {
                k_16 = t;
                {
                  t = SSL_explode_term(not_null(k_16));
                  {
                    m_16 = t;
                    w_15 :
                    if(match_cons(m_16, sym__2))
                      {
                        n_16 = ATgetArgument(m_16, 0);
                        o_16 = ATgetArgument(m_16, 1);
                        {
                          if(((i_16 != NULL) && (i_16 != n_16)))
                            _fail(n_16);
                          else
                            i_16 = n_16;
                          if(((j_16 != NULL) && (j_16 != o_16)))
                            _fail(o_16);
                          else
                            j_16 = o_16;
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
            t = n_14;
            {
              ATerm o_14;
              o_14 = t;
              {
                ATerm q_16 = NULL;
                t = not_null(i_16);
                {
                  t = escape_0(t);
                  {
                    t = double_quote_0(t);
                    {
                      q_16 = t;
                      if(((p_16 != NULL) && (p_16 != q_16)))
                        _fail(q_16);
                      else
                        p_16 = q_16;
                    }
                  }
                }
              }
              t = o_14;
              {
                ATerm u_16 = NULL;
                t = not_null(j_16);
                {
                  ATerm u_1 (ATerm t)
                  {
                    ATerm s_16 = NULL;
                    s_16 = t;
                    t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_16)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(s_16)))));
                    return(t);
                  }
                  t = map_1(t, u_1);
                  {
                    u_16 = t;
                    if(((r_16 != NULL) && (r_16 != u_16)))
                      _fail(u_16);
                    else
                      r_16 = u_16;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(r_16)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_16)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_p_14, not_null(p_16)))))));
              }
            }
            LocalPopChoice(m_14);
          }
        else
          {
            t = l_14;
            {
              ATerm x_16 = NULL;
              ATerm y_16 = NULL,a_17 = NULL;
              t = not_null(f_16);
              {
                t = is_int_0(t);
                {
                  ATerm z_16 = NULL;
                  t = not_null(f_16);
                  {
                    t = int_to_string_0(t);
                    {
                      t = escape_0(t);
                      {
                        z_16 = t;
                        if(((y_16 != NULL) && (y_16 != z_16)))
                          _fail(z_16);
                        else
                          y_16 = z_16;
                      }
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_14), not_null(y_16)), term_v_14);
                    {
                      t = concat_strings_0(t);
                      {
                        a_17 = t;
                        if(((x_16 != NULL) && (x_16 != a_17)))
                          _fail(a_17);
                        else
                          x_16 = a_17;
                      }
                    }
                  }
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_16)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_p_14, not_null(x_16)))))));
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
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
  x_17 = t;
  w_17 :
  if(((ATermList) x_17 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(x_17) == AT_LIST) && ((ATermList) x_17 != ATempty)))
        {
          y_17 = ATgetFirst((ATermList) x_17);
          z_17 = (ATerm) ATgetNext((ATermList) x_17);
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
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
  e_18 = t;
  d_18 :
  if(match_cons(e_18, sym__2))
    {
      f_18 = ATgetArgument(e_18, 0);
      g_18 = ATgetArgument(e_18, 1);
      {
        ATerm j_18 = NULL;
        ATerm w_14;
        w_14 = t;
        {
          t = not_null(g_18);
          t = is_list_0(t);
        }
        t = w_14;
        {
          ATerm m_18 = NULL;
          t = not_null(g_18);
          {
            ATerm v_1 (ATerm t)
            {
              ATerm k_18 = NULL;
              k_18 = t;
              t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_18)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_18)))));
              return(t);
            }
            t = map_1(t, v_1);
            {
              m_18 = t;
              if(((j_18 != NULL) && (j_18 != m_18)))
                _fail(m_18);
              else
                j_18 = m_18;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(j_18)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_18)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_y_14)))));
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
  ATerm s_18 = NULL;
  ATerm u_18 = NULL;
  s_18 = t;
  {
    ATerm v_18 = NULL;
    t = not_null(s_18);
    {
      ATerm w_1 (ATerm t)
      {
        ATerm z_14 = t;
        int a_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ListEdgeToDot_0(t);
            LocalPopChoice(a_15);
          }
        else
          {
            t = z_14;
            t = EdgeToDot_0(t);
          }
        return(t);
      }
      t = map_1(t, w_1);
      {
        t = concat_0(t);
        {
          v_18 = t;
          if(((u_18 != NULL) && (u_18 != v_18)))
            _fail(v_18);
          else
            u_18 = v_18;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_c_15, not_null(u_18));
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm z_18 = NULL;
  z_18 = t;
  t = SSL_int_to_string(not_null(z_18));
  return(t);
}
ATerm NodeId_0 (ATerm t)
{
  ATerm d_19 = NULL;
  ATerm e_19 = NULL;
  t = int_to_string_0(t);
  {
    e_19 = t;
    if(((d_19 != NULL) && (d_19 != e_19)))
      _fail(e_19);
    else
      d_19 = e_19;
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, term_e_15, not_null(d_19));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm address_0 (ATerm t)
{
  ATerm h_19 = NULL;
  h_19 = t;
  t = SSL_address(not_null(h_19));
  return(t);
}
ATerm term_to_graph_0 (ATerm t)
{
  ATerm n_19 = NULL,p_19 = NULL,r_19 = NULL;
  ATerm f_15;
  f_15 = t;
  {
    ATerm o_19 = NULL;
    t = address_0(t);
    {
      t = NodeId_0(t);
      {
        o_19 = t;
        if(((n_19 != NULL) && (n_19 != o_19)))
          _fail(o_19);
        else
          n_19 = o_19;
      }
    }
  }
  t = f_15;
  {
    ATerm g_15;
    g_15 = t;
    {
      ATerm q_19 = NULL;
      ATerm h_15 = t;
      int i_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_1 (ATerm t)
          {
            t = address_0(t);
            t = NodeId_0(t);
            return(t);
          }
          t = map_1(t, x_1);
          LocalPopChoice(i_15);
        }
      else
        {
          t = h_15;
          {
            ATerm y_1 (ATerm t)
            {
              t = address_0(t);
              t = NodeId_0(t);
              return(t);
            }
            t = _all(t, y_1);
          }
        }
      {
        q_19 = t;
        if(((p_19 != NULL) && (p_19 != q_19)))
          _fail(q_19);
        else
          p_19 = q_19;
      }
    }
    t = g_15;
    {
      ATerm s_19 = NULL;
      ATerm k_15 = t;
      int p_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = foldr_3(t, z_1, union_0, term_to_graph_0);
          LocalPopChoice(p_15);
        }
      else
        {
          t = k_15;
          {
            ATerm a_2 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, a_2, union_0, term_to_graph_0);
          }
        }
      {
        s_19 = t;
        if(((r_19 != NULL) && (r_19 != s_19)))
          _fail(s_19);
        else
          r_19 = s_19;
      }
      t = (ATerm) ATinsert(CheckATermList(not_null(r_19)), (ATerm) ATmakeAppl(sym__2, not_null(n_19), not_null(p_19)));
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
  z_19 = t;
  y_19 :
  if(match_cons(z_19, sym__2))
    {
      a_20 = ATgetArgument(z_19, 0);
      b_20 = ATgetArgument(z_19, 1);
      if(((a_20 != NULL) && (a_20 != b_20)))
        _fail(b_20);
      else
        a_20 = b_20;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm h_69 (ATerm), ATerm i_69 (ATerm))
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
  h_20 = t;
  g_20 :
  if(((ATgetType(h_20) == AT_LIST) && ((ATermList) h_20 != ATempty)))
    {
      i_20 = ATgetFirst((ATermList) h_20);
      j_20 = (ATerm) ATgetNext((ATermList) h_20);
      {
        t = i_69(t);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm u_20 = NULL;
            u_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_20), not_null(u_20));
              t = h_69(t);
            }
            return(t);
          }
          t = fetch_1(t, b_2);
        }
        t = not_null(j_20);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm j_69 (ATerm))
{
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
  c_21 = t;
  z_20 :
  if(match_cons(c_21, sym__2))
    {
      d_21 = ATgetArgument(c_21, 0);
      e_21 = ATgetArgument(c_21, 1);
      {
        t = not_null(d_21);
        {
          ATerm j_21 (ATerm t)
          {
            ATerm q_15 = t;
            int r_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(e_21);
                LocalPopChoice(r_15);
              }
            else
              {
                t = q_15;
                {
                  ATerm s_15 = t;
                  int t_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_2 (ATerm t)
                      {
                        t = not_null(e_21);
                        return(t);
                      }
                      t = HdMember_p__2(t, j_69, c_2);
                      t = j_21(t);
                      LocalPopChoice(t_15);
                    }
                  else
                    {
                      t = s_15;
                      t = Cons_2(t, _id, j_21);
                    }
                }
              }
            return(t);
          }
          t = j_21(t);
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
ATerm crush_3 (ATerm t, ATerm u_69 (ATerm), ATerm v_69 (ATerm), ATerm w_69 (ATerm))
{
  ATerm o_21 = NULL;
  ATerm q_21 = NULL;
  o_21 = t;
  {
    ATerm r_21 = NULL;
    ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
    t = not_null(o_21);
    {
      r_21 = t;
      {
        t = SSL_explode_term(not_null(r_21));
        {
          t_21 = t;
          n_21 :
          if(match_cons(t_21, sym__2))
            {
              u_21 = ATgetArgument(t_21, 0);
              v_21 = ATgetArgument(t_21, 1);
              if(((q_21 != NULL) && (q_21 != v_21)))
                _fail(v_21);
              else
                q_21 = v_21;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(q_21);
      t = foldr_3(t, u_69, v_69, w_69);
    }
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm c_68 (ATerm), ATerm d_68 (ATerm), ATerm e_68 (ATerm))
{
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_68(t);
      LocalPopChoice(v_15);
    }
  else
    {
      t = u_15;
      {
        ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
        d_22 = t;
        c_22 :
        if(((ATgetType(d_22) == AT_LIST) && ((ATermList) d_22 != ATempty)))
          {
            e_22 = ATgetFirst((ATermList) d_22);
            f_22 = (ATerm) ATgetNext((ATermList) d_22);
            {
              ATerm i_22 = NULL,k_22 = NULL;
              ATerm x_15;
              x_15 = t;
              {
                ATerm j_22 = NULL;
                t = not_null(e_22);
                {
                  t = e_68(t);
                  {
                    j_22 = t;
                    if(((i_22 != NULL) && (i_22 != j_22)))
                      _fail(j_22);
                    else
                      i_22 = j_22;
                  }
                }
              }
              t = x_15;
              {
                ATerm l_22 = NULL;
                t = not_null(f_22);
                {
                  t = foldr_3(t, c_68, d_68, e_68);
                  {
                    l_22 = t;
                    if(((k_22 != NULL) && (k_22 != l_22)))
                      _fail(l_22);
                    else
                      k_22 = l_22;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_22), not_null(k_22));
                  t = d_68(t);
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
  ATerm w_22 = NULL;
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
  w_22 = t;
  {
    ATerm b_23 = NULL;
    ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,p_23 = NULL;
    t = not_null(w_22);
    {
      b_23 = t;
      {
        t = SSL_explode_term(not_null(b_23));
        {
          d_23 = t;
          s_22 :
          if(match_cons(d_23, sym__2))
            {
              e_23 = ATgetArgument(d_23, 0);
              f_23 = ATgetArgument(d_23, 1);
              t_22 :
              if(match_string(e_23, ""))
                {
                  u_22 :
                  if(((ATgetType(f_23) == AT_LIST) && ((ATermList) f_23 != ATempty)))
                    {
                      g_23 = ATgetFirst((ATermList) f_23);
                      h_23 = (ATerm) ATgetNext((ATermList) f_23);
                      v_22 :
                      if(((ATgetType(h_23) == AT_LIST) && ((ATermList) h_23 != ATempty)))
                        {
                          i_23 = ATgetFirst((ATermList) h_23);
                          p_23 = (ATerm) ATgetNext((ATermList) h_23);
                          {
                            if(((y_22 != NULL) && (y_22 != g_23)))
                              _fail(g_23);
                            else
                              y_22 = g_23;
                            {
                              if(((a_23 != NULL) && (a_23 != i_23)))
                                _fail(i_23);
                              else
                                a_23 = i_23;
                              if(((z_22 != NULL) && (z_22 != p_23)))
                                _fail(p_23);
                              else
                                z_22 = p_23;
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
    t = not_null(a_23);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm a_24 = NULL;
  ATerm c_24 = NULL,d_24 = NULL;
  a_24 = t;
  {
    ATerm e_24 = NULL;
    ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
    t = not_null(a_24);
    {
      e_24 = t;
      {
        t = SSL_explode_term(not_null(e_24));
        {
          g_24 = t;
          x_23 :
          if(match_cons(g_24, sym__2))
            {
              h_24 = ATgetArgument(g_24, 0);
              i_24 = ATgetArgument(g_24, 1);
              y_23 :
              if(match_string(h_24, ""))
                {
                  z_23 :
                  if(((ATgetType(i_24) == AT_LIST) && ((ATermList) i_24 != ATempty)))
                    {
                      j_24 = ATgetFirst((ATermList) i_24);
                      k_24 = (ATerm) ATgetNext((ATermList) i_24);
                      {
                        if(((d_24 != NULL) && (d_24 != j_24)))
                          _fail(j_24);
                        else
                          d_24 = j_24;
                        if(((c_24 != NULL) && (c_24 != k_24)))
                          _fail(k_24);
                        else
                          c_24 = k_24;
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
    t = not_null(d_24);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm k_46 (ATerm), ATerm l_46 (ATerm))
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL;
  u_24 = t;
  t_24 :
  if(match_cons(u_24, sym__2))
    {
      v_24 = ATgetArgument(u_24, 0);
      w_24 = ATgetArgument(u_24, 1);
      {
        ATerm a_25 = NULL,c_25 = NULL;
        ATerm b_25 = NULL;
        t = SSLgetAnnotations(not_null(u_24));
        {
          b_25 = t;
          if(((a_25 != NULL) && (a_25 != b_25)))
            _fail(b_25);
          else
            a_25 = b_25;
        }
        {
          t = not_null(v_24);
          {
            ATerm e_25 = NULL;
            t = k_46(t);
            {
              c_25 = t;
              {
                t = not_null(w_24);
                {
                  ATerm g_25 = NULL;
                  t = l_46(t);
                  {
                    e_25 = t;
                    {
                      ATerm h_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(c_25), not_null(e_25)), not_null(a_25));
                      {
                        h_25 = t;
                        if(((g_25 != NULL) && (g_25 != h_25)))
                          _fail(h_25);
                        else
                          g_25 = h_25;
                      }
                      t = not_null(g_25);
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
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm b_80 (ATerm))
{
  ATerm d_2 (ATerm t)
  {
    ATerm y_15;
    y_15 = t;
    {
      ATerm o_25 = NULL;
      ATerm p_25 = NULL;
      t = term_r_9;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_25), term_z_15);
        t = geq_0(t);
      }
    }
    t = y_15;
    t = b_80(t);
    return(t);
  }
  t = try_1(t, d_2);
  return(t);
}
ATerm term_to_tree_0 (ATerm t)
{
  ATerm c_26 = NULL,e_26 = NULL;
  ATerm e_2 (ATerm t)
  {
    ATerm f_2 (ATerm t)
    {
      t = term_a_16;
      return(t);
    }
    t = debug_1(t, f_2);
    return(t);
  }
  t = if_verbose5_1(t, e_2);
  {
    ATerm b_16;
    b_16 = t;
    {
      ATerm d_26 = NULL;
      t = new_0(t);
      {
        d_26 = t;
        if(((c_26 != NULL) && (c_26 != d_26)))
          _fail(d_26);
        else
          c_26 = d_26;
      }
    }
    t = b_16;
    {
      ATerm f_26 = NULL;
      f_26 = t;
      if(((e_26 != NULL) && (e_26 != f_26)))
        _fail(f_26);
      else
        e_26 = f_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_26), not_null(e_26));
        {
          ATerm w_26 (ATerm t)
          {
            ATerm o_26 = NULL,q_26 = NULL;
            ATerm g_2 (ATerm t)
            {
              ATerm g_16 = t;
              int h_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_2 (ATerm t)
                  {
                    ATerm g_26 = NULL,i_26 = NULL;
                    ATerm l_16;
                    l_16 = t;
                    {
                      ATerm h_26 = NULL;
                      t = new_0(t);
                      {
                        h_26 = t;
                        if(((g_26 != NULL) && (g_26 != h_26)))
                          _fail(h_26);
                        else
                          g_26 = h_26;
                      }
                    }
                    t = l_16;
                    {
                      ATerm j_26 = NULL;
                      j_26 = t;
                      if(((i_26 != NULL) && (i_26 != j_26)))
                        _fail(j_26);
                      else
                        i_26 = j_26;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(g_26), not_null(i_26));
                    }
                    return(t);
                  }
                  t = map_1(t, h_2);
                  LocalPopChoice(h_16);
                }
              else
                {
                  t = g_16;
                  {
                    ATerm j_2 (ATerm t)
                    {
                      ATerm k_26 = NULL,m_26 = NULL;
                      ATerm t_16;
                      t_16 = t;
                      {
                        ATerm l_26 = NULL;
                        t = new_0(t);
                        {
                          l_26 = t;
                          if(((k_26 != NULL) && (k_26 != l_26)))
                            _fail(l_26);
                          else
                            k_26 = l_26;
                        }
                      }
                      t = t_16;
                      {
                        ATerm n_26 = NULL;
                        n_26 = t;
                        if(((m_26 != NULL) && (m_26 != n_26)))
                          _fail(n_26);
                        else
                          m_26 = n_26;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_26), not_null(m_26));
                      }
                      return(t);
                    }
                    t = _all(t, j_2);
                  }
                }
              return(t);
            }
            t = _2(t, _id, g_2);
            {
              ATerm v_16;
              v_16 = t;
              {
                ATerm p_26 = NULL;
                ATerm k_2 (ATerm t)
                {
                  ATerm w_16 = t;
                  int b_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = map_1(t, Fst_0);
                      LocalPopChoice(b_17);
                    }
                  else
                    {
                      t = w_16;
                      t = _all(t, Fst_0);
                    }
                  return(t);
                }
                t = _2(t, _id, k_2);
                {
                  p_26 = t;
                  if(((o_26 != NULL) && (o_26 != p_26)))
                    _fail(p_26);
                  else
                    o_26 = p_26;
                }
              }
              t = v_16;
              {
                ATerm t_26 = NULL;
                t = Snd_0(t);
                {
                  ATerm c_17 = t;
                  int d_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_2 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = foldr_3(t, l_2, union_0, w_26);
                      LocalPopChoice(d_17);
                    }
                  else
                    {
                      t = c_17;
                      {
                        ATerm m_2 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        t = crush_3(t, m_2, union_0, w_26);
                      }
                    }
                  {
                    t_26 = t;
                    if(((q_26 != NULL) && (q_26 != t_26)))
                      _fail(t_26);
                    else
                      q_26 = t_26;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(q_26)), not_null(o_26));
              }
            }
            return(t);
          }
          t = w_26(t);
        }
      }
    }
  }
  return(t);
}
ATerm to_adot_0 (ATerm t)
{
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_17;
      g_17 = t;
      {
        t = term_h_17;
        t = get_config_0(t);
      }
      t = g_17;
      t = term_to_tree_0(t);
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      {
        ATerm i_17;
        i_17 = t;
        {
          t = term_j_17;
          t = get_config_0(t);
        }
        t = i_17;
        t = term_to_graph_0(t);
      }
    }
  t = graph_to_adot_0(t);
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm h_27 = NULL;
  h_27 = t;
  t = SSL_ReadFromFile(not_null(h_27));
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL;
  s_27 = t;
  r_27 :
  if(match_cons(s_27, sym_stdin_0))
    {
      ATerm u_27 = NULL;
      ATerm y_27 = NULL;
      t = term_k_17;
      {
        t = ReadFromFile_0(t);
        {
          y_27 = t;
          if(((u_27 != NULL) && (u_27 != y_27)))
            _fail(y_27);
          else
            u_27 = y_27;
        }
      }
      t = not_null(u_27);
    }
  else
    {
      if(match_cons(s_27, sym_FILE_1))
        {
          t_27 = ATgetArgument(s_27, 0);
          {
            ATerm a_28 = NULL;
            ATerm b_28 = NULL;
            t = not_null(t_27);
            {
              t = ReadFromFile_0(t);
              {
                b_28 = t;
                if(((a_28 != NULL) && (a_28 != b_28)))
                  _fail(b_28);
                else
                  a_28 = b_28;
              }
            }
            t = not_null(a_28);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL;
  i_28 = t;
  h_28 :
  if(match_cons(i_28, sym__2))
    {
      j_28 = ATgetArgument(i_28, 0);
      k_28 = ATgetArgument(i_28, 1);
      {
        ATerm l_17;
        l_17 = t;
        {
          ATerm m_17 = t;
          int n_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(j_28), not_null(k_28));
              LocalPopChoice(n_17);
            }
          else
            {
              t = m_17;
              t = SSL_gtr(not_null(j_28), not_null(k_28));
            }
        }
        t = l_17;
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
  ATerm q_28 = NULL;
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
      r_28 = t;
      p_28 :
      if(match_cons(r_28, sym__2))
        {
          s_28 = ATgetArgument(r_28, 0);
          t_28 = ATgetArgument(r_28, 1);
          {
            if(((q_28 != NULL) && (q_28 != s_28)))
              _fail(s_28);
            else
              q_28 = s_28;
            if(((q_28 != NULL) && (q_28 != t_28)))
              _fail(t_28);
            else
              q_28 = t_28;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(p_17);
    }
  else
    {
      t = o_17;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm y_79 (ATerm))
{
  ATerm n_2 (ATerm t)
  {
    ATerm q_17;
    q_17 = t;
    {
      ATerm w_28 = NULL;
      ATerm x_28 = NULL;
      t = term_r_9;
      {
        t = get_config_0(t);
        {
          x_28 = t;
          if(((w_28 != NULL) && (w_28 != x_28)))
            _fail(x_28);
          else
            w_28 = x_28;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_28), term_r_17);
        t = geq_0(t);
      }
    }
    t = q_17;
    t = y_79(t);
    return(t);
  }
  t = try_1(t, n_2);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
  d_29 = t;
  a_29 :
  if(((ATgetType(d_29) == AT_LIST) && ((ATermList) d_29 != ATempty)))
    {
      e_29 = ATgetFirst((ATermList) d_29);
      f_29 = (ATerm) ATgetNext((ATermList) d_29);
      t = not_null(f_29);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL;
  m_29 = t;
  l_29 :
  if(match_cons(m_29, sym__2))
    {
      n_29 = ATgetArgument(m_29, 0);
      o_29 = ATgetArgument(m_29, 1);
      {
        ATerm s_17;
        s_17 = t;
        {
          ATerm r_29 = NULL;
          ATerm s_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_29), not_null(o_29));
          {
            ATerm t_17 = t;
            int u_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(u_17);
              }
            else
              {
                t = t_17;
                t = (ATerm) ATempty;
              }
            {
              s_29 = t;
              if(((r_29 != NULL) && (r_29 != s_29)))
                _fail(s_29);
              else
                r_29 = s_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_29), not_null(o_29), not_null(r_29));
            t = table_put_0(t);
          }
        }
        t = s_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm y_65 (ATerm))
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
  ATerm v_17;
  v_17 = t;
  {
    ATerm c_30 = NULL;
    ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
    t = y_65(t);
    {
      c_30 = t;
      {
        if(((a_30 != NULL) && (a_30 != c_30)))
          _fail(c_30);
        else
          a_30 = c_30;
        {
          ATerm a_18 = t;
          int b_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_30), term_p_13);
              t = table_get_0(t);
              LocalPopChoice(b_18);
            }
          else
            {
              t = a_18;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            d_30 = t;
            y_29 :
            if(((ATgetType(d_30) == AT_LIST) && ((ATermList) d_30 != ATempty)))
              {
                e_30 = ATgetFirst((ATermList) d_30);
                f_30 = (ATerm) ATgetNext((ATermList) d_30);
                {
                  if(((b_30 != NULL) && (b_30 != e_30)))
                    _fail(e_30);
                  else
                    b_30 = e_30;
                  {
                    if(((z_29 != NULL) && (z_29 != f_30)))
                      _fail(f_30);
                    else
                      z_29 = f_30;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(a_30), term_p_13, not_null(z_29));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(b_30);
                          {
                            ATerm o_2 (ATerm t)
                            {
                              ATerm g_30 = NULL;
                              g_30 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_30), not_null(g_30));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, o_2);
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
          }
        }
      }
    }
  }
  t = v_17;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm m_30 = NULL;
  m_30 = t;
  t = SSL_remove(not_null(m_30));
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm x_65 (ATerm))
{
  ATerm r_30 = NULL;
  ATerm c_18;
  c_18 = t;
  {
    ATerm s_30 = NULL;
    ATerm t_30 = NULL;
    t = x_65(t);
    {
      s_30 = t;
      {
        if(((r_30 != NULL) && (r_30 != s_30)))
          _fail(s_30);
        else
          r_30 = s_30;
        {
          ATerm u_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_30), term_p_13);
          {
            ATerm h_18 = t;
            int i_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(i_18);
              }
            else
              {
                t = h_18;
                t = (ATerm) ATempty;
              }
            {
              u_30 = t;
              if(((t_30 != NULL) && (t_30 != u_30)))
                _fail(u_30);
              else
                t_30 = u_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_30), term_p_13, (ATerm) ATinsert(CheckATermList(not_null(t_30)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = c_18;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm g_66 (ATerm))
{
  ATerm z_30 = NULL,a_31 = NULL;
  ATerm p_2 (ATerm t)
  {
    t = term_y_13;
    return(t);
  }
  t = begin_scope_1(t, p_2);
  {
    t = g_66(t);
    {
      ATerm l_18;
      l_18 = t;
      {
        ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL;
        ATerm n_18 = t;
        int o_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_p_18;
            t = table_get_0(t);
            LocalPopChoice(o_18);
          }
        else
          {
            t = n_18;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          b_31 = t;
          y_30 :
          if(((ATgetType(b_31) == AT_LIST) && ((ATermList) b_31 != ATempty)))
            {
              c_31 = ATgetFirst((ATermList) b_31);
              d_31 = (ATerm) ATgetNext((ATermList) b_31);
              {
                if(((a_31 != NULL) && (a_31 != c_31)))
                  _fail(c_31);
                else
                  a_31 = c_31;
                {
                  if(((z_30 != NULL) && (z_30 != d_31)))
                    _fail(d_31);
                  else
                    z_30 = d_31;
                  {
                    t = not_null(a_31);
                    {
                      ATerm u_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, u_2);
                    }
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
      t = l_18;
      {
        ATerm v_2 (ATerm t)
        {
          t = term_y_13;
          return(t);
        }
        t = end_scope_1(t, v_2);
      }
    }
  }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm i_31 = NULL;
  ATerm q_18;
  q_18 = t;
  {
    ATerm w_2 (ATerm t)
    {
      ATerm j_31 = NULL,k_31 = NULL;
      j_31 = t;
      h_31 :
      if(match_cons(j_31, sym_Program_1))
        {
          k_31 = ATgetArgument(j_31, 0);
          if(((i_31 != NULL) && (i_31 != k_31)))
            _fail(k_31);
          else
            i_31 = k_31;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, w_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_18), not_null(i_31)), term_r_18));
      {
        t = printnl_0(t);
        {
          t = term_a_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = q_18;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm t_31 = NULL;
  t_31 = t;
  r_31 :
  if(match_cons(t_31, sym_Version_0))
    {
      ATerm x_31 = NULL,j_32 = NULL;
      ATerm w_18;
      w_18 = t;
      {
        ATerm i_32 = NULL;
        t = SSLgetAnnotations(not_null(t_31));
        {
          i_32 = t;
          if(((x_31 != NULL) && (x_31 != i_32)))
            _fail(i_32);
          else
            x_31 = i_32;
        }
      }
      t = w_18;
      {
        ATerm k_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(x_31));
        {
          k_32 = t;
          if(((j_32 != NULL) && (j_32 != k_32)))
            _fail(k_32);
          else
            j_32 = k_32;
        }
        t = not_null(j_32);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm h_59 (ATerm))
{
  ATerm x_2 (ATerm t)
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        {
          ATerm a_19 = t;
          int b_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(b_19);
            }
          else
            {
              t = a_19;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, x_2);
  t = h_59(t);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm h_33 = NULL;
  h_33 = t;
  t = SSL_string_to_int(not_null(h_33));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL;
  t_33 = t;
  p_33 :
  if(match_string(t_33, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(t_33) == AT_LIST) && ((ATermList) t_33 != ATempty)))
        {
          u_33 = ATgetFirst((ATermList) t_33);
          v_33 = (ATerm) ATgetNext((ATermList) t_33);
          s_33 :
          if(((ATgetType(v_33) == AT_LIST) && ((ATermList) v_33 != ATempty)))
            {
              w_33 = ATgetFirst((ATermList) v_33);
              x_33 = (ATerm) ATgetNext((ATermList) v_33);
              {
                ATerm g_34 = NULL;
                ATerm c_19;
                c_19 = t;
                {
                  t = not_null(u_33);
                  t = j_0(t);
                }
                t = c_19;
                {
                  ATerm h_34 = NULL;
                  t = not_null(w_33);
                  {
                    t = k_0(t);
                    {
                      h_34 = t;
                      if(((g_34 != NULL) && (g_34 != h_34)))
                        _fail(h_34);
                      else
                        g_34 = h_34;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_33)), not_null(g_34));
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
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_3 (ATerm t)
      {
        ATerm e_35 = NULL;
        e_35 = t;
        l_34 :
        if(!(match_string(e_35, "-i")))
          {
            if(!(match_string(e_35, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        ATerm h_35 = NULL;
        ATerm i_19;
        i_19 = t;
        {
          ATerm f_35 = NULL;
          ATerm g_35 = NULL;
          g_35 = t;
          if(((f_35 != NULL) && (f_35 != g_35)))
            _fail(g_35);
          else
            f_35 = g_35;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_e_13, not_null(f_35));
            t = set_config_0(t);
          }
        }
        t = i_19;
        {
          ATerm i_35 = NULL;
          i_35 = t;
          if(((h_35 != NULL) && (h_35 != i_35)))
            _fail(i_35);
          else
            h_35 = i_35;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_35));
        }
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        t = term_j_19;
        return(t);
      }
      t = ArgOption_3(t, c_3, d_3, e_3);
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
      {
        ATerm k_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_3 (ATerm t)
            {
              ATerm j_35 = NULL;
              j_35 = t;
              o_34 :
              if(!(match_string(j_35, "-o")))
                {
                  if(!(match_string(j_35, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm g_3 (ATerm t)
            {
              ATerm m_35 = NULL;
              ATerm m_19;
              m_19 = t;
              {
                ATerm k_35 = NULL;
                ATerm l_35 = NULL;
                l_35 = t;
                if(((k_35 != NULL) && (k_35 != l_35)))
                  _fail(l_35);
                else
                  k_35 = l_35;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_12, not_null(k_35));
                  t = set_config_0(t);
                }
              }
              t = m_19;
              {
                ATerm n_35 = NULL;
                n_35 = t;
                if(((m_35 != NULL) && (m_35 != n_35)))
                  _fail(n_35);
                else
                  m_35 = n_35;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_35));
              }
              return(t);
            }
            ATerm h_3 (ATerm t)
            {
              t = term_t_19;
              return(t);
            }
            t = ArgOption_3(t, f_3, g_3, h_3);
            LocalPopChoice(l_19);
          }
        else
          {
            t = k_19;
            {
              ATerm u_19 = t;
              int v_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_3 (ATerm t)
                  {
                    ATerm o_35 = NULL;
                    o_35 = t;
                    r_34 :
                    if(!(match_string(o_35, "-S")))
                      {
                        if(!(match_string(o_35, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm k_3 (ATerm t)
                  {
                    t = term_w_19;
                    t = set_config_0(t);
                    t = term_x_19;
                    return(t);
                  }
                  ATerm n_3 (ATerm t)
                  {
                    t = term_c_20;
                    return(t);
                  }
                  t = Option_3(t, i_3, k_3, n_3);
                  LocalPopChoice(v_19);
                }
              else
                {
                  t = u_19;
                  {
                    ATerm d_20 = t;
                    int e_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_3 (ATerm t)
                        {
                          ATerm p_35 = NULL;
                          p_35 = t;
                          s_34 :
                          if(!(match_string(p_35, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm p_3 (ATerm t)
                        {
                          ATerm s_35 = NULL;
                          ATerm f_20;
                          f_20 = t;
                          {
                            ATerm q_35 = NULL;
                            ATerm r_35 = NULL;
                            t = string_to_int_0(t);
                            {
                              r_35 = t;
                              if(((q_35 != NULL) && (q_35 != r_35)))
                                _fail(r_35);
                              else
                                q_35 = r_35;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_r_9, not_null(q_35));
                              t = set_config_0(t);
                            }
                          }
                          t = f_20;
                          {
                            ATerm t_35 = NULL;
                            t_35 = t;
                            if(((s_35 != NULL) && (s_35 != t_35)))
                              _fail(t_35);
                            else
                              s_35 = t_35;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(s_35));
                          }
                          return(t);
                        }
                        ATerm r_3 (ATerm t)
                        {
                          t = term_k_20;
                          return(t);
                        }
                        t = ArgOption_3(t, o_3, p_3, r_3);
                        LocalPopChoice(e_20);
                      }
                    else
                      {
                        t = d_20;
                        {
                          ATerm l_20 = t;
                          int m_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm s_3 (ATerm t)
                              {
                                ATerm u_35 = NULL;
                                u_35 = t;
                                z_34 :
                                if(!(match_string(u_35, "--keep")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm t_3 (ATerm t)
                              {
                                ATerm n_20;
                                n_20 = t;
                                {
                                  ATerm v_35 = NULL;
                                  ATerm w_35 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    w_35 = t;
                                    if(((v_35 != NULL) && (v_35 != w_35)))
                                      _fail(w_35);
                                    else
                                      v_35 = w_35;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_o_20, not_null(v_35));
                                    t = set_config_0(t);
                                  }
                                }
                                t = n_20;
                                return(t);
                              }
                              ATerm y_3 (ATerm t)
                              {
                                t = term_p_20;
                                return(t);
                              }
                              t = ArgOption_3(t, s_3, t_3, y_3);
                              LocalPopChoice(m_20);
                            }
                          else
                            {
                              t = l_20;
                              {
                                ATerm q_20 = t;
                                int r_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm z_3 (ATerm t)
                                    {
                                      ATerm x_35 = NULL;
                                      x_35 = t;
                                      b_35 :
                                      if(!(match_string(x_35, "-v")))
                                        {
                                          if(!(match_string(x_35, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm a_4 (ATerm t)
                                    {
                                      t = term_t_20;
                                      t = set_config_0(t);
                                      t = term_v_20;
                                      return(t);
                                    }
                                    ATerm b_4 (ATerm t)
                                    {
                                      t = term_w_20;
                                      return(t);
                                    }
                                    t = Option_3(t, z_3, a_4, b_4);
                                    LocalPopChoice(r_20);
                                  }
                                else
                                  {
                                    t = q_20;
                                    {
                                      ATerm x_20 = t;
                                      int y_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm c_4 (ATerm t)
                                          {
                                            ATerm y_35 = NULL;
                                            y_35 = t;
                                            c_35 :
                                            if(!(match_string(y_35, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm h_4 (ATerm t)
                                          {
                                            t = term_b_21;
                                            t = set_config_0(t);
                                            t = term_f_21;
                                            return(t);
                                          }
                                          ATerm i_4 (ATerm t)
                                          {
                                            t = term_g_21;
                                            return(t);
                                          }
                                          t = Option_3(t, c_4, h_4, i_4);
                                          LocalPopChoice(y_20);
                                        }
                                      else
                                        {
                                          t = x_20;
                                          {
                                            ATerm l_4 (ATerm t)
                                            {
                                              ATerm z_35 = NULL;
                                              z_35 = t;
                                              d_35 :
                                              if(!(match_string(z_35, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm m_4 (ATerm t)
                                            {
                                              t = term_i_21;
                                              t = set_config_0(t);
                                              t = term_k_21;
                                              return(t);
                                            }
                                            ATerm n_4 (ATerm t)
                                            {
                                              t = term_l_21;
                                              return(t);
                                            }
                                            t = Option_3(t, l_4, m_4, n_4);
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
ATerm term_to_adot_options_0 (ATerm t)
{
  ATerm m_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_4 (ATerm t)
      {
        ATerm p_36 = NULL;
        p_36 = t;
        n_36 :
        if(!(match_string(p_36, "--graph")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm p_4 (ATerm t)
      {
        t = term_s_21;
        t = set_config_0(t);
        t = term_w_21;
        return(t);
      }
      ATerm s_4 (ATerm t)
      {
        t = term_x_21;
        return(t);
      }
      t = Option_3(t, o_4, p_4, s_4);
      LocalPopChoice(p_21);
    }
  else
    {
      t = m_21;
      {
        ATerm v_4 (ATerm t)
        {
          ATerm q_36 = NULL;
          q_36 = t;
          o_36 :
          if(!(match_string(q_36, "--tree")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm z_4 (ATerm t)
        {
          t = term_y_21;
          t = set_config_0(t);
          t = term_z_21;
          return(t);
        }
        ATerm a_5 (ATerm t)
        {
          t = term_a_22;
          return(t);
        }
        t = Option_3(t, v_4, z_4, a_5);
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm u_36 = NULL;
  u_36 = t;
  t = SSL_table_destroy(not_null(u_36));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm y_36 = NULL;
  y_36 = t;
  t = SSL_implode_string(not_null(y_36));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_74 (ATerm))
{
  ATerm b_37 (ATerm t)
  {
    ATerm b_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, b_37);
        LocalPopChoice(g_22);
      }
    else
      {
        t = b_22;
        {
          t = Nil_0(t);
          t = f_74(t);
        }
      }
    return(t);
  }
  t = b_37(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm h_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(m_22);
    }
  else
    {
      t = h_22;
      {
        ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL;
        e_37 = t;
        d_37 :
        if(((ATgetType(e_37) == AT_LIST) && ((ATermList) e_37 != ATempty)))
          {
            f_37 = ATgetFirst((ATermList) e_37);
            g_37 = (ATerm) ATgetNext((ATermList) e_37);
            {
              t = not_null(f_37);
              {
                ATerm b_5 (ATerm t)
                {
                  t = not_null(g_37);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, b_5);
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
  ATerm m_37 = NULL;
  m_37 = t;
  t = SSL_explode_string(not_null(m_37));
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
ATerm long_description_1 (ATerm t, ATerm e_57 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_73 (ATerm))
{
  ATerm p_37 (ATerm t)
  {
    ATerm n_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(o_22);
      }
    else
      {
        t = n_22;
        t = Cons_2(t, q_73, p_37);
      }
    return(t);
  }
  t = p_37(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL;
  y_37 = t;
  v_37 :
  if(((ATgetType(y_37) == AT_LIST) && ((ATermList) y_37 != ATempty)))
    {
      w_37 = ATgetFirst((ATermList) y_37);
      x_37 = (ATerm) ATgetNext((ATermList) y_37);
      {
        ATerm b_38 = NULL;
        t = not_null(x_37);
        {
          ATerm p_22;
          p_22 = t;
          {
            ATerm c_38 = NULL,e_38 = NULL,g_38 = NULL;
            ATerm q_22;
            q_22 = t;
            {
              ATerm d_38 = NULL;
              t = i_0(t);
              {
                d_38 = t;
                if(((c_38 != NULL) && (c_38 != d_38)))
                  _fail(d_38);
                else
                  c_38 = d_38;
              }
            }
            t = q_22;
            {
              ATerm f_38 = NULL;
              t = not_null(w_37);
              {
                t = h_0(t);
                {
                  f_38 = t;
                  if(((e_38 != NULL) && (e_38 != f_38)))
                    _fail(f_38);
                  else
                    e_38 = f_38;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(c_38)), not_null(e_38));
                {
                  g_38 = t;
                  if(((b_38 != NULL) && (b_38 != g_38)))
                    _fail(g_38);
                  else
                    b_38 = g_38;
                }
              }
            }
          }
          t = p_22;
          {
            ATerm c_5 (ATerm t)
            {
              t = not_null(b_38);
              return(t);
            }
            t = reverse_acc_2(t, h_0, c_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) y_37 == ATempty))
        {
          {
            t = term_u_9;
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
  ATerm f_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, f_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm d_57 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm c_49 (ATerm))
{
  ATerm r_38 = NULL,s_38 = NULL;
  r_38 = t;
  q_38 :
  if(match_cons(r_38, sym_Program_1))
    {
      s_38 = ATgetArgument(r_38, 0);
      {
        ATerm v_38 = NULL,x_38 = NULL;
        ATerm w_38 = NULL;
        t = SSLgetAnnotations(not_null(r_38));
        {
          w_38 = t;
          if(((v_38 != NULL) && (v_38 != w_38)))
            _fail(w_38);
          else
            v_38 = w_38;
        }
        {
          t = not_null(s_38);
          {
            ATerm z_38 = NULL;
            t = c_49(t);
            {
              x_38 = t;
              {
                ATerm a_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_38)), not_null(v_38));
                {
                  a_39 = t;
                  if(((z_38 != NULL) && (z_38 != a_39)))
                    _fail(a_39);
                  else
                    z_38 = a_39;
                }
                t = not_null(z_38);
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
  ATerm j_39 = NULL;
  ATerm g_5 (ATerm t)
  {
    ATerm h_5 (ATerm t)
    {
      ATerm k_39 = NULL;
      k_39 = t;
      if(((j_39 != NULL) && (j_39 != k_39)))
        _fail(k_39);
      else
        j_39 = k_39;
      return(t);
    }
    t = Program_1(t, h_5);
    return(t);
  }
  t = option_defined_1(t, g_5);
  {
    ATerm m_5 (ATerm t)
    {
      ATerm l_39 = NULL;
      ATerm m_39 = NULL;
      t = term_u_9;
      {
        ATerm n_5 (ATerm t)
        {
          t = not_null(j_39);
          return(t);
        }
        t = short_description_1(t, n_5);
        {
          t = concat_strings_0(t);
          {
            m_39 = t;
            if(((l_39 != NULL) && (l_39 != m_39)))
              _fail(m_39);
            else
              l_39 = m_39;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATempty, not_null(l_39)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, m_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATempty, term_r_22));
      {
        t = printnl_0(t);
        {
          t = term_j_23;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm o_5 (ATerm t)
                {
                  ATerm n_39 = NULL;
                  n_39 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_39)), term_k_23));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, o_5);
                {
                  ATerm s_5 (ATerm t)
                  {
                    ATerm p_39 = NULL;
                    ATerm q_39 = NULL;
                    t = term_u_9;
                    {
                      ATerm t_5 (ATerm t)
                      {
                        t = not_null(j_39);
                        return(t);
                      }
                      t = long_description_1(t, t_5);
                      {
                        t = concat_strings_0(t);
                        {
                          q_39 = t;
                          if(((p_39 != NULL) && (p_39 != q_39)))
                            _fail(q_39);
                          else
                            p_39 = q_39;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_39)), term_l_23));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, s_5);
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
ATerm Undefined_1 (ATerm t, ATerm d_49 (ATerm))
{
  ATerm a_40 = NULL,b_40 = NULL;
  a_40 = t;
  z_39 :
  if(match_cons(a_40, sym_Undefined_1))
    {
      b_40 = ATgetArgument(a_40, 0);
      {
        ATerm e_40 = NULL,g_40 = NULL;
        ATerm f_40 = NULL;
        t = SSLgetAnnotations(not_null(a_40));
        {
          f_40 = t;
          if(((e_40 != NULL) && (e_40 != f_40)))
            _fail(f_40);
          else
            e_40 = f_40;
        }
        {
          t = not_null(b_40);
          {
            ATerm i_40 = NULL;
            t = d_49(t);
            {
              g_40 = t;
              {
                ATerm j_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(g_40)), not_null(e_40));
                {
                  j_40 = t;
                  if(((i_40 != NULL) && (i_40 != j_40)))
                    _fail(j_40);
                  else
                    i_40 = j_40;
                }
                t = not_null(i_40);
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
ATerm fetch_1 (ATerm t, ATerm z_73 (ATerm))
{
  ATerm o_40 (ATerm t)
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_73, _id);
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        t = Cons_2(t, _id, o_40);
      }
    return(t);
  }
  t = o_40(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_58 (ATerm))
{
  t = fetch_1(t, i_58);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm t_40 = NULL;
  t_40 = t;
  s_40 :
  if(match_cons(t_40, sym_Help_0))
    {
      ATerm v_40 = NULL,x_40 = NULL;
      ATerm o_23;
      o_23 = t;
      {
        ATerm w_40 = NULL;
        t = SSLgetAnnotations(not_null(t_40));
        {
          w_40 = t;
          if(((v_40 != NULL) && (v_40 != w_40)))
            _fail(w_40);
          else
            v_40 = w_40;
        }
      }
      t = o_23;
      {
        ATerm y_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(v_40));
        {
          y_40 = t;
          if(((x_40 != NULL) && (x_40 != y_40)))
            _fail(y_40);
          else
            x_40 = y_40;
        }
        t = not_null(x_40);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_76 (ATerm))
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_76(t);
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL;
  g_41 = t;
  f_41 :
  if(match_cons(g_41, sym__2))
    {
      h_41 = ATgetArgument(g_41, 0);
      i_41 = ATgetArgument(g_41, 1);
      t = SSL_table_get(not_null(h_41), not_null(i_41));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL;
  s_41 = t;
  o_41 :
  if(match_cons(s_41, sym__3))
    {
      t_41 = ATgetArgument(s_41, 0);
      u_41 = ATgetArgument(s_41, 1);
      v_41 = ATgetArgument(s_41, 2);
      {
        ATerm s_23;
        s_23 = t;
        {
          ATerm d_42 = NULL;
          ATerm e_42 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_41), not_null(u_41));
          {
            ATerm t_23 = t;
            int u_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(u_23);
              }
            else
              {
                t = t_23;
                t = (ATerm) ATempty;
              }
            {
              e_42 = t;
              if(((d_42 != NULL) && (d_42 != e_42)))
                _fail(e_42);
              else
                d_42 = e_42;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_41), not_null(u_41), (ATerm) ATinsert(CheckATermList(not_null(d_42)), not_null(v_41)));
            t = table_put_0(t);
          }
        }
        t = s_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm i_57 (ATerm))
{
  ATerm n_42 = NULL;
  ATerm o_42 = NULL;
  t = term_u_9;
  {
    t = i_57(t);
    {
      o_42 = t;
      if(((n_42 != NULL) && (n_42 != o_42)))
        _fail(o_42);
      else
        n_42 = o_42;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_x_22, term_c_23, not_null(n_42));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL;
  u_42 = t;
  t_42 :
  if(match_string(u_42, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(u_42) == AT_LIST) && ((ATermList) u_42 != ATempty)))
        {
          v_42 = ATgetFirst((ATermList) u_42);
          w_42 = (ATerm) ATgetNext((ATermList) u_42);
          {
            ATerm z_42 = NULL;
            ATerm v_23;
            v_23 = t;
            {
              t = not_null(v_42);
              t = a_0(t);
            }
            t = v_23;
            {
              ATerm a_43 = NULL;
              t = term_u_9;
              {
                t = b_0(t);
                {
                  a_43 = t;
                  if(((z_42 != NULL) && (z_42 != a_43)))
                    _fail(a_43);
                  else
                    z_42 = a_43;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(w_42)), not_null(z_42));
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
  ATerm y_5 (ATerm t)
  {
    ATerm g_43 = NULL;
    g_43 = t;
    e_43 :
    if(!(match_string(g_43, "--help")))
      {
        if(!(match_string(g_43, "-h")))
          {
            if(!(match_string(g_43, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    t = term_w_23;
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    t = term_b_24;
    return(t);
  }
  t = Option_3(t, y_5, z_5, a_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL,y_43 = NULL;
  q_43 = t;
  o_43 :
  if(((ATgetType(q_43) == AT_LIST) && ((ATermList) q_43 != ATempty)))
    {
      r_43 = ATgetFirst((ATermList) q_43);
      y_43 = (ATerm) ATgetNext((ATermList) q_43);
      t = (ATerm) ATinsert(CheckATermList(not_null(y_43)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(r_43)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm f_54 (ATerm), ATerm g_54 (ATerm))
{
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL;
  n_44 = t;
  m_44 :
  if(((ATgetType(n_44) == AT_LIST) && ((ATermList) n_44 != ATempty)))
    {
      o_44 = ATgetFirst((ATermList) n_44);
      p_44 = (ATerm) ATgetNext((ATermList) n_44);
      {
        ATerm t_44 = NULL,w_44 = NULL;
        ATerm u_44 = NULL;
        t = SSLgetAnnotations(not_null(n_44));
        {
          u_44 = t;
          if(((t_44 != NULL) && (t_44 != u_44)))
            _fail(u_44);
          else
            t_44 = u_44;
        }
        {
          t = not_null(o_44);
          {
            ATerm y_44 = NULL;
            t = f_54(t);
            {
              w_44 = t;
              {
                t = not_null(p_44);
                {
                  ATerm a_45 = NULL;
                  t = g_54(t);
                  {
                    y_44 = t;
                    {
                      ATerm b_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_44)), not_null(w_44)), not_null(t_44));
                      {
                        b_45 = t;
                        if(((a_45 != NULL) && (a_45 != b_45)))
                          _fail(b_45);
                        else
                          a_45 = b_45;
                      }
                      t = not_null(a_45);
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
  ATerm n_45 = NULL;
  n_45 = t;
  m_45 :
  if(((ATermList) n_45 == ATempty))
    {
      {
        ATerm p_45 = NULL,r_45 = NULL;
        ATerm f_24;
        f_24 = t;
        {
          ATerm q_45 = NULL;
          t = SSLgetAnnotations(not_null(n_45));
          {
            q_45 = t;
            if(((p_45 != NULL) && (p_45 != q_45)))
              _fail(q_45);
            else
              p_45 = q_45;
          }
        }
        t = f_24;
        {
          ATerm s_45 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(p_45));
          {
            s_45 = t;
            if(((r_45 != NULL) && (r_45 != s_45)))
              _fail(s_45);
            else
              r_45 = s_45;
          }
          t = not_null(r_45);
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
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL;
  y_45 = t;
  x_45 :
  if(match_cons(y_45, sym__2))
    {
      z_45 = ATgetArgument(y_45, 0);
      a_46 = ATgetArgument(y_45, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_q_8, not_null(z_45), not_null(a_46));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm g_57 (ATerm))
{
  ATerm l_24;
  l_24 = t;
  {
    ATerm b_6 (ATerm t)
    {
      t = term_m_24;
      t = g_57(t);
      return(t);
    }
    t = try_1(t, b_6);
  }
  t = l_24;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm j_46 = NULL;
      ATerm n_24;
      n_24 = t;
      {
        ATerm g_46 = NULL;
        ATerm h_46 = NULL;
        h_46 = t;
        if(((g_46 != NULL) && (g_46 != h_46)))
          _fail(h_46);
        else
          g_46 = h_46;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_24, not_null(g_46));
          t = set_config_0(t);
        }
      }
      t = n_24;
      {
        ATerm m_46 = NULL;
        m_46 = t;
        if(((j_46 != NULL) && (j_46 != m_46)))
          _fail(m_46);
        else
          j_46 = m_46;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_46));
      }
      return(t);
    }
    ATerm h_6 (ATerm t)
    {
      ATerm p_24 = t;
      int q_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_24 = t;
          int s_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(s_24);
            }
          else
            {
              t = r_24;
              {
                t = g_57(t);
                t = Cons_2(t, _id, h_6);
              }
            }
          LocalPopChoice(q_24);
        }
      else
        {
          t = p_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, g_6, h_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL;
  ATerm x_24;
  x_24 = t;
  {
    ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL;
    v_46 = t;
    r_46 :
    if(match_cons(v_46, sym__3))
      {
        w_46 = ATgetArgument(v_46, 0);
        x_46 = ATgetArgument(v_46, 1);
        y_46 = ATgetArgument(v_46, 2);
        {
          if(((s_46 != NULL) && (s_46 != w_46)))
            _fail(w_46);
          else
            s_46 = w_46;
          {
            if(((t_46 != NULL) && (t_46 != x_46)))
              _fail(x_46);
            else
              t_46 = x_46;
            {
              if(((u_46 != NULL) && (u_46 != y_46)))
                _fail(y_46);
              else
                u_46 = y_46;
              t = SSL_table_put(not_null(s_46), not_null(t_46), not_null(u_46));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = x_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm f_57 (ATerm))
{
  ATerm b_47 = NULL;
  ATerm y_24;
  y_24 = t;
  {
    t = term_z_24;
    t = table_put_0(t);
  }
  t = y_24;
  {
    ATerm i_6 (ATerm t)
    {
      ATerm d_25 = t;
      int f_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_57(t);
          LocalPopChoice(f_25);
        }
      else
        {
          t = d_25;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, i_6);
    {
      ATerm j_6 (ATerm t)
      {
        ATerm i_25 = t;
        int j_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_l_9;
                t = exit_0(t);
              }
            }
            LocalPopChoice(j_25);
          }
        else
          {
            t = i_25;
            {
              ATerm k_6 (ATerm t)
              {
                ATerm l_6 (ATerm t)
                {
                  ATerm c_47 = NULL;
                  c_47 = t;
                  if(((b_47 != NULL) && (b_47 != c_47)))
                    _fail(c_47);
                  else
                    b_47 = c_47;
                  return(t);
                }
                t = Undefined_1(t, l_6);
                return(t);
              }
              t = option_defined_1(t, k_6);
              {
                ATerm k_25;
                k_25 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_47)), term_l_25));
                  t = printnl_0(t);
                }
                t = k_25;
                {
                  t = system_usage_0(t);
                  {
                    t = term_a_8;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, j_6);
      {
        ATerm m_25;
        m_25 = t;
        {
          t = term_x_22;
          t = table_destroy_0(t);
        }
        t = m_25;
      }
    }
  }
  return(t);
}
ATerm term_to_dot_0 (ATerm t)
{
  ATerm o_6 (ATerm t)
  {
    ATerm n_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_to_adot_options_0(t);
        LocalPopChoice(q_25);
      }
    else
      {
        t = n_25;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, o_6);
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1(t, default_usage_0);
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
        {
          ATerm t_25 = t;
          int u_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_6 (ATerm t)
              {
                ATerm v_25 = t;
                int w_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_47 = NULL;
                    ATerm k_47 = NULL;
                    t = term_e_13;
                    {
                      t = get_config_0(t);
                      {
                        k_47 = t;
                        if(((j_47 != NULL) && (j_47 != k_47)))
                          _fail(k_47);
                        else
                          j_47 = k_47;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_47));
                    LocalPopChoice(w_25);
                  }
                else
                  {
                    t = v_25;
                    t = term_k_17;
                  }
                {
                  ATerm u_6 (ATerm t)
                  {
                    ATerm v_6 (ATerm t)
                    {
                      t = term_x_25;
                      return(t);
                    }
                    t = debug_1(t, v_6);
                    return(t);
                  }
                  t = if_verbose2_1(t, u_6);
                  {
                    t = read_from_0(t);
                    {
                      ATerm w_6 (ATerm t)
                      {
                        ATerm x_6 (ATerm t)
                        {
                          t = term_y_25;
                          return(t);
                        }
                        t = debug_1(t, x_6);
                        return(t);
                      }
                      t = if_verbose3_1(t, w_6);
                      {
                        t = to_adot_0(t);
                        {
                          ATerm y_6 (ATerm t)
                          {
                            ATerm z_6 (ATerm t)
                            {
                              t = term_z_25;
                              return(t);
                            }
                            t = debug_1(t, z_6);
                            return(t);
                          }
                          t = if_verbose3_1(t, y_6);
                          {
                            t = write_to_0(t);
                            {
                              ATerm b_7 (ATerm t)
                              {
                                ATerm f_7 (ATerm t)
                                {
                                  t = term_a_26;
                                  return(t);
                                }
                                t = debug_1(t, f_7);
                                return(t);
                              }
                              t = if_verbose3_1(t, b_7);
                              {
                                ATerm j_7 (ATerm t)
                                {
                                  t = term_b_26;
                                  return(t);
                                }
                                ATerm m_7 (ATerm t)
                                {
                                  ATerm l_47 = NULL;
                                  ATerm m_47 = NULL;
                                  t = term_r_26;
                                  {
                                    t = xtc_find_0(t);
                                    {
                                      m_47 = t;
                                      if(((l_47 != NULL) && (l_47 != m_47)))
                                        _fail(m_47);
                                      else
                                        l_47 = m_47;
                                    }
                                  }
                                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_47)), term_s_26);
                                  return(t);
                                }
                                t = xtc_transform_2(t, j_7, m_7);
                                {
                                  ATerm n_7 (ATerm t)
                                  {
                                    ATerm o_7 (ATerm t)
                                    {
                                      t = term_u_26;
                                      return(t);
                                    }
                                    t = debug_1(t, o_7);
                                    return(t);
                                  }
                                  t = if_verbose3_1(t, n_7);
                                  {
                                    ATerm p_7 (ATerm t)
                                    {
                                      t = term_v_26;
                                      return(t);
                                    }
                                    t = xtc_transform_1(t, p_7);
                                    {
                                      ATerm q_7 (ATerm t)
                                      {
                                        ATerm r_7 (ATerm t)
                                        {
                                          t = term_x_26;
                                          return(t);
                                        }
                                        t = debug_1(t, r_7);
                                        return(t);
                                      }
                                      t = if_verbose3_1(t, q_7);
                                      {
                                        ATerm u_7 (ATerm t)
                                        {
                                          ATerm y_26 = t;
                                          int z_26 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = term_z_12;
                                              t = get_config_0(t);
                                              LocalPopChoice(z_26);
                                            }
                                          else
                                            {
                                              t = y_26;
                                              {
                                                ATerm a_27 = t;
                                                int b_27 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm n_47 = NULL;
                                                    ATerm o_47 = NULL;
                                                    t = term_e_13;
                                                    {
                                                      t = get_config_0(t);
                                                      {
                                                        o_47 = t;
                                                        if(((n_47 != NULL) && (n_47 != o_47)))
                                                          _fail(o_47);
                                                        else
                                                          n_47 = o_47;
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(n_47), term_c_27);
                                                      t = conc_strings_0(t);
                                                    }
                                                    LocalPopChoice(b_27);
                                                  }
                                                else
                                                  {
                                                    t = a_27;
                                                    t = new_file_0(t);
                                                  }
                                              }
                                            }
                                          return(t);
                                        }
                                        t = rename_to_1(t, u_7);
                                        {
                                          ATerm v_7 (ATerm t)
                                          {
                                            ATerm x_7 (ATerm t)
                                            {
                                              t = term_d_27;
                                              return(t);
                                            }
                                            t = debug_1(t, x_7);
                                            return(t);
                                          }
                                          t = if_verbose1_1(t, v_7);
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
              t = xtc_temp_files_1(t, t_6);
              {
                ATerm y_7 (ATerm t)
                {
                  ATerm p_47 = NULL,r_47 = NULL;
                  ATerm e_27;
                  e_27 = t;
                  {
                    ATerm q_47 = NULL;
                    t = run_time_0(t);
                    {
                      q_47 = t;
                      if(((p_47 != NULL) && (p_47 != q_47)))
                        _fail(q_47);
                      else
                        p_47 = q_47;
                    }
                  }
                  t = e_27;
                  {
                    ATerm s_47 = NULL;
                    t = term_o_24;
                    {
                      t = get_config_0(t);
                      {
                        s_47 = t;
                        if(((r_47 != NULL) && (r_47 != s_47)))
                          _fail(s_47);
                        else
                          r_47 = s_47;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_27), not_null(p_47)), term_f_27), not_null(r_47)));
                      t = printnl_0(t);
                    }
                  }
                  return(t);
                }
                t = if_verbose1_1(t, y_7);
                {
                  t = term_l_9;
                  t = exit_0(t);
                }
              }
              LocalPopChoice(u_25);
            }
          else
            {
              t = t_25;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = term_to_dot_0(t);
  return(t);
}
