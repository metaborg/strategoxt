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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_CUT_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
Symbol sym_Scopes_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  init_constant_terms();
}
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_z_29;
ATerm term_j_29;
ATerm term_r_28;
ATerm term_f_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_x_26;
ATerm term_v_26;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_p_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_j_21;
ATerm term_g_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_r_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_d_20;
ATerm term_z_19;
ATerm term_x_18;
ATerm term_x_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_k_16;
ATerm term_d_16;
ATerm term_b_16;
ATerm term_s_15;
ATerm term_o_15;
ATerm term_q_14;
ATerm term_l_14;
ATerm term_k_13;
ATerm term_h_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_p_11;
ATerm term_z_10;
ATerm term_w_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_i_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_g_9;
ATerm term_d_9;
ATerm term_a_9;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_g_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_v_7;
ATerm term_q_7;
ATerm term_g_7;
ATerm term_f_7;
void init_constant_terms (void)
{
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym__2, term_g_7, term_q_7);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym__2, term_g_7, term_q_8);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_AttrId_2, term_w_12, term_c_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym__2, term_o_17, term_b_16);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym__2, term_z_7, term_j_20);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym__2, term_z_20, term_t_16);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym__2, term_g_21, term_t_16);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym__2, term_v_21, term_t_16);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym__2, term_s_15, term_t_16);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym__2, term_o_15, term_t_16);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym__2, term_s_24, term_t_24);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym__2, term_w_27, term_t_16);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym__3, term_s_24, term_t_24, (ATerm) ATempty);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Dot-pretty.pp", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_1 (ATerm, ATerm m_72 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm u_57 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm w_57 (ATerm));
ATerm set_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm f_58 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm u_72 (ATerm), ATerm v_72 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm l_72 (ATerm));
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm i_50 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm n_72 (ATerm), ATerm o_72 (ATerm));
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
ATerm string_as_chars_1 (ATerm, ATerm f_75 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm EdgeToDot_0 (ATerm);
ATerm ListEdgeToDot_0 (ATerm);
ATerm graph_to_adot_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm NodeId_0 (ATerm);
ATerm address_0 (ATerm);
ATerm term_to_graph_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm x_68 (ATerm), ATerm y_68 (ATerm));
ATerm union_1 (ATerm, ATerm t_68 (ATerm));
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm k_68 (ATerm), ATerm l_68 (ATerm), ATerm m_68 (ATerm));
ATerm foldr_3 (ATerm, ATerm m_69 (ATerm), ATerm n_69 (ATerm), ATerm o_69 (ATerm));
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm v_57 (ATerm));
ATerm term_to_tree_0 (ATerm);
ATerm to_adot_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm assert_1 (ATerm, ATerm d_73 (ATerm));
ATerm obsolete_1 (ATerm, ATerm r_73 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm xtc_io_transform_1 (ATerm, ATerm w_72 (ATerm));
ATerm rename_file_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm a_73 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm x_61 (ATerm), ATerm y_61 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm z_72 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm f_72 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm g_72 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm term_to_adot_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm k_69 (ATerm), ATerm l_69 (ATerm));
ATerm crush_2 (ATerm, ATerm i_68 (ATerm), ATerm j_68 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm r_57 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_76 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm s_78 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm r_78 (ATerm));
ATerm Program_1 (ATerm, ATerm v_54 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm l_73 (ATerm));
ATerm Undefined_1 (ATerm, ATerm w_54 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_63 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_77 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_63 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm m_48 (ATerm), ATerm n_48 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm k_73 (ATerm));
ATerm map_1 (ATerm, ATerm w_62 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_61 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm w_78 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm v_49 (ATerm), ATerm w_49 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm u_78 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm t_78 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm s_76 (ATerm), ATerm t_76 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm u_76 (ATerm), ATerm v_76 (ATerm));
ATerm term_to_dot_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_transform_1 (ATerm t, ATerm m_72 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, m_72, b_0);
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm c_0 = NULL;
  c_0 = t;
  t = SSL_table_keys(not_null(c_0));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm t_1 = NULL;
  t_1 = t;
  {
    t = table_keys_0(t);
    {
      ATerm e_0 (ATerm t)
      {
        ATerm n_2 = NULL;
        ATerm s_2 = NULL;
        n_2 = t;
        {
          ATerm t_2 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_1), not_null(n_2));
          {
            t = table_get_0(t);
            {
              t_2 = t;
              if(((s_2 != NULL) && (s_2 != t_2)))
                _fail(t_2);
              else
                s_2 = t_2;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_2), not_null(s_2));
        }
        return(t);
      }
      t = map_1(t, e_0);
    }
  }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm e_7;
  e_7 = t;
  {
    ATerm a_3 = NULL;
    ATerm b_3 = NULL;
    b_3 = t;
    if(((a_3 != NULL) && (a_3 != b_3)))
      _fail(b_3);
    else
      a_3 = b_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, not_null(a_3));
      t = printnl_0(t);
    }
  }
  t = e_7;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm h_3 = NULL;
  ATerm j_3 = NULL,k_3 = NULL;
  h_3 = t;
  {
    ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(h_3)));
    {
      t = table_get_0(t);
      {
        l_3 = t;
        f_3 :
        if(((ATgetType(l_3) == AT_LIST) && !(ATisEmpty(l_3))))
          {
            m_3 = ATgetFirst((ATermList) l_3);
            p_3 = (ATerm) ATgetNext((ATermList) l_3);
            g_3 :
            if(match_cons(m_3, sym__2))
              {
                n_3 = ATgetArgument(m_3, 0);
                o_3 = ATgetArgument(m_3, 1);
                {
                  if(((j_3 != NULL) && (j_3 != n_3)))
                    _fail(n_3);
                  else
                    j_3 = n_3;
                  if(((k_3 != NULL) && (k_3 != o_3)))
                    _fail(o_3);
                  else
                    k_3 = o_3;
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
    t = not_null(k_3);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL;
  w_3 = t;
  v_3 :
  if(match_cons(w_3, sym__2))
    {
      x_3 = ATgetArgument(w_3, 0);
      y_3 = ATgetArgument(w_3, 1);
      {
        ATerm b_4 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(x_3)));
        {
          t = table_get_0(t);
          {
            ATerm f_0 (ATerm t)
            {
              ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL;
              c_4 = t;
              u_3 :
              if(match_cons(c_4, sym__2))
                {
                  d_4 = ATgetArgument(c_4, 0);
                  e_4 = ATgetArgument(c_4, 1);
                  {
                    if(((y_3 != NULL) && (y_3 != d_4)))
                      _fail(d_4);
                    else
                      y_3 = d_4;
                    if(((b_4 != NULL) && (b_4 != e_4)))
                      _fail(e_4);
                    else
                      b_4 = e_4;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, f_0);
          }
        }
        t = not_null(b_4);
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
  ATerm h_7 = t;
  int i_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_7;
      {
        t = table_get_0(t);
        {
          ATerm p_0 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, p_0);
        }
      }
      LocalPopChoice(i_7);
    }
  else
    {
      t = h_7;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm u_57 (ATerm))
{
  ATerm w_7 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_7;
      y_7 = t;
      {
        ATerm i_4 = NULL;
        ATerm j_4 = NULL;
        t = term_z_7;
        {
          t = get_config_0(t);
          {
            j_4 = t;
            if(((i_4 != NULL) && (i_4 != j_4)))
              _fail(j_4);
            else
              i_4 = j_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_4), term_a_8);
          t = geq_0(t);
        }
      }
      t = y_7;
      t = u_57(t);
      LocalPopChoice(x_7);
    }
  else
    {
      t = w_7;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm w_57 (ATerm))
{
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_8;
      d_8 = t;
      {
        ATerm m_4 = NULL;
        ATerm n_4 = NULL;
        t = term_z_7;
        {
          t = get_config_0(t);
          {
            n_4 = t;
            if(((m_4 != NULL) && (m_4 != n_4)))
              _fail(n_4);
            else
              m_4 = n_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_4), term_g_8);
          t = geq_0(t);
        }
      }
      t = d_8;
      t = w_57(t);
      LocalPopChoice(c_8);
    }
  else
    {
      t = b_8;
      {
      }
    }
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm get_0 (ATerm t)
{
  t = table_get_0(t);
  return(t);
}
ATerm table_append_0 (ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL;
  t_4 = t;
  s_4 :
  if(match_cons(t_4, sym__3))
    {
      u_4 = ATgetArgument(t_4, 0);
      v_4 = ATgetArgument(t_4, 1);
      w_4 = ATgetArgument(t_4, 2);
      {
        ATerm l_8;
        l_8 = t;
        {
          ATerm a_5 = NULL;
          ATerm b_5 = NULL,d_5 = NULL;
          ATerm c_5 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_4), not_null(v_4));
          {
            ATerm m_8 = t;
            int n_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(n_8);
              }
            else
              {
                t = m_8;
                t = (ATerm) ATempty;
              }
            {
              c_5 = t;
              if(((b_5 != NULL) && (b_5 != c_5)))
                _fail(c_5);
              else
                b_5 = c_5;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_5), not_null(w_4));
            {
              t = union_1(t, eq_0);
              {
                d_5 = t;
                if(((a_5 != NULL) && (a_5 != d_5)))
                  _fail(d_5);
                else
                  a_5 = d_5;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_4), not_null(v_4), not_null(a_5));
            t = table_put_0(t);
          }
        }
        t = l_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm f_58 (ATerm))
{
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL;
  l_5 = t;
  k_5 :
  if(match_cons(l_5, sym__2))
    {
      m_5 = ATgetArgument(l_5, 0);
      n_5 = ATgetArgument(l_5, 1);
      {
        t = not_null(n_5);
        {
          ATerm q_0 (ATerm t)
          {
            ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL;
            q_5 = t;
            j_5 :
            if(match_cons(q_5, sym__2))
              {
                r_5 = ATgetArgument(q_5, 0);
                s_5 = ATgetArgument(q_5, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(m_5), not_null(r_5), not_null(s_5));
                  t = f_58(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, q_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm z_5 = NULL;
  ATerm b_6 = NULL;
  z_5 = t;
  {
    ATerm o_8 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(z_5)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_8;
      }
    {
      ATerm p_8;
      p_8 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_g_7, term_q_8, (ATerm) ATinsert(ATempty, not_null(z_5)));
        t = table_put_0(t);
      }
      t = p_8;
      {
        ATerm r_0 (ATerm t)
        {
          ATerm s_0 (ATerm t)
          {
            t = term_r_8;
            return(t);
          }
          t = debug_1(t, s_0);
          return(t);
        }
        t = if_verbose4_1(t, r_0);
        {
          ATerm v_8 = t;
          int w_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(w_8);
            }
          else
            {
              t = v_8;
              t = (ATerm) ATempty;
            }
          {
            ATerm t_0 (ATerm t)
            {
              ATerm u_0 (ATerm t)
              {
                t = term_a_9;
                return(t);
              }
              t = say_1(t, u_0);
              return(t);
            }
            t = if_verbose6_1(t, t_0);
            {
              ATerm c_6 = NULL;
              c_6 = t;
              if(((b_6 != NULL) && (b_6 != c_6)))
                _fail(c_6);
              else
                b_6 = c_6;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_g_7, not_null(b_6));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm v_0 (ATerm t)
                    {
                      ATerm w_0 (ATerm t)
                      {
                        t = term_d_9;
                        return(t);
                      }
                      t = say_1(t, w_0);
                      return(t);
                    }
                    t = if_verbose6_1(t, v_0);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_g_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(z_5)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm x_0 (ATerm t)
                          {
                            ATerm y_0 (ATerm t)
                            {
                              t = term_a_9;
                              return(t);
                            }
                            t = say_1(t, y_0);
                            return(t);
                          }
                          t = if_verbose4_1(t, x_0);
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
ATerm getenv_0 (ATerm t)
{
  ATerm g_6 = NULL;
  g_6 = t;
  t = SSL_getenv(not_null(g_6));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_9;
      t = get_config_0(t);
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      {
        ATerm h_9 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_o_9;
            t = getenv_0(t);
            LocalPopChoice(n_9);
          }
        else
          {
            t = h_9;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm a_1 (ATerm t)
    {
      t = term_p_9;
      return(t);
    }
    t = debug_1(t, a_1);
    return(t);
  }
  t = if_verbose5_1(t, z_0);
  {
    ATerm v_9;
    v_9 = t;
    {
      ATerm w_9 = t;
      int x_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_d_10;
          t = table_get_0(t);
          LocalPopChoice(x_9);
        }
      else
        {
          t = w_9;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = v_9;
    {
      ATerm b_1 (ATerm t)
      {
        ATerm c_1 (ATerm t)
        {
          t = term_e_10;
          return(t);
        }
        t = debug_1(t, c_1);
        return(t);
      }
      t = if_verbose5_1(t, b_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_1 (ATerm t)
      {
        ATerm e_1 (ATerm t)
        {
          t = term_i_10;
          return(t);
        }
        t = debug_1(t, e_1);
        return(t);
      }
      t = if_verbose5_1(t, d_1);
      {
        t = xtc_load_0(t);
        {
          ATerm j_10 = t;
          int k_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(k_10);
            }
          else
            {
              t = j_10;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm f_1 (ATerm t)
            {
              ATerm g_1 (ATerm t)
              {
                t = term_i_10;
                return(t);
              }
              t = debug_1(t, g_1);
              return(t);
            }
            t = if_verbose5_1(t, f_1);
          }
        }
      }
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      {
        ATerm k_6 = NULL;
        ATerm l_6 = NULL;
        l_6 = t;
        if(((k_6 != NULL) && (k_6 != l_6)))
          _fail(l_6);
        else
          k_6 = l_6;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_10), not_null(k_6)), term_p_10);
          {
            t = error_0(t);
            {
              ATerm h_1 (ATerm t)
              {
                t = term_g_7;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm i_1 (ATerm t)
                    {
                      t = term_r_10;
                      return(t);
                    }
                    t = debug_1(t, i_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, h_1);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm u_72 (ATerm), ATerm v_72 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, u_72, v_72);
    t = read_from_0(t);
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL;
  p_6 = t;
  o_6 :
  if(match_cons(p_6, sym__2))
    {
      q_6 = ATgetArgument(p_6, 0);
      r_6 = ATgetArgument(p_6, 1);
      t = SSL_call(not_null(q_6), not_null(r_6));
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
ATerm xtc_command_1 (ATerm t, ATerm l_72 (ATerm))
{
  ATerm x_6 = NULL;
  ATerm s_10;
  s_10 = t;
  {
    ATerm y_6 = NULL;
    t = l_72(t);
    {
      t = xtc_find_0(t);
      {
        y_6 = t;
        if(((x_6 != NULL) && (x_6 != y_6)))
          _fail(y_6);
        else
          x_6 = y_6;
      }
    }
  }
  t = s_10;
  {
    ATerm v_10;
    v_10 = t;
    {
      ATerm z_6 = NULL;
      ATerm a_7 = NULL;
      a_7 = t;
      if(((z_6 != NULL) && (z_6 != a_7)))
        _fail(a_7);
      else
        z_6 = a_7;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_6), not_null(z_6));
        t = call_0(t);
      }
    }
    t = v_10;
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm k_7 = NULL,l_7 = NULL;
  k_7 = t;
  j_7 :
  if(match_cons(k_7, sym_stdin_0))
    {
      ATerm m_7 = NULL;
      ATerm n_7 = NULL;
      ATerm o_7 = NULL;
      t = xtc_new_file_0(t);
      {
        n_7 = t;
        {
          if(((m_7 != NULL) && (m_7 != n_7)))
            _fail(n_7);
          else
            m_7 = n_7;
          {
            ATerm p_7 = NULL;
            t = o_0(t);
            {
              p_7 = t;
              if(((o_7 != NULL) && (o_7 != p_7)))
                _fail(p_7);
              else
                o_7 = p_7;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_7), (ATerm) ATinsert(ATinsert(ATempty, not_null(m_7)), term_w_10));
              {
                ATerm x_10 = t;
                int y_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(y_10);
                  }
                else
                  {
                    t = x_10;
                    t = conc_more_lists_0(t);
                  }
                t = xtc_command_1(t, n_0);
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_7));
    }
  else
    {
      if(match_cons(k_7, sym_FILE_1))
        {
          l_7 = ATgetArgument(k_7, 0);
          {
            ATerm r_7 = NULL;
            ATerm s_7 = NULL;
            t = not_null(l_7);
            {
              ATerm t_7 = NULL;
              t = xtc_new_file_0(t);
              {
                s_7 = t;
                {
                  if(((r_7 != NULL) && (r_7 != s_7)))
                    _fail(s_7);
                  else
                    r_7 = s_7;
                  {
                    ATerm u_7 = NULL;
                    t = o_0(t);
                    {
                      u_7 = t;
                      if(((t_7 != NULL) && (t_7 != u_7)))
                        _fail(u_7);
                      else
                        t_7 = u_7;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_7), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(r_7)), term_w_10), not_null(l_7)), term_z_10));
                      {
                        ATerm b_11 = t;
                        int c_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(c_11);
                          }
                        else
                          {
                            t = b_11;
                            t = conc_more_lists_0(t);
                          }
                        t = xtc_command_1(t, n_0);
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_7));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm stdin_0 (ATerm t)
{
  ATerm f_8 = NULL;
  f_8 = t;
  e_8 :
  if(match_cons(f_8, sym_stdin_0))
    {
      ATerm h_8 = NULL,j_8 = NULL;
      ATerm d_11;
      d_11 = t;
      {
        ATerm i_8 = NULL;
        t = SSLgetAnnotations(not_null(f_8));
        {
          i_8 = t;
          if(((h_8 != NULL) && (h_8 != i_8)))
            _fail(i_8);
          else
            h_8 = i_8;
        }
      }
      t = d_11;
      {
        ATerm k_8 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(h_8));
        {
          k_8 = t;
          if(((j_8 != NULL) && (j_8 != k_8)))
            _fail(k_8);
          else
            j_8 = k_8;
        }
        t = not_null(j_8);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm i_50 (ATerm))
{
  ATerm t_8 = NULL,u_8 = NULL;
  t_8 = t;
  s_8 :
  if(match_cons(t_8, sym_FILE_1))
    {
      u_8 = ATgetArgument(t_8, 0);
      {
        ATerm x_8 = NULL,z_8 = NULL;
        ATerm y_8 = NULL;
        t = SSLgetAnnotations(not_null(t_8));
        {
          y_8 = t;
          if(((x_8 != NULL) && (x_8 != y_8)))
            _fail(y_8);
          else
            x_8 = y_8;
        }
        {
          t = not_null(u_8);
          {
            ATerm b_9 = NULL;
            t = i_50(t);
            {
              z_8 = t;
              {
                ATerm c_9 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(z_8)), not_null(x_8));
                {
                  c_9 = t;
                  if(((b_9 != NULL) && (b_9 != c_9)))
                    _fail(c_9);
                  else
                    b_9 = c_9;
                }
                t = not_null(b_9);
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
ATerm xtc_transform_2 (ATerm t, ATerm n_72 (ATerm), ATerm o_72 (ATerm))
{
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_11 = t;
      int l_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(l_11);
        }
      else
        {
          t = k_11;
          t = stdin_0(t);
        }
      LocalPopChoice(f_11);
      t = xtc_transform_file_2(t, n_72, o_72);
    }
  else
    {
      t = e_11;
      t = xtc_transform_term_2(t, n_72, o_72);
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
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
  k_9 = t;
  i_9 :
  if(((ATgetType(k_9) == AT_LIST) && !(ATisEmpty(k_9))))
    {
      l_9 = ATgetFirst((ATermList) k_9);
      m_9 = (ATerm) ATgetNext((ATermList) k_9);
      j_9 :
      if(match_int(l_9, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(m_9)), term_x_11), term_p_11);
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
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
  s_9 = t;
  q_9 :
  if(((ATgetType(s_9) == AT_LIST) && !(ATisEmpty(s_9))))
    {
      t_9 = ATgetFirst((ATermList) s_9);
      u_9 = (ATerm) ATgetNext((ATermList) s_9);
      r_9 :
      if(match_int(t_9, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(u_9)), term_p_11), term_p_11);
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
  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL;
  a_10 = t;
  y_9 :
  if(((ATgetType(a_10) == AT_LIST) && !(ATisEmpty(a_10))))
    {
      b_10 = ATgetFirst((ATermList) a_10);
      c_10 = (ATerm) ATgetNext((ATermList) a_10);
      z_9 :
      if(match_int(b_10, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(c_10)), term_z_11), term_p_11);
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
  ATerm a_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      LocalPopChoice(f_12);
    }
  else
    {
      t = a_12;
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm i_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0(t);
      {
        ATerm j_1 (ATerm t)
        {
          t = Cons_2(t, _id, escape_chars_0);
          return(t);
        }
        t = Cons_2(t, _id, j_1);
      }
      LocalPopChoice(j_12);
    }
  else
    {
      t = i_12;
      {
        ATerm k_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            LocalPopChoice(l_12);
          }
        else
          {
            t = k_12;
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
  ATerm h_10 = NULL;
  h_10 = t;
  t = SSL_is_int(not_null(h_10));
  return(t);
}
ATerm quote_chars_0 (ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL;
  m_10 = t;
  l_10 :
  if(match_cons(m_10, sym__2))
    {
      n_10 = ATgetArgument(m_10, 0);
      o_10 = ATgetArgument(m_10, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_10)), not_null(n_10)), (ATerm) ATinsert(ATempty, not_null(n_10)));
        {
          ATerm m_12 = t;
          int n_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_two_lists_0(t);
              LocalPopChoice(n_12);
            }
          else
            {
              t = m_12;
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
  ATerm t_10 = NULL;
  ATerm u_10 = NULL;
  u_10 = t;
  if(((t_10 != NULL) && (t_10 != u_10)))
    _fail(u_10);
  else
    t_10 = u_10;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_11, not_null(t_10));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm f_75 (ATerm))
{
  t = explode_string_0(t);
  {
    t = f_75(t);
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
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
  h_11 = t;
  g_11 :
  if(match_cons(h_11, sym__2))
    {
      i_11 = ATgetArgument(h_11, 0);
      j_11 = ATgetArgument(h_11, 1);
      {
        ATerm o_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_11 = NULL,n_11 = NULL,t_11 = NULL,v_11 = NULL;
            ATerm q_12;
            q_12 = t;
            {
              ATerm o_11 = NULL;
              ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL;
              t = not_null(j_11);
              {
                o_11 = t;
                {
                  t = SSL_explode_term(not_null(o_11));
                  {
                    q_11 = t;
                    a_11 :
                    if(match_cons(q_11, sym__2))
                      {
                        r_11 = ATgetArgument(q_11, 0);
                        s_11 = ATgetArgument(q_11, 1);
                        {
                          if(((m_11 != NULL) && (m_11 != r_11)))
                            _fail(r_11);
                          else
                            m_11 = r_11;
                          if(((n_11 != NULL) && (n_11 != s_11)))
                            _fail(s_11);
                          else
                            n_11 = s_11;
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
            t = q_12;
            {
              ATerm v_12;
              v_12 = t;
              {
                ATerm u_11 = NULL;
                t = not_null(m_11);
                {
                  t = string_as_chars_1(t, escape_chars_0);
                  {
                    t = string_as_chars_1(t, double_quote_chars_0);
                    {
                      u_11 = t;
                      if(((t_11 != NULL) && (t_11 != u_11)))
                        _fail(u_11);
                      else
                        t_11 = u_11;
                    }
                  }
                }
              }
              t = v_12;
              {
                ATerm y_11 = NULL;
                t = not_null(n_11);
                {
                  ATerm k_1 (ATerm t)
                  {
                    ATerm w_11 = NULL;
                    w_11 = t;
                    t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_11)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(w_11)))));
                    return(t);
                  }
                  t = map_1(t, k_1);
                  {
                    y_11 = t;
                    if(((v_11 != NULL) && (v_11 != y_11)))
                      _fail(y_11);
                    else
                      v_11 = y_11;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(v_11)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_11)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_w_12, not_null(t_11)))))));
              }
            }
            LocalPopChoice(p_12);
          }
        else
          {
            t = o_12;
            {
              ATerm b_12 = NULL;
              ATerm c_12 = NULL,e_12 = NULL;
              t = not_null(j_11);
              {
                t = is_int_0(t);
                {
                  ATerm d_12 = NULL;
                  t = not_null(j_11);
                  {
                    t = int_to_string_0(t);
                    {
                      t = string_as_chars_1(t, escape_chars_0);
                      {
                        d_12 = t;
                        if(((c_12 != NULL) && (c_12 != d_12)))
                          _fail(d_12);
                        else
                          c_12 = d_12;
                      }
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_12), not_null(c_12)), term_z_12);
                    {
                      t = concat_strings_0(t);
                      {
                        e_12 = t;
                        if(((b_12 != NULL) && (b_12 != e_12)))
                          _fail(e_12);
                        else
                          b_12 = e_12;
                      }
                    }
                  }
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_11)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_w_12, not_null(b_12)))))));
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
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
  s_12 = t;
  r_12 :
  if(match_cons(s_12, sym__2))
    {
      t_12 = ATgetArgument(s_12, 0);
      u_12 = ATgetArgument(s_12, 1);
      {
        ATerm x_12 = NULL;
        ATerm b_13;
        b_13 = t;
        {
          t = not_null(u_12);
          t = is_list_0(t);
        }
        t = b_13;
        {
          ATerm a_13 = NULL;
          t = not_null(u_12);
          {
            ATerm l_1 (ATerm t)
            {
              ATerm y_12 = NULL;
              y_12 = t;
              t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_12)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(y_12)))));
              return(t);
            }
            t = map_1(t, l_1);
            {
              a_13 = t;
              if(((x_12 != NULL) && (x_12 != a_13)))
                _fail(a_13);
              else
                x_12 = a_13;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(x_12)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_12)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_d_13)))));
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
  ATerm g_13 = NULL;
  ATerm i_13 = NULL;
  g_13 = t;
  {
    ATerm j_13 = NULL;
    t = not_null(g_13);
    {
      ATerm m_1 (ATerm t)
      {
        ATerm e_13 = t;
        int f_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ListEdgeToDot_0(t);
            LocalPopChoice(f_13);
          }
        else
          {
            t = e_13;
            t = EdgeToDot_0(t);
          }
        return(t);
      }
      t = map_1(t, m_1);
      {
        t = concat_0(t);
        {
          j_13 = t;
          if(((i_13 != NULL) && (i_13 != j_13)))
            _fail(j_13);
          else
            i_13 = j_13;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_h_13, not_null(i_13));
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm n_13 = NULL;
  n_13 = t;
  t = SSL_int_to_string(not_null(n_13));
  return(t);
}
ATerm NodeId_0 (ATerm t)
{
  ATerm r_13 = NULL;
  ATerm s_13 = NULL;
  t = int_to_string_0(t);
  {
    s_13 = t;
    if(((r_13 != NULL) && (r_13 != s_13)))
      _fail(s_13);
    else
      r_13 = s_13;
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, term_k_13, not_null(r_13));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm address_0 (ATerm t)
{
  ATerm v_13 = NULL;
  v_13 = t;
  t = SSL_address(not_null(v_13));
  return(t);
}
ATerm term_to_graph_0 (ATerm t)
{
  ATerm b_14 = NULL,d_14 = NULL,f_14 = NULL;
  ATerm l_13;
  l_13 = t;
  {
    ATerm c_14 = NULL;
    t = address_0(t);
    {
      t = NodeId_0(t);
      {
        c_14 = t;
        if(((b_14 != NULL) && (b_14 != c_14)))
          _fail(c_14);
        else
          b_14 = c_14;
      }
    }
  }
  t = l_13;
  {
    ATerm m_13;
    m_13 = t;
    {
      ATerm e_14 = NULL;
      ATerm o_13 = t;
      int p_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_1 (ATerm t)
          {
            t = address_0(t);
            t = NodeId_0(t);
            return(t);
          }
          t = map_1(t, n_1);
          LocalPopChoice(p_13);
        }
      else
        {
          t = o_13;
          {
            ATerm o_1 (ATerm t)
            {
              t = address_0(t);
              t = NodeId_0(t);
              return(t);
            }
            t = _all(t, o_1);
          }
        }
      {
        e_14 = t;
        if(((d_14 != NULL) && (d_14 != e_14)))
          _fail(e_14);
        else
          d_14 = e_14;
      }
    }
    t = m_13;
    {
      ATerm g_14 = NULL;
      ATerm q_13 = t;
      int t_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm q_1 (ATerm t)
          {
            t = union_1(t, eq_0);
            return(t);
          }
          t = foldr_3(t, p_1, q_1, term_to_graph_0);
          LocalPopChoice(t_13);
        }
      else
        {
          t = q_13;
          {
            ATerm r_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            ATerm s_1 (ATerm t)
            {
              t = union_1(t, eq_0);
              return(t);
            }
            t = crush_3(t, r_1, s_1, term_to_graph_0);
          }
        }
      {
        g_14 = t;
        if(((f_14 != NULL) && (f_14 != g_14)))
          _fail(g_14);
        else
          f_14 = g_14;
      }
      t = (ATerm) ATinsert(CheckATermList(not_null(f_14)), (ATerm) ATmakeAppl(sym__2, not_null(b_14), not_null(d_14)));
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
  n_14 = t;
  m_14 :
  if(match_cons(n_14, sym__2))
    {
      o_14 = ATgetArgument(n_14, 0);
      p_14 = ATgetArgument(n_14, 1);
      if(((o_14 != NULL) && (o_14 != p_14)))
        _fail(p_14);
      else
        o_14 = p_14;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm x_68 (ATerm), ATerm y_68 (ATerm))
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
  v_14 = t;
  u_14 :
  if(((ATgetType(v_14) == AT_LIST) && !(ATisEmpty(v_14))))
    {
      w_14 = ATgetFirst((ATermList) v_14);
      x_14 = (ATerm) ATgetNext((ATermList) v_14);
      {
        t = y_68(t);
        {
          ATerm u_1 (ATerm t)
          {
            ATerm a_15 = NULL;
            a_15 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_14), not_null(a_15));
              t = x_68(t);
            }
            return(t);
          }
          t = fetch_1(t, u_1);
        }
        t = not_null(x_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm t_68 (ATerm))
{
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL;
  g_15 = t;
  f_15 :
  if(match_cons(g_15, sym__2))
    {
      h_15 = ATgetArgument(g_15, 0);
      i_15 = ATgetArgument(g_15, 1);
      {
        t = not_null(h_15);
        {
          ATerm m_15 (ATerm t)
          {
            ATerm u_13 = t;
            int w_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(i_15);
                LocalPopChoice(w_13);
              }
            else
              {
                t = u_13;
                {
                  ATerm x_13 = t;
                  int y_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_1 (ATerm t)
                      {
                        t = not_null(i_15);
                        return(t);
                      }
                      t = HdMember_p__2(t, t_68, v_1);
                      t = m_15(t);
                      LocalPopChoice(y_13);
                    }
                  else
                    {
                      t = x_13;
                      t = Cons_2(t, _id, m_15);
                    }
                }
              }
            return(t);
          }
          t = m_15(t);
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
ATerm crush_3 (ATerm t, ATerm k_68 (ATerm), ATerm l_68 (ATerm), ATerm m_68 (ATerm))
{
  ATerm r_15 = NULL;
  ATerm t_15 = NULL;
  r_15 = t;
  {
    ATerm u_15 = NULL;
    ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
    t = not_null(r_15);
    {
      u_15 = t;
      {
        t = SSL_explode_term(not_null(u_15));
        {
          w_15 = t;
          q_15 :
          if(match_cons(w_15, sym__2))
            {
              x_15 = ATgetArgument(w_15, 0);
              y_15 = ATgetArgument(w_15, 1);
              if(((t_15 != NULL) && (t_15 != y_15)))
                _fail(y_15);
              else
                t_15 = y_15;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(t_15);
      t = foldr_3(t, k_68, l_68, m_68);
    }
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm m_69 (ATerm), ATerm n_69 (ATerm), ATerm o_69 (ATerm))
{
  ATerm z_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_69(t);
      LocalPopChoice(a_14);
    }
  else
    {
      t = z_13;
      {
        ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
        g_16 = t;
        f_16 :
        if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
          {
            h_16 = ATgetFirst((ATermList) g_16);
            i_16 = (ATerm) ATgetNext((ATermList) g_16);
            {
              ATerm l_16 = NULL,n_16 = NULL;
              ATerm h_14;
              h_14 = t;
              {
                ATerm m_16 = NULL;
                t = not_null(h_16);
                {
                  t = o_69(t);
                  {
                    m_16 = t;
                    if(((l_16 != NULL) && (l_16 != m_16)))
                      _fail(m_16);
                    else
                      l_16 = m_16;
                  }
                }
              }
              t = h_14;
              {
                ATerm o_16 = NULL;
                t = not_null(i_16);
                {
                  t = foldr_3(t, m_69, n_69, o_69);
                  {
                    o_16 = t;
                    if(((n_16 != NULL) && (n_16 != o_16)))
                      _fail(o_16);
                    else
                      n_16 = o_16;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_16), not_null(n_16));
                  t = n_69(t);
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
  ATerm z_16 = NULL;
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL;
  z_16 = t;
  {
    ATerm e_17 = NULL;
    ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
    t = not_null(z_16);
    {
      e_17 = t;
      {
        t = SSL_explode_term(not_null(e_17));
        {
          g_17 = t;
          v_16 :
          if(match_cons(g_17, sym__2))
            {
              h_17 = ATgetArgument(g_17, 0);
              i_17 = ATgetArgument(g_17, 1);
              w_16 :
              if(match_string(h_17, ""))
                {
                  x_16 :
                  if(((ATgetType(i_17) == AT_LIST) && !(ATisEmpty(i_17))))
                    {
                      j_17 = ATgetFirst((ATermList) i_17);
                      k_17 = (ATerm) ATgetNext((ATermList) i_17);
                      y_16 :
                      if(((ATgetType(k_17) == AT_LIST) && !(ATisEmpty(k_17))))
                        {
                          l_17 = ATgetFirst((ATermList) k_17);
                          m_17 = (ATerm) ATgetNext((ATermList) k_17);
                          {
                            if(((b_17 != NULL) && (b_17 != j_17)))
                              _fail(j_17);
                            else
                              b_17 = j_17;
                            {
                              if(((d_17 != NULL) && (d_17 != l_17)))
                                _fail(l_17);
                              else
                                d_17 = l_17;
                              if(((c_17 != NULL) && (c_17 != m_17)))
                                _fail(m_17);
                              else
                                c_17 = m_17;
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
    t = not_null(d_17);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm w_17 = NULL;
  ATerm y_17 = NULL,a_18 = NULL;
  w_17 = t;
  {
    ATerm b_18 = NULL;
    ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL;
    t = not_null(w_17);
    {
      b_18 = t;
      {
        t = SSL_explode_term(not_null(b_18));
        {
          d_18 = t;
          t_17 :
          if(match_cons(d_18, sym__2))
            {
              e_18 = ATgetArgument(d_18, 0);
              f_18 = ATgetArgument(d_18, 1);
              u_17 :
              if(match_string(e_18, ""))
                {
                  v_17 :
                  if(((ATgetType(f_18) == AT_LIST) && !(ATisEmpty(f_18))))
                    {
                      g_18 = ATgetFirst((ATermList) f_18);
                      h_18 = (ATerm) ATgetNext((ATermList) f_18);
                      {
                        if(((a_18 != NULL) && (a_18 != g_18)))
                          _fail(g_18);
                        else
                          a_18 = g_18;
                        if(((y_17 != NULL) && (y_17 != h_18)))
                          _fail(h_18);
                        else
                          y_17 = h_18;
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
    t = not_null(a_18);
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm v_57 (ATerm))
{
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_14;
      k_14 = t;
      {
        ATerm m_18 = NULL;
        ATerm n_18 = NULL;
        t = term_z_7;
        {
          t = get_config_0(t);
          {
            n_18 = t;
            if(((m_18 != NULL) && (m_18 != n_18)))
              _fail(n_18);
            else
              m_18 = n_18;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_18), term_l_14);
          t = geq_0(t);
        }
      }
      t = k_14;
      t = v_57(t);
      LocalPopChoice(j_14);
    }
  else
    {
      t = i_14;
      {
      }
    }
  return(t);
}
ATerm term_to_tree_0 (ATerm t)
{
  ATerm y_18 = NULL,a_19 = NULL;
  ATerm w_1 (ATerm t)
  {
    ATerm x_1 (ATerm t)
    {
      t = term_q_14;
      return(t);
    }
    t = debug_1(t, x_1);
    return(t);
  }
  t = if_verbose5_1(t, w_1);
  {
    ATerm r_14;
    r_14 = t;
    {
      ATerm z_18 = NULL;
      t = new_0(t);
      {
        z_18 = t;
        if(((y_18 != NULL) && (y_18 != z_18)))
          _fail(z_18);
        else
          y_18 = z_18;
      }
    }
    t = r_14;
    {
      ATerm b_19 = NULL;
      b_19 = t;
      if(((a_19 != NULL) && (a_19 != b_19)))
        _fail(b_19);
      else
        a_19 = b_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_18), not_null(a_19));
        {
          ATerm x_19 (ATerm t)
          {
            ATerm m_19 = NULL,t_19 = NULL;
            ATerm y_1 (ATerm t)
            {
              ATerm s_14 = t;
              int t_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_1 (ATerm t)
                  {
                    ATerm c_19 = NULL,e_19 = NULL;
                    ATerm y_14;
                    y_14 = t;
                    {
                      ATerm d_19 = NULL;
                      t = new_0(t);
                      {
                        d_19 = t;
                        if(((c_19 != NULL) && (c_19 != d_19)))
                          _fail(d_19);
                        else
                          c_19 = d_19;
                      }
                    }
                    t = y_14;
                    {
                      ATerm f_19 = NULL;
                      f_19 = t;
                      if(((e_19 != NULL) && (e_19 != f_19)))
                        _fail(f_19);
                      else
                        e_19 = f_19;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(c_19), not_null(e_19));
                    }
                    return(t);
                  }
                  t = map_1(t, z_1);
                  LocalPopChoice(t_14);
                }
              else
                {
                  t = s_14;
                  {
                    ATerm a_2 (ATerm t)
                    {
                      ATerm i_19 = NULL,k_19 = NULL;
                      ATerm z_14;
                      z_14 = t;
                      {
                        ATerm j_19 = NULL;
                        t = new_0(t);
                        {
                          j_19 = t;
                          if(((i_19 != NULL) && (i_19 != j_19)))
                            _fail(j_19);
                          else
                            i_19 = j_19;
                        }
                      }
                      t = z_14;
                      {
                        ATerm l_19 = NULL;
                        l_19 = t;
                        if(((k_19 != NULL) && (k_19 != l_19)))
                          _fail(l_19);
                        else
                          k_19 = l_19;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_19), not_null(k_19));
                      }
                      return(t);
                    }
                    t = _all(t, a_2);
                  }
                }
              return(t);
            }
            t = _2(t, _id, y_1);
            {
              ATerm b_15;
              b_15 = t;
              {
                ATerm s_19 = NULL;
                ATerm b_2 (ATerm t)
                {
                  ATerm c_15 = t;
                  int d_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = map_1(t, Fst_0);
                      LocalPopChoice(d_15);
                    }
                  else
                    {
                      t = c_15;
                      t = _all(t, Fst_0);
                    }
                  return(t);
                }
                t = _2(t, _id, b_2);
                {
                  s_19 = t;
                  if(((m_19 != NULL) && (m_19 != s_19)))
                    _fail(s_19);
                  else
                    m_19 = s_19;
                }
              }
              t = b_15;
              {
                ATerm u_19 = NULL;
                t = Snd_0(t);
                {
                  ATerm e_15 = t;
                  int j_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_2 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      ATerm d_2 (ATerm t)
                      {
                        t = union_1(t, eq_0);
                        return(t);
                      }
                      t = foldr_3(t, c_2, d_2, x_19);
                      LocalPopChoice(j_15);
                    }
                  else
                    {
                      t = e_15;
                      {
                        ATerm e_2 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        ATerm f_2 (ATerm t)
                        {
                          t = union_1(t, eq_0);
                          return(t);
                        }
                        t = crush_3(t, e_2, f_2, x_19);
                      }
                    }
                  {
                    u_19 = t;
                    if(((t_19 != NULL) && (t_19 != u_19)))
                      _fail(u_19);
                    else
                      t_19 = u_19;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(t_19)), not_null(m_19));
              }
            }
            return(t);
          }
          t = x_19(t);
        }
      }
    }
  }
  return(t);
}
ATerm to_adot_0 (ATerm t)
{
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_15;
      n_15 = t;
      {
        t = term_o_15;
        t = get_config_0(t);
      }
      t = n_15;
      t = term_to_tree_0(t);
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
      {
        ATerm p_15;
        p_15 = t;
        {
          t = term_s_15;
          t = get_config_0(t);
        }
        t = p_15;
        t = term_to_graph_0(t);
      }
    }
  t = graph_to_adot_0(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,n_20 = NULL;
  g_20 = t;
  f_20 :
  if(match_cons(g_20, sym__2))
    {
      h_20 = ATgetArgument(g_20, 0);
      n_20 = ATgetArgument(g_20, 1);
      t = SSL_WriteToBinaryFile(not_null(h_20), not_null(n_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm d_73 (ATerm))
{
  ATerm i_21 = NULL,k_21 = NULL,l_21 = NULL;
  i_21 = t;
  h_21 :
  if(match_cons(i_21, sym__2))
    {
      k_21 = ATgetArgument(i_21, 0);
      l_21 = ATgetArgument(i_21, 1);
      {
        ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
        ATerm v_15;
        v_15 = t;
        {
          ATerm r_21 = NULL;
          ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
          t = d_73(t);
          {
            r_21 = t;
            {
              if(((o_21 != NULL) && (o_21 != r_21)))
                _fail(r_21);
              else
                o_21 = r_21;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(o_21), not_null(k_21), not_null(l_21));
                {
                  t = table_push_0(t);
                  {
                    ATerm z_15 = t;
                    int a_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_21), term_b_16);
                        t = table_get_0(t);
                        LocalPopChoice(a_16);
                      }
                    else
                      {
                        t = z_15;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      s_21 = t;
                      f_21 :
                      if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
                        {
                          t_21 = ATgetFirst((ATermList) s_21);
                          u_21 = (ATerm) ATgetNext((ATermList) s_21);
                          {
                            if(((p_21 != NULL) && (p_21 != t_21)))
                              _fail(t_21);
                            else
                              p_21 = t_21;
                            {
                              if(((q_21 != NULL) && (q_21 != u_21)))
                                _fail(u_21);
                              else
                                q_21 = u_21;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(o_21), term_b_16, (ATerm) ATinsert(CheckATermList(not_null(q_21)), (ATerm) ATinsert(CheckATermList(not_null(p_21)), not_null(k_21))));
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
        t = v_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm r_73 (ATerm))
{
  ATerm c_16;
  c_16 = t;
  {
    t = r_73(t);
    {
      ATerm g_2 (ATerm t)
      {
        t = term_d_16;
        return(t);
      }
      t = debug_1(t, g_2);
    }
  }
  t = c_16;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL;
  ATerm e_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
      j_22 = t;
      e_22 :
      if(match_cons(j_22, sym__2))
        {
          k_22 = ATgetArgument(j_22, 0);
          l_22 = ATgetArgument(j_22, 1);
          {
            if(((i_22 != NULL) && (i_22 != k_22)))
              _fail(k_22);
            else
              i_22 = k_22;
            if(((h_22 != NULL) && (h_22 != l_22)))
              _fail(l_22);
            else
              h_22 = l_22;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(j_16);
      t = SSL_open_file(not_null(i_22), not_null(h_22));
    }
  else
    {
      t = e_16;
      {
        ATerm m_22 = NULL;
        ATerm n_22 = NULL;
        ATerm h_2 (ATerm t)
        {
          t = term_k_16;
          return(t);
        }
        t = obsolete_1(t, h_2);
        {
          m_22 = t;
          {
            if(((i_22 != NULL) && (i_22 != m_22)))
              _fail(m_22);
            else
              i_22 = m_22;
            {
              ATerm p_16;
              p_16 = t;
              {
                ATerm o_22 = NULL;
                t = term_q_16;
                {
                  o_22 = t;
                  if(((n_22 != NULL) && (n_22 != o_22)))
                    _fail(o_22);
                  else
                    n_22 = o_22;
                }
              }
              t = p_16;
              t = SSL_open_file(not_null(i_22), not_null(n_22));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm z_22 = NULL;
  ATerm b_23 = NULL;
  z_22 = t;
  {
    ATerm r_16;
    r_16 = t;
    {
      ATerm c_23 = NULL;
      t = term_s_16;
      {
        c_23 = t;
        if(((b_23 != NULL) && (b_23 != c_23)))
          _fail(c_23);
        else
          b_23 = c_23;
      }
    }
    t = r_16;
    {
      t = SSL_open_file(not_null(z_22), not_null(b_23));
      t = SSL_close_file(not_null(z_22));
    }
  }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0 (ATerm t)
{
  ATerm g_23 = NULL;
  ATerm h_23 = NULL;
  t = term_t_16;
  {
    t = new_0(t);
    {
      h_23 = t;
      if(((g_23 != NULL) && (g_23 != h_23)))
        _fail(h_23);
      else
        g_23 = h_23;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_23), term_u_16);
    {
      t = conc_strings_0(t);
      {
        ATerm a_17 = t;
        int f_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(f_17);
          }
        else
          {
            t = a_17;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm q_23 = NULL;
  t = new_file_0(t);
  {
    q_23 = t;
    {
      ATerm n_17;
      n_17 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_23), term_q_16);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_23), term_t_16);
            {
              ATerm i_2 (ATerm t)
              {
                t = term_o_17;
                return(t);
              }
              t = assert_1(t, i_2);
            }
          }
        }
      }
      t = n_17;
    }
  }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm v_23 = NULL;
  ATerm x_23 = NULL;
  v_23 = t;
  {
    ATerm y_23 = NULL;
    t = xtc_new_file_0(t);
    {
      y_23 = t;
      {
        if(((x_23 != NULL) && (x_23 != y_23)))
          _fail(y_23);
        else
          x_23 = y_23;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_23), not_null(v_23));
          t = WriteToBinaryFile_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_23));
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm c_24 = NULL;
  c_24 = t;
  t = SSL_ReadFromFile(not_null(c_24));
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL;
  k_24 = t;
  j_24 :
  if(match_cons(k_24, sym_stdin_0))
    {
      ATerm m_24 = NULL;
      ATerm n_24 = NULL;
      t = term_p_17;
      {
        t = ReadFromFile_0(t);
        {
          n_24 = t;
          if(((m_24 != NULL) && (m_24 != n_24)))
            _fail(n_24);
          else
            m_24 = n_24;
        }
      }
      t = not_null(m_24);
    }
  else
    {
      if(match_cons(k_24, sym_FILE_1))
        {
          l_24 = ATgetArgument(k_24, 0);
          {
            ATerm p_24 = NULL;
            ATerm q_24 = NULL;
            t = not_null(l_24);
            {
              t = ReadFromFile_0(t);
              {
                q_24 = t;
                if(((p_24 != NULL) && (p_24 != q_24)))
                  _fail(q_24);
                else
                  p_24 = q_24;
              }
            }
            t = not_null(p_24);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm w_72 (ATerm))
{
  t = read_from_0(t);
  {
    t = w_72(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
  x_24 = t;
  w_24 :
  if(match_cons(x_24, sym__2))
    {
      y_24 = ATgetArgument(x_24, 0);
      z_24 = ATgetArgument(x_24, 1);
      t = SSL_rename(not_null(y_24), not_null(z_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm h_25 = NULL;
  h_25 = t;
  g_25 :
  if(match_cons(h_25, sym_stdout_0))
    {
      ATerm j_25 = NULL,l_25 = NULL;
      ATerm q_17;
      q_17 = t;
      {
        ATerm k_25 = NULL;
        t = SSLgetAnnotations(not_null(h_25));
        {
          k_25 = t;
          if(((j_25 != NULL) && (j_25 != k_25)))
            _fail(k_25);
          else
            j_25 = k_25;
        }
      }
      t = q_17;
      {
        ATerm m_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(j_25));
        {
          m_25 = t;
          if(((l_25 != NULL) && (l_25 != m_25)))
            _fail(m_25);
          else
            l_25 = m_25;
        }
        t = not_null(l_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
  s_25 = t;
  r_25 :
  if(match_cons(s_25, sym__2))
    {
      t_25 = ATgetArgument(s_25, 0);
      u_25 = ATgetArgument(s_25, 1);
      t = SSL_copy(not_null(t_25), not_null(u_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm e_26 = NULL,f_26 = NULL;
  e_26 = t;
  d_26 :
  if(match_cons(e_26, sym_FILE_1))
    {
      f_26 = ATgetArgument(e_26, 0);
      {
        ATerm r_17 = t;
        int s_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_26 = NULL;
            t = m_0(t);
            {
              h_26 = t;
              b_26 :
              if(match_cons(h_26, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_26), term_x_17);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(f_26);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_x_17;
            LocalPopChoice(s_17);
          }
        else
          {
            t = r_17;
            {
              ATerm j_26 = NULL;
              ATerm k_26 = NULL;
              t = m_0(t);
              {
                k_26 = t;
                {
                  if(((j_26 != NULL) && (j_26 != k_26)))
                    _fail(k_26);
                  else
                    j_26 = k_26;
                  {
                    ATerm z_17 = t;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = z_17;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(f_26), not_null(j_26));
                      t = rename_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_26));
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
ATerm Tl_0 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
  r_26 = t;
  q_26 :
  if(((ATgetType(r_26) == AT_LIST) && !(ATisEmpty(r_26))))
    {
      s_26 = ATgetFirst((ATermList) r_26);
      t_26 = (ATerm) ATgetNext((ATermList) r_26);
      t = not_null(t_26);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL;
  a_27 = t;
  z_26 :
  if(match_cons(a_27, sym__2))
    {
      b_27 = ATgetArgument(a_27, 0);
      c_27 = ATgetArgument(a_27, 1);
      {
        ATerm c_18;
        c_18 = t;
        {
          ATerm f_27 = NULL;
          ATerm g_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_27), not_null(c_27));
          {
            ATerm i_18 = t;
            int j_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(j_18);
              }
            else
              {
                t = i_18;
                t = (ATerm) ATempty;
              }
            {
              g_27 = t;
              if(((f_27 != NULL) && (f_27 != g_27)))
                _fail(g_27);
              else
                f_27 = g_27;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_27), not_null(c_27), not_null(f_27));
            t = table_put_0(t);
          }
        }
        t = c_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm a_73 (ATerm))
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL;
  ATerm k_18;
  k_18 = t;
  {
    ATerm q_27 = NULL;
    ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
    t = a_73(t);
    {
      q_27 = t;
      {
        if(((p_27 != NULL) && (p_27 != q_27)))
          _fail(q_27);
        else
          p_27 = q_27;
        {
          ATerm l_18 = t;
          int o_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_27), term_b_16);
              t = table_get_0(t);
              LocalPopChoice(o_18);
            }
          else
            {
              t = l_18;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            r_27 = t;
            m_27 :
            if(((ATgetType(r_27) == AT_LIST) && !(ATisEmpty(r_27))))
              {
                s_27 = ATgetFirst((ATermList) r_27);
                t_27 = (ATerm) ATgetNext((ATermList) r_27);
                {
                  if(((o_27 != NULL) && (o_27 != s_27)))
                    _fail(s_27);
                  else
                    o_27 = s_27;
                  {
                    if(((n_27 != NULL) && (n_27 != t_27)))
                      _fail(t_27);
                    else
                      n_27 = t_27;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(p_27), term_b_16, not_null(n_27));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(o_27);
                          {
                            ATerm j_2 (ATerm t)
                            {
                              ATerm u_27 = NULL;
                              u_27 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_27), not_null(u_27));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, j_2);
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
  t = k_18;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm c_28 = NULL;
  c_28 = t;
  t = SSL_remove(not_null(c_28));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm x_61 (ATerm), ATerm y_61 (ATerm))
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_61(t);
      t = y_61(t);
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      {
        t = y_61(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm z_72 (ATerm))
{
  ATerm m_28 = NULL;
  ATerm r_18;
  r_18 = t;
  {
    ATerm n_28 = NULL;
    ATerm o_28 = NULL;
    t = z_72(t);
    {
      n_28 = t;
      {
        if(((m_28 != NULL) && (m_28 != n_28)))
          _fail(n_28);
        else
          m_28 = n_28;
        {
          ATerm p_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_28), term_b_16);
          {
            ATerm s_18 = t;
            int t_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(t_18);
              }
            else
              {
                t = s_18;
                t = (ATerm) ATempty;
              }
            {
              p_28 = t;
              if(((o_28 != NULL) && (o_28 != p_28)))
                _fail(p_28);
              else
                o_28 = p_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_28), term_b_16, (ATerm) ATinsert(CheckATermList(not_null(o_28)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = r_18;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm f_72 (ATerm))
{
  ATerm v_28 = NULL,w_28 = NULL;
  ATerm k_2 (ATerm t)
  {
    t = term_o_17;
    return(t);
  }
  t = begin_scope_1(t, k_2);
  {
    ATerm l_2 (ATerm t)
    {
      ATerm u_18;
      u_18 = t;
      {
        ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
        ATerm v_18 = t;
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_x_18;
            t = table_get_0(t);
            LocalPopChoice(w_18);
          }
        else
          {
            t = v_18;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          x_28 = t;
          u_28 :
          if(((ATgetType(x_28) == AT_LIST) && !(ATisEmpty(x_28))))
            {
              y_28 = ATgetFirst((ATermList) x_28);
              z_28 = (ATerm) ATgetNext((ATermList) x_28);
              {
                if(((w_28 != NULL) && (w_28 != y_28)))
                  _fail(y_28);
                else
                  w_28 = y_28;
                {
                  if(((v_28 != NULL) && (v_28 != z_28)))
                    _fail(z_28);
                  else
                    v_28 = z_28;
                  {
                    t = not_null(w_28);
                    {
                      ATerm m_2 (ATerm t)
                      {
                        ATerm g_19 = t;
                        int h_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(h_19);
                          }
                        else
                          {
                            t = g_19;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, m_2);
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
      t = u_18;
      {
        ATerm o_2 (ATerm t)
        {
          t = term_o_17;
          return(t);
        }
        t = end_scope_1(t, o_2);
      }
      return(t);
    }
    t = restore_always_2(t, f_72, l_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm g_72 (ATerm))
{
  ATerm p_2 (ATerm t)
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_29 = NULL;
        ATerm h_29 = NULL;
        t = term_z_10;
        {
          t = get_config_0(t);
          {
            h_29 = t;
            if(((g_29 != NULL) && (g_29 != h_29)))
              _fail(h_29);
            else
              g_29 = h_29;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_29));
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        t = term_p_17;
      }
    {
      t = g_72(t);
      {
        ATerm q_2 (ATerm t)
        {
          ATerm p_19 = t;
          int q_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_w_10;
              t = get_config_0(t);
              LocalPopChoice(q_19);
            }
          else
            {
              t = p_19;
              t = term_x_17;
            }
          return(t);
        }
        t = rename_to_1(t, q_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, p_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_29 = NULL;
  k_29 = t;
  t = SSL_string_to_int(not_null(k_29));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL;
  s_29 = t;
  q_29 :
  if(match_string(s_29, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(s_29) == AT_LIST) && !(ATisEmpty(s_29))))
        {
          t_29 = ATgetFirst((ATermList) s_29);
          u_29 = (ATerm) ATgetNext((ATermList) s_29);
          r_29 :
          if(((ATgetType(u_29) == AT_LIST) && !(ATisEmpty(u_29))))
            {
              v_29 = ATgetFirst((ATermList) u_29);
              w_29 = (ATerm) ATgetNext((ATermList) u_29);
              {
                ATerm a_30 = NULL;
                ATerm r_19;
                r_19 = t;
                {
                  t = not_null(t_29);
                  t = j_0(t);
                }
                t = r_19;
                {
                  ATerm b_30 = NULL;
                  t = not_null(v_29);
                  {
                    t = k_0(t);
                    {
                      b_30 = t;
                      if(((a_30 != NULL) && (a_30 != b_30)))
                        _fail(b_30);
                      else
                        a_30 = b_30;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_29)), not_null(a_30));
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
  ATerm v_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_2 (ATerm t)
      {
        ATerm w_30 = NULL;
        w_30 = t;
        f_30 :
        if(!(match_string(w_30, "-i")))
          {
            if(!(match_string(w_30, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm u_2 (ATerm t)
      {
        ATerm e_31 = NULL;
        ATerm y_19;
        y_19 = t;
        {
          ATerm x_30 = NULL;
          ATerm y_30 = NULL;
          y_30 = t;
          if(((x_30 != NULL) && (x_30 != y_30)))
            _fail(y_30);
          else
            x_30 = y_30;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_z_10, not_null(x_30));
            t = set_config_0(t);
          }
        }
        t = y_19;
        {
          ATerm f_31 = NULL;
          f_31 = t;
          if(((e_31 != NULL) && (e_31 != f_31)))
            _fail(f_31);
          else
            e_31 = f_31;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_31));
        }
        return(t);
      }
      ATerm v_2 (ATerm t)
      {
        t = term_z_19;
        return(t);
      }
      t = ArgOption_3(t, r_2, u_2, v_2);
      LocalPopChoice(w_19);
    }
  else
    {
      t = v_19;
      {
        ATerm a_20 = t;
        int b_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_2 (ATerm t)
            {
              ATerm k_31 = NULL;
              k_31 = t;
              i_30 :
              if(!(match_string(k_31, "-o")))
                {
                  if(!(match_string(k_31, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm x_2 (ATerm t)
            {
              ATerm n_31 = NULL;
              ATerm c_20;
              c_20 = t;
              {
                ATerm l_31 = NULL;
                ATerm m_31 = NULL;
                m_31 = t;
                if(((l_31 != NULL) && (l_31 != m_31)))
                  _fail(m_31);
                else
                  l_31 = m_31;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_10, not_null(l_31));
                  t = set_config_0(t);
                }
              }
              t = c_20;
              {
                ATerm q_31 = NULL;
                q_31 = t;
                if(((n_31 != NULL) && (n_31 != q_31)))
                  _fail(q_31);
                else
                  n_31 = q_31;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_31));
              }
              return(t);
            }
            ATerm y_2 (ATerm t)
            {
              t = term_d_20;
              return(t);
            }
            t = ArgOption_3(t, w_2, x_2, y_2);
            LocalPopChoice(b_20);
          }
        else
          {
            t = a_20;
            {
              ATerm e_20 = t;
              int i_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_2 (ATerm t)
                  {
                    ATerm r_31 = NULL;
                    r_31 = t;
                    l_30 :
                    if(!(match_string(r_31, "-S")))
                      {
                        if(!(match_string(r_31, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm c_3 (ATerm t)
                  {
                    t = term_k_20;
                    t = set_config_0(t);
                    t = term_l_20;
                    return(t);
                  }
                  ATerm d_3 (ATerm t)
                  {
                    t = term_m_20;
                    return(t);
                  }
                  t = Option_3(t, z_2, c_3, d_3);
                  LocalPopChoice(i_20);
                }
              else
                {
                  t = e_20;
                  {
                    ATerm o_20 = t;
                    int p_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm e_3 (ATerm t)
                        {
                          ATerm s_31 = NULL;
                          s_31 = t;
                          m_30 :
                          if(!(match_string(s_31, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm i_3 (ATerm t)
                        {
                          ATerm y_31 = NULL;
                          ATerm q_20;
                          q_20 = t;
                          {
                            ATerm w_31 = NULL;
                            ATerm x_31 = NULL;
                            t = string_to_int_0(t);
                            {
                              x_31 = t;
                              if(((w_31 != NULL) && (w_31 != x_31)))
                                _fail(x_31);
                              else
                                w_31 = x_31;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_z_7, not_null(w_31));
                              t = set_config_0(t);
                            }
                          }
                          t = q_20;
                          {
                            ATerm z_31 = NULL;
                            z_31 = t;
                            if(((y_31 != NULL) && (y_31 != z_31)))
                              _fail(z_31);
                            else
                              y_31 = z_31;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(y_31));
                          }
                          return(t);
                        }
                        ATerm q_3 (ATerm t)
                        {
                          t = term_r_20;
                          return(t);
                        }
                        t = ArgOption_3(t, e_3, i_3, q_3);
                        LocalPopChoice(p_20);
                      }
                    else
                      {
                        t = o_20;
                        {
                          ATerm s_20 = t;
                          int t_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_3 (ATerm t)
                              {
                                ATerm f_32 = NULL;
                                f_32 = t;
                                p_30 :
                                if(!(match_string(f_32, "-k")))
                                  {
                                    if(!(match_string(f_32, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm s_3 (ATerm t)
                              {
                                ATerm u_20;
                                u_20 = t;
                                {
                                  ATerm g_32 = NULL;
                                  ATerm i_32 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    i_32 = t;
                                    if(((g_32 != NULL) && (g_32 != i_32)))
                                      _fail(i_32);
                                    else
                                      g_32 = i_32;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_v_20, not_null(g_32));
                                    t = set_config_0(t);
                                  }
                                }
                                t = u_20;
                                return(t);
                              }
                              ATerm t_3 (ATerm t)
                              {
                                t = term_w_20;
                                return(t);
                              }
                              t = ArgOption_3(t, r_3, s_3, t_3);
                              LocalPopChoice(t_20);
                            }
                          else
                            {
                              t = s_20;
                              {
                                ATerm x_20 = t;
                                int y_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm z_3 (ATerm t)
                                    {
                                      ATerm m_32 = NULL;
                                      m_32 = t;
                                      t_30 :
                                      if(!(match_string(m_32, "-v")))
                                        {
                                          if(!(match_string(m_32, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm a_4 (ATerm t)
                                    {
                                      t = term_a_21;
                                      t = set_config_0(t);
                                      t = term_b_21;
                                      return(t);
                                    }
                                    ATerm f_4 (ATerm t)
                                    {
                                      t = term_c_21;
                                      return(t);
                                    }
                                    t = Option_3(t, z_3, a_4, f_4);
                                    LocalPopChoice(y_20);
                                  }
                                else
                                  {
                                    t = x_20;
                                    {
                                      ATerm d_21 = t;
                                      int e_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm g_4 (ATerm t)
                                          {
                                            ATerm n_32 = NULL;
                                            n_32 = t;
                                            u_30 :
                                            if(!(match_string(n_32, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm h_4 (ATerm t)
                                          {
                                            t = term_j_21;
                                            t = set_config_0(t);
                                            t = term_m_21;
                                            return(t);
                                          }
                                          ATerm k_4 (ATerm t)
                                          {
                                            t = term_n_21;
                                            return(t);
                                          }
                                          t = Option_3(t, g_4, h_4, k_4);
                                          LocalPopChoice(e_21);
                                        }
                                      else
                                        {
                                          t = d_21;
                                          {
                                            ATerm l_4 (ATerm t)
                                            {
                                              ATerm o_32 = NULL;
                                              o_32 = t;
                                              v_30 :
                                              if(!(match_string(o_32, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm o_4 (ATerm t)
                                            {
                                              t = term_w_21;
                                              t = set_config_0(t);
                                              t = term_x_21;
                                              return(t);
                                            }
                                            ATerm p_4 (ATerm t)
                                            {
                                              t = term_y_21;
                                              return(t);
                                            }
                                            t = Option_3(t, l_4, o_4, p_4);
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
  ATerm z_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_4 (ATerm t)
      {
        ATerm q_33 = NULL;
        q_33 = t;
        m_33 :
        if(!(match_string(q_33, "--graph")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm r_4 (ATerm t)
      {
        t = term_b_22;
        t = set_config_0(t);
        t = term_c_22;
        return(t);
      }
      ATerm x_4 (ATerm t)
      {
        t = term_d_22;
        return(t);
      }
      t = Option_3(t, q_4, r_4, x_4);
      LocalPopChoice(a_22);
    }
  else
    {
      t = z_21;
      {
        ATerm y_4 (ATerm t)
        {
          ATerm r_33 = NULL;
          r_33 = t;
          n_33 :
          if(!(match_string(r_33, "--tree")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm z_4 (ATerm t)
        {
          t = term_f_22;
          t = set_config_0(t);
          t = term_g_22;
          return(t);
        }
        ATerm e_5 (ATerm t)
        {
          t = term_p_22;
          return(t);
        }
        t = Option_3(t, y_4, z_4, e_5);
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm x_33 = NULL;
  ATerm q_22;
  q_22 = t;
  {
    ATerm f_5 (ATerm t)
    {
      ATerm y_33 = NULL,z_33 = NULL;
      y_33 = t;
      t_33 :
      if(match_cons(y_33, sym_Program_1))
        {
          z_33 = ATgetArgument(y_33, 0);
          if(((x_33 != NULL) && (x_33 != z_33)))
            _fail(z_33);
          else
            x_33 = z_33;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, f_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_22), not_null(x_33)), term_r_22));
      {
        t = printnl_0(t);
        {
          t = term_t_22;
          t = exit_0(t);
        }
      }
    }
  }
  t = q_22;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, term_u_22));
  {
    t = printnl_0(t);
    {
      t = term_t_22;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm c_34 = NULL;
  c_34 = t;
  t = SSL_TicksToSeconds(not_null(c_34));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL;
  h_34 = t;
  g_34 :
  if(match_cons(h_34, sym__2))
    {
      i_34 = ATgetArgument(h_34, 0);
      j_34 = ATgetArgument(h_34, 1);
      {
        ATerm v_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(i_34), not_null(j_34));
            LocalPopChoice(w_22);
          }
        else
          {
            t = v_22;
            t = SSL_addr(not_null(i_34), not_null(j_34));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm k_69 (ATerm), ATerm l_69 (ATerm))
{
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_69(t);
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      {
        ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL;
        q_34 = t;
        p_34 :
        if(((ATgetType(q_34) == AT_LIST) && !(ATisEmpty(q_34))))
          {
            r_34 = ATgetFirst((ATermList) q_34);
            s_34 = (ATerm) ATgetNext((ATermList) q_34);
            {
              ATerm v_34 = NULL;
              ATerm w_34 = NULL;
              t = not_null(s_34);
              {
                t = foldr_2(t, k_69, l_69);
                {
                  w_34 = t;
                  if(((v_34 != NULL) && (v_34 != w_34)))
                    _fail(w_34);
                  else
                    v_34 = w_34;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_34), not_null(v_34));
                t = l_69(t);
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
ATerm crush_2 (ATerm t, ATerm i_68 (ATerm), ATerm j_68 (ATerm))
{
  ATerm d_35 = NULL;
  ATerm f_35 = NULL;
  d_35 = t;
  {
    ATerm g_35 = NULL;
    ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL;
    t = not_null(d_35);
    {
      g_35 = t;
      {
        t = SSL_explode_term(not_null(g_35));
        {
          i_35 = t;
          c_35 :
          if(match_cons(i_35, sym__2))
            {
              j_35 = ATgetArgument(i_35, 0);
              k_35 = ATgetArgument(i_35, 1);
              if(((f_35 != NULL) && (f_35 != k_35)))
                _fail(k_35);
              else
                f_35 = k_35;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(f_35);
      t = foldr_2(t, i_68, j_68);
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
    ATerm g_5 (ATerm t)
    {
      t = term_j_20;
      return(t);
    }
    t = crush_2(t, g_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL;
  q_35 = t;
  p_35 :
  if(match_cons(q_35, sym__2))
    {
      r_35 = ATgetArgument(q_35, 0);
      s_35 = ATgetArgument(q_35, 1);
      {
        ATerm a_23;
        a_23 = t;
        {
          ATerm d_23 = t;
          int e_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_35), not_null(s_35));
              LocalPopChoice(e_23);
            }
          else
            {
              t = d_23;
              t = SSL_gtr(not_null(r_35), not_null(s_35));
            }
        }
        t = a_23;
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
  ATerm y_35 = NULL;
  ATerm f_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL;
      z_35 = t;
      x_35 :
      if(match_cons(z_35, sym__2))
        {
          a_36 = ATgetArgument(z_35, 0);
          b_36 = ATgetArgument(z_35, 1);
          {
            if(((y_35 != NULL) && (y_35 != a_36)))
              _fail(a_36);
            else
              y_35 = a_36;
            if(((y_35 != NULL) && (y_35 != b_36)))
              _fail(b_36);
            else
              y_35 = b_36;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(i_23);
    }
  else
    {
      t = f_23;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm r_57 (ATerm))
{
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_23;
      l_23 = t;
      {
        ATerm e_36 = NULL;
        ATerm f_36 = NULL;
        t = term_z_7;
        {
          t = get_config_0(t);
          {
            f_36 = t;
            if(((e_36 != NULL) && (e_36 != f_36)))
              _fail(f_36);
            else
              e_36 = f_36;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_36), term_t_22);
          t = geq_0(t);
        }
      }
      t = l_23;
      t = r_57(t);
      LocalPopChoice(k_23);
    }
  else
    {
      t = j_23;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm j_36 = NULL,l_36 = NULL;
    ATerm m_23;
    m_23 = t;
    {
      ATerm k_36 = NULL;
      t = run_time_0(t);
      {
        k_36 = t;
        if(((j_36 != NULL) && (j_36 != k_36)))
          _fail(k_36);
        else
          j_36 = k_36;
      }
    }
    t = m_23;
    {
      ATerm m_36 = NULL;
      t = term_n_23;
      {
        t = get_config_0(t);
        {
          m_36 = t;
          if(((l_36 != NULL) && (l_36 != m_36)))
            _fail(m_36);
          else
            l_36 = m_36;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_23), not_null(j_36)), term_o_23), not_null(l_36)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, h_5);
  {
    t = term_j_20;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm t_36 = NULL;
  t_36 = t;
  s_36 :
  if(match_cons(t_36, sym_Version_0))
    {
      ATerm v_36 = NULL,x_36 = NULL;
      ATerm r_23;
      r_23 = t;
      {
        ATerm w_36 = NULL;
        t = SSLgetAnnotations(not_null(t_36));
        {
          w_36 = t;
          if(((v_36 != NULL) && (v_36 != w_36)))
            _fail(w_36);
          else
            v_36 = w_36;
        }
      }
      t = r_23;
      {
        ATerm y_36 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(v_36));
        {
          y_36 = t;
          if(((x_36 != NULL) && (x_36 != y_36)))
            _fail(y_36);
          else
            x_36 = y_36;
        }
        t = not_null(x_36);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_76 (ATerm))
{
  ATerm i_5 (ATerm t)
  {
    ATerm s_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(t_23);
      }
    else
      {
        t = s_23;
        {
          ATerm u_23 = t;
          int w_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(w_23);
            }
          else
            {
              t = u_23;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, i_5);
  t = k_76(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm d_37 = NULL;
  d_37 = t;
  t = SSL_table_create(not_null(d_37));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm j_37 = NULL;
  j_37 = t;
  {
    ATerm z_23;
    z_23 = t;
    {
      t = term_a_24;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_24, term_b_24, not_null(j_37));
          t = table_put_0(t);
        }
      }
    }
    t = z_23;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm q_37 = NULL;
  q_37 = t;
  t = SSL_table_destroy(not_null(q_37));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm u_37 = NULL;
  u_37 = t;
  t = SSL_exit(not_null(u_37));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL;
  b_38 = t;
  a_38 :
  if(((ATgetType(b_38) == AT_LIST) && ATisEmpty(b_38)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(b_38) == AT_LIST) && !(ATisEmpty(b_38))))
        {
          c_38 = ATgetFirst((ATermList) b_38);
          d_38 = (ATerm) ATgetNext((ATermList) b_38);
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
  ATerm d_24;
  d_24 = t;
  {
    ATerm g_38 = NULL;
    ATerm j_38 = NULL;
    ATerm e_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(f_24);
      }
    else
      {
        t = e_24;
        {
          ATerm h_38 = NULL;
          ATerm i_38 = NULL;
          i_38 = t;
          if(((h_38 != NULL) && (h_38 != i_38)))
            _fail(i_38);
          else
            h_38 = i_38;
          t = (ATerm) ATinsert(ATempty, not_null(h_38));
        }
      }
    {
      j_38 = t;
      if(((g_38 != NULL) && (g_38 != j_38)))
        _fail(j_38);
      else
        g_38 = j_38;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_17, not_null(g_38));
      t = printnl_0(t);
    }
  }
  t = d_24;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm s_78 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm u_38 = NULL,y_38 = NULL,z_38 = NULL;
  z_38 = t;
  t_38 :
  if(((ATgetType(z_38) == AT_LIST) && !(ATisEmpty(z_38))))
    {
      u_38 = ATgetFirst((ATermList) z_38);
      y_38 = (ATerm) ATgetNext((ATermList) z_38);
      {
        ATerm c_39 = NULL;
        t = not_null(y_38);
        {
          ATerm g_24;
          g_24 = t;
          {
            ATerm d_39 = NULL,f_39 = NULL,h_39 = NULL;
            ATerm h_24;
            h_24 = t;
            {
              ATerm e_39 = NULL;
              t = i_0(t);
              {
                e_39 = t;
                if(((d_39 != NULL) && (d_39 != e_39)))
                  _fail(e_39);
                else
                  d_39 = e_39;
              }
            }
            t = h_24;
            {
              ATerm g_39 = NULL;
              t = not_null(u_38);
              {
                t = h_0(t);
                {
                  g_39 = t;
                  if(((f_39 != NULL) && (f_39 != g_39)))
                    _fail(g_39);
                  else
                    f_39 = g_39;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(d_39)), not_null(f_39));
                {
                  h_39 = t;
                  if(((c_39 != NULL) && (c_39 != h_39)))
                    _fail(h_39);
                  else
                    c_39 = h_39;
                }
              }
            }
          }
          t = g_24;
          {
            ATerm o_5 (ATerm t)
            {
              t = not_null(c_39);
              return(t);
            }
            t = reverse_acc_2(t, h_0, o_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(z_38) == AT_LIST) && ATisEmpty(z_38)))
        {
          {
            t = term_t_16;
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
  ATerm p_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, p_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm r_78 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm v_54 (ATerm))
{
  ATerm s_39 = NULL,t_39 = NULL;
  s_39 = t;
  r_39 :
  if(match_cons(s_39, sym_Program_1))
    {
      t_39 = ATgetArgument(s_39, 0);
      {
        ATerm y_39 = NULL,a_40 = NULL;
        ATerm z_39 = NULL;
        t = SSLgetAnnotations(not_null(s_39));
        {
          z_39 = t;
          if(((y_39 != NULL) && (y_39 != z_39)))
            _fail(z_39);
          else
            y_39 = z_39;
        }
        {
          t = not_null(t_39);
          {
            ATerm d_40 = NULL;
            t = v_54(t);
            {
              a_40 = t;
              {
                ATerm f_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_40)), not_null(y_39));
                {
                  f_40 = t;
                  if(((d_40 != NULL) && (d_40 != f_40)))
                    _fail(f_40);
                  else
                    d_40 = f_40;
                }
                t = not_null(d_40);
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
  ATerm n_40 = NULL;
  ATerm i_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_40 = NULL;
      t = term_n_23;
      {
        t = get_config_0(t);
        {
          o_40 = t;
          if(((n_40 != NULL) && (n_40 != o_40)))
            _fail(o_40);
          else
            n_40 = o_40;
        }
      }
      LocalPopChoice(o_24);
    }
  else
    {
      t = i_24;
      {
        ATerm t_5 (ATerm t)
        {
          ATerm u_5 (ATerm t)
          {
            ATerm p_40 = NULL;
            p_40 = t;
            if(((n_40 != NULL) && (n_40 != p_40)))
              _fail(p_40);
            else
              n_40 = p_40;
            return(t);
          }
          t = Program_1(t, u_5);
          return(t);
        }
        t = fetch_1(t, t_5);
      }
    }
  {
    t = term_r_24;
    {
      t = echo_0(t);
      {
        t = term_u_24;
        {
          t = table_get_0(t);
          {
            ATerm v_5 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, v_5);
            {
              ATerm w_5 (ATerm t)
              {
                ATerm q_40 = NULL;
                ATerm r_40 = NULL;
                r_40 = t;
                if(((q_40 != NULL) && (q_40 != r_40)))
                  _fail(r_40);
                else
                  q_40 = r_40;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_40)), term_v_24);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, w_5);
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
  ATerm a_25;
  a_25 = t;
  {
    ATerm w_40 = NULL;
    ATerm x_40 = NULL;
    x_40 = t;
    if(((w_40 != NULL) && (w_40 != x_40)))
      _fail(x_40);
    else
      w_40 = x_40;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, not_null(w_40)));
      t = printnl_0(t);
    }
  }
  t = a_25;
  return(t);
}
ATerm say_1 (ATerm t, ATerm l_73 (ATerm))
{
  ATerm b_25;
  b_25 = t;
  {
    t = l_73(t);
    t = debug_0(t);
  }
  t = b_25;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm w_54 (ATerm))
{
  ATerm e_41 = NULL,f_41 = NULL;
  e_41 = t;
  d_41 :
  if(match_cons(e_41, sym_Undefined_1))
    {
      f_41 = ATgetArgument(e_41, 0);
      {
        ATerm i_41 = NULL,k_41 = NULL;
        ATerm j_41 = NULL;
        t = SSLgetAnnotations(not_null(e_41));
        {
          j_41 = t;
          if(((i_41 != NULL) && (i_41 != j_41)))
            _fail(j_41);
          else
            i_41 = j_41;
        }
        {
          t = not_null(f_41);
          {
            ATerm m_41 = NULL;
            t = w_54(t);
            {
              k_41 = t;
              {
                ATerm n_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(k_41)), not_null(i_41));
                {
                  n_41 = t;
                  if(((m_41 != NULL) && (m_41 != n_41)))
                    _fail(n_41);
                  else
                    m_41 = n_41;
                }
                t = not_null(m_41);
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
ATerm fetch_1 (ATerm t, ATerm f_63 (ATerm))
{
  ATerm s_41 (ATerm t)
  {
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_63, _id);
        LocalPopChoice(d_25);
      }
    else
      {
        t = c_25;
        t = Cons_2(t, _id, s_41);
      }
    return(t);
  }
  t = s_41(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_77 (ATerm))
{
  t = fetch_1(t, r_77);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_41 = NULL;
  x_41 = t;
  w_41 :
  if(match_cons(x_41, sym_Help_0))
    {
      ATerm a_42 = NULL,c_42 = NULL;
      ATerm e_25;
      e_25 = t;
      {
        ATerm b_42 = NULL;
        t = SSLgetAnnotations(not_null(x_41));
        {
          b_42 = t;
          if(((a_42 != NULL) && (a_42 != b_42)))
            _fail(b_42);
          else
            a_42 = b_42;
        }
      }
      t = e_25;
      {
        ATerm d_42 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(a_42));
        {
          d_42 = t;
          if(((c_42 != NULL) && (c_42 != d_42)))
            _fail(d_42);
          else
            c_42 = d_42;
        }
        t = not_null(c_42);
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
  ATerm o_42 = NULL;
  o_42 = t;
  t = SSL_implode_string(not_null(o_42));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm f_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(i_25);
    }
  else
    {
      t = f_25;
      {
        ATerm t_42 = NULL,u_42 = NULL,f_43 = NULL;
        t_42 = t;
        s_42 :
        if(((ATgetType(t_42) == AT_LIST) && !(ATisEmpty(t_42))))
          {
            u_42 = ATgetFirst((ATermList) t_42);
            f_43 = (ATerm) ATgetNext((ATermList) t_42);
            {
              t = not_null(u_42);
              {
                ATerm x_5 (ATerm t)
                {
                  t = not_null(f_43);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, x_5);
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
  ATerm p_43 = NULL;
  ATerm r_43 = NULL;
  p_43 = t;
  {
    ATerm s_43 = NULL;
    ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL;
    t = not_null(p_43);
    {
      s_43 = t;
      {
        t = SSL_explode_term(not_null(s_43));
        {
          u_43 = t;
          n_43 :
          if(match_cons(u_43, sym__2))
            {
              v_43 = ATgetArgument(u_43, 0);
              w_43 = ATgetArgument(u_43, 1);
              o_43 :
              if(match_string(v_43, ""))
                {
                  if(((r_43 != NULL) && (r_43 != w_43)))
                    _fail(w_43);
                  else
                    r_43 = w_43;
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
      t = not_null(r_43);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_63 (ATerm))
{
  ATerm a_44 (ATerm t)
  {
    ATerm n_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_44);
        LocalPopChoice(o_25);
      }
    else
      {
        t = n_25;
        {
          t = Nil_0(t);
          t = l_63(t);
        }
      }
    return(t);
  }
  t = a_44(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL;
  d_44 = t;
  c_44 :
  if(match_cons(d_44, sym__2))
    {
      e_44 = ATgetArgument(d_44, 0);
      f_44 = ATgetArgument(d_44, 1);
      {
        t = not_null(e_44);
        {
          ATerm y_5 (ATerm t)
          {
            t = not_null(f_44);
            return(t);
          }
          t = at_end_1(t, y_5);
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
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm k_44 = NULL;
  k_44 = t;
  t = SSL_explode_string(not_null(k_44));
  return(t);
}
ATerm _2 (ATerm t, ATerm m_48 (ATerm), ATerm n_48 (ATerm))
{
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL;
  t_44 = t;
  s_44 :
  if(match_cons(t_44, sym__2))
    {
      u_44 = ATgetArgument(t_44, 0);
      v_44 = ATgetArgument(t_44, 1);
      {
        ATerm z_44 = NULL,b_45 = NULL;
        ATerm a_45 = NULL;
        t = SSLgetAnnotations(not_null(t_44));
        {
          a_45 = t;
          if(((z_44 != NULL) && (z_44 != a_45)))
            _fail(a_45);
          else
            z_44 = a_45;
        }
        {
          t = not_null(u_44);
          {
            ATerm d_45 = NULL;
            t = m_48(t);
            {
              b_45 = t;
              {
                t = not_null(v_44);
                {
                  ATerm f_45 = NULL;
                  t = n_48(t);
                  {
                    d_45 = t;
                    {
                      ATerm g_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(b_45), not_null(d_45)), not_null(z_44));
                      {
                        g_45 = t;
                        if(((f_45 != NULL) && (f_45 != g_45)))
                          _fail(g_45);
                        else
                          f_45 = g_45;
                      }
                      t = not_null(f_45);
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
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL;
  o_45 = t;
  n_45 :
  if(match_cons(o_45, sym__2))
    {
      p_45 = ATgetArgument(o_45, 0);
      q_45 = ATgetArgument(o_45, 1);
      {
        ATerm x_25;
        x_25 = t;
        t = SSL_printnl(not_null(p_45), not_null(q_45));
        t = x_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm k_73 (ATerm))
{
  ATerm y_25;
  y_25 = t;
  {
    ATerm w_45 = NULL,y_45 = NULL;
    ATerm z_25;
    z_25 = t;
    {
      ATerm x_45 = NULL;
      t = k_73(t);
      {
        x_45 = t;
        if(((w_45 != NULL) && (w_45 != x_45)))
          _fail(x_45);
        else
          w_45 = x_45;
      }
    }
    t = z_25;
    {
      ATerm z_45 = NULL;
      z_45 = t;
      if(((y_45 != NULL) && (y_45 != z_45)))
        _fail(z_45);
      else
        y_45 = z_45;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_45)), not_null(w_45)));
        t = printnl_0(t);
      }
    }
  }
  t = y_25;
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_62 (ATerm))
{
  ATerm c_46 (ATerm t)
  {
    ATerm a_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(c_26);
      }
    else
      {
        t = a_26;
        t = Cons_2(t, w_62, c_46);
      }
    return(t);
  }
  t = c_46(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm e_46 = NULL;
  e_46 = t;
  t = SSL_is_string(not_null(e_46));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm g_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(i_26);
    }
  else
    {
      t = g_26;
      {
        ATerm l_26 = t;
        int m_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_6 (ATerm t)
            {
              ATerm n_26 = t;
              int o_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(o_26);
                }
              else
                {
                  t = n_26;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, a_6);
            LocalPopChoice(m_26);
          }
        else
          {
            t = l_26;
            {
              ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL;
              n_46 = t;
              m_46 :
              if(match_cons(n_46, sym_Path_1))
                {
                  o_46 = ATgetArgument(n_46, 0);
                  t = not_null(o_46);
                }
              else
                {
                  if(match_cons(n_46, sym_Var_1))
                    {
                      o_46 = ATgetArgument(n_46, 0);
                      {
                        t = not_null(o_46);
                        {
                          ATerm p_26 = t;
                          int u_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(u_26);
                            }
                          else
                            {
                              t = p_26;
                              {
                                ATerm d_6 (ATerm t)
                                {
                                  t = term_v_26;
                                  return(t);
                                }
                                t = debug_1(t, d_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(n_46, sym_Prefix_2))
                        {
                          o_46 = ATgetArgument(n_46, 0);
                          p_46 = ATgetArgument(n_46, 1);
                          {
                            ATerm u_46 = NULL,w_46 = NULL;
                            ATerm w_26;
                            w_26 = t;
                            {
                              ATerm v_46 = NULL;
                              t = not_null(o_46);
                              {
                                t = eval_config_0(t);
                                {
                                  v_46 = t;
                                  if(((u_46 != NULL) && (u_46 != v_46)))
                                    _fail(v_46);
                                  else
                                    u_46 = v_46;
                                }
                              }
                            }
                            t = w_26;
                            {
                              ATerm x_46 = NULL;
                              t = not_null(p_46);
                              {
                                t = eval_config_0(t);
                                {
                                  x_46 = t;
                                  if(((w_46 != NULL) && (w_46 != x_46)))
                                    _fail(x_46);
                                  else
                                    w_46 = x_46;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_46), not_null(w_46));
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
  ATerm f_47 = NULL;
  f_47 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_x_26, not_null(f_47));
    {
      t = table_get_0(t);
      {
        ATerm y_26 = t;
        int d_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm e_27;
              e_27 = t;
              {
                ATerm h_47 = NULL;
                ATerm i_47 = NULL;
                i_47 = t;
                if(((h_47 != NULL) && (h_47 != i_47)))
                  _fail(i_47);
                else
                  h_47 = i_47;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_x_26, not_null(f_47), not_null(h_47));
                  t = table_put_0(t);
                }
              }
              t = e_27;
            }
            LocalPopChoice(d_27);
          }
        else
          {
            t = y_26;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm k_61 (ATerm))
{
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_61(t);
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL;
  n_47 = t;
  m_47 :
  if(match_cons(n_47, sym__2))
    {
      o_47 = ATgetArgument(n_47, 0);
      p_47 = ATgetArgument(n_47, 1);
      t = SSL_table_get(not_null(o_47), not_null(p_47));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL,l_48 = NULL;
  w_47 = t;
  v_47 :
  if(match_cons(w_47, sym__3))
    {
      x_47 = ATgetArgument(w_47, 0);
      y_47 = ATgetArgument(w_47, 1);
      l_48 = ATgetArgument(w_47, 2);
      {
        ATerm j_27;
        j_27 = t;
        {
          ATerm r_48 = NULL;
          ATerm s_48 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_47), not_null(y_47));
          {
            ATerm k_27 = t;
            int l_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(l_27);
              }
            else
              {
                t = k_27;
                t = (ATerm) ATempty;
              }
            {
              s_48 = t;
              if(((r_48 != NULL) && (r_48 != s_48)))
                _fail(s_48);
              else
                r_48 = s_48;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_47), not_null(y_47), (ATerm) ATinsert(CheckATermList(not_null(r_48)), not_null(l_48)));
            t = table_put_0(t);
          }
        }
        t = j_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm w_78 (ATerm))
{
  ATerm w_48 = NULL;
  ATerm x_48 = NULL;
  t = term_t_16;
  {
    t = w_78(t);
    {
      x_48 = t;
      if(((w_48 != NULL) && (w_48 != x_48)))
        _fail(x_48);
      else
        w_48 = x_48;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_24, term_t_24, not_null(w_48));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL;
  d_49 = t;
  c_49 :
  if(match_string(d_49, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(d_49) == AT_LIST) && !(ATisEmpty(d_49))))
        {
          e_49 = ATgetFirst((ATermList) d_49);
          f_49 = (ATerm) ATgetNext((ATermList) d_49);
          {
            ATerm i_49 = NULL;
            ATerm v_27;
            v_27 = t;
            {
              t = not_null(e_49);
              t = a_0(t);
            }
            t = v_27;
            {
              ATerm j_49 = NULL;
              t = term_t_16;
              {
                t = d_0(t);
                {
                  j_49 = t;
                  if(((i_49 != NULL) && (i_49 != j_49)))
                    _fail(j_49);
                  else
                    i_49 = j_49;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(f_49)), not_null(i_49));
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
  ATerm e_6 (ATerm t)
  {
    ATerm o_49 = NULL;
    o_49 = t;
    n_49 :
    if(!(match_string(o_49, "--help")))
      {
        if(!(match_string(o_49, "-h")))
          {
            if(!(match_string(o_49, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm f_6 (ATerm t)
  {
    t = term_x_27;
    {
      t = set_config_0(t);
      t = term_y_27;
    }
    return(t);
  }
  ATerm h_6 (ATerm t)
  {
    t = term_z_27;
    return(t);
  }
  t = Option_3(t, e_6, f_6, h_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL;
  r_49 = t;
  q_49 :
  if(((ATgetType(r_49) == AT_LIST) && !(ATisEmpty(r_49))))
    {
      s_49 = ATgetFirst((ATermList) r_49);
      t_49 = (ATerm) ATgetNext((ATermList) r_49);
      t = (ATerm) ATinsert(CheckATermList(not_null(t_49)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(s_49)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm v_49 (ATerm), ATerm w_49 (ATerm))
{
  ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL;
  f_50 = t;
  e_50 :
  if(((ATgetType(f_50) == AT_LIST) && !(ATisEmpty(f_50))))
    {
      g_50 = ATgetFirst((ATermList) f_50);
      h_50 = (ATerm) ATgetNext((ATermList) f_50);
      {
        ATerm m_50 = NULL,o_50 = NULL;
        ATerm n_50 = NULL;
        t = SSLgetAnnotations(not_null(f_50));
        {
          n_50 = t;
          if(((m_50 != NULL) && (m_50 != n_50)))
            _fail(n_50);
          else
            m_50 = n_50;
        }
        {
          t = not_null(g_50);
          {
            ATerm q_50 = NULL;
            t = v_49(t);
            {
              o_50 = t;
              {
                t = not_null(h_50);
                {
                  ATerm s_50 = NULL;
                  t = w_49(t);
                  {
                    q_50 = t;
                    {
                      ATerm t_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(q_50)), not_null(o_50)), not_null(m_50));
                      {
                        t_50 = t;
                        if(((s_50 != NULL) && (s_50 != t_50)))
                          _fail(t_50);
                        else
                          s_50 = t_50;
                      }
                      t = not_null(s_50);
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
  ATerm d_51 = NULL;
  d_51 = t;
  c_51 :
  if(((ATgetType(d_51) == AT_LIST) && ATisEmpty(d_51)))
    {
      {
        ATerm f_51 = NULL,h_51 = NULL;
        ATerm a_28;
        a_28 = t;
        {
          ATerm g_51 = NULL;
          t = SSLgetAnnotations(not_null(d_51));
          {
            g_51 = t;
            if(((f_51 != NULL) && (f_51 != g_51)))
              _fail(g_51);
            else
              f_51 = g_51;
          }
        }
        t = a_28;
        {
          ATerm i_51 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(f_51));
          {
            i_51 = t;
            if(((h_51 != NULL) && (h_51 != i_51)))
              _fail(i_51);
            else
              h_51 = i_51;
          }
          t = not_null(h_51);
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
  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL;
  o_51 = t;
  n_51 :
  if(match_cons(o_51, sym__2))
    {
      p_51 = ATgetArgument(o_51, 0);
      q_51 = ATgetArgument(o_51, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_x_26, not_null(p_51), not_null(q_51));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm u_78 (ATerm))
{
  ATerm b_28;
  b_28 = t;
  {
    ATerm d_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_28;
        t = u_78(t);
        LocalPopChoice(e_28);
      }
    else
      {
        t = d_28;
        {
        }
      }
  }
  t = b_28;
  {
    ATerm i_6 (ATerm t)
    {
      ATerm y_51 = NULL;
      ATerm g_28;
      g_28 = t;
      {
        ATerm w_51 = NULL;
        ATerm x_51 = NULL;
        x_51 = t;
        if(((w_51 != NULL) && (w_51 != x_51)))
          _fail(x_51);
        else
          w_51 = x_51;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_23, not_null(w_51));
          t = set_config_0(t);
        }
      }
      t = g_28;
      {
        ATerm z_51 = NULL;
        z_51 = t;
        if(((y_51 != NULL) && (y_51 != z_51)))
          _fail(z_51);
        else
          y_51 = z_51;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_51));
      }
      return(t);
    }
    ATerm j_6 (ATerm t)
    {
      ATerm h_28 = t;
      int i_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_28 = t;
          int k_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(k_28);
            }
          else
            {
              t = j_28;
              {
                t = u_78(t);
                t = Cons_2(t, _id, j_6);
              }
            }
          LocalPopChoice(i_28);
        }
      else
        {
          t = h_28;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, i_6, j_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL;
  ATerm l_28;
  l_28 = t;
  {
    ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL;
    i_52 = t;
    e_52 :
    if(match_cons(i_52, sym__3))
      {
        j_52 = ATgetArgument(i_52, 0);
        k_52 = ATgetArgument(i_52, 1);
        l_52 = ATgetArgument(i_52, 2);
        {
          if(((f_52 != NULL) && (f_52 != j_52)))
            _fail(j_52);
          else
            f_52 = j_52;
          {
            if(((g_52 != NULL) && (g_52 != k_52)))
              _fail(k_52);
            else
              g_52 = k_52;
            {
              if(((h_52 != NULL) && (h_52 != l_52)))
                _fail(l_52);
              else
                h_52 = l_52;
              t = SSL_table_put(not_null(f_52), not_null(g_52), not_null(h_52));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = l_28;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm t_78 (ATerm))
{
  ATerm o_52 = NULL;
  ATerm q_28;
  q_28 = t;
  {
    t = term_r_28;
    t = table_put_0(t);
  }
  t = q_28;
  {
    ATerm m_6 (ATerm t)
    {
      ATerm s_28 = t;
      int t_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_78(t);
          LocalPopChoice(t_28);
        }
      else
        {
          t = s_28;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, m_6);
    {
      ATerm a_29 = t;
      int b_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_29;
          c_29 = t;
          {
            ATerm d_29 = t;
            int e_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_w_27;
                t = get_config_0(t);
                LocalPopChoice(e_29);
              }
            else
              {
                t = d_29;
                t = fetch_1(t, Help_0);
              }
          }
          t = c_29;
          {
            t = system_usage_0(t);
            {
              t = term_j_20;
              t = exit_0(t);
            }
          }
          LocalPopChoice(b_29);
        }
      else
        {
          t = a_29;
          {
            ATerm f_29 = t;
            int i_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_6 (ATerm t)
                {
                  ATerm s_6 (ATerm t)
                  {
                    ATerm p_52 = NULL;
                    p_52 = t;
                    if(((o_52 != NULL) && (o_52 != p_52)))
                      _fail(p_52);
                    else
                      o_52 = p_52;
                    return(t);
                  }
                  t = Undefined_1(t, s_6);
                  return(t);
                }
                t = fetch_1(t, n_6);
                {
                  ATerm t_6 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_52)), term_j_29);
                    return(t);
                  }
                  t = say_1(t, t_6);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_t_22;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(i_29);
              }
            else
              {
                t = f_29;
                {
                }
              }
          }
        }
      {
        ATerm l_29;
        l_29 = t;
        {
          t = term_s_24;
          t = table_destroy_0(t);
        }
        t = l_29;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm s_76 (ATerm), ATerm t_76 (ATerm))
{
  t = parse_options_1(t, q_76);
  {
    t = store_options_0(t);
    {
      t = s_76(t);
      {
        ATerm m_29 = t;
        int n_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, r_76);
            LocalPopChoice(n_29);
          }
        else
          {
            t = m_29;
            {
              ATerm o_29 = t;
              int p_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_76(t);
                  t = report_success_0(t);
                  LocalPopChoice(p_29);
                }
              else
                {
                  t = o_29;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm u_76 (ATerm), ATerm v_76 (ATerm))
{
  t = option_wrap_4(t, u_76, default_usage_0, _id, v_76);
  return(t);
}
ATerm term_to_dot_0 (ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_to_adot_options_0(t);
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm v_6 (ATerm t)
  {
    ATerm w_6 (ATerm t)
    {
      t = xtc_io_transform_1(t, to_adot_0);
      {
        ATerm b_7 (ATerm t)
        {
          t = term_z_29;
          return(t);
        }
        ATerm c_7 (ATerm t)
        {
          ATerm s_52 = NULL;
          ATerm t_52 = NULL;
          t = term_c_30;
          {
            t = xtc_find_0(t);
            {
              t_52 = t;
              if(((s_52 != NULL) && (s_52 != t_52)))
                _fail(t_52);
              else
                s_52 = t_52;
            }
          }
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_52)), term_d_30);
          return(t);
        }
        t = xtc_transform_2(t, b_7, c_7);
        {
          ATerm d_7 (ATerm t)
          {
            t = term_e_30;
            return(t);
          }
          t = xtc_transform_1(t, d_7);
        }
      }
      return(t);
    }
    t = xtc_io_1(t, w_6);
    return(t);
  }
  t = option_wrap_2(t, u_6, v_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = term_to_dot_0(t);
  return(t);
}
