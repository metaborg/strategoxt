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
ATerm term_m_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_p_29;
ATerm term_a_29;
ATerm term_p_28;
ATerm term_i_28;
ATerm term_f_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_k_27;
ATerm term_i_27;
ATerm term_i_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_b_25;
ATerm term_q_24;
ATerm term_h_24;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_p_22;
ATerm term_j_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_c_22;
ATerm term_p_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_w_19;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_s_16;
ATerm term_m_16;
ATerm term_i_16;
ATerm term_c_16;
ATerm term_u_15;
ATerm term_s_15;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_o_13;
ATerm term_j_13;
ATerm term_g_13;
ATerm term_y_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_t_11;
ATerm term_f_11;
ATerm term_x_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_j_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_i_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_f_8;
ATerm term_b_8;
ATerm term_w_7;
ATerm term_s_7;
ATerm term_m_7;
ATerm term_e_7;
ATerm term_d_7;
void init_constant_terms (void)
{
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym__2, term_e_7, term_m_7);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym__2, term_e_7, term_p_8);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_AttrId_2, term_y_12, term_j_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym__2, term_u_15, term_w_16);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym__2, term_s_15, term_w_16);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym__2, term_i_17, term_c_16);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym__2, term_h_20, term_w_16);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym__2, term_w_7, term_s_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_w_16);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym__2, term_c_22, term_w_16);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym__2, term_e_25, term_f_25);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym__2, term_a_28, term_w_16);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym__3, term_e_25, term_f_25, (ATerm) ATempty);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Dot-pretty.pp", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_1 (ATerm, ATerm p_73 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm u_58 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm w_58 (ATerm));
ATerm set_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm f_59 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm x_73 (ATerm), ATerm y_73 (ATerm));
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm n_58 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm o_73 (ATerm));
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm h_51 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm q_73 (ATerm), ATerm r_73 (ATerm));
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
ATerm string_as_chars_1 (ATerm, ATerm k_76 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm EdgeToDot_0 (ATerm);
ATerm ListEdgeToDot_0 (ATerm);
ATerm graph_to_adot_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm NodeId_0 (ATerm);
ATerm address_0 (ATerm);
ATerm term_to_graph_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm w_69 (ATerm), ATerm x_69 (ATerm));
ATerm union_1 (ATerm, ATerm s_69 (ATerm));
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm j_69 (ATerm), ATerm k_69 (ATerm), ATerm l_69 (ATerm));
ATerm foldr_3 (ATerm, ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm n_70 (ATerm));
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm v_58 (ATerm));
ATerm term_to_tree_0 (ATerm);
ATerm to_adot_0 (ATerm);
ATerm close_file_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm assert_1 (ATerm, ATerm j_74 (ATerm));
ATerm obsolete_1 (ATerm, ATerm x_74 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm xtc_io_transform_1 (ATerm, ATerm z_73 (ATerm));
ATerm term_to_adot_options_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm g_74 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm u_62 (ATerm), ATerm v_62 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm f_74 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm e_73 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm f_73 (ATerm));
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
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm j_70 (ATerm), ATerm k_70 (ATerm));
ATerm crush_2 (ATerm, ATerm h_69 (ATerm), ATerm i_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm r_58 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm p_77 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm x_79 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm w_79 (ATerm));
ATerm Program_1 (ATerm, ATerm u_55 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm r_74 (ATerm));
ATerm Undefined_1 (ATerm, ATerm v_55 (ATerm));
ATerm fetch_1 (ATerm, ATerm e_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_78 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm k_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm l_49 (ATerm), ATerm m_49 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm q_74 (ATerm));
ATerm map_1 (ATerm, ATerm v_63 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_80 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm u_50 (ATerm), ATerm v_50 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_79 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm y_79 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm y_77 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm z_77 (ATerm), ATerm a_78 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm j_73 (ATerm), ATerm k_73 (ATerm));
ATerm term_to_dot_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_transform_1 (ATerm t, ATerm p_73 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, p_73, b_0);
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
  ATerm j_1 = NULL;
  j_1 = t;
  {
    t = table_keys_0(t);
    {
      ATerm e_0 (ATerm t)
      {
        ATerm z_1 = NULL;
        ATerm s_2 = NULL;
        z_1 = t;
        {
          ATerm t_2 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_1), not_null(z_1));
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_1), not_null(s_2));
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
  ATerm c_7;
  c_7 = t;
  {
    ATerm d_3 = NULL;
    ATerm e_3 = NULL;
    e_3 = t;
    if(((d_3 != NULL) && (d_3 != e_3)))
      _fail(e_3);
    else
      d_3 = e_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_7, not_null(d_3));
      t = printnl_0(t);
    }
  }
  t = c_7;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm k_3 = NULL;
  ATerm m_3 = NULL,n_3 = NULL;
  k_3 = t;
  {
    ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(k_3)));
    {
      t = table_get_0(t);
      {
        o_3 = t;
        i_3 :
        if(((ATgetType(o_3) == AT_LIST) && !(ATisEmpty(o_3))))
          {
            p_3 = ATgetFirst((ATermList) o_3);
            s_3 = (ATerm) ATgetNext((ATermList) o_3);
            j_3 :
            if(match_cons(p_3, sym__2))
              {
                q_3 = ATgetArgument(p_3, 0);
                r_3 = ATgetArgument(p_3, 1);
                {
                  if(((m_3 != NULL) && (m_3 != q_3)))
                    _fail(q_3);
                  else
                    m_3 = q_3;
                  if(((n_3 != NULL) && (n_3 != r_3)))
                    _fail(r_3);
                  else
                    n_3 = r_3;
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
    t = not_null(n_3);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL;
  z_3 = t;
  y_3 :
  if(match_cons(z_3, sym__2))
    {
      a_4 = ATgetArgument(z_3, 0);
      b_4 = ATgetArgument(z_3, 1);
      {
        ATerm e_4 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(a_4)));
        {
          t = table_get_0(t);
          {
            ATerm f_0 (ATerm t)
            {
              ATerm f_4 = NULL,g_4 = NULL,h_4 = NULL;
              f_4 = t;
              x_3 :
              if(match_cons(f_4, sym__2))
                {
                  g_4 = ATgetArgument(f_4, 0);
                  h_4 = ATgetArgument(f_4, 1);
                  {
                    if(((b_4 != NULL) && (b_4 != g_4)))
                      _fail(g_4);
                    else
                      b_4 = g_4;
                    if(((e_4 != NULL) && (e_4 != h_4)))
                      _fail(h_4);
                    else
                      e_4 = h_4;
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
        t = not_null(e_4);
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
  ATerm g_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_7;
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
      LocalPopChoice(k_7);
    }
  else
    {
      t = g_7;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm u_58 (ATerm))
{
  ATerm t_7 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_7;
      v_7 = t;
      {
        ATerm l_4 = NULL;
        ATerm m_4 = NULL;
        t = term_w_7;
        {
          t = get_config_0(t);
          {
            m_4 = t;
            if(((l_4 != NULL) && (l_4 != m_4)))
              _fail(m_4);
            else
              l_4 = m_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_4), term_b_8);
          t = geq_0(t);
        }
      }
      t = v_7;
      t = u_58(t);
      LocalPopChoice(u_7);
    }
  else
    {
      t = t_7;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm w_58 (ATerm))
{
  ATerm c_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_8;
      e_8 = t;
      {
        ATerm p_4 = NULL;
        ATerm q_4 = NULL;
        t = term_w_7;
        {
          t = get_config_0(t);
          {
            q_4 = t;
            if(((p_4 != NULL) && (p_4 != q_4)))
              _fail(q_4);
            else
              p_4 = q_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_4), term_f_8);
          t = geq_0(t);
        }
      }
      t = e_8;
      t = w_58(t);
      LocalPopChoice(d_8);
    }
  else
    {
      t = c_8;
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
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL;
  w_4 = t;
  v_4 :
  if(match_cons(w_4, sym__3))
    {
      x_4 = ATgetArgument(w_4, 0);
      y_4 = ATgetArgument(w_4, 1);
      z_4 = ATgetArgument(w_4, 2);
      {
        ATerm k_8;
        k_8 = t;
        {
          ATerm d_5 = NULL;
          ATerm e_5 = NULL,g_5 = NULL;
          ATerm f_5 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_4), not_null(y_4));
          {
            ATerm l_8 = t;
            int m_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_8);
              }
            else
              {
                t = l_8;
                t = (ATerm) ATempty;
              }
            {
              f_5 = t;
              if(((e_5 != NULL) && (e_5 != f_5)))
                _fail(f_5);
              else
                e_5 = f_5;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_5), not_null(z_4));
            {
              t = union_1(t, eq_0);
              {
                g_5 = t;
                if(((d_5 != NULL) && (d_5 != g_5)))
                  _fail(g_5);
                else
                  d_5 = g_5;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_4), not_null(y_4), not_null(d_5));
            t = table_put_0(t);
          }
        }
        t = k_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm f_59 (ATerm))
{
  ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL;
  o_5 = t;
  n_5 :
  if(match_cons(o_5, sym__2))
    {
      p_5 = ATgetArgument(o_5, 0);
      q_5 = ATgetArgument(o_5, 1);
      {
        t = not_null(q_5);
        {
          ATerm q_0 (ATerm t)
          {
            ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL;
            t_5 = t;
            m_5 :
            if(match_cons(t_5, sym__2))
              {
                u_5 = ATgetArgument(t_5, 0);
                v_5 = ATgetArgument(t_5, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(p_5), not_null(u_5), not_null(v_5));
                  t = f_59(t);
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
  ATerm c_6 = NULL;
  ATerm e_6 = NULL;
  c_6 = t;
  {
    ATerm n_8 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(c_6)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_8;
      }
    {
      ATerm o_8;
      o_8 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_e_7, term_p_8, (ATerm) ATinsert(ATempty, not_null(c_6)));
        t = table_put_0(t);
      }
      t = o_8;
      {
        ATerm r_0 (ATerm t)
        {
          ATerm s_0 (ATerm t)
          {
            t = term_q_8;
            return(t);
          }
          t = debug_1(t, s_0);
          return(t);
        }
        t = if_verbose4_1(t, r_0);
        {
          ATerm r_8 = t;
          int z_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(z_8);
            }
          else
            {
              t = r_8;
              t = (ATerm) ATempty;
            }
          {
            ATerm t_0 (ATerm t)
            {
              ATerm u_0 (ATerm t)
              {
                t = term_e_9;
                return(t);
              }
              t = say_1(t, u_0);
              return(t);
            }
            t = if_verbose6_1(t, t_0);
            {
              ATerm f_6 = NULL;
              f_6 = t;
              if(((e_6 != NULL) && (e_6 != f_6)))
                _fail(f_6);
              else
                e_6 = f_6;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_e_7, not_null(e_6));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm v_0 (ATerm t)
                    {
                      ATerm w_0 (ATerm t)
                      {
                        t = term_f_9;
                        return(t);
                      }
                      t = say_1(t, w_0);
                      return(t);
                    }
                    t = if_verbose6_1(t, v_0);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_e_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(c_6)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm x_0 (ATerm t)
                          {
                            ATerm y_0 (ATerm t)
                            {
                              t = term_e_9;
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
  ATerm j_6 = NULL;
  j_6 = t;
  t = SSL_getenv(not_null(j_6));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_9;
      t = get_config_0(t);
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      {
        ATerm j_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_l_9;
            t = getenv_0(t);
            LocalPopChoice(k_9);
          }
        else
          {
            t = j_9;
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
      t = term_m_9;
      return(t);
    }
    t = debug_1(t, a_1);
    return(t);
  }
  t = if_verbose5_1(t, z_0);
  {
    ATerm p_9;
    p_9 = t;
    {
      ATerm u_9 = t;
      int v_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_w_9;
          t = table_get_0(t);
          LocalPopChoice(v_9);
        }
      else
        {
          t = u_9;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = p_9;
    {
      ATerm b_1 (ATerm t)
      {
        ATerm c_1 (ATerm t)
        {
          t = term_x_9;
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
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_1 (ATerm t)
      {
        ATerm e_1 (ATerm t)
        {
          t = term_a_10;
          return(t);
        }
        t = debug_1(t, e_1);
        return(t);
      }
      t = if_verbose5_1(t, d_1);
      {
        t = xtc_load_0(t);
        {
          ATerm e_10 = t;
          int f_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(f_10);
            }
          else
            {
              t = e_10;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm f_1 (ATerm t)
            {
              ATerm g_1 (ATerm t)
              {
                t = term_a_10;
                return(t);
              }
              t = debug_1(t, g_1);
              return(t);
            }
            t = if_verbose5_1(t, f_1);
          }
        }
      }
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      {
        ATerm n_6 = NULL;
        ATerm o_6 = NULL;
        o_6 = t;
        if(((n_6 != NULL) && (n_6 != o_6)))
          _fail(o_6);
        else
          n_6 = o_6;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_10), not_null(n_6)), term_j_10);
          {
            t = error_0(t);
            {
              ATerm h_1 (ATerm t)
              {
                t = term_e_7;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm i_1 (ATerm t)
                    {
                      t = term_n_10;
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
ATerm xtc_transform_term_2 (ATerm t, ATerm x_73 (ATerm), ATerm y_73 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, x_73, y_73);
    t = read_from_0(t);
  }
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL;
  s_6 = t;
  r_6 :
  if(match_cons(s_6, sym__2))
    {
      t_6 = ATgetArgument(s_6, 0);
      u_6 = ATgetArgument(s_6, 1);
      t = SSL_execvp(not_null(t_6), not_null(u_6));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm z_6 = NULL;
  z_6 = t;
  t = SSL_waitpid(not_null(z_6));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm n_58 (ATerm))
{
  ATerm j_7 = NULL;
  ATerm l_7 = NULL;
  j_7 = t;
  {
    t = fork_0(t);
    {
      l_7 = t;
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_7 = NULL;
            n_7 = t;
            f_7 :
            if(match_int(n_7, 0))
              {
                t = not_null(j_7);
                t = n_58(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(p_10);
          }
        else
          {
            t = o_10;
            {
              ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL;
              t = not_null(l_7);
              {
                t = waitpid_0(t);
                {
                  o_7 = t;
                  h_7 :
                  if(match_cons(o_7, sym_WaitStatus_3))
                    {
                      p_7 = ATgetArgument(o_7, 0);
                      q_7 = ATgetArgument(o_7, 1);
                      r_7 = ATgetArgument(o_7, 2);
                      i_7 :
                      if(match_int(p_7, 0))
                        {
                          t = not_null(j_7);
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
          }
      }
    }
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
  y_7 = t;
  x_7 :
  if(match_cons(y_7, sym__2))
    {
      z_7 = ATgetArgument(y_7, 0);
      a_8 = ATgetArgument(y_7, 1);
      {
        ATerm k_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_7), not_null(a_8));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, k_1);
      }
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
ATerm xtc_command_1 (ATerm t, ATerm o_73 (ATerm))
{
  ATerm g_8 = NULL;
  ATerm q_10;
  q_10 = t;
  {
    ATerm h_8 = NULL;
    t = o_73(t);
    {
      t = xtc_find_0(t);
      {
        h_8 = t;
        if(((g_8 != NULL) && (g_8 != h_8)))
          _fail(h_8);
        else
          g_8 = h_8;
      }
    }
  }
  t = q_10;
  {
    ATerm w_10;
    w_10 = t;
    {
      ATerm i_8 = NULL;
      ATerm j_8 = NULL;
      j_8 = t;
      if(((i_8 != NULL) && (i_8 != j_8)))
        _fail(j_8);
      else
        i_8 = j_8;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_8), not_null(i_8));
        t = call_0(t);
      }
    }
    t = w_10;
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm t_8 = NULL,u_8 = NULL;
  t_8 = t;
  s_8 :
  if(match_cons(t_8, sym_stdin_0))
    {
      ATerm v_8 = NULL;
      ATerm w_8 = NULL;
      ATerm x_8 = NULL;
      t = xtc_new_file_0(t);
      {
        w_8 = t;
        {
          if(((v_8 != NULL) && (v_8 != w_8)))
            _fail(w_8);
          else
            v_8 = w_8;
          {
            ATerm y_8 = NULL;
            t = o_0(t);
            {
              y_8 = t;
              if(((x_8 != NULL) && (x_8 != y_8)))
                _fail(y_8);
              else
                x_8 = y_8;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_8), (ATerm) ATinsert(ATinsert(ATempty, not_null(v_8)), term_x_10));
              {
                ATerm y_10 = t;
                int e_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(e_11);
                  }
                else
                  {
                    t = y_10;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(v_8);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_8));
    }
  else
    {
      if(match_cons(t_8, sym_FILE_1))
        {
          u_8 = ATgetArgument(t_8, 0);
          {
            ATerm a_9 = NULL;
            ATerm b_9 = NULL;
            t = not_null(u_8);
            {
              ATerm c_9 = NULL;
              t = xtc_new_file_0(t);
              {
                b_9 = t;
                {
                  if(((a_9 != NULL) && (a_9 != b_9)))
                    _fail(b_9);
                  else
                    a_9 = b_9;
                  {
                    ATerm d_9 = NULL;
                    t = o_0(t);
                    {
                      d_9 = t;
                      if(((c_9 != NULL) && (c_9 != d_9)))
                        _fail(d_9);
                      else
                        c_9 = d_9;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(c_9), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(a_9)), term_x_10), not_null(u_8)), term_f_11));
                      {
                        ATerm g_11 = t;
                        int m_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(m_11);
                          }
                        else
                          {
                            t = g_11;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(a_9);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_9));
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
  ATerm o_9 = NULL;
  o_9 = t;
  n_9 :
  if(match_cons(o_9, sym_stdin_0))
    {
      ATerm q_9 = NULL,s_9 = NULL;
      ATerm n_11;
      n_11 = t;
      {
        ATerm r_9 = NULL;
        t = SSLgetAnnotations(not_null(o_9));
        {
          r_9 = t;
          if(((q_9 != NULL) && (q_9 != r_9)))
            _fail(r_9);
          else
            q_9 = r_9;
        }
      }
      t = n_11;
      {
        ATerm t_9 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(q_9));
        {
          t_9 = t;
          if(((s_9 != NULL) && (s_9 != t_9)))
            _fail(t_9);
          else
            s_9 = t_9;
        }
        t = not_null(s_9);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm h_51 (ATerm))
{
  ATerm c_10 = NULL,d_10 = NULL;
  c_10 = t;
  b_10 :
  if(match_cons(c_10, sym_FILE_1))
    {
      d_10 = ATgetArgument(c_10, 0);
      {
        ATerm g_10 = NULL,i_10 = NULL;
        ATerm h_10 = NULL;
        t = SSLgetAnnotations(not_null(c_10));
        {
          h_10 = t;
          if(((g_10 != NULL) && (g_10 != h_10)))
            _fail(h_10);
          else
            g_10 = h_10;
        }
        {
          t = not_null(d_10);
          {
            ATerm k_10 = NULL;
            t = h_51(t);
            {
              i_10 = t;
              {
                ATerm l_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(i_10)), not_null(g_10));
                {
                  l_10 = t;
                  if(((k_10 != NULL) && (k_10 != l_10)))
                    _fail(l_10);
                  else
                    k_10 = l_10;
                }
                t = not_null(k_10);
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
ATerm xtc_transform_2 (ATerm t, ATerm q_73 (ATerm), ATerm r_73 (ATerm))
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_11 = t;
      int s_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(s_11);
        }
      else
        {
          t = r_11;
          t = stdin_0(t);
        }
      LocalPopChoice(p_11);
      t = xtc_transform_file_2(t, q_73, r_73);
    }
  else
    {
      t = o_11;
      t = xtc_transform_term_2(t, q_73, r_73);
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
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
  t_10 = t;
  r_10 :
  if(((ATgetType(t_10) == AT_LIST) && !(ATisEmpty(t_10))))
    {
      u_10 = ATgetFirst((ATermList) t_10);
      v_10 = (ATerm) ATgetNext((ATermList) t_10);
      s_10 :
      if(match_int(u_10, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(v_10)), term_y_11), term_t_11);
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
  ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL;
  b_11 = t;
  z_10 :
  if(((ATgetType(b_11) == AT_LIST) && !(ATisEmpty(b_11))))
    {
      c_11 = ATgetFirst((ATermList) b_11);
      d_11 = (ATerm) ATgetNext((ATermList) b_11);
      a_11 :
      if(match_int(c_11, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(d_11)), term_t_11), term_t_11);
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
  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL;
  j_11 = t;
  h_11 :
  if(((ATgetType(j_11) == AT_LIST) && !(ATisEmpty(j_11))))
    {
      k_11 = ATgetFirst((ATermList) j_11);
      l_11 = (ATerm) ATgetNext((ATermList) j_11);
      i_11 :
      if(match_int(k_11, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(l_11)), term_z_11), term_t_11);
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
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0(t);
      {
        ATerm l_1 (ATerm t)
        {
          t = Cons_2(t, _id, escape_chars_0);
          return(t);
        }
        t = Cons_2(t, _id, l_1);
      }
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
      {
        ATerm i_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            LocalPopChoice(k_12);
          }
        else
          {
            t = i_12;
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
  ATerm q_11 = NULL;
  q_11 = t;
  t = SSL_is_int(not_null(q_11));
  return(t);
}
ATerm quote_chars_0 (ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
  v_11 = t;
  u_11 :
  if(match_cons(v_11, sym__2))
    {
      w_11 = ATgetArgument(v_11, 0);
      x_11 = ATgetArgument(v_11, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_11)), not_null(w_11)), (ATerm) ATinsert(ATempty, not_null(w_11)));
        {
          ATerm l_12 = t;
          int m_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_two_lists_0(t);
              LocalPopChoice(m_12);
            }
          else
            {
              t = l_12;
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
  ATerm c_12 = NULL;
  ATerm d_12 = NULL;
  d_12 = t;
  if(((c_12 != NULL) && (c_12 != d_12)))
    _fail(d_12);
  else
    c_12 = d_12;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_11, not_null(c_12));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm k_76 (ATerm))
{
  t = explode_string_0(t);
  {
    t = k_76(t);
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
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
  q_12 = t;
  p_12 :
  if(match_cons(q_12, sym__2))
    {
      r_12 = ATgetArgument(q_12, 0);
      s_12 = ATgetArgument(q_12, 1);
      {
        ATerm n_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_12 = NULL,w_12 = NULL,c_13 = NULL,e_13 = NULL;
            ATerm t_12;
            t_12 = t;
            {
              ATerm x_12 = NULL;
              ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL;
              t = not_null(s_12);
              {
                x_12 = t;
                {
                  t = SSL_explode_term(not_null(x_12));
                  {
                    z_12 = t;
                    j_12 :
                    if(match_cons(z_12, sym__2))
                      {
                        a_13 = ATgetArgument(z_12, 0);
                        b_13 = ATgetArgument(z_12, 1);
                        {
                          if(((v_12 != NULL) && (v_12 != a_13)))
                            _fail(a_13);
                          else
                            v_12 = a_13;
                          if(((w_12 != NULL) && (w_12 != b_13)))
                            _fail(b_13);
                          else
                            w_12 = b_13;
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
            t = t_12;
            {
              ATerm u_12;
              u_12 = t;
              {
                ATerm d_13 = NULL;
                t = not_null(v_12);
                {
                  t = string_as_chars_1(t, escape_chars_0);
                  {
                    t = string_as_chars_1(t, double_quote_chars_0);
                    {
                      d_13 = t;
                      if(((c_13 != NULL) && (c_13 != d_13)))
                        _fail(d_13);
                      else
                        c_13 = d_13;
                    }
                  }
                }
              }
              t = u_12;
              {
                ATerm h_13 = NULL;
                t = not_null(w_12);
                {
                  ATerm m_1 (ATerm t)
                  {
                    ATerm f_13 = NULL;
                    f_13 = t;
                    t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_12)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_13)))));
                    return(t);
                  }
                  t = map_1(t, m_1);
                  {
                    h_13 = t;
                    if(((e_13 != NULL) && (e_13 != h_13)))
                      _fail(h_13);
                    else
                      e_13 = h_13;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(e_13)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_12)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_y_12, not_null(c_13)))))));
              }
            }
            LocalPopChoice(o_12);
          }
        else
          {
            t = n_12;
            {
              ATerm k_13 = NULL;
              ATerm l_13 = NULL,n_13 = NULL;
              t = not_null(s_12);
              {
                t = is_int_0(t);
                {
                  ATerm m_13 = NULL;
                  t = not_null(s_12);
                  {
                    t = int_to_string_0(t);
                    {
                      t = string_as_chars_1(t, escape_chars_0);
                      {
                        m_13 = t;
                        if(((l_13 != NULL) && (l_13 != m_13)))
                          _fail(m_13);
                        else
                          l_13 = m_13;
                      }
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_13), not_null(l_13)), term_g_13);
                    {
                      t = concat_strings_0(t);
                      {
                        n_13 = t;
                        if(((k_13 != NULL) && (k_13 != n_13)))
                          _fail(n_13);
                        else
                          k_13 = n_13;
                      }
                    }
                  }
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_12)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_y_12, not_null(k_13)))))));
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
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL;
  b_14 = t;
  a_14 :
  if(match_cons(b_14, sym__2))
    {
      c_14 = ATgetArgument(b_14, 0);
      d_14 = ATgetArgument(b_14, 1);
      {
        ATerm g_14 = NULL;
        ATerm i_13;
        i_13 = t;
        {
          t = not_null(d_14);
          t = is_list_0(t);
        }
        t = i_13;
        {
          ATerm j_14 = NULL;
          t = not_null(d_14);
          {
            ATerm n_1 (ATerm t)
            {
              ATerm h_14 = NULL;
              h_14 = t;
              t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_14)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_14)))));
              return(t);
            }
            t = map_1(t, n_1);
            {
              j_14 = t;
              if(((g_14 != NULL) && (g_14 != j_14)))
                _fail(j_14);
              else
                g_14 = j_14;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(g_14)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_14)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_o_13)))));
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
  ATerm p_14 = NULL;
  ATerm r_14 = NULL;
  p_14 = t;
  {
    ATerm s_14 = NULL;
    t = not_null(p_14);
    {
      ATerm o_1 (ATerm t)
      {
        ATerm p_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ListEdgeToDot_0(t);
            LocalPopChoice(q_13);
          }
        else
          {
            t = p_13;
            t = EdgeToDot_0(t);
          }
        return(t);
      }
      t = map_1(t, o_1);
      {
        t = concat_0(t);
        {
          s_14 = t;
          if(((r_14 != NULL) && (r_14 != s_14)))
            _fail(s_14);
          else
            r_14 = s_14;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_r_13, not_null(r_14));
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm w_14 = NULL;
  w_14 = t;
  t = SSL_int_to_string(not_null(w_14));
  return(t);
}
ATerm NodeId_0 (ATerm t)
{
  ATerm a_15 = NULL;
  ATerm b_15 = NULL;
  t = int_to_string_0(t);
  {
    b_15 = t;
    if(((a_15 != NULL) && (a_15 != b_15)))
      _fail(b_15);
    else
      a_15 = b_15;
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, term_s_13, not_null(a_15));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm address_0 (ATerm t)
{
  ATerm e_15 = NULL;
  e_15 = t;
  t = SSL_address(not_null(e_15));
  return(t);
}
ATerm term_to_graph_0 (ATerm t)
{
  ATerm k_15 = NULL,m_15 = NULL,o_15 = NULL;
  ATerm t_13;
  t_13 = t;
  {
    ATerm l_15 = NULL;
    t = address_0(t);
    {
      t = NodeId_0(t);
      {
        l_15 = t;
        if(((k_15 != NULL) && (k_15 != l_15)))
          _fail(l_15);
        else
          k_15 = l_15;
      }
    }
  }
  t = t_13;
  {
    ATerm u_13;
    u_13 = t;
    {
      ATerm n_15 = NULL;
      ATerm v_13 = t;
      int w_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_1 (ATerm t)
          {
            t = address_0(t);
            t = NodeId_0(t);
            return(t);
          }
          t = map_1(t, p_1);
          LocalPopChoice(w_13);
        }
      else
        {
          t = v_13;
          {
            ATerm q_1 (ATerm t)
            {
              t = address_0(t);
              t = NodeId_0(t);
              return(t);
            }
            t = _all(t, q_1);
          }
        }
      {
        n_15 = t;
        if(((m_15 != NULL) && (m_15 != n_15)))
          _fail(n_15);
        else
          m_15 = n_15;
      }
    }
    t = u_13;
    {
      ATerm p_15 = NULL;
      ATerm x_13 = t;
      int y_13 = stack_ptr;
      if((PushChoice() == 0))
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
          t = foldr_3(t, r_1, s_1, term_to_graph_0);
          LocalPopChoice(y_13);
        }
      else
        {
          t = x_13;
          {
            ATerm t_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            ATerm u_1 (ATerm t)
            {
              t = union_1(t, eq_0);
              return(t);
            }
            t = crush_3(t, t_1, u_1, term_to_graph_0);
          }
        }
      {
        p_15 = t;
        if(((o_15 != NULL) && (o_15 != p_15)))
          _fail(p_15);
        else
          o_15 = p_15;
      }
      t = (ATerm) ATinsert(CheckATermList(not_null(o_15)), (ATerm) ATmakeAppl(sym__2, not_null(k_15), not_null(m_15)));
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
  w_15 = t;
  v_15 :
  if(match_cons(w_15, sym__2))
    {
      x_15 = ATgetArgument(w_15, 0);
      y_15 = ATgetArgument(w_15, 1);
      if(((x_15 != NULL) && (x_15 != y_15)))
        _fail(y_15);
      else
        x_15 = y_15;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm w_69 (ATerm), ATerm x_69 (ATerm))
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
  e_16 = t;
  d_16 :
  if(((ATgetType(e_16) == AT_LIST) && !(ATisEmpty(e_16))))
    {
      f_16 = ATgetFirst((ATermList) e_16);
      g_16 = (ATerm) ATgetNext((ATermList) e_16);
      {
        t = x_69(t);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm j_16 = NULL;
            j_16 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_16), not_null(j_16));
              t = w_69(t);
            }
            return(t);
          }
          t = fetch_1(t, v_1);
        }
        t = not_null(g_16);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm s_69 (ATerm))
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
  p_16 = t;
  o_16 :
  if(match_cons(p_16, sym__2))
    {
      q_16 = ATgetArgument(p_16, 0);
      r_16 = ATgetArgument(p_16, 1);
      {
        t = not_null(q_16);
        {
          ATerm v_16 (ATerm t)
          {
            ATerm z_13 = t;
            int e_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(r_16);
                LocalPopChoice(e_14);
              }
            else
              {
                t = z_13;
                {
                  ATerm f_14 = t;
                  int i_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_1 (ATerm t)
                      {
                        t = not_null(r_16);
                        return(t);
                      }
                      t = HdMember_p__2(t, s_69, w_1);
                      t = v_16(t);
                      LocalPopChoice(i_14);
                    }
                  else
                    {
                      t = f_14;
                      t = Cons_2(t, _id, v_16);
                    }
                }
              }
            return(t);
          }
          t = v_16(t);
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
ATerm crush_3 (ATerm t, ATerm j_69 (ATerm), ATerm k_69 (ATerm), ATerm l_69 (ATerm))
{
  ATerm a_17 = NULL;
  ATerm c_17 = NULL;
  a_17 = t;
  {
    ATerm d_17 = NULL;
    ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL;
    t = not_null(a_17);
    {
      d_17 = t;
      {
        t = SSL_explode_term(not_null(d_17));
        {
          f_17 = t;
          z_16 :
          if(match_cons(f_17, sym__2))
            {
              g_17 = ATgetArgument(f_17, 0);
              h_17 = ATgetArgument(f_17, 1);
              if(((c_17 != NULL) && (c_17 != h_17)))
                _fail(h_17);
              else
                c_17 = h_17;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(c_17);
      t = foldr_3(t, j_69, k_69, l_69);
    }
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm n_70 (ATerm))
{
  ATerm k_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_70(t);
      LocalPopChoice(l_14);
    }
  else
    {
      t = k_14;
      {
        ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
        p_17 = t;
        o_17 :
        if(((ATgetType(p_17) == AT_LIST) && !(ATisEmpty(p_17))))
          {
            q_17 = ATgetFirst((ATermList) p_17);
            r_17 = (ATerm) ATgetNext((ATermList) p_17);
            {
              ATerm u_17 = NULL,w_17 = NULL;
              ATerm m_14;
              m_14 = t;
              {
                ATerm v_17 = NULL;
                t = not_null(q_17);
                {
                  t = n_70(t);
                  {
                    v_17 = t;
                    if(((u_17 != NULL) && (u_17 != v_17)))
                      _fail(v_17);
                    else
                      u_17 = v_17;
                  }
                }
              }
              t = m_14;
              {
                ATerm x_17 = NULL;
                t = not_null(r_17);
                {
                  t = foldr_3(t, l_70, m_70, n_70);
                  {
                    x_17 = t;
                    if(((w_17 != NULL) && (w_17 != x_17)))
                      _fail(x_17);
                    else
                      w_17 = x_17;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_17), not_null(w_17));
                  t = m_70(t);
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
  ATerm j_18 = NULL;
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  j_18 = t;
  {
    ATerm o_18 = NULL;
    ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,x_18 = NULL;
    t = not_null(j_18);
    {
      o_18 = t;
      {
        t = SSL_explode_term(not_null(o_18));
        {
          q_18 = t;
          f_18 :
          if(match_cons(q_18, sym__2))
            {
              r_18 = ATgetArgument(q_18, 0);
              s_18 = ATgetArgument(q_18, 1);
              g_18 :
              if(match_string(r_18, ""))
                {
                  h_18 :
                  if(((ATgetType(s_18) == AT_LIST) && !(ATisEmpty(s_18))))
                    {
                      t_18 = ATgetFirst((ATermList) s_18);
                      u_18 = (ATerm) ATgetNext((ATermList) s_18);
                      i_18 :
                      if(((ATgetType(u_18) == AT_LIST) && !(ATisEmpty(u_18))))
                        {
                          v_18 = ATgetFirst((ATermList) u_18);
                          x_18 = (ATerm) ATgetNext((ATermList) u_18);
                          {
                            if(((l_18 != NULL) && (l_18 != t_18)))
                              _fail(t_18);
                            else
                              l_18 = t_18;
                            {
                              if(((n_18 != NULL) && (n_18 != v_18)))
                                _fail(v_18);
                              else
                                n_18 = v_18;
                              if(((m_18 != NULL) && (m_18 != x_18)))
                                _fail(x_18);
                              else
                                m_18 = x_18;
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
    t = not_null(n_18);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm m_19 = NULL;
  ATerm q_19 = NULL,r_19 = NULL;
  m_19 = t;
  {
    ATerm s_19 = NULL;
    ATerm u_19 = NULL,v_19 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL;
    t = not_null(m_19);
    {
      s_19 = t;
      {
        t = SSL_explode_term(not_null(s_19));
        {
          u_19 = t;
          j_19 :
          if(match_cons(u_19, sym__2))
            {
              v_19 = ATgetArgument(u_19, 0);
              b_20 = ATgetArgument(u_19, 1);
              k_19 :
              if(match_string(v_19, ""))
                {
                  l_19 :
                  if(((ATgetType(b_20) == AT_LIST) && !(ATisEmpty(b_20))))
                    {
                      c_20 = ATgetFirst((ATermList) b_20);
                      d_20 = (ATerm) ATgetNext((ATermList) b_20);
                      {
                        if(((r_19 != NULL) && (r_19 != c_20)))
                          _fail(c_20);
                        else
                          r_19 = c_20;
                        if(((q_19 != NULL) && (q_19 != d_20)))
                          _fail(d_20);
                        else
                          q_19 = d_20;
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
    t = not_null(r_19);
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm v_58 (ATerm))
{
  ATerm n_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_14;
      q_14 = t;
      {
        ATerm i_20 = NULL;
        ATerm j_20 = NULL;
        t = term_w_7;
        {
          t = get_config_0(t);
          {
            j_20 = t;
            if(((i_20 != NULL) && (i_20 != j_20)))
              _fail(j_20);
            else
              i_20 = j_20;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_20), term_t_14);
          t = geq_0(t);
        }
      }
      t = q_14;
      t = v_58(t);
      LocalPopChoice(o_14);
    }
  else
    {
      t = n_14;
      {
      }
    }
  return(t);
}
ATerm term_to_tree_0 (ATerm t)
{
  ATerm y_20 = NULL,e_21 = NULL;
  ATerm x_1 (ATerm t)
  {
    ATerm y_1 (ATerm t)
    {
      t = term_u_14;
      return(t);
    }
    t = debug_1(t, y_1);
    return(t);
  }
  t = if_verbose5_1(t, x_1);
  {
    ATerm v_14;
    v_14 = t;
    {
      ATerm z_20 = NULL;
      t = new_0(t);
      {
        z_20 = t;
        if(((y_20 != NULL) && (y_20 != z_20)))
          _fail(z_20);
        else
          y_20 = z_20;
      }
    }
    t = v_14;
    {
      ATerm f_21 = NULL;
      f_21 = t;
      if(((e_21 != NULL) && (e_21 != f_21)))
        _fail(f_21);
      else
        e_21 = f_21;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_20), not_null(e_21));
        {
          ATerm d_22 (ATerm t)
          {
            ATerm x_21 = NULL,z_21 = NULL;
            ATerm a_2 (ATerm t)
            {
              ATerm x_14 = t;
              int y_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_2 (ATerm t)
                  {
                    ATerm n_21 = NULL,q_21 = NULL;
                    ATerm z_14;
                    z_14 = t;
                    {
                      ATerm o_21 = NULL;
                      t = new_0(t);
                      {
                        o_21 = t;
                        if(((n_21 != NULL) && (n_21 != o_21)))
                          _fail(o_21);
                        else
                          n_21 = o_21;
                      }
                    }
                    t = z_14;
                    {
                      ATerm r_21 = NULL;
                      r_21 = t;
                      if(((q_21 != NULL) && (q_21 != r_21)))
                        _fail(r_21);
                      else
                        q_21 = r_21;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(n_21), not_null(q_21));
                    }
                    return(t);
                  }
                  t = map_1(t, b_2);
                  LocalPopChoice(y_14);
                }
              else
                {
                  t = x_14;
                  {
                    ATerm c_2 (ATerm t)
                    {
                      ATerm t_21 = NULL,v_21 = NULL;
                      ATerm c_15;
                      c_15 = t;
                      {
                        ATerm u_21 = NULL;
                        t = new_0(t);
                        {
                          u_21 = t;
                          if(((t_21 != NULL) && (t_21 != u_21)))
                            _fail(u_21);
                          else
                            t_21 = u_21;
                        }
                      }
                      t = c_15;
                      {
                        ATerm w_21 = NULL;
                        w_21 = t;
                        if(((v_21 != NULL) && (v_21 != w_21)))
                          _fail(w_21);
                        else
                          v_21 = w_21;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(t_21), not_null(v_21));
                      }
                      return(t);
                    }
                    t = _all(t, c_2);
                  }
                }
              return(t);
            }
            t = _2(t, _id, a_2);
            {
              ATerm d_15;
              d_15 = t;
              {
                ATerm y_21 = NULL;
                ATerm d_2 (ATerm t)
                {
                  ATerm f_15 = t;
                  int g_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = map_1(t, Fst_0);
                      LocalPopChoice(g_15);
                    }
                  else
                    {
                      t = f_15;
                      t = _all(t, Fst_0);
                    }
                  return(t);
                }
                t = _2(t, _id, d_2);
                {
                  y_21 = t;
                  if(((x_21 != NULL) && (x_21 != y_21)))
                    _fail(y_21);
                  else
                    x_21 = y_21;
                }
              }
              t = d_15;
              {
                ATerm a_22 = NULL;
                t = Snd_0(t);
                {
                  ATerm h_15 = t;
                  int i_15 = stack_ptr;
                  if((PushChoice() == 0))
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
                      t = foldr_3(t, e_2, f_2, d_22);
                      LocalPopChoice(i_15);
                    }
                  else
                    {
                      t = h_15;
                      {
                        ATerm g_2 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        ATerm h_2 (ATerm t)
                        {
                          t = union_1(t, eq_0);
                          return(t);
                        }
                        t = crush_3(t, g_2, h_2, d_22);
                      }
                    }
                  {
                    a_22 = t;
                    if(((z_21 != NULL) && (z_21 != a_22)))
                      _fail(a_22);
                    else
                      z_21 = a_22;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(z_21)), not_null(x_21));
              }
            }
            return(t);
          }
          t = d_22(t);
        }
      }
    }
  }
  return(t);
}
ATerm to_adot_0 (ATerm t)
{
  ATerm j_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_15;
      r_15 = t;
      {
        t = term_s_15;
        t = get_config_0(t);
      }
      t = r_15;
      t = term_to_tree_0(t);
      LocalPopChoice(q_15);
    }
  else
    {
      t = j_15;
      {
        ATerm t_15;
        t_15 = t;
        {
          t = term_u_15;
          t = get_config_0(t);
        }
        t = t_15;
        t = term_to_graph_0(t);
      }
    }
  t = graph_to_adot_0(t);
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm q_22 = NULL;
  q_22 = t;
  t = SSL_close_file(not_null(q_22));
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
  v_22 = t;
  u_22 :
  if(match_cons(v_22, sym__2))
    {
      w_22 = ATgetArgument(v_22, 0);
      x_22 = ATgetArgument(v_22, 1);
      t = SSL_WriteToBinaryFile(not_null(w_22), not_null(x_22));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm j_74 (ATerm))
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
  l_23 = t;
  k_23 :
  if(match_cons(l_23, sym__2))
    {
      m_23 = ATgetArgument(l_23, 0);
      n_23 = ATgetArgument(l_23, 1);
      {
        ATerm q_23 = NULL,r_23 = NULL,v_23 = NULL;
        ATerm z_15;
        z_15 = t;
        {
          ATerm x_23 = NULL;
          ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL;
          t = j_74(t);
          {
            x_23 = t;
            {
              if(((q_23 != NULL) && (q_23 != x_23)))
                _fail(x_23);
              else
                q_23 = x_23;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(q_23), not_null(m_23), not_null(n_23));
                {
                  t = table_push_0(t);
                  {
                    ATerm a_16 = t;
                    int b_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_23), term_c_16);
                        t = table_get_0(t);
                        LocalPopChoice(b_16);
                      }
                    else
                      {
                        t = a_16;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      y_23 = t;
                      j_23 :
                      if(((ATgetType(y_23) == AT_LIST) && !(ATisEmpty(y_23))))
                        {
                          z_23 = ATgetFirst((ATermList) y_23);
                          a_24 = (ATerm) ATgetNext((ATermList) y_23);
                          {
                            if(((r_23 != NULL) && (r_23 != z_23)))
                              _fail(z_23);
                            else
                              r_23 = z_23;
                            {
                              if(((v_23 != NULL) && (v_23 != a_24)))
                                _fail(a_24);
                              else
                                v_23 = a_24;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(q_23), term_c_16, (ATerm) ATinsert(CheckATermList(not_null(v_23)), (ATerm) ATinsert(CheckATermList(not_null(r_23)), not_null(m_23))));
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
        t = z_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm x_74 (ATerm))
{
  ATerm h_16;
  h_16 = t;
  {
    t = x_74(t);
    {
      ATerm i_2 (ATerm t)
      {
        t = term_i_16;
        return(t);
      }
      t = debug_1(t, i_2);
    }
  }
  t = h_16;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL;
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
      k_24 = t;
      f_24 :
      if(match_cons(k_24, sym__2))
        {
          l_24 = ATgetArgument(k_24, 0);
          m_24 = ATgetArgument(k_24, 1);
          {
            if(((j_24 != NULL) && (j_24 != l_24)))
              _fail(l_24);
            else
              j_24 = l_24;
            if(((i_24 != NULL) && (i_24 != m_24)))
              _fail(m_24);
            else
              i_24 = m_24;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(l_16);
      t = SSL_open_file(not_null(j_24), not_null(i_24));
    }
  else
    {
      t = k_16;
      {
        ATerm n_24 = NULL;
        ATerm o_24 = NULL;
        ATerm j_2 (ATerm t)
        {
          t = term_m_16;
          return(t);
        }
        t = obsolete_1(t, j_2);
        {
          n_24 = t;
          {
            if(((j_24 != NULL) && (j_24 != n_24)))
              _fail(n_24);
            else
              j_24 = n_24;
            {
              ATerm n_16;
              n_16 = t;
              {
                ATerm p_24 = NULL;
                t = term_s_16;
                {
                  p_24 = t;
                  if(((o_24 != NULL) && (o_24 != p_24)))
                    _fail(p_24);
                  else
                    o_24 = p_24;
                }
              }
              t = n_16;
              t = SSL_open_file(not_null(j_24), not_null(o_24));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm v_24 = NULL;
  ATerm x_24 = NULL;
  v_24 = t;
  {
    ATerm t_16;
    t_16 = t;
    {
      ATerm y_24 = NULL;
      t = term_u_16;
      {
        y_24 = t;
        if(((x_24 != NULL) && (x_24 != y_24)))
          _fail(y_24);
        else
          x_24 = y_24;
      }
    }
    t = t_16;
    {
      t = SSL_open_file(not_null(v_24), not_null(x_24));
      t = SSL_close_file(not_null(v_24));
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
  ATerm c_25 = NULL;
  ATerm d_25 = NULL;
  t = term_w_16;
  {
    t = new_0(t);
    {
      d_25 = t;
      if(((c_25 != NULL) && (c_25 != d_25)))
        _fail(d_25);
      else
        c_25 = d_25;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_25), term_x_16);
    {
      t = conc_strings_0(t);
      {
        ATerm y_16 = t;
        int b_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(b_17);
          }
        else
          {
            t = y_16;
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
  ATerm h_25 = NULL;
  t = new_file_0(t);
  {
    h_25 = t;
    {
      ATerm e_17;
      e_17 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_25), term_s_16);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_25), term_w_16);
            {
              ATerm k_2 (ATerm t)
              {
                t = term_i_17;
                return(t);
              }
              t = assert_1(t, k_2);
            }
          }
        }
      }
      t = e_17;
    }
  }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm m_25 = NULL;
  ATerm o_25 = NULL;
  m_25 = t;
  {
    ATerm p_25 = NULL;
    t = xtc_new_file_0(t);
    {
      p_25 = t;
      {
        if(((o_25 != NULL) && (o_25 != p_25)))
          _fail(p_25);
        else
          o_25 = p_25;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_25), not_null(m_25));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(o_25);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_25));
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm t_25 = NULL;
  t_25 = t;
  t = SSL_ReadFromFile(not_null(t_25));
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL;
  b_26 = t;
  a_26 :
  if(match_cons(b_26, sym_stdin_0))
    {
      ATerm d_26 = NULL;
      ATerm e_26 = NULL;
      t = term_j_17;
      {
        t = ReadFromFile_0(t);
        {
          e_26 = t;
          if(((d_26 != NULL) && (d_26 != e_26)))
            _fail(e_26);
          else
            d_26 = e_26;
        }
      }
      t = not_null(d_26);
    }
  else
    {
      if(match_cons(b_26, sym_FILE_1))
        {
          c_26 = ATgetArgument(b_26, 0);
          {
            ATerm g_26 = NULL;
            ATerm h_26 = NULL;
            t = not_null(c_26);
            {
              t = ReadFromFile_0(t);
              {
                h_26 = t;
                if(((g_26 != NULL) && (g_26 != h_26)))
                  _fail(h_26);
                else
                  g_26 = h_26;
              }
            }
            t = not_null(g_26);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm z_73 (ATerm))
{
  t = read_from_0(t);
  {
    t = z_73(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm term_to_adot_options_0 (ATerm t)
{
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_2 (ATerm t)
      {
        ATerm o_26 = NULL;
        o_26 = t;
        m_26 :
        if(!(match_string(o_26, "--graph")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        t = term_m_17;
        t = set_config_0(t);
        t = term_n_17;
        return(t);
      }
      ATerm n_2 (ATerm t)
      {
        t = term_s_17;
        return(t);
      }
      t = Option_3(t, l_2, m_2, n_2);
      LocalPopChoice(l_17);
    }
  else
    {
      t = k_17;
      {
        ATerm o_2 (ATerm t)
        {
          ATerm p_26 = NULL;
          p_26 = t;
          n_26 :
          if(!(match_string(p_26, "--tree")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm p_2 (ATerm t)
        {
          t = term_t_17;
          t = set_config_0(t);
          t = term_y_17;
          return(t);
        }
        ATerm q_2 (ATerm t)
        {
          t = term_z_17;
          return(t);
        }
        t = Option_3(t, o_2, p_2, q_2);
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL;
  s_26 = t;
  r_26 :
  if(match_cons(s_26, sym__2))
    {
      t_26 = ATgetArgument(s_26, 0);
      u_26 = ATgetArgument(s_26, 1);
      t = SSL_copy(not_null(t_26), not_null(u_26));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm c_27 = NULL;
  c_27 = t;
  b_27 :
  if(match_cons(c_27, sym_stderr_0))
    {
      ATerm e_27 = NULL,g_27 = NULL;
      ATerm a_18;
      a_18 = t;
      {
        ATerm f_27 = NULL;
        t = SSLgetAnnotations(not_null(c_27));
        {
          f_27 = t;
          if(((e_27 != NULL) && (e_27 != f_27)))
            _fail(f_27);
          else
            e_27 = f_27;
        }
      }
      t = a_18;
      {
        ATerm h_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(e_27));
        {
          h_27 = t;
          if(((g_27 != NULL) && (g_27 != h_27)))
            _fail(h_27);
          else
            g_27 = h_27;
        }
        t = not_null(g_27);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm p_27 = NULL;
  p_27 = t;
  o_27 :
  if(match_cons(p_27, sym_stdout_0))
    {
      ATerm r_27 = NULL,t_27 = NULL;
      ATerm b_18;
      b_18 = t;
      {
        ATerm s_27 = NULL;
        t = SSLgetAnnotations(not_null(p_27));
        {
          s_27 = t;
          if(((r_27 != NULL) && (r_27 != s_27)))
            _fail(s_27);
          else
            r_27 = s_27;
        }
      }
      t = b_18;
      {
        ATerm u_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(r_27));
        {
          u_27 = t;
          if(((t_27 != NULL) && (t_27 != u_27)))
            _fail(u_27);
          else
            t_27 = u_27;
        }
        t = not_null(t_27);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm d_28 = NULL,e_28 = NULL;
  d_28 = t;
  c_28 :
  if(match_cons(d_28, sym_FILE_1))
    {
      e_28 = ATgetArgument(d_28, 0);
      {
        ATerm c_18 = t;
        int d_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_28 = NULL;
            ATerm h_28 = NULL;
            t = m_0(t);
            {
              h_28 = t;
              {
                if(((g_28 != NULL) && (g_28 != h_28)))
                  _fail(h_28);
                else
                  g_28 = h_28;
                {
                  ATerm e_18 = t;
                  int k_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(k_18);
                    }
                  else
                    {
                      t = e_18;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(e_28), not_null(g_28));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_28));
            LocalPopChoice(d_18);
          }
        else
          {
            t = c_18;
            {
              ATerm l_28 = NULL;
              ATerm m_28 = NULL;
              t = m_0(t);
              {
                m_28 = t;
                {
                  if(((l_28 != NULL) && (l_28 != m_28)))
                    _fail(m_28);
                  else
                    l_28 = m_28;
                  {
                    ATerm p_18 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm w_18 = t;
                        int y_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = stdout_0(t);
                            LocalPopChoice(y_18);
                          }
                        else
                          {
                            t = w_18;
                            t = stderr_0(t);
                          }
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = p_18;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_28), not_null(l_28));
                      t = copy_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_28));
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
  ATerm y_28 = NULL,z_28 = NULL,b_29 = NULL;
  y_28 = t;
  x_28 :
  if(((ATgetType(y_28) == AT_LIST) && !(ATisEmpty(y_28))))
    {
      z_28 = ATgetFirst((ATermList) y_28);
      b_29 = (ATerm) ATgetNext((ATermList) y_28);
      t = not_null(b_29);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL;
  h_29 = t;
  g_29 :
  if(match_cons(h_29, sym__2))
    {
      i_29 = ATgetArgument(h_29, 0);
      j_29 = ATgetArgument(h_29, 1);
      {
        ATerm z_18;
        z_18 = t;
        {
          ATerm q_29 = NULL;
          ATerm r_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_29), not_null(j_29));
          {
            ATerm a_19 = t;
            int b_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(b_19);
              }
            else
              {
                t = a_19;
                t = (ATerm) ATempty;
              }
            {
              r_29 = t;
              if(((q_29 != NULL) && (q_29 != r_29)))
                _fail(r_29);
              else
                q_29 = r_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_29), not_null(j_29), not_null(q_29));
            t = table_put_0(t);
          }
        }
        t = z_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm g_74 (ATerm))
{
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL;
  ATerm c_19;
  c_19 = t;
  {
    ATerm b_30 = NULL;
    ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
    t = g_74(t);
    {
      b_30 = t;
      {
        if(((a_30 != NULL) && (a_30 != b_30)))
          _fail(b_30);
        else
          a_30 = b_30;
        {
          ATerm d_19 = t;
          int e_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_30), term_c_16);
              t = table_get_0(t);
              LocalPopChoice(e_19);
            }
          else
            {
              t = d_19;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            c_30 = t;
            x_29 :
            if(((ATgetType(c_30) == AT_LIST) && !(ATisEmpty(c_30))))
              {
                d_30 = ATgetFirst((ATermList) c_30);
                e_30 = (ATerm) ATgetNext((ATermList) c_30);
                {
                  if(((z_29 != NULL) && (z_29 != d_30)))
                    _fail(d_30);
                  else
                    z_29 = d_30;
                  {
                    if(((y_29 != NULL) && (y_29 != e_30)))
                      _fail(e_30);
                    else
                      y_29 = e_30;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(a_30), term_c_16, not_null(y_29));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(z_29);
                          {
                            ATerm r_2 (ATerm t)
                            {
                              ATerm f_30 = NULL;
                              f_30 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_30), not_null(f_30));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, r_2);
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
  t = c_19;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm l_30 = NULL;
  l_30 = t;
  t = SSL_remove(not_null(l_30));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm u_62 (ATerm), ATerm v_62 (ATerm))
{
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_62(t);
      t = v_62(t);
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
      {
        t = v_62(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm f_74 (ATerm))
{
  ATerm q_30 = NULL;
  ATerm h_19;
  h_19 = t;
  {
    ATerm r_30 = NULL;
    ATerm s_30 = NULL;
    t = f_74(t);
    {
      r_30 = t;
      {
        if(((q_30 != NULL) && (q_30 != r_30)))
          _fail(r_30);
        else
          q_30 = r_30;
        {
          ATerm t_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_30), term_c_16);
          {
            ATerm i_19 = t;
            int n_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(n_19);
              }
            else
              {
                t = i_19;
                t = (ATerm) ATempty;
              }
            {
              t_30 = t;
              if(((s_30 != NULL) && (s_30 != t_30)))
                _fail(t_30);
              else
                s_30 = t_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_30), term_c_16, (ATerm) ATinsert(CheckATermList(not_null(s_30)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = h_19;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm e_73 (ATerm))
{
  ATerm y_30 = NULL,b_31 = NULL;
  ATerm u_2 (ATerm t)
  {
    t = term_i_17;
    return(t);
  }
  t = begin_scope_1(t, u_2);
  {
    ATerm v_2 (ATerm t)
    {
      ATerm o_19;
      o_19 = t;
      {
        ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
        ATerm p_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_w_19;
            t = table_get_0(t);
            LocalPopChoice(t_19);
          }
        else
          {
            t = p_19;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          c_31 = t;
          x_30 :
          if(((ATgetType(c_31) == AT_LIST) && !(ATisEmpty(c_31))))
            {
              d_31 = ATgetFirst((ATermList) c_31);
              e_31 = (ATerm) ATgetNext((ATermList) c_31);
              {
                if(((b_31 != NULL) && (b_31 != d_31)))
                  _fail(d_31);
                else
                  b_31 = d_31;
                {
                  if(((y_30 != NULL) && (y_30 != e_31)))
                    _fail(e_31);
                  else
                    y_30 = e_31;
                  {
                    t = not_null(b_31);
                    {
                      ATerm w_2 (ATerm t)
                      {
                        ATerm x_19 = t;
                        int y_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(y_19);
                          }
                        else
                          {
                            t = x_19;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, w_2);
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
      t = o_19;
      {
        ATerm x_2 (ATerm t)
        {
          t = term_i_17;
          return(t);
        }
        t = end_scope_1(t, x_2);
      }
      return(t);
    }
    t = restore_always_2(t, e_73, v_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm f_73 (ATerm))
{
  ATerm y_2 (ATerm t)
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_31 = NULL;
        ATerm n_31 = NULL;
        t = term_f_11;
        {
          t = get_config_0(t);
          {
            n_31 = t;
            if(((h_31 != NULL) && (h_31 != n_31)))
              _fail(n_31);
            else
              h_31 = n_31;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_31));
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        t = term_j_17;
      }
    {
      t = f_73(t);
      {
        ATerm z_2 (ATerm t)
        {
          ATerm e_20 = t;
          int f_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_x_10;
              t = get_config_0(t);
              LocalPopChoice(f_20);
            }
          else
            {
              t = e_20;
              t = term_g_20;
            }
          return(t);
        }
        t = copy_to_1(t, z_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, y_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm q_31 = NULL;
    q_31 = t;
    p_31 :
    if(!(match_string(q_31, "-v")))
      {
        if(!(match_string(q_31, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_k_20;
    t = set_config_0(t);
    t = term_l_20;
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_m_20;
    return(t);
  }
  t = Option_3(t, a_3, b_3, c_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    ATerm v_31 = NULL;
    v_31 = t;
    t_31 :
    if(!(match_string(v_31, "-k")))
      {
        if(!(match_string(v_31, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    ATerm n_20;
    n_20 = t;
    {
      ATerm w_31 = NULL;
      ATerm z_31 = NULL;
      t = string_to_int_0(t);
      {
        z_31 = t;
        if(((w_31 != NULL) && (w_31 != z_31)))
          _fail(z_31);
        else
          w_31 = z_31;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_20, not_null(w_31));
        t = set_config_0(t);
      }
    }
    t = n_20;
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_p_20;
    return(t);
  }
  t = ArgOption_3(t, f_3, g_3, h_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm c_32 = NULL;
  c_32 = t;
  t = SSL_string_to_int(not_null(c_32));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_3 (ATerm t)
      {
        ATerm x_32 = NULL;
        x_32 = t;
        o_32 :
        if(!(match_string(x_32, "-S")))
          {
            if(!(match_string(x_32, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm t_3 (ATerm t)
      {
        t = term_t_20;
        t = set_config_0(t);
        t = term_u_20;
        return(t);
      }
      ATerm u_3 (ATerm t)
      {
        t = term_v_20;
        return(t);
      }
      t = Option_3(t, l_3, t_3, u_3);
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
      {
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_3 (ATerm t)
            {
              ATerm b_33 = NULL;
              b_33 = t;
              p_32 :
              if(!(match_string(b_33, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm w_3 (ATerm t)
            {
              ATerm o_33 = NULL;
              ATerm a_21;
              a_21 = t;
              {
                ATerm m_33 = NULL;
                ATerm n_33 = NULL;
                t = string_to_int_0(t);
                {
                  n_33 = t;
                  if(((m_33 != NULL) && (m_33 != n_33)))
                    _fail(n_33);
                  else
                    m_33 = n_33;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_7, not_null(m_33));
                  t = set_config_0(t);
                }
              }
              t = a_21;
              {
                ATerm p_33 = NULL;
                p_33 = t;
                if(((o_33 != NULL) && (o_33 != p_33)))
                  _fail(p_33);
                else
                  o_33 = p_33;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(o_33));
              }
              return(t);
            }
            ATerm c_4 (ATerm t)
            {
              t = term_b_21;
              return(t);
            }
            t = ArgOption_3(t, v_3, w_3, c_4);
            LocalPopChoice(x_20);
          }
        else
          {
            t = w_20;
            {
              ATerm d_4 (ATerm t)
              {
                ATerm q_33 = NULL;
                q_33 = t;
                w_32 :
                if(!(match_string(q_33, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm i_4 (ATerm t)
              {
                t = term_d_21;
                t = set_config_0(t);
                t = term_g_21;
                return(t);
              }
              ATerm j_4 (ATerm t)
              {
                t = term_h_21;
                return(t);
              }
              t = Option_3(t, d_4, i_4, j_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(j_21);
    }
  else
    {
      t = i_21;
      {
        ATerm k_21 = t;
        int l_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(l_21);
          }
        else
          {
            t = k_21;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    ATerm c_34 = NULL;
    c_34 = t;
    x_33 :
    if(!(match_string(c_34, "-o")))
      {
        if(!(match_string(c_34, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    ATerm i_34 = NULL;
    ATerm m_21;
    m_21 = t;
    {
      ATerm d_34 = NULL;
      ATerm h_34 = NULL;
      h_34 = t;
      if(((d_34 != NULL) && (d_34 != h_34)))
        _fail(h_34);
      else
        d_34 = h_34;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_10, not_null(d_34));
        t = set_config_0(t);
      }
    }
    t = m_21;
    {
      ATerm j_34 = NULL;
      j_34 = t;
      if(((i_34 != NULL) && (i_34 != j_34)))
        _fail(j_34);
      else
        i_34 = j_34;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(i_34));
    }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = term_p_21;
    return(t);
  }
  t = ArgOption_3(t, k_4, n_4, o_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm s_21 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(b_22);
    }
  else
    {
      t = s_21;
      {
        ATerm r_4 (ATerm t)
        {
          ATerm n_34 = NULL;
          n_34 = t;
          m_34 :
          if(!(match_string(n_34, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm s_4 (ATerm t)
        {
          t = term_e_22;
          t = set_config_0(t);
          t = term_f_22;
          return(t);
        }
        ATerm t_4 (ATerm t)
        {
          t = term_g_22;
          return(t);
        }
        t = Option_3(t, r_4, s_4, t_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL;
  t_34 = t;
  r_34 :
  if(match_string(t_34, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(t_34) == AT_LIST) && !(ATisEmpty(t_34))))
        {
          u_34 = ATgetFirst((ATermList) t_34);
          v_34 = (ATerm) ATgetNext((ATermList) t_34);
          s_34 :
          if(((ATgetType(v_34) == AT_LIST) && !(ATisEmpty(v_34))))
            {
              w_34 = ATgetFirst((ATermList) v_34);
              x_34 = (ATerm) ATgetNext((ATermList) v_34);
              {
                ATerm b_35 = NULL;
                ATerm h_22;
                h_22 = t;
                {
                  t = not_null(u_34);
                  t = j_0(t);
                }
                t = h_22;
                {
                  ATerm c_35 = NULL;
                  t = not_null(w_34);
                  {
                    t = k_0(t);
                    {
                      c_35 = t;
                      if(((b_35 != NULL) && (b_35 != c_35)))
                        _fail(c_35);
                      else
                        b_35 = c_35;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_34)), not_null(b_35));
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
  ATerm u_4 (ATerm t)
  {
    ATerm j_35 = NULL;
    j_35 = t;
    g_35 :
    if(!(match_string(j_35, "-i")))
      {
        if(!(match_string(j_35, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    ATerm m_35 = NULL;
    ATerm i_22;
    i_22 = t;
    {
      ATerm k_35 = NULL;
      ATerm l_35 = NULL;
      l_35 = t;
      if(((k_35 != NULL) && (k_35 != l_35)))
        _fail(l_35);
      else
        k_35 = l_35;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_11, not_null(k_35));
        t = set_config_0(t);
      }
    }
    t = i_22;
    {
      ATerm n_35 = NULL;
      n_35 = t;
      if(((m_35 != NULL) && (m_35 != n_35)))
        _fail(n_35);
      else
        m_35 = n_35;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_35));
    }
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    t = term_j_22;
    return(t);
  }
  t = ArgOption_3(t, u_4, a_5, b_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      {
        ATerm m_22 = t;
        int n_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(n_22);
          }
        else
          {
            t = m_22;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm s_35 = NULL;
  ATerm o_22;
  o_22 = t;
  {
    ATerm c_5 (ATerm t)
    {
      ATerm t_35 = NULL,u_35 = NULL;
      t_35 = t;
      r_35 :
      if(match_cons(t_35, sym_Program_1))
        {
          u_35 = ATgetArgument(t_35, 0);
          if(((s_35 != NULL) && (s_35 != u_35)))
            _fail(u_35);
          else
            s_35 = u_35;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, c_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_22), not_null(s_35)), term_p_22));
      {
        t = printnl_0(t);
        {
          t = term_s_22;
          t = exit_0(t);
        }
      }
    }
  }
  t = o_22;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATempty, term_t_22));
  {
    t = printnl_0(t);
    {
      t = term_s_22;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm x_35 = NULL;
  x_35 = t;
  t = SSL_TicksToSeconds(not_null(x_35));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
  c_36 = t;
  b_36 :
  if(match_cons(c_36, sym__2))
    {
      d_36 = ATgetArgument(c_36, 0);
      e_36 = ATgetArgument(c_36, 1);
      {
        ATerm y_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(d_36), not_null(e_36));
            LocalPopChoice(z_22);
          }
        else
          {
            t = y_22;
            t = SSL_addr(not_null(d_36), not_null(e_36));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm j_70 (ATerm), ATerm k_70 (ATerm))
{
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_70(t);
      LocalPopChoice(b_23);
    }
  else
    {
      t = a_23;
      {
        ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
        l_36 = t;
        k_36 :
        if(((ATgetType(l_36) == AT_LIST) && !(ATisEmpty(l_36))))
          {
            m_36 = ATgetFirst((ATermList) l_36);
            n_36 = (ATerm) ATgetNext((ATermList) l_36);
            {
              ATerm q_36 = NULL;
              ATerm r_36 = NULL;
              t = not_null(n_36);
              {
                t = foldr_2(t, j_70, k_70);
                {
                  r_36 = t;
                  if(((q_36 != NULL) && (q_36 != r_36)))
                    _fail(r_36);
                  else
                    q_36 = r_36;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_36), not_null(q_36));
                t = k_70(t);
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
ATerm crush_2 (ATerm t, ATerm h_69 (ATerm), ATerm i_69 (ATerm))
{
  ATerm y_36 = NULL;
  ATerm a_37 = NULL;
  y_36 = t;
  {
    ATerm b_37 = NULL;
    ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
    t = not_null(y_36);
    {
      b_37 = t;
      {
        t = SSL_explode_term(not_null(b_37));
        {
          d_37 = t;
          x_36 :
          if(match_cons(d_37, sym__2))
            {
              e_37 = ATgetArgument(d_37, 0);
              f_37 = ATgetArgument(d_37, 1);
              if(((a_37 != NULL) && (a_37 != f_37)))
                _fail(f_37);
              else
                a_37 = f_37;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(a_37);
      t = foldr_2(t, h_69, i_69);
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
    ATerm h_5 (ATerm t)
    {
      t = term_s_20;
      return(t);
    }
    t = crush_2(t, h_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL;
  l_37 = t;
  k_37 :
  if(match_cons(l_37, sym__2))
    {
      m_37 = ATgetArgument(l_37, 0);
      n_37 = ATgetArgument(l_37, 1);
      {
        ATerm c_23;
        c_23 = t;
        {
          ATerm d_23 = t;
          int e_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(m_37), not_null(n_37));
              LocalPopChoice(e_23);
            }
          else
            {
              t = d_23;
              t = SSL_gtr(not_null(m_37), not_null(n_37));
            }
        }
        t = c_23;
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
  ATerm t_37 = NULL;
  ATerm f_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
      u_37 = t;
      s_37 :
      if(match_cons(u_37, sym__2))
        {
          v_37 = ATgetArgument(u_37, 0);
          w_37 = ATgetArgument(u_37, 1);
          {
            if(((t_37 != NULL) && (t_37 != v_37)))
              _fail(v_37);
            else
              t_37 = v_37;
            if(((t_37 != NULL) && (t_37 != w_37)))
              _fail(w_37);
            else
              t_37 = w_37;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(g_23);
    }
  else
    {
      t = f_23;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm r_58 (ATerm))
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_23;
      o_23 = t;
      {
        ATerm z_37 = NULL;
        ATerm a_38 = NULL;
        t = term_w_7;
        {
          t = get_config_0(t);
          {
            a_38 = t;
            if(((z_37 != NULL) && (z_37 != a_38)))
              _fail(a_38);
            else
              z_37 = a_38;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_37), term_s_22);
          t = geq_0(t);
        }
      }
      t = o_23;
      t = r_58(t);
      LocalPopChoice(i_23);
    }
  else
    {
      t = h_23;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    ATerm g_38 = NULL,i_38 = NULL;
    ATerm p_23;
    p_23 = t;
    {
      ATerm h_38 = NULL;
      t = run_time_0(t);
      {
        h_38 = t;
        if(((g_38 != NULL) && (g_38 != h_38)))
          _fail(h_38);
        else
          g_38 = h_38;
      }
    }
    t = p_23;
    {
      ATerm k_38 = NULL;
      t = term_s_23;
      {
        t = get_config_0(t);
        {
          k_38 = t;
          if(((i_38 != NULL) && (i_38 != k_38)))
            _fail(k_38);
          else
            i_38 = k_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_23), not_null(g_38)), term_t_23), not_null(i_38)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, i_5);
  {
    t = term_s_20;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm t_38 = NULL;
  t_38 = t;
  s_38 :
  if(match_cons(t_38, sym_Version_0))
    {
      ATerm y_38 = NULL,a_39 = NULL;
      ATerm w_23;
      w_23 = t;
      {
        ATerm z_38 = NULL;
        t = SSLgetAnnotations(not_null(t_38));
        {
          z_38 = t;
          if(((y_38 != NULL) && (y_38 != z_38)))
            _fail(z_38);
          else
            y_38 = z_38;
        }
      }
      t = w_23;
      {
        ATerm b_39 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(y_38));
        {
          b_39 = t;
          if(((a_39 != NULL) && (a_39 != b_39)))
            _fail(b_39);
          else
            a_39 = b_39;
        }
        t = not_null(a_39);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm p_77 (ATerm))
{
  ATerm j_5 (ATerm t)
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        {
          ATerm d_24 = t;
          int e_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(e_24);
            }
          else
            {
              t = d_24;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, j_5);
  t = p_77(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm g_39 = NULL;
  g_39 = t;
  t = SSL_table_create(not_null(g_39));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_39 = NULL;
  k_39 = t;
  {
    ATerm g_24;
    g_24 = t;
    {
      t = term_h_24;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_h_24, term_q_24, not_null(k_39));
          t = table_put_0(t);
        }
      }
    }
    t = g_24;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm o_39 = NULL;
  o_39 = t;
  t = SSL_table_destroy(not_null(o_39));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm x_39 = NULL;
  x_39 = t;
  t = SSL_exit(not_null(x_39));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL;
  b_40 = t;
  a_40 :
  if(((ATgetType(b_40) == AT_LIST) && ATisEmpty(b_40)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(b_40) == AT_LIST) && !(ATisEmpty(b_40))))
        {
          c_40 = ATgetFirst((ATermList) b_40);
          d_40 = (ATerm) ATgetNext((ATermList) b_40);
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
  ATerm r_24;
  r_24 = t;
  {
    ATerm g_40 = NULL;
    ATerm j_40 = NULL;
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
        {
          ATerm h_40 = NULL;
          ATerm i_40 = NULL;
          i_40 = t;
          if(((h_40 != NULL) && (h_40 != i_40)))
            _fail(i_40);
          else
            h_40 = i_40;
          t = (ATerm) ATinsert(ATempty, not_null(h_40));
        }
      }
    {
      j_40 = t;
      if(((g_40 != NULL) && (g_40 != j_40)))
        _fail(j_40);
      else
        g_40 = j_40;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_20, not_null(g_40));
      t = printnl_0(t);
    }
  }
  t = r_24;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm x_79 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL;
  u_40 = t;
  r_40 :
  if(((ATgetType(u_40) == AT_LIST) && !(ATisEmpty(u_40))))
    {
      s_40 = ATgetFirst((ATermList) u_40);
      t_40 = (ATerm) ATgetNext((ATermList) u_40);
      {
        ATerm z_40 = NULL;
        t = not_null(t_40);
        {
          ATerm u_24;
          u_24 = t;
          {
            ATerm a_41 = NULL,e_41 = NULL,g_41 = NULL;
            ATerm w_24;
            w_24 = t;
            {
              ATerm c_41 = NULL;
              t = i_0(t);
              {
                c_41 = t;
                if(((a_41 != NULL) && (a_41 != c_41)))
                  _fail(c_41);
                else
                  a_41 = c_41;
              }
            }
            t = w_24;
            {
              ATerm f_41 = NULL;
              t = not_null(s_40);
              {
                t = h_0(t);
                {
                  f_41 = t;
                  if(((e_41 != NULL) && (e_41 != f_41)))
                    _fail(f_41);
                  else
                    e_41 = f_41;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(a_41)), not_null(e_41));
                {
                  g_41 = t;
                  if(((z_40 != NULL) && (z_40 != g_41)))
                    _fail(g_41);
                  else
                    z_40 = g_41;
                }
              }
            }
          }
          t = u_24;
          {
            ATerm k_5 (ATerm t)
            {
              t = not_null(z_40);
              return(t);
            }
            t = reverse_acc_2(t, h_0, k_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(u_40) == AT_LIST) && ATisEmpty(u_40)))
        {
          {
            t = term_w_16;
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
  ATerm l_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, l_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm w_79 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm u_55 (ATerm))
{
  ATerm r_41 = NULL,s_41 = NULL;
  r_41 = t;
  q_41 :
  if(match_cons(r_41, sym_Program_1))
    {
      s_41 = ATgetArgument(r_41, 0);
      {
        ATerm v_41 = NULL,x_41 = NULL;
        ATerm w_41 = NULL;
        t = SSLgetAnnotations(not_null(r_41));
        {
          w_41 = t;
          if(((v_41 != NULL) && (v_41 != w_41)))
            _fail(w_41);
          else
            v_41 = w_41;
        }
        {
          t = not_null(s_41);
          {
            ATerm z_41 = NULL;
            t = u_55(t);
            {
              x_41 = t;
              {
                ATerm a_42 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_41)), not_null(v_41));
                {
                  a_42 = t;
                  if(((z_41 != NULL) && (z_41 != a_42)))
                    _fail(a_42);
                  else
                    z_41 = a_42;
                }
                t = not_null(z_41);
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
  ATerm i_42 = NULL;
  ATerm z_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_42 = NULL;
      t = term_s_23;
      {
        t = get_config_0(t);
        {
          j_42 = t;
          if(((i_42 != NULL) && (i_42 != j_42)))
            _fail(j_42);
          else
            i_42 = j_42;
        }
      }
      LocalPopChoice(a_25);
    }
  else
    {
      t = z_24;
      {
        ATerm r_5 (ATerm t)
        {
          ATerm s_5 (ATerm t)
          {
            ATerm k_42 = NULL;
            k_42 = t;
            if(((i_42 != NULL) && (i_42 != k_42)))
              _fail(k_42);
            else
              i_42 = k_42;
            return(t);
          }
          t = Program_1(t, s_5);
          return(t);
        }
        t = fetch_1(t, r_5);
      }
    }
  {
    t = term_b_25;
    {
      t = echo_0(t);
      {
        t = term_g_25;
        {
          t = table_get_0(t);
          {
            ATerm w_5 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, w_5);
            {
              ATerm x_5 (ATerm t)
              {
                ATerm l_42 = NULL;
                ATerm m_42 = NULL;
                m_42 = t;
                if(((l_42 != NULL) && (l_42 != m_42)))
                  _fail(m_42);
                else
                  l_42 = m_42;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_42)), term_i_25);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, x_5);
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
  ATerm j_25;
  j_25 = t;
  {
    ATerm r_42 = NULL;
    ATerm s_42 = NULL;
    s_42 = t;
    if(((r_42 != NULL) && (r_42 != s_42)))
      _fail(s_42);
    else
      r_42 = s_42;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATempty, not_null(r_42)));
      t = printnl_0(t);
    }
  }
  t = j_25;
  return(t);
}
ATerm say_1 (ATerm t, ATerm r_74 (ATerm))
{
  ATerm k_25;
  k_25 = t;
  {
    t = r_74(t);
    t = debug_0(t);
  }
  t = k_25;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm v_55 (ATerm))
{
  ATerm a_43 = NULL,b_43 = NULL;
  a_43 = t;
  z_42 :
  if(match_cons(a_43, sym_Undefined_1))
    {
      b_43 = ATgetArgument(a_43, 0);
      {
        ATerm f_43 = NULL,m_43 = NULL;
        ATerm g_43 = NULL;
        t = SSLgetAnnotations(not_null(a_43));
        {
          g_43 = t;
          if(((f_43 != NULL) && (f_43 != g_43)))
            _fail(g_43);
          else
            f_43 = g_43;
        }
        {
          t = not_null(b_43);
          {
            ATerm o_43 = NULL;
            t = v_55(t);
            {
              m_43 = t;
              {
                ATerm p_43 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_43)), not_null(f_43));
                {
                  p_43 = t;
                  if(((o_43 != NULL) && (o_43 != p_43)))
                    _fail(p_43);
                  else
                    o_43 = p_43;
                }
                t = not_null(o_43);
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
ATerm fetch_1 (ATerm t, ATerm e_64 (ATerm))
{
  ATerm e_44 (ATerm t)
  {
    ATerm l_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, e_64, _id);
        LocalPopChoice(n_25);
      }
    else
      {
        t = l_25;
        t = Cons_2(t, _id, e_44);
      }
    return(t);
  }
  t = e_44(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_78 (ATerm))
{
  t = fetch_1(t, w_78);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm j_44 = NULL;
  j_44 = t;
  i_44 :
  if(match_cons(j_44, sym_Help_0))
    {
      ATerm l_44 = NULL,n_44 = NULL;
      ATerm q_25;
      q_25 = t;
      {
        ATerm m_44 = NULL;
        t = SSLgetAnnotations(not_null(j_44));
        {
          m_44 = t;
          if(((l_44 != NULL) && (l_44 != m_44)))
            _fail(m_44);
          else
            l_44 = m_44;
        }
      }
      t = q_25;
      {
        ATerm o_44 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(l_44));
        {
          o_44 = t;
          if(((n_44 != NULL) && (n_44 != o_44)))
            _fail(o_44);
          else
            n_44 = o_44;
        }
        t = not_null(n_44);
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
  ATerm t_44 = NULL;
  t_44 = t;
  t = SSL_implode_string(not_null(t_44));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
      {
        ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL;
        y_44 = t;
        x_44 :
        if(((ATgetType(y_44) == AT_LIST) && !(ATisEmpty(y_44))))
          {
            z_44 = ATgetFirst((ATermList) y_44);
            a_45 = (ATerm) ATgetNext((ATermList) y_44);
            {
              t = not_null(z_44);
              {
                ATerm y_5 (ATerm t)
                {
                  t = not_null(a_45);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm k_45 = NULL;
  ATerm m_45 = NULL;
  k_45 = t;
  {
    ATerm n_45 = NULL;
    ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL;
    t = not_null(k_45);
    {
      n_45 = t;
      {
        t = SSL_explode_term(not_null(n_45));
        {
          p_45 = t;
          i_45 :
          if(match_cons(p_45, sym__2))
            {
              q_45 = ATgetArgument(p_45, 0);
              r_45 = ATgetArgument(p_45, 1);
              j_45 :
              if(match_string(q_45, ""))
                {
                  if(((m_45 != NULL) && (m_45 != r_45)))
                    _fail(r_45);
                  else
                    m_45 = r_45;
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
      t = not_null(m_45);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm k_64 (ATerm))
{
  ATerm v_45 (ATerm t)
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, v_45);
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        {
          t = Nil_0(t);
          t = k_64(t);
        }
      }
    return(t);
  }
  t = v_45(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL;
  y_45 = t;
  x_45 :
  if(match_cons(y_45, sym__2))
    {
      z_45 = ATgetArgument(y_45, 0);
      a_46 = ATgetArgument(y_45, 1);
      {
        t = not_null(z_45);
        {
          ATerm z_5 (ATerm t)
          {
            t = not_null(a_46);
            return(t);
          }
          t = at_end_1(t, z_5);
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
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm f_46 = NULL;
  f_46 = t;
  t = SSL_explode_string(not_null(f_46));
  return(t);
}
ATerm _2 (ATerm t, ATerm l_49 (ATerm), ATerm m_49 (ATerm))
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL;
  o_46 = t;
  n_46 :
  if(match_cons(o_46, sym__2))
    {
      p_46 = ATgetArgument(o_46, 0);
      q_46 = ATgetArgument(o_46, 1);
      {
        ATerm u_46 = NULL,w_46 = NULL;
        ATerm v_46 = NULL;
        t = SSLgetAnnotations(not_null(o_46));
        {
          v_46 = t;
          if(((u_46 != NULL) && (u_46 != v_46)))
            _fail(v_46);
          else
            u_46 = v_46;
        }
        {
          t = not_null(p_46);
          {
            ATerm y_46 = NULL;
            t = l_49(t);
            {
              w_46 = t;
              {
                t = not_null(q_46);
                {
                  ATerm a_47 = NULL;
                  t = m_49(t);
                  {
                    y_46 = t;
                    {
                      ATerm b_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(w_46), not_null(y_46)), not_null(u_46));
                      {
                        b_47 = t;
                        if(((a_47 != NULL) && (a_47 != b_47)))
                          _fail(b_47);
                        else
                          a_47 = b_47;
                      }
                      t = not_null(a_47);
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
    ATerm y_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(z_25);
      }
    else
      {
        t = y_25;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL;
  j_47 = t;
  i_47 :
  if(match_cons(j_47, sym__2))
    {
      k_47 = ATgetArgument(j_47, 0);
      l_47 = ATgetArgument(j_47, 1);
      {
        ATerm f_26;
        f_26 = t;
        t = SSL_printnl(not_null(k_47), not_null(l_47));
        t = f_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm i_26;
  i_26 = t;
  {
    ATerm r_47 = NULL,t_47 = NULL;
    ATerm j_26;
    j_26 = t;
    {
      ATerm s_47 = NULL;
      t = q_74(t);
      {
        s_47 = t;
        if(((r_47 != NULL) && (r_47 != s_47)))
          _fail(s_47);
        else
          r_47 = s_47;
      }
    }
    t = j_26;
    {
      ATerm u_47 = NULL;
      u_47 = t;
      if(((t_47 != NULL) && (t_47 != u_47)))
        _fail(u_47);
      else
        t_47 = u_47;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_47)), not_null(r_47)));
        t = printnl_0(t);
      }
    }
  }
  t = i_26;
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_63 (ATerm))
{
  ATerm x_47 (ATerm t)
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        t = Cons_2(t, v_63, x_47);
      }
    return(t);
  }
  t = x_47(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm z_47 = NULL;
  z_47 = t;
  t = SSL_is_string(not_null(z_47));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm q_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(v_26);
    }
  else
    {
      t = q_26;
      {
        ATerm w_26 = t;
        int x_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_6 (ATerm t)
            {
              ATerm y_26 = t;
              int z_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(z_26);
                }
              else
                {
                  t = y_26;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, a_6);
            LocalPopChoice(x_26);
          }
        else
          {
            t = w_26;
            {
              ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL;
              i_48 = t;
              h_48 :
              if(match_cons(i_48, sym_Path_1))
                {
                  j_48 = ATgetArgument(i_48, 0);
                  t = not_null(j_48);
                }
              else
                {
                  if(match_cons(i_48, sym_Var_1))
                    {
                      j_48 = ATgetArgument(i_48, 0);
                      {
                        t = not_null(j_48);
                        {
                          ATerm a_27 = t;
                          int d_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(d_27);
                            }
                          else
                            {
                              t = a_27;
                              {
                                ATerm b_6 (ATerm t)
                                {
                                  t = term_i_27;
                                  return(t);
                                }
                                t = debug_1(t, b_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(i_48, sym_Prefix_2))
                        {
                          j_48 = ATgetArgument(i_48, 0);
                          k_48 = ATgetArgument(i_48, 1);
                          {
                            ATerm p_48 = NULL,r_48 = NULL;
                            ATerm j_27;
                            j_27 = t;
                            {
                              ATerm q_48 = NULL;
                              t = not_null(j_48);
                              {
                                t = eval_config_0(t);
                                {
                                  q_48 = t;
                                  if(((p_48 != NULL) && (p_48 != q_48)))
                                    _fail(q_48);
                                  else
                                    p_48 = q_48;
                                }
                              }
                            }
                            t = j_27;
                            {
                              ATerm s_48 = NULL;
                              t = not_null(k_48);
                              {
                                t = eval_config_0(t);
                                {
                                  s_48 = t;
                                  if(((r_48 != NULL) && (r_48 != s_48)))
                                    _fail(s_48);
                                  else
                                    r_48 = s_48;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_48), not_null(r_48));
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
  ATerm o_49 = NULL;
  o_49 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_k_27, not_null(o_49));
    {
      t = table_get_0(t);
      {
        ATerm l_27 = t;
        int m_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm n_27;
              n_27 = t;
              {
                ATerm q_49 = NULL;
                ATerm r_49 = NULL;
                r_49 = t;
                if(((q_49 != NULL) && (q_49 != r_49)))
                  _fail(r_49);
                else
                  q_49 = r_49;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_k_27, not_null(o_49), not_null(q_49));
                  t = table_put_0(t);
                }
              }
              t = n_27;
            }
            LocalPopChoice(m_27);
          }
        else
          {
            t = l_27;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm k_62 (ATerm))
{
  ATerm q_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_62(t);
      LocalPopChoice(v_27);
    }
  else
    {
      t = q_27;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL;
  w_49 = t;
  v_49 :
  if(match_cons(w_49, sym__2))
    {
      x_49 = ATgetArgument(w_49, 0);
      y_49 = ATgetArgument(w_49, 1);
      t = SSL_table_get(not_null(x_49), not_null(y_49));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL;
  f_50 = t;
  e_50 :
  if(match_cons(f_50, sym__3))
    {
      g_50 = ATgetArgument(f_50, 0);
      h_50 = ATgetArgument(f_50, 1);
      i_50 = ATgetArgument(f_50, 2);
      {
        ATerm w_27;
        w_27 = t;
        {
          ATerm m_50 = NULL;
          ATerm n_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_50), not_null(h_50));
          {
            ATerm x_27 = t;
            int y_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_27);
              }
            else
              {
                t = x_27;
                t = (ATerm) ATempty;
              }
            {
              n_50 = t;
              if(((m_50 != NULL) && (m_50 != n_50)))
                _fail(n_50);
              else
                m_50 = n_50;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_50), not_null(h_50), (ATerm) ATinsert(CheckATermList(not_null(m_50)), not_null(i_50)));
            t = table_put_0(t);
          }
        }
        t = w_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm b_80 (ATerm))
{
  ATerm r_50 = NULL;
  ATerm s_50 = NULL;
  t = term_w_16;
  {
    t = b_80(t);
    {
      s_50 = t;
      if(((r_50 != NULL) && (r_50 != s_50)))
        _fail(s_50);
      else
        r_50 = s_50;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_25, term_f_25, not_null(r_50));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL;
  a_51 = t;
  z_50 :
  if(match_string(a_51, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(a_51) == AT_LIST) && !(ATisEmpty(a_51))))
        {
          b_51 = ATgetFirst((ATermList) a_51);
          c_51 = (ATerm) ATgetNext((ATermList) a_51);
          {
            ATerm f_51 = NULL;
            ATerm z_27;
            z_27 = t;
            {
              t = not_null(b_51);
              t = a_0(t);
            }
            t = z_27;
            {
              ATerm g_51 = NULL;
              t = term_w_16;
              {
                t = d_0(t);
                {
                  g_51 = t;
                  if(((f_51 != NULL) && (f_51 != g_51)))
                    _fail(g_51);
                  else
                    f_51 = g_51;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(c_51)), not_null(f_51));
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
  ATerm d_6 (ATerm t)
  {
    ATerm m_51 = NULL;
    m_51 = t;
    l_51 :
    if(!(match_string(m_51, "--help")))
      {
        if(!(match_string(m_51, "-h")))
          {
            if(!(match_string(m_51, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    t = term_b_28;
    {
      t = set_config_0(t);
      t = term_f_28;
    }
    return(t);
  }
  ATerm h_6 (ATerm t)
  {
    t = term_i_28;
    return(t);
  }
  t = Option_3(t, d_6, g_6, h_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
  p_51 = t;
  o_51 :
  if(((ATgetType(p_51) == AT_LIST) && !(ATisEmpty(p_51))))
    {
      q_51 = ATgetFirst((ATermList) p_51);
      r_51 = (ATerm) ATgetNext((ATermList) p_51);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_51)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_51)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm u_50 (ATerm), ATerm v_50 (ATerm))
{
  ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL;
  b_52 = t;
  a_52 :
  if(((ATgetType(b_52) == AT_LIST) && !(ATisEmpty(b_52))))
    {
      c_52 = ATgetFirst((ATermList) b_52);
      d_52 = (ATerm) ATgetNext((ATermList) b_52);
      {
        ATerm h_52 = NULL,j_52 = NULL;
        ATerm i_52 = NULL;
        t = SSLgetAnnotations(not_null(b_52));
        {
          i_52 = t;
          if(((h_52 != NULL) && (h_52 != i_52)))
            _fail(i_52);
          else
            h_52 = i_52;
        }
        {
          t = not_null(c_52);
          {
            ATerm l_52 = NULL;
            t = u_50(t);
            {
              j_52 = t;
              {
                t = not_null(d_52);
                {
                  ATerm n_52 = NULL;
                  t = v_50(t);
                  {
                    l_52 = t;
                    {
                      ATerm o_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_52)), not_null(j_52)), not_null(h_52));
                      {
                        o_52 = t;
                        if(((n_52 != NULL) && (n_52 != o_52)))
                          _fail(o_52);
                        else
                          n_52 = o_52;
                      }
                      t = not_null(n_52);
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
  ATerm y_52 = NULL;
  y_52 = t;
  x_52 :
  if(((ATgetType(y_52) == AT_LIST) && ATisEmpty(y_52)))
    {
      {
        ATerm a_53 = NULL,c_53 = NULL;
        ATerm j_28;
        j_28 = t;
        {
          ATerm b_53 = NULL;
          t = SSLgetAnnotations(not_null(y_52));
          {
            b_53 = t;
            if(((a_53 != NULL) && (a_53 != b_53)))
              _fail(b_53);
            else
              a_53 = b_53;
          }
        }
        t = j_28;
        {
          ATerm d_53 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(a_53));
          {
            d_53 = t;
            if(((c_53 != NULL) && (c_53 != d_53)))
              _fail(d_53);
            else
              c_53 = d_53;
          }
          t = not_null(c_53);
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
  ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL;
  j_53 = t;
  i_53 :
  if(match_cons(j_53, sym__2))
    {
      k_53 = ATgetArgument(j_53, 0);
      l_53 = ATgetArgument(j_53, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_k_27, not_null(k_53), not_null(l_53));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_79 (ATerm))
{
  ATerm k_28;
  k_28 = t;
  {
    ATerm n_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_28;
        t = z_79(t);
        LocalPopChoice(o_28);
      }
    else
      {
        t = n_28;
        {
        }
      }
  }
  t = k_28;
  {
    ATerm i_6 (ATerm t)
    {
      ATerm t_53 = NULL;
      ATerm q_28;
      q_28 = t;
      {
        ATerm r_53 = NULL;
        ATerm s_53 = NULL;
        s_53 = t;
        if(((r_53 != NULL) && (r_53 != s_53)))
          _fail(s_53);
        else
          r_53 = s_53;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_23, not_null(r_53));
          t = set_config_0(t);
        }
      }
      t = q_28;
      {
        ATerm u_53 = NULL;
        u_53 = t;
        if(((t_53 != NULL) && (t_53 != u_53)))
          _fail(u_53);
        else
          t_53 = u_53;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(t_53));
      }
      return(t);
    }
    ATerm k_6 (ATerm t)
    {
      ATerm r_28 = t;
      int s_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_28 = t;
          int u_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(u_28);
            }
          else
            {
              t = t_28;
              {
                t = z_79(t);
                t = Cons_2(t, _id, k_6);
              }
            }
          LocalPopChoice(s_28);
        }
      else
        {
          t = r_28;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, i_6, k_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_54 = NULL,b_54 = NULL,c_54 = NULL;
  ATerm v_28;
  v_28 = t;
  {
    ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL;
    d_54 = t;
    z_53 :
    if(match_cons(d_54, sym__3))
      {
        e_54 = ATgetArgument(d_54, 0);
        f_54 = ATgetArgument(d_54, 1);
        g_54 = ATgetArgument(d_54, 2);
        {
          if(((a_54 != NULL) && (a_54 != e_54)))
            _fail(e_54);
          else
            a_54 = e_54;
          {
            if(((b_54 != NULL) && (b_54 != f_54)))
              _fail(f_54);
            else
              b_54 = f_54;
            {
              if(((c_54 != NULL) && (c_54 != g_54)))
                _fail(g_54);
              else
                c_54 = g_54;
              t = SSL_table_put(not_null(a_54), not_null(b_54), not_null(c_54));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = v_28;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_79 (ATerm))
{
  ATerm j_54 = NULL;
  ATerm w_28;
  w_28 = t;
  {
    t = term_a_29;
    t = table_put_0(t);
  }
  t = w_28;
  {
    ATerm l_6 (ATerm t)
    {
      ATerm c_29 = t;
      int d_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_79(t);
          LocalPopChoice(d_29);
        }
      else
        {
          t = c_29;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, l_6);
    {
      ATerm e_29 = t;
      int f_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_29;
          k_29 = t;
          {
            ATerm l_29 = t;
            int m_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_a_28;
                t = get_config_0(t);
                LocalPopChoice(m_29);
              }
            else
              {
                t = l_29;
                t = fetch_1(t, Help_0);
              }
          }
          t = k_29;
          {
            t = system_usage_0(t);
            {
              t = term_s_20;
              t = exit_0(t);
            }
          }
          LocalPopChoice(f_29);
        }
      else
        {
          t = e_29;
          {
            ATerm n_29 = t;
            int o_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_6 (ATerm t)
                {
                  ATerm p_6 (ATerm t)
                  {
                    ATerm k_54 = NULL;
                    k_54 = t;
                    if(((j_54 != NULL) && (j_54 != k_54)))
                      _fail(k_54);
                    else
                      j_54 = k_54;
                    return(t);
                  }
                  t = Undefined_1(t, p_6);
                  return(t);
                }
                t = fetch_1(t, m_6);
                {
                  ATerm q_6 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_54)), term_p_29);
                    return(t);
                  }
                  t = say_1(t, q_6);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_s_22;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(o_29);
              }
            else
              {
                t = n_29;
                {
                }
              }
          }
        }
      {
        ATerm s_29;
        s_29 = t;
        {
          t = term_e_25;
          t = table_destroy_0(t);
        }
        t = s_29;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm y_77 (ATerm))
{
  t = parse_options_1(t, v_77);
  {
    t = store_options_0(t);
    {
      t = x_77(t);
      {
        ATerm t_29 = t;
        int u_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, w_77);
            LocalPopChoice(u_29);
          }
        else
          {
            t = t_29;
            {
              ATerm v_29 = t;
              int w_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_77(t);
                  t = report_success_0(t);
                  LocalPopChoice(w_29);
                }
              else
                {
                  t = v_29;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm z_77 (ATerm), ATerm a_78 (ATerm))
{
  t = option_wrap_4(t, z_77, default_usage_0, _id, a_78);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm j_73 (ATerm), ATerm k_73 (ATerm))
{
  ATerm v_6 (ATerm t)
  {
    ATerm g_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_73(t);
        LocalPopChoice(h_30);
      }
    else
      {
        t = g_30;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm w_6 (ATerm t)
  {
    t = xtc_io_1(t, k_73);
    return(t);
  }
  t = option_wrap_2(t, v_6, w_6);
  return(t);
}
ATerm term_to_dot_0 (ATerm t)
{
  ATerm x_6 (ATerm t)
  {
    t = xtc_io_transform_1(t, to_adot_0);
    {
      ATerm y_6 (ATerm t)
      {
        t = term_i_30;
        return(t);
      }
      ATerm a_7 (ATerm t)
      {
        ATerm n_54 = NULL;
        ATerm o_54 = NULL;
        t = term_j_30;
        {
          t = xtc_find_0(t);
          {
            o_54 = t;
            if(((n_54 != NULL) && (n_54 != o_54)))
              _fail(o_54);
            else
              n_54 = o_54;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_54)), term_k_30);
        return(t);
      }
      t = xtc_transform_2(t, y_6, a_7);
      {
        ATerm b_7 (ATerm t)
        {
          t = term_m_30;
          return(t);
        }
        t = xtc_transform_1(t, b_7);
      }
    }
    return(t);
  }
  t = xtc_io_wrap_2(t, term_to_adot_options_0, x_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = term_to_dot_0(t);
  return(t);
}
