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
ATerm term_x_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_r_27;
ATerm term_g_27;
ATerm term_t_26;
ATerm term_e_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_q_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_p_22;
ATerm term_l_22;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_z_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_x_19;
ATerm term_m_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_b_19;
ATerm term_t_18;
ATerm term_n_18;
ATerm term_f_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_q_16;
ATerm term_m_16;
ATerm term_g_16;
ATerm term_c_16;
ATerm term_p_15;
ATerm term_o_14;
ATerm term_k_14;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_w_12;
ATerm term_p_12;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_w_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_v_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_a_9;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_o_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
void init_constant_terms (void)
{
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym__2, term_h_8, term_i_8);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym__2, term_h_8, term_i_9);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_AttrId_2, term_p_12, term_y_12);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym__2, term_y_16, term_g_16);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym__2, term_t_8, term_e_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i         Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym__2, term_k_20, term_q_16);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym__2, term_r_20, term_q_16);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym__2, term_v_20, term_q_16);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym__2, term_c_16, term_q_16);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym__2, term_p_15, term_q_16);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
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
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym__2, term_v_24, term_w_24);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym__3, term_v_24, term_w_24, (ATerm) ATempty);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Dot-pretty.pp", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_1 (ATerm, ATerm n_67 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm k_66 (ATerm));
ATerm if_verbose4_1 (ATerm, ATerm h_81 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm j_81 (ATerm));
ATerm set_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm d_81 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm v_67 (ATerm), ATerm w_67 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm m_67 (ATerm));
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm o_67 (ATerm), ATerm p_67 (ATerm));
ATerm Escape_linefeed_0 (ATerm);
ATerm Escape_backslash_0 (ATerm);
ATerm Escape_double_quote_0 (ATerm);
ATerm Escape_0 (ATerm);
ATerm escape_chars_0 (ATerm);
ATerm escape_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm quote_chars_0 (ATerm);
ATerm double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm b_65 (ATerm));
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
ATerm HdMember_p__2 (ATerm, ATerm n_70 (ATerm), ATerm o_70 (ATerm));
ATerm union_1 (ATerm, ATerm p_70 (ATerm));
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm a_71 (ATerm), ATerm b_71 (ATerm), ATerm c_71 (ATerm));
ATerm foldr_3 (ATerm, ATerm i_69 (ATerm), ATerm j_69 (ATerm), ATerm k_69 (ATerm));
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm i_81 (ATerm));
ATerm term_to_tree_0 (ATerm);
ATerm to_adot_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm assert_1 (ATerm, ATerm f_67 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm xtc_io_transform_1 (ATerm, ATerm x_67 (ATerm));
ATerm rename_file_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm k_67 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm c_67 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm begin_scope_1 (ATerm, ATerm b_67 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm l_67 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm term_to_adot_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm e_47 (ATerm), ATerm f_47 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm j_66 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm g_69 (ATerm), ATerm h_69 (ATerm));
ATerm crush_2 (ATerm, ATerm y_70 (ATerm), ATerm z_70 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm e_81 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm h_60 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm y_57 (ATerm));
ATerm map_1 (ATerm, ATerm w_74 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_75 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm x_57 (ATerm));
ATerm Program_1 (ATerm, ATerm w_49 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm x_49 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_75 (ATerm));
ATerm option_defined_1 (ATerm, ATerm c_59 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_77 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm c_58 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm z_54 (ATerm), ATerm a_55 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm a_58 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm z_57 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm e_59 (ATerm), ATerm f_59 (ATerm), ATerm g_59 (ATerm), ATerm h_59 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm i_59 (ATerm), ATerm j_59 (ATerm));
ATerm term_to_dot_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_transform_1 (ATerm t, ATerm n_67 (ATerm))
{
  ATerm a_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, n_67, a_0);
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm e_0 = NULL;
  e_0 = t;
  t = SSL_table_keys(not_null(e_0));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm q_1 = NULL;
  q_1 = t;
  {
    t = table_keys_0(t);
    {
      ATerm b_0 (ATerm t)
      {
        ATerm c_2 = NULL;
        ATerm h_2 = NULL;
        c_2 = t;
        {
          ATerm i_2 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_1), not_null(c_2));
          {
            t = table_get_0(t);
            {
              i_2 = t;
              if(((h_2 != NULL) && (h_2 != i_2)))
                _fail(i_2);
              else
                h_2 = i_2;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_2), not_null(h_2));
        }
        return(t);
      }
      t = map_1(t, b_0);
    }
  }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm a_8;
  a_8 = t;
  {
    ATerm n_2 = NULL;
    ATerm o_2 = NULL;
    o_2 = t;
    if(((n_2 != NULL) && (n_2 != o_2)))
      _fail(o_2);
    else
      n_2 = o_2;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_8, not_null(n_2));
      t = printnl_0(t);
    }
  }
  t = a_8;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm u_2 = NULL;
  ATerm w_2 = NULL,x_2 = NULL;
  u_2 = t;
  {
    ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(u_2)));
    {
      t = table_get_0(t);
      {
        y_2 = t;
        s_2 :
        if(((ATgetType(y_2) == AT_LIST) && ((ATermList) y_2 != ATempty)))
          {
            z_2 = ATgetFirst((ATermList) y_2);
            c_3 = (ATerm) ATgetNext((ATermList) y_2);
            t_2 :
            if(match_cons(z_2, sym__2))
              {
                a_3 = ATgetArgument(z_2, 0);
                b_3 = ATgetArgument(z_2, 1);
                {
                  if(((w_2 != NULL) && (w_2 != a_3)))
                    _fail(a_3);
                  else
                    w_2 = a_3;
                  if(((x_2 != NULL) && (x_2 != b_3)))
                    _fail(b_3);
                  else
                    x_2 = b_3;
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
    t = not_null(x_2);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL;
  j_3 = t;
  i_3 :
  if(match_cons(j_3, sym__2))
    {
      k_3 = ATgetArgument(j_3, 0);
      l_3 = ATgetArgument(j_3, 1);
      {
        ATerm o_3 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(k_3)));
        {
          t = table_get_0(t);
          {
            ATerm f_0 (ATerm t)
            {
              ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL;
              p_3 = t;
              h_3 :
              if(match_cons(p_3, sym__2))
                {
                  q_3 = ATgetArgument(p_3, 0);
                  r_3 = ATgetArgument(p_3, 1);
                  {
                    if(((l_3 != NULL) && (l_3 != q_3)))
                      _fail(q_3);
                    else
                      l_3 = q_3;
                    if(((o_3 != NULL) && (o_3 != r_3)))
                      _fail(r_3);
                    else
                      o_3 = r_3;
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
        t = not_null(o_3);
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
  ATerm p_0 (ATerm t)
  {
    t = term_o_8;
    {
      t = table_get_0(t);
      {
        ATerm q_0 (ATerm t)
        {
          t = try_1(t, xtc_read_0);
          return(t);
        }
        t = map_1(t, q_0);
      }
    }
    return(t);
  }
  t = try_1(t, p_0);
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm p_8;
  p_8 = t;
  {
    ATerm v_3 = NULL;
    ATerm w_3 = NULL;
    w_3 = t;
    if(((v_3 != NULL) && (v_3 != w_3)))
      _fail(w_3);
    else
      v_3 = w_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATempty, not_null(v_3)));
      t = printnl_0(t);
    }
  }
  t = p_8;
  return(t);
}
ATerm say_1 (ATerm t, ATerm k_66 (ATerm))
{
  ATerm q_8;
  q_8 = t;
  {
    t = k_66(t);
    t = debug_0(t);
  }
  t = q_8;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm h_81 (ATerm))
{
  ATerm r_0 (ATerm t)
  {
    ATerm r_8;
    r_8 = t;
    {
      ATerm z_3 = NULL;
      ATerm a_4 = NULL;
      t = term_t_8;
      {
        t = get_config_0(t);
        {
          a_4 = t;
          if(((z_3 != NULL) && (z_3 != a_4)))
            _fail(a_4);
          else
            z_3 = a_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_3), term_u_8);
        t = geq_0(t);
      }
    }
    t = r_8;
    t = h_81(t);
    return(t);
  }
  t = try_1(t, r_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm j_81 (ATerm))
{
  ATerm s_0 (ATerm t)
  {
    ATerm v_8;
    v_8 = t;
    {
      ATerm d_4 = NULL;
      ATerm e_4 = NULL;
      t = term_t_8;
      {
        t = get_config_0(t);
        {
          e_4 = t;
          if(((d_4 != NULL) && (d_4 != e_4)))
            _fail(e_4);
          else
            d_4 = e_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_4), term_a_9);
        t = geq_0(t);
      }
    }
    t = v_8;
    t = j_81(t);
    return(t);
  }
  t = try_1(t, s_0);
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
  ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL;
  k_4 = t;
  j_4 :
  if(match_cons(k_4, sym__3))
    {
      l_4 = ATgetArgument(k_4, 0);
      m_4 = ATgetArgument(k_4, 1);
      n_4 = ATgetArgument(k_4, 2);
      {
        ATerm b_9;
        b_9 = t;
        {
          ATerm r_4 = NULL;
          ATerm s_4 = NULL,u_4 = NULL;
          ATerm t_4 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_4), not_null(m_4));
          {
            ATerm c_9 = t;
            int d_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(d_9);
              }
            else
              {
                t = c_9;
                t = (ATerm) ATempty;
              }
            {
              t_4 = t;
              if(((s_4 != NULL) && (s_4 != t_4)))
                _fail(t_4);
              else
                s_4 = t_4;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_4), not_null(n_4));
            {
              t = union_0(t);
              {
                u_4 = t;
                if(((r_4 != NULL) && (r_4 != u_4)))
                  _fail(u_4);
                else
                  r_4 = u_4;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_4), not_null(m_4), not_null(r_4));
            t = set_0(t);
          }
        }
        t = b_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm d_81 (ATerm))
{
  ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL;
  c_5 = t;
  b_5 :
  if(match_cons(c_5, sym__2))
    {
      d_5 = ATgetArgument(c_5, 0);
      e_5 = ATgetArgument(c_5, 1);
      {
        t = not_null(e_5);
        {
          ATerm t_0 (ATerm t)
          {
            ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
            h_5 = t;
            a_5 :
            if(match_cons(h_5, sym__2))
              {
                i_5 = ATgetArgument(h_5, 0);
                j_5 = ATgetArgument(h_5, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(d_5), not_null(i_5), not_null(j_5));
                  t = d_81(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, t_0);
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
  ATerm q_5 = NULL;
  ATerm s_5 = NULL;
  q_5 = t;
  {
    ATerm g_9 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATmakeAppl(sym_Imported_1, not_null(q_5)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_9;
      }
    {
      ATerm h_9;
      h_9 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_h_8, term_i_9, (ATerm) ATinsert(ATempty, not_null(q_5)));
        t = table_put_0(t);
      }
      t = h_9;
      {
        ATerm u_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            t = term_j_9;
            return(t);
          }
          t = debug_1(t, v_0);
          return(t);
        }
        t = if_verbose4_1(t, u_0);
        {
          ATerm k_9 = t;
          int m_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(m_9);
            }
          else
            {
              t = k_9;
              t = (ATerm) ATempty;
            }
          {
            ATerm w_0 (ATerm t)
            {
              ATerm x_0 (ATerm t)
              {
                t = term_n_9;
                return(t);
              }
              t = say_1(t, x_0);
              return(t);
            }
            t = if_verbose6_1(t, w_0);
            {
              ATerm t_5 = NULL;
              t_5 = t;
              if(((s_5 != NULL) && (s_5 != t_5)))
                _fail(t_5);
              else
                s_5 = t_5;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_h_8, not_null(s_5));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm y_0 (ATerm t)
                    {
                      ATerm z_0 (ATerm t)
                      {
                        t = term_o_9;
                        return(t);
                      }
                      t = say_1(t, z_0);
                      return(t);
                    }
                    t = if_verbose6_1(t, y_0);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_h_8, (ATerm)ATmakeAppl(sym_Imported_1, not_null(q_5)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm a_1 (ATerm t)
                          {
                            ATerm b_1 (ATerm t)
                            {
                              t = term_n_9;
                              return(t);
                            }
                            t = say_1(t, b_1);
                            return(t);
                          }
                          t = if_verbose4_1(t, a_1);
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
  ATerm x_5 = NULL;
  x_5 = t;
  t = SSL_getenv(not_null(x_5));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm p_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_9;
      t = get_config_0(t);
      LocalPopChoice(q_9);
    }
  else
    {
      t = p_9;
      {
        ATerm w_9 = t;
        int a_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_i_10;
            t = getenv_0(t);
            LocalPopChoice(a_10);
          }
        else
          {
            t = w_9;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm d_1 (ATerm t)
    {
      t = term_k_10;
      return(t);
    }
    t = debug_1(t, d_1);
    return(t);
  }
  t = if_verbose5_1(t, c_1);
  {
    ATerm l_10;
    l_10 = t;
    {
      ATerm q_10 = t;
      int r_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_s_10;
          t = table_get_0(t);
          LocalPopChoice(r_10);
        }
      else
        {
          t = q_10;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = l_10;
    {
      ATerm e_1 (ATerm t)
      {
        ATerm f_1 (ATerm t)
        {
          t = term_t_10;
          return(t);
        }
        t = debug_1(t, f_1);
        return(t);
      }
      t = if_verbose5_1(t, e_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_1 (ATerm t)
      {
        ATerm h_1 (ATerm t)
        {
          t = term_w_10;
          return(t);
        }
        t = debug_1(t, h_1);
        return(t);
      }
      t = if_verbose5_1(t, g_1);
      {
        t = xtc_load_0(t);
        {
          ATerm x_10 = t;
          int y_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(y_10);
            }
          else
            {
              t = x_10;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm i_1 (ATerm t)
            {
              ATerm j_1 (ATerm t)
              {
                t = term_w_10;
                return(t);
              }
              t = debug_1(t, j_1);
              return(t);
            }
            t = if_verbose5_1(t, i_1);
          }
        }
      }
      LocalPopChoice(v_10);
    }
  else
    {
      t = u_10;
      {
        ATerm b_6 = NULL;
        ATerm c_6 = NULL;
        c_6 = t;
        if(((b_6 != NULL) && (b_6 != c_6)))
          _fail(c_6);
        else
          b_6 = c_6;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_11), not_null(b_6)), term_d_11);
          {
            t = error_0(t);
            {
              ATerm k_1 (ATerm t)
              {
                t = term_h_8;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm l_1 (ATerm t)
                    {
                      t = term_f_11;
                      return(t);
                    }
                    t = debug_1(t, l_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, k_1);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm v_67 (ATerm), ATerm w_67 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, v_67, w_67);
    t = read_from_0(t);
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
  g_6 = t;
  f_6 :
  if(match_cons(g_6, sym__2))
    {
      h_6 = ATgetArgument(g_6, 0);
      i_6 = ATgetArgument(g_6, 1);
      t = SSL_call(not_null(h_6), not_null(i_6));
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
ATerm xtc_command_1 (ATerm t, ATerm m_67 (ATerm))
{
  ATerm o_6 = NULL;
  ATerm k_11;
  k_11 = t;
  {
    ATerm p_6 = NULL;
    t = m_67(t);
    {
      t = xtc_find_warning_0(t);
      {
        p_6 = t;
        if(((o_6 != NULL) && (o_6 != p_6)))
          _fail(p_6);
        else
          o_6 = p_6;
      }
    }
  }
  t = k_11;
  {
    ATerm l_11;
    l_11 = t;
    {
      ATerm q_6 = NULL;
      ATerm r_6 = NULL;
      r_6 = t;
      if(((q_6 != NULL) && (q_6 != r_6)))
        _fail(r_6);
      else
        q_6 = r_6;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_6), not_null(q_6));
        t = call_0(t);
      }
    }
    t = l_11;
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm b_7 = NULL,c_7 = NULL;
  b_7 = t;
  a_7 :
  if(match_cons(b_7, sym_stdin_0))
    {
      ATerm d_7 = NULL;
      ATerm e_7 = NULL;
      ATerm f_7 = NULL;
      t = xtc_new_file_0(t);
      {
        e_7 = t;
        {
          if(((d_7 != NULL) && (d_7 != e_7)))
            _fail(e_7);
          else
            d_7 = e_7;
          {
            ATerm g_7 = NULL;
            t = o_0(t);
            {
              g_7 = t;
              if(((f_7 != NULL) && (f_7 != g_7)))
                _fail(g_7);
              else
                f_7 = g_7;
            }
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(f_7)), not_null(d_7)), term_o_11);
              t = xtc_command_1(t, n_0);
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_7));
    }
  else
    {
      if(match_cons(b_7, sym_FILE_1))
        {
          c_7 = ATgetArgument(b_7, 0);
          {
            ATerm i_7 = NULL;
            ATerm j_7 = NULL;
            t = not_null(c_7);
            {
              ATerm k_7 = NULL;
              t = xtc_new_file_0(t);
              {
                j_7 = t;
                {
                  if(((i_7 != NULL) && (i_7 != j_7)))
                    _fail(j_7);
                  else
                    i_7 = j_7;
                  {
                    ATerm l_7 = NULL;
                    t = o_0(t);
                    {
                      l_7 = t;
                      if(((k_7 != NULL) && (k_7 != l_7)))
                        _fail(l_7);
                      else
                        k_7 = l_7;
                    }
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(k_7)), not_null(i_7)), term_o_11), not_null(c_7)), term_q_11);
                      t = xtc_command_1(t, n_0);
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_7));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm xtc_transform_2 (ATerm t, ATerm o_67 (ATerm), ATerm p_67 (ATerm))
{
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_transform_file_2(t, o_67, p_67);
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      t = xtc_transform_term_2(t, o_67, p_67);
    }
  return(t);
}
ATerm Escape_linefeed_0 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
  v_7 = t;
  t_7 :
  if(((ATgetType(v_7) == AT_LIST) && ((ATermList) v_7 != ATempty)))
    {
      w_7 = ATgetFirst((ATermList) v_7);
      x_7 = (ATerm) ATgetNext((ATermList) v_7);
      u_7 :
      if(match_int(w_7, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(x_7)), term_u_11), term_t_11);
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
  ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL;
  d_8 = t;
  b_8 :
  if(((ATgetType(d_8) == AT_LIST) && ((ATermList) d_8 != ATempty)))
    {
      e_8 = ATgetFirst((ATermList) d_8);
      f_8 = (ATerm) ATgetNext((ATermList) d_8);
      c_8 :
      if(match_int(e_8, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(f_8)), term_t_11), term_t_11);
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
  ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL;
  l_8 = t;
  j_8 :
  if(((ATgetType(l_8) == AT_LIST) && ((ATermList) l_8 != ATempty)))
    {
      m_8 = ATgetFirst((ATermList) l_8);
      n_8 = (ATerm) ATgetNext((ATermList) l_8);
      k_8 :
      if(match_int(m_8, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(n_8)), term_w_11), term_t_11);
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
  ATerm z_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      LocalPopChoice(a_12);
    }
  else
    {
      t = z_11;
      {
        ATerm b_12 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            LocalPopChoice(d_12);
          }
        else
          {
            t = b_12;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0(t);
      {
        ATerm m_1 (ATerm t)
        {
          t = Cons_2(t, _id, escape_chars_0);
          return(t);
        }
        t = Cons_2(t, _id, m_1);
      }
      LocalPopChoice(f_12);
    }
  else
    {
      t = e_12;
      {
        ATerm i_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            LocalPopChoice(j_12);
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
  ATerm s_8 = NULL;
  s_8 = t;
  t = SSL_is_int(not_null(s_8));
  return(t);
}
ATerm quote_chars_0 (ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
  x_8 = t;
  w_8 :
  if(match_cons(x_8, sym__2))
    {
      y_8 = ATgetArgument(x_8, 0);
      z_8 = ATgetArgument(x_8, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_8)), not_null(y_8)), (ATerm) ATinsert(ATempty, not_null(y_8)));
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
  ATerm e_9 = NULL;
  ATerm f_9 = NULL;
  f_9 = t;
  if(((e_9 != NULL) && (e_9 != f_9)))
    _fail(f_9);
  else
    e_9 = f_9;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_w_11, not_null(e_9));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm b_65 (ATerm))
{
  t = explode_string_0(t);
  {
    t = b_65(t);
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
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
  s_9 = t;
  r_9 :
  if(match_cons(s_9, sym__2))
    {
      t_9 = ATgetArgument(s_9, 0);
      u_9 = ATgetArgument(s_9, 1);
      {
        ATerm l_12 = t;
        int m_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_9 = NULL,y_9 = NULL,e_10 = NULL,g_10 = NULL;
            ATerm n_12;
            n_12 = t;
            {
              ATerm z_9 = NULL;
              ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL;
              t = not_null(u_9);
              {
                z_9 = t;
                {
                  t = SSL_explode_term(not_null(z_9));
                  {
                    b_10 = t;
                    l_9 :
                    if(match_cons(b_10, sym__2))
                      {
                        c_10 = ATgetArgument(b_10, 0);
                        d_10 = ATgetArgument(b_10, 1);
                        {
                          if(((x_9 != NULL) && (x_9 != c_10)))
                            _fail(c_10);
                          else
                            x_9 = c_10;
                          if(((y_9 != NULL) && (y_9 != d_10)))
                            _fail(d_10);
                          else
                            y_9 = d_10;
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
            t = n_12;
            {
              ATerm o_12;
              o_12 = t;
              {
                ATerm f_10 = NULL;
                t = not_null(x_9);
                {
                  t = escape_0(t);
                  {
                    t = double_quote_0(t);
                    {
                      f_10 = t;
                      if(((e_10 != NULL) && (e_10 != f_10)))
                        _fail(f_10);
                      else
                        e_10 = f_10;
                    }
                  }
                }
              }
              t = o_12;
              {
                ATerm j_10 = NULL;
                t = not_null(y_9);
                {
                  ATerm n_1 (ATerm t)
                  {
                    ATerm h_10 = NULL;
                    h_10 = t;
                    t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_9)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_10)))));
                    return(t);
                  }
                  t = map_1(t, n_1);
                  {
                    j_10 = t;
                    if(((g_10 != NULL) && (g_10 != j_10)))
                      _fail(j_10);
                    else
                      g_10 = j_10;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(g_10)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_9)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_p_12, not_null(e_10)))))));
              }
            }
            LocalPopChoice(m_12);
          }
        else
          {
            t = l_12;
            {
              ATerm m_10 = NULL;
              ATerm n_10 = NULL,p_10 = NULL;
              t = not_null(u_9);
              {
                t = is_int_0(t);
                {
                  ATerm o_10 = NULL;
                  t = not_null(u_9);
                  {
                    t = int_to_string_0(t);
                    {
                      t = escape_0(t);
                      {
                        o_10 = t;
                        if(((n_10 != NULL) && (n_10 != o_10)))
                          _fail(o_10);
                        else
                          n_10 = o_10;
                      }
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_12), not_null(n_10)), term_w_12);
                    {
                      t = concat_strings_0(t);
                      {
                        p_10 = t;
                        if(((m_10 != NULL) && (m_10 != p_10)))
                          _fail(p_10);
                        else
                          m_10 = p_10;
                      }
                    }
                  }
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_9)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_p_12, not_null(m_10)))))));
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
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL;
  a_11 = t;
  z_10 :
  if(((ATermList) a_11 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(a_11) == AT_LIST) && ((ATermList) a_11 != ATempty)))
        {
          b_11 = ATgetFirst((ATermList) a_11);
          c_11 = (ATerm) ATgetNext((ATermList) a_11);
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
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
  h_11 = t;
  g_11 :
  if(match_cons(h_11, sym__2))
    {
      i_11 = ATgetArgument(h_11, 0);
      j_11 = ATgetArgument(h_11, 1);
      {
        ATerm m_11 = NULL;
        ATerm x_12;
        x_12 = t;
        {
          t = not_null(j_11);
          t = is_list_0(t);
        }
        t = x_12;
        {
          ATerm p_11 = NULL;
          t = not_null(j_11);
          {
            ATerm o_1 (ATerm t)
            {
              ATerm n_11 = NULL;
              n_11 = t;
              t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_11)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_11)))));
              return(t);
            }
            t = map_1(t, o_1);
            {
              p_11 = t;
              if(((m_11 != NULL) && (m_11 != p_11)))
                _fail(p_11);
              else
                m_11 = p_11;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(m_11)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_11)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_z_12)))));
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
  ATerm v_11 = NULL;
  ATerm x_11 = NULL;
  v_11 = t;
  {
    ATerm y_11 = NULL;
    t = not_null(v_11);
    {
      ATerm p_1 (ATerm t)
      {
        ATerm a_13 = t;
        int f_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ListEdgeToDot_0(t);
            LocalPopChoice(f_13);
          }
        else
          {
            t = a_13;
            t = EdgeToDot_0(t);
          }
        return(t);
      }
      t = map_1(t, p_1);
      {
        t = concat_0(t);
        {
          y_11 = t;
          if(((x_11 != NULL) && (x_11 != y_11)))
            _fail(y_11);
          else
            x_11 = y_11;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_g_13, not_null(x_11));
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm c_12 = NULL;
  c_12 = t;
  t = SSL_int_to_string(not_null(c_12));
  return(t);
}
ATerm NodeId_0 (ATerm t)
{
  ATerm g_12 = NULL;
  ATerm h_12 = NULL;
  t = int_to_string_0(t);
  {
    h_12 = t;
    if(((g_12 != NULL) && (g_12 != h_12)))
      _fail(h_12);
    else
      g_12 = h_12;
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, term_h_13, not_null(g_12));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm address_0 (ATerm t)
{
  ATerm k_12 = NULL;
  k_12 = t;
  t = SSL_address(not_null(k_12));
  return(t);
}
ATerm term_to_graph_0 (ATerm t)
{
  ATerm q_12 = NULL,s_12 = NULL,u_12 = NULL;
  ATerm i_13;
  i_13 = t;
  {
    ATerm r_12 = NULL;
    t = address_0(t);
    {
      t = NodeId_0(t);
      {
        r_12 = t;
        if(((q_12 != NULL) && (q_12 != r_12)))
          _fail(r_12);
        else
          q_12 = r_12;
      }
    }
  }
  t = i_13;
  {
    ATerm n_13;
    n_13 = t;
    {
      ATerm t_12 = NULL;
      ATerm o_13 = t;
      int q_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_1 (ATerm t)
          {
            t = address_0(t);
            t = NodeId_0(t);
            return(t);
          }
          t = map_1(t, r_1);
          LocalPopChoice(q_13);
        }
      else
        {
          t = o_13;
          {
            ATerm s_1 (ATerm t)
            {
              t = address_0(t);
              t = NodeId_0(t);
              return(t);
            }
            t = _all(t, s_1);
          }
        }
      {
        t_12 = t;
        if(((s_12 != NULL) && (s_12 != t_12)))
          _fail(t_12);
        else
          s_12 = t_12;
      }
    }
    t = n_13;
    {
      ATerm v_12 = NULL;
      ATerm r_13 = t;
      int s_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = foldr_3(t, t_1, union_0, term_to_graph_0);
          LocalPopChoice(s_13);
        }
      else
        {
          t = r_13;
          {
            ATerm u_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, u_1, union_0, term_to_graph_0);
          }
        }
      {
        v_12 = t;
        if(((u_12 != NULL) && (u_12 != v_12)))
          _fail(v_12);
        else
          u_12 = v_12;
      }
      t = (ATerm) ATinsert(CheckATermList(not_null(u_12)), (ATerm) ATmakeAppl(sym__2, not_null(q_12), not_null(s_12)));
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
  c_13 = t;
  b_13 :
  if(match_cons(c_13, sym__2))
    {
      d_13 = ATgetArgument(c_13, 0);
      e_13 = ATgetArgument(c_13, 1);
      if(((d_13 != NULL) && (d_13 != e_13)))
        _fail(e_13);
      else
        d_13 = e_13;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm n_70 (ATerm), ATerm o_70 (ATerm))
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
  k_13 = t;
  j_13 :
  if(((ATgetType(k_13) == AT_LIST) && ((ATermList) k_13 != ATempty)))
    {
      l_13 = ATgetFirst((ATermList) k_13);
      m_13 = (ATerm) ATgetNext((ATermList) k_13);
      {
        t = o_70(t);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm p_13 = NULL;
            p_13 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_13), not_null(p_13));
              t = n_70(t);
            }
            return(t);
          }
          t = fetch_1(t, v_1);
        }
        t = not_null(m_13);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm p_70 (ATerm))
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
  v_13 = t;
  u_13 :
  if(match_cons(v_13, sym__2))
    {
      w_13 = ATgetArgument(v_13, 0);
      x_13 = ATgetArgument(v_13, 1);
      {
        t = not_null(w_13);
        {
          ATerm b_14 (ATerm t)
          {
            ATerm t_13 = t;
            int y_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(x_13);
                LocalPopChoice(y_13);
              }
            else
              {
                t = t_13;
                {
                  ATerm z_13 = t;
                  int a_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_1 (ATerm t)
                      {
                        t = not_null(x_13);
                        return(t);
                      }
                      t = HdMember_p__2(t, p_70, w_1);
                      t = b_14(t);
                      LocalPopChoice(a_14);
                    }
                  else
                    {
                      t = z_13;
                      t = Cons_2(t, _id, b_14);
                    }
                }
              }
            return(t);
          }
          t = b_14(t);
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
ATerm crush_3 (ATerm t, ATerm a_71 (ATerm), ATerm b_71 (ATerm), ATerm c_71 (ATerm))
{
  ATerm g_14 = NULL;
  ATerm i_14 = NULL;
  g_14 = t;
  {
    ATerm j_14 = NULL;
    ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
    t = not_null(g_14);
    {
      j_14 = t;
      {
        t = SSL_explode_term(not_null(j_14));
        {
          l_14 = t;
          f_14 :
          if(match_cons(l_14, sym__2))
            {
              m_14 = ATgetArgument(l_14, 0);
              n_14 = ATgetArgument(l_14, 1);
              if(((i_14 != NULL) && (i_14 != n_14)))
                _fail(n_14);
              else
                i_14 = n_14;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(i_14);
      t = foldr_3(t, a_71, b_71, c_71);
    }
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm i_69 (ATerm), ATerm j_69 (ATerm), ATerm k_69 (ATerm))
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_69(t);
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      {
        ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
        v_14 = t;
        u_14 :
        if(((ATgetType(v_14) == AT_LIST) && ((ATermList) v_14 != ATempty)))
          {
            w_14 = ATgetFirst((ATermList) v_14);
            x_14 = (ATerm) ATgetNext((ATermList) v_14);
            {
              ATerm a_15 = NULL,c_15 = NULL;
              ATerm e_14;
              e_14 = t;
              {
                ATerm b_15 = NULL;
                t = not_null(w_14);
                {
                  t = k_69(t);
                  {
                    b_15 = t;
                    if(((a_15 != NULL) && (a_15 != b_15)))
                      _fail(b_15);
                    else
                      a_15 = b_15;
                  }
                }
              }
              t = e_14;
              {
                ATerm d_15 = NULL;
                t = not_null(x_14);
                {
                  t = foldr_3(t, i_69, j_69, k_69);
                  {
                    d_15 = t;
                    if(((c_15 != NULL) && (c_15 != d_15)))
                      _fail(d_15);
                    else
                      c_15 = d_15;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_15), not_null(c_15));
                  t = j_69(t);
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
  ATerm o_15 = NULL;
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
  o_15 = t;
  {
    ATerm t_15 = NULL;
    ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
    t = not_null(o_15);
    {
      t_15 = t;
      {
        t = SSL_explode_term(not_null(t_15));
        {
          v_15 = t;
          k_15 :
          if(match_cons(v_15, sym__2))
            {
              w_15 = ATgetArgument(v_15, 0);
              x_15 = ATgetArgument(v_15, 1);
              l_15 :
              if(match_string(w_15, ""))
                {
                  m_15 :
                  if(((ATgetType(x_15) == AT_LIST) && ((ATermList) x_15 != ATempty)))
                    {
                      y_15 = ATgetFirst((ATermList) x_15);
                      z_15 = (ATerm) ATgetNext((ATermList) x_15);
                      n_15 :
                      if(((ATgetType(z_15) == AT_LIST) && ((ATermList) z_15 != ATempty)))
                        {
                          a_16 = ATgetFirst((ATermList) z_15);
                          b_16 = (ATerm) ATgetNext((ATermList) z_15);
                          {
                            if(((q_15 != NULL) && (q_15 != y_15)))
                              _fail(y_15);
                            else
                              q_15 = y_15;
                            {
                              if(((s_15 != NULL) && (s_15 != a_16)))
                                _fail(a_16);
                              else
                                s_15 = a_16;
                              if(((r_15 != NULL) && (r_15 != b_16)))
                                _fail(b_16);
                              else
                                r_15 = b_16;
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
    t = not_null(s_15);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm l_16 = NULL;
  ATerm n_16 = NULL,o_16 = NULL;
  l_16 = t;
  {
    ATerm p_16 = NULL;
    ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL;
    t = not_null(l_16);
    {
      p_16 = t;
      {
        t = SSL_explode_term(not_null(p_16));
        {
          r_16 = t;
          i_16 :
          if(match_cons(r_16, sym__2))
            {
              s_16 = ATgetArgument(r_16, 0);
              t_16 = ATgetArgument(r_16, 1);
              j_16 :
              if(match_string(s_16, ""))
                {
                  k_16 :
                  if(((ATgetType(t_16) == AT_LIST) && ((ATermList) t_16 != ATempty)))
                    {
                      u_16 = ATgetFirst((ATermList) t_16);
                      v_16 = (ATerm) ATgetNext((ATermList) t_16);
                      {
                        if(((o_16 != NULL) && (o_16 != u_16)))
                          _fail(u_16);
                        else
                          o_16 = u_16;
                        if(((n_16 != NULL) && (n_16 != v_16)))
                          _fail(v_16);
                        else
                          n_16 = v_16;
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
    t = not_null(o_16);
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm i_81 (ATerm))
{
  ATerm x_1 (ATerm t)
  {
    ATerm h_14;
    h_14 = t;
    {
      ATerm a_17 = NULL;
      ATerm b_17 = NULL;
      t = term_t_8;
      {
        t = get_config_0(t);
        {
          b_17 = t;
          if(((a_17 != NULL) && (a_17 != b_17)))
            _fail(b_17);
          else
            a_17 = b_17;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_17), term_k_14);
        t = geq_0(t);
      }
    }
    t = h_14;
    t = i_81(t);
    return(t);
  }
  t = try_1(t, x_1);
  return(t);
}
ATerm term_to_tree_0 (ATerm t)
{
  ATerm x_17 = NULL,z_17 = NULL;
  ATerm y_1 (ATerm t)
  {
    ATerm z_1 (ATerm t)
    {
      t = term_o_14;
      return(t);
    }
    t = debug_1(t, z_1);
    return(t);
  }
  t = if_verbose5_1(t, y_1);
  {
    ATerm p_14;
    p_14 = t;
    {
      ATerm y_17 = NULL;
      t = new_0(t);
      {
        y_17 = t;
        if(((x_17 != NULL) && (x_17 != y_17)))
          _fail(y_17);
        else
          x_17 = y_17;
      }
    }
    t = p_14;
    {
      ATerm a_18 = NULL;
      a_18 = t;
      if(((z_17 != NULL) && (z_17 != a_18)))
        _fail(a_18);
      else
        z_17 = a_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_17), not_null(z_17));
        {
          ATerm p_18 (ATerm t)
          {
            ATerm j_18 = NULL,l_18 = NULL;
            ATerm a_2 (ATerm t)
            {
              ATerm q_14 = t;
              int r_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_2 (ATerm t)
                  {
                    ATerm b_18 = NULL,d_18 = NULL;
                    ATerm s_14;
                    s_14 = t;
                    {
                      ATerm c_18 = NULL;
                      t = new_0(t);
                      {
                        c_18 = t;
                        if(((b_18 != NULL) && (b_18 != c_18)))
                          _fail(c_18);
                        else
                          b_18 = c_18;
                      }
                    }
                    t = s_14;
                    {
                      ATerm e_18 = NULL;
                      e_18 = t;
                      if(((d_18 != NULL) && (d_18 != e_18)))
                        _fail(e_18);
                      else
                        d_18 = e_18;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(b_18), not_null(d_18));
                    }
                    return(t);
                  }
                  t = map_1(t, b_2);
                  LocalPopChoice(r_14);
                }
              else
                {
                  t = q_14;
                  {
                    ATerm d_2 (ATerm t)
                    {
                      ATerm f_18 = NULL,h_18 = NULL;
                      ATerm t_14;
                      t_14 = t;
                      {
                        ATerm g_18 = NULL;
                        t = new_0(t);
                        {
                          g_18 = t;
                          if(((f_18 != NULL) && (f_18 != g_18)))
                            _fail(g_18);
                          else
                            f_18 = g_18;
                        }
                      }
                      t = t_14;
                      {
                        ATerm i_18 = NULL;
                        i_18 = t;
                        if(((h_18 != NULL) && (h_18 != i_18)))
                          _fail(i_18);
                        else
                          h_18 = i_18;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(f_18), not_null(h_18));
                      }
                      return(t);
                    }
                    t = _all(t, d_2);
                  }
                }
              return(t);
            }
            t = _2(t, _id, a_2);
            {
              ATerm y_14;
              y_14 = t;
              {
                ATerm k_18 = NULL;
                ATerm e_2 (ATerm t)
                {
                  ATerm z_14 = t;
                  int e_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = map_1(t, Fst_0);
                      LocalPopChoice(e_15);
                    }
                  else
                    {
                      t = z_14;
                      t = _all(t, Fst_0);
                    }
                  return(t);
                }
                t = _2(t, _id, e_2);
                {
                  k_18 = t;
                  if(((j_18 != NULL) && (j_18 != k_18)))
                    _fail(k_18);
                  else
                    j_18 = k_18;
                }
              }
              t = y_14;
              {
                ATerm m_18 = NULL;
                t = Snd_0(t);
                {
                  ATerm f_15 = t;
                  int g_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_2 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = foldr_3(t, f_2, union_0, p_18);
                      LocalPopChoice(g_15);
                    }
                  else
                    {
                      t = f_15;
                      {
                        ATerm g_2 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        t = crush_3(t, g_2, union_0, p_18);
                      }
                    }
                  {
                    m_18 = t;
                    if(((l_18 != NULL) && (l_18 != m_18)))
                      _fail(m_18);
                    else
                      l_18 = m_18;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(l_18)), not_null(j_18));
              }
            }
            return(t);
          }
          t = p_18(t);
        }
      }
    }
  }
  return(t);
}
ATerm to_adot_0 (ATerm t)
{
  ATerm h_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_15;
      j_15 = t;
      {
        t = term_p_15;
        t = get_config_0(t);
      }
      t = j_15;
      t = term_to_tree_0(t);
      LocalPopChoice(i_15);
    }
  else
    {
      t = h_15;
      {
        ATerm u_15;
        u_15 = t;
        {
          t = term_c_16;
          t = get_config_0(t);
        }
        t = u_15;
        t = term_to_graph_0(t);
      }
    }
  t = graph_to_adot_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL;
  y_18 = t;
  x_18 :
  if(match_cons(y_18, sym__2))
    {
      z_18 = ATgetArgument(y_18, 0);
      a_19 = ATgetArgument(y_18, 1);
      t = SSL_WriteToTextFile(not_null(z_18), not_null(a_19));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm f_67 (ATerm))
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
  j_19 = t;
  i_19 :
  if(match_cons(j_19, sym__2))
    {
      k_19 = ATgetArgument(j_19, 0);
      l_19 = ATgetArgument(j_19, 1);
      {
        ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
        ATerm d_16;
        d_16 = t;
        {
          ATerm r_19 = NULL;
          ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
          t = f_67(t);
          {
            r_19 = t;
            {
              if(((o_19 != NULL) && (o_19 != r_19)))
                _fail(r_19);
              else
                o_19 = r_19;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(o_19), not_null(k_19), not_null(l_19));
                {
                  t = table_push_0(t);
                  {
                    ATerm e_16 = t;
                    int f_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_19), term_g_16);
                        t = table_get_0(t);
                        LocalPopChoice(f_16);
                      }
                    else
                      {
                        t = e_16;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      s_19 = t;
                      h_19 :
                      if(((ATgetType(s_19) == AT_LIST) && ((ATermList) s_19 != ATempty)))
                        {
                          t_19 = ATgetFirst((ATermList) s_19);
                          u_19 = (ATerm) ATgetNext((ATermList) s_19);
                          {
                            if(((p_19 != NULL) && (p_19 != t_19)))
                              _fail(t_19);
                            else
                              p_19 = t_19;
                            {
                              if(((q_19 != NULL) && (q_19 != u_19)))
                                _fail(u_19);
                              else
                                q_19 = u_19;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(o_19), term_g_16, (ATerm) ATinsert(CheckATermList(not_null(q_19)), (ATerm) ATinsert(CheckATermList(not_null(p_19)), not_null(k_19))));
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
        t = d_16;
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
  ATerm a_20 = NULL;
  ATerm c_20 = NULL;
  a_20 = t;
  {
    ATerm h_16;
    h_16 = t;
    {
      ATerm d_20 = NULL;
      t = term_m_16;
      {
        d_20 = t;
        if(((c_20 != NULL) && (c_20 != d_20)))
          _fail(d_20);
        else
          c_20 = d_20;
      }
    }
    t = h_16;
    {
      t = SSL_open_file(not_null(a_20), not_null(c_20));
      t = SSL_close_file(not_null(a_20));
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
  ATerm h_20 = NULL;
  ATerm i_20 = NULL;
  t = term_q_16;
  {
    t = new_0(t);
    {
      i_20 = t;
      if(((h_20 != NULL) && (h_20 != i_20)))
        _fail(i_20);
      else
        h_20 = i_20;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_20), term_w_16);
    {
      t = conc_strings_0(t);
      {
        ATerm j_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, j_2);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm m_20 = NULL;
  t = new_file_0(t);
  {
    m_20 = t;
    {
      ATerm x_16;
      x_16 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_20), term_q_16);
        {
          ATerm k_2 (ATerm t)
          {
            t = term_y_16;
            return(t);
          }
          t = assert_1(t, k_2);
        }
      }
      t = x_16;
    }
  }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm y_20 = NULL;
  ATerm a_21 = NULL;
  y_20 = t;
  {
    ATerm b_21 = NULL;
    t = xtc_new_file_0(t);
    {
      b_21 = t;
      {
        if(((a_21 != NULL) && (a_21 != b_21)))
          _fail(b_21);
        else
          a_21 = b_21;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_21), not_null(y_20));
          t = WriteToTextFile_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_21));
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm j_21 = NULL;
  j_21 = t;
  t = SSL_ReadFromFile(not_null(j_21));
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL;
  r_21 = t;
  q_21 :
  if(match_cons(r_21, sym_stdin_0))
    {
      ATerm t_21 = NULL;
      ATerm u_21 = NULL;
      t = term_z_16;
      {
        t = ReadFromFile_0(t);
        {
          u_21 = t;
          if(((t_21 != NULL) && (t_21 != u_21)))
            _fail(u_21);
          else
            t_21 = u_21;
        }
      }
      t = not_null(t_21);
    }
  else
    {
      if(match_cons(r_21, sym_FILE_1))
        {
          s_21 = ATgetArgument(r_21, 0);
          {
            ATerm w_21 = NULL;
            ATerm x_21 = NULL;
            t = not_null(s_21);
            {
              t = ReadFromFile_0(t);
              {
                x_21 = t;
                if(((w_21 != NULL) && (w_21 != x_21)))
                  _fail(x_21);
                else
                  w_21 = x_21;
              }
            }
            t = not_null(w_21);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm x_67 (ATerm))
{
  t = read_from_0(t);
  {
    t = x_67(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL;
  e_22 = t;
  d_22 :
  if(match_cons(e_22, sym__2))
    {
      f_22 = ATgetArgument(e_22, 0);
      g_22 = ATgetArgument(e_22, 1);
      t = SSL_rename(not_null(f_22), not_null(g_22));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm o_22 = NULL;
  o_22 = t;
  n_22 :
  if(match_cons(o_22, sym_stdout_0))
    {
      ATerm q_22 = NULL,s_22 = NULL;
      ATerm c_17;
      c_17 = t;
      {
        ATerm r_22 = NULL;
        t = SSLgetAnnotations(not_null(o_22));
        {
          r_22 = t;
          if(((q_22 != NULL) && (q_22 != r_22)))
            _fail(r_22);
          else
            q_22 = r_22;
        }
      }
      t = c_17;
      {
        ATerm t_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(q_22));
        {
          t_22 = t;
          if(((s_22 != NULL) && (s_22 != t_22)))
            _fail(t_22);
          else
            s_22 = t_22;
        }
        t = not_null(s_22);
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
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL;
  z_22 = t;
  y_22 :
  if(match_cons(z_22, sym__2))
    {
      a_23 = ATgetArgument(z_22, 0);
      b_23 = ATgetArgument(z_22, 1);
      t = SSL_copy(not_null(a_23), not_null(b_23));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm l_23 = NULL,s_23 = NULL;
  l_23 = t;
  k_23 :
  if(match_cons(l_23, sym_FILE_1))
    {
      s_23 = ATgetArgument(l_23, 0);
      {
        ATerm d_17 = t;
        int e_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_23 = NULL;
            t = m_0(t);
            {
              u_23 = t;
              i_23 :
              if(match_cons(u_23, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_23), term_f_17);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(s_23);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_f_17;
            LocalPopChoice(e_17);
          }
        else
          {
            t = d_17;
            {
              ATerm w_23 = NULL;
              ATerm x_23 = NULL;
              t = m_0(t);
              {
                x_23 = t;
                {
                  if(((w_23 != NULL) && (w_23 != x_23)))
                    _fail(x_23);
                  else
                    w_23 = x_23;
                  {
                    ATerm g_17 = t;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = g_17;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_23), not_null(w_23));
                      t = rename_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_23));
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
ATerm xtc_io_1 (ATerm t, ATerm k_67 (ATerm))
{
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_24 = NULL;
      ATerm f_24 = NULL;
      t = term_q_11;
      {
        t = get_config_0(t);
        {
          f_24 = t;
          if(((e_24 != NULL) && (e_24 != f_24)))
            _fail(f_24);
          else
            e_24 = f_24;
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_24));
      LocalPopChoice(i_17);
    }
  else
    {
      t = h_17;
      t = term_z_16;
    }
  {
    t = k_67(t);
    {
      ATerm l_2 (ATerm t)
      {
        ATerm j_17 = t;
        int k_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_o_11;
            t = get_config_0(t);
            LocalPopChoice(k_17);
          }
        else
          {
            t = j_17;
            t = term_f_17;
          }
        return(t);
      }
      t = rename_to_1(t, l_2);
    }
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
  j_24 = t;
  i_24 :
  if(((ATgetType(j_24) == AT_LIST) && ((ATermList) j_24 != ATempty)))
    {
      k_24 = ATgetFirst((ATermList) j_24);
      l_24 = (ATerm) ATgetNext((ATermList) j_24);
      t = not_null(l_24);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL;
  s_24 = t;
  r_24 :
  if(match_cons(s_24, sym__2))
    {
      t_24 = ATgetArgument(s_24, 0);
      u_24 = ATgetArgument(s_24, 1);
      {
        ATerm l_17;
        l_17 = t;
        {
          ATerm x_24 = NULL;
          ATerm y_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_24), not_null(u_24));
          {
            ATerm m_17 = t;
            int n_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(n_17);
              }
            else
              {
                t = m_17;
                t = (ATerm) ATempty;
              }
            {
              y_24 = t;
              if(((x_24 != NULL) && (x_24 != y_24)))
                _fail(y_24);
              else
                x_24 = y_24;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_24), not_null(u_24), not_null(x_24));
            t = table_put_0(t);
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
ATerm end_scope_1 (ATerm t, ATerm c_67 (ATerm))
{
  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL;
  ATerm o_17;
  o_17 = t;
  {
    ATerm i_25 = NULL;
    ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL;
    t = c_67(t);
    {
      i_25 = t;
      {
        if(((g_25 != NULL) && (g_25 != i_25)))
          _fail(i_25);
        else
          g_25 = i_25;
        {
          ATerm p_17 = t;
          int q_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_25), term_g_16);
              t = table_get_0(t);
              LocalPopChoice(q_17);
            }
          else
            {
              t = p_17;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            j_25 = t;
            e_25 :
            if(((ATgetType(j_25) == AT_LIST) && ((ATermList) j_25 != ATempty)))
              {
                k_25 = ATgetFirst((ATermList) j_25);
                l_25 = (ATerm) ATgetNext((ATermList) j_25);
                {
                  if(((h_25 != NULL) && (h_25 != k_25)))
                    _fail(k_25);
                  else
                    h_25 = k_25;
                  {
                    if(((f_25 != NULL) && (f_25 != l_25)))
                      _fail(l_25);
                    else
                      f_25 = l_25;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(g_25), term_g_16, not_null(f_25));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(h_25);
                          {
                            ATerm m_2 (ATerm t)
                            {
                              ATerm m_25 = NULL;
                              m_25 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_25), not_null(m_25));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, m_2);
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
  t = o_17;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm s_25 = NULL;
  s_25 = t;
  t = SSL_remove(not_null(s_25));
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm b_67 (ATerm))
{
  ATerm a_26 = NULL;
  ATerm r_17;
  r_17 = t;
  {
    ATerm b_26 = NULL;
    ATerm c_26 = NULL;
    t = b_67(t);
    {
      b_26 = t;
      {
        if(((a_26 != NULL) && (a_26 != b_26)))
          _fail(b_26);
        else
          a_26 = b_26;
        {
          ATerm d_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_26), term_g_16);
          {
            ATerm s_17 = t;
            int t_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(t_17);
              }
            else
              {
                t = s_17;
                t = (ATerm) ATempty;
              }
            {
              d_26 = t;
              if(((c_26 != NULL) && (c_26 != d_26)))
                _fail(d_26);
              else
                c_26 = d_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_26), term_g_16, (ATerm) ATinsert(CheckATermList(not_null(c_26)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = r_17;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm l_67 (ATerm))
{
  ATerm i_26 = NULL,j_26 = NULL;
  ATerm p_2 (ATerm t)
  {
    t = term_y_16;
    return(t);
  }
  t = begin_scope_1(t, p_2);
  {
    t = l_67(t);
    {
      ATerm u_17;
      u_17 = t;
      {
        ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
        ATerm v_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_n_18;
            t = table_get_0(t);
            LocalPopChoice(w_17);
          }
        else
          {
            t = v_17;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          k_26 = t;
          h_26 :
          if(((ATgetType(k_26) == AT_LIST) && ((ATermList) k_26 != ATempty)))
            {
              l_26 = ATgetFirst((ATermList) k_26);
              m_26 = (ATerm) ATgetNext((ATermList) k_26);
              {
                if(((j_26 != NULL) && (j_26 != l_26)))
                  _fail(l_26);
                else
                  j_26 = l_26;
                {
                  if(((i_26 != NULL) && (i_26 != m_26)))
                    _fail(m_26);
                  else
                    i_26 = m_26;
                  {
                    t = not_null(j_26);
                    {
                      ATerm q_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, q_2);
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
      t = u_17;
      {
        ATerm r_2 (ATerm t)
        {
          t = term_y_16;
          return(t);
        }
        t = end_scope_1(t, r_2);
      }
    }
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm p_26 = NULL;
  p_26 = t;
  t = SSL_string_to_int(not_null(p_26));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm z_26 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL;
  z_26 = t;
  x_26 :
  if(match_string(z_26, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(z_26) == AT_LIST) && ((ATermList) z_26 != ATempty)))
        {
          b_27 = ATgetFirst((ATermList) z_26);
          c_27 = (ATerm) ATgetNext((ATermList) z_26);
          y_26 :
          if(((ATgetType(c_27) == AT_LIST) && ((ATermList) c_27 != ATempty)))
            {
              d_27 = ATgetFirst((ATermList) c_27);
              e_27 = (ATerm) ATgetNext((ATermList) c_27);
              {
                ATerm k_27 = NULL;
                ATerm o_18;
                o_18 = t;
                {
                  t = not_null(b_27);
                  t = j_0(t);
                }
                t = o_18;
                {
                  ATerm l_27 = NULL;
                  t = not_null(d_27);
                  {
                    t = k_0(t);
                    {
                      l_27 = t;
                      if(((k_27 != NULL) && (k_27 != l_27)))
                        _fail(l_27);
                      else
                        k_27 = l_27;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(e_27)), not_null(k_27));
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
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_2 (ATerm t)
      {
        ATerm k_28 = NULL;
        k_28 = t;
        p_27 :
        if(!(match_string(k_28, "-i")))
          {
            if(!(match_string(k_28, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        ATerm n_28 = NULL;
        ATerm s_18;
        s_18 = t;
        {
          ATerm l_28 = NULL;
          ATerm m_28 = NULL;
          m_28 = t;
          if(((l_28 != NULL) && (l_28 != m_28)))
            _fail(m_28);
          else
            l_28 = m_28;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_q_11, not_null(l_28));
            t = set_config_0(t);
          }
        }
        t = s_18;
        {
          ATerm q_28 = NULL;
          q_28 = t;
          if(((n_28 != NULL) && (n_28 != q_28)))
            _fail(q_28);
          else
            n_28 = q_28;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_28));
        }
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        t = term_t_18;
        return(t);
      }
      t = ArgOption_3(t, v_2, d_3, e_3);
      LocalPopChoice(r_18);
    }
  else
    {
      t = q_18;
      {
        ATerm u_18 = t;
        int v_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_3 (ATerm t)
            {
              ATerm r_28 = NULL;
              r_28 = t;
              s_27 :
              if(!(match_string(r_28, "-o")))
                {
                  if(!(match_string(r_28, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm g_3 (ATerm t)
            {
              ATerm u_28 = NULL;
              ATerm w_18;
              w_18 = t;
              {
                ATerm s_28 = NULL;
                ATerm t_28 = NULL;
                t_28 = t;
                if(((s_28 != NULL) && (s_28 != t_28)))
                  _fail(t_28);
                else
                  s_28 = t_28;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_11, not_null(s_28));
                  t = set_config_0(t);
                }
              }
              t = w_18;
              {
                ATerm v_28 = NULL;
                v_28 = t;
                if(((u_28 != NULL) && (u_28 != v_28)))
                  _fail(v_28);
                else
                  u_28 = v_28;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_28));
              }
              return(t);
            }
            ATerm m_3 (ATerm t)
            {
              t = term_b_19;
              return(t);
            }
            t = ArgOption_3(t, f_3, g_3, m_3);
            LocalPopChoice(v_18);
          }
        else
          {
            t = u_18;
            {
              ATerm c_19 = t;
              int d_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_3 (ATerm t)
                  {
                    ATerm w_28 = NULL;
                    w_28 = t;
                    v_27 :
                    if(!(match_string(w_28, "-S")))
                      {
                        if(!(match_string(w_28, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm s_3 (ATerm t)
                  {
                    t = term_f_19;
                    t = set_config_0(t);
                    t = term_g_19;
                    return(t);
                  }
                  ATerm t_3 (ATerm t)
                  {
                    t = term_m_19;
                    return(t);
                  }
                  t = Option_3(t, n_3, s_3, t_3);
                  LocalPopChoice(d_19);
                }
              else
                {
                  t = c_19;
                  {
                    ATerm n_19 = t;
                    int v_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_3 (ATerm t)
                        {
                          ATerm x_28 = NULL;
                          x_28 = t;
                          w_27 :
                          if(!(match_string(x_28, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm x_3 (ATerm t)
                        {
                          ATerm a_29 = NULL;
                          ATerm w_19;
                          w_19 = t;
                          {
                            ATerm y_28 = NULL;
                            ATerm z_28 = NULL;
                            t = string_to_int_0(t);
                            {
                              z_28 = t;
                              if(((y_28 != NULL) && (y_28 != z_28)))
                                _fail(z_28);
                              else
                                y_28 = z_28;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_t_8, not_null(y_28));
                              t = set_config_0(t);
                            }
                          }
                          t = w_19;
                          {
                            ATerm b_29 = NULL;
                            b_29 = t;
                            if(((a_29 != NULL) && (a_29 != b_29)))
                              _fail(b_29);
                            else
                              a_29 = b_29;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(a_29));
                          }
                          return(t);
                        }
                        ATerm y_3 (ATerm t)
                        {
                          t = term_x_19;
                          return(t);
                        }
                        t = ArgOption_3(t, u_3, x_3, y_3);
                        LocalPopChoice(v_19);
                      }
                    else
                      {
                        t = n_19;
                        {
                          ATerm y_19 = t;
                          int z_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm b_4 (ATerm t)
                              {
                                ATerm c_29 = NULL;
                                c_29 = t;
                                f_28 :
                                if(!(match_string(c_29, "--keep")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm c_4 (ATerm t)
                              {
                                ATerm b_20;
                                b_20 = t;
                                {
                                  ATerm d_29 = NULL;
                                  ATerm e_29 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    e_29 = t;
                                    if(((d_29 != NULL) && (d_29 != e_29)))
                                      _fail(e_29);
                                    else
                                      d_29 = e_29;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_e_20, not_null(d_29));
                                    t = set_config_0(t);
                                  }
                                }
                                t = b_20;
                                return(t);
                              }
                              ATerm f_4 (ATerm t)
                              {
                                t = term_f_20;
                                return(t);
                              }
                              t = ArgOption_3(t, b_4, c_4, f_4);
                              LocalPopChoice(z_19);
                            }
                          else
                            {
                              t = y_19;
                              {
                                ATerm g_20 = t;
                                int j_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_4 (ATerm t)
                                    {
                                      ATerm f_29 = NULL;
                                      f_29 = t;
                                      h_28 :
                                      if(!(match_string(f_29, "-v")))
                                        {
                                          if(!(match_string(f_29, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm h_4 (ATerm t)
                                    {
                                      t = term_l_20;
                                      t = set_config_0(t);
                                      t = term_n_20;
                                      return(t);
                                    }
                                    ATerm i_4 (ATerm t)
                                    {
                                      t = term_o_20;
                                      return(t);
                                    }
                                    t = Option_3(t, g_4, h_4, i_4);
                                    LocalPopChoice(j_20);
                                  }
                                else
                                  {
                                    t = g_20;
                                    {
                                      ATerm p_20 = t;
                                      int q_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm o_4 (ATerm t)
                                          {
                                            ATerm g_29 = NULL;
                                            g_29 = t;
                                            i_28 :
                                            if(!(match_string(g_29, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm p_4 (ATerm t)
                                          {
                                            t = term_s_20;
                                            t = set_config_0(t);
                                            t = term_t_20;
                                            return(t);
                                          }
                                          ATerm q_4 (ATerm t)
                                          {
                                            t = term_u_20;
                                            return(t);
                                          }
                                          t = Option_3(t, o_4, p_4, q_4);
                                          LocalPopChoice(q_20);
                                        }
                                      else
                                        {
                                          t = p_20;
                                          {
                                            ATerm v_4 (ATerm t)
                                            {
                                              ATerm h_29 = NULL;
                                              h_29 = t;
                                              j_28 :
                                              if(!(match_string(h_29, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm w_4 (ATerm t)
                                            {
                                              t = term_w_20;
                                              t = set_config_0(t);
                                              t = term_x_20;
                                              return(t);
                                            }
                                            ATerm x_4 (ATerm t)
                                            {
                                              t = term_z_20;
                                              return(t);
                                            }
                                            t = Option_3(t, v_4, w_4, x_4);
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
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_4 (ATerm t)
      {
        ATerm r_29 = NULL;
        r_29 = t;
        p_29 :
        if(!(match_string(r_29, "--graph")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm z_4 (ATerm t)
      {
        t = term_e_21;
        t = set_config_0(t);
        t = term_f_21;
        return(t);
      }
      ATerm f_5 (ATerm t)
      {
        t = term_g_21;
        return(t);
      }
      t = Option_3(t, y_4, z_4, f_5);
      LocalPopChoice(d_21);
    }
  else
    {
      t = c_21;
      {
        ATerm g_5 (ATerm t)
        {
          ATerm s_29 = NULL;
          s_29 = t;
          q_29 :
          if(!(match_string(s_29, "--tree")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm k_5 (ATerm t)
        {
          t = term_h_21;
          t = set_config_0(t);
          t = term_i_21;
          return(t);
        }
        ATerm l_5 (ATerm t)
        {
          t = term_k_21;
          return(t);
        }
        t = Option_3(t, g_5, k_5, l_5);
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm v_29 = NULL;
  ATerm l_21;
  l_21 = t;
  {
    ATerm m_5 (ATerm t)
    {
      ATerm w_29 = NULL,x_29 = NULL;
      w_29 = t;
      u_29 :
      if(match_cons(w_29, sym_Program_1))
        {
          x_29 = ATgetArgument(w_29, 0);
          if(((v_29 != NULL) && (v_29 != x_29)))
            _fail(x_29);
          else
            v_29 = x_29;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, m_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_21), not_null(v_29)), term_m_21));
      {
        t = printnl_0(t);
        {
          t = term_o_21;
          t = exit_0(t);
        }
      }
    }
  }
  t = l_21;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATempty, term_p_21));
  {
    t = printnl_0(t);
    {
      t = term_o_21;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm e_30 = NULL;
  ATerm g_30 = NULL;
  e_30 = t;
  {
    ATerm h_30 = NULL;
    ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
    t = not_null(e_30);
    {
      h_30 = t;
      {
        t = SSL_explode_term(not_null(h_30));
        {
          j_30 = t;
          c_30 :
          if(match_cons(j_30, sym__2))
            {
              k_30 = ATgetArgument(j_30, 0);
              l_30 = ATgetArgument(j_30, 1);
              d_30 :
              if(match_string(k_30, ""))
                {
                  if(((g_30 != NULL) && (g_30 != l_30)))
                    _fail(l_30);
                  else
                    g_30 = l_30;
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
      t = not_null(g_30);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
  r_30 = t;
  q_30 :
  if(match_cons(r_30, sym__2))
    {
      s_30 = ATgetArgument(r_30, 0);
      t_30 = ATgetArgument(r_30, 1);
      {
        t = not_null(s_30);
        {
          ATerm n_5 (ATerm t)
          {
            t = not_null(t_30);
            return(t);
          }
          t = at_end_1(t, n_5);
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
  ATerm v_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(y_21);
    }
  else
    {
      t = v_21;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm e_47 (ATerm), ATerm f_47 (ATerm))
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
  d_31 = t;
  c_31 :
  if(match_cons(d_31, sym__2))
    {
      e_31 = ATgetArgument(d_31, 0);
      f_31 = ATgetArgument(d_31, 1);
      {
        ATerm j_31 = NULL,l_31 = NULL;
        ATerm k_31 = NULL;
        t = SSLgetAnnotations(not_null(d_31));
        {
          k_31 = t;
          if(((j_31 != NULL) && (j_31 != k_31)))
            _fail(k_31);
          else
            j_31 = k_31;
        }
        {
          t = not_null(e_31);
          {
            ATerm n_31 = NULL;
            t = e_47(t);
            {
              l_31 = t;
              {
                t = not_null(f_31);
                {
                  ATerm p_31 = NULL;
                  t = f_47(t);
                  {
                    n_31 = t;
                    {
                      ATerm r_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(l_31), not_null(n_31)), not_null(j_31));
                      {
                        r_31 = t;
                        if(((p_31 != NULL) && (p_31 != r_31)))
                          _fail(r_31);
                        else
                          p_31 = r_31;
                      }
                      t = not_null(p_31);
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
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm j_66 (ATerm))
{
  ATerm z_21;
  z_21 = t;
  {
    ATerm b_32 = NULL,e_32 = NULL;
    ATerm a_22;
    a_22 = t;
    {
      ATerm c_32 = NULL;
      t = j_66(t);
      {
        c_32 = t;
        if(((b_32 != NULL) && (b_32 != c_32)))
          _fail(c_32);
        else
          b_32 = c_32;
      }
    }
    t = a_22;
    {
      ATerm f_32 = NULL;
      f_32 = t;
      if(((e_32 != NULL) && (e_32 != f_32)))
        _fail(f_32);
      else
        e_32 = f_32;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_32)), not_null(b_32)));
        t = printnl_0(t);
      }
    }
  }
  t = z_21;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm v_32 = NULL;
  v_32 = t;
  t = SSL_is_string(not_null(v_32));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      {
        ATerm h_22 = t;
        int i_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, o_5);
            LocalPopChoice(i_22);
          }
        else
          {
            t = h_22;
            {
              ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
              z_33 = t;
              y_33 :
              if(match_cons(z_33, sym_Path_1))
                {
                  a_34 = ATgetArgument(z_33, 0);
                  t = not_null(a_34);
                }
              else
                {
                  if(match_cons(z_33, sym_Var_1))
                    {
                      a_34 = ATgetArgument(z_33, 0);
                      {
                        t = not_null(a_34);
                        {
                          ATerm j_22 = t;
                          int k_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(k_22);
                            }
                          else
                            {
                              t = j_22;
                              {
                                ATerm p_5 (ATerm t)
                                {
                                  t = term_l_22;
                                  return(t);
                                }
                                t = debug_1(t, p_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(z_33, sym_Prefix_2))
                        {
                          a_34 = ATgetArgument(z_33, 0);
                          b_34 = ATgetArgument(z_33, 1);
                          {
                            ATerm i_34 = NULL,k_34 = NULL;
                            ATerm m_22;
                            m_22 = t;
                            {
                              ATerm j_34 = NULL;
                              t = not_null(a_34);
                              {
                                t = eval_config_0(t);
                                {
                                  j_34 = t;
                                  if(((i_34 != NULL) && (i_34 != j_34)))
                                    _fail(j_34);
                                  else
                                    i_34 = j_34;
                                }
                              }
                            }
                            t = m_22;
                            {
                              ATerm q_34 = NULL;
                              t = not_null(b_34);
                              {
                                t = eval_config_0(t);
                                {
                                  q_34 = t;
                                  if(((k_34 != NULL) && (k_34 != q_34)))
                                    _fail(q_34);
                                  else
                                    k_34 = q_34;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_34), not_null(k_34));
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
  ATerm y_34 = NULL;
  y_34 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_22, not_null(y_34));
    {
      t = table_get_0(t);
      {
        ATerm r_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm u_22;
            u_22 = t;
            {
              ATerm a_35 = NULL;
              ATerm b_35 = NULL;
              b_35 = t;
              if(((a_35 != NULL) && (a_35 != b_35)))
                _fail(b_35);
              else
                a_35 = b_35;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_p_22, not_null(y_34), not_null(a_35));
                t = table_put_0(t);
              }
            }
            t = u_22;
          }
          return(t);
        }
        t = try_1(t, r_5);
      }
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm j_35 = NULL;
  j_35 = t;
  t = SSL_TicksToSeconds(not_null(j_35));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL;
  o_35 = t;
  n_35 :
  if(match_cons(o_35, sym__2))
    {
      p_35 = ATgetArgument(o_35, 0);
      q_35 = ATgetArgument(o_35, 1);
      {
        ATerm v_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(p_35), not_null(q_35));
            LocalPopChoice(w_22);
          }
        else
          {
            t = v_22;
            t = SSL_addr(not_null(p_35), not_null(q_35));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm g_69 (ATerm), ATerm h_69 (ATerm))
{
  ATerm x_22 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_69(t);
      LocalPopChoice(c_23);
    }
  else
    {
      t = x_22;
      {
        ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
        x_35 = t;
        w_35 :
        if(((ATgetType(x_35) == AT_LIST) && ((ATermList) x_35 != ATempty)))
          {
            y_35 = ATgetFirst((ATermList) x_35);
            z_35 = (ATerm) ATgetNext((ATermList) x_35);
            {
              ATerm c_36 = NULL;
              ATerm d_36 = NULL;
              t = not_null(z_35);
              {
                t = foldr_2(t, g_69, h_69);
                {
                  d_36 = t;
                  if(((c_36 != NULL) && (c_36 != d_36)))
                    _fail(d_36);
                  else
                    c_36 = d_36;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_35), not_null(c_36));
                t = h_69(t);
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
ATerm crush_2 (ATerm t, ATerm y_70 (ATerm), ATerm z_70 (ATerm))
{
  ATerm k_36 = NULL;
  ATerm m_36 = NULL;
  k_36 = t;
  {
    ATerm n_36 = NULL;
    ATerm p_36 = NULL,q_36 = NULL,s_36 = NULL;
    t = not_null(k_36);
    {
      n_36 = t;
      {
        t = SSL_explode_term(not_null(n_36));
        {
          p_36 = t;
          j_36 :
          if(match_cons(p_36, sym__2))
            {
              q_36 = ATgetArgument(p_36, 0);
              s_36 = ATgetArgument(p_36, 1);
              if(((m_36 != NULL) && (m_36 != s_36)))
                _fail(s_36);
              else
                m_36 = s_36;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(m_36);
      t = foldr_2(t, y_70, z_70);
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
    ATerm u_5 (ATerm t)
    {
      t = term_e_19;
      return(t);
    }
    t = crush_2(t, u_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
  f_37 = t;
  c_37 :
  if(match_cons(f_37, sym__2))
    {
      g_37 = ATgetArgument(f_37, 0);
      h_37 = ATgetArgument(f_37, 1);
      {
        ATerm d_23;
        d_23 = t;
        {
          ATerm e_23 = t;
          int f_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(g_37), not_null(h_37));
              LocalPopChoice(f_23);
            }
          else
            {
              t = e_23;
              t = SSL_gtr(not_null(g_37), not_null(h_37));
            }
        }
        t = d_23;
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
  ATerm n_37 = NULL;
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
      o_37 = t;
      m_37 :
      if(match_cons(o_37, sym__2))
        {
          p_37 = ATgetArgument(o_37, 0);
          q_37 = ATgetArgument(o_37, 1);
          {
            if(((n_37 != NULL) && (n_37 != p_37)))
              _fail(p_37);
            else
              n_37 = p_37;
            if(((n_37 != NULL) && (n_37 != q_37)))
              _fail(q_37);
            else
              n_37 = q_37;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(h_23);
    }
  else
    {
      t = g_23;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm e_81 (ATerm))
{
  ATerm v_5 (ATerm t)
  {
    ATerm j_23;
    j_23 = t;
    {
      ATerm t_37 = NULL;
      ATerm u_37 = NULL;
      t = term_t_8;
      {
        t = get_config_0(t);
        {
          u_37 = t;
          if(((t_37 != NULL) && (t_37 != u_37)))
            _fail(u_37);
          else
            t_37 = u_37;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_37), term_o_21);
        t = geq_0(t);
      }
    }
    t = j_23;
    t = e_81(t);
    return(t);
  }
  t = try_1(t, v_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    ATerm y_37 = NULL,a_38 = NULL;
    ATerm m_23;
    m_23 = t;
    {
      ATerm z_37 = NULL;
      t = run_time_0(t);
      {
        z_37 = t;
        if(((y_37 != NULL) && (y_37 != z_37)))
          _fail(z_37);
        else
          y_37 = z_37;
      }
    }
    t = m_23;
    {
      ATerm b_38 = NULL;
      t = term_n_23;
      {
        t = get_config_0(t);
        {
          b_38 = t;
          if(((a_38 != NULL) && (a_38 != b_38)))
            _fail(b_38);
          else
            a_38 = b_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_23), not_null(y_37)), term_o_23), not_null(a_38)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, w_5);
  {
    t = term_e_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm i_38 = NULL;
  i_38 = t;
  h_38 :
  if(match_cons(i_38, sym_Version_0))
    {
      ATerm k_38 = NULL,m_38 = NULL;
      ATerm q_23;
      q_23 = t;
      {
        ATerm l_38 = NULL;
        t = SSLgetAnnotations(not_null(i_38));
        {
          l_38 = t;
          if(((k_38 != NULL) && (k_38 != l_38)))
            _fail(l_38);
          else
            k_38 = l_38;
        }
      }
      t = q_23;
      {
        ATerm n_38 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(k_38));
        {
          n_38 = t;
          if(((m_38 != NULL) && (m_38 != n_38)))
            _fail(n_38);
          else
            m_38 = n_38;
        }
        t = not_null(m_38);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm h_60 (ATerm))
{
  ATerm y_5 (ATerm t)
  {
    ATerm r_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(t_23);
      }
    else
      {
        t = r_23;
        {
          ATerm v_23 = t;
          int y_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(y_23);
            }
          else
            {
              t = v_23;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, y_5);
  t = h_60(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm s_38 = NULL;
  s_38 = t;
  t = SSL_table_create(not_null(s_38));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm w_38 = NULL;
  w_38 = t;
  {
    ATerm z_23;
    z_23 = t;
    {
      t = term_a_24;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_24, term_b_24, not_null(w_38));
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
  ATerm a_39 = NULL;
  a_39 = t;
  t = SSL_table_destroy(not_null(a_39));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_39 = NULL;
  e_39 = t;
  t = SSL_exit(not_null(e_39));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm y_57 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_74 (ATerm))
{
  ATerm h_39 (ATerm t)
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        t = Cons_2(t, w_74, h_39);
      }
    return(t);
  }
  t = h_39(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL;
  q_39 = t;
  n_39 :
  if(((ATgetType(q_39) == AT_LIST) && ((ATermList) q_39 != ATempty)))
    {
      o_39 = ATgetFirst((ATermList) q_39);
      p_39 = (ATerm) ATgetNext((ATermList) q_39);
      {
        ATerm t_39 = NULL;
        t = not_null(p_39);
        {
          ATerm g_24;
          g_24 = t;
          {
            ATerm u_39 = NULL,w_39 = NULL,y_39 = NULL;
            ATerm h_24;
            h_24 = t;
            {
              ATerm v_39 = NULL;
              t = i_0(t);
              {
                v_39 = t;
                if(((u_39 != NULL) && (u_39 != v_39)))
                  _fail(v_39);
                else
                  u_39 = v_39;
              }
            }
            t = h_24;
            {
              ATerm x_39 = NULL;
              t = not_null(o_39);
              {
                t = h_0(t);
                {
                  x_39 = t;
                  if(((w_39 != NULL) && (w_39 != x_39)))
                    _fail(x_39);
                  else
                    w_39 = x_39;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(u_39)), not_null(w_39));
                {
                  y_39 = t;
                  if(((t_39 != NULL) && (t_39 != y_39)))
                    _fail(y_39);
                  else
                    t_39 = y_39;
                }
              }
            }
          }
          t = g_24;
          {
            ATerm z_5 (ATerm t)
            {
              t = not_null(t_39);
              return(t);
            }
            t = reverse_acc_2(t, h_0, z_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) q_39 == ATempty))
        {
          {
            t = term_q_16;
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
  ATerm a_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, a_6);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm f_40 = NULL;
  f_40 = t;
  t = SSL_implode_string(not_null(f_40));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_75 (ATerm))
{
  ATerm i_40 (ATerm t)
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, i_40);
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        {
          t = Nil_0(t);
          t = l_75(t);
        }
      }
    return(t);
  }
  t = i_40(t);
  return(t);
}
ATerm concat_0 (ATerm t)
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
        ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
        l_40 = t;
        k_40 :
        if(((ATgetType(l_40) == AT_LIST) && ((ATermList) l_40 != ATempty)))
          {
            m_40 = ATgetFirst((ATermList) l_40);
            n_40 = (ATerm) ATgetNext((ATermList) l_40);
            {
              t = not_null(m_40);
              {
                ATerm d_6 (ATerm t)
                {
                  t = not_null(n_40);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, d_6);
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
  ATerm t_40 = NULL;
  t_40 = t;
  t = SSL_explode_string(not_null(t_40));
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
ATerm short_description_1 (ATerm t, ATerm x_57 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_49 (ATerm))
{
  ATerm b_41 = NULL,c_41 = NULL;
  b_41 = t;
  a_41 :
  if(match_cons(b_41, sym_Program_1))
    {
      c_41 = ATgetArgument(b_41, 0);
      {
        ATerm f_41 = NULL,h_41 = NULL;
        ATerm g_41 = NULL;
        t = SSLgetAnnotations(not_null(b_41));
        {
          g_41 = t;
          if(((f_41 != NULL) && (f_41 != g_41)))
            _fail(g_41);
          else
            f_41 = g_41;
        }
        {
          t = not_null(c_41);
          {
            ATerm j_41 = NULL;
            t = w_49(t);
            {
              h_41 = t;
              {
                ATerm k_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(h_41)), not_null(f_41));
                {
                  k_41 = t;
                  if(((j_41 != NULL) && (j_41 != k_41)))
                    _fail(k_41);
                  else
                    j_41 = k_41;
                }
                t = not_null(j_41);
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
  ATerm v_41 = NULL;
  ATerm e_6 (ATerm t)
  {
    ATerm j_6 (ATerm t)
    {
      ATerm w_41 = NULL;
      w_41 = t;
      if(((v_41 != NULL) && (v_41 != w_41)))
        _fail(w_41);
      else
        v_41 = w_41;
      return(t);
    }
    t = Program_1(t, j_6);
    return(t);
  }
  t = option_defined_1(t, e_6);
  {
    ATerm k_6 (ATerm t)
    {
      ATerm x_41 = NULL;
      ATerm y_41 = NULL;
      t = term_q_16;
      {
        ATerm l_6 (ATerm t)
        {
          t = not_null(v_41);
          return(t);
        }
        t = short_description_1(t, l_6);
        {
          t = concat_strings_0(t);
          {
            y_41 = t;
            if(((x_41 != NULL) && (x_41 != y_41)))
              _fail(y_41);
            else
              x_41 = y_41;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_17, (ATerm) ATinsert(ATempty, not_null(x_41)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, k_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_17, (ATerm) ATinsert(ATempty, term_q_24));
      {
        t = printnl_0(t);
        {
          t = term_z_24;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm m_6 (ATerm t)
                {
                  ATerm z_41 = NULL;
                  ATerm a_42 = NULL;
                  a_42 = t;
                  if(((z_41 != NULL) && (z_41 != a_42)))
                    _fail(a_42);
                  else
                    z_41 = a_42;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_f_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_41)), term_a_25));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, m_6);
                {
                  ATerm n_6 (ATerm t)
                  {
                    ATerm e_42 = NULL;
                    ATerm f_42 = NULL;
                    ATerm s_6 (ATerm t)
                    {
                      t = not_null(v_41);
                      return(t);
                    }
                    t = long_description_1(t, s_6);
                    {
                      f_42 = t;
                      if(((e_42 != NULL) && (e_42 != f_42)))
                        _fail(f_42);
                      else
                        e_42 = f_42;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_f_17, (ATerm) ATinsert(CheckATermList(not_null(e_42)), term_b_25));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, n_6);
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
ATerm printnl_0 (ATerm t)
{
  ATerm r_42 = NULL,x_42 = NULL,y_42 = NULL;
  r_42 = t;
  q_42 :
  if(match_cons(r_42, sym__2))
    {
      x_42 = ATgetArgument(r_42, 0);
      y_42 = ATgetArgument(r_42, 1);
      {
        ATerm c_25;
        c_25 = t;
        t = SSL_printnl(not_null(x_42), not_null(y_42));
        t = c_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_49 (ATerm))
{
  ATerm h_43 = NULL,i_43 = NULL;
  h_43 = t;
  g_43 :
  if(match_cons(h_43, sym_Undefined_1))
    {
      i_43 = ATgetArgument(h_43, 0);
      {
        ATerm l_43 = NULL,n_43 = NULL;
        ATerm m_43 = NULL;
        t = SSLgetAnnotations(not_null(h_43));
        {
          m_43 = t;
          if(((l_43 != NULL) && (l_43 != m_43)))
            _fail(m_43);
          else
            l_43 = m_43;
        }
        {
          t = not_null(i_43);
          {
            ATerm p_43 = NULL;
            t = x_49(t);
            {
              n_43 = t;
              {
                ATerm q_43 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(n_43)), not_null(l_43));
                {
                  q_43 = t;
                  if(((p_43 != NULL) && (p_43 != q_43)))
                    _fail(q_43);
                  else
                    p_43 = q_43;
                }
                t = not_null(p_43);
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
ATerm fetch_1 (ATerm t, ATerm f_75 (ATerm))
{
  ATerm e_44 (ATerm t)
  {
    ATerm d_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_75, _id);
        LocalPopChoice(n_25);
      }
    else
      {
        t = d_25;
        t = Cons_2(t, _id, e_44);
      }
    return(t);
  }
  t = e_44(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm c_59 (ATerm))
{
  t = fetch_1(t, c_59);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm p_44 = NULL;
  p_44 = t;
  k_44 :
  if(match_cons(p_44, sym_Help_0))
    {
      ATerm w_44 = NULL,y_44 = NULL;
      ATerm o_25;
      o_25 = t;
      {
        ATerm x_44 = NULL;
        t = SSLgetAnnotations(not_null(p_44));
        {
          x_44 = t;
          if(((w_44 != NULL) && (w_44 != x_44)))
            _fail(x_44);
          else
            w_44 = x_44;
        }
      }
      t = o_25;
      {
        ATerm z_44 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(w_44));
        {
          z_44 = t;
          if(((y_44 != NULL) && (y_44 != z_44)))
            _fail(z_44);
          else
            y_44 = z_44;
        }
        t = not_null(y_44);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm k_77 (ATerm))
{
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_77(t);
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL;
  f_45 = t;
  e_45 :
  if(match_cons(f_45, sym__2))
    {
      g_45 = ATgetArgument(f_45, 0);
      h_45 = ATgetArgument(f_45, 1);
      t = SSL_table_get(not_null(g_45), not_null(h_45));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL;
  s_45 = t;
  r_45 :
  if(match_cons(s_45, sym__3))
    {
      t_45 = ATgetArgument(s_45, 0);
      u_45 = ATgetArgument(s_45, 1);
      v_45 = ATgetArgument(s_45, 2);
      {
        ATerm r_25;
        r_25 = t;
        {
          ATerm z_45 = NULL;
          ATerm a_46 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_45), not_null(u_45));
          {
            ATerm t_25 = t;
            int u_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(u_25);
              }
            else
              {
                t = t_25;
                t = (ATerm) ATempty;
              }
            {
              a_46 = t;
              if(((z_45 != NULL) && (z_45 != a_46)))
                _fail(a_46);
              else
                z_45 = a_46;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_45), not_null(u_45), (ATerm) ATinsert(CheckATermList(not_null(z_45)), not_null(v_45)));
            t = table_put_0(t);
          }
        }
        t = r_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm c_58 (ATerm))
{
  ATerm g_46 = NULL;
  ATerm h_46 = NULL;
  t = term_q_16;
  {
    t = c_58(t);
    {
      h_46 = t;
      if(((g_46 != NULL) && (g_46 != h_46)))
        _fail(h_46);
      else
        g_46 = h_46;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_v_24, term_w_24, not_null(g_46));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL;
  n_46 = t;
  m_46 :
  if(match_string(n_46, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(n_46) == AT_LIST) && ((ATermList) n_46 != ATempty)))
        {
          o_46 = ATgetFirst((ATermList) n_46);
          p_46 = (ATerm) ATgetNext((ATermList) n_46);
          {
            ATerm s_46 = NULL;
            ATerm v_25;
            v_25 = t;
            {
              t = not_null(o_46);
              t = c_0(t);
            }
            t = v_25;
            {
              ATerm t_46 = NULL;
              t = term_q_16;
              {
                t = d_0(t);
                {
                  t_46 = t;
                  if(((s_46 != NULL) && (s_46 != t_46)))
                    _fail(t_46);
                  else
                    s_46 = t_46;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_46)), not_null(s_46));
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
  ATerm t_6 (ATerm t)
  {
    ATerm y_46 = NULL;
    y_46 = t;
    x_46 :
    if(!(match_string(y_46, "--help")))
      {
        if(!(match_string(y_46, "-h")))
          {
            if(!(match_string(y_46, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm u_6 (ATerm t)
  {
    t = term_w_25;
    return(t);
  }
  ATerm v_6 (ATerm t)
  {
    t = term_x_25;
    return(t);
  }
  t = Option_3(t, t_6, u_6, v_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_47 = NULL,d_47 = NULL,g_47 = NULL;
  b_47 = t;
  a_47 :
  if(((ATgetType(b_47) == AT_LIST) && ((ATermList) b_47 != ATempty)))
    {
      d_47 = ATgetFirst((ATermList) b_47);
      g_47 = (ATerm) ATgetNext((ATermList) b_47);
      t = (ATerm) ATinsert(CheckATermList(not_null(g_47)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_47)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm z_54 (ATerm), ATerm a_55 (ATerm))
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL;
  q_47 = t;
  p_47 :
  if(((ATgetType(q_47) == AT_LIST) && ((ATermList) q_47 != ATempty)))
    {
      r_47 = ATgetFirst((ATermList) q_47);
      s_47 = (ATerm) ATgetNext((ATermList) q_47);
      {
        ATerm w_47 = NULL,y_47 = NULL;
        ATerm x_47 = NULL;
        t = SSLgetAnnotations(not_null(q_47));
        {
          x_47 = t;
          if(((w_47 != NULL) && (w_47 != x_47)))
            _fail(x_47);
          else
            w_47 = x_47;
        }
        {
          t = not_null(r_47);
          {
            ATerm a_48 = NULL;
            t = z_54(t);
            {
              y_47 = t;
              {
                t = not_null(s_47);
                {
                  ATerm c_48 = NULL;
                  t = a_55(t);
                  {
                    a_48 = t;
                    {
                      ATerm d_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(a_48)), not_null(y_47)), not_null(w_47));
                      {
                        d_48 = t;
                        if(((c_48 != NULL) && (c_48 != d_48)))
                          _fail(d_48);
                        else
                          c_48 = d_48;
                      }
                      t = not_null(c_48);
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
  ATerm n_48 = NULL;
  n_48 = t;
  m_48 :
  if(((ATermList) n_48 == ATempty))
    {
      {
        ATerm p_48 = NULL,r_48 = NULL;
        ATerm y_25;
        y_25 = t;
        {
          ATerm q_48 = NULL;
          t = SSLgetAnnotations(not_null(n_48));
          {
            q_48 = t;
            if(((p_48 != NULL) && (p_48 != q_48)))
              _fail(q_48);
            else
              p_48 = q_48;
          }
        }
        t = y_25;
        {
          ATerm s_48 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(p_48));
          {
            s_48 = t;
            if(((r_48 != NULL) && (r_48 != s_48)))
              _fail(s_48);
            else
              r_48 = s_48;
          }
          t = not_null(r_48);
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
  ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL;
  y_48 = t;
  x_48 :
  if(match_cons(y_48, sym__2))
    {
      z_48 = ATgetArgument(y_48, 0);
      a_49 = ATgetArgument(y_48, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_22, not_null(z_48), not_null(a_49));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm a_58 (ATerm))
{
  ATerm z_25;
  z_25 = t;
  {
    ATerm w_6 (ATerm t)
    {
      t = term_e_26;
      t = a_58(t);
      return(t);
    }
    t = try_1(t, w_6);
  }
  t = z_25;
  {
    ATerm x_6 (ATerm t)
    {
      ATerm i_49 = NULL;
      ATerm f_26;
      f_26 = t;
      {
        ATerm g_49 = NULL;
        ATerm h_49 = NULL;
        h_49 = t;
        if(((g_49 != NULL) && (g_49 != h_49)))
          _fail(h_49);
        else
          g_49 = h_49;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_23, not_null(g_49));
          t = set_config_0(t);
        }
      }
      t = f_26;
      {
        ATerm j_49 = NULL;
        j_49 = t;
        if(((i_49 != NULL) && (i_49 != j_49)))
          _fail(j_49);
        else
          i_49 = j_49;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_49));
      }
      return(t);
    }
    ATerm y_6 (ATerm t)
    {
      ATerm g_26 = t;
      int n_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_26 = t;
          int q_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(q_26);
            }
          else
            {
              t = o_26;
              {
                t = a_58(t);
                t = Cons_2(t, _id, y_6);
              }
            }
          LocalPopChoice(n_26);
        }
      else
        {
          t = g_26;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, x_6, y_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL;
  ATerm r_26;
  r_26 = t;
  {
    ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL;
    s_49 = t;
    o_49 :
    if(match_cons(s_49, sym__3))
      {
        t_49 = ATgetArgument(s_49, 0);
        u_49 = ATgetArgument(s_49, 1);
        v_49 = ATgetArgument(s_49, 2);
        {
          if(((p_49 != NULL) && (p_49 != t_49)))
            _fail(t_49);
          else
            p_49 = t_49;
          {
            if(((q_49 != NULL) && (q_49 != u_49)))
              _fail(u_49);
            else
              q_49 = u_49;
            {
              if(((r_49 != NULL) && (r_49 != v_49)))
                _fail(v_49);
              else
                r_49 = v_49;
              t = SSL_table_put(not_null(p_49), not_null(q_49), not_null(r_49));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = r_26;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm z_57 (ATerm))
{
  ATerm a_50 = NULL;
  ATerm s_26;
  s_26 = t;
  {
    t = term_t_26;
    t = table_put_0(t);
  }
  t = s_26;
  {
    ATerm z_6 (ATerm t)
    {
      ATerm u_26 = t;
      int v_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_57(t);
          LocalPopChoice(v_26);
        }
      else
        {
          t = u_26;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, z_6);
    {
      ATerm h_7 (ATerm t)
      {
        ATerm w_26 = t;
        int a_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_e_19;
                t = exit_0(t);
              }
            }
            LocalPopChoice(a_27);
          }
        else
          {
            t = w_26;
            {
              ATerm m_7 (ATerm t)
              {
                ATerm n_7 (ATerm t)
                {
                  ATerm b_50 = NULL;
                  b_50 = t;
                  if(((a_50 != NULL) && (a_50 != b_50)))
                    _fail(b_50);
                  else
                    a_50 = b_50;
                  return(t);
                }
                t = Undefined_1(t, n_7);
                return(t);
              }
              t = option_defined_1(t, m_7);
              {
                ATerm f_27;
                f_27 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_50)), term_g_27));
                  t = printnl_0(t);
                }
                t = f_27;
                {
                  t = system_usage_0(t);
                  {
                    t = term_o_21;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, h_7);
      {
        ATerm h_27;
        h_27 = t;
        {
          t = term_v_24;
          t = table_destroy_0(t);
        }
        t = h_27;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm e_59 (ATerm), ATerm f_59 (ATerm), ATerm g_59 (ATerm), ATerm h_59 (ATerm))
{
  t = parse_options_1(t, e_59);
  {
    t = store_options_0(t);
    {
      t = g_59(t);
      {
        ATerm i_27 = t;
        int j_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, f_59);
            LocalPopChoice(j_27);
          }
        else
          {
            t = i_27;
            {
              ATerm m_27 = t;
              int n_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_59(t);
                  t = report_success_0(t);
                  LocalPopChoice(n_27);
                }
              else
                {
                  t = m_27;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm i_59 (ATerm), ATerm j_59 (ATerm))
{
  t = option_wrap_4(t, i_59, default_usage_0, _id, j_59);
  return(t);
}
ATerm term_to_dot_0 (ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    ATerm o_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_to_adot_options_0(t);
        LocalPopChoice(q_27);
      }
    else
      {
        t = o_27;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm p_7 (ATerm t)
  {
    ATerm q_7 (ATerm t)
    {
      ATerm r_7 (ATerm t)
      {
        t = xtc_io_transform_1(t, to_adot_0);
        {
          ATerm s_7 (ATerm t)
          {
            t = term_r_27;
            return(t);
          }
          ATerm y_7 (ATerm t)
          {
            ATerm e_50 = NULL;
            ATerm f_50 = NULL;
            t = term_t_27;
            {
              t = xtc_find_0(t);
              {
                f_50 = t;
                if(((e_50 != NULL) && (e_50 != f_50)))
                  _fail(f_50);
                else
                  e_50 = f_50;
              }
            }
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_50)), term_u_27);
            return(t);
          }
          t = xtc_transform_2(t, s_7, y_7);
          {
            ATerm z_7 (ATerm t)
            {
              t = term_x_27;
              return(t);
            }
            t = xtc_transform_1(t, z_7);
          }
        }
        return(t);
      }
      t = xtc_io_1(t, r_7);
      return(t);
    }
    t = xtc_temp_files_1(t, q_7);
    return(t);
  }
  t = option_wrap_2(t, o_7, p_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = term_to_dot_0(t);
  return(t);
}
