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
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_x_28;
ATerm term_r_27;
ATerm term_f_27;
ATerm term_u_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_q_25;
ATerm term_o_25;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_a_23;
ATerm term_y_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_i_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_a_20;
ATerm term_x_19;
ATerm term_q_19;
ATerm term_m_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_x_18;
ATerm term_u_18;
ATerm term_m_18;
ATerm term_b_18;
ATerm term_y_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_d_16;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_e_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_r_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_w_10;
ATerm term_t_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_l_10;
ATerm term_g_10;
ATerm term_v_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_h_9;
ATerm term_f_9;
ATerm term_x_8;
ATerm term_v_8;
ATerm term_q_8;
ATerm term_o_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
void init_constant_terms (void)
{
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym__2, term_l_8, term_m_8);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym__2, term_l_8, term_f_9);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_AttrId_2, term_o_12, term_r_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym__2, term_t_16, term_d_16);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_x_18);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_18);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym__2, term_e_20, term_o_16);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym__2, term_n_20, term_o_16);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym__2, term_s_20, term_o_16);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym__2, term_v_15, term_o_16);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym__2, term_t_15, term_o_16);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__2, term_t_23, term_u_23);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym__2, term_h_26, term_o_16);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym__3, term_t_23, term_u_23, (ATerm) ATempty);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Dot-pretty.pp", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_1 (ATerm, ATerm e_68 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm m_82 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm o_82 (ATerm));
ATerm set_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm i_82 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm m_68 (ATerm), ATerm n_68 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm d_68 (ATerm));
ATerm xtc_transform_file_2 (ATerm, ATerm l_0 (ATerm), ATerm o_0 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm f_68 (ATerm), ATerm g_68 (ATerm));
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
ATerm string_as_chars_1 (ATerm, ATerm q_65 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm EdgeToDot_0 (ATerm);
ATerm ListEdgeToDot_0 (ATerm);
ATerm graph_to_adot_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm NodeId_0 (ATerm);
ATerm address_0 (ATerm);
ATerm term_to_graph_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm s_71 (ATerm), ATerm t_71 (ATerm));
ATerm union_1 (ATerm, ATerm u_71 (ATerm));
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm f_72 (ATerm), ATerm g_72 (ATerm), ATerm h_72 (ATerm));
ATerm foldr_3 (ATerm, ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm p_70 (ATerm));
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm n_82 (ATerm));
ATerm term_to_tree_0 (ATerm);
ATerm to_adot_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm assert_1 (ATerm, ATerm u_67 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm xtc_io_transform_1 (ATerm, ATerm o_68 (ATerm));
ATerm rename_file_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm k_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm r_67 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm begin_scope_1 (ATerm, ATerm q_67 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm b_68 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm c_68 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm term_to_adot_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm l_70 (ATerm), ATerm m_70 (ATerm));
ATerm crush_2 (ATerm, ATerm d_72 (ATerm), ATerm e_72 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm j_82 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm w_60 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm n_58 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm m_58 (ATerm));
ATerm Program_1 (ATerm, ATerm l_50 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm z_66 (ATerm));
ATerm Undefined_1 (ATerm, ATerm m_50 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_76 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_59 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_76 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm t_47 (ATerm), ATerm u_47 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm y_66 (ATerm));
ATerm map_1 (ATerm, ATerm b_76 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm p_78 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm r_58 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm o_55 (ATerm), ATerm p_55 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm p_58 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_58 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm t_59 (ATerm), ATerm u_59 (ATerm), ATerm v_59 (ATerm), ATerm w_59 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm x_59 (ATerm), ATerm y_59 (ATerm));
ATerm term_to_dot_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_transform_1 (ATerm t, ATerm e_68 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, e_68, c_0);
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm d_0 = NULL;
  d_0 = t;
  t = SSL_table_keys(not_null(d_0));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm i_1 = NULL;
  i_1 = t;
  {
    t = table_keys_0(t);
    {
      ATerm m_0 (ATerm t)
      {
        ATerm b_2 = NULL;
        ATerm d_2 = NULL;
        b_2 = t;
        {
          ATerm h_2 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_1), not_null(b_2));
          {
            t = table_get_0(t);
            {
              h_2 = t;
              if(((d_2 != NULL) && (d_2 != h_2)))
                _fail(h_2);
              else
                d_2 = h_2;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_2), not_null(d_2));
        }
        return(t);
      }
      t = map_1(t, m_0);
    }
  }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm j_8;
  j_8 = t;
  {
    ATerm m_2 = NULL;
    ATerm n_2 = NULL;
    n_2 = t;
    if(((m_2 != NULL) && (m_2 != n_2)))
      _fail(n_2);
    else
      m_2 = n_2;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_8, not_null(m_2));
      t = printnl_0(t);
    }
  }
  t = j_8;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm t_2 = NULL;
  ATerm v_2 = NULL,w_2 = NULL;
  t_2 = t;
  {
    ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(t_2)));
    {
      t = table_get_0(t);
      {
        x_2 = t;
        r_2 :
        if(((ATgetType(x_2) == AT_LIST) && ((ATermList) x_2 != ATempty)))
          {
            y_2 = ATgetFirst((ATermList) x_2);
            b_3 = (ATerm) ATgetNext((ATermList) x_2);
            s_2 :
            if(match_cons(y_2, sym__2))
              {
                z_2 = ATgetArgument(y_2, 0);
                a_3 = ATgetArgument(y_2, 1);
                {
                  if(((v_2 != NULL) && (v_2 != z_2)))
                    _fail(z_2);
                  else
                    v_2 = z_2;
                  if(((w_2 != NULL) && (w_2 != a_3)))
                    _fail(a_3);
                  else
                    w_2 = a_3;
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
    t = not_null(w_2);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL;
  i_3 = t;
  h_3 :
  if(match_cons(i_3, sym__2))
    {
      j_3 = ATgetArgument(i_3, 0);
      k_3 = ATgetArgument(i_3, 1);
      {
        ATerm n_3 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(j_3)));
        {
          t = table_get_0(t);
          {
            ATerm n_0 (ATerm t)
            {
              ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL;
              o_3 = t;
              g_3 :
              if(match_cons(o_3, sym__2))
                {
                  p_3 = ATgetArgument(o_3, 0);
                  q_3 = ATgetArgument(o_3, 1);
                  {
                    if(((k_3 != NULL) && (k_3 != p_3)))
                      _fail(p_3);
                    else
                      k_3 = p_3;
                    if(((n_3 != NULL) && (n_3 != q_3)))
                      _fail(q_3);
                    else
                      n_3 = q_3;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, n_0);
          }
        }
        t = not_null(n_3);
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
ATerm if_verbose4_1 (ATerm t, ATerm m_82 (ATerm))
{
  ATerm r_0 (ATerm t)
  {
    ATerm p_8;
    p_8 = t;
    {
      ATerm u_3 = NULL;
      ATerm v_3 = NULL;
      t = term_q_8;
      {
        t = get_config_0(t);
        {
          v_3 = t;
          if(((u_3 != NULL) && (u_3 != v_3)))
            _fail(v_3);
          else
            u_3 = v_3;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_3), term_v_8);
        t = geq_0(t);
      }
    }
    t = p_8;
    t = m_82(t);
    return(t);
  }
  t = try_1(t, r_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm o_82 (ATerm))
{
  ATerm s_0 (ATerm t)
  {
    ATerm w_8;
    w_8 = t;
    {
      ATerm y_3 = NULL;
      ATerm z_3 = NULL;
      t = term_q_8;
      {
        t = get_config_0(t);
        {
          z_3 = t;
          if(((y_3 != NULL) && (y_3 != z_3)))
            _fail(z_3);
          else
            y_3 = z_3;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_3), term_x_8);
        t = geq_0(t);
      }
    }
    t = w_8;
    t = o_82(t);
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
  ATerm f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL;
  f_4 = t;
  e_4 :
  if(match_cons(f_4, sym__3))
    {
      g_4 = ATgetArgument(f_4, 0);
      h_4 = ATgetArgument(f_4, 1);
      i_4 = ATgetArgument(f_4, 2);
      {
        ATerm y_8;
        y_8 = t;
        {
          ATerm m_4 = NULL;
          ATerm n_4 = NULL,p_4 = NULL;
          ATerm o_4 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_4), not_null(h_4));
          {
            ATerm b_9 = t;
            int c_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(c_9);
              }
            else
              {
                t = b_9;
                t = (ATerm) ATempty;
              }
            {
              o_4 = t;
              if(((n_4 != NULL) && (n_4 != o_4)))
                _fail(o_4);
              else
                n_4 = o_4;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_4), not_null(i_4));
            {
              t = union_0(t);
              {
                p_4 = t;
                if(((m_4 != NULL) && (m_4 != p_4)))
                  _fail(p_4);
                else
                  m_4 = p_4;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_4), not_null(h_4), not_null(m_4));
            t = set_0(t);
          }
        }
        t = y_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm i_82 (ATerm))
{
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL;
  x_4 = t;
  w_4 :
  if(match_cons(x_4, sym__2))
    {
      y_4 = ATgetArgument(x_4, 0);
      z_4 = ATgetArgument(x_4, 1);
      {
        t = not_null(z_4);
        {
          ATerm t_0 (ATerm t)
          {
            ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL;
            c_5 = t;
            v_4 :
            if(match_cons(c_5, sym__2))
              {
                d_5 = ATgetArgument(c_5, 0);
                e_5 = ATgetArgument(c_5, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(y_4), not_null(d_5), not_null(e_5));
                  t = i_82(t);
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
  ATerm l_5 = NULL;
  ATerm n_5 = NULL;
  l_5 = t;
  {
    ATerm d_9 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATmakeAppl(sym_Imported_1, not_null(l_5)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_9;
      }
    {
      ATerm e_9;
      e_9 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_l_8, term_f_9, (ATerm) ATinsert(ATempty, not_null(l_5)));
        t = table_put_0(t);
      }
      t = e_9;
      {
        ATerm u_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            t = term_h_9;
            return(t);
          }
          t = debug_1(t, v_0);
          return(t);
        }
        t = if_verbose4_1(t, u_0);
        {
          ATerm i_9 = t;
          int j_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(j_9);
            }
          else
            {
              t = i_9;
              t = (ATerm) ATempty;
            }
          {
            ATerm w_0 (ATerm t)
            {
              ATerm x_0 (ATerm t)
              {
                t = term_k_9;
                return(t);
              }
              t = say_1(t, x_0);
              return(t);
            }
            t = if_verbose6_1(t, w_0);
            {
              ATerm o_5 = NULL;
              o_5 = t;
              if(((n_5 != NULL) && (n_5 != o_5)))
                _fail(o_5);
              else
                n_5 = o_5;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_l_8, not_null(n_5));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm y_0 (ATerm t)
                    {
                      ATerm z_0 (ATerm t)
                      {
                        t = term_l_9;
                        return(t);
                      }
                      t = say_1(t, z_0);
                      return(t);
                    }
                    t = if_verbose6_1(t, y_0);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_l_8, (ATerm)ATmakeAppl(sym_Imported_1, not_null(l_5)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm a_1 (ATerm t)
                          {
                            ATerm b_1 (ATerm t)
                            {
                              t = term_k_9;
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
  ATerm s_5 = NULL;
  s_5 = t;
  t = SSL_getenv(not_null(s_5));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm q_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_9;
      t = get_config_0(t);
      LocalPopChoice(r_9);
    }
  else
    {
      t = q_9;
      {
        ATerm d_10 = t;
        int f_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_g_10;
            t = getenv_0(t);
            LocalPopChoice(f_10);
          }
        else
          {
            t = d_10;
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
      t = term_l_10;
      return(t);
    }
    t = debug_1(t, d_1);
    return(t);
  }
  t = if_verbose5_1(t, c_1);
  {
    ATerm m_10;
    m_10 = t;
    {
      ATerm n_10 = t;
      int o_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_p_10;
          t = table_get_0(t);
          LocalPopChoice(o_10);
        }
      else
        {
          t = n_10;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = m_10;
    {
      ATerm e_1 (ATerm t)
      {
        ATerm f_1 (ATerm t)
        {
          t = term_q_10;
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
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_1 (ATerm t)
      {
        ATerm h_1 (ATerm t)
        {
          t = term_t_10;
          return(t);
        }
        t = debug_1(t, h_1);
        return(t);
      }
      t = if_verbose5_1(t, g_1);
      {
        t = xtc_load_0(t);
        {
          ATerm u_10 = t;
          int v_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(v_10);
            }
          else
            {
              t = u_10;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm j_1 (ATerm t)
            {
              ATerm k_1 (ATerm t)
              {
                t = term_t_10;
                return(t);
              }
              t = debug_1(t, k_1);
              return(t);
            }
            t = if_verbose5_1(t, j_1);
          }
        }
      }
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      {
        ATerm w_5 = NULL;
        ATerm x_5 = NULL;
        x_5 = t;
        if(((w_5 != NULL) && (w_5 != x_5)))
          _fail(x_5);
        else
          w_5 = x_5;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_11), not_null(w_5)), term_w_10);
          {
            t = error_0(t);
            {
              ATerm l_1 (ATerm t)
              {
                t = term_l_8;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm m_1 (ATerm t)
                    {
                      t = term_c_11;
                      return(t);
                    }
                    t = debug_1(t, m_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, l_1);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm m_68 (ATerm), ATerm n_68 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, m_68, n_68);
    t = read_from_0(t);
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL;
  b_6 = t;
  a_6 :
  if(match_cons(b_6, sym__2))
    {
      c_6 = ATgetArgument(b_6, 0);
      d_6 = ATgetArgument(b_6, 1);
      t = SSL_call(not_null(c_6), not_null(d_6));
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
ATerm xtc_command_1 (ATerm t, ATerm d_68 (ATerm))
{
  ATerm j_6 = NULL;
  ATerm f_11;
  f_11 = t;
  {
    ATerm k_6 = NULL;
    t = d_68(t);
    {
      t = xtc_find_warning_0(t);
      {
        k_6 = t;
        if(((j_6 != NULL) && (j_6 != k_6)))
          _fail(k_6);
        else
          j_6 = k_6;
      }
    }
  }
  t = f_11;
  {
    ATerm h_11;
    h_11 = t;
    {
      ATerm l_6 = NULL;
      ATerm m_6 = NULL;
      m_6 = t;
      if(((l_6 != NULL) && (l_6 != m_6)))
        _fail(m_6);
      else
        l_6 = m_6;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_6), not_null(l_6));
        t = call_0(t);
      }
    }
    t = h_11;
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm l_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm w_6 = NULL,x_6 = NULL;
  w_6 = t;
  v_6 :
  if(match_cons(w_6, sym_stdin_0))
    {
      ATerm y_6 = NULL;
      ATerm z_6 = NULL;
      ATerm a_7 = NULL;
      t = xtc_new_file_0(t);
      {
        z_6 = t;
        {
          if(((y_6 != NULL) && (y_6 != z_6)))
            _fail(z_6);
          else
            y_6 = z_6;
          {
            ATerm b_7 = NULL;
            t = o_0(t);
            {
              b_7 = t;
              if(((a_7 != NULL) && (a_7 != b_7)))
                _fail(b_7);
              else
                a_7 = b_7;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_7), (ATerm) ATinsert(ATinsert(ATempty, not_null(y_6)), term_i_11));
              {
                t = conc_0(t);
                t = xtc_command_1(t, l_0);
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_6));
    }
  else
    {
      if(match_cons(w_6, sym_FILE_1))
        {
          x_6 = ATgetArgument(w_6, 0);
          {
            ATerm d_7 = NULL;
            ATerm e_7 = NULL;
            t = not_null(x_6);
            {
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
                      t = (ATerm) ATmakeAppl(sym__2, not_null(f_7), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(d_7)), term_i_11), not_null(x_6)), term_j_11));
                      {
                        t = conc_0(t);
                        t = xtc_command_1(t, l_0);
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_7));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm xtc_transform_2 (ATerm t, ATerm f_68 (ATerm), ATerm g_68 (ATerm))
{
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_transform_file_2(t, f_68, g_68);
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      t = xtc_transform_term_2(t, f_68, g_68);
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
  ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL;
  q_7 = t;
  o_7 :
  if(((ATgetType(q_7) == AT_LIST) && ((ATermList) q_7 != ATempty)))
    {
      r_7 = ATgetFirst((ATermList) q_7);
      s_7 = (ATerm) ATgetNext((ATermList) q_7);
      p_7 :
      if(match_int(r_7, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(s_7)), term_q_11), term_n_11);
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
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
  y_7 = t;
  w_7 :
  if(((ATgetType(y_7) == AT_LIST) && ((ATermList) y_7 != ATempty)))
    {
      z_7 = ATgetFirst((ATermList) y_7);
      a_8 = (ATerm) ATgetNext((ATermList) y_7);
      x_7 :
      if(match_int(z_7, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(a_8)), term_n_11), term_n_11);
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
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
  g_8 = t;
  e_8 :
  if(((ATgetType(g_8) == AT_LIST) && ((ATermList) g_8 != ATempty)))
    {
      h_8 = ATgetFirst((ATermList) g_8);
      i_8 = (ATerm) ATgetNext((ATermList) g_8);
      f_8 :
      if(match_int(h_8, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(i_8)), term_r_11), term_n_11);
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
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      LocalPopChoice(u_11);
    }
  else
    {
      t = s_11;
      {
        ATerm v_11 = t;
        int w_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            LocalPopChoice(w_11);
          }
        else
          {
            t = v_11;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm z_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0(t);
      {
        ATerm n_1 (ATerm t)
        {
          t = Cons_2(t, _id, escape_chars_0);
          return(t);
        }
        t = Cons_2(t, _id, n_1);
      }
      LocalPopChoice(a_12);
    }
  else
    {
      t = z_11;
      {
        ATerm c_12 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            LocalPopChoice(d_12);
          }
        else
          {
            t = c_12;
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
  ATerm n_8 = NULL;
  n_8 = t;
  t = SSL_is_int(not_null(n_8));
  return(t);
}
ATerm quote_chars_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL;
  s_8 = t;
  r_8 :
  if(match_cons(s_8, sym__2))
    {
      t_8 = ATgetArgument(s_8, 0);
      u_8 = ATgetArgument(s_8, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(u_8)), not_null(t_8)), (ATerm) ATinsert(ATempty, not_null(t_8)));
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
  ATerm z_8 = NULL;
  ATerm a_9 = NULL;
  a_9 = t;
  if(((z_8 != NULL) && (z_8 != a_9)))
    _fail(a_9);
  else
    z_8 = a_9;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_r_11, not_null(z_8));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm q_65 (ATerm))
{
  t = explode_string_0(t);
  {
    t = q_65(t);
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
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
  n_9 = t;
  m_9 :
  if(match_cons(n_9, sym__2))
    {
      o_9 = ATgetArgument(n_9, 0);
      p_9 = ATgetArgument(n_9, 1);
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_9 = NULL,t_9 = NULL,z_9 = NULL,b_10 = NULL;
            ATerm g_12;
            g_12 = t;
            {
              ATerm u_9 = NULL;
              ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL;
              t = not_null(p_9);
              {
                u_9 = t;
                {
                  t = SSL_explode_term(not_null(u_9));
                  {
                    w_9 = t;
                    g_9 :
                    if(match_cons(w_9, sym__2))
                      {
                        x_9 = ATgetArgument(w_9, 0);
                        y_9 = ATgetArgument(w_9, 1);
                        {
                          if(((s_9 != NULL) && (s_9 != x_9)))
                            _fail(x_9);
                          else
                            s_9 = x_9;
                          if(((t_9 != NULL) && (t_9 != y_9)))
                            _fail(y_9);
                          else
                            t_9 = y_9;
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
            t = g_12;
            {
              ATerm n_12;
              n_12 = t;
              {
                ATerm a_10 = NULL;
                t = not_null(s_9);
                {
                  t = escape_0(t);
                  {
                    t = double_quote_0(t);
                    {
                      a_10 = t;
                      if(((z_9 != NULL) && (z_9 != a_10)))
                        _fail(a_10);
                      else
                        z_9 = a_10;
                    }
                  }
                }
              }
              t = n_12;
              {
                ATerm e_10 = NULL;
                t = not_null(t_9);
                {
                  ATerm o_1 (ATerm t)
                  {
                    ATerm c_10 = NULL;
                    c_10 = t;
                    t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_9)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(c_10)))));
                    return(t);
                  }
                  t = map_1(t, o_1);
                  {
                    e_10 = t;
                    if(((b_10 != NULL) && (b_10 != e_10)))
                      _fail(e_10);
                    else
                      b_10 = e_10;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(b_10)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_9)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_o_12, not_null(z_9)))))));
              }
            }
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            {
              ATerm h_10 = NULL;
              ATerm i_10 = NULL,k_10 = NULL;
              t = not_null(p_9);
              {
                t = is_int_0(t);
                {
                  ATerm j_10 = NULL;
                  t = not_null(p_9);
                  {
                    t = int_to_string_0(t);
                    {
                      t = escape_0(t);
                      {
                        j_10 = t;
                        if(((i_10 != NULL) && (i_10 != j_10)))
                          _fail(j_10);
                        else
                          i_10 = j_10;
                      }
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_12), not_null(i_10)), term_p_12);
                    {
                      t = concat_strings_0(t);
                      {
                        k_10 = t;
                        if(((h_10 != NULL) && (h_10 != k_10)))
                          _fail(k_10);
                        else
                          h_10 = k_10;
                      }
                    }
                  }
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_9)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_o_12, not_null(h_10)))))));
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
  ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL;
  y_10 = t;
  x_10 :
  if(match_cons(y_10, sym__2))
    {
      z_10 = ATgetArgument(y_10, 0);
      a_11 = ATgetArgument(y_10, 1);
      {
        ATerm d_11 = NULL;
        ATerm q_12;
        q_12 = t;
        {
          t = not_null(a_11);
          t = is_list_0(t);
        }
        t = q_12;
        {
          ATerm g_11 = NULL;
          t = not_null(a_11);
          {
            ATerm p_1 (ATerm t)
            {
              ATerm e_11 = NULL;
              e_11 = t;
              t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_10)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(e_11)))));
              return(t);
            }
            t = map_1(t, p_1);
            {
              g_11 = t;
              if(((d_11 != NULL) && (d_11 != g_11)))
                _fail(g_11);
              else
                d_11 = g_11;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(d_11)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_10)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_w_12)))));
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
  ATerm m_11 = NULL;
  ATerm o_11 = NULL;
  m_11 = t;
  {
    ATerm p_11 = NULL;
    t = not_null(m_11);
    {
      ATerm q_1 (ATerm t)
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ListEdgeToDot_0(t);
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
            t = EdgeToDot_0(t);
          }
        return(t);
      }
      t = map_1(t, q_1);
      {
        t = concat_0(t);
        {
          p_11 = t;
          if(((o_11 != NULL) && (o_11 != p_11)))
            _fail(p_11);
          else
            o_11 = p_11;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_z_12, not_null(o_11));
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm t_11 = NULL;
  t_11 = t;
  t = SSL_int_to_string(not_null(t_11));
  return(t);
}
ATerm NodeId_0 (ATerm t)
{
  ATerm x_11 = NULL;
  ATerm y_11 = NULL;
  t = int_to_string_0(t);
  {
    y_11 = t;
    if(((x_11 != NULL) && (x_11 != y_11)))
      _fail(y_11);
    else
      x_11 = y_11;
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, term_e_13, not_null(x_11));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm address_0 (ATerm t)
{
  ATerm b_12 = NULL;
  b_12 = t;
  t = SSL_address(not_null(b_12));
  return(t);
}
ATerm term_to_graph_0 (ATerm t)
{
  ATerm h_12 = NULL,j_12 = NULL,l_12 = NULL;
  ATerm f_13;
  f_13 = t;
  {
    ATerm i_12 = NULL;
    t = address_0(t);
    {
      t = NodeId_0(t);
      {
        i_12 = t;
        if(((h_12 != NULL) && (h_12 != i_12)))
          _fail(i_12);
        else
          h_12 = i_12;
      }
    }
  }
  t = f_13;
  {
    ATerm h_13;
    h_13 = t;
    {
      ATerm k_12 = NULL;
      ATerm i_13 = t;
      int j_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_1 (ATerm t)
          {
            t = address_0(t);
            t = NodeId_0(t);
            return(t);
          }
          t = map_1(t, r_1);
          LocalPopChoice(j_13);
        }
      else
        {
          t = i_13;
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
        k_12 = t;
        if(((j_12 != NULL) && (j_12 != k_12)))
          _fail(k_12);
        else
          j_12 = k_12;
      }
    }
    t = h_13;
    {
      ATerm m_12 = NULL;
      ATerm k_13 = t;
      int p_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = foldr_3(t, t_1, union_0, term_to_graph_0);
          LocalPopChoice(p_13);
        }
      else
        {
          t = k_13;
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
        m_12 = t;
        if(((l_12 != NULL) && (l_12 != m_12)))
          _fail(m_12);
        else
          l_12 = m_12;
      }
      t = (ATerm) ATinsert(CheckATermList(not_null(l_12)), (ATerm) ATmakeAppl(sym__2, not_null(h_12), not_null(j_12)));
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym__2))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      if(((u_12 != NULL) && (u_12 != v_12)))
        _fail(v_12);
      else
        u_12 = v_12;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm s_71 (ATerm), ATerm t_71 (ATerm))
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
  b_13 = t;
  a_13 :
  if(((ATgetType(b_13) == AT_LIST) && ((ATermList) b_13 != ATempty)))
    {
      c_13 = ATgetFirst((ATermList) b_13);
      d_13 = (ATerm) ATgetNext((ATermList) b_13);
      {
        t = t_71(t);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm g_13 = NULL;
            g_13 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_13), not_null(g_13));
              t = s_71(t);
            }
            return(t);
          }
          t = fetch_1(t, v_1);
        }
        t = not_null(d_13);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm u_71 (ATerm))
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
  m_13 = t;
  l_13 :
  if(match_cons(m_13, sym__2))
    {
      n_13 = ATgetArgument(m_13, 0);
      o_13 = ATgetArgument(m_13, 1);
      {
        t = not_null(n_13);
        {
          ATerm s_13 (ATerm t)
          {
            ATerm q_13 = t;
            int r_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(o_13);
                LocalPopChoice(r_13);
              }
            else
              {
                t = q_13;
                {
                  ATerm t_13 = t;
                  int u_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_1 (ATerm t)
                      {
                        t = not_null(o_13);
                        return(t);
                      }
                      t = HdMember_p__2(t, u_71, w_1);
                      t = s_13(t);
                      LocalPopChoice(u_13);
                    }
                  else
                    {
                      t = t_13;
                      t = Cons_2(t, _id, s_13);
                    }
                }
              }
            return(t);
          }
          t = s_13(t);
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
ATerm crush_3 (ATerm t, ATerm f_72 (ATerm), ATerm g_72 (ATerm), ATerm h_72 (ATerm))
{
  ATerm x_13 = NULL;
  ATerm z_13 = NULL;
  x_13 = t;
  {
    ATerm a_14 = NULL;
    ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL;
    t = not_null(x_13);
    {
      a_14 = t;
      {
        t = SSL_explode_term(not_null(a_14));
        {
          c_14 = t;
          w_13 :
          if(match_cons(c_14, sym__2))
            {
              d_14 = ATgetArgument(c_14, 0);
              e_14 = ATgetArgument(c_14, 1);
              if(((z_13 != NULL) && (z_13 != e_14)))
                _fail(e_14);
              else
                z_13 = e_14;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_13);
      t = foldr_3(t, f_72, g_72, h_72);
    }
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm p_70 (ATerm))
{
  ATerm v_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_70(t);
      LocalPopChoice(y_13);
    }
  else
    {
      t = v_13;
      {
        ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
        m_14 = t;
        l_14 :
        if(((ATgetType(m_14) == AT_LIST) && ((ATermList) m_14 != ATempty)))
          {
            n_14 = ATgetFirst((ATermList) m_14);
            o_14 = (ATerm) ATgetNext((ATermList) m_14);
            {
              ATerm r_14 = NULL,t_14 = NULL;
              ATerm b_14;
              b_14 = t;
              {
                ATerm s_14 = NULL;
                t = not_null(n_14);
                {
                  t = p_70(t);
                  {
                    s_14 = t;
                    if(((r_14 != NULL) && (r_14 != s_14)))
                      _fail(s_14);
                    else
                      r_14 = s_14;
                  }
                }
              }
              t = b_14;
              {
                ATerm u_14 = NULL;
                t = not_null(o_14);
                {
                  t = foldr_3(t, n_70, o_70, p_70);
                  {
                    u_14 = t;
                    if(((t_14 != NULL) && (t_14 != u_14)))
                      _fail(u_14);
                    else
                      t_14 = u_14;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_14), not_null(t_14));
                  t = o_70(t);
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
  ATerm f_15 = NULL;
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL;
  f_15 = t;
  {
    ATerm k_15 = NULL;
    ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL;
    t = not_null(f_15);
    {
      k_15 = t;
      {
        t = SSL_explode_term(not_null(k_15));
        {
          m_15 = t;
          b_15 :
          if(match_cons(m_15, sym__2))
            {
              n_15 = ATgetArgument(m_15, 0);
              o_15 = ATgetArgument(m_15, 1);
              c_15 :
              if(match_string(n_15, ""))
                {
                  d_15 :
                  if(((ATgetType(o_15) == AT_LIST) && ((ATermList) o_15 != ATempty)))
                    {
                      p_15 = ATgetFirst((ATermList) o_15);
                      q_15 = (ATerm) ATgetNext((ATermList) o_15);
                      e_15 :
                      if(((ATgetType(q_15) == AT_LIST) && ((ATermList) q_15 != ATempty)))
                        {
                          r_15 = ATgetFirst((ATermList) q_15);
                          s_15 = (ATerm) ATgetNext((ATermList) q_15);
                          {
                            if(((h_15 != NULL) && (h_15 != p_15)))
                              _fail(p_15);
                            else
                              h_15 = p_15;
                            {
                              if(((j_15 != NULL) && (j_15 != r_15)))
                                _fail(r_15);
                              else
                                j_15 = r_15;
                              if(((i_15 != NULL) && (i_15 != s_15)))
                                _fail(s_15);
                              else
                                i_15 = s_15;
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
    t = not_null(j_15);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm c_16 = NULL;
  ATerm e_16 = NULL,f_16 = NULL;
  c_16 = t;
  {
    ATerm g_16 = NULL;
    ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
    t = not_null(c_16);
    {
      g_16 = t;
      {
        t = SSL_explode_term(not_null(g_16));
        {
          i_16 = t;
          z_15 :
          if(match_cons(i_16, sym__2))
            {
              j_16 = ATgetArgument(i_16, 0);
              k_16 = ATgetArgument(i_16, 1);
              a_16 :
              if(match_string(j_16, ""))
                {
                  b_16 :
                  if(((ATgetType(k_16) == AT_LIST) && ((ATermList) k_16 != ATempty)))
                    {
                      l_16 = ATgetFirst((ATermList) k_16);
                      m_16 = (ATerm) ATgetNext((ATermList) k_16);
                      {
                        if(((f_16 != NULL) && (f_16 != l_16)))
                          _fail(l_16);
                        else
                          f_16 = l_16;
                        if(((e_16 != NULL) && (e_16 != m_16)))
                          _fail(m_16);
                        else
                          e_16 = m_16;
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
    t = not_null(f_16);
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm n_82 (ATerm))
{
  ATerm x_1 (ATerm t)
  {
    ATerm f_14;
    f_14 = t;
    {
      ATerm r_16 = NULL;
      ATerm s_16 = NULL;
      t = term_q_8;
      {
        t = get_config_0(t);
        {
          s_16 = t;
          if(((r_16 != NULL) && (r_16 != s_16)))
            _fail(s_16);
          else
            r_16 = s_16;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_16), term_g_14);
        t = geq_0(t);
      }
    }
    t = f_14;
    t = n_82(t);
    return(t);
  }
  t = try_1(t, x_1);
  return(t);
}
ATerm term_to_tree_0 (ATerm t)
{
  ATerm c_17 = NULL,e_17 = NULL;
  ATerm y_1 (ATerm t)
  {
    ATerm z_1 (ATerm t)
    {
      t = term_h_14;
      return(t);
    }
    t = debug_1(t, z_1);
    return(t);
  }
  t = if_verbose5_1(t, y_1);
  {
    ATerm i_14;
    i_14 = t;
    {
      ATerm d_17 = NULL;
      t = new_0(t);
      {
        d_17 = t;
        if(((c_17 != NULL) && (c_17 != d_17)))
          _fail(d_17);
        else
          c_17 = d_17;
      }
    }
    t = i_14;
    {
      ATerm f_17 = NULL;
      f_17 = t;
      if(((e_17 != NULL) && (e_17 != f_17)))
        _fail(f_17);
      else
        e_17 = f_17;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), not_null(e_17));
        {
          ATerm g_18 (ATerm t)
          {
            ATerm o_17 = NULL,q_17 = NULL;
            ATerm a_2 (ATerm t)
            {
              ATerm j_14 = t;
              int k_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_2 (ATerm t)
                  {
                    ATerm g_17 = NULL,i_17 = NULL;
                    ATerm p_14;
                    p_14 = t;
                    {
                      ATerm h_17 = NULL;
                      t = new_0(t);
                      {
                        h_17 = t;
                        if(((g_17 != NULL) && (g_17 != h_17)))
                          _fail(h_17);
                        else
                          g_17 = h_17;
                      }
                    }
                    t = p_14;
                    {
                      ATerm j_17 = NULL;
                      j_17 = t;
                      if(((i_17 != NULL) && (i_17 != j_17)))
                        _fail(j_17);
                      else
                        i_17 = j_17;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(g_17), not_null(i_17));
                    }
                    return(t);
                  }
                  t = map_1(t, c_2);
                  LocalPopChoice(k_14);
                }
              else
                {
                  t = j_14;
                  {
                    ATerm e_2 (ATerm t)
                    {
                      ATerm k_17 = NULL,m_17 = NULL;
                      ATerm q_14;
                      q_14 = t;
                      {
                        ATerm l_17 = NULL;
                        t = new_0(t);
                        {
                          l_17 = t;
                          if(((k_17 != NULL) && (k_17 != l_17)))
                            _fail(l_17);
                          else
                            k_17 = l_17;
                        }
                      }
                      t = q_14;
                      {
                        ATerm n_17 = NULL;
                        n_17 = t;
                        if(((m_17 != NULL) && (m_17 != n_17)))
                          _fail(n_17);
                        else
                          m_17 = n_17;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_17), not_null(m_17));
                      }
                      return(t);
                    }
                    t = _all(t, e_2);
                  }
                }
              return(t);
            }
            t = _2(t, _id, a_2);
            {
              ATerm v_14;
              v_14 = t;
              {
                ATerm p_17 = NULL;
                ATerm f_2 (ATerm t)
                {
                  ATerm w_14 = t;
                  int x_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = map_1(t, Fst_0);
                      LocalPopChoice(x_14);
                    }
                  else
                    {
                      t = w_14;
                      t = _all(t, Fst_0);
                    }
                  return(t);
                }
                t = _2(t, _id, f_2);
                {
                  p_17 = t;
                  if(((o_17 != NULL) && (o_17 != p_17)))
                    _fail(p_17);
                  else
                    o_17 = p_17;
                }
              }
              t = v_14;
              {
                ATerm d_18 = NULL;
                t = Snd_0(t);
                {
                  ATerm y_14 = t;
                  int z_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_2 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = foldr_3(t, g_2, union_0, g_18);
                      LocalPopChoice(z_14);
                    }
                  else
                    {
                      t = y_14;
                      {
                        ATerm i_2 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        t = crush_3(t, i_2, union_0, g_18);
                      }
                    }
                  {
                    d_18 = t;
                    if(((q_17 != NULL) && (q_17 != d_18)))
                      _fail(d_18);
                    else
                      q_17 = d_18;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(q_17)), not_null(o_17));
              }
            }
            return(t);
          }
          t = g_18(t);
        }
      }
    }
  }
  return(t);
}
ATerm to_adot_0 (ATerm t)
{
  ATerm a_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_15;
      l_15 = t;
      {
        t = term_t_15;
        t = get_config_0(t);
      }
      t = l_15;
      t = term_to_tree_0(t);
      LocalPopChoice(g_15);
    }
  else
    {
      t = a_15;
      {
        ATerm u_15;
        u_15 = t;
        {
          t = term_v_15;
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
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
  p_18 = t;
  o_18 :
  if(match_cons(p_18, sym__2))
    {
      q_18 = ATgetArgument(p_18, 0);
      r_18 = ATgetArgument(p_18, 1);
      t = SSL_WriteToTextFile(not_null(q_18), not_null(r_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm u_67 (ATerm))
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
  a_19 = t;
  z_18 :
  if(match_cons(a_19, sym__2))
    {
      b_19 = ATgetArgument(a_19, 0);
      c_19 = ATgetArgument(a_19, 1);
      {
        ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL;
        ATerm w_15;
        w_15 = t;
        {
          ATerm i_19 = NULL;
          ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
          t = u_67(t);
          {
            i_19 = t;
            {
              if(((f_19 != NULL) && (f_19 != i_19)))
                _fail(i_19);
              else
                f_19 = i_19;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(f_19), not_null(b_19), not_null(c_19));
                {
                  t = table_push_0(t);
                  {
                    ATerm x_15 = t;
                    int y_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(f_19), term_d_16);
                        t = table_get_0(t);
                        LocalPopChoice(y_15);
                      }
                    else
                      {
                        t = x_15;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      j_19 = t;
                      y_18 :
                      if(((ATgetType(j_19) == AT_LIST) && ((ATermList) j_19 != ATempty)))
                        {
                          k_19 = ATgetFirst((ATermList) j_19);
                          l_19 = (ATerm) ATgetNext((ATermList) j_19);
                          {
                            if(((g_19 != NULL) && (g_19 != k_19)))
                              _fail(k_19);
                            else
                              g_19 = k_19;
                            {
                              if(((h_19 != NULL) && (h_19 != l_19)))
                                _fail(l_19);
                              else
                                h_19 = l_19;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(f_19), term_d_16, (ATerm) ATinsert(CheckATermList(not_null(h_19)), (ATerm) ATinsert(CheckATermList(not_null(g_19)), not_null(b_19))));
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
        t = w_15;
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
  ATerm r_19 = NULL;
  ATerm t_19 = NULL;
  r_19 = t;
  {
    ATerm h_16;
    h_16 = t;
    {
      ATerm u_19 = NULL;
      t = term_n_16;
      {
        u_19 = t;
        if(((t_19 != NULL) && (t_19 != u_19)))
          _fail(u_19);
        else
          t_19 = u_19;
      }
    }
    t = h_16;
    {
      t = SSL_open_file(not_null(r_19), not_null(t_19));
      t = SSL_close_file(not_null(r_19));
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
  ATerm y_19 = NULL;
  ATerm z_19 = NULL;
  t = term_o_16;
  {
    t = new_0(t);
    {
      z_19 = t;
      if(((y_19 != NULL) && (y_19 != z_19)))
        _fail(z_19);
      else
        y_19 = z_19;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_19), term_p_16);
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
  ATerm d_20 = NULL;
  t = new_file_0(t);
  {
    d_20 = t;
    {
      ATerm q_16;
      q_16 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_20), term_o_16);
        {
          ATerm k_2 (ATerm t)
          {
            t = term_t_16;
            return(t);
          }
          t = assert_1(t, k_2);
        }
      }
      t = q_16;
    }
  }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm i_20 = NULL;
  ATerm k_20 = NULL;
  i_20 = t;
  {
    ATerm l_20 = NULL;
    t = xtc_new_file_0(t);
    {
      l_20 = t;
      {
        if(((k_20 != NULL) && (k_20 != l_20)))
          _fail(l_20);
        else
          k_20 = l_20;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_20), not_null(i_20));
          t = WriteToTextFile_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_20));
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm p_20 = NULL;
  p_20 = t;
  t = SSL_ReadFromFile(not_null(p_20));
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL;
  e_21 = t;
  d_21 :
  if(match_cons(e_21, sym_stdin_0))
    {
      ATerm g_21 = NULL;
      ATerm h_21 = NULL;
      t = term_u_16;
      {
        t = ReadFromFile_0(t);
        {
          h_21 = t;
          if(((g_21 != NULL) && (g_21 != h_21)))
            _fail(h_21);
          else
            g_21 = h_21;
        }
      }
      t = not_null(g_21);
    }
  else
    {
      if(match_cons(e_21, sym_FILE_1))
        {
          f_21 = ATgetArgument(e_21, 0);
          {
            ATerm j_21 = NULL;
            ATerm k_21 = NULL;
            t = not_null(f_21);
            {
              t = ReadFromFile_0(t);
              {
                k_21 = t;
                if(((j_21 != NULL) && (j_21 != k_21)))
                  _fail(k_21);
                else
                  j_21 = k_21;
              }
            }
            t = not_null(j_21);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm o_68 (ATerm))
{
  t = read_from_0(t);
  {
    t = o_68(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
  v_21 = t;
  u_21 :
  if(match_cons(v_21, sym__2))
    {
      w_21 = ATgetArgument(v_21, 0);
      x_21 = ATgetArgument(v_21, 1);
      t = SSL_rename(not_null(w_21), not_null(x_21));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm f_22 = NULL;
  f_22 = t;
  e_22 :
  if(match_cons(f_22, sym_stdout_0))
    {
      ATerm h_22 = NULL,j_22 = NULL;
      ATerm v_16;
      v_16 = t;
      {
        ATerm i_22 = NULL;
        t = SSLgetAnnotations(not_null(f_22));
        {
          i_22 = t;
          if(((h_22 != NULL) && (h_22 != i_22)))
            _fail(i_22);
          else
            h_22 = i_22;
        }
      }
      t = v_16;
      {
        ATerm k_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(h_22));
        {
          k_22 = t;
          if(((j_22 != NULL) && (j_22 != k_22)))
            _fail(k_22);
          else
            j_22 = k_22;
        }
        t = not_null(j_22);
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
  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL;
  q_22 = t;
  p_22 :
  if(match_cons(q_22, sym__2))
    {
      r_22 = ATgetArgument(q_22, 0);
      s_22 = ATgetArgument(q_22, 1);
      t = SSL_copy(not_null(r_22), not_null(s_22));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm c_23 = NULL,d_23 = NULL;
  c_23 = t;
  b_23 :
  if(match_cons(c_23, sym_FILE_1))
    {
      d_23 = ATgetArgument(c_23, 0);
      {
        ATerm w_16 = t;
        int x_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_23 = NULL;
            t = k_0(t);
            {
              f_23 = t;
              z_22 :
              if(match_cons(f_23, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_23), term_y_16);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(d_23);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_y_16;
            LocalPopChoice(x_16);
          }
        else
          {
            t = w_16;
            {
              ATerm h_23 = NULL;
              ATerm i_23 = NULL;
              t = k_0(t);
              {
                i_23 = t;
                {
                  if(((h_23 != NULL) && (h_23 != i_23)))
                    _fail(i_23);
                  else
                    h_23 = i_23;
                  {
                    ATerm z_16 = t;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = z_16;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(d_23), not_null(h_23));
                      t = rename_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_23));
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
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
  p_23 = t;
  o_23 :
  if(((ATgetType(p_23) == AT_LIST) && ((ATermList) p_23 != ATempty)))
    {
      q_23 = ATgetFirst((ATermList) p_23);
      r_23 = (ATerm) ATgetNext((ATermList) p_23);
      t = not_null(r_23);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,h_24 = NULL;
  e_24 = t;
  d_24 :
  if(match_cons(e_24, sym__2))
    {
      f_24 = ATgetArgument(e_24, 0);
      h_24 = ATgetArgument(e_24, 1);
      {
        ATerm a_17;
        a_17 = t;
        {
          ATerm k_24 = NULL;
          ATerm l_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_24), not_null(h_24));
          {
            ATerm b_17 = t;
            int r_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(r_17);
              }
            else
              {
                t = b_17;
                t = (ATerm) ATempty;
              }
            {
              l_24 = t;
              if(((k_24 != NULL) && (k_24 != l_24)))
                _fail(l_24);
              else
                k_24 = l_24;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_24), not_null(h_24), not_null(k_24));
            t = table_put_0(t);
          }
        }
        t = a_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm r_67 (ATerm))
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL;
  ATerm s_17;
  s_17 = t;
  {
    ATerm v_24 = NULL;
    ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL;
    t = r_67(t);
    {
      v_24 = t;
      {
        if(((u_24 != NULL) && (u_24 != v_24)))
          _fail(v_24);
        else
          u_24 = v_24;
        {
          ATerm t_17 = t;
          int u_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_24), term_d_16);
              t = table_get_0(t);
              LocalPopChoice(u_17);
            }
          else
            {
              t = t_17;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            w_24 = t;
            r_24 :
            if(((ATgetType(w_24) == AT_LIST) && ((ATermList) w_24 != ATempty)))
              {
                x_24 = ATgetFirst((ATermList) w_24);
                y_24 = (ATerm) ATgetNext((ATermList) w_24);
                {
                  if(((t_24 != NULL) && (t_24 != x_24)))
                    _fail(x_24);
                  else
                    t_24 = x_24;
                  {
                    if(((s_24 != NULL) && (s_24 != y_24)))
                      _fail(y_24);
                    else
                      s_24 = y_24;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(u_24), term_d_16, not_null(s_24));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(t_24);
                          {
                            ATerm l_2 (ATerm t)
                            {
                              ATerm z_24 = NULL;
                              z_24 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_24), not_null(z_24));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, l_2);
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
  ATerm f_25 = NULL;
  f_25 = t;
  t = SSL_remove(not_null(f_25));
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm q_67 (ATerm))
{
  ATerm k_25 = NULL;
  ATerm v_17;
  v_17 = t;
  {
    ATerm l_25 = NULL;
    ATerm m_25 = NULL;
    t = q_67(t);
    {
      l_25 = t;
      {
        if(((k_25 != NULL) && (k_25 != l_25)))
          _fail(l_25);
        else
          k_25 = l_25;
        {
          ATerm n_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_25), term_d_16);
          {
            ATerm w_17 = t;
            int x_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_17);
              }
            else
              {
                t = w_17;
                t = (ATerm) ATempty;
              }
            {
              n_25 = t;
              if(((m_25 != NULL) && (m_25 != n_25)))
                _fail(n_25);
              else
                m_25 = n_25;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_25), term_d_16, (ATerm) ATinsert(CheckATermList(not_null(m_25)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = v_17;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm b_68 (ATerm))
{
  ATerm s_25 = NULL,t_25 = NULL;
  ATerm o_2 (ATerm t)
  {
    t = term_t_16;
    return(t);
  }
  t = begin_scope_1(t, o_2);
  {
    t = b_68(t);
    {
      ATerm y_17;
      y_17 = t;
      {
        ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
        ATerm z_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_b_18;
            t = table_get_0(t);
            LocalPopChoice(a_18);
          }
        else
          {
            t = z_17;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          u_25 = t;
          r_25 :
          if(((ATgetType(u_25) == AT_LIST) && ((ATermList) u_25 != ATempty)))
            {
              v_25 = ATgetFirst((ATermList) u_25);
              w_25 = (ATerm) ATgetNext((ATermList) u_25);
              {
                if(((t_25 != NULL) && (t_25 != v_25)))
                  _fail(v_25);
                else
                  t_25 = v_25;
                {
                  if(((s_25 != NULL) && (s_25 != w_25)))
                    _fail(w_25);
                  else
                    s_25 = w_25;
                  {
                    t = not_null(t_25);
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
      t = y_17;
      {
        ATerm q_2 (ATerm t)
        {
          t = term_t_16;
          return(t);
        }
        t = end_scope_1(t, q_2);
      }
    }
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm c_68 (ATerm))
{
  ATerm u_2 (ATerm t)
  {
    ATerm c_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_25 = NULL;
        ATerm a_26 = NULL;
        t = term_j_11;
        {
          t = get_config_0(t);
          {
            a_26 = t;
            if(((z_25 != NULL) && (z_25 != a_26)))
              _fail(a_26);
            else
              z_25 = a_26;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_25));
        LocalPopChoice(e_18);
      }
    else
      {
        t = c_18;
        t = term_u_16;
      }
    {
      t = c_68(t);
      {
        ATerm c_3 (ATerm t)
        {
          ATerm f_18 = t;
          int h_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_i_11;
              t = get_config_0(t);
              LocalPopChoice(h_18);
            }
          else
            {
              t = f_18;
              t = term_y_16;
            }
          return(t);
        }
        t = rename_to_1(t, c_3);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, u_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  t = SSL_string_to_int(not_null(g_26));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL;
  o_26 = t;
  m_26 :
  if(match_string(o_26, "register-usage-info"))
    {
      t = register_usage_1(t, j_0);
    }
  else
    {
      if(((ATgetType(o_26) == AT_LIST) && ((ATermList) o_26 != ATempty)))
        {
          p_26 = ATgetFirst((ATermList) o_26);
          q_26 = (ATerm) ATgetNext((ATermList) o_26);
          n_26 :
          if(((ATgetType(q_26) == AT_LIST) && ((ATermList) q_26 != ATempty)))
            {
              r_26 = ATgetFirst((ATermList) q_26);
              s_26 = (ATerm) ATgetNext((ATermList) q_26);
              {
                ATerm w_26 = NULL;
                ATerm i_18;
                i_18 = t;
                {
                  t = not_null(p_26);
                  t = h_0(t);
                }
                t = i_18;
                {
                  ATerm x_26 = NULL;
                  t = not_null(r_26);
                  {
                    t = i_0(t);
                    {
                      x_26 = t;
                      if(((w_26 != NULL) && (w_26 != x_26)))
                        _fail(x_26);
                      else
                        w_26 = x_26;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_26)), not_null(w_26));
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
  ATerm j_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_3 (ATerm t)
      {
        ATerm v_27 = NULL;
        v_27 = t;
        b_27 :
        if(!(match_string(v_27, "-i")))
          {
            if(!(match_string(v_27, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        ATerm y_27 = NULL;
        ATerm l_18;
        l_18 = t;
        {
          ATerm w_27 = NULL;
          ATerm x_27 = NULL;
          x_27 = t;
          if(((w_27 != NULL) && (w_27 != x_27)))
            _fail(x_27);
          else
            w_27 = x_27;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_j_11, not_null(w_27));
            t = set_config_0(t);
          }
        }
        t = l_18;
        {
          ATerm z_27 = NULL;
          z_27 = t;
          if(((y_27 != NULL) && (y_27 != z_27)))
            _fail(z_27);
          else
            y_27 = z_27;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_27));
        }
        return(t);
      }
      ATerm f_3 (ATerm t)
      {
        t = term_m_18;
        return(t);
      }
      t = ArgOption_3(t, d_3, e_3, f_3);
      LocalPopChoice(k_18);
    }
  else
    {
      t = j_18;
      {
        ATerm n_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              ATerm a_28 = NULL;
              a_28 = t;
              g_27 :
              if(!(match_string(a_28, "-o")))
                {
                  if(!(match_string(a_28, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm m_3 (ATerm t)
            {
              ATerm d_28 = NULL;
              ATerm t_18;
              t_18 = t;
              {
                ATerm b_28 = NULL;
                ATerm c_28 = NULL;
                c_28 = t;
                if(((b_28 != NULL) && (b_28 != c_28)))
                  _fail(c_28);
                else
                  b_28 = c_28;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_i_11, not_null(b_28));
                  t = set_config_0(t);
                }
              }
              t = t_18;
              {
                ATerm e_28 = NULL;
                e_28 = t;
                if(((d_28 != NULL) && (d_28 != e_28)))
                  _fail(e_28);
                else
                  d_28 = e_28;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_28));
              }
              return(t);
            }
            ATerm r_3 (ATerm t)
            {
              t = term_u_18;
              return(t);
            }
            t = ArgOption_3(t, l_3, m_3, r_3);
            LocalPopChoice(s_18);
          }
        else
          {
            t = n_18;
            {
              ATerm v_18 = t;
              int w_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_3 (ATerm t)
                  {
                    ATerm j_28 = NULL;
                    j_28 = t;
                    k_27 :
                    if(!(match_string(j_28, "-S")))
                      {
                        if(!(match_string(j_28, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm t_3 (ATerm t)
                  {
                    t = term_d_19;
                    t = set_config_0(t);
                    t = term_e_19;
                    return(t);
                  }
                  ATerm w_3 (ATerm t)
                  {
                    t = term_m_19;
                    return(t);
                  }
                  t = Option_3(t, s_3, t_3, w_3);
                  LocalPopChoice(w_18);
                }
              else
                {
                  t = v_18;
                  {
                    ATerm n_19 = t;
                    int o_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_3 (ATerm t)
                        {
                          ATerm m_28 = NULL;
                          m_28 = t;
                          l_27 :
                          if(!(match_string(m_28, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm a_4 (ATerm t)
                        {
                          ATerm p_28 = NULL;
                          ATerm p_19;
                          p_19 = t;
                          {
                            ATerm n_28 = NULL;
                            ATerm o_28 = NULL;
                            t = string_to_int_0(t);
                            {
                              o_28 = t;
                              if(((n_28 != NULL) && (n_28 != o_28)))
                                _fail(o_28);
                              else
                                n_28 = o_28;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_q_8, not_null(n_28));
                              t = set_config_0(t);
                            }
                          }
                          t = p_19;
                          {
                            ATerm q_28 = NULL;
                            q_28 = t;
                            if(((p_28 != NULL) && (p_28 != q_28)))
                              _fail(q_28);
                            else
                              p_28 = q_28;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(p_28));
                          }
                          return(t);
                        }
                        ATerm b_4 (ATerm t)
                        {
                          t = term_q_19;
                          return(t);
                        }
                        t = ArgOption_3(t, x_3, a_4, b_4);
                        LocalPopChoice(o_19);
                      }
                    else
                      {
                        t = n_19;
                        {
                          ATerm s_19 = t;
                          int v_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_4 (ATerm t)
                              {
                                ATerm r_28 = NULL;
                                r_28 = t;
                                q_27 :
                                if(!(match_string(r_28, "-k")))
                                  {
                                    if(!(match_string(r_28, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm d_4 (ATerm t)
                              {
                                ATerm w_19;
                                w_19 = t;
                                {
                                  ATerm s_28 = NULL;
                                  ATerm t_28 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    t_28 = t;
                                    if(((s_28 != NULL) && (s_28 != t_28)))
                                      _fail(t_28);
                                    else
                                      s_28 = t_28;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_x_19, not_null(s_28));
                                    t = set_config_0(t);
                                  }
                                }
                                t = w_19;
                                return(t);
                              }
                              ATerm j_4 (ATerm t)
                              {
                                t = term_a_20;
                                return(t);
                              }
                              t = ArgOption_3(t, c_4, d_4, j_4);
                              LocalPopChoice(v_19);
                            }
                          else
                            {
                              t = s_19;
                              {
                                ATerm b_20 = t;
                                int c_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm k_4 (ATerm t)
                                    {
                                      ATerm u_28 = NULL;
                                      u_28 = t;
                                      s_27 :
                                      if(!(match_string(u_28, "-v")))
                                        {
                                          if(!(match_string(u_28, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm l_4 (ATerm t)
                                    {
                                      t = term_f_20;
                                      t = set_config_0(t);
                                      t = term_g_20;
                                      return(t);
                                    }
                                    ATerm q_4 (ATerm t)
                                    {
                                      t = term_h_20;
                                      return(t);
                                    }
                                    t = Option_3(t, k_4, l_4, q_4);
                                    LocalPopChoice(c_20);
                                  }
                                else
                                  {
                                    t = b_20;
                                    {
                                      ATerm j_20 = t;
                                      int m_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm r_4 (ATerm t)
                                          {
                                            ATerm v_28 = NULL;
                                            v_28 = t;
                                            t_27 :
                                            if(!(match_string(v_28, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm s_4 (ATerm t)
                                          {
                                            t = term_o_20;
                                            t = set_config_0(t);
                                            t = term_q_20;
                                            return(t);
                                          }
                                          ATerm t_4 (ATerm t)
                                          {
                                            t = term_r_20;
                                            return(t);
                                          }
                                          t = Option_3(t, r_4, s_4, t_4);
                                          LocalPopChoice(m_20);
                                        }
                                      else
                                        {
                                          t = j_20;
                                          {
                                            ATerm u_4 (ATerm t)
                                            {
                                              ATerm y_28 = NULL;
                                              y_28 = t;
                                              u_27 :
                                              if(!(match_string(y_28, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm a_5 (ATerm t)
                                            {
                                              t = term_t_20;
                                              t = set_config_0(t);
                                              t = term_u_20;
                                              return(t);
                                            }
                                            ATerm b_5 (ATerm t)
                                            {
                                              t = term_v_20;
                                              return(t);
                                            }
                                            t = Option_3(t, u_4, a_5, b_5);
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
  ATerm w_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_5 (ATerm t)
      {
        ATerm i_29 = NULL;
        i_29 = t;
        g_29 :
        if(!(match_string(i_29, "--graph")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm g_5 (ATerm t)
      {
        t = term_y_20;
        t = set_config_0(t);
        t = term_z_20;
        return(t);
      }
      ATerm h_5 (ATerm t)
      {
        t = term_a_21;
        return(t);
      }
      t = Option_3(t, f_5, g_5, h_5);
      LocalPopChoice(x_20);
    }
  else
    {
      t = w_20;
      {
        ATerm i_5 (ATerm t)
        {
          ATerm j_29 = NULL;
          j_29 = t;
          h_29 :
          if(!(match_string(j_29, "--tree")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm j_5 (ATerm t)
        {
          t = term_b_21;
          t = set_config_0(t);
          t = term_c_21;
          return(t);
        }
        ATerm k_5 (ATerm t)
        {
          t = term_i_21;
          return(t);
        }
        t = Option_3(t, i_5, j_5, k_5);
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm m_29 = NULL;
  ATerm l_21;
  l_21 = t;
  {
    ATerm m_5 (ATerm t)
    {
      ATerm n_29 = NULL,o_29 = NULL;
      n_29 = t;
      l_29 :
      if(match_cons(n_29, sym_Program_1))
        {
          o_29 = ATgetArgument(n_29, 0);
          if(((m_29 != NULL) && (m_29 != o_29)))
            _fail(o_29);
          else
            m_29 = o_29;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, m_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_21), not_null(m_29)), term_m_21));
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
  t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATempty, term_p_21));
  {
    t = printnl_0(t);
    {
      t = term_o_21;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm r_29 = NULL;
  r_29 = t;
  t = SSL_TicksToSeconds(not_null(r_29));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL;
  w_29 = t;
  v_29 :
  if(match_cons(w_29, sym__2))
    {
      x_29 = ATgetArgument(w_29, 0);
      y_29 = ATgetArgument(w_29, 1);
      {
        ATerm q_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(x_29), not_null(y_29));
            LocalPopChoice(r_21);
          }
        else
          {
            t = q_21;
            t = SSL_addr(not_null(x_29), not_null(y_29));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm l_70 (ATerm), ATerm m_70 (ATerm))
{
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_70(t);
      LocalPopChoice(t_21);
    }
  else
    {
      t = s_21;
      {
        ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL;
        f_30 = t;
        e_30 :
        if(((ATgetType(f_30) == AT_LIST) && ((ATermList) f_30 != ATempty)))
          {
            g_30 = ATgetFirst((ATermList) f_30);
            h_30 = (ATerm) ATgetNext((ATermList) f_30);
            {
              ATerm k_30 = NULL;
              ATerm l_30 = NULL;
              t = not_null(h_30);
              {
                t = foldr_2(t, l_70, m_70);
                {
                  l_30 = t;
                  if(((k_30 != NULL) && (k_30 != l_30)))
                    _fail(l_30);
                  else
                    k_30 = l_30;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_30), not_null(k_30));
                t = m_70(t);
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
ATerm crush_2 (ATerm t, ATerm d_72 (ATerm), ATerm e_72 (ATerm))
{
  ATerm s_30 = NULL;
  ATerm u_30 = NULL;
  s_30 = t;
  {
    ATerm v_30 = NULL;
    ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL;
    t = not_null(s_30);
    {
      v_30 = t;
      {
        t = SSL_explode_term(not_null(v_30));
        {
          x_30 = t;
          r_30 :
          if(match_cons(x_30, sym__2))
            {
              y_30 = ATgetArgument(x_30, 0);
              z_30 = ATgetArgument(x_30, 1);
              if(((u_30 != NULL) && (u_30 != z_30)))
                _fail(z_30);
              else
                u_30 = z_30;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_30);
      t = foldr_2(t, d_72, e_72);
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
    ATerm p_5 (ATerm t)
    {
      t = term_x_18;
      return(t);
    }
    t = crush_2(t, p_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
  f_31 = t;
  e_31 :
  if(match_cons(f_31, sym__2))
    {
      g_31 = ATgetArgument(f_31, 0);
      h_31 = ATgetArgument(f_31, 1);
      {
        ATerm y_21;
        y_21 = t;
        {
          ATerm z_21 = t;
          int a_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(g_31), not_null(h_31));
              LocalPopChoice(a_22);
            }
          else
            {
              t = z_21;
              t = SSL_gtr(not_null(g_31), not_null(h_31));
            }
        }
        t = y_21;
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
  ATerm n_31 = NULL;
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
      o_31 = t;
      m_31 :
      if(match_cons(o_31, sym__2))
        {
          p_31 = ATgetArgument(o_31, 0);
          q_31 = ATgetArgument(o_31, 1);
          {
            if(((n_31 != NULL) && (n_31 != p_31)))
              _fail(p_31);
            else
              n_31 = p_31;
            if(((n_31 != NULL) && (n_31 != q_31)))
              _fail(q_31);
            else
              n_31 = q_31;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm j_82 (ATerm))
{
  ATerm q_5 (ATerm t)
  {
    ATerm d_22;
    d_22 = t;
    {
      ATerm t_31 = NULL;
      ATerm u_31 = NULL;
      t = term_q_8;
      {
        t = get_config_0(t);
        {
          u_31 = t;
          if(((t_31 != NULL) && (t_31 != u_31)))
            _fail(u_31);
          else
            t_31 = u_31;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_31), term_o_21);
        t = geq_0(t);
      }
    }
    t = d_22;
    t = j_82(t);
    return(t);
  }
  t = try_1(t, q_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm r_5 (ATerm t)
  {
    ATerm z_31 = NULL,b_32 = NULL;
    ATerm g_22;
    g_22 = t;
    {
      ATerm a_32 = NULL;
      t = run_time_0(t);
      {
        a_32 = t;
        if(((z_31 != NULL) && (z_31 != a_32)))
          _fail(a_32);
        else
          z_31 = a_32;
      }
    }
    t = g_22;
    {
      ATerm c_32 = NULL;
      t = term_l_22;
      {
        t = get_config_0(t);
        {
          c_32 = t;
          if(((b_32 != NULL) && (b_32 != c_32)))
            _fail(c_32);
          else
            b_32 = c_32;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_22), not_null(z_31)), term_m_22), not_null(b_32)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, r_5);
  {
    t = term_x_18;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm m_32 = NULL;
  m_32 = t;
  k_32 :
  if(match_cons(m_32, sym_Version_0))
    {
      ATerm q_32 = NULL,c_33 = NULL;
      ATerm o_22;
      o_22 = t;
      {
        ATerm b_33 = NULL;
        t = SSLgetAnnotations(not_null(m_32));
        {
          b_33 = t;
          if(((q_32 != NULL) && (q_32 != b_33)))
            _fail(b_33);
          else
            q_32 = b_33;
        }
      }
      t = o_22;
      {
        ATerm d_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(q_32));
        {
          d_33 = t;
          if(((c_33 != NULL) && (c_33 != d_33)))
            _fail(d_33);
          else
            c_33 = d_33;
        }
        t = not_null(c_33);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_60 (ATerm))
{
  ATerm t_5 (ATerm t)
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
        {
          ATerm v_22 = t;
          int w_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(w_22);
            }
          else
            {
              t = v_22;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, t_5);
  t = w_60(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm l_33 = NULL;
  l_33 = t;
  t = SSL_table_create(not_null(l_33));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm y_33 = NULL;
  y_33 = t;
  {
    ATerm x_22;
    x_22 = t;
    {
      t = term_y_22;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_22, term_a_23, not_null(y_33));
          t = table_put_0(t);
        }
      }
    }
    t = x_22;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm j_34 = NULL;
  j_34 = t;
  t = SSL_table_destroy(not_null(j_34));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm p_34 = NULL;
  p_34 = t;
  t = SSL_exit(not_null(p_34));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
  v_34 = t;
  u_34 :
  if(((ATermList) v_34 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(v_34) == AT_LIST) && ((ATermList) v_34 != ATempty)))
        {
          w_34 = ATgetFirst((ATermList) v_34);
          x_34 = (ATerm) ATgetNext((ATermList) v_34);
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
  ATerm e_23;
  e_23 = t;
  {
    ATerm f_35 = NULL;
    ATerm i_35 = NULL;
    ATerm g_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(j_23);
      }
    else
      {
        t = g_23;
        {
          ATerm g_35 = NULL;
          ATerm h_35 = NULL;
          h_35 = t;
          if(((g_35 != NULL) && (g_35 != h_35)))
            _fail(h_35);
          else
            g_35 = h_35;
          t = (ATerm) ATinsert(ATempty, not_null(g_35));
        }
      }
    {
      i_35 = t;
      if(((f_35 != NULL) && (f_35 != i_35)))
        _fail(i_35);
      else
        f_35 = i_35;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_16, not_null(f_35));
      t = printnl_0(t);
    }
  }
  t = e_23;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm n_58 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
  t_35 = t;
  q_35 :
  if(((ATgetType(t_35) == AT_LIST) && ((ATermList) t_35 != ATempty)))
    {
      r_35 = ATgetFirst((ATermList) t_35);
      s_35 = (ATerm) ATgetNext((ATermList) t_35);
      {
        ATerm a_36 = NULL;
        t = not_null(s_35);
        {
          ATerm k_23;
          k_23 = t;
          {
            ATerm b_36 = NULL,d_36 = NULL,f_36 = NULL;
            ATerm l_23;
            l_23 = t;
            {
              ATerm c_36 = NULL;
              t = g_0(t);
              {
                c_36 = t;
                if(((b_36 != NULL) && (b_36 != c_36)))
                  _fail(c_36);
                else
                  b_36 = c_36;
              }
            }
            t = l_23;
            {
              ATerm e_36 = NULL;
              t = not_null(r_35);
              {
                t = f_0(t);
                {
                  e_36 = t;
                  if(((d_36 != NULL) && (d_36 != e_36)))
                    _fail(e_36);
                  else
                    d_36 = e_36;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(b_36)), not_null(d_36));
                {
                  f_36 = t;
                  if(((a_36 != NULL) && (a_36 != f_36)))
                    _fail(f_36);
                  else
                    a_36 = f_36;
                }
              }
            }
          }
          t = k_23;
          {
            ATerm u_5 (ATerm t)
            {
              t = not_null(a_36);
              return(t);
            }
            t = reverse_acc_2(t, f_0, u_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) t_35 == ATempty))
        {
          {
            t = term_o_16;
            t = g_0(t);
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
  ATerm v_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, v_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm m_58 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm l_50 (ATerm))
{
  ATerm q_36 = NULL,r_36 = NULL;
  q_36 = t;
  p_36 :
  if(match_cons(q_36, sym_Program_1))
    {
      r_36 = ATgetArgument(q_36, 0);
      {
        ATerm u_36 = NULL,w_36 = NULL;
        ATerm v_36 = NULL;
        t = SSLgetAnnotations(not_null(q_36));
        {
          v_36 = t;
          if(((u_36 != NULL) && (u_36 != v_36)))
            _fail(v_36);
          else
            u_36 = v_36;
        }
        {
          t = not_null(r_36);
          {
            ATerm y_36 = NULL;
            t = l_50(t);
            {
              w_36 = t;
              {
                ATerm z_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(w_36)), not_null(u_36));
                {
                  z_36 = t;
                  if(((y_36 != NULL) && (y_36 != z_36)))
                    _fail(z_36);
                  else
                    y_36 = z_36;
                }
                t = not_null(y_36);
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
  ATerm o_37 = NULL;
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_37 = NULL;
      t = term_l_22;
      {
        t = get_config_0(t);
        {
          p_37 = t;
          if(((o_37 != NULL) && (o_37 != p_37)))
            _fail(p_37);
          else
            o_37 = p_37;
        }
      }
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      {
        ATerm y_5 (ATerm t)
        {
          ATerm z_5 (ATerm t)
          {
            ATerm q_37 = NULL;
            q_37 = t;
            if(((o_37 != NULL) && (o_37 != q_37)))
              _fail(q_37);
            else
              o_37 = q_37;
            return(t);
          }
          t = Program_1(t, z_5);
          return(t);
        }
        t = option_defined_1(t, y_5);
      }
    }
  {
    ATerm e_6 (ATerm t)
    {
      ATerm f_6 (ATerm t)
      {
        t = not_null(o_37);
        return(t);
      }
      t = short_description_1(t, f_6);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, e_6);
    {
      t = term_s_23;
      {
        t = echo_0(t);
        {
          t = term_v_23;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_6 (ATerm t)
                {
                  ATerm r_37 = NULL;
                  ATerm u_37 = NULL;
                  u_37 = t;
                  if(((r_37 != NULL) && (r_37 != u_37)))
                    _fail(u_37);
                  else
                    r_37 = u_37;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_37)), term_w_23);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_6);
                {
                  ATerm h_6 (ATerm t)
                  {
                    ATerm v_37 = NULL;
                    ATerm w_37 = NULL;
                    ATerm i_6 (ATerm t)
                    {
                      t = not_null(o_37);
                      return(t);
                    }
                    t = long_description_1(t, i_6);
                    {
                      w_37 = t;
                      if(((v_37 != NULL) && (v_37 != w_37)))
                        _fail(w_37);
                      else
                        v_37 = w_37;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(v_37)), term_x_23);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, h_6);
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
ATerm debug_0 (ATerm t)
{
  ATerm y_23;
  y_23 = t;
  {
    ATerm c_38 = NULL;
    ATerm d_38 = NULL;
    d_38 = t;
    if(((c_38 != NULL) && (c_38 != d_38)))
      _fail(d_38);
    else
      c_38 = d_38;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATempty, not_null(c_38)));
      t = printnl_0(t);
    }
  }
  t = y_23;
  return(t);
}
ATerm say_1 (ATerm t, ATerm z_66 (ATerm))
{
  ATerm z_23;
  z_23 = t;
  {
    t = z_66(t);
    t = debug_0(t);
  }
  t = z_23;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm m_50 (ATerm))
{
  ATerm k_38 = NULL,l_38 = NULL;
  k_38 = t;
  j_38 :
  if(match_cons(k_38, sym_Undefined_1))
    {
      l_38 = ATgetArgument(k_38, 0);
      {
        ATerm o_38 = NULL,q_38 = NULL;
        ATerm p_38 = NULL;
        t = SSLgetAnnotations(not_null(k_38));
        {
          p_38 = t;
          if(((o_38 != NULL) && (o_38 != p_38)))
            _fail(p_38);
          else
            o_38 = p_38;
        }
        {
          t = not_null(l_38);
          {
            ATerm s_38 = NULL;
            t = m_50(t);
            {
              q_38 = t;
              {
                ATerm t_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_38)), not_null(o_38));
                {
                  t_38 = t;
                  if(((s_38 != NULL) && (s_38 != t_38)))
                    _fail(t_38);
                  else
                    s_38 = t_38;
                }
                t = not_null(s_38);
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
ATerm fetch_1 (ATerm t, ATerm k_76 (ATerm))
{
  ATerm y_38 (ATerm t)
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_76, _id);
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        t = Cons_2(t, _id, y_38);
      }
    return(t);
  }
  t = y_38(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_59 (ATerm))
{
  t = fetch_1(t, r_59);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_39 = NULL;
  d_39 = t;
  c_39 :
  if(match_cons(d_39, sym_Help_0))
    {
      ATerm f_39 = NULL,h_39 = NULL;
      ATerm c_24;
      c_24 = t;
      {
        ATerm g_39 = NULL;
        t = SSLgetAnnotations(not_null(d_39));
        {
          g_39 = t;
          if(((f_39 != NULL) && (f_39 != g_39)))
            _fail(g_39);
          else
            f_39 = g_39;
        }
      }
      t = c_24;
      {
        ATerm i_39 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(f_39));
        {
          i_39 = t;
          if(((h_39 != NULL) && (h_39 != i_39)))
            _fail(i_39);
          else
            h_39 = i_39;
        }
        t = not_null(h_39);
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
  ATerm n_39 = NULL;
  n_39 = t;
  t = SSL_implode_string(not_null(n_39));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm g_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(i_24);
    }
  else
    {
      t = g_24;
      {
        ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL;
        s_39 = t;
        r_39 :
        if(((ATgetType(s_39) == AT_LIST) && ((ATermList) s_39 != ATempty)))
          {
            t_39 = ATgetFirst((ATermList) s_39);
            u_39 = (ATerm) ATgetNext((ATermList) s_39);
            {
              t = not_null(t_39);
              {
                ATerm n_6 (ATerm t)
                {
                  t = not_null(u_39);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, n_6);
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
  ATerm e_40 = NULL;
  ATerm g_40 = NULL;
  e_40 = t;
  {
    ATerm h_40 = NULL;
    ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
    t = not_null(e_40);
    {
      h_40 = t;
      {
        t = SSL_explode_term(not_null(h_40));
        {
          j_40 = t;
          c_40 :
          if(match_cons(j_40, sym__2))
            {
              k_40 = ATgetArgument(j_40, 0);
              l_40 = ATgetArgument(j_40, 1);
              d_40 :
              if(match_string(k_40, ""))
                {
                  if(((g_40 != NULL) && (g_40 != l_40)))
                    _fail(l_40);
                  else
                    g_40 = l_40;
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
      t = not_null(g_40);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_76 (ATerm))
{
  ATerm p_40 (ATerm t)
  {
    ATerm j_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, p_40);
        LocalPopChoice(m_24);
      }
    else
      {
        t = j_24;
        {
          t = Nil_0(t);
          t = q_76(t);
        }
      }
    return(t);
  }
  t = p_40(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL;
  s_40 = t;
  r_40 :
  if(match_cons(s_40, sym__2))
    {
      t_40 = ATgetArgument(s_40, 0);
      u_40 = ATgetArgument(s_40, 1);
      {
        t = not_null(t_40);
        {
          ATerm o_6 (ATerm t)
          {
            t = not_null(u_40);
            return(t);
          }
          t = at_end_1(t, o_6);
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
  ATerm n_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(o_24);
    }
  else
    {
      t = n_24;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm z_40 = NULL;
  z_40 = t;
  t = SSL_explode_string(not_null(z_40));
  return(t);
}
ATerm _2 (ATerm t, ATerm t_47 (ATerm), ATerm u_47 (ATerm))
{
  ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL;
  i_41 = t;
  h_41 :
  if(match_cons(i_41, sym__2))
    {
      j_41 = ATgetArgument(i_41, 0);
      k_41 = ATgetArgument(i_41, 1);
      {
        ATerm o_41 = NULL,q_41 = NULL;
        ATerm p_41 = NULL;
        t = SSLgetAnnotations(not_null(i_41));
        {
          p_41 = t;
          if(((o_41 != NULL) && (o_41 != p_41)))
            _fail(p_41);
          else
            o_41 = p_41;
        }
        {
          t = not_null(j_41);
          {
            ATerm s_41 = NULL;
            t = t_47(t);
            {
              q_41 = t;
              {
                t = not_null(k_41);
                {
                  ATerm u_41 = NULL;
                  t = u_47(t);
                  {
                    s_41 = t;
                    {
                      ATerm v_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(q_41), not_null(s_41)), not_null(o_41));
                      {
                        v_41 = t;
                        if(((u_41 != NULL) && (u_41 != v_41)))
                          _fail(v_41);
                        else
                          u_41 = v_41;
                      }
                      t = not_null(u_41);
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
ATerm printnl_0 (ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL;
  f_42 = t;
  e_42 :
  if(match_cons(f_42, sym__2))
    {
      g_42 = ATgetArgument(f_42, 0);
      h_42 = ATgetArgument(f_42, 1);
      {
        ATerm p_24;
        p_24 = t;
        t = SSL_printnl(not_null(g_42), not_null(h_42));
        t = p_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm y_66 (ATerm))
{
  ATerm q_24;
  q_24 = t;
  {
    ATerm n_42 = NULL,p_42 = NULL;
    ATerm a_25;
    a_25 = t;
    {
      ATerm o_42 = NULL;
      t = y_66(t);
      {
        o_42 = t;
        if(((n_42 != NULL) && (n_42 != o_42)))
          _fail(o_42);
        else
          n_42 = o_42;
      }
    }
    t = a_25;
    {
      ATerm t_42 = NULL;
      t_42 = t;
      if(((p_42 != NULL) && (p_42 != t_42)))
        _fail(t_42);
      else
        p_42 = t_42;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_42)), not_null(n_42)));
        t = printnl_0(t);
      }
    }
  }
  t = q_24;
  return(t);
}
ATerm map_1 (ATerm t, ATerm b_76 (ATerm))
{
  ATerm w_42 (ATerm t)
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        t = Cons_2(t, b_76, w_42);
      }
    return(t);
  }
  t = w_42(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm d_43 = NULL;
  d_43 = t;
  t = SSL_is_string(not_null(d_43));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      {
        ATerm g_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, p_6);
            LocalPopChoice(h_25);
          }
        else
          {
            t = g_25;
            {
              ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL;
              r_43 = t;
              q_43 :
              if(match_cons(r_43, sym_Path_1))
                {
                  s_43 = ATgetArgument(r_43, 0);
                  t = not_null(s_43);
                }
              else
                {
                  if(match_cons(r_43, sym_Var_1))
                    {
                      s_43 = ATgetArgument(r_43, 0);
                      {
                        t = not_null(s_43);
                        {
                          ATerm i_25 = t;
                          int j_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(j_25);
                            }
                          else
                            {
                              t = i_25;
                              {
                                ATerm q_6 (ATerm t)
                                {
                                  t = term_o_25;
                                  return(t);
                                }
                                t = debug_1(t, q_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(r_43, sym_Prefix_2))
                        {
                          s_43 = ATgetArgument(r_43, 0);
                          t_43 = ATgetArgument(r_43, 1);
                          {
                            ATerm y_43 = NULL,a_44 = NULL;
                            ATerm p_25;
                            p_25 = t;
                            {
                              ATerm z_43 = NULL;
                              t = not_null(s_43);
                              {
                                t = eval_config_0(t);
                                {
                                  z_43 = t;
                                  if(((y_43 != NULL) && (y_43 != z_43)))
                                    _fail(z_43);
                                  else
                                    y_43 = z_43;
                                }
                              }
                            }
                            t = p_25;
                            {
                              ATerm b_44 = NULL;
                              t = not_null(t_43);
                              {
                                t = eval_config_0(t);
                                {
                                  b_44 = t;
                                  if(((a_44 != NULL) && (a_44 != b_44)))
                                    _fail(b_44);
                                  else
                                    a_44 = b_44;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_43), not_null(a_44));
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
  ATerm s_44 = NULL;
  s_44 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_q_25, not_null(s_44));
    {
      t = table_get_0(t);
      {
        ATerm r_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm x_25;
            x_25 = t;
            {
              ATerm w_44 = NULL;
              ATerm x_44 = NULL;
              x_44 = t;
              if(((w_44 != NULL) && (w_44 != x_44)))
                _fail(x_44);
              else
                w_44 = x_44;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_q_25, not_null(s_44), not_null(w_44));
                t = table_put_0(t);
              }
            }
            t = x_25;
          }
          return(t);
        }
        t = try_1(t, r_6);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm p_78 (ATerm))
{
  ATerm y_25 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_78(t);
      LocalPopChoice(b_26);
    }
  else
    {
      t = y_25;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL;
  l_45 = t;
  f_45 :
  if(match_cons(l_45, sym__2))
    {
      m_45 = ATgetArgument(l_45, 0);
      n_45 = ATgetArgument(l_45, 1);
      t = SSL_table_get(not_null(m_45), not_null(n_45));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL;
  u_45 = t;
  t_45 :
  if(match_cons(u_45, sym__3))
    {
      v_45 = ATgetArgument(u_45, 0);
      w_45 = ATgetArgument(u_45, 1);
      x_45 = ATgetArgument(u_45, 2);
      {
        ATerm c_26;
        c_26 = t;
        {
          ATerm f_46 = NULL;
          ATerm g_46 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_45), not_null(w_45));
          {
            ATerm d_26 = t;
            int e_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(e_26);
              }
            else
              {
                t = d_26;
                t = (ATerm) ATempty;
              }
            {
              g_46 = t;
              if(((f_46 != NULL) && (f_46 != g_46)))
                _fail(g_46);
              else
                f_46 = g_46;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_45), not_null(w_45), (ATerm) ATinsert(CheckATermList(not_null(f_46)), not_null(x_45)));
            t = table_put_0(t);
          }
        }
        t = c_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm r_58 (ATerm))
{
  ATerm k_46 = NULL;
  ATerm l_46 = NULL;
  t = term_o_16;
  {
    t = r_58(t);
    {
      l_46 = t;
      if(((k_46 != NULL) && (k_46 != l_46)))
        _fail(l_46);
      else
        k_46 = l_46;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_t_23, term_u_23, not_null(k_46));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm r_46 = NULL,s_46 = NULL,v_46 = NULL;
  r_46 = t;
  q_46 :
  if(match_string(r_46, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(r_46) == AT_LIST) && ((ATermList) r_46 != ATempty)))
        {
          s_46 = ATgetFirst((ATermList) r_46);
          v_46 = (ATerm) ATgetNext((ATermList) r_46);
          {
            ATerm y_46 = NULL;
            ATerm f_26;
            f_26 = t;
            {
              t = not_null(s_46);
              t = a_0(t);
            }
            t = f_26;
            {
              ATerm z_46 = NULL;
              t = term_o_16;
              {
                t = b_0(t);
                {
                  z_46 = t;
                  if(((y_46 != NULL) && (y_46 != z_46)))
                    _fail(z_46);
                  else
                    y_46 = z_46;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_46)), not_null(y_46));
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
  ATerm s_6 (ATerm t)
  {
    ATerm e_47 = NULL;
    e_47 = t;
    d_47 :
    if(!(match_string(e_47, "--help")))
      {
        if(!(match_string(e_47, "-h")))
          {
            if(!(match_string(e_47, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    t = term_i_26;
    {
      t = set_config_0(t);
      t = term_j_26;
    }
    return(t);
  }
  ATerm u_6 (ATerm t)
  {
    t = term_k_26;
    return(t);
  }
  t = Option_3(t, s_6, t_6, u_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL;
  h_47 = t;
  g_47 :
  if(((ATgetType(h_47) == AT_LIST) && ((ATermList) h_47 != ATempty)))
    {
      i_47 = ATgetFirst((ATermList) h_47);
      j_47 = (ATerm) ATgetNext((ATermList) h_47);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_47)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_47)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm o_55 (ATerm), ATerm p_55 (ATerm))
{
  ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL;
  w_47 = t;
  v_47 :
  if(((ATgetType(w_47) == AT_LIST) && ((ATermList) w_47 != ATempty)))
    {
      x_47 = ATgetFirst((ATermList) w_47);
      y_47 = (ATerm) ATgetNext((ATermList) w_47);
      {
        ATerm c_48 = NULL,e_48 = NULL;
        ATerm d_48 = NULL;
        t = SSLgetAnnotations(not_null(w_47));
        {
          d_48 = t;
          if(((c_48 != NULL) && (c_48 != d_48)))
            _fail(d_48);
          else
            c_48 = d_48;
        }
        {
          t = not_null(x_47);
          {
            ATerm g_48 = NULL;
            t = o_55(t);
            {
              e_48 = t;
              {
                t = not_null(y_47);
                {
                  ATerm i_48 = NULL;
                  t = p_55(t);
                  {
                    g_48 = t;
                    {
                      ATerm j_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(g_48)), not_null(e_48)), not_null(c_48));
                      {
                        j_48 = t;
                        if(((i_48 != NULL) && (i_48 != j_48)))
                          _fail(j_48);
                        else
                          i_48 = j_48;
                      }
                      t = not_null(i_48);
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
  ATerm t_48 = NULL;
  t_48 = t;
  s_48 :
  if(((ATermList) t_48 == ATempty))
    {
      {
        ATerm v_48 = NULL,x_48 = NULL;
        ATerm l_26;
        l_26 = t;
        {
          ATerm w_48 = NULL;
          t = SSLgetAnnotations(not_null(t_48));
          {
            w_48 = t;
            if(((v_48 != NULL) && (v_48 != w_48)))
              _fail(w_48);
            else
              v_48 = w_48;
          }
        }
        t = l_26;
        {
          ATerm y_48 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(v_48));
          {
            y_48 = t;
            if(((x_48 != NULL) && (x_48 != y_48)))
              _fail(y_48);
            else
              x_48 = y_48;
          }
          t = not_null(x_48);
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
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL;
  e_49 = t;
  d_49 :
  if(match_cons(e_49, sym__2))
    {
      f_49 = ATgetArgument(e_49, 0);
      g_49 = ATgetArgument(e_49, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_q_25, not_null(f_49), not_null(g_49));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm p_58 (ATerm))
{
  ATerm t_26;
  t_26 = t;
  {
    ATerm c_7 (ATerm t)
    {
      t = term_u_26;
      t = p_58(t);
      return(t);
    }
    t = try_1(t, c_7);
  }
  t = t_26;
  {
    ATerm h_7 (ATerm t)
    {
      ATerm o_49 = NULL;
      ATerm v_26;
      v_26 = t;
      {
        ATerm m_49 = NULL;
        ATerm n_49 = NULL;
        n_49 = t;
        if(((m_49 != NULL) && (m_49 != n_49)))
          _fail(n_49);
        else
          m_49 = n_49;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_22, not_null(m_49));
          t = set_config_0(t);
        }
      }
      t = v_26;
      {
        ATerm p_49 = NULL;
        p_49 = t;
        if(((o_49 != NULL) && (o_49 != p_49)))
          _fail(p_49);
        else
          o_49 = p_49;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_49));
      }
      return(t);
    }
    ATerm i_7 (ATerm t)
    {
      ATerm y_26 = t;
      int z_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_27 = t;
          int c_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(c_27);
            }
          else
            {
              t = a_27;
              {
                t = p_58(t);
                t = Cons_2(t, _id, i_7);
              }
            }
          LocalPopChoice(z_26);
        }
      else
        {
          t = y_26;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_7, i_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL;
  ATerm d_27;
  d_27 = t;
  {
    ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL;
    y_49 = t;
    u_49 :
    if(match_cons(y_49, sym__3))
      {
        z_49 = ATgetArgument(y_49, 0);
        a_50 = ATgetArgument(y_49, 1);
        b_50 = ATgetArgument(y_49, 2);
        {
          if(((v_49 != NULL) && (v_49 != z_49)))
            _fail(z_49);
          else
            v_49 = z_49;
          {
            if(((w_49 != NULL) && (w_49 != a_50)))
              _fail(a_50);
            else
              w_49 = a_50;
            {
              if(((x_49 != NULL) && (x_49 != b_50)))
                _fail(b_50);
              else
                x_49 = b_50;
              t = SSL_table_put(not_null(v_49), not_null(w_49), not_null(x_49));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = d_27;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_58 (ATerm))
{
  ATerm e_50 = NULL;
  ATerm e_27;
  e_27 = t;
  {
    t = term_f_27;
    t = table_put_0(t);
  }
  t = e_27;
  {
    ATerm j_7 (ATerm t)
    {
      ATerm h_27 = t;
      int i_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_58(t);
          LocalPopChoice(i_27);
        }
      else
        {
          t = h_27;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, j_7);
    {
      ATerm k_7 (ATerm t)
      {
        ATerm j_27 = t;
        int m_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_27;
            n_27 = t;
            {
              ATerm o_27 = t;
              int p_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_h_26;
                  t = get_config_0(t);
                  LocalPopChoice(p_27);
                }
              else
                {
                  t = o_27;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = n_27;
            {
              t = system_usage_0(t);
              {
                t = term_x_18;
                t = exit_0(t);
              }
            }
            LocalPopChoice(m_27);
          }
        else
          {
            t = j_27;
            {
              ATerm l_7 (ATerm t)
              {
                ATerm m_7 (ATerm t)
                {
                  ATerm f_50 = NULL;
                  f_50 = t;
                  if(((e_50 != NULL) && (e_50 != f_50)))
                    _fail(f_50);
                  else
                    e_50 = f_50;
                  return(t);
                }
                t = Undefined_1(t, m_7);
                return(t);
              }
              t = option_defined_1(t, l_7);
              {
                ATerm n_7 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_50)), term_r_27);
                  return(t);
                }
                t = say_1(t, n_7);
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
      t = try_1(t, k_7);
      {
        ATerm f_28;
        f_28 = t;
        {
          t = term_t_23;
          t = table_destroy_0(t);
        }
        t = f_28;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm t_59 (ATerm), ATerm u_59 (ATerm), ATerm v_59 (ATerm), ATerm w_59 (ATerm))
{
  t = parse_options_1(t, t_59);
  {
    t = store_options_0(t);
    {
      t = v_59(t);
      {
        ATerm g_28 = t;
        int h_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, u_59);
            LocalPopChoice(h_28);
          }
        else
          {
            t = g_28;
            {
              ATerm i_28 = t;
              int k_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_59(t);
                  t = report_success_0(t);
                  LocalPopChoice(k_28);
                }
              else
                {
                  t = i_28;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm x_59 (ATerm), ATerm y_59 (ATerm))
{
  t = option_wrap_4(t, x_59, default_usage_0, _id, y_59);
  return(t);
}
ATerm term_to_dot_0 (ATerm t)
{
  ATerm t_7 (ATerm t)
  {
    ATerm l_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_to_adot_options_0(t);
        LocalPopChoice(w_28);
      }
    else
      {
        t = l_28;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm u_7 (ATerm t)
  {
    ATerm v_7 (ATerm t)
    {
      t = xtc_io_transform_1(t, to_adot_0);
      {
        ATerm b_8 (ATerm t)
        {
          t = term_x_28;
          return(t);
        }
        ATerm c_8 (ATerm t)
        {
          ATerm i_50 = NULL;
          ATerm j_50 = NULL;
          t = term_z_28;
          {
            t = xtc_find_0(t);
            {
              j_50 = t;
              if(((i_50 != NULL) && (i_50 != j_50)))
                _fail(j_50);
              else
                i_50 = j_50;
            }
          }
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_50)), term_a_29);
          return(t);
        }
        t = xtc_transform_2(t, b_8, c_8);
        {
          ATerm d_8 (ATerm t)
          {
            t = term_b_29;
            return(t);
          }
          t = xtc_transform_1(t, d_8);
        }
      }
      return(t);
    }
    t = xtc_io_1(t, v_7);
    return(t);
  }
  t = option_wrap_2(t, t_7, u_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = term_to_dot_0(t);
  return(t);
}
