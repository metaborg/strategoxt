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
ATerm term_a_27;
ATerm term_z_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_i_25;
ATerm term_s_24;
ATerm term_l_24;
ATerm term_b_24;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_c_23;
ATerm term_x_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_s_21;
ATerm term_p_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_d_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_k_19;
ATerm term_f_19;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_l_18;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_l_17;
ATerm term_l_16;
ATerm term_h_16;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_q_13;
ATerm term_j_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_f_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_l_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_m_10;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_m_9;
ATerm term_f_9;
ATerm term_p_8;
ATerm term_l_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_r_5;
void init_constant_terms (void)
{
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_p_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_c_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_AttrId_2, term_o_14, term_w_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym__2, term_q_13, term_j_13);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_f_9);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_9);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i         Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym__2, term_p_20, term_t_9);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym__2, term_w_20, term_t_9);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym__2, term_b_21, term_t_9);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym__2, term_n_17, term_t_9);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym__2, term_l_17, term_t_9);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__2, term_p_22, term_q_22);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym__3, term_p_22, term_q_22, (ATerm) ATempty);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Input: ", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Term read: ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Abstract dot: ", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Written to file: ", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Dot-pretty.pp", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Box in: ", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Pretty-printed to: ", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol(".dot", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Output in: ", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
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
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm b_80 (ATerm));
ATerm term_to_tree_0 (ATerm);
ATerm to_adot_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
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
  t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATempty, term_y_7));
  {
    t = printnl_0(t);
    {
      t = term_z_7;
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
        ATerm a_8;
        a_8 = t;
        t = SSL_printnl(not_null(p_1), not_null(q_1));
        t = a_8;
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
  ATerm b_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(d_8);
    }
  else
    {
      t = b_8;
      {
        ATerm f_8 = t;
        int i_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, c_0);
            LocalPopChoice(i_8);
          }
        else
          {
            t = f_8;
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
                          ATerm j_8 = t;
                          int k_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(k_8);
                            }
                          else
                            {
                              t = j_8;
                              {
                                ATerm e_0 (ATerm t)
                                {
                                  t = term_l_8;
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
                            ATerm o_8;
                            o_8 = t;
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
                            t = o_8;
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
    t = (ATerm) ATmakeAppl(sym__2, term_p_8, not_null(j_3));
    {
      t = table_get_0(t);
      {
        ATerm f_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm q_8;
            q_8 = t;
            {
              ATerm l_3 = NULL;
              ATerm m_3 = NULL;
              m_3 = t;
              if(((l_3 != NULL) && (l_3 != m_3)))
                _fail(m_3);
              else
                l_3 = m_3;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_p_8, not_null(j_3), not_null(l_3));
                t = table_put_0(t);
              }
            }
            t = q_8;
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
        ATerm u_8 = t;
        int c_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(w_3), not_null(x_3));
            LocalPopChoice(c_9);
          }
        else
          {
            t = u_8;
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
  ATerm d_9 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = a_68(t);
      LocalPopChoice(e_9);
    }
  else
    {
      t = d_9;
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
      t = term_f_9;
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
    ATerm l_9;
    l_9 = t;
    {
      ATerm d_5 = NULL;
      ATerm e_5 = NULL;
      t = term_m_9;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_5), term_z_7);
        t = geq_0(t);
      }
    }
    t = l_9;
    t = x_79(t);
    return(t);
  }
  t = try_1(t, q_0);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm f_65 (ATerm))
{
  ATerm r_9;
  r_9 = t;
  {
    ATerm i_5 = NULL,k_5 = NULL;
    ATerm s_9;
    s_9 = t;
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
    t = s_9;
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
  t = r_9;
  return(t);
}
ATerm new_file_0 (ATerm t)
{
  ATerm p_5 = NULL;
  ATerm q_5 = NULL;
  t = term_t_9;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_5), term_u_9);
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
      ATerm a_10;
      a_10 = t;
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
      t = a_10;
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
        ATerm b_10 = t;
        int f_10 = stack_ptr;
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
                          t = (ATerm) ATmakeAppl(sym__2, term_g_10, not_null(g_7));
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
            t = term_g_10;
            LocalPopChoice(f_10);
          }
        else
          {
            t = b_10;
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
                    ATerm h_10 = t;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = h_10;
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
    ATerm i_10;
    i_10 = t;
    {
      ATerm s_7 = NULL;
      ATerm t_7 = NULL;
      t = term_m_9;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_7), term_j_10);
        t = geq_0(t);
      }
    }
    t = i_10;
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
  ATerm k_10;
  k_10 = t;
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
  t = k_10;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm t_8 = NULL;
  ATerm v_8 = NULL,w_8 = NULL;
  t_8 = t;
  {
    ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_m_10, (ATerm) ATmakeAppl(sym_Tool_1, not_null(t_8)));
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
        t = (ATerm) ATmakeAppl(sym__2, term_m_10, (ATerm) ATmakeAppl(sym_Tool_1, not_null(j_9)));
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
    t = term_q_10;
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
    ATerm r_10;
    r_10 = t;
    {
      ATerm o_10 = NULL;
      t = term_u_10;
      {
        o_10 = t;
        if(((n_10 != NULL) && (n_10 != o_10)))
          _fail(o_10);
        else
          n_10 = o_10;
      }
    }
    t = r_10;
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
    ATerm v_10;
    v_10 = t;
    {
      ATerm s_10 = NULL;
      ATerm t_10 = NULL;
      t = term_m_9;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_10), term_w_10);
        t = geq_0(t);
      }
    }
    t = v_10;
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
    ATerm y_10 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_10, (ATerm) ATmakeAppl(sym_Imported_1, not_null(x_10)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_10;
      }
    {
      ATerm b_11;
      b_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_m_10, term_c_11, not_null(x_10));
        t = table_put_0(t);
      }
      t = b_11;
      {
        ATerm c_1 (ATerm t)
        {
          ATerm d_1 (ATerm t)
          {
            t = term_d_11;
            return(t);
          }
          t = debug_1(t, d_1);
          return(t);
        }
        t = if_verbose4_1(t, c_1);
        {
          ATerm f_11 = t;
          int g_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(g_11);
            }
          else
            {
              t = f_11;
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
              t = (ATerm) ATmakeAppl(sym__2, term_m_10, not_null(z_10));
              {
                t = table_putlist_0(t);
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_m_10, (ATerm)ATmakeAppl(sym_Imported_1, not_null(x_10)), term_t_9);
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
  ATerm h_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_11;
      t = get_config_0(t);
      LocalPopChoice(k_11);
    }
  else
    {
      t = h_11;
      {
        ATerm q_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_s_11;
            t = getenv_0(t);
            LocalPopChoice(r_11);
          }
        else
          {
            t = q_11;
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
      t = term_t_11;
      return(t);
    }
    t = debug_1(t, f_1);
    return(t);
  }
  t = if_verbose5_1(t, e_1);
  {
    ATerm u_11;
    u_11 = t;
    {
      ATerm z_11 = t;
      int a_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_b_12;
          t = table_get_0(t);
          LocalPopChoice(a_12);
        }
      else
        {
          t = z_11;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = u_11;
    {
      ATerm g_1 (ATerm t)
      {
        ATerm h_1 (ATerm t)
        {
          t = term_c_12;
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
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_1 (ATerm t)
      {
        ATerm j_1 (ATerm t)
        {
          t = term_f_12;
          return(t);
        }
        t = debug_1(t, j_1);
        return(t);
      }
      t = if_verbose5_1(t, i_1);
      {
        t = xtc_load_0(t);
        {
          ATerm g_12 = t;
          int o_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(o_12);
            }
          else
            {
              t = g_12;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm k_1 (ATerm t)
            {
              ATerm l_1 (ATerm t)
              {
                t = term_f_12;
                return(t);
              }
              t = debug_1(t, l_1);
              return(t);
            }
            t = if_verbose5_1(t, k_1);
          }
        }
      }
      LocalPopChoice(e_12);
    }
  else
    {
      t = d_12;
      {
        ATerm i_11 = NULL;
        ATerm j_11 = NULL;
        j_11 = t;
        if(((i_11 != NULL) && (i_11 != j_11)))
          _fail(j_11);
        else
          i_11 = j_11;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_12), not_null(i_11)), term_t_12);
          {
            t = error_0(t);
            {
              ATerm m_1 (ATerm t)
              {
                t = term_m_10;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm n_1 (ATerm t)
                    {
                      t = term_v_12;
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
  ATerm w_12;
  w_12 = t;
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
  t = w_12;
  {
    ATerm x_12;
    x_12 = t;
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
    t = x_12;
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
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(m_12)), not_null(k_12)), term_y_12);
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
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(r_12)), not_null(p_12)), term_y_12), not_null(j_12)), term_z_12);
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
  ATerm e_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_transform_file_2(t, j_66, k_66);
      LocalPopChoice(f_13);
    }
  else
    {
      t = e_13;
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
        ATerm g_13;
        g_13 = t;
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
                    ATerm h_13 = t;
                    int i_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(r_13), term_j_13);
                        t = table_get_0(t);
                        LocalPopChoice(i_13);
                      }
                    else
                      {
                        t = h_13;
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
                                t = (ATerm) ATmakeAppl(sym__3, not_null(r_13), term_j_13, (ATerm) ATinsert(CheckATermList(not_null(t_13)), (ATerm) ATinsert(CheckATermList(not_null(s_13)), not_null(n_13))));
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
        t = g_13;
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
      ATerm p_13;
      p_13 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_14), term_t_9);
        {
          ATerm r_1 (ATerm t)
          {
            t = term_q_13;
            return(t);
          }
          t = assert_1(t, r_1);
        }
      }
      t = p_13;
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
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(u_14)), term_z_13), term_y_13);
        }
      else
        {
          if(match_int(t_14, 92))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(u_14)), term_y_13), term_y_13);
            }
          else
            {
              if(match_int(t_14, 34))
                {
                  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(u_14)), term_a_14), term_y_13);
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
      ATerm b_14 = t;
      int d_14 = stack_ptr;
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
          LocalPopChoice(d_14);
        }
      else
        {
          t = b_14;
          {
            ATerm e_14 = t;
            int f_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, b_15);
                LocalPopChoice(f_14);
              }
            else
              {
                t = e_14;
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
    ATerm g_14;
    g_14 = t;
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
    t = g_14;
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
    t = term_a_14;
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
        ATerm i_14 = t;
        int l_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_16 = NULL,j_16 = NULL,p_16 = NULL,r_16 = NULL;
            ATerm m_14;
            m_14 = t;
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
            t = m_14;
            {
              ATerm n_14;
              n_14 = t;
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
              t = n_14;
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
                t = (ATerm) ATinsert(CheckATermList(not_null(r_16)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_16)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_o_14, not_null(p_16)))))));
              }
            }
            LocalPopChoice(l_14);
          }
        else
          {
            t = i_14;
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
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_14), not_null(y_16)), term_p_14);
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
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_16)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_o_14, not_null(x_16)))))));
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
        ATerm v_14;
        v_14 = t;
        {
          t = not_null(g_18);
          t = is_list_0(t);
        }
        t = v_14;
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
          t = (ATerm) ATinsert(CheckATermList(not_null(j_18)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_18)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_x_14)))));
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
        ATerm y_14 = t;
        int z_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ListEdgeToDot_0(t);
            LocalPopChoice(z_14);
          }
        else
          {
            t = y_14;
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
    t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_a_15, not_null(u_18));
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
    t = (ATerm) ATmakeAppl(sym__2, term_c_15, not_null(d_19));
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
  ATerm e_15;
  e_15 = t;
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
  t = e_15;
  {
    ATerm f_15;
    f_15 = t;
    {
      ATerm q_19 = NULL;
      ATerm g_15 = t;
      int h_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_1 (ATerm t)
          {
            t = address_0(t);
            t = NodeId_0(t);
            return(t);
          }
          t = map_1(t, x_1);
          LocalPopChoice(h_15);
        }
      else
        {
          t = g_15;
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
    t = f_15;
    {
      ATerm s_19 = NULL;
      ATerm i_15 = t;
      int k_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = foldr_3(t, z_1, union_0, term_to_graph_0);
          LocalPopChoice(k_15);
        }
      else
        {
          t = i_15;
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
            ATerm p_15 = t;
            int q_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(e_21);
                LocalPopChoice(q_15);
              }
            else
              {
                t = p_15;
                {
                  ATerm r_15 = t;
                  int s_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_2 (ATerm t)
                      {
                        t = not_null(e_21);
                        return(t);
                      }
                      t = HdMember_p__2(t, j_69, c_2);
                      t = j_21(t);
                      LocalPopChoice(s_15);
                    }
                  else
                    {
                      t = r_15;
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
  ATerm t_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_68(t);
      LocalPopChoice(u_15);
    }
  else
    {
      t = t_15;
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
              ATerm v_15;
              v_15 = t;
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
              t = v_15;
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
ATerm gt_0 (ATerm t)
{
  ATerm p_25 = NULL,t_25 = NULL,u_25 = NULL;
  p_25 = t;
  o_25 :
  if(match_cons(p_25, sym__2))
    {
      t_25 = ATgetArgument(p_25, 0);
      u_25 = ATgetArgument(p_25, 1);
      {
        ATerm x_15;
        x_15 = t;
        {
          ATerm y_15 = t;
          int z_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_25), not_null(u_25));
              LocalPopChoice(z_15);
            }
          else
            {
              t = y_15;
              t = SSL_gtr(not_null(t_25), not_null(u_25));
            }
        }
        t = x_15;
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
  ATerm a_26 = NULL;
  ATerm a_16 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL;
      b_26 = t;
      z_25 :
      if(match_cons(b_26, sym__2))
        {
          c_26 = ATgetArgument(b_26, 0);
          d_26 = ATgetArgument(b_26, 1);
          {
            if(((a_26 != NULL) && (a_26 != c_26)))
              _fail(c_26);
            else
              a_26 = c_26;
            if(((a_26 != NULL) && (a_26 != d_26)))
              _fail(d_26);
            else
              a_26 = d_26;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(b_16);
    }
  else
    {
      t = a_16;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm b_80 (ATerm))
{
  ATerm d_2 (ATerm t)
  {
    ATerm g_16;
    g_16 = t;
    {
      ATerm g_26 = NULL;
      ATerm h_26 = NULL;
      t = term_m_9;
      {
        t = get_config_0(t);
        {
          h_26 = t;
          if(((g_26 != NULL) && (g_26 != h_26)))
            _fail(h_26);
          else
            g_26 = h_26;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_26), term_h_16);
        t = geq_0(t);
      }
    }
    t = g_16;
    t = b_80(t);
    return(t);
  }
  t = try_1(t, d_2);
  return(t);
}
ATerm term_to_tree_0 (ATerm t)
{
  ATerm t_26 = NULL,v_26 = NULL;
  ATerm e_2 (ATerm t)
  {
    ATerm f_2 (ATerm t)
    {
      t = term_l_16;
      return(t);
    }
    t = debug_1(t, f_2);
    return(t);
  }
  t = if_verbose5_1(t, e_2);
  {
    ATerm t_16;
    t_16 = t;
    {
      ATerm u_26 = NULL;
      t = new_0(t);
      {
        u_26 = t;
        if(((t_26 != NULL) && (t_26 != u_26)))
          _fail(u_26);
        else
          t_26 = u_26;
      }
    }
    t = t_16;
    {
      ATerm w_26 = NULL;
      w_26 = t;
      if(((v_26 != NULL) && (v_26 != w_26)))
        _fail(w_26);
      else
        v_26 = w_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_26), not_null(v_26));
        {
          ATerm r_27 (ATerm t)
          {
            ATerm i_27 = NULL,k_27 = NULL;
            ATerm g_2 (ATerm t)
            {
              ATerm v_16 = t;
              int w_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_2 (ATerm t)
                  {
                    ATerm y_26 = NULL,c_27 = NULL;
                    ATerm b_17;
                    b_17 = t;
                    {
                      ATerm b_27 = NULL;
                      t = new_0(t);
                      {
                        b_27 = t;
                        if(((y_26 != NULL) && (y_26 != b_27)))
                          _fail(b_27);
                        else
                          y_26 = b_27;
                      }
                    }
                    t = b_17;
                    {
                      ATerm d_27 = NULL;
                      d_27 = t;
                      if(((c_27 != NULL) && (c_27 != d_27)))
                        _fail(d_27);
                      else
                        c_27 = d_27;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(y_26), not_null(c_27));
                    }
                    return(t);
                  }
                  t = map_1(t, h_2);
                  LocalPopChoice(w_16);
                }
              else
                {
                  t = v_16;
                  {
                    ATerm j_2 (ATerm t)
                    {
                      ATerm e_27 = NULL,g_27 = NULL;
                      ATerm c_17;
                      c_17 = t;
                      {
                        ATerm f_27 = NULL;
                        t = new_0(t);
                        {
                          f_27 = t;
                          if(((e_27 != NULL) && (e_27 != f_27)))
                            _fail(f_27);
                          else
                            e_27 = f_27;
                        }
                      }
                      t = c_17;
                      {
                        ATerm h_27 = NULL;
                        h_27 = t;
                        if(((g_27 != NULL) && (g_27 != h_27)))
                          _fail(h_27);
                        else
                          g_27 = h_27;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(e_27), not_null(g_27));
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
              ATerm d_17;
              d_17 = t;
              {
                ATerm j_27 = NULL;
                ATerm k_2 (ATerm t)
                {
                  ATerm e_17 = t;
                  int f_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = map_1(t, Fst_0);
                      LocalPopChoice(f_17);
                    }
                  else
                    {
                      t = e_17;
                      t = _all(t, Fst_0);
                    }
                  return(t);
                }
                t = _2(t, _id, k_2);
                {
                  j_27 = t;
                  if(((i_27 != NULL) && (i_27 != j_27)))
                    _fail(j_27);
                  else
                    i_27 = j_27;
                }
              }
              t = d_17;
              {
                ATerm l_27 = NULL;
                t = Snd_0(t);
                {
                  ATerm g_17 = t;
                  int h_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_2 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = foldr_3(t, l_2, union_0, r_27);
                      LocalPopChoice(h_17);
                    }
                  else
                    {
                      t = g_17;
                      {
                        ATerm m_2 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        t = crush_3(t, m_2, union_0, r_27);
                      }
                    }
                  {
                    l_27 = t;
                    if(((k_27 != NULL) && (k_27 != l_27)))
                      _fail(l_27);
                    else
                      k_27 = l_27;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(k_27)), not_null(i_27));
              }
            }
            return(t);
          }
          t = r_27(t);
        }
      }
    }
  }
  return(t);
}
ATerm to_adot_0 (ATerm t)
{
  ATerm i_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_17;
      k_17 = t;
      {
        t = term_l_17;
        t = get_config_0(t);
      }
      t = k_17;
      t = term_to_tree_0(t);
      LocalPopChoice(j_17);
    }
  else
    {
      t = i_17;
      {
        ATerm m_17;
        m_17 = t;
        {
          t = term_n_17;
          t = get_config_0(t);
        }
        t = m_17;
        t = term_to_graph_0(t);
      }
    }
  t = graph_to_adot_0(t);
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm c_28 = NULL;
  c_28 = t;
  t = SSL_ReadFromFile(not_null(c_28));
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL;
  k_28 = t;
  j_28 :
  if(match_cons(k_28, sym_stdin_0))
    {
      ATerm m_28 = NULL;
      ATerm n_28 = NULL;
      t = term_o_17;
      {
        t = ReadFromFile_0(t);
        {
          n_28 = t;
          if(((m_28 != NULL) && (m_28 != n_28)))
            _fail(n_28);
          else
            m_28 = n_28;
        }
      }
      t = not_null(m_28);
    }
  else
    {
      if(match_cons(k_28, sym_FILE_1))
        {
          l_28 = ATgetArgument(k_28, 0);
          {
            ATerm p_28 = NULL;
            ATerm q_28 = NULL;
            t = not_null(l_28);
            {
              t = ReadFromFile_0(t);
              {
                q_28 = t;
                if(((p_28 != NULL) && (p_28 != q_28)))
                  _fail(q_28);
                else
                  p_28 = q_28;
              }
            }
            t = not_null(p_28);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
  x_28 = t;
  w_28 :
  if(((ATgetType(x_28) == AT_LIST) && ((ATermList) x_28 != ATempty)))
    {
      y_28 = ATgetFirst((ATermList) x_28);
      z_28 = (ATerm) ATgetNext((ATermList) x_28);
      t = not_null(z_28);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL;
  i_29 = t;
  h_29 :
  if(match_cons(i_29, sym__2))
    {
      j_29 = ATgetArgument(i_29, 0);
      k_29 = ATgetArgument(i_29, 1);
      {
        ATerm p_17;
        p_17 = t;
        {
          ATerm n_29 = NULL;
          ATerm o_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_29), not_null(k_29));
          {
            ATerm q_17 = t;
            int r_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(r_17);
              }
            else
              {
                t = q_17;
                t = (ATerm) ATempty;
              }
            {
              o_29 = t;
              if(((n_29 != NULL) && (n_29 != o_29)))
                _fail(o_29);
              else
                n_29 = o_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_29), not_null(k_29), not_null(n_29));
            t = table_put_0(t);
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
ATerm end_scope_1 (ATerm t, ATerm y_65 (ATerm))
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
  ATerm s_17;
  s_17 = t;
  {
    ATerm y_29 = NULL;
    ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
    t = y_65(t);
    {
      y_29 = t;
      {
        if(((w_29 != NULL) && (w_29 != y_29)))
          _fail(y_29);
        else
          w_29 = y_29;
        {
          ATerm t_17 = t;
          int u_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_29), term_j_13);
              t = table_get_0(t);
              LocalPopChoice(u_17);
            }
          else
            {
              t = t_17;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            z_29 = t;
            u_29 :
            if(((ATgetType(z_29) == AT_LIST) && ((ATermList) z_29 != ATempty)))
              {
                a_30 = ATgetFirst((ATermList) z_29);
                b_30 = (ATerm) ATgetNext((ATermList) z_29);
                {
                  if(((x_29 != NULL) && (x_29 != a_30)))
                    _fail(a_30);
                  else
                    x_29 = a_30;
                  {
                    if(((v_29 != NULL) && (v_29 != b_30)))
                      _fail(b_30);
                    else
                      v_29 = b_30;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(w_29), term_j_13, not_null(v_29));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(x_29);
                          {
                            ATerm n_2 (ATerm t)
                            {
                              ATerm c_30 = NULL;
                              c_30 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_29), not_null(c_30));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, n_2);
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
  t = s_17;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm i_30 = NULL;
  i_30 = t;
  t = SSL_remove(not_null(i_30));
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm x_65 (ATerm))
{
  ATerm n_30 = NULL;
  ATerm v_17;
  v_17 = t;
  {
    ATerm o_30 = NULL;
    ATerm p_30 = NULL;
    t = x_65(t);
    {
      o_30 = t;
      {
        if(((n_30 != NULL) && (n_30 != o_30)))
          _fail(o_30);
        else
          n_30 = o_30;
        {
          ATerm q_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_30), term_j_13);
          {
            ATerm a_18 = t;
            int b_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(b_18);
              }
            else
              {
                t = a_18;
                t = (ATerm) ATempty;
              }
            {
              q_30 = t;
              if(((p_30 != NULL) && (p_30 != q_30)))
                _fail(q_30);
              else
                p_30 = q_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_30), term_j_13, (ATerm) ATinsert(CheckATermList(not_null(p_30)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = v_17;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm g_66 (ATerm))
{
  ATerm v_30 = NULL,w_30 = NULL;
  ATerm o_2 (ATerm t)
  {
    t = term_q_13;
    return(t);
  }
  t = begin_scope_1(t, o_2);
  {
    t = g_66(t);
    {
      ATerm c_18;
      c_18 = t;
      {
        ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL;
        ATerm h_18 = t;
        int i_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_l_18;
            t = table_get_0(t);
            LocalPopChoice(i_18);
          }
        else
          {
            t = h_18;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          x_30 = t;
          u_30 :
          if(((ATgetType(x_30) == AT_LIST) && ((ATermList) x_30 != ATempty)))
            {
              y_30 = ATgetFirst((ATermList) x_30);
              z_30 = (ATerm) ATgetNext((ATermList) x_30);
              {
                if(((w_30 != NULL) && (w_30 != y_30)))
                  _fail(y_30);
                else
                  w_30 = y_30;
                {
                  if(((v_30 != NULL) && (v_30 != z_30)))
                    _fail(z_30);
                  else
                    v_30 = z_30;
                  {
                    t = not_null(w_30);
                    {
                      ATerm p_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, p_2);
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
      t = c_18;
      {
        ATerm u_2 (ATerm t)
        {
          t = term_q_13;
          return(t);
        }
        t = end_scope_1(t, u_2);
      }
    }
  }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm d_31 = NULL;
  ATerm n_18;
  n_18 = t;
  {
    ATerm v_2 (ATerm t)
    {
      ATerm e_31 = NULL,g_31 = NULL;
      e_31 = t;
      c_31 :
      if(match_cons(e_31, sym_Program_1))
        {
          g_31 = ATgetArgument(e_31, 0);
          if(((d_31 != NULL) && (d_31 != g_31)))
            _fail(g_31);
          else
            d_31 = g_31;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, v_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_18), not_null(d_31)), term_o_18));
      {
        t = printnl_0(t);
        {
          t = term_z_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = n_18;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm o_31 = NULL;
  o_31 = t;
  l_31 :
  if(match_cons(o_31, sym_Version_0))
    {
      ATerm q_31 = NULL,t_31 = NULL;
      ATerm q_18;
      q_18 = t;
      {
        ATerm r_31 = NULL;
        t = SSLgetAnnotations(not_null(o_31));
        {
          r_31 = t;
          if(((q_31 != NULL) && (q_31 != r_31)))
            _fail(r_31);
          else
            q_31 = r_31;
        }
      }
      t = q_18;
      {
        ATerm u_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(q_31));
        {
          u_31 = t;
          if(((t_31 != NULL) && (t_31 != u_31)))
            _fail(u_31);
          else
            t_31 = u_31;
        }
        t = not_null(t_31);
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
  ATerm w_2 (ATerm t)
  {
    ATerm r_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(t_18);
      }
    else
      {
        t = r_18;
        {
          ATerm w_18 = t;
          int x_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(x_18);
            }
          else
            {
              t = w_18;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, w_2);
  t = h_59(t);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm l_32 = NULL;
  l_32 = t;
  t = SSL_string_to_int(not_null(l_32));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL,s_33 = NULL,t_33 = NULL;
  n_33 = t;
  l_33 :
  if(match_string(n_33, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(n_33) == AT_LIST) && ((ATermList) n_33 != ATempty)))
        {
          o_33 = ATgetFirst((ATermList) n_33);
          p_33 = (ATerm) ATgetNext((ATermList) n_33);
          m_33 :
          if(((ATgetType(p_33) == AT_LIST) && ((ATermList) p_33 != ATempty)))
            {
              s_33 = ATgetFirst((ATermList) p_33);
              t_33 = (ATerm) ATgetNext((ATermList) p_33);
              {
                ATerm x_33 = NULL;
                ATerm y_18;
                y_18 = t;
                {
                  t = not_null(o_33);
                  t = j_0(t);
                }
                t = y_18;
                {
                  ATerm y_33 = NULL;
                  t = not_null(s_33);
                  {
                    t = k_0(t);
                    {
                      y_33 = t;
                      if(((x_33 != NULL) && (x_33 != y_33)))
                        _fail(y_33);
                      else
                        x_33 = y_33;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(t_33)), not_null(x_33));
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
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_2 (ATerm t)
      {
        ATerm a_35 = NULL;
        a_35 = t;
        h_34 :
        if(!(match_string(a_35, "-i")))
          {
            if(!(match_string(a_35, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_3 (ATerm t)
      {
        ATerm d_35 = NULL;
        ATerm c_19;
        c_19 = t;
        {
          ATerm b_35 = NULL;
          ATerm c_35 = NULL;
          c_35 = t;
          if(((b_35 != NULL) && (b_35 != c_35)))
            _fail(c_35);
          else
            b_35 = c_35;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_z_12, not_null(b_35));
            t = set_config_0(t);
          }
        }
        t = c_19;
        {
          ATerm e_35 = NULL;
          e_35 = t;
          if(((d_35 != NULL) && (d_35 != e_35)))
            _fail(e_35);
          else
            d_35 = e_35;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_35));
        }
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = term_f_19;
        return(t);
      }
      t = ArgOption_3(t, x_2, c_3, d_3);
      LocalPopChoice(b_19);
    }
  else
    {
      t = a_19;
      {
        ATerm g_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_3 (ATerm t)
            {
              ATerm f_35 = NULL;
              f_35 = t;
              k_34 :
              if(!(match_string(f_35, "-o")))
                {
                  if(!(match_string(f_35, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm f_3 (ATerm t)
            {
              ATerm i_35 = NULL;
              ATerm j_19;
              j_19 = t;
              {
                ATerm g_35 = NULL;
                ATerm h_35 = NULL;
                h_35 = t;
                if(((g_35 != NULL) && (g_35 != h_35)))
                  _fail(h_35);
                else
                  g_35 = h_35;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_12, not_null(g_35));
                  t = set_config_0(t);
                }
              }
              t = j_19;
              {
                ATerm j_35 = NULL;
                j_35 = t;
                if(((i_35 != NULL) && (i_35 != j_35)))
                  _fail(j_35);
                else
                  i_35 = j_35;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(i_35));
              }
              return(t);
            }
            ATerm g_3 (ATerm t)
            {
              t = term_k_19;
              return(t);
            }
            t = ArgOption_3(t, e_3, f_3, g_3);
            LocalPopChoice(i_19);
          }
        else
          {
            t = g_19;
            {
              ATerm l_19 = t;
              int m_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_3 (ATerm t)
                  {
                    ATerm k_35 = NULL;
                    k_35 = t;
                    n_34 :
                    if(!(match_string(k_35, "-S")))
                      {
                        if(!(match_string(k_35, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm i_3 (ATerm t)
                  {
                    t = term_t_19;
                    t = set_config_0(t);
                    t = term_u_19;
                    return(t);
                  }
                  ATerm k_3 (ATerm t)
                  {
                    t = term_v_19;
                    return(t);
                  }
                  t = Option_3(t, h_3, i_3, k_3);
                  LocalPopChoice(m_19);
                }
              else
                {
                  t = l_19;
                  {
                    ATerm w_19 = t;
                    int x_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_3 (ATerm t)
                        {
                          ATerm l_35 = NULL;
                          l_35 = t;
                          o_34 :
                          if(!(match_string(l_35, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm o_3 (ATerm t)
                        {
                          ATerm o_35 = NULL;
                          ATerm c_20;
                          c_20 = t;
                          {
                            ATerm m_35 = NULL;
                            ATerm n_35 = NULL;
                            t = string_to_int_0(t);
                            {
                              n_35 = t;
                              if(((m_35 != NULL) && (m_35 != n_35)))
                                _fail(n_35);
                              else
                                m_35 = n_35;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_m_9, not_null(m_35));
                              t = set_config_0(t);
                            }
                          }
                          t = c_20;
                          {
                            ATerm p_35 = NULL;
                            p_35 = t;
                            if(((o_35 != NULL) && (o_35 != p_35)))
                              _fail(p_35);
                            else
                              o_35 = p_35;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(o_35));
                          }
                          return(t);
                        }
                        ATerm p_3 (ATerm t)
                        {
                          t = term_d_20;
                          return(t);
                        }
                        t = ArgOption_3(t, n_3, o_3, p_3);
                        LocalPopChoice(x_19);
                      }
                    else
                      {
                        t = w_19;
                        {
                          ATerm e_20 = t;
                          int f_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_3 (ATerm t)
                              {
                                ATerm q_35 = NULL;
                                q_35 = t;
                                r_34 :
                                if(!(match_string(q_35, "--keep")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm s_3 (ATerm t)
                              {
                                ATerm k_20;
                                k_20 = t;
                                {
                                  ATerm r_35 = NULL;
                                  ATerm s_35 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    s_35 = t;
                                    if(((r_35 != NULL) && (r_35 != s_35)))
                                      _fail(s_35);
                                    else
                                      r_35 = s_35;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_l_20, not_null(r_35));
                                    t = set_config_0(t);
                                  }
                                }
                                t = k_20;
                                return(t);
                              }
                              ATerm t_3 (ATerm t)
                              {
                                t = term_m_20;
                                return(t);
                              }
                              t = ArgOption_3(t, r_3, s_3, t_3);
                              LocalPopChoice(f_20);
                            }
                          else
                            {
                              t = e_20;
                              {
                                ATerm n_20 = t;
                                int o_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm y_3 (ATerm t)
                                    {
                                      ATerm t_35 = NULL;
                                      t_35 = t;
                                      x_34 :
                                      if(!(match_string(t_35, "-v")))
                                        {
                                          if(!(match_string(t_35, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm z_3 (ATerm t)
                                    {
                                      t = term_q_20;
                                      t = set_config_0(t);
                                      t = term_r_20;
                                      return(t);
                                    }
                                    ATerm a_4 (ATerm t)
                                    {
                                      t = term_s_20;
                                      return(t);
                                    }
                                    t = Option_3(t, y_3, z_3, a_4);
                                    LocalPopChoice(o_20);
                                  }
                                else
                                  {
                                    t = n_20;
                                    {
                                      ATerm t_20 = t;
                                      int v_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm b_4 (ATerm t)
                                          {
                                            ATerm u_35 = NULL;
                                            u_35 = t;
                                            y_34 :
                                            if(!(match_string(u_35, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm c_4 (ATerm t)
                                          {
                                            t = term_x_20;
                                            t = set_config_0(t);
                                            t = term_y_20;
                                            return(t);
                                          }
                                          ATerm h_4 (ATerm t)
                                          {
                                            t = term_a_21;
                                            return(t);
                                          }
                                          t = Option_3(t, b_4, c_4, h_4);
                                          LocalPopChoice(v_20);
                                        }
                                      else
                                        {
                                          t = t_20;
                                          {
                                            ATerm i_4 (ATerm t)
                                            {
                                              ATerm v_35 = NULL;
                                              v_35 = t;
                                              z_34 :
                                              if(!(match_string(v_35, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm l_4 (ATerm t)
                                            {
                                              t = term_f_21;
                                              t = set_config_0(t);
                                              t = term_g_21;
                                              return(t);
                                            }
                                            ATerm m_4 (ATerm t)
                                            {
                                              t = term_h_21;
                                              return(t);
                                            }
                                            t = Option_3(t, i_4, l_4, m_4);
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
  ATerm i_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_4 (ATerm t)
      {
        ATerm g_36 = NULL;
        g_36 = t;
        d_36 :
        if(!(match_string(g_36, "--graph")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm o_4 (ATerm t)
      {
        t = term_l_21;
        t = set_config_0(t);
        t = term_m_21;
        return(t);
      }
      ATerm p_4 (ATerm t)
      {
        t = term_p_21;
        return(t);
      }
      t = Option_3(t, n_4, o_4, p_4);
      LocalPopChoice(k_21);
    }
  else
    {
      t = i_21;
      {
        ATerm s_4 (ATerm t)
        {
          ATerm h_36 = NULL;
          h_36 = t;
          e_36 :
          if(!(match_string(h_36, "--tree")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm v_4 (ATerm t)
        {
          t = term_s_21;
          t = set_config_0(t);
          t = term_w_21;
          return(t);
        }
        ATerm z_4 (ATerm t)
        {
          t = term_x_21;
          return(t);
        }
        t = Option_3(t, s_4, v_4, z_4);
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm o_36 = NULL;
  o_36 = t;
  t = SSL_table_destroy(not_null(o_36));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm u_36 = NULL;
  u_36 = t;
  t = SSL_implode_string(not_null(u_36));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_74 (ATerm))
{
  ATerm x_36 (ATerm t)
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, x_36);
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
        {
          t = Nil_0(t);
          t = f_74(t);
        }
      }
    return(t);
  }
  t = x_36(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      {
        ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
        a_37 = t;
        z_36 :
        if(((ATgetType(a_37) == AT_LIST) && ((ATermList) a_37 != ATempty)))
          {
            b_37 = ATgetFirst((ATermList) a_37);
            c_37 = (ATerm) ATgetNext((ATermList) a_37);
            {
              t = not_null(b_37);
              {
                ATerm a_5 (ATerm t)
                {
                  t = not_null(c_37);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, a_5);
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
  ATerm i_37 = NULL;
  i_37 = t;
  t = SSL_explode_string(not_null(i_37));
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
  ATerm l_37 (ATerm t)
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        t = Cons_2(t, q_73, l_37);
      }
    return(t);
  }
  t = l_37(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL;
  u_37 = t;
  r_37 :
  if(((ATgetType(u_37) == AT_LIST) && ((ATermList) u_37 != ATempty)))
    {
      s_37 = ATgetFirst((ATermList) u_37);
      t_37 = (ATerm) ATgetNext((ATermList) u_37);
      {
        ATerm x_37 = NULL;
        t = not_null(t_37);
        {
          ATerm m_22;
          m_22 = t;
          {
            ATerm y_37 = NULL,a_38 = NULL,c_38 = NULL;
            ATerm n_22;
            n_22 = t;
            {
              ATerm z_37 = NULL;
              t = i_0(t);
              {
                z_37 = t;
                if(((y_37 != NULL) && (y_37 != z_37)))
                  _fail(z_37);
                else
                  y_37 = z_37;
              }
            }
            t = n_22;
            {
              ATerm b_38 = NULL;
              t = not_null(s_37);
              {
                t = h_0(t);
                {
                  b_38 = t;
                  if(((a_38 != NULL) && (a_38 != b_38)))
                    _fail(b_38);
                  else
                    a_38 = b_38;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(y_37)), not_null(a_38));
                {
                  c_38 = t;
                  if(((x_37 != NULL) && (x_37 != c_38)))
                    _fail(c_38);
                  else
                    x_37 = c_38;
                }
              }
            }
          }
          t = m_22;
          {
            ATerm b_5 (ATerm t)
            {
              t = not_null(x_37);
              return(t);
            }
            t = reverse_acc_2(t, h_0, b_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) u_37 == ATempty))
        {
          {
            t = term_t_9;
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
  ATerm c_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, c_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm d_57 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm c_49 (ATerm))
{
  ATerm n_38 = NULL,o_38 = NULL;
  n_38 = t;
  m_38 :
  if(match_cons(n_38, sym_Program_1))
    {
      o_38 = ATgetArgument(n_38, 0);
      {
        ATerm r_38 = NULL,t_38 = NULL;
        ATerm s_38 = NULL;
        t = SSLgetAnnotations(not_null(n_38));
        {
          s_38 = t;
          if(((r_38 != NULL) && (r_38 != s_38)))
            _fail(s_38);
          else
            r_38 = s_38;
        }
        {
          t = not_null(o_38);
          {
            ATerm v_38 = NULL;
            t = c_49(t);
            {
              t_38 = t;
              {
                ATerm w_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(t_38)), not_null(r_38));
                {
                  w_38 = t;
                  if(((v_38 != NULL) && (v_38 != w_38)))
                    _fail(w_38);
                  else
                    v_38 = w_38;
                }
                t = not_null(v_38);
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
  ATerm f_39 = NULL;
  ATerm f_5 (ATerm t)
  {
    ATerm g_5 (ATerm t)
    {
      ATerm g_39 = NULL;
      g_39 = t;
      if(((f_39 != NULL) && (f_39 != g_39)))
        _fail(g_39);
      else
        f_39 = g_39;
      return(t);
    }
    t = Program_1(t, g_5);
    return(t);
  }
  t = option_defined_1(t, f_5);
  {
    ATerm h_5 (ATerm t)
    {
      ATerm h_39 = NULL;
      ATerm i_39 = NULL;
      t = term_t_9;
      {
        ATerm m_5 (ATerm t)
        {
          t = not_null(f_39);
          return(t);
        }
        t = short_description_1(t, m_5);
        {
          t = concat_strings_0(t);
          {
            i_39 = t;
            if(((h_39 != NULL) && (h_39 != i_39)))
              _fail(i_39);
            else
              h_39 = i_39;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATempty, not_null(h_39)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, h_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATempty, term_o_22));
      {
        t = printnl_0(t);
        {
          t = term_r_22;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm n_5 (ATerm t)
                {
                  ATerm j_39 = NULL;
                  j_39 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_39)), term_x_22));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, n_5);
                {
                  ATerm o_5 (ATerm t)
                  {
                    ATerm l_39 = NULL;
                    ATerm m_39 = NULL;
                    t = term_t_9;
                    {
                      ATerm s_5 (ATerm t)
                      {
                        t = not_null(f_39);
                        return(t);
                      }
                      t = long_description_1(t, s_5);
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
                      t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_39)), term_c_23));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, o_5);
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
  ATerm w_39 = NULL,x_39 = NULL;
  w_39 = t;
  v_39 :
  if(match_cons(w_39, sym_Undefined_1))
    {
      x_39 = ATgetArgument(w_39, 0);
      {
        ATerm a_40 = NULL,c_40 = NULL;
        ATerm b_40 = NULL;
        t = SSLgetAnnotations(not_null(w_39));
        {
          b_40 = t;
          if(((a_40 != NULL) && (a_40 != b_40)))
            _fail(b_40);
          else
            a_40 = b_40;
        }
        {
          t = not_null(x_39);
          {
            ATerm e_40 = NULL;
            t = d_49(t);
            {
              c_40 = t;
              {
                ATerm f_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(c_40)), not_null(a_40));
                {
                  f_40 = t;
                  if(((e_40 != NULL) && (e_40 != f_40)))
                    _fail(f_40);
                  else
                    e_40 = f_40;
                }
                t = not_null(e_40);
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
  ATerm k_40 (ATerm t)
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_73, _id);
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        t = Cons_2(t, _id, k_40);
      }
    return(t);
  }
  t = k_40(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_58 (ATerm))
{
  t = fetch_1(t, i_58);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm p_40 = NULL;
  p_40 = t;
  o_40 :
  if(match_cons(p_40, sym_Help_0))
    {
      ATerm r_40 = NULL,t_40 = NULL;
      ATerm l_23;
      l_23 = t;
      {
        ATerm s_40 = NULL;
        t = SSLgetAnnotations(not_null(p_40));
        {
          s_40 = t;
          if(((r_40 != NULL) && (r_40 != s_40)))
            _fail(s_40);
          else
            r_40 = s_40;
        }
      }
      t = l_23;
      {
        ATerm u_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(r_40));
        {
          u_40 = t;
          if(((t_40 != NULL) && (t_40 != u_40)))
            _fail(u_40);
          else
            t_40 = u_40;
        }
        t = not_null(t_40);
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
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_76(t);
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm a_41 = NULL,d_41 = NULL,e_41 = NULL;
  a_41 = t;
  z_40 :
  if(match_cons(a_41, sym__2))
    {
      d_41 = ATgetArgument(a_41, 0);
      e_41 = ATgetArgument(a_41, 1);
      t = SSL_table_get(not_null(d_41), not_null(e_41));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL;
  l_41 = t;
  k_41 :
  if(match_cons(l_41, sym__3))
    {
      m_41 = ATgetArgument(l_41, 0);
      n_41 = ATgetArgument(l_41, 1);
      o_41 = ATgetArgument(l_41, 2);
      {
        ATerm o_23;
        o_23 = t;
        {
          ATerm v_41 = NULL;
          ATerm w_41 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_41), not_null(n_41));
          {
            ATerm q_23 = t;
            int r_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(r_23);
              }
            else
              {
                t = q_23;
                t = (ATerm) ATempty;
              }
            {
              w_41 = t;
              if(((v_41 != NULL) && (v_41 != w_41)))
                _fail(w_41);
              else
                v_41 = w_41;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_41), not_null(n_41), (ATerm) ATinsert(CheckATermList(not_null(v_41)), not_null(o_41)));
            t = table_put_0(t);
          }
        }
        t = o_23;
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
  ATerm e_42 = NULL;
  ATerm k_42 = NULL;
  t = term_t_9;
  {
    t = i_57(t);
    {
      k_42 = t;
      if(((e_42 != NULL) && (e_42 != k_42)))
        _fail(k_42);
      else
        e_42 = k_42;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_p_22, term_q_22, not_null(e_42));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL;
  q_42 = t;
  p_42 :
  if(match_string(q_42, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(q_42) == AT_LIST) && ((ATermList) q_42 != ATempty)))
        {
          r_42 = ATgetFirst((ATermList) q_42);
          s_42 = (ATerm) ATgetNext((ATermList) q_42);
          {
            ATerm v_42 = NULL;
            ATerm s_23;
            s_23 = t;
            {
              t = not_null(r_42);
              t = a_0(t);
            }
            t = s_23;
            {
              ATerm w_42 = NULL;
              t = term_t_9;
              {
                t = b_0(t);
                {
                  w_42 = t;
                  if(((v_42 != NULL) && (v_42 != w_42)))
                    _fail(w_42);
                  else
                    v_42 = w_42;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_42)), not_null(v_42));
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
  ATerm t_5 (ATerm t)
  {
    ATerm b_43 = NULL;
    b_43 = t;
    a_43 :
    if(!(match_string(b_43, "--help")))
      {
        if(!(match_string(b_43, "-h")))
          {
            if(!(match_string(b_43, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = term_t_23;
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    t = term_u_23;
    return(t);
  }
  t = Option_3(t, t_5, y_5, z_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm e_43 = NULL,g_43 = NULL,n_43 = NULL;
  e_43 = t;
  d_43 :
  if(((ATgetType(e_43) == AT_LIST) && ((ATermList) e_43 != ATempty)))
    {
      g_43 = ATgetFirst((ATermList) e_43);
      n_43 = (ATerm) ATgetNext((ATermList) e_43);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_43)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_43)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm f_54 (ATerm), ATerm g_54 (ATerm))
{
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL;
  j_44 = t;
  i_44 :
  if(((ATgetType(j_44) == AT_LIST) && ((ATermList) j_44 != ATempty)))
    {
      k_44 = ATgetFirst((ATermList) j_44);
      l_44 = (ATerm) ATgetNext((ATermList) j_44);
      {
        ATerm p_44 = NULL,r_44 = NULL;
        ATerm q_44 = NULL;
        t = SSLgetAnnotations(not_null(j_44));
        {
          q_44 = t;
          if(((p_44 != NULL) && (p_44 != q_44)))
            _fail(q_44);
          else
            p_44 = q_44;
        }
        {
          t = not_null(k_44);
          {
            ATerm t_44 = NULL;
            t = f_54(t);
            {
              r_44 = t;
              {
                t = not_null(l_44);
                {
                  ATerm w_44 = NULL;
                  t = g_54(t);
                  {
                    t_44 = t;
                    {
                      ATerm x_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(t_44)), not_null(r_44)), not_null(p_44));
                      {
                        x_44 = t;
                        if(((w_44 != NULL) && (w_44 != x_44)))
                          _fail(x_44);
                        else
                          w_44 = x_44;
                      }
                      t = not_null(w_44);
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
  ATerm h_45 = NULL;
  h_45 = t;
  g_45 :
  if(((ATermList) h_45 == ATempty))
    {
      {
        ATerm j_45 = NULL,n_45 = NULL;
        ATerm v_23;
        v_23 = t;
        {
          ATerm m_45 = NULL;
          t = SSLgetAnnotations(not_null(h_45));
          {
            m_45 = t;
            if(((j_45 != NULL) && (j_45 != m_45)))
              _fail(m_45);
            else
              j_45 = m_45;
          }
        }
        t = v_23;
        {
          ATerm o_45 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(j_45));
          {
            o_45 = t;
            if(((n_45 != NULL) && (n_45 != o_45)))
              _fail(o_45);
            else
              n_45 = o_45;
          }
          t = not_null(n_45);
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
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL;
  u_45 = t;
  t_45 :
  if(match_cons(u_45, sym__2))
    {
      v_45 = ATgetArgument(u_45, 0);
      w_45 = ATgetArgument(u_45, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_8, not_null(v_45), not_null(w_45));
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
  ATerm w_23;
  w_23 = t;
  {
    ATerm a_6 (ATerm t)
    {
      t = term_b_24;
      t = g_57(t);
      return(t);
    }
    t = try_1(t, a_6);
  }
  t = w_23;
  {
    ATerm b_6 (ATerm t)
    {
      ATerm e_46 = NULL;
      ATerm f_24;
      f_24 = t;
      {
        ATerm c_46 = NULL;
        ATerm d_46 = NULL;
        d_46 = t;
        if(((c_46 != NULL) && (c_46 != d_46)))
          _fail(d_46);
        else
          c_46 = d_46;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_24, not_null(c_46));
          t = set_config_0(t);
        }
      }
      t = f_24;
      {
        ATerm f_46 = NULL;
        f_46 = t;
        if(((e_46 != NULL) && (e_46 != f_46)))
          _fail(f_46);
        else
          e_46 = f_46;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_46));
      }
      return(t);
    }
    ATerm g_6 (ATerm t)
    {
      ATerm m_24 = t;
      int n_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_24 = t;
          int p_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(p_24);
            }
          else
            {
              t = o_24;
              {
                t = g_57(t);
                t = Cons_2(t, _id, g_6);
              }
            }
          LocalPopChoice(n_24);
        }
      else
        {
          t = m_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_6, g_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL;
  ATerm q_24;
  q_24 = t;
  {
    ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL;
    r_46 = t;
    n_46 :
    if(match_cons(r_46, sym__3))
      {
        s_46 = ATgetArgument(r_46, 0);
        t_46 = ATgetArgument(r_46, 1);
        u_46 = ATgetArgument(r_46, 2);
        {
          if(((o_46 != NULL) && (o_46 != s_46)))
            _fail(s_46);
          else
            o_46 = s_46;
          {
            if(((p_46 != NULL) && (p_46 != t_46)))
              _fail(t_46);
            else
              p_46 = t_46;
            {
              if(((q_46 != NULL) && (q_46 != u_46)))
                _fail(u_46);
              else
                q_46 = u_46;
              t = SSL_table_put(not_null(o_46), not_null(p_46), not_null(q_46));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = q_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm f_57 (ATerm))
{
  ATerm x_46 = NULL;
  ATerm r_24;
  r_24 = t;
  {
    t = term_s_24;
    t = table_put_0(t);
  }
  t = r_24;
  {
    ATerm h_6 (ATerm t)
    {
      ATerm x_24 = t;
      int y_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_57(t);
          LocalPopChoice(y_24);
        }
      else
        {
          t = x_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, h_6);
    {
      ATerm i_6 (ATerm t)
      {
        ATerm z_24 = t;
        int d_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_f_9;
                t = exit_0(t);
              }
            }
            LocalPopChoice(d_25);
          }
        else
          {
            t = z_24;
            {
              ATerm j_6 (ATerm t)
              {
                ATerm k_6 (ATerm t)
                {
                  ATerm y_46 = NULL;
                  y_46 = t;
                  if(((x_46 != NULL) && (x_46 != y_46)))
                    _fail(y_46);
                  else
                    x_46 = y_46;
                  return(t);
                }
                t = Undefined_1(t, k_6);
                return(t);
              }
              t = option_defined_1(t, j_6);
              {
                ATerm f_25;
                f_25 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_46)), term_i_25));
                  t = printnl_0(t);
                }
                t = f_25;
                {
                  t = system_usage_0(t);
                  {
                    t = term_z_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, i_6);
      {
        ATerm j_25;
        j_25 = t;
        {
          t = term_p_22;
          t = table_destroy_0(t);
        }
        t = j_25;
      }
    }
  }
  return(t);
}
ATerm term_to_dot_0 (ATerm t)
{
  ATerm l_6 (ATerm t)
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_to_adot_options_0(t);
        LocalPopChoice(l_25);
      }
    else
      {
        t = k_25;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, l_6);
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1(t, default_usage_0);
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
        {
          ATerm q_25 = t;
          int r_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_6 (ATerm t)
              {
                ATerm s_25 = t;
                int v_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_47 = NULL;
                    ATerm g_47 = NULL;
                    t = term_z_12;
                    {
                      t = get_config_0(t);
                      {
                        g_47 = t;
                        if(((f_47 != NULL) && (f_47 != g_47)))
                          _fail(g_47);
                        else
                          f_47 = g_47;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_47));
                    LocalPopChoice(v_25);
                  }
                else
                  {
                    t = s_25;
                    t = term_o_17;
                  }
                {
                  ATerm t_6 (ATerm t)
                  {
                    ATerm u_6 (ATerm t)
                    {
                      t = term_w_25;
                      return(t);
                    }
                    t = debug_1(t, u_6);
                    return(t);
                  }
                  t = if_verbose3_1(t, t_6);
                  {
                    t = read_from_0(t);
                    {
                      ATerm v_6 (ATerm t)
                      {
                        ATerm w_6 (ATerm t)
                        {
                          t = term_x_25;
                          return(t);
                        }
                        t = debug_1(t, w_6);
                        return(t);
                      }
                      t = if_verbose3_1(t, v_6);
                      {
                        t = to_adot_0(t);
                        {
                          ATerm x_6 (ATerm t)
                          {
                            ATerm y_6 (ATerm t)
                            {
                              t = term_y_25;
                              return(t);
                            }
                            t = debug_1(t, y_6);
                            return(t);
                          }
                          t = if_verbose3_1(t, x_6);
                          {
                            t = write_to_0(t);
                            {
                              ATerm z_6 (ATerm t)
                              {
                                ATerm b_7 (ATerm t)
                                {
                                  t = term_e_26;
                                  return(t);
                                }
                                t = debug_1(t, b_7);
                                return(t);
                              }
                              t = if_verbose3_1(t, z_6);
                              {
                                ATerm f_7 (ATerm t)
                                {
                                  t = term_f_26;
                                  return(t);
                                }
                                ATerm j_7 (ATerm t)
                                {
                                  ATerm h_47 = NULL;
                                  ATerm i_47 = NULL;
                                  t = term_i_26;
                                  {
                                    t = xtc_find_0(t);
                                    {
                                      i_47 = t;
                                      if(((h_47 != NULL) && (h_47 != i_47)))
                                        _fail(i_47);
                                      else
                                        h_47 = i_47;
                                    }
                                  }
                                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_47)), term_j_26);
                                  return(t);
                                }
                                t = xtc_transform_2(t, f_7, j_7);
                                {
                                  ATerm m_7 (ATerm t)
                                  {
                                    ATerm n_7 (ATerm t)
                                    {
                                      t = term_k_26;
                                      return(t);
                                    }
                                    t = debug_1(t, n_7);
                                    return(t);
                                  }
                                  t = if_verbose3_1(t, m_7);
                                  {
                                    ATerm o_7 (ATerm t)
                                    {
                                      t = term_l_26;
                                      return(t);
                                    }
                                    t = xtc_transform_1(t, o_7);
                                    {
                                      ATerm p_7 (ATerm t)
                                      {
                                        ATerm q_7 (ATerm t)
                                        {
                                          t = term_m_26;
                                          return(t);
                                        }
                                        t = debug_1(t, q_7);
                                        return(t);
                                      }
                                      t = if_verbose3_1(t, p_7);
                                      {
                                        ATerm r_7 (ATerm t)
                                        {
                                          ATerm n_26 = t;
                                          int o_26 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = term_y_12;
                                              t = get_config_0(t);
                                              LocalPopChoice(o_26);
                                            }
                                          else
                                            {
                                              t = n_26;
                                              {
                                                ATerm p_26 = t;
                                                int q_26 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm j_47 = NULL;
                                                    ATerm k_47 = NULL;
                                                    t = term_z_12;
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
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(j_47), term_r_26);
                                                      t = conc_strings_0(t);
                                                    }
                                                    LocalPopChoice(q_26);
                                                  }
                                                else
                                                  {
                                                    t = p_26;
                                                    t = new_file_0(t);
                                                  }
                                              }
                                            }
                                          return(t);
                                        }
                                        t = rename_to_1(t, r_7);
                                        {
                                          ATerm u_7 (ATerm t)
                                          {
                                            ATerm v_7 (ATerm t)
                                            {
                                              t = term_s_26;
                                              return(t);
                                            }
                                            t = debug_1(t, v_7);
                                            return(t);
                                          }
                                          t = if_verbose1_1(t, u_7);
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
              t = xtc_temp_files_1(t, o_6);
              {
                ATerm x_7 (ATerm t)
                {
                  ATerm l_47 = NULL,n_47 = NULL;
                  ATerm x_26;
                  x_26 = t;
                  {
                    ATerm m_47 = NULL;
                    t = run_time_0(t);
                    {
                      m_47 = t;
                      if(((l_47 != NULL) && (l_47 != m_47)))
                        _fail(m_47);
                      else
                        l_47 = m_47;
                    }
                  }
                  t = x_26;
                  {
                    ATerm o_47 = NULL;
                    t = term_l_24;
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
                      t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_27), not_null(l_47)), term_z_26), not_null(n_47)));
                      t = printnl_0(t);
                    }
                  }
                  return(t);
                }
                t = if_verbose1_1(t, x_7);
                {
                  t = term_f_9;
                  t = exit_0(t);
                }
              }
              LocalPopChoice(r_25);
            }
          else
            {
              t = q_25;
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
