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
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_i_30;
ATerm term_p_29;
ATerm term_v_28;
ATerm term_m_28;
ATerm term_h_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_v_27;
ATerm term_f_27;
ATerm term_z_26;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_t_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_f_21;
ATerm term_z_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_j_19;
ATerm term_i_17;
ATerm term_d_17;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_m_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_y_15;
ATerm term_q_15;
ATerm term_n_15;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_c_13;
ATerm term_z_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_i_11;
ATerm term_z_10;
ATerm term_u_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_h_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_g_9;
ATerm term_y_8;
ATerm term_u_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_e_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_g_7;
ATerm term_f_7;
void init_constant_terms (void)
{
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym__2, term_g_7, term_j_7);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym__2, term_g_7, term_q_8);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_AttrId_2, term_s_12, term_z_12);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym__2, term_d_17, term_y_15);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_t_16);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym__2, term_z_7, term_k_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym__2, term_v_20, term_t_16);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym__2, term_i_21, term_t_16);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__2, term_q_15, term_t_16);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym__2, term_n_15, term_t_16);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym__2, term_y_24, term_z_24);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym__2, term_v_27, term_t_16);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym__3, term_y_24, term_z_24, (ATerm) ATempty);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Dot-pretty.pp", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_1 (ATerm, ATerm i_73 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm n_58 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm p_58 (ATerm));
ATerm set_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm y_58 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm q_73 (ATerm), ATerm r_73 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm h_73 (ATerm));
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm b_51 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm j_73 (ATerm), ATerm k_73 (ATerm));
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
ATerm string_as_chars_1 (ATerm, ATerm d_76 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm EdgeToDot_0 (ATerm);
ATerm ListEdgeToDot_0 (ATerm);
ATerm graph_to_adot_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm NodeId_0 (ATerm);
ATerm address_0 (ATerm);
ATerm term_to_graph_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm p_69 (ATerm), ATerm q_69 (ATerm));
ATerm union_1 (ATerm, ATerm l_69 (ATerm));
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm c_69 (ATerm), ATerm d_69 (ATerm), ATerm e_69 (ATerm));
ATerm foldr_3 (ATerm, ATerm e_70 (ATerm), ATerm f_70 (ATerm), ATerm g_70 (ATerm));
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm o_58 (ATerm));
ATerm term_to_tree_0 (ATerm);
ATerm to_adot_0 (ATerm);
ATerm close_file_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm assert_1 (ATerm, ATerm c_74 (ATerm));
ATerm obsolete_1 (ATerm, ATerm q_74 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm xtc_io_transform_1 (ATerm, ATerm s_73 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm z_73 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm n_62 (ATerm), ATerm o_62 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm y_73 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm x_72 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm y_72 (ATerm));
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
ATerm term_to_adot_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm c_70 (ATerm), ATerm d_70 (ATerm));
ATerm crush_2 (ATerm, ATerm a_69 (ATerm), ATerm b_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm k_58 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm i_77 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm q_79 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm p_79 (ATerm));
ATerm Program_1 (ATerm, ATerm o_55 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm k_74 (ATerm));
ATerm Undefined_1 (ATerm, ATerm p_55 (ATerm));
ATerm fetch_1 (ATerm, ATerm x_63 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_78 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm d_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm f_49 (ATerm), ATerm g_49 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm j_74 (ATerm));
ATerm map_1 (ATerm, ATerm o_63 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm d_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_79 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm o_50 (ATerm), ATerm p_50 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_79 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_79 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm r_77 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm s_77 (ATerm), ATerm t_77 (ATerm));
ATerm term_to_dot_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_transform_1 (ATerm t, ATerm i_73 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, i_73, b_0);
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
  ATerm e_7;
  e_7 = t;
  {
    ATerm d_3 = NULL;
    ATerm e_3 = NULL;
    e_3 = t;
    if(((d_3 != NULL) && (d_3 != e_3)))
      _fail(e_3);
    else
      d_3 = e_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, not_null(d_3));
      t = printnl_0(t);
    }
  }
  t = e_7;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm k_3 = NULL;
  ATerm m_3 = NULL,n_3 = NULL;
  k_3 = t;
  {
    ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(k_3)));
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
        t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(a_4)));
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
  ATerm h_7 = t;
  int i_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_7;
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
ATerm if_verbose4_1 (ATerm t, ATerm n_58 (ATerm))
{
  ATerm l_7 = t;
  int t_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_7;
      y_7 = t;
      {
        ATerm l_4 = NULL;
        ATerm m_4 = NULL;
        t = term_z_7;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_4), term_a_8);
          t = geq_0(t);
        }
      }
      t = y_7;
      t = n_58(t);
      LocalPopChoice(t_7);
    }
  else
    {
      t = l_7;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm p_58 (ATerm))
{
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_8;
      d_8 = t;
      {
        ATerm p_4 = NULL;
        ATerm q_4 = NULL;
        t = term_z_7;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_4), term_e_8);
          t = geq_0(t);
        }
      }
      t = d_8;
      t = p_58(t);
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
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL;
  w_4 = t;
  v_4 :
  if(match_cons(w_4, sym__3))
    {
      x_4 = ATgetArgument(w_4, 0);
      y_4 = ATgetArgument(w_4, 1);
      z_4 = ATgetArgument(w_4, 2);
      {
        ATerm f_8;
        f_8 = t;
        {
          ATerm d_5 = NULL;
          ATerm e_5 = NULL,g_5 = NULL;
          ATerm f_5 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_4), not_null(y_4));
          {
            ATerm g_8 = t;
            int j_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(j_8);
              }
            else
              {
                t = g_8;
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
        t = f_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm y_58 (ATerm))
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
                  t = y_58(t);
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
    ATerm o_8 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(c_6)));
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
        t = (ATerm) ATmakeAppl(sym__3, term_g_7, term_q_8, (ATerm) ATinsert(ATempty, not_null(c_6)));
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
          ATerm s_8 = t;
          int t_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(t_8);
            }
          else
            {
              t = s_8;
              t = (ATerm) ATempty;
            }
          {
            ATerm t_0 (ATerm t)
            {
              ATerm u_0 (ATerm t)
              {
                t = term_u_8;
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
                t = (ATerm) ATmakeAppl(sym__2, term_g_7, not_null(e_6));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm v_0 (ATerm t)
                    {
                      ATerm w_0 (ATerm t)
                      {
                        t = term_y_8;
                        return(t);
                      }
                      t = say_1(t, w_0);
                      return(t);
                    }
                    t = if_verbose6_1(t, v_0);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_g_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(c_6)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm x_0 (ATerm t)
                          {
                            ATerm y_0 (ATerm t)
                            {
                              t = term_u_8;
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
  ATerm z_8 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_9;
      t = get_config_0(t);
      LocalPopChoice(d_9);
    }
  else
    {
      t = z_8;
      {
        ATerm h_9 = t;
        int i_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_j_9;
            t = getenv_0(t);
            LocalPopChoice(i_9);
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
      t = term_k_9;
      return(t);
    }
    t = debug_1(t, a_1);
    return(t);
  }
  t = if_verbose5_1(t, z_0);
  {
    ATerm q_9;
    q_9 = t;
    {
      ATerm r_9 = t;
      int s_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_y_9;
          t = table_get_0(t);
          LocalPopChoice(s_9);
        }
      else
        {
          t = r_9;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = q_9;
    {
      ATerm b_1 (ATerm t)
      {
        ATerm c_1 (ATerm t)
        {
          t = term_z_9;
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
  ATerm a_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_1 (ATerm t)
      {
        ATerm e_1 (ATerm t)
        {
          t = term_h_10;
          return(t);
        }
        t = debug_1(t, e_1);
        return(t);
      }
      t = if_verbose5_1(t, d_1);
      {
        t = xtc_load_0(t);
        {
          ATerm i_10 = t;
          int j_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(j_10);
            }
          else
            {
              t = i_10;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm f_1 (ATerm t)
            {
              ATerm g_1 (ATerm t)
              {
                t = term_h_10;
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
      t = a_10;
      {
        ATerm n_6 = NULL;
        ATerm o_6 = NULL;
        o_6 = t;
        if(((n_6 != NULL) && (n_6 != o_6)))
          _fail(o_6);
        else
          n_6 = o_6;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_10), not_null(n_6)), term_l_10);
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
ATerm xtc_transform_term_2 (ATerm t, ATerm q_73 (ATerm), ATerm r_73 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, q_73, r_73);
    t = read_from_0(t);
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL;
  s_6 = t;
  r_6 :
  if(match_cons(s_6, sym__2))
    {
      t_6 = ATgetArgument(s_6, 0);
      u_6 = ATgetArgument(s_6, 1);
      t = SSL_call(not_null(t_6), not_null(u_6));
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
ATerm xtc_command_1 (ATerm t, ATerm h_73 (ATerm))
{
  ATerm a_7 = NULL;
  ATerm s_10;
  s_10 = t;
  {
    ATerm b_7 = NULL;
    t = h_73(t);
    {
      t = xtc_find_0(t);
      {
        b_7 = t;
        if(((a_7 != NULL) && (a_7 != b_7)))
          _fail(b_7);
        else
          a_7 = b_7;
      }
    }
  }
  t = s_10;
  {
    ATerm t_10;
    t_10 = t;
    {
      ATerm c_7 = NULL;
      ATerm d_7 = NULL;
      d_7 = t;
      if(((c_7 != NULL) && (c_7 != d_7)))
        _fail(d_7);
      else
        c_7 = d_7;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_7), not_null(c_7));
        t = call_0(t);
      }
    }
    t = t_10;
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm n_7 = NULL,o_7 = NULL;
  n_7 = t;
  m_7 :
  if(match_cons(n_7, sym_stdin_0))
    {
      ATerm p_7 = NULL;
      ATerm q_7 = NULL;
      ATerm r_7 = NULL;
      t = xtc_new_file_0(t);
      {
        q_7 = t;
        {
          if(((p_7 != NULL) && (p_7 != q_7)))
            _fail(q_7);
          else
            p_7 = q_7;
          {
            ATerm s_7 = NULL;
            t = o_0(t);
            {
              s_7 = t;
              if(((r_7 != NULL) && (r_7 != s_7)))
                _fail(s_7);
              else
                r_7 = s_7;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_7), (ATerm) ATinsert(ATinsert(ATempty, not_null(p_7)), term_u_10));
              {
                ATerm v_10 = t;
                int y_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(y_10);
                  }
                else
                  {
                    t = v_10;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(p_7);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_7));
    }
  else
    {
      if(match_cons(n_7, sym_FILE_1))
        {
          o_7 = ATgetArgument(n_7, 0);
          {
            ATerm u_7 = NULL;
            ATerm v_7 = NULL;
            t = not_null(o_7);
            {
              ATerm w_7 = NULL;
              t = xtc_new_file_0(t);
              {
                v_7 = t;
                {
                  if(((u_7 != NULL) && (u_7 != v_7)))
                    _fail(v_7);
                  else
                    u_7 = v_7;
                  {
                    ATerm x_7 = NULL;
                    t = o_0(t);
                    {
                      x_7 = t;
                      if(((w_7 != NULL) && (w_7 != x_7)))
                        _fail(x_7);
                      else
                        w_7 = x_7;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(w_7), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(u_7)), term_u_10), not_null(o_7)), term_z_10));
                      {
                        ATerm a_11 = t;
                        int b_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(b_11);
                          }
                        else
                          {
                            t = a_11;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(u_7);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_7));
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
  ATerm i_8 = NULL;
  i_8 = t;
  h_8 :
  if(match_cons(i_8, sym_stdin_0))
    {
      ATerm k_8 = NULL,m_8 = NULL;
      ATerm c_11;
      c_11 = t;
      {
        ATerm l_8 = NULL;
        t = SSLgetAnnotations(not_null(i_8));
        {
          l_8 = t;
          if(((k_8 != NULL) && (k_8 != l_8)))
            _fail(l_8);
          else
            k_8 = l_8;
        }
      }
      t = c_11;
      {
        ATerm n_8 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(k_8));
        {
          n_8 = t;
          if(((m_8 != NULL) && (m_8 != n_8)))
            _fail(n_8);
          else
            m_8 = n_8;
        }
        t = not_null(m_8);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm b_51 (ATerm))
{
  ATerm w_8 = NULL,x_8 = NULL;
  w_8 = t;
  v_8 :
  if(match_cons(w_8, sym_FILE_1))
    {
      x_8 = ATgetArgument(w_8, 0);
      {
        ATerm a_9 = NULL,c_9 = NULL;
        ATerm b_9 = NULL;
        t = SSLgetAnnotations(not_null(w_8));
        {
          b_9 = t;
          if(((a_9 != NULL) && (a_9 != b_9)))
            _fail(b_9);
          else
            a_9 = b_9;
        }
        {
          t = not_null(x_8);
          {
            ATerm e_9 = NULL;
            t = b_51(t);
            {
              c_9 = t;
              {
                ATerm f_9 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(c_9)), not_null(a_9));
                {
                  f_9 = t;
                  if(((e_9 != NULL) && (e_9 != f_9)))
                    _fail(f_9);
                  else
                    e_9 = f_9;
                }
                t = not_null(e_9);
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
ATerm xtc_transform_2 (ATerm t, ATerm j_73 (ATerm), ATerm k_73 (ATerm))
{
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_11 = t;
      int h_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(h_11);
        }
      else
        {
          t = g_11;
          t = stdin_0(t);
        }
      LocalPopChoice(f_11);
      t = xtc_transform_file_2(t, j_73, k_73);
    }
  else
    {
      t = e_11;
      t = xtc_transform_term_2(t, j_73, k_73);
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
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
  n_9 = t;
  l_9 :
  if(((ATgetType(n_9) == AT_LIST) && !(ATisEmpty(n_9))))
    {
      o_9 = ATgetFirst((ATermList) n_9);
      p_9 = (ATerm) ATgetNext((ATermList) n_9);
      m_9 :
      if(match_int(o_9, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(p_9)), term_n_11), term_i_11);
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
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
  v_9 = t;
  t_9 :
  if(((ATgetType(v_9) == AT_LIST) && !(ATisEmpty(v_9))))
    {
      w_9 = ATgetFirst((ATermList) v_9);
      x_9 = (ATerm) ATgetNext((ATermList) v_9);
      u_9 :
      if(match_int(w_9, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(x_9)), term_i_11), term_i_11);
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
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL;
  d_10 = t;
  b_10 :
  if(((ATgetType(d_10) == AT_LIST) && !(ATisEmpty(d_10))))
    {
      e_10 = ATgetFirst((ATermList) d_10);
      f_10 = (ATerm) ATgetNext((ATermList) d_10);
      c_10 :
      if(match_int(e_10, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(f_10)), term_o_11), term_i_11);
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
  ATerm s_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      LocalPopChoice(a_12);
    }
  else
    {
      t = s_11;
      {
        ATerm c_12 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            LocalPopChoice(d_12);
          }
        else
          {
            t = c_12;
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
        ATerm k_1 (ATerm t)
        {
          t = Cons_2(t, _id, escape_chars_0);
          return(t);
        }
        t = Cons_2(t, _id, k_1);
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
  ATerm k_10 = NULL;
  k_10 = t;
  t = SSL_is_int(not_null(k_10));
  return(t);
}
ATerm quote_chars_0 (ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
  p_10 = t;
  o_10 :
  if(match_cons(p_10, sym__2))
    {
      q_10 = ATgetArgument(p_10, 0);
      r_10 = ATgetArgument(p_10, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_10)), not_null(q_10)), (ATerm) ATinsert(ATempty, not_null(q_10)));
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
  ATerm w_10 = NULL;
  ATerm x_10 = NULL;
  x_10 = t;
  if(((w_10 != NULL) && (w_10 != x_10)))
    _fail(x_10);
  else
    w_10 = x_10;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_o_11, not_null(w_10));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm d_76 (ATerm))
{
  t = explode_string_0(t);
  {
    t = d_76(t);
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
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL;
  k_11 = t;
  j_11 :
  if(match_cons(k_11, sym__2))
    {
      l_11 = ATgetArgument(k_11, 0);
      m_11 = ATgetArgument(k_11, 1);
      {
        ATerm o_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_11 = NULL,q_11 = NULL,w_11 = NULL,y_11 = NULL;
            ATerm q_12;
            q_12 = t;
            {
              ATerm r_11 = NULL;
              ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL;
              t = not_null(m_11);
              {
                r_11 = t;
                {
                  t = SSL_explode_term(not_null(r_11));
                  {
                    t_11 = t;
                    d_11 :
                    if(match_cons(t_11, sym__2))
                      {
                        u_11 = ATgetArgument(t_11, 0);
                        v_11 = ATgetArgument(t_11, 1);
                        {
                          if(((p_11 != NULL) && (p_11 != u_11)))
                            _fail(u_11);
                          else
                            p_11 = u_11;
                          if(((q_11 != NULL) && (q_11 != v_11)))
                            _fail(v_11);
                          else
                            q_11 = v_11;
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
              ATerm r_12;
              r_12 = t;
              {
                ATerm x_11 = NULL;
                t = not_null(p_11);
                {
                  t = string_as_chars_1(t, escape_chars_0);
                  {
                    t = string_as_chars_1(t, double_quote_chars_0);
                    {
                      x_11 = t;
                      if(((w_11 != NULL) && (w_11 != x_11)))
                        _fail(x_11);
                      else
                        w_11 = x_11;
                    }
                  }
                }
              }
              t = r_12;
              {
                ATerm b_12 = NULL;
                t = not_null(q_11);
                {
                  ATerm l_1 (ATerm t)
                  {
                    ATerm z_11 = NULL;
                    z_11 = t;
                    t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_11)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(z_11)))));
                    return(t);
                  }
                  t = map_1(t, l_1);
                  {
                    b_12 = t;
                    if(((y_11 != NULL) && (y_11 != b_12)))
                      _fail(b_12);
                    else
                      y_11 = b_12;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(y_11)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_11)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_s_12, not_null(w_11)))))));
              }
            }
            LocalPopChoice(p_12);
          }
        else
          {
            t = o_12;
            {
              ATerm e_12 = NULL;
              ATerm f_12 = NULL,h_12 = NULL;
              t = not_null(m_11);
              {
                t = is_int_0(t);
                {
                  ATerm g_12 = NULL;
                  t = not_null(m_11);
                  {
                    t = int_to_string_0(t);
                    {
                      t = string_as_chars_1(t, escape_chars_0);
                      {
                        g_12 = t;
                        if(((f_12 != NULL) && (f_12 != g_12)))
                          _fail(g_12);
                        else
                          f_12 = g_12;
                      }
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_12), not_null(f_12)), term_t_12);
                    {
                      t = concat_strings_0(t);
                      {
                        h_12 = t;
                        if(((e_12 != NULL) && (e_12 != h_12)))
                          _fail(h_12);
                        else
                          e_12 = h_12;
                      }
                    }
                  }
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_11)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_s_12, not_null(e_12)))))));
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
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
  v_12 = t;
  u_12 :
  if(match_cons(v_12, sym__2))
    {
      w_12 = ATgetArgument(v_12, 0);
      x_12 = ATgetArgument(v_12, 1);
      {
        ATerm a_13 = NULL;
        ATerm y_12;
        y_12 = t;
        {
          t = not_null(x_12);
          t = is_list_0(t);
        }
        t = y_12;
        {
          ATerm d_13 = NULL;
          t = not_null(x_12);
          {
            ATerm m_1 (ATerm t)
            {
              ATerm b_13 = NULL;
              b_13 = t;
              t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_12)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(b_13)))));
              return(t);
            }
            t = map_1(t, m_1);
            {
              d_13 = t;
              if(((a_13 != NULL) && (a_13 != d_13)))
                _fail(d_13);
              else
                a_13 = d_13;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(a_13)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_12)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_c_13)))));
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
  ATerm j_13 = NULL;
  ATerm l_13 = NULL;
  j_13 = t;
  {
    ATerm m_13 = NULL;
    t = not_null(j_13);
    {
      ATerm n_1 (ATerm t)
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
      t = map_1(t, n_1);
      {
        t = concat_0(t);
        {
          m_13 = t;
          if(((l_13 != NULL) && (l_13 != m_13)))
            _fail(m_13);
          else
            l_13 = m_13;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_g_13, not_null(l_13));
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm q_13 = NULL;
  q_13 = t;
  t = SSL_int_to_string(not_null(q_13));
  return(t);
}
ATerm NodeId_0 (ATerm t)
{
  ATerm u_13 = NULL;
  ATerm v_13 = NULL;
  t = int_to_string_0(t);
  {
    v_13 = t;
    if(((u_13 != NULL) && (u_13 != v_13)))
      _fail(v_13);
    else
      u_13 = v_13;
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, term_h_13, not_null(u_13));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm address_0 (ATerm t)
{
  ATerm y_13 = NULL;
  y_13 = t;
  t = SSL_address(not_null(y_13));
  return(t);
}
ATerm term_to_graph_0 (ATerm t)
{
  ATerm e_14 = NULL,g_14 = NULL,i_14 = NULL;
  ATerm i_13;
  i_13 = t;
  {
    ATerm f_14 = NULL;
    t = address_0(t);
    {
      t = NodeId_0(t);
      {
        f_14 = t;
        if(((e_14 != NULL) && (e_14 != f_14)))
          _fail(f_14);
        else
          e_14 = f_14;
      }
    }
  }
  t = i_13;
  {
    ATerm k_13;
    k_13 = t;
    {
      ATerm h_14 = NULL;
      ATerm n_13 = t;
      int o_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_1 (ATerm t)
          {
            t = address_0(t);
            t = NodeId_0(t);
            return(t);
          }
          t = map_1(t, o_1);
          LocalPopChoice(o_13);
        }
      else
        {
          t = n_13;
          {
            ATerm p_1 (ATerm t)
            {
              t = address_0(t);
              t = NodeId_0(t);
              return(t);
            }
            t = _all(t, p_1);
          }
        }
      {
        h_14 = t;
        if(((g_14 != NULL) && (g_14 != h_14)))
          _fail(h_14);
        else
          g_14 = h_14;
      }
    }
    t = k_13;
    {
      ATerm j_14 = NULL;
      ATerm p_13 = t;
      int r_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm r_1 (ATerm t)
          {
            t = union_1(t, eq_0);
            return(t);
          }
          t = foldr_3(t, q_1, r_1, term_to_graph_0);
          LocalPopChoice(r_13);
        }
      else
        {
          t = p_13;
          {
            ATerm s_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            ATerm t_1 (ATerm t)
            {
              t = union_1(t, eq_0);
              return(t);
            }
            t = crush_3(t, s_1, t_1, term_to_graph_0);
          }
        }
      {
        j_14 = t;
        if(((i_14 != NULL) && (i_14 != j_14)))
          _fail(j_14);
        else
          i_14 = j_14;
      }
      t = (ATerm) ATinsert(CheckATermList(not_null(i_14)), (ATerm) ATmakeAppl(sym__2, not_null(e_14), not_null(g_14)));
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL;
  q_14 = t;
  p_14 :
  if(match_cons(q_14, sym__2))
    {
      r_14 = ATgetArgument(q_14, 0);
      s_14 = ATgetArgument(q_14, 1);
      if(((r_14 != NULL) && (r_14 != s_14)))
        _fail(s_14);
      else
        r_14 = s_14;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm p_69 (ATerm), ATerm q_69 (ATerm))
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
  y_14 = t;
  x_14 :
  if(((ATgetType(y_14) == AT_LIST) && !(ATisEmpty(y_14))))
    {
      z_14 = ATgetFirst((ATermList) y_14);
      a_15 = (ATerm) ATgetNext((ATermList) y_14);
      {
        t = q_69(t);
        {
          ATerm u_1 (ATerm t)
          {
            ATerm d_15 = NULL;
            d_15 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_14), not_null(d_15));
              t = p_69(t);
            }
            return(t);
          }
          t = fetch_1(t, u_1);
        }
        t = not_null(a_15);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm l_69 (ATerm))
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL;
  j_15 = t;
  i_15 :
  if(match_cons(j_15, sym__2))
    {
      k_15 = ATgetArgument(j_15, 0);
      l_15 = ATgetArgument(j_15, 1);
      {
        t = not_null(k_15);
        {
          ATerm p_15 (ATerm t)
          {
            ATerm s_13 = t;
            int t_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(l_15);
                LocalPopChoice(t_13);
              }
            else
              {
                t = s_13;
                {
                  ATerm w_13 = t;
                  int x_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_1 (ATerm t)
                      {
                        t = not_null(l_15);
                        return(t);
                      }
                      t = HdMember_p__2(t, l_69, v_1);
                      t = p_15(t);
                      LocalPopChoice(x_13);
                    }
                  else
                    {
                      t = w_13;
                      t = Cons_2(t, _id, p_15);
                    }
                }
              }
            return(t);
          }
          t = p_15(t);
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
ATerm crush_3 (ATerm t, ATerm c_69 (ATerm), ATerm d_69 (ATerm), ATerm e_69 (ATerm))
{
  ATerm u_15 = NULL;
  ATerm w_15 = NULL;
  u_15 = t;
  {
    ATerm x_15 = NULL;
    ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
    t = not_null(u_15);
    {
      x_15 = t;
      {
        t = SSL_explode_term(not_null(x_15));
        {
          z_15 = t;
          t_15 :
          if(match_cons(z_15, sym__2))
            {
              a_16 = ATgetArgument(z_15, 0);
              b_16 = ATgetArgument(z_15, 1);
              if(((w_15 != NULL) && (w_15 != b_16)))
                _fail(b_16);
              else
                w_15 = b_16;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(w_15);
      t = foldr_3(t, c_69, d_69, e_69);
    }
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm e_70 (ATerm), ATerm f_70 (ATerm), ATerm g_70 (ATerm))
{
  ATerm z_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_70(t);
      LocalPopChoice(a_14);
    }
  else
    {
      t = z_13;
      {
        ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL;
        j_16 = t;
        i_16 :
        if(((ATgetType(j_16) == AT_LIST) && !(ATisEmpty(j_16))))
          {
            k_16 = ATgetFirst((ATermList) j_16);
            l_16 = (ATerm) ATgetNext((ATermList) j_16);
            {
              ATerm o_16 = NULL,q_16 = NULL;
              ATerm b_14;
              b_14 = t;
              {
                ATerm p_16 = NULL;
                t = not_null(k_16);
                {
                  t = g_70(t);
                  {
                    p_16 = t;
                    if(((o_16 != NULL) && (o_16 != p_16)))
                      _fail(p_16);
                    else
                      o_16 = p_16;
                  }
                }
              }
              t = b_14;
              {
                ATerm r_16 = NULL;
                t = not_null(l_16);
                {
                  t = foldr_3(t, e_70, f_70, g_70);
                  {
                    r_16 = t;
                    if(((q_16 != NULL) && (q_16 != r_16)))
                      _fail(r_16);
                    else
                      q_16 = r_16;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_16), not_null(q_16));
                  t = f_70(t);
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
  ATerm c_17 = NULL;
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
  c_17 = t;
  {
    ATerm h_17 = NULL;
    ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL;
    t = not_null(c_17);
    {
      h_17 = t;
      {
        t = SSL_explode_term(not_null(h_17));
        {
          j_17 = t;
          y_16 :
          if(match_cons(j_17, sym__2))
            {
              k_17 = ATgetArgument(j_17, 0);
              l_17 = ATgetArgument(j_17, 1);
              z_16 :
              if(match_string(k_17, ""))
                {
                  a_17 :
                  if(((ATgetType(l_17) == AT_LIST) && !(ATisEmpty(l_17))))
                    {
                      m_17 = ATgetFirst((ATermList) l_17);
                      n_17 = (ATerm) ATgetNext((ATermList) l_17);
                      b_17 :
                      if(((ATgetType(n_17) == AT_LIST) && !(ATisEmpty(n_17))))
                        {
                          o_17 = ATgetFirst((ATermList) n_17);
                          p_17 = (ATerm) ATgetNext((ATermList) n_17);
                          {
                            if(((e_17 != NULL) && (e_17 != m_17)))
                              _fail(m_17);
                            else
                              e_17 = m_17;
                            {
                              if(((g_17 != NULL) && (g_17 != o_17)))
                                _fail(o_17);
                              else
                                g_17 = o_17;
                              if(((f_17 != NULL) && (f_17 != p_17)))
                                _fail(p_17);
                              else
                                f_17 = p_17;
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
    t = not_null(g_17);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm z_17 = NULL;
  ATerm b_18 = NULL,d_18 = NULL;
  z_17 = t;
  {
    ATerm e_18 = NULL;
    ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
    t = not_null(z_17);
    {
      e_18 = t;
      {
        t = SSL_explode_term(not_null(e_18));
        {
          g_18 = t;
          w_17 :
          if(match_cons(g_18, sym__2))
            {
              h_18 = ATgetArgument(g_18, 0);
              i_18 = ATgetArgument(g_18, 1);
              x_17 :
              if(match_string(h_18, ""))
                {
                  y_17 :
                  if(((ATgetType(i_18) == AT_LIST) && !(ATisEmpty(i_18))))
                    {
                      j_18 = ATgetFirst((ATermList) i_18);
                      k_18 = (ATerm) ATgetNext((ATermList) i_18);
                      {
                        if(((d_18 != NULL) && (d_18 != j_18)))
                          _fail(j_18);
                        else
                          d_18 = j_18;
                        if(((b_18 != NULL) && (b_18 != k_18)))
                          _fail(k_18);
                        else
                          b_18 = k_18;
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
    t = not_null(d_18);
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm o_58 (ATerm))
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_14;
      k_14 = t;
      {
        ATerm p_18 = NULL;
        ATerm q_18 = NULL;
        t = term_z_7;
        {
          t = get_config_0(t);
          {
            q_18 = t;
            if(((p_18 != NULL) && (p_18 != q_18)))
              _fail(q_18);
            else
              p_18 = q_18;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_18), term_l_14);
          t = geq_0(t);
        }
      }
      t = k_14;
      t = o_58(t);
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      {
      }
    }
  return(t);
}
ATerm term_to_tree_0 (ATerm t)
{
  ATerm b_19 = NULL,d_19 = NULL;
  ATerm w_1 (ATerm t)
  {
    ATerm x_1 (ATerm t)
    {
      t = term_m_14;
      return(t);
    }
    t = debug_1(t, x_1);
    return(t);
  }
  t = if_verbose5_1(t, w_1);
  {
    ATerm n_14;
    n_14 = t;
    {
      ATerm c_19 = NULL;
      t = new_0(t);
      {
        c_19 = t;
        if(((b_19 != NULL) && (b_19 != c_19)))
          _fail(c_19);
        else
          b_19 = c_19;
      }
    }
    t = n_14;
    {
      ATerm e_19 = NULL;
      e_19 = t;
      if(((d_19 != NULL) && (d_19 != e_19)))
        _fail(e_19);
      else
        d_19 = e_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_19), not_null(d_19));
        {
          ATerm a_20 (ATerm t)
          {
            ATerm p_19 = NULL,w_19 = NULL;
            ATerm y_1 (ATerm t)
            {
              ATerm o_14 = t;
              int t_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_2 (ATerm t)
                  {
                    ATerm f_19 = NULL,h_19 = NULL;
                    ATerm u_14;
                    u_14 = t;
                    {
                      ATerm g_19 = NULL;
                      t = new_0(t);
                      {
                        g_19 = t;
                        if(((f_19 != NULL) && (f_19 != g_19)))
                          _fail(g_19);
                        else
                          f_19 = g_19;
                      }
                    }
                    t = u_14;
                    {
                      ATerm i_19 = NULL;
                      i_19 = t;
                      if(((h_19 != NULL) && (h_19 != i_19)))
                        _fail(i_19);
                      else
                        h_19 = i_19;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(f_19), not_null(h_19));
                    }
                    return(t);
                  }
                  t = map_1(t, a_2);
                  LocalPopChoice(t_14);
                }
              else
                {
                  t = o_14;
                  {
                    ATerm b_2 (ATerm t)
                    {
                      ATerm l_19 = NULL,n_19 = NULL;
                      ATerm v_14;
                      v_14 = t;
                      {
                        ATerm m_19 = NULL;
                        t = new_0(t);
                        {
                          m_19 = t;
                          if(((l_19 != NULL) && (l_19 != m_19)))
                            _fail(m_19);
                          else
                            l_19 = m_19;
                        }
                      }
                      t = v_14;
                      {
                        ATerm o_19 = NULL;
                        o_19 = t;
                        if(((n_19 != NULL) && (n_19 != o_19)))
                          _fail(o_19);
                        else
                          n_19 = o_19;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_19), not_null(n_19));
                      }
                      return(t);
                    }
                    t = _all(t, b_2);
                  }
                }
              return(t);
            }
            t = _2(t, _id, y_1);
            {
              ATerm w_14;
              w_14 = t;
              {
                ATerm v_19 = NULL;
                ATerm c_2 (ATerm t)
                {
                  ATerm b_15 = t;
                  int c_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = map_1(t, Fst_0);
                      LocalPopChoice(c_15);
                    }
                  else
                    {
                      t = b_15;
                      t = _all(t, Fst_0);
                    }
                  return(t);
                }
                t = _2(t, _id, c_2);
                {
                  v_19 = t;
                  if(((p_19 != NULL) && (p_19 != v_19)))
                    _fail(v_19);
                  else
                    p_19 = v_19;
                }
              }
              t = w_14;
              {
                ATerm x_19 = NULL;
                t = Snd_0(t);
                {
                  ATerm e_15 = t;
                  int f_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_2 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      ATerm e_2 (ATerm t)
                      {
                        t = union_1(t, eq_0);
                        return(t);
                      }
                      t = foldr_3(t, d_2, e_2, a_20);
                      LocalPopChoice(f_15);
                    }
                  else
                    {
                      t = e_15;
                      {
                        ATerm f_2 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        ATerm g_2 (ATerm t)
                        {
                          t = union_1(t, eq_0);
                          return(t);
                        }
                        t = crush_3(t, f_2, g_2, a_20);
                      }
                    }
                  {
                    x_19 = t;
                    if(((w_19 != NULL) && (w_19 != x_19)))
                      _fail(x_19);
                    else
                      w_19 = x_19;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(w_19)), not_null(p_19));
              }
            }
            return(t);
          }
          t = a_20(t);
        }
      }
    }
  }
  return(t);
}
ATerm to_adot_0 (ATerm t)
{
  ATerm g_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_15;
      m_15 = t;
      {
        t = term_n_15;
        t = get_config_0(t);
      }
      t = m_15;
      t = term_to_tree_0(t);
      LocalPopChoice(h_15);
    }
  else
    {
      t = g_15;
      {
        ATerm o_15;
        o_15 = t;
        {
          t = term_q_15;
          t = get_config_0(t);
        }
        t = o_15;
        t = term_to_graph_0(t);
      }
    }
  t = graph_to_adot_0(t);
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm i_20 = NULL;
  i_20 = t;
  t = SSL_close_file(not_null(i_20));
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL,y_20 = NULL;
  s_20 = t;
  r_20 :
  if(match_cons(s_20, sym__2))
    {
      t_20 = ATgetArgument(s_20, 0);
      y_20 = ATgetArgument(s_20, 1);
      t = SSL_WriteToBinaryFile(not_null(t_20), not_null(y_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm c_74 (ATerm))
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL;
  q_21 = t;
  p_21 :
  if(match_cons(q_21, sym__2))
    {
      r_21 = ATgetArgument(q_21, 0);
      s_21 = ATgetArgument(q_21, 1);
      {
        ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
        ATerm r_15;
        r_15 = t;
        {
          ATerm y_21 = NULL;
          ATerm z_21 = NULL,a_22 = NULL,g_22 = NULL;
          t = c_74(t);
          {
            y_21 = t;
            {
              if(((v_21 != NULL) && (v_21 != y_21)))
                _fail(y_21);
              else
                v_21 = y_21;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(v_21), not_null(r_21), not_null(s_21));
                {
                  t = table_push_0(t);
                  {
                    ATerm s_15 = t;
                    int v_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(v_21), term_y_15);
                        t = table_get_0(t);
                        LocalPopChoice(v_15);
                      }
                    else
                      {
                        t = s_15;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      z_21 = t;
                      o_21 :
                      if(((ATgetType(z_21) == AT_LIST) && !(ATisEmpty(z_21))))
                        {
                          a_22 = ATgetFirst((ATermList) z_21);
                          g_22 = (ATerm) ATgetNext((ATermList) z_21);
                          {
                            if(((w_21 != NULL) && (w_21 != a_22)))
                              _fail(a_22);
                            else
                              w_21 = a_22;
                            {
                              if(((x_21 != NULL) && (x_21 != g_22)))
                                _fail(g_22);
                              else
                                x_21 = g_22;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(v_21), term_y_15, (ATerm) ATinsert(CheckATermList(not_null(x_21)), (ATerm) ATinsert(CheckATermList(not_null(w_21)), not_null(r_21))));
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
        t = r_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm c_16;
  c_16 = t;
  {
    t = q_74(t);
    {
      ATerm h_2 (ATerm t)
      {
        t = term_d_16;
        return(t);
      }
      t = debug_1(t, h_2);
    }
  }
  t = c_16;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL;
  ATerm e_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL;
      q_22 = t;
      l_22 :
      if(match_cons(q_22, sym__2))
        {
          r_22 = ATgetArgument(q_22, 0);
          s_22 = ATgetArgument(q_22, 1);
          {
            if(((p_22 != NULL) && (p_22 != r_22)))
              _fail(r_22);
            else
              p_22 = r_22;
            if(((o_22 != NULL) && (o_22 != s_22)))
              _fail(s_22);
            else
              o_22 = s_22;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(f_16);
      t = SSL_open_file(not_null(p_22), not_null(o_22));
    }
  else
    {
      t = e_16;
      {
        ATerm y_22 = NULL;
        ATerm z_22 = NULL;
        ATerm i_2 (ATerm t)
        {
          t = term_g_16;
          return(t);
        }
        t = obsolete_1(t, i_2);
        {
          y_22 = t;
          {
            if(((p_22 != NULL) && (p_22 != y_22)))
              _fail(y_22);
            else
              p_22 = y_22;
            {
              ATerm h_16;
              h_16 = t;
              {
                ATerm a_23 = NULL;
                t = term_m_16;
                {
                  a_23 = t;
                  if(((z_22 != NULL) && (z_22 != a_23)))
                    _fail(a_23);
                  else
                    z_22 = a_23;
                }
              }
              t = h_16;
              t = SSL_open_file(not_null(p_22), not_null(z_22));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm g_23 = NULL;
  ATerm i_23 = NULL;
  g_23 = t;
  {
    ATerm n_16;
    n_16 = t;
    {
      ATerm j_23 = NULL;
      t = term_s_16;
      {
        j_23 = t;
        if(((i_23 != NULL) && (i_23 != j_23)))
          _fail(j_23);
        else
          i_23 = j_23;
      }
    }
    t = n_16;
    {
      t = SSL_open_file(not_null(g_23), not_null(i_23));
      t = SSL_close_file(not_null(g_23));
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
  ATerm r_23 = NULL;
  ATerm s_23 = NULL;
  t = term_t_16;
  {
    t = new_0(t);
    {
      s_23 = t;
      if(((r_23 != NULL) && (r_23 != s_23)))
        _fail(s_23);
      else
        r_23 = s_23;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_23), term_u_16);
    {
      t = conc_strings_0(t);
      {
        ATerm v_16 = t;
        int w_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(w_16);
          }
        else
          {
            t = v_16;
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
  ATerm w_23 = NULL;
  t = new_file_0(t);
  {
    w_23 = t;
    {
      ATerm x_16;
      x_16 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_23), term_m_16);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_23), term_t_16);
            {
              ATerm j_2 (ATerm t)
              {
                t = term_d_17;
                return(t);
              }
              t = assert_1(t, j_2);
            }
          }
        }
      }
      t = x_16;
    }
  }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm b_24 = NULL;
  ATerm d_24 = NULL;
  b_24 = t;
  {
    ATerm e_24 = NULL;
    t = xtc_new_file_0(t);
    {
      e_24 = t;
      {
        if(((d_24 != NULL) && (d_24 != e_24)))
          _fail(e_24);
        else
          d_24 = e_24;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_24), not_null(b_24));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(d_24);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_24));
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm i_24 = NULL;
  i_24 = t;
  t = SSL_ReadFromFile(not_null(i_24));
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL;
  q_24 = t;
  p_24 :
  if(match_cons(q_24, sym_stdin_0))
    {
      ATerm s_24 = NULL;
      ATerm t_24 = NULL;
      t = term_i_17;
      {
        t = ReadFromFile_0(t);
        {
          t_24 = t;
          if(((s_24 != NULL) && (s_24 != t_24)))
            _fail(t_24);
          else
            s_24 = t_24;
        }
      }
      t = not_null(s_24);
    }
  else
    {
      if(match_cons(q_24, sym_FILE_1))
        {
          r_24 = ATgetArgument(q_24, 0);
          {
            ATerm v_24 = NULL;
            ATerm w_24 = NULL;
            t = not_null(r_24);
            {
              t = ReadFromFile_0(t);
              {
                w_24 = t;
                if(((v_24 != NULL) && (v_24 != w_24)))
                  _fail(w_24);
                else
                  v_24 = w_24;
              }
            }
            t = not_null(v_24);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm s_73 (ATerm))
{
  t = read_from_0(t);
  {
    t = s_73(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL;
  d_25 = t;
  c_25 :
  if(match_cons(d_25, sym__2))
    {
      e_25 = ATgetArgument(d_25, 0);
      f_25 = ATgetArgument(d_25, 1);
      t = SSL_copy(not_null(e_25), not_null(f_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm n_25 = NULL;
  n_25 = t;
  m_25 :
  if(match_cons(n_25, sym_stderr_0))
    {
      ATerm p_25 = NULL,r_25 = NULL;
      ATerm q_17;
      q_17 = t;
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
      t = q_17;
      {
        ATerm s_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(p_25));
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
ATerm stdout_0 (ATerm t)
{
  ATerm a_26 = NULL;
  a_26 = t;
  z_25 :
  if(match_cons(a_26, sym_stdout_0))
    {
      ATerm c_26 = NULL,e_26 = NULL;
      ATerm r_17;
      r_17 = t;
      {
        ATerm d_26 = NULL;
        t = SSLgetAnnotations(not_null(a_26));
        {
          d_26 = t;
          if(((c_26 != NULL) && (c_26 != d_26)))
            _fail(d_26);
          else
            c_26 = d_26;
        }
      }
      t = r_17;
      {
        ATerm f_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(c_26));
        {
          f_26 = t;
          if(((e_26 != NULL) && (e_26 != f_26)))
            _fail(f_26);
          else
            e_26 = f_26;
        }
        t = not_null(e_26);
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
  ATerm o_26 = NULL,p_26 = NULL;
  o_26 = t;
  n_26 :
  if(match_cons(o_26, sym_FILE_1))
    {
      p_26 = ATgetArgument(o_26, 0);
      {
        ATerm s_17 = t;
        int t_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_26 = NULL;
            ATerm s_26 = NULL;
            t = m_0(t);
            {
              s_26 = t;
              {
                if(((r_26 != NULL) && (r_26 != s_26)))
                  _fail(s_26);
                else
                  r_26 = s_26;
                {
                  ATerm u_17 = t;
                  int v_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(v_17);
                    }
                  else
                    {
                      t = u_17;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_26), not_null(r_26));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_26));
            LocalPopChoice(t_17);
          }
        else
          {
            t = s_17;
            {
              ATerm u_26 = NULL;
              ATerm v_26 = NULL;
              t = m_0(t);
              {
                v_26 = t;
                {
                  if(((u_26 != NULL) && (u_26 != v_26)))
                    _fail(v_26);
                  else
                    u_26 = v_26;
                  {
                    ATerm a_18 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm c_18 = t;
                        int f_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = stdout_0(t);
                            LocalPopChoice(f_18);
                          }
                        else
                          {
                            t = c_18;
                            t = stderr_0(t);
                          }
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = a_18;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(p_26), not_null(u_26));
                      t = copy_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_26));
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
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
  c_27 = t;
  b_27 :
  if(((ATgetType(c_27) == AT_LIST) && !(ATisEmpty(c_27))))
    {
      d_27 = ATgetFirst((ATermList) c_27);
      e_27 = (ATerm) ATgetNext((ATermList) c_27);
      t = not_null(e_27);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
  k_27 = t;
  j_27 :
  if(match_cons(k_27, sym__2))
    {
      l_27 = ATgetArgument(k_27, 0);
      m_27 = ATgetArgument(k_27, 1);
      {
        ATerm l_18;
        l_18 = t;
        {
          ATerm p_27 = NULL;
          ATerm q_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_27), not_null(m_27));
          {
            ATerm m_18 = t;
            int n_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(n_18);
              }
            else
              {
                t = m_18;
                t = (ATerm) ATempty;
              }
            {
              q_27 = t;
              if(((p_27 != NULL) && (p_27 != q_27)))
                _fail(q_27);
              else
                p_27 = q_27;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_27), not_null(m_27), not_null(p_27));
            t = table_put_0(t);
          }
        }
        t = l_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm z_73 (ATerm))
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL;
  ATerm o_18;
  o_18 = t;
  {
    ATerm a_28 = NULL;
    ATerm b_28 = NULL,e_28 = NULL,f_28 = NULL;
    t = z_73(t);
    {
      a_28 = t;
      {
        if(((z_27 != NULL) && (z_27 != a_28)))
          _fail(a_28);
        else
          z_27 = a_28;
        {
          ATerm r_18 = t;
          int s_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_27), term_y_15);
              t = table_get_0(t);
              LocalPopChoice(s_18);
            }
          else
            {
              t = r_18;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            b_28 = t;
            w_27 :
            if(((ATgetType(b_28) == AT_LIST) && !(ATisEmpty(b_28))))
              {
                e_28 = ATgetFirst((ATermList) b_28);
                f_28 = (ATerm) ATgetNext((ATermList) b_28);
                {
                  if(((y_27 != NULL) && (y_27 != e_28)))
                    _fail(e_28);
                  else
                    y_27 = e_28;
                  {
                    if(((x_27 != NULL) && (x_27 != f_28)))
                      _fail(f_28);
                    else
                      x_27 = f_28;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(z_27), term_y_15, not_null(x_27));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(y_27);
                          {
                            ATerm k_2 (ATerm t)
                            {
                              ATerm g_28 = NULL;
                              g_28 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_27), not_null(g_28));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, k_2);
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
  t = o_18;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm r_28 = NULL;
  r_28 = t;
  t = SSL_remove(not_null(r_28));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm n_62 (ATerm), ATerm o_62 (ATerm))
{
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_62(t);
      t = o_62(t);
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      {
        t = o_62(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm y_73 (ATerm))
{
  ATerm x_28 = NULL;
  ATerm v_18;
  v_18 = t;
  {
    ATerm y_28 = NULL;
    ATerm z_28 = NULL;
    t = y_73(t);
    {
      y_28 = t;
      {
        if(((x_28 != NULL) && (x_28 != y_28)))
          _fail(y_28);
        else
          x_28 = y_28;
        {
          ATerm a_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_28), term_y_15);
          {
            ATerm w_18 = t;
            int x_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_18);
              }
            else
              {
                t = w_18;
                t = (ATerm) ATempty;
              }
            {
              a_29 = t;
              if(((z_28 != NULL) && (z_28 != a_29)))
                _fail(a_29);
              else
                z_28 = a_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_28), term_y_15, (ATerm) ATinsert(CheckATermList(not_null(z_28)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = v_18;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm x_72 (ATerm))
{
  ATerm j_29 = NULL,k_29 = NULL;
  ATerm l_2 (ATerm t)
  {
    t = term_d_17;
    return(t);
  }
  t = begin_scope_1(t, l_2);
  {
    ATerm m_2 (ATerm t)
    {
      ATerm y_18;
      y_18 = t;
      {
        ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
        ATerm z_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_j_19;
            t = table_get_0(t);
            LocalPopChoice(a_19);
          }
        else
          {
            t = z_18;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          l_29 = t;
          i_29 :
          if(((ATgetType(l_29) == AT_LIST) && !(ATisEmpty(l_29))))
            {
              m_29 = ATgetFirst((ATermList) l_29);
              n_29 = (ATerm) ATgetNext((ATermList) l_29);
              {
                if(((k_29 != NULL) && (k_29 != m_29)))
                  _fail(m_29);
                else
                  k_29 = m_29;
                {
                  if(((j_29 != NULL) && (j_29 != n_29)))
                    _fail(n_29);
                  else
                    j_29 = n_29;
                  {
                    t = not_null(k_29);
                    {
                      ATerm n_2 (ATerm t)
                      {
                        ATerm k_19 = t;
                        int q_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(q_19);
                          }
                        else
                          {
                            t = k_19;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, n_2);
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
      t = y_18;
      {
        ATerm o_2 (ATerm t)
        {
          t = term_d_17;
          return(t);
        }
        t = end_scope_1(t, o_2);
      }
      return(t);
    }
    t = restore_always_2(t, x_72, m_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm y_72 (ATerm))
{
  ATerm p_2 (ATerm t)
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_29 = NULL;
        ATerm r_29 = NULL;
        t = term_z_10;
        {
          t = get_config_0(t);
          {
            r_29 = t;
            if(((q_29 != NULL) && (q_29 != r_29)))
              _fail(r_29);
            else
              q_29 = r_29;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_29));
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        t = term_i_17;
      }
    {
      t = y_72(t);
      {
        ATerm q_2 (ATerm t)
        {
          ATerm t_19 = t;
          int u_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_u_10;
              t = get_config_0(t);
              LocalPopChoice(u_19);
            }
          else
            {
              t = t_19;
              t = term_y_19;
            }
          return(t);
        }
        t = copy_to_1(t, q_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, p_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    ATerm u_29 = NULL;
    u_29 = t;
    t_29 :
    if(!(match_string(u_29, "-v")))
      {
        if(!(match_string(u_29, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_b_20;
    t = set_config_0(t);
    t = term_c_20;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_d_20;
    return(t);
  }
  t = Option_3(t, r_2, u_2, v_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm x_29 = NULL;
    x_29 = t;
    v_29 :
    if(!(match_string(x_29, "-k")))
      {
        if(!(match_string(x_29, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    ATerm e_20;
    e_20 = t;
    {
      ATerm y_29 = NULL;
      ATerm z_29 = NULL;
      t = string_to_int_0(t);
      {
        z_29 = t;
        if(((y_29 != NULL) && (y_29 != z_29)))
          _fail(z_29);
        else
          y_29 = z_29;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_20, not_null(y_29));
        t = set_config_0(t);
      }
    }
    t = e_20;
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_g_20;
    return(t);
  }
  t = ArgOption_3(t, w_2, x_2, y_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm c_30 = NULL;
  c_30 = t;
  t = SSL_string_to_int(not_null(c_30));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm h_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_2 (ATerm t)
      {
        ATerm k_30 = NULL;
        k_30 = t;
        f_30 :
        if(!(match_string(k_30, "-S")))
          {
            if(!(match_string(k_30, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm a_3 (ATerm t)
      {
        t = term_l_20;
        t = set_config_0(t);
        t = term_m_20;
        return(t);
      }
      ATerm b_3 (ATerm t)
      {
        t = term_n_20;
        return(t);
      }
      t = Option_3(t, z_2, a_3, b_3);
      LocalPopChoice(j_20);
    }
  else
    {
      t = h_20;
      {
        ATerm o_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_3 (ATerm t)
            {
              ATerm l_30 = NULL;
              l_30 = t;
              g_30 :
              if(!(match_string(l_30, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm f_3 (ATerm t)
            {
              ATerm o_30 = NULL;
              ATerm q_20;
              q_20 = t;
              {
                ATerm m_30 = NULL;
                ATerm n_30 = NULL;
                t = string_to_int_0(t);
                {
                  n_30 = t;
                  if(((m_30 != NULL) && (m_30 != n_30)))
                    _fail(n_30);
                  else
                    m_30 = n_30;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_7, not_null(m_30));
                  t = set_config_0(t);
                }
              }
              t = q_20;
              {
                ATerm p_30 = NULL;
                p_30 = t;
                if(((o_30 != NULL) && (o_30 != p_30)))
                  _fail(p_30);
                else
                  o_30 = p_30;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(o_30));
              }
              return(t);
            }
            ATerm g_3 (ATerm t)
            {
              t = term_u_20;
              return(t);
            }
            t = ArgOption_3(t, c_3, f_3, g_3);
            LocalPopChoice(p_20);
          }
        else
          {
            t = o_20;
            {
              ATerm h_3 (ATerm t)
              {
                ATerm q_30 = NULL;
                q_30 = t;
                j_30 :
                if(!(match_string(q_30, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm l_3 (ATerm t)
              {
                t = term_w_20;
                t = set_config_0(t);
                t = term_x_20;
                return(t);
              }
              ATerm t_3 (ATerm t)
              {
                t = term_z_20;
                return(t);
              }
              t = Option_3(t, h_3, l_3, t_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      {
        ATerm c_21 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(d_21);
          }
        else
          {
            t = c_21;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm y_30 = NULL;
    y_30 = t;
    v_30 :
    if(!(match_string(y_30, "-o")))
      {
        if(!(match_string(y_30, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    ATerm b_31 = NULL;
    ATerm e_21;
    e_21 = t;
    {
      ATerm z_30 = NULL;
      ATerm a_31 = NULL;
      a_31 = t;
      if(((z_30 != NULL) && (z_30 != a_31)))
        _fail(a_31);
      else
        z_30 = a_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_10, not_null(z_30));
        t = set_config_0(t);
      }
    }
    t = e_21;
    {
      ATerm h_31 = NULL;
      h_31 = t;
      if(((b_31 != NULL) && (b_31 != h_31)))
        _fail(h_31);
      else
        b_31 = h_31;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_31));
    }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_f_21;
    return(t);
  }
  t = ArgOption_3(t, u_3, v_3, w_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(h_21);
    }
  else
    {
      t = g_21;
      {
        ATerm c_4 (ATerm t)
        {
          ATerm n_31 = NULL;
          n_31 = t;
          k_31 :
          if(!(match_string(n_31, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm d_4 (ATerm t)
        {
          t = term_j_21;
          t = set_config_0(t);
          t = term_k_21;
          return(t);
        }
        ATerm i_4 (ATerm t)
        {
          t = term_l_21;
          return(t);
        }
        t = Option_3(t, c_4, d_4, i_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,i_32 = NULL;
  v_31 = t;
  t_31 :
  if(match_string(v_31, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(v_31) == AT_LIST) && !(ATisEmpty(v_31))))
        {
          w_31 = ATgetFirst((ATermList) v_31);
          x_31 = (ATerm) ATgetNext((ATermList) v_31);
          u_31 :
          if(((ATgetType(x_31) == AT_LIST) && !(ATisEmpty(x_31))))
            {
              y_31 = ATgetFirst((ATermList) x_31);
              i_32 = (ATerm) ATgetNext((ATermList) x_31);
              {
                ATerm q_32 = NULL;
                ATerm m_21;
                m_21 = t;
                {
                  t = not_null(w_31);
                  t = j_0(t);
                }
                t = m_21;
                {
                  ATerm r_32 = NULL;
                  t = not_null(y_31);
                  {
                    t = k_0(t);
                    {
                      r_32 = t;
                      if(((q_32 != NULL) && (q_32 != r_32)))
                        _fail(r_32);
                      else
                        q_32 = r_32;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_32)), not_null(q_32));
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
  ATerm j_4 (ATerm t)
  {
    ATerm p_33 = NULL;
    p_33 = t;
    i_33 :
    if(!(match_string(p_33, "-i")))
      {
        if(!(match_string(p_33, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    ATerm u_33 = NULL;
    ATerm n_21;
    n_21 = t;
    {
      ATerm q_33 = NULL;
      ATerm r_33 = NULL;
      r_33 = t;
      if(((q_33 != NULL) && (q_33 != r_33)))
        _fail(r_33);
      else
        q_33 = r_33;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_10, not_null(q_33));
        t = set_config_0(t);
      }
    }
    t = n_21;
    {
      ATerm v_33 = NULL;
      v_33 = t;
      if(((u_33 != NULL) && (u_33 != v_33)))
        _fail(v_33);
      else
        u_33 = v_33;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_33));
    }
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    t = term_t_21;
    return(t);
  }
  t = ArgOption_3(t, j_4, k_4, n_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm u_21 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(b_22);
    }
  else
    {
      t = u_21;
      {
        ATerm c_22 = t;
        int d_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(d_22);
          }
        else
          {
            t = c_22;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm term_to_adot_options_0 (ATerm t)
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_4 (ATerm t)
      {
        ATerm d_34 = NULL;
        d_34 = t;
        b_34 :
        if(!(match_string(d_34, "--graph")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm r_4 (ATerm t)
      {
        t = term_h_22;
        t = set_config_0(t);
        t = term_i_22;
        return(t);
      }
      ATerm s_4 (ATerm t)
      {
        t = term_j_22;
        return(t);
      }
      t = Option_3(t, o_4, r_4, s_4);
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      {
        ATerm t_4 (ATerm t)
        {
          ATerm e_34 = NULL;
          e_34 = t;
          c_34 :
          if(!(match_string(e_34, "--tree")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm u_4 (ATerm t)
        {
          t = term_k_22;
          t = set_config_0(t);
          t = term_m_22;
          return(t);
        }
        ATerm a_5 (ATerm t)
        {
          t = term_n_22;
          return(t);
        }
        t = Option_3(t, t_4, u_4, a_5);
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm h_34 = NULL;
  ATerm t_22;
  t_22 = t;
  {
    ATerm b_5 (ATerm t)
    {
      ATerm i_34 = NULL,j_34 = NULL;
      i_34 = t;
      g_34 :
      if(match_cons(i_34, sym_Program_1))
        {
          j_34 = ATgetArgument(i_34, 0);
          if(((h_34 != NULL) && (h_34 != j_34)))
            _fail(j_34);
          else
            h_34 = j_34;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, b_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_22), not_null(h_34)), term_u_22));
      {
        t = printnl_0(t);
        {
          t = term_w_22;
          t = exit_0(t);
        }
      }
    }
  }
  t = t_22;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, term_x_22));
  {
    t = printnl_0(t);
    {
      t = term_w_22;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm m_34 = NULL;
  m_34 = t;
  t = SSL_TicksToSeconds(not_null(m_34));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
  r_34 = t;
  q_34 :
  if(match_cons(r_34, sym__2))
    {
      s_34 = ATgetArgument(r_34, 0);
      t_34 = ATgetArgument(r_34, 1);
      {
        ATerm b_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(s_34), not_null(t_34));
            LocalPopChoice(c_23);
          }
        else
          {
            t = b_23;
            t = SSL_addr(not_null(s_34), not_null(t_34));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm c_70 (ATerm), ATerm d_70 (ATerm))
{
  ATerm d_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_70(t);
      LocalPopChoice(e_23);
    }
  else
    {
      t = d_23;
      {
        ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
        a_35 = t;
        z_34 :
        if(((ATgetType(a_35) == AT_LIST) && !(ATisEmpty(a_35))))
          {
            b_35 = ATgetFirst((ATermList) a_35);
            c_35 = (ATerm) ATgetNext((ATermList) a_35);
            {
              ATerm f_35 = NULL;
              ATerm g_35 = NULL;
              t = not_null(c_35);
              {
                t = foldr_2(t, c_70, d_70);
                {
                  g_35 = t;
                  if(((f_35 != NULL) && (f_35 != g_35)))
                    _fail(g_35);
                  else
                    f_35 = g_35;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_35), not_null(f_35));
                t = d_70(t);
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
ATerm crush_2 (ATerm t, ATerm a_69 (ATerm), ATerm b_69 (ATerm))
{
  ATerm n_35 = NULL;
  ATerm p_35 = NULL;
  n_35 = t;
  {
    ATerm q_35 = NULL;
    ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL;
    t = not_null(n_35);
    {
      q_35 = t;
      {
        t = SSL_explode_term(not_null(q_35));
        {
          s_35 = t;
          m_35 :
          if(match_cons(s_35, sym__2))
            {
              t_35 = ATgetArgument(s_35, 0);
              u_35 = ATgetArgument(s_35, 1);
              if(((p_35 != NULL) && (p_35 != u_35)))
                _fail(u_35);
              else
                p_35 = u_35;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(p_35);
      t = foldr_2(t, a_69, b_69);
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
    ATerm c_5 (ATerm t)
    {
      t = term_k_20;
      return(t);
    }
    t = crush_2(t, c_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
  a_36 = t;
  z_35 :
  if(match_cons(a_36, sym__2))
    {
      b_36 = ATgetArgument(a_36, 0);
      c_36 = ATgetArgument(a_36, 1);
      {
        ATerm f_23;
        f_23 = t;
        {
          ATerm h_23 = t;
          int k_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(b_36), not_null(c_36));
              LocalPopChoice(k_23);
            }
          else
            {
              t = h_23;
              t = SSL_gtr(not_null(b_36), not_null(c_36));
            }
        }
        t = f_23;
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
  ATerm i_36 = NULL;
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL;
      j_36 = t;
      h_36 :
      if(match_cons(j_36, sym__2))
        {
          k_36 = ATgetArgument(j_36, 0);
          l_36 = ATgetArgument(j_36, 1);
          {
            if(((i_36 != NULL) && (i_36 != k_36)))
              _fail(k_36);
            else
              i_36 = k_36;
            if(((i_36 != NULL) && (i_36 != l_36)))
              _fail(l_36);
            else
              i_36 = l_36;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(m_23);
    }
  else
    {
      t = l_23;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm k_58 (ATerm))
{
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_23;
      p_23 = t;
      {
        ATerm o_36 = NULL;
        ATerm p_36 = NULL;
        t = term_z_7;
        {
          t = get_config_0(t);
          {
            p_36 = t;
            if(((o_36 != NULL) && (o_36 != p_36)))
              _fail(p_36);
            else
              o_36 = p_36;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_36), term_w_22);
          t = geq_0(t);
        }
      }
      t = p_23;
      t = k_58(t);
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm t_36 = NULL,v_36 = NULL;
    ATerm q_23;
    q_23 = t;
    {
      ATerm u_36 = NULL;
      t = run_time_0(t);
      {
        u_36 = t;
        if(((t_36 != NULL) && (t_36 != u_36)))
          _fail(u_36);
        else
          t_36 = u_36;
      }
    }
    t = q_23;
    {
      ATerm w_36 = NULL;
      t = term_t_23;
      {
        t = get_config_0(t);
        {
          w_36 = t;
          if(((v_36 != NULL) && (v_36 != w_36)))
            _fail(w_36);
          else
            v_36 = w_36;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_23), not_null(t_36)), term_u_23), not_null(v_36)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, h_5);
  {
    t = term_k_20;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_37 = NULL;
  d_37 = t;
  c_37 :
  if(match_cons(d_37, sym_Version_0))
    {
      ATerm f_37 = NULL,h_37 = NULL;
      ATerm x_23;
      x_23 = t;
      {
        ATerm g_37 = NULL;
        t = SSLgetAnnotations(not_null(d_37));
        {
          g_37 = t;
          if(((f_37 != NULL) && (f_37 != g_37)))
            _fail(g_37);
          else
            f_37 = g_37;
        }
      }
      t = x_23;
      {
        ATerm i_37 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(f_37));
        {
          i_37 = t;
          if(((h_37 != NULL) && (h_37 != i_37)))
            _fail(i_37);
          else
            h_37 = i_37;
        }
        t = not_null(h_37);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm i_77 (ATerm))
{
  ATerm i_5 (ATerm t)
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        {
          ATerm a_24 = t;
          int c_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(c_24);
            }
          else
            {
              t = a_24;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, i_5);
  t = i_77(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_37 = NULL;
  n_37 = t;
  t = SSL_table_create(not_null(n_37));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_37 = NULL;
  r_37 = t;
  {
    ATerm f_24;
    f_24 = t;
    {
      t = term_g_24;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_24, term_h_24, not_null(r_37));
          t = table_put_0(t);
        }
      }
    }
    t = f_24;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm v_37 = NULL;
  v_37 = t;
  t = SSL_table_destroy(not_null(v_37));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm b_38 = NULL;
  b_38 = t;
  t = SSL_exit(not_null(b_38));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL;
  i_38 = t;
  h_38 :
  if(((ATgetType(i_38) == AT_LIST) && ATisEmpty(i_38)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(i_38) == AT_LIST) && !(ATisEmpty(i_38))))
        {
          j_38 = ATgetFirst((ATermList) i_38);
          k_38 = (ATerm) ATgetNext((ATermList) i_38);
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
  ATerm j_24;
  j_24 = t;
  {
    ATerm n_38 = NULL;
    ATerm t_38 = NULL;
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
        {
          ATerm r_38 = NULL;
          ATerm s_38 = NULL;
          s_38 = t;
          if(((r_38 != NULL) && (r_38 != s_38)))
            _fail(s_38);
          else
            r_38 = s_38;
          t = (ATerm) ATinsert(ATempty, not_null(r_38));
        }
      }
    {
      t_38 = t;
      if(((n_38 != NULL) && (n_38 != t_38)))
        _fail(t_38);
      else
        n_38 = t_38;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_19, not_null(n_38));
      t = printnl_0(t);
    }
  }
  t = j_24;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm q_79 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL;
  e_39 = t;
  b_39 :
  if(((ATgetType(e_39) == AT_LIST) && !(ATisEmpty(e_39))))
    {
      c_39 = ATgetFirst((ATermList) e_39);
      d_39 = (ATerm) ATgetNext((ATermList) e_39);
      {
        ATerm h_39 = NULL;
        t = not_null(d_39);
        {
          ATerm m_24;
          m_24 = t;
          {
            ATerm i_39 = NULL,m_39 = NULL,r_39 = NULL;
            ATerm n_24;
            n_24 = t;
            {
              ATerm l_39 = NULL;
              t = i_0(t);
              {
                l_39 = t;
                if(((i_39 != NULL) && (i_39 != l_39)))
                  _fail(l_39);
                else
                  i_39 = l_39;
              }
            }
            t = n_24;
            {
              ATerm n_39 = NULL;
              t = not_null(c_39);
              {
                t = h_0(t);
                {
                  n_39 = t;
                  if(((m_39 != NULL) && (m_39 != n_39)))
                    _fail(n_39);
                  else
                    m_39 = n_39;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(i_39)), not_null(m_39));
                {
                  r_39 = t;
                  if(((h_39 != NULL) && (h_39 != r_39)))
                    _fail(r_39);
                  else
                    h_39 = r_39;
                }
              }
            }
          }
          t = m_24;
          {
            ATerm j_5 (ATerm t)
            {
              t = not_null(h_39);
              return(t);
            }
            t = reverse_acc_2(t, h_0, j_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(e_39) == AT_LIST) && ATisEmpty(e_39)))
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
  ATerm k_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, k_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm p_79 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm o_55 (ATerm))
{
  ATerm c_40 = NULL,d_40 = NULL;
  c_40 = t;
  b_40 :
  if(match_cons(c_40, sym_Program_1))
    {
      d_40 = ATgetArgument(c_40, 0);
      {
        ATerm g_40 = NULL,i_40 = NULL;
        ATerm h_40 = NULL;
        t = SSLgetAnnotations(not_null(c_40));
        {
          h_40 = t;
          if(((g_40 != NULL) && (g_40 != h_40)))
            _fail(h_40);
          else
            g_40 = h_40;
        }
        {
          t = not_null(d_40);
          {
            ATerm k_40 = NULL;
            t = o_55(t);
            {
              i_40 = t;
              {
                ATerm l_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_40)), not_null(g_40));
                {
                  l_40 = t;
                  if(((k_40 != NULL) && (k_40 != l_40)))
                    _fail(l_40);
                  else
                    k_40 = l_40;
                }
                t = not_null(k_40);
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
  ATerm w_40 = NULL;
  ATerm o_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_40 = NULL;
      t = term_t_23;
      {
        t = get_config_0(t);
        {
          y_40 = t;
          if(((w_40 != NULL) && (w_40 != y_40)))
            _fail(y_40);
          else
            w_40 = y_40;
        }
      }
      LocalPopChoice(u_24);
    }
  else
    {
      t = o_24;
      {
        ATerm l_5 (ATerm t)
        {
          ATerm r_5 (ATerm t)
          {
            ATerm z_40 = NULL;
            z_40 = t;
            if(((w_40 != NULL) && (w_40 != z_40)))
              _fail(z_40);
            else
              w_40 = z_40;
            return(t);
          }
          t = Program_1(t, r_5);
          return(t);
        }
        t = fetch_1(t, l_5);
      }
    }
  {
    t = term_x_24;
    {
      t = echo_0(t);
      {
        t = term_a_25;
        {
          t = table_get_0(t);
          {
            ATerm s_5 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, s_5);
            {
              ATerm w_5 (ATerm t)
              {
                ATerm a_41 = NULL;
                ATerm b_41 = NULL;
                b_41 = t;
                if(((a_41 != NULL) && (a_41 != b_41)))
                  _fail(b_41);
                else
                  a_41 = b_41;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_41)), term_b_25);
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
  ATerm g_25;
  g_25 = t;
  {
    ATerm g_41 = NULL;
    ATerm h_41 = NULL;
    h_41 = t;
    if(((g_41 != NULL) && (g_41 != h_41)))
      _fail(h_41);
    else
      g_41 = h_41;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, not_null(g_41)));
      t = printnl_0(t);
    }
  }
  t = g_25;
  return(t);
}
ATerm say_1 (ATerm t, ATerm k_74 (ATerm))
{
  ATerm h_25;
  h_25 = t;
  {
    t = k_74(t);
    t = debug_0(t);
  }
  t = h_25;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm p_55 (ATerm))
{
  ATerm o_41 = NULL,p_41 = NULL;
  o_41 = t;
  n_41 :
  if(match_cons(o_41, sym_Undefined_1))
    {
      p_41 = ATgetArgument(o_41, 0);
      {
        ATerm s_41 = NULL,u_41 = NULL;
        ATerm t_41 = NULL;
        t = SSLgetAnnotations(not_null(o_41));
        {
          t_41 = t;
          if(((s_41 != NULL) && (s_41 != t_41)))
            _fail(t_41);
          else
            s_41 = t_41;
        }
        {
          t = not_null(p_41);
          {
            ATerm w_41 = NULL;
            t = p_55(t);
            {
              u_41 = t;
              {
                ATerm x_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_41)), not_null(s_41));
                {
                  x_41 = t;
                  if(((w_41 != NULL) && (w_41 != x_41)))
                    _fail(x_41);
                  else
                    w_41 = x_41;
                }
                t = not_null(w_41);
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
ATerm fetch_1 (ATerm t, ATerm x_63 (ATerm))
{
  ATerm c_42 (ATerm t)
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, x_63, _id);
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        t = Cons_2(t, _id, c_42);
      }
    return(t);
  }
  t = c_42(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_78 (ATerm))
{
  t = fetch_1(t, p_78);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm h_42 = NULL;
  h_42 = t;
  g_42 :
  if(match_cons(h_42, sym_Help_0))
    {
      ATerm j_42 = NULL,l_42 = NULL;
      ATerm k_25;
      k_25 = t;
      {
        ATerm k_42 = NULL;
        t = SSLgetAnnotations(not_null(h_42));
        {
          k_42 = t;
          if(((j_42 != NULL) && (j_42 != k_42)))
            _fail(k_42);
          else
            j_42 = k_42;
        }
      }
      t = k_25;
      {
        ATerm m_42 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(j_42));
        {
          m_42 = t;
          if(((l_42 != NULL) && (l_42 != m_42)))
            _fail(m_42);
          else
            l_42 = m_42;
        }
        t = not_null(l_42);
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
  ATerm r_42 = NULL;
  r_42 = t;
  t = SSL_implode_string(not_null(r_42));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm l_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(o_25);
    }
  else
    {
      t = l_25;
      {
        ATerm x_42 = NULL,z_42 = NULL,a_43 = NULL;
        x_42 = t;
        w_42 :
        if(((ATgetType(x_42) == AT_LIST) && !(ATisEmpty(x_42))))
          {
            z_42 = ATgetFirst((ATermList) x_42);
            a_43 = (ATerm) ATgetNext((ATermList) x_42);
            {
              t = not_null(z_42);
              {
                ATerm x_5 (ATerm t)
                {
                  t = not_null(a_43);
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
  ATerm z_43 = NULL;
  ATerm b_44 = NULL;
  z_43 = t;
  {
    ATerm c_44 = NULL;
    ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL;
    t = not_null(z_43);
    {
      c_44 = t;
      {
        t = SSL_explode_term(not_null(c_44));
        {
          e_44 = t;
          n_43 :
          if(match_cons(e_44, sym__2))
            {
              f_44 = ATgetArgument(e_44, 0);
              g_44 = ATgetArgument(e_44, 1);
              y_43 :
              if(match_string(f_44, ""))
                {
                  if(((b_44 != NULL) && (b_44 != g_44)))
                    _fail(g_44);
                  else
                    b_44 = g_44;
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
      t = not_null(b_44);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm d_64 (ATerm))
{
  ATerm k_44 (ATerm t)
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_44);
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        {
          t = Nil_0(t);
          t = d_64(t);
        }
      }
    return(t);
  }
  t = k_44(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL;
  n_44 = t;
  m_44 :
  if(match_cons(n_44, sym__2))
    {
      o_44 = ATgetArgument(n_44, 0);
      p_44 = ATgetArgument(n_44, 1);
      {
        t = not_null(o_44);
        {
          ATerm y_5 (ATerm t)
          {
            t = not_null(p_44);
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
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm u_44 = NULL;
  u_44 = t;
  t = SSL_explode_string(not_null(u_44));
  return(t);
}
ATerm _2 (ATerm t, ATerm f_49 (ATerm), ATerm g_49 (ATerm))
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
  d_45 = t;
  c_45 :
  if(match_cons(d_45, sym__2))
    {
      e_45 = ATgetArgument(d_45, 0);
      f_45 = ATgetArgument(d_45, 1);
      {
        ATerm j_45 = NULL,l_45 = NULL;
        ATerm k_45 = NULL;
        t = SSLgetAnnotations(not_null(d_45));
        {
          k_45 = t;
          if(((j_45 != NULL) && (j_45 != k_45)))
            _fail(k_45);
          else
            j_45 = k_45;
        }
        {
          t = not_null(e_45);
          {
            ATerm n_45 = NULL;
            t = f_49(t);
            {
              l_45 = t;
              {
                t = not_null(f_45);
                {
                  ATerm p_45 = NULL;
                  t = g_49(t);
                  {
                    n_45 = t;
                    {
                      ATerm q_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(l_45), not_null(n_45)), not_null(j_45));
                      {
                        q_45 = t;
                        if(((p_45 != NULL) && (p_45 != q_45)))
                          _fail(q_45);
                        else
                          p_45 = q_45;
                      }
                      t = not_null(p_45);
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
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(y_25);
      }
    else
      {
        t = x_25;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL;
  y_45 = t;
  x_45 :
  if(match_cons(y_45, sym__2))
    {
      z_45 = ATgetArgument(y_45, 0);
      a_46 = ATgetArgument(y_45, 1);
      {
        ATerm b_26;
        b_26 = t;
        t = SSL_printnl(not_null(z_45), not_null(a_46));
        t = b_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm j_74 (ATerm))
{
  ATerm g_26;
  g_26 = t;
  {
    ATerm g_46 = NULL,i_46 = NULL;
    ATerm h_26;
    h_26 = t;
    {
      ATerm h_46 = NULL;
      t = j_74(t);
      {
        h_46 = t;
        if(((g_46 != NULL) && (g_46 != h_46)))
          _fail(h_46);
        else
          g_46 = h_46;
      }
    }
    t = h_26;
    {
      ATerm j_46 = NULL;
      j_46 = t;
      if(((i_46 != NULL) && (i_46 != j_46)))
        _fail(j_46);
      else
        i_46 = j_46;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_46)), not_null(g_46)));
        t = printnl_0(t);
      }
    }
  }
  t = g_26;
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_63 (ATerm))
{
  ATerm m_46 (ATerm t)
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_26);
      }
    else
      {
        t = i_26;
        t = Cons_2(t, o_63, m_46);
      }
    return(t);
  }
  t = m_46(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm o_46 = NULL;
  o_46 = t;
  t = SSL_is_string(not_null(o_46));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(l_26);
    }
  else
    {
      t = k_26;
      {
        ATerm m_26 = t;
        int q_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_5 (ATerm t)
            {
              ATerm t_26 = t;
              int w_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(w_26);
                }
              else
                {
                  t = t_26;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, z_5);
            LocalPopChoice(q_26);
          }
        else
          {
            t = m_26;
            {
              ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
              x_46 = t;
              w_46 :
              if(match_cons(x_46, sym_Path_1))
                {
                  y_46 = ATgetArgument(x_46, 0);
                  t = not_null(y_46);
                }
              else
                {
                  if(match_cons(x_46, sym_Var_1))
                    {
                      y_46 = ATgetArgument(x_46, 0);
                      {
                        t = not_null(y_46);
                        {
                          ATerm x_26 = t;
                          int y_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(y_26);
                            }
                          else
                            {
                              t = x_26;
                              {
                                ATerm a_6 (ATerm t)
                                {
                                  t = term_z_26;
                                  return(t);
                                }
                                t = debug_1(t, a_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(x_46, sym_Prefix_2))
                        {
                          y_46 = ATgetArgument(x_46, 0);
                          z_46 = ATgetArgument(x_46, 1);
                          {
                            ATerm e_47 = NULL,g_47 = NULL;
                            ATerm a_27;
                            a_27 = t;
                            {
                              ATerm f_47 = NULL;
                              t = not_null(y_46);
                              {
                                t = eval_config_0(t);
                                {
                                  f_47 = t;
                                  if(((e_47 != NULL) && (e_47 != f_47)))
                                    _fail(f_47);
                                  else
                                    e_47 = f_47;
                                }
                              }
                            }
                            t = a_27;
                            {
                              ATerm h_47 = NULL;
                              t = not_null(z_46);
                              {
                                t = eval_config_0(t);
                                {
                                  h_47 = t;
                                  if(((g_47 != NULL) && (g_47 != h_47)))
                                    _fail(h_47);
                                  else
                                    g_47 = h_47;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_47), not_null(g_47));
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
  ATerm p_47 = NULL;
  p_47 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_27, not_null(p_47));
    {
      t = table_get_0(t);
      {
        ATerm g_27 = t;
        int h_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm i_27;
              i_27 = t;
              {
                ATerm r_47 = NULL;
                ATerm s_47 = NULL;
                s_47 = t;
                if(((r_47 != NULL) && (r_47 != s_47)))
                  _fail(s_47);
                else
                  r_47 = s_47;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_f_27, not_null(p_47), not_null(r_47));
                  t = table_put_0(t);
                }
              }
              t = i_27;
            }
            LocalPopChoice(h_27);
          }
        else
          {
            t = g_27;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm d_62 (ATerm))
{
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_62(t);
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL;
  x_47 = t;
  w_47 :
  if(match_cons(x_47, sym__2))
    {
      y_47 = ATgetArgument(x_47, 0);
      z_47 = ATgetArgument(x_47, 1);
      t = SSL_table_get(not_null(y_47), not_null(z_47));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL;
  g_48 = t;
  f_48 :
  if(match_cons(g_48, sym__3))
    {
      h_48 = ATgetArgument(g_48, 0);
      i_48 = ATgetArgument(g_48, 1);
      j_48 = ATgetArgument(g_48, 2);
      {
        ATerm r_27;
        r_27 = t;
        {
          ATerm n_48 = NULL;
          ATerm o_48 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_48), not_null(i_48));
          {
            ATerm s_27 = t;
            int t_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(t_27);
              }
            else
              {
                t = s_27;
                t = (ATerm) ATempty;
              }
            {
              o_48 = t;
              if(((n_48 != NULL) && (n_48 != o_48)))
                _fail(o_48);
              else
                n_48 = o_48;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_48), not_null(i_48), (ATerm) ATinsert(CheckATermList(not_null(n_48)), not_null(j_48)));
            t = table_put_0(t);
          }
        }
        t = r_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_79 (ATerm))
{
  ATerm e_49 = NULL;
  ATerm h_49 = NULL;
  t = term_t_16;
  {
    t = u_79(t);
    {
      h_49 = t;
      if(((e_49 != NULL) && (e_49 != h_49)))
        _fail(h_49);
      else
        e_49 = h_49;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_y_24, term_z_24, not_null(e_49));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL;
  n_49 = t;
  m_49 :
  if(match_string(n_49, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(n_49) == AT_LIST) && !(ATisEmpty(n_49))))
        {
          o_49 = ATgetFirst((ATermList) n_49);
          p_49 = (ATerm) ATgetNext((ATermList) n_49);
          {
            ATerm s_49 = NULL;
            ATerm u_27;
            u_27 = t;
            {
              t = not_null(o_49);
              t = a_0(t);
            }
            t = u_27;
            {
              ATerm t_49 = NULL;
              t = term_t_16;
              {
                t = d_0(t);
                {
                  t_49 = t;
                  if(((s_49 != NULL) && (s_49 != t_49)))
                    _fail(t_49);
                  else
                    s_49 = t_49;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_49)), not_null(s_49));
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
  ATerm b_6 (ATerm t)
  {
    ATerm y_49 = NULL;
    y_49 = t;
    x_49 :
    if(!(match_string(y_49, "--help")))
      {
        if(!(match_string(y_49, "-h")))
          {
            if(!(match_string(y_49, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    t = term_c_28;
    {
      t = set_config_0(t);
      t = term_d_28;
    }
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    t = term_h_28;
    return(t);
  }
  t = Option_3(t, b_6, d_6, g_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL;
  b_50 = t;
  a_50 :
  if(((ATgetType(b_50) == AT_LIST) && !(ATisEmpty(b_50))))
    {
      c_50 = ATgetFirst((ATermList) b_50);
      d_50 = (ATerm) ATgetNext((ATermList) b_50);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_50)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_50)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm o_50 (ATerm), ATerm p_50 (ATerm))
{
  ATerm n_50 = NULL,q_50 = NULL,r_50 = NULL;
  n_50 = t;
  m_50 :
  if(((ATgetType(n_50) == AT_LIST) && !(ATisEmpty(n_50))))
    {
      q_50 = ATgetFirst((ATermList) n_50);
      r_50 = (ATerm) ATgetNext((ATermList) n_50);
      {
        ATerm v_50 = NULL,x_50 = NULL;
        ATerm w_50 = NULL;
        t = SSLgetAnnotations(not_null(n_50));
        {
          w_50 = t;
          if(((v_50 != NULL) && (v_50 != w_50)))
            _fail(w_50);
          else
            v_50 = w_50;
        }
        {
          t = not_null(q_50);
          {
            ATerm z_50 = NULL;
            t = o_50(t);
            {
              x_50 = t;
              {
                t = not_null(r_50);
                {
                  ATerm c_51 = NULL;
                  t = p_50(t);
                  {
                    z_50 = t;
                    {
                      ATerm d_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(z_50)), not_null(x_50)), not_null(v_50));
                      {
                        d_51 = t;
                        if(((c_51 != NULL) && (c_51 != d_51)))
                          _fail(d_51);
                        else
                          c_51 = d_51;
                      }
                      t = not_null(c_51);
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
  ATerm n_51 = NULL;
  n_51 = t;
  m_51 :
  if(((ATgetType(n_51) == AT_LIST) && ATisEmpty(n_51)))
    {
      {
        ATerm p_51 = NULL,r_51 = NULL;
        ATerm i_28;
        i_28 = t;
        {
          ATerm q_51 = NULL;
          t = SSLgetAnnotations(not_null(n_51));
          {
            q_51 = t;
            if(((p_51 != NULL) && (p_51 != q_51)))
              _fail(q_51);
            else
              p_51 = q_51;
          }
        }
        t = i_28;
        {
          ATerm s_51 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(p_51));
          {
            s_51 = t;
            if(((r_51 != NULL) && (r_51 != s_51)))
              _fail(s_51);
            else
              r_51 = s_51;
          }
          t = not_null(r_51);
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
  ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL;
  y_51 = t;
  x_51 :
  if(match_cons(y_51, sym__2))
    {
      z_51 = ATgetArgument(y_51, 0);
      a_52 = ATgetArgument(y_51, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_27, not_null(z_51), not_null(a_52));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_79 (ATerm))
{
  ATerm j_28;
  j_28 = t;
  {
    ATerm k_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_28;
        t = s_79(t);
        LocalPopChoice(l_28);
      }
    else
      {
        t = k_28;
        {
        }
      }
  }
  t = j_28;
  {
    ATerm h_6 (ATerm t)
    {
      ATerm i_52 = NULL;
      ATerm n_28;
      n_28 = t;
      {
        ATerm g_52 = NULL;
        ATerm h_52 = NULL;
        h_52 = t;
        if(((g_52 != NULL) && (g_52 != h_52)))
          _fail(h_52);
        else
          g_52 = h_52;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_23, not_null(g_52));
          t = set_config_0(t);
        }
      }
      t = n_28;
      {
        ATerm j_52 = NULL;
        j_52 = t;
        if(((i_52 != NULL) && (i_52 != j_52)))
          _fail(j_52);
        else
          i_52 = j_52;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_52));
      }
      return(t);
    }
    ATerm i_6 (ATerm t)
    {
      ATerm o_28 = t;
      int p_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_28 = t;
          int s_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(s_28);
            }
          else
            {
              t = q_28;
              {
                t = s_79(t);
                t = Cons_2(t, _id, i_6);
              }
            }
          LocalPopChoice(p_28);
        }
      else
        {
          t = o_28;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_6, i_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL;
  ATerm t_28;
  t_28 = t;
  {
    ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL;
    s_52 = t;
    o_52 :
    if(match_cons(s_52, sym__3))
      {
        t_52 = ATgetArgument(s_52, 0);
        u_52 = ATgetArgument(s_52, 1);
        v_52 = ATgetArgument(s_52, 2);
        {
          if(((p_52 != NULL) && (p_52 != t_52)))
            _fail(t_52);
          else
            p_52 = t_52;
          {
            if(((q_52 != NULL) && (q_52 != u_52)))
              _fail(u_52);
            else
              q_52 = u_52;
            {
              if(((r_52 != NULL) && (r_52 != v_52)))
                _fail(v_52);
              else
                r_52 = v_52;
              t = SSL_table_put(not_null(p_52), not_null(q_52), not_null(r_52));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = t_28;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_79 (ATerm))
{
  ATerm y_52 = NULL;
  ATerm u_28;
  u_28 = t;
  {
    t = term_v_28;
    t = table_put_0(t);
  }
  t = u_28;
  {
    ATerm k_6 (ATerm t)
    {
      ATerm w_28 = t;
      int b_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_79(t);
          LocalPopChoice(b_29);
        }
      else
        {
          t = w_28;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, k_6);
    {
      ATerm c_29 = t;
      int d_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_29;
          e_29 = t;
          {
            ATerm f_29 = t;
            int g_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_v_27;
                t = get_config_0(t);
                LocalPopChoice(g_29);
              }
            else
              {
                t = f_29;
                t = fetch_1(t, Help_0);
              }
          }
          t = e_29;
          {
            t = system_usage_0(t);
            {
              t = term_k_20;
              t = exit_0(t);
            }
          }
          LocalPopChoice(d_29);
        }
      else
        {
          t = c_29;
          {
            ATerm h_29 = t;
            int o_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_6 (ATerm t)
                {
                  ATerm m_6 (ATerm t)
                  {
                    ATerm z_52 = NULL;
                    z_52 = t;
                    if(((y_52 != NULL) && (y_52 != z_52)))
                      _fail(z_52);
                    else
                      y_52 = z_52;
                    return(t);
                  }
                  t = Undefined_1(t, m_6);
                  return(t);
                }
                t = fetch_1(t, l_6);
                {
                  ATerm p_6 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_52)), term_p_29);
                    return(t);
                  }
                  t = say_1(t, p_6);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_w_22;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(o_29);
              }
            else
              {
                t = h_29;
                {
                }
              }
          }
        }
      {
        ATerm s_29;
        s_29 = t;
        {
          t = term_y_24;
          t = table_destroy_0(t);
        }
        t = s_29;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm r_77 (ATerm))
{
  t = parse_options_1(t, o_77);
  {
    t = store_options_0(t);
    {
      t = q_77(t);
      {
        ATerm w_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, p_77);
            LocalPopChoice(a_30);
          }
        else
          {
            t = w_29;
            {
              ATerm b_30 = t;
              int d_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_77(t);
                  t = report_success_0(t);
                  LocalPopChoice(d_30);
                }
              else
                {
                  t = b_30;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm s_77 (ATerm), ATerm t_77 (ATerm))
{
  t = option_wrap_4(t, s_77, default_usage_0, _id, t_77);
  return(t);
}
ATerm term_to_dot_0 (ATerm t)
{
  ATerm q_6 (ATerm t)
  {
    ATerm e_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_to_adot_options_0(t);
        LocalPopChoice(h_30);
      }
    else
      {
        t = e_30;
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
        ATerm x_6 (ATerm t)
        {
          t = term_i_30;
          return(t);
        }
        ATerm y_6 (ATerm t)
        {
          ATerm c_53 = NULL;
          ATerm d_53 = NULL;
          t = term_r_30;
          {
            t = xtc_find_0(t);
            {
              d_53 = t;
              if(((c_53 != NULL) && (c_53 != d_53)))
                _fail(d_53);
              else
                c_53 = d_53;
            }
          }
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_53)), term_s_30);
          return(t);
        }
        t = xtc_transform_2(t, x_6, y_6);
        {
          ATerm z_6 (ATerm t)
          {
            t = term_t_30;
            return(t);
          }
          t = xtc_transform_1(t, z_6);
        }
      }
      return(t);
    }
    t = xtc_io_1(t, w_6);
    return(t);
  }
  t = option_wrap_2(t, q_6, v_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = term_to_dot_0(t);
  return(t);
}
