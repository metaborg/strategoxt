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
Symbol sym_EpochTime_1;
Symbol sym_ComponentTime_3;
Symbol sym_DayTime_3;
Symbol sym_Date_3;
Symbol sym_Dupl_2;
Symbol sym_January_0;
Symbol sym_February_0;
Symbol sym_March_0;
Symbol sym_April_0;
Symbol sym_May_0;
Symbol sym_June_0;
Symbol sym_July_0;
Symbol sym_August_0;
Symbol sym_September_0;
Symbol sym_October_0;
Symbol sym_November_0;
Symbol sym_December_0;
Symbol sym_Sunday_0;
Symbol sym_Monday_0;
Symbol sym_Tuesday_0;
Symbol sym_Wednesday_0;
Symbol sym_Thursday_0;
Symbol sym_Friday_0;
Symbol sym_Saturday_0;
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
  sym_EpochTime_1 = ATmakeSymbol("EpochTime", 1, ATfalse);
  ATprotectSymbol(sym_EpochTime_1);
  sym_ComponentTime_3 = ATmakeSymbol("ComponentTime", 3, ATfalse);
  ATprotectSymbol(sym_ComponentTime_3);
  sym_DayTime_3 = ATmakeSymbol("DayTime", 3, ATfalse);
  ATprotectSymbol(sym_DayTime_3);
  sym_Date_3 = ATmakeSymbol("Date", 3, ATfalse);
  ATprotectSymbol(sym_Date_3);
  sym_Dupl_2 = ATmakeSymbol("Dupl", 2, ATfalse);
  ATprotectSymbol(sym_Dupl_2);
  sym_January_0 = ATmakeSymbol("January", 0, ATfalse);
  ATprotectSymbol(sym_January_0);
  sym_February_0 = ATmakeSymbol("February", 0, ATfalse);
  ATprotectSymbol(sym_February_0);
  sym_March_0 = ATmakeSymbol("March", 0, ATfalse);
  ATprotectSymbol(sym_March_0);
  sym_April_0 = ATmakeSymbol("April", 0, ATfalse);
  ATprotectSymbol(sym_April_0);
  sym_May_0 = ATmakeSymbol("May", 0, ATfalse);
  ATprotectSymbol(sym_May_0);
  sym_June_0 = ATmakeSymbol("June", 0, ATfalse);
  ATprotectSymbol(sym_June_0);
  sym_July_0 = ATmakeSymbol("July", 0, ATfalse);
  ATprotectSymbol(sym_July_0);
  sym_August_0 = ATmakeSymbol("August", 0, ATfalse);
  ATprotectSymbol(sym_August_0);
  sym_September_0 = ATmakeSymbol("September", 0, ATfalse);
  ATprotectSymbol(sym_September_0);
  sym_October_0 = ATmakeSymbol("October", 0, ATfalse);
  ATprotectSymbol(sym_October_0);
  sym_November_0 = ATmakeSymbol("November", 0, ATfalse);
  ATprotectSymbol(sym_November_0);
  sym_December_0 = ATmakeSymbol("December", 0, ATfalse);
  ATprotectSymbol(sym_December_0);
  sym_Sunday_0 = ATmakeSymbol("Sunday", 0, ATfalse);
  ATprotectSymbol(sym_Sunday_0);
  sym_Monday_0 = ATmakeSymbol("Monday", 0, ATfalse);
  ATprotectSymbol(sym_Monday_0);
  sym_Tuesday_0 = ATmakeSymbol("Tuesday", 0, ATfalse);
  ATprotectSymbol(sym_Tuesday_0);
  sym_Wednesday_0 = ATmakeSymbol("Wednesday", 0, ATfalse);
  ATprotectSymbol(sym_Wednesday_0);
  sym_Thursday_0 = ATmakeSymbol("Thursday", 0, ATfalse);
  ATprotectSymbol(sym_Thursday_0);
  sym_Friday_0 = ATmakeSymbol("Friday", 0, ATfalse);
  ATprotectSymbol(sym_Friday_0);
  sym_Saturday_0 = ATmakeSymbol("Saturday", 0, ATfalse);
  ATprotectSymbol(sym_Saturday_0);
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
ATerm term_g_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_m_30;
ATerm term_s_29;
ATerm term_e_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_z_27;
ATerm term_x_27;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_v_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_j_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_z_22;
ATerm term_m_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_a_21;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_k_17;
ATerm term_e_17;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_n_16;
ATerm term_k_16;
ATerm term_h_16;
ATerm term_z_15;
ATerm term_t_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_g_11;
ATerm term_y_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_e_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_p_9;
ATerm term_m_9;
ATerm term_j_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_k_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_g_7;
ATerm term_e_7;
void init_constant_terms (void)
{
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym__2, term_g_7, term_s_7);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym__2, term_g_7, term_q_8);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_AttrId_2, term_g_13, term_o_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym__2, term_z_15, term_u_16);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym__2, term_t_15, term_u_16);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym__2, term_e_17, term_h_16);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym__2, term_i_21, term_u_16);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym__2, term_b_8, term_w_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_21);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym__2, term_e_22, term_u_16);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym__2, term_c_23, term_u_16);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym__2, term_s_25, term_t_25);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym__2, term_s_28, term_u_16);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym__3, term_s_25, term_t_25, (ATerm) ATempty);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Dot-pretty.pp", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_1 (ATerm, ATerm i_77 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm k_62 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm m_62 (ATerm));
ATerm set_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm v_62 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm q_77 (ATerm), ATerm r_77 (ATerm));
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm d_62 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm h_77 (ATerm));
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm l_54 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm j_77 (ATerm), ATerm k_77 (ATerm));
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
ATerm string_as_chars_1 (ATerm, ATerm v_82 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm EdgeToDot_0 (ATerm);
ATerm ListEdgeToDot_0 (ATerm);
ATerm graph_to_adot_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm NodeId_0 (ATerm);
ATerm address_0 (ATerm);
ATerm term_to_graph_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm m_73 (ATerm), ATerm n_73 (ATerm));
ATerm union_1 (ATerm, ATerm i_73 (ATerm));
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm z_72 (ATerm), ATerm a_73 (ATerm), ATerm b_73 (ATerm));
ATerm foldr_3 (ATerm, ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm d_74 (ATerm));
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm l_62 (ATerm));
ATerm term_to_tree_0 (ATerm);
ATerm to_adot_0 (ATerm);
ATerm close_file_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm assert_1 (ATerm, ATerm d_78 (ATerm));
ATerm obsolete_1 (ATerm, ATerm i_81 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm xtc_io_transform_1 (ATerm, ATerm s_77 (ATerm));
ATerm term_to_adot_options_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm a_78 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm k_66 (ATerm), ATerm l_66 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm z_77 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm x_76 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm y_76 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm z_73 (ATerm), ATerm a_74 (ATerm));
ATerm crush_2 (ATerm, ATerm x_72 (ATerm), ATerm y_72 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm h_62 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_78 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_80 (ATerm));
ATerm Program_1 (ATerm, ATerm s_54 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm c_81 (ATerm));
ATerm Undefined_1 (ATerm, ATerm t_54 (ATerm));
ATerm fetch_1 (ATerm, ATerm u_67 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_79 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm a_68 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm p_52 (ATerm), ATerm q_52 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm b_81 (ATerm));
ATerm map_1 (ATerm, ATerm l_67 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm a_66 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_80 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_53 (ATerm), ATerm z_53 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_80 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_80 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm p_78 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm q_78 (ATerm), ATerm r_78 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm c_77 (ATerm), ATerm d_77 (ATerm));
ATerm term_to_dot_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_transform_1 (ATerm t, ATerm i_77 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, i_77, b_0);
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
  ATerm d_7;
  d_7 = t;
  {
    ATerm d_3 = NULL;
    ATerm e_3 = NULL;
    e_3 = t;
    if(((d_3 != NULL) && (d_3 != e_3)))
      _fail(e_3);
    else
      d_3 = e_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_7, not_null(d_3));
      t = printnl_0(t);
    }
  }
  t = d_7;
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
  ATerm k_7 = t;
  int m_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_7;
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
      LocalPopChoice(m_7);
    }
  else
    {
      t = k_7;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm k_62 (ATerm))
{
  ATerm u_7 = t;
  int v_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_7;
      w_7 = t;
      {
        ATerm l_4 = NULL;
        ATerm m_4 = NULL;
        t = term_b_8;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_4), term_c_8);
          t = geq_0(t);
        }
      }
      t = w_7;
      t = k_62(t);
      LocalPopChoice(v_7);
    }
  else
    {
      t = u_7;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm m_62 (ATerm))
{
  ATerm d_8 = t;
  int e_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_8;
      f_8 = t;
      {
        ATerm p_4 = NULL;
        ATerm q_4 = NULL;
        t = term_b_8;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_4), term_k_8);
          t = geq_0(t);
        }
      }
      t = f_8;
      t = m_62(t);
      LocalPopChoice(e_8);
    }
  else
    {
      t = d_8;
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
        ATerm l_8;
        l_8 = t;
        {
          ATerm d_5 = NULL;
          ATerm e_5 = NULL,g_5 = NULL;
          ATerm f_5 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_4), not_null(y_4));
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
        t = l_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm v_62 (ATerm))
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
                  t = v_62(t);
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
          ATerm z_8 = t;
          int e_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(e_9);
            }
          else
            {
              t = z_8;
              t = (ATerm) ATempty;
            }
          {
            ATerm t_0 (ATerm t)
            {
              ATerm u_0 (ATerm t)
              {
                t = term_f_9;
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
                        t = term_g_9;
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
                              t = term_f_9;
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
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_9;
      t = get_config_0(t);
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
      {
        ATerm k_9 = t;
        int l_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_m_9;
            t = getenv_0(t);
            LocalPopChoice(l_9);
          }
        else
          {
            t = k_9;
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
    ATerm u_9;
    u_9 = t;
    {
      ATerm v_9 = t;
      int w_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_x_9;
          t = table_get_0(t);
          LocalPopChoice(w_9);
        }
      else
        {
          t = v_9;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = u_9;
    {
      ATerm b_1 (ATerm t)
      {
        ATerm c_1 (ATerm t)
        {
          t = term_y_9;
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
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_1 (ATerm t)
      {
        ATerm e_1 (ATerm t)
        {
          t = term_e_10;
          return(t);
        }
        t = debug_1(t, e_1);
        return(t);
      }
      t = if_verbose5_1(t, d_1);
      {
        t = xtc_load_0(t);
        {
          ATerm f_10 = t;
          int j_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(j_10);
            }
          else
            {
              t = f_10;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm f_1 (ATerm t)
            {
              ATerm g_1 (ATerm t)
              {
                t = term_e_10;
                return(t);
              }
              t = debug_1(t, g_1);
              return(t);
            }
            t = if_verbose5_1(t, f_1);
          }
        }
      }
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      {
        ATerm n_6 = NULL;
        ATerm o_6 = NULL;
        o_6 = t;
        if(((n_6 != NULL) && (n_6 != o_6)))
          _fail(o_6);
        else
          n_6 = o_6;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_10), not_null(n_6)), term_m_10);
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
                      t = term_o_10;
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
ATerm xtc_transform_term_2 (ATerm t, ATerm q_77 (ATerm), ATerm r_77 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, q_77, r_77);
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
ATerm fork_and_wait_1 (ATerm t, ATerm d_62 (ATerm))
{
  ATerm j_7 = NULL;
  ATerm l_7 = NULL;
  j_7 = t;
  {
    t = fork_0(t);
    {
      l_7 = t;
      {
        ATerm p_10 = t;
        int q_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_7 = NULL;
            n_7 = t;
            f_7 :
            if(match_int(n_7, 0))
              {
                t = not_null(j_7);
                t = d_62(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(q_10);
          }
        else
          {
            t = p_10;
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
ATerm xtc_command_1 (ATerm t, ATerm h_77 (ATerm))
{
  ATerm g_8 = NULL;
  ATerm w_10;
  w_10 = t;
  {
    ATerm h_8 = NULL;
    t = h_77(t);
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
  t = w_10;
  {
    ATerm x_10;
    x_10 = t;
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
    t = x_10;
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
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_8), (ATerm) ATinsert(ATinsert(ATempty, not_null(v_8)), term_y_10));
              {
                ATerm e_11 = t;
                int f_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(f_11);
                  }
                else
                  {
                    t = e_11;
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
                      t = (ATerm) ATmakeAppl(sym__2, not_null(c_9), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(a_9)), term_y_10), not_null(u_8)), term_g_11));
                      {
                        ATerm m_11 = t;
                        int n_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(n_11);
                          }
                        else
                          {
                            t = m_11;
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
      ATerm o_11;
      o_11 = t;
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
      t = o_11;
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
ATerm FILE_1 (ATerm t, ATerm l_54 (ATerm))
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
            t = l_54(t);
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
ATerm xtc_transform_2 (ATerm t, ATerm j_77 (ATerm), ATerm k_77 (ATerm))
{
  ATerm p_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_11 = t;
      int t_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(t_11);
        }
      else
        {
          t = s_11;
          t = stdin_0(t);
        }
      LocalPopChoice(r_11);
      t = xtc_transform_file_2(t, j_77, k_77);
    }
  else
    {
      t = p_11;
      t = xtc_transform_term_2(t, j_77, k_77);
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
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(v_10)), term_z_11), term_y_11);
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
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(d_11)), term_y_11), term_y_11);
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
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(l_11)), term_a_12), term_y_11);
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
  ATerm b_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      LocalPopChoice(e_12);
    }
  else
    {
      t = b_12;
      {
        ATerm f_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm h_12 = t;
  int i_12 = stack_ptr;
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
      LocalPopChoice(i_12);
    }
  else
    {
      t = h_12;
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
  ATerm c_12 = NULL;
  ATerm d_12 = NULL;
  d_12 = t;
  if(((c_12 != NULL) && (c_12 != d_12)))
    _fail(d_12);
  else
    c_12 = d_12;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_12, not_null(c_12));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm v_82 (ATerm))
{
  t = explode_string_0(t);
  {
    t = v_82(t);
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
        ATerm o_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_12 = NULL,w_12 = NULL,c_13 = NULL,e_13 = NULL;
            ATerm u_12;
            u_12 = t;
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
            t = u_12;
            {
              ATerm y_12;
              y_12 = t;
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
              t = y_12;
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
                t = (ATerm) ATinsert(CheckATermList(not_null(e_13)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_12)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_g_13, not_null(c_13)))))));
              }
            }
            LocalPopChoice(t_12);
          }
        else
          {
            t = o_12;
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
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_13), not_null(l_13)), term_i_13);
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
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_12)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_g_13, not_null(k_13)))))));
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
        ATerm j_13;
        j_13 = t;
        {
          t = not_null(d_14);
          t = is_list_0(t);
        }
        t = j_13;
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
          t = (ATerm) ATinsert(CheckATermList(not_null(g_14)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_14)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_p_13)))));
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
        ATerm q_13 = t;
        int r_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ListEdgeToDot_0(t);
            LocalPopChoice(r_13);
          }
        else
          {
            t = q_13;
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
    t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_s_13, not_null(r_14));
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
    t = (ATerm) ATmakeAppl(sym__2, term_t_13, not_null(a_15));
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
  ATerm u_13;
  u_13 = t;
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
  t = u_13;
  {
    ATerm v_13;
    v_13 = t;
    {
      ATerm n_15 = NULL;
      ATerm w_13 = t;
      int x_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_1 (ATerm t)
          {
            t = address_0(t);
            t = NodeId_0(t);
            return(t);
          }
          t = map_1(t, p_1);
          LocalPopChoice(x_13);
        }
      else
        {
          t = w_13;
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
    t = v_13;
    {
      ATerm p_15 = NULL;
      ATerm y_13 = t;
      int z_13 = stack_ptr;
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
          LocalPopChoice(z_13);
        }
      else
        {
          t = y_13;
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
ATerm HdMember_p__2 (ATerm t, ATerm m_73 (ATerm), ATerm n_73 (ATerm))
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
  e_16 = t;
  d_16 :
  if(((ATgetType(e_16) == AT_LIST) && !(ATisEmpty(e_16))))
    {
      f_16 = ATgetFirst((ATermList) e_16);
      g_16 = (ATerm) ATgetNext((ATermList) e_16);
      {
        t = n_73(t);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm j_16 = NULL;
            j_16 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_16), not_null(j_16));
              t = m_73(t);
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
ATerm union_1 (ATerm t, ATerm i_73 (ATerm))
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
            ATerm e_14 = t;
            int f_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(r_16);
                LocalPopChoice(f_14);
              }
            else
              {
                t = e_14;
                {
                  ATerm i_14 = t;
                  int k_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_1 (ATerm t)
                      {
                        t = not_null(r_16);
                        return(t);
                      }
                      t = HdMember_p__2(t, i_73, w_1);
                      t = v_16(t);
                      LocalPopChoice(k_14);
                    }
                  else
                    {
                      t = i_14;
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
ATerm crush_3 (ATerm t, ATerm z_72 (ATerm), ATerm a_73 (ATerm), ATerm b_73 (ATerm))
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
      t = foldr_3(t, z_72, a_73, b_73);
    }
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm d_74 (ATerm))
{
  ATerm l_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_74(t);
      LocalPopChoice(m_14);
    }
  else
    {
      t = l_14;
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
              ATerm n_14;
              n_14 = t;
              {
                ATerm v_17 = NULL;
                t = not_null(q_17);
                {
                  t = d_74(t);
                  {
                    v_17 = t;
                    if(((u_17 != NULL) && (u_17 != v_17)))
                      _fail(v_17);
                    else
                      u_17 = v_17;
                  }
                }
              }
              t = n_14;
              {
                ATerm x_17 = NULL;
                t = not_null(r_17);
                {
                  t = foldr_3(t, b_74, c_74, d_74);
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
                  t = c_74(t);
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
  ATerm i_18 = NULL;
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
  i_18 = t;
  {
    ATerm n_18 = NULL;
    ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
    t = not_null(i_18);
    {
      n_18 = t;
      {
        t = SSL_explode_term(not_null(n_18));
        {
          p_18 = t;
          e_18 :
          if(match_cons(p_18, sym__2))
            {
              q_18 = ATgetArgument(p_18, 0);
              r_18 = ATgetArgument(p_18, 1);
              f_18 :
              if(match_string(q_18, ""))
                {
                  g_18 :
                  if(((ATgetType(r_18) == AT_LIST) && !(ATisEmpty(r_18))))
                    {
                      s_18 = ATgetFirst((ATermList) r_18);
                      t_18 = (ATerm) ATgetNext((ATermList) r_18);
                      h_18 :
                      if(((ATgetType(t_18) == AT_LIST) && !(ATisEmpty(t_18))))
                        {
                          u_18 = ATgetFirst((ATermList) t_18);
                          v_18 = (ATerm) ATgetNext((ATermList) t_18);
                          {
                            if(((k_18 != NULL) && (k_18 != s_18)))
                              _fail(s_18);
                            else
                              k_18 = s_18;
                            {
                              if(((m_18 != NULL) && (m_18 != u_18)))
                                _fail(u_18);
                              else
                                m_18 = u_18;
                              if(((l_18 != NULL) && (l_18 != v_18)))
                                _fail(v_18);
                              else
                                l_18 = v_18;
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
    t = not_null(m_18);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm f_19 = NULL;
  ATerm h_19 = NULL,i_19 = NULL;
  f_19 = t;
  {
    ATerm j_19 = NULL;
    ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
    t = not_null(f_19);
    {
      j_19 = t;
      {
        t = SSL_explode_term(not_null(j_19));
        {
          l_19 = t;
          c_19 :
          if(match_cons(l_19, sym__2))
            {
              m_19 = ATgetArgument(l_19, 0);
              n_19 = ATgetArgument(l_19, 1);
              d_19 :
              if(match_string(m_19, ""))
                {
                  e_19 :
                  if(((ATgetType(n_19) == AT_LIST) && !(ATisEmpty(n_19))))
                    {
                      o_19 = ATgetFirst((ATermList) n_19);
                      p_19 = (ATerm) ATgetNext((ATermList) n_19);
                      {
                        if(((i_19 != NULL) && (i_19 != o_19)))
                          _fail(o_19);
                        else
                          i_19 = o_19;
                        if(((h_19 != NULL) && (h_19 != p_19)))
                          _fail(p_19);
                        else
                          h_19 = p_19;
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
    t = not_null(i_19);
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm l_62 (ATerm))
{
  ATerm o_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_14;
      t_14 = t;
      {
        ATerm u_19 = NULL;
        ATerm v_19 = NULL;
        t = term_b_8;
        {
          t = get_config_0(t);
          {
            v_19 = t;
            if(((u_19 != NULL) && (u_19 != v_19)))
              _fail(v_19);
            else
              u_19 = v_19;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_19), term_u_14);
          t = geq_0(t);
        }
      }
      t = t_14;
      t = l_62(t);
      LocalPopChoice(q_14);
    }
  else
    {
      t = o_14;
      {
      }
    }
  return(t);
}
ATerm term_to_tree_0 (ATerm t)
{
  ATerm f_20 = NULL,h_20 = NULL;
  ATerm x_1 (ATerm t)
  {
    ATerm y_1 (ATerm t)
    {
      t = term_v_14;
      return(t);
    }
    t = debug_1(t, y_1);
    return(t);
  }
  t = if_verbose5_1(t, x_1);
  {
    ATerm x_14;
    x_14 = t;
    {
      ATerm g_20 = NULL;
      t = new_0(t);
      {
        g_20 = t;
        if(((f_20 != NULL) && (f_20 != g_20)))
          _fail(g_20);
        else
          f_20 = g_20;
      }
    }
    t = x_14;
    {
      ATerm j_20 = NULL;
      j_20 = t;
      if(((h_20 != NULL) && (h_20 != j_20)))
        _fail(j_20);
      else
        h_20 = j_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_20), not_null(h_20));
        {
          ATerm y_20 (ATerm t)
          {
            ATerm s_20 = NULL,u_20 = NULL;
            ATerm a_2 (ATerm t)
            {
              ATerm y_14 = t;
              int z_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_2 (ATerm t)
                  {
                    ATerm k_20 = NULL,m_20 = NULL;
                    ATerm c_15;
                    c_15 = t;
                    {
                      ATerm l_20 = NULL;
                      t = new_0(t);
                      {
                        l_20 = t;
                        if(((k_20 != NULL) && (k_20 != l_20)))
                          _fail(l_20);
                        else
                          k_20 = l_20;
                      }
                    }
                    t = c_15;
                    {
                      ATerm n_20 = NULL;
                      n_20 = t;
                      if(((m_20 != NULL) && (m_20 != n_20)))
                        _fail(n_20);
                      else
                        m_20 = n_20;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_20), not_null(m_20));
                    }
                    return(t);
                  }
                  t = map_1(t, b_2);
                  LocalPopChoice(z_14);
                }
              else
                {
                  t = y_14;
                  {
                    ATerm c_2 (ATerm t)
                    {
                      ATerm o_20 = NULL,q_20 = NULL;
                      ATerm d_15;
                      d_15 = t;
                      {
                        ATerm p_20 = NULL;
                        t = new_0(t);
                        {
                          p_20 = t;
                          if(((o_20 != NULL) && (o_20 != p_20)))
                            _fail(p_20);
                          else
                            o_20 = p_20;
                        }
                      }
                      t = d_15;
                      {
                        ATerm r_20 = NULL;
                        r_20 = t;
                        if(((q_20 != NULL) && (q_20 != r_20)))
                          _fail(r_20);
                        else
                          q_20 = r_20;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_20), not_null(q_20));
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
              ATerm f_15;
              f_15 = t;
              {
                ATerm t_20 = NULL;
                ATerm d_2 (ATerm t)
                {
                  ATerm g_15 = t;
                  int h_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = map_1(t, Fst_0);
                      LocalPopChoice(h_15);
                    }
                  else
                    {
                      t = g_15;
                      t = _all(t, Fst_0);
                    }
                  return(t);
                }
                t = _2(t, _id, d_2);
                {
                  t_20 = t;
                  if(((s_20 != NULL) && (s_20 != t_20)))
                    _fail(t_20);
                  else
                    s_20 = t_20;
                }
              }
              t = f_15;
              {
                ATerm v_20 = NULL;
                t = Snd_0(t);
                {
                  ATerm i_15 = t;
                  int j_15 = stack_ptr;
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
                      t = foldr_3(t, e_2, f_2, y_20);
                      LocalPopChoice(j_15);
                    }
                  else
                    {
                      t = i_15;
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
                        t = crush_3(t, g_2, h_2, y_20);
                      }
                    }
                  {
                    v_20 = t;
                    if(((u_20 != NULL) && (u_20 != v_20)))
                      _fail(v_20);
                    else
                      u_20 = v_20;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(u_20)), not_null(s_20));
              }
            }
            return(t);
          }
          t = y_20(t);
        }
      }
    }
  }
  return(t);
}
ATerm to_adot_0 (ATerm t)
{
  ATerm q_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_15;
      s_15 = t;
      {
        t = term_t_15;
        t = get_config_0(t);
      }
      t = s_15;
      t = term_to_tree_0(t);
      LocalPopChoice(r_15);
    }
  else
    {
      t = q_15;
      {
        ATerm u_15;
        u_15 = t;
        {
          t = term_z_15;
          t = get_config_0(t);
        }
        t = u_15;
        t = term_to_graph_0(t);
      }
    }
  t = graph_to_adot_0(t);
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm m_21 = NULL;
  m_21 = t;
  t = SSL_close_file(not_null(m_21));
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,v_21 = NULL;
  r_21 = t;
  q_21 :
  if(match_cons(r_21, sym__2))
    {
      s_21 = ATgetArgument(r_21, 0);
      v_21 = ATgetArgument(r_21, 1);
      t = SSL_WriteToBinaryFile(not_null(s_21), not_null(v_21));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm d_78 (ATerm))
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
  j_22 = t;
  i_22 :
  if(match_cons(j_22, sym__2))
    {
      k_22 = ATgetArgument(j_22, 0);
      l_22 = ATgetArgument(j_22, 1);
      {
        ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL;
        ATerm a_16;
        a_16 = t;
        {
          ATerm r_22 = NULL;
          ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
          t = d_78(t);
          {
            r_22 = t;
            {
              if(((o_22 != NULL) && (o_22 != r_22)))
                _fail(r_22);
              else
                o_22 = r_22;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(o_22), not_null(k_22), not_null(l_22));
                {
                  t = table_push_0(t);
                  {
                    ATerm b_16 = t;
                    int c_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_22), term_h_16);
                        t = table_get_0(t);
                        LocalPopChoice(c_16);
                      }
                    else
                      {
                        t = b_16;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      s_22 = t;
                      h_22 :
                      if(((ATgetType(s_22) == AT_LIST) && !(ATisEmpty(s_22))))
                        {
                          t_22 = ATgetFirst((ATermList) s_22);
                          u_22 = (ATerm) ATgetNext((ATermList) s_22);
                          {
                            if(((p_22 != NULL) && (p_22 != t_22)))
                              _fail(t_22);
                            else
                              p_22 = t_22;
                            {
                              if(((q_22 != NULL) && (q_22 != u_22)))
                                _fail(u_22);
                              else
                                q_22 = u_22;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(o_22), term_h_16, (ATerm) ATinsert(CheckATermList(not_null(q_22)), (ATerm) ATinsert(CheckATermList(not_null(p_22)), not_null(k_22))));
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
        t = a_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm i_81 (ATerm))
{
  ATerm i_16;
  i_16 = t;
  {
    t = i_81(t);
    {
      ATerm i_2 (ATerm t)
      {
        t = term_k_16;
        return(t);
      }
      t = debug_1(t, i_2);
    }
  }
  t = i_16;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm l_23 = NULL,t_23 = NULL;
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_23 = NULL,w_23 = NULL,x_23 = NULL;
      u_23 = t;
      e_23 :
      if(match_cons(u_23, sym__2))
        {
          w_23 = ATgetArgument(u_23, 0);
          x_23 = ATgetArgument(u_23, 1);
          {
            if(((t_23 != NULL) && (t_23 != w_23)))
              _fail(w_23);
            else
              t_23 = w_23;
            if(((l_23 != NULL) && (l_23 != x_23)))
              _fail(x_23);
            else
              l_23 = x_23;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(m_16);
      t = SSL_open_file(not_null(t_23), not_null(l_23));
    }
  else
    {
      t = l_16;
      {
        ATerm z_23 = NULL;
        ATerm a_24 = NULL;
        ATerm j_2 (ATerm t)
        {
          t = term_n_16;
          return(t);
        }
        t = obsolete_1(t, j_2);
        {
          z_23 = t;
          {
            if(((t_23 != NULL) && (t_23 != z_23)))
              _fail(z_23);
            else
              t_23 = z_23;
            {
              ATerm s_16;
              s_16 = t;
              {
                ATerm b_24 = NULL;
                t = term_t_16;
                {
                  b_24 = t;
                  if(((a_24 != NULL) && (a_24 != b_24)))
                    _fail(b_24);
                  else
                    a_24 = b_24;
                }
              }
              t = s_16;
              t = SSL_open_file(not_null(t_23), not_null(a_24));
            }
          }
        }
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
  ATerm g_24 = NULL;
  ATerm h_24 = NULL;
  t = term_u_16;
  {
    t = new_0(t);
    {
      h_24 = t;
      if(((g_24 != NULL) && (g_24 != h_24)))
        _fail(h_24);
      else
        g_24 = h_24;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_24), term_w_16);
    {
      t = conc_strings_0(t);
      {
        ATerm x_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(y_16);
          }
        else
          {
            t = x_16;
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
  ATerm l_24 = NULL;
  t = new_file_0(t);
  {
    l_24 = t;
    {
      ATerm b_17;
      b_17 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_24), term_t_16);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_24), term_u_16);
            {
              ATerm k_2 (ATerm t)
              {
                t = term_e_17;
                return(t);
              }
              t = assert_1(t, k_2);
            }
          }
        }
      }
      t = b_17;
    }
  }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm v_24 = NULL;
  ATerm x_24 = NULL;
  v_24 = t;
  {
    ATerm y_24 = NULL;
    t = xtc_new_file_0(t);
    {
      y_24 = t;
      {
        if(((x_24 != NULL) && (x_24 != y_24)))
          _fail(y_24);
        else
          x_24 = y_24;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_24), not_null(v_24));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(x_24);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_24));
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm c_25 = NULL;
  ATerm i_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_25 = NULL;
      d_25 = t;
      {
        if(((c_25 != NULL) && (c_25 != d_25)))
          _fail(d_25);
        else
          c_25 = d_25;
        t = SSL_ReadFromFile(not_null(c_25));
      }
      LocalPopChoice(j_17);
    }
  else
    {
      t = i_17;
      {
        ATerm l_2 (ATerm t)
        {
          t = term_k_17;
          return(t);
        }
        t = debug_1(t, l_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm m_25 = NULL;
  ATerm o_25 = NULL;
  m_25 = t;
  {
    ATerm l_17;
    l_17 = t;
    {
      ATerm p_25 = NULL;
      t = term_m_17;
      {
        p_25 = t;
        if(((o_25 != NULL) && (o_25 != p_25)))
          _fail(p_25);
        else
          o_25 = p_25;
      }
    }
    t = l_17;
    {
      t = SSL_open_file(not_null(m_25), not_null(o_25));
      t = SSL_close_file(not_null(m_25));
    }
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm x_25 = NULL,b_26 = NULL;
  x_25 = t;
  w_25 :
  if(match_cons(x_25, sym_stdin_0))
    {
      ATerm d_26 = NULL;
      ATerm e_26 = NULL;
      t = term_n_17;
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
      if(match_cons(x_25, sym_FILE_1))
        {
          b_26 = ATgetArgument(x_25, 0);
          {
            ATerm g_26 = NULL;
            ATerm h_26 = NULL;
            t = not_null(b_26);
            {
              t = file_exists_0(t);
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
ATerm xtc_io_transform_1 (ATerm t, ATerm s_77 (ATerm))
{
  t = read_from_0(t);
  {
    t = s_77(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm term_to_adot_options_0 (ATerm t)
{
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_2 (ATerm t)
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
      ATerm n_2 (ATerm t)
      {
        t = term_y_17;
        t = set_config_0(t);
        t = term_z_17;
        return(t);
      }
      ATerm o_2 (ATerm t)
      {
        t = term_a_18;
        return(t);
      }
      t = Option_3(t, m_2, n_2, o_2);
      LocalPopChoice(t_17);
    }
  else
    {
      t = s_17;
      {
        ATerm p_2 (ATerm t)
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
        ATerm q_2 (ATerm t)
        {
          t = term_b_18;
          t = set_config_0(t);
          t = term_c_18;
          return(t);
        }
        ATerm r_2 (ATerm t)
        {
          t = term_d_18;
          return(t);
        }
        t = Option_3(t, p_2, q_2, r_2);
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
      ATerm j_18;
      j_18 = t;
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
      t = j_18;
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
      ATerm o_18;
      o_18 = t;
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
      t = o_18;
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
  ATerm g_28 = NULL,h_28 = NULL;
  g_28 = t;
  f_28 :
  if(match_cons(g_28, sym_FILE_1))
    {
      h_28 = ATgetArgument(g_28, 0);
      {
        ATerm w_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_28 = NULL;
            ATerm k_28 = NULL;
            t = m_0(t);
            {
              k_28 = t;
              {
                if(((j_28 != NULL) && (j_28 != k_28)))
                  _fail(k_28);
                else
                  j_28 = k_28;
                {
                  ATerm y_18 = t;
                  int z_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(z_18);
                    }
                  else
                    {
                      t = y_18;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_28), not_null(j_28));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_28));
            LocalPopChoice(x_18);
          }
        else
          {
            t = w_18;
            {
              ATerm a_19 = t;
              int b_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_28 = NULL;
                  ATerm n_28 = NULL;
                  t = m_0(t);
                  {
                    n_28 = t;
                    {
                      if(((m_28 != NULL) && (m_28 != n_28)))
                        _fail(n_28);
                      else
                        m_28 = n_28;
                      {
                        ATerm g_19 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm k_19 = t;
                            int q_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(q_19);
                              }
                            else
                              {
                                t = k_19;
                                {
                                  ATerm r_19 = t;
                                  int s_19 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(s_19);
                                    }
                                  else
                                    {
                                      t = r_19;
                                      {
                                        ATerm o_28 = NULL;
                                        o_28 = t;
                                        if(((h_28 != NULL) && (h_28 != o_28)))
                                          _fail(o_28);
                                        else
                                          h_28 = o_28;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = g_19;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_28), not_null(m_28));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_28));
                  LocalPopChoice(b_19);
                }
              else
                {
                  t = a_19;
                  {
                    ATerm q_28 = NULL;
                    t = m_0(t);
                    {
                      q_28 = t;
                      if(((h_28 != NULL) && (h_28 != q_28)))
                        _fail(q_28);
                      else
                        h_28 = q_28;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_28));
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
ATerm Tl_0 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
  a_29 = t;
  z_28 :
  if(((ATgetType(a_29) == AT_LIST) && !(ATisEmpty(a_29))))
    {
      b_29 = ATgetFirst((ATermList) a_29);
      c_29 = (ATerm) ATgetNext((ATermList) a_29);
      t = not_null(c_29);
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
        ATerm t_19;
        t_19 = t;
        {
          ATerm n_29 = NULL;
          ATerm o_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_29), not_null(k_29));
          {
            ATerm w_19 = t;
            int x_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(x_19);
              }
            else
              {
                t = w_19;
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
        t = t_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm a_78 (ATerm))
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
  ATerm y_19;
  y_19 = t;
  {
    ATerm y_29 = NULL;
    ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
    t = a_78(t);
    {
      y_29 = t;
      {
        if(((x_29 != NULL) && (x_29 != y_29)))
          _fail(y_29);
        else
          x_29 = y_29;
        {
          ATerm z_19 = t;
          int a_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_29), term_h_16);
              t = table_get_0(t);
              LocalPopChoice(a_20);
            }
          else
            {
              t = z_19;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            z_29 = t;
            u_29 :
            if(((ATgetType(z_29) == AT_LIST) && !(ATisEmpty(z_29))))
              {
                a_30 = ATgetFirst((ATermList) z_29);
                b_30 = (ATerm) ATgetNext((ATermList) z_29);
                {
                  if(((w_29 != NULL) && (w_29 != a_30)))
                    _fail(a_30);
                  else
                    w_29 = a_30;
                  {
                    if(((v_29 != NULL) && (v_29 != b_30)))
                      _fail(b_30);
                    else
                      v_29 = b_30;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(x_29), term_h_16, not_null(v_29));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(w_29);
                          {
                            ATerm u_2 (ATerm t)
                            {
                              ATerm c_30 = NULL;
                              c_30 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_29), not_null(c_30));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, u_2);
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
  t = y_19;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm i_30 = NULL;
  i_30 = t;
  t = SSL_remove(not_null(i_30));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm k_66 (ATerm), ATerm l_66 (ATerm))
{
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_66(t);
      t = l_66(t);
      LocalPopChoice(c_20);
    }
  else
    {
      t = b_20;
      {
        t = l_66(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm z_77 (ATerm))
{
  ATerm n_30 = NULL;
  ATerm d_20;
  d_20 = t;
  {
    ATerm q_30 = NULL;
    ATerm r_30 = NULL;
    t = z_77(t);
    {
      q_30 = t;
      {
        if(((n_30 != NULL) && (n_30 != q_30)))
          _fail(q_30);
        else
          n_30 = q_30;
        {
          ATerm s_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_30), term_h_16);
          {
            ATerm e_20 = t;
            int i_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(i_20);
              }
            else
              {
                t = e_20;
                t = (ATerm) ATempty;
              }
            {
              s_30 = t;
              if(((r_30 != NULL) && (r_30 != s_30)))
                _fail(s_30);
              else
                r_30 = s_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_30), term_h_16, (ATerm) ATinsert(CheckATermList(not_null(r_30)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = d_20;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm x_76 (ATerm))
{
  ATerm c_31 = NULL,d_31 = NULL;
  ATerm v_2 (ATerm t)
  {
    t = term_e_17;
    return(t);
  }
  t = begin_scope_1(t, v_2);
  {
    ATerm w_2 (ATerm t)
    {
      ATerm w_20;
      w_20 = t;
      {
        ATerm e_31 = NULL,f_31 = NULL,h_31 = NULL;
        ATerm x_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_a_21;
            t = table_get_0(t);
            LocalPopChoice(z_20);
          }
        else
          {
            t = x_20;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          e_31 = t;
          b_31 :
          if(((ATgetType(e_31) == AT_LIST) && !(ATisEmpty(e_31))))
            {
              f_31 = ATgetFirst((ATermList) e_31);
              h_31 = (ATerm) ATgetNext((ATermList) e_31);
              {
                if(((d_31 != NULL) && (d_31 != f_31)))
                  _fail(f_31);
                else
                  d_31 = f_31;
                {
                  if(((c_31 != NULL) && (c_31 != h_31)))
                    _fail(h_31);
                  else
                    c_31 = h_31;
                  {
                    t = not_null(d_31);
                    {
                      ATerm x_2 (ATerm t)
                      {
                        ATerm b_21 = t;
                        int c_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(c_21);
                          }
                        else
                          {
                            t = b_21;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, x_2);
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
      t = w_20;
      {
        ATerm y_2 (ATerm t)
        {
          t = term_e_17;
          return(t);
        }
        t = end_scope_1(t, y_2);
      }
      return(t);
    }
    t = restore_always_2(t, x_76, w_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm y_76 (ATerm))
{
  ATerm z_2 (ATerm t)
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_31 = NULL;
        ATerm l_31 = NULL;
        t = term_g_11;
        {
          t = get_config_0(t);
          {
            l_31 = t;
            if(((k_31 != NULL) && (k_31 != l_31)))
              _fail(l_31);
            else
              k_31 = l_31;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_31));
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        t = term_n_17;
      }
    {
      t = y_76(t);
      {
        ATerm a_3 (ATerm t)
        {
          ATerm f_21 = t;
          int g_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_y_10;
              t = get_config_0(t);
              LocalPopChoice(g_21);
            }
          else
            {
              t = f_21;
              t = term_h_21;
            }
          return(t);
        }
        t = copy_to_1(t, a_3);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, z_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm o_31 = NULL;
    o_31 = t;
    n_31 :
    if(!(match_string(o_31, "-v")))
      {
        if(!(match_string(o_31, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_j_21;
    t = set_config_0(t);
    t = term_k_21;
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_l_21;
    return(t);
  }
  t = Option_3(t, b_3, c_3, f_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm v_31 = NULL;
    v_31 = t;
    p_31 :
    if(!(match_string(v_31, "-k")))
      {
        if(!(match_string(v_31, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    ATerm n_21;
    n_21 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, term_o_21, not_null(w_31));
        t = set_config_0(t);
      }
    }
    t = n_21;
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    t = term_p_21;
    return(t);
  }
  t = ArgOption_3(t, g_3, h_3, l_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm a_32 = NULL;
  a_32 = t;
  t = SSL_string_to_int(not_null(a_32));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_3 (ATerm t)
      {
        ATerm i_32 = NULL;
        i_32 = t;
        d_32 :
        if(!(match_string(i_32, "-S")))
          {
            if(!(match_string(i_32, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm u_3 (ATerm t)
      {
        t = term_x_21;
        t = set_config_0(t);
        t = term_y_21;
        return(t);
      }
      ATerm v_3 (ATerm t)
      {
        t = term_z_21;
        return(t);
      }
      t = Option_3(t, t_3, u_3, v_3);
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      {
        ATerm a_22 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_3 (ATerm t)
            {
              ATerm j_32 = NULL;
              j_32 = t;
              e_32 :
              if(!(match_string(j_32, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm c_4 (ATerm t)
            {
              ATerm m_32 = NULL;
              ATerm c_22;
              c_22 = t;
              {
                ATerm k_32 = NULL;
                ATerm l_32 = NULL;
                t = string_to_int_0(t);
                {
                  l_32 = t;
                  if(((k_32 != NULL) && (k_32 != l_32)))
                    _fail(l_32);
                  else
                    k_32 = l_32;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_8, not_null(k_32));
                  t = set_config_0(t);
                }
              }
              t = c_22;
              {
                ATerm n_32 = NULL;
                n_32 = t;
                if(((m_32 != NULL) && (m_32 != n_32)))
                  _fail(n_32);
                else
                  m_32 = n_32;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(m_32));
              }
              return(t);
            }
            ATerm d_4 (ATerm t)
            {
              t = term_d_22;
              return(t);
            }
            t = ArgOption_3(t, w_3, c_4, d_4);
            LocalPopChoice(b_22);
          }
        else
          {
            t = a_22;
            {
              ATerm i_4 (ATerm t)
              {
                ATerm o_32 = NULL;
                o_32 = t;
                h_32 :
                if(!(match_string(o_32, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm j_4 (ATerm t)
              {
                t = term_f_22;
                t = set_config_0(t);
                t = term_g_22;
                return(t);
              }
              ATerm k_4 (ATerm t)
              {
                t = term_m_22;
                return(t);
              }
              t = Option_3(t, i_4, j_4, k_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm n_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(v_22);
    }
  else
    {
      t = n_22;
      {
        ATerm w_22 = t;
        int x_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(x_22);
          }
        else
          {
            t = w_22;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm u_32 = NULL;
    u_32 = t;
    r_32 :
    if(!(match_string(u_32, "-o")))
      {
        if(!(match_string(u_32, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    ATerm x_32 = NULL;
    ATerm y_22;
    y_22 = t;
    {
      ATerm v_32 = NULL;
      ATerm w_32 = NULL;
      w_32 = t;
      if(((v_32 != NULL) && (v_32 != w_32)))
        _fail(w_32);
      else
        v_32 = w_32;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_10, not_null(v_32));
        t = set_config_0(t);
      }
    }
    t = y_22;
    {
      ATerm y_32 = NULL;
      y_32 = t;
      if(((x_32 != NULL) && (x_32 != y_32)))
        _fail(y_32);
      else
        x_32 = y_32;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(x_32));
    }
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    t = term_z_22;
    return(t);
  }
  t = ArgOption_3(t, n_4, o_4, r_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(b_23);
    }
  else
    {
      t = a_23;
      {
        ATerm s_4 (ATerm t)
        {
          ATerm c_33 = NULL;
          c_33 = t;
          b_33 :
          if(!(match_string(c_33, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm t_4 (ATerm t)
        {
          t = term_d_23;
          t = set_config_0(t);
          t = term_f_23;
          return(t);
        }
        ATerm u_4 (ATerm t)
        {
          t = term_g_23;
          return(t);
        }
        t = Option_3(t, s_4, t_4, u_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,t_33 = NULL;
  k_33 = t;
  i_33 :
  if(match_string(k_33, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(k_33) == AT_LIST) && !(ATisEmpty(k_33))))
        {
          l_33 = ATgetFirst((ATermList) k_33);
          m_33 = (ATerm) ATgetNext((ATermList) k_33);
          j_33 :
          if(((ATgetType(m_33) == AT_LIST) && !(ATisEmpty(m_33))))
            {
              n_33 = ATgetFirst((ATermList) m_33);
              t_33 = (ATerm) ATgetNext((ATermList) m_33);
              {
                ATerm z_33 = NULL;
                ATerm h_23;
                h_23 = t;
                {
                  t = not_null(l_33);
                  t = j_0(t);
                }
                t = h_23;
                {
                  ATerm a_34 = NULL;
                  t = not_null(n_33);
                  {
                    t = k_0(t);
                    {
                      a_34 = t;
                      if(((z_33 != NULL) && (z_33 != a_34)))
                        _fail(a_34);
                      else
                        z_33 = a_34;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(t_33)), not_null(z_33));
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
  ATerm a_5 (ATerm t)
  {
    ATerm j_34 = NULL;
    j_34 = t;
    g_34 :
    if(!(match_string(j_34, "-i")))
      {
        if(!(match_string(j_34, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    ATerm m_34 = NULL;
    ATerm i_23;
    i_23 = t;
    {
      ATerm k_34 = NULL;
      ATerm l_34 = NULL;
      l_34 = t;
      if(((k_34 != NULL) && (k_34 != l_34)))
        _fail(l_34);
      else
        k_34 = l_34;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_11, not_null(k_34));
        t = set_config_0(t);
      }
    }
    t = i_23;
    {
      ATerm n_34 = NULL;
      n_34 = t;
      if(((m_34 != NULL) && (m_34 != n_34)))
        _fail(n_34);
      else
        m_34 = n_34;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_34));
    }
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    t = term_j_23;
    return(t);
  }
  t = ArgOption_3(t, a_5, b_5, c_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm k_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(m_23);
    }
  else
    {
      t = k_23;
      {
        ATerm n_23 = t;
        int o_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(o_23);
          }
        else
          {
            t = n_23;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm c_35 = NULL;
  ATerm p_23;
  p_23 = t;
  {
    ATerm h_5 (ATerm t)
    {
      ATerm d_35 = NULL,e_35 = NULL;
      d_35 = t;
      r_34 :
      if(match_cons(d_35, sym_Program_1))
        {
          e_35 = ATgetArgument(d_35, 0);
          if(((c_35 != NULL) && (c_35 != e_35)))
            _fail(e_35);
          else
            c_35 = e_35;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, h_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_23), not_null(c_35)), term_q_23));
      {
        t = printnl_0(t);
        {
          t = term_s_23;
          t = exit_0(t);
        }
      }
    }
  }
  t = p_23;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATempty, term_v_23));
  {
    t = printnl_0(t);
    {
      t = term_s_23;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm k_35 = NULL;
  k_35 = t;
  t = SSL_TicksToSeconds(not_null(k_35));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm q_35 = NULL,u_35 = NULL,f_36 = NULL;
  q_35 = t;
  p_35 :
  if(match_cons(q_35, sym__2))
    {
      u_35 = ATgetArgument(q_35, 0);
      f_36 = ATgetArgument(q_35, 1);
      {
        ATerm y_23 = t;
        int c_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_35), not_null(f_36));
            LocalPopChoice(c_24);
          }
        else
          {
            t = y_23;
            t = SSL_addr(not_null(u_35), not_null(f_36));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm z_73 (ATerm), ATerm a_74 (ATerm))
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_73(t);
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
      {
        ATerm n_36 = NULL,o_36 = NULL,q_36 = NULL;
        n_36 = t;
        m_36 :
        if(((ATgetType(n_36) == AT_LIST) && !(ATisEmpty(n_36))))
          {
            o_36 = ATgetFirst((ATermList) n_36);
            q_36 = (ATerm) ATgetNext((ATermList) n_36);
            {
              ATerm y_36 = NULL;
              ATerm z_36 = NULL;
              t = not_null(q_36);
              {
                t = foldr_2(t, z_73, a_74);
                {
                  z_36 = t;
                  if(((y_36 != NULL) && (y_36 != z_36)))
                    _fail(z_36);
                  else
                    y_36 = z_36;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_36), not_null(y_36));
                t = a_74(t);
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
ATerm crush_2 (ATerm t, ATerm x_72 (ATerm), ATerm y_72 (ATerm))
{
  ATerm l_37 = NULL;
  ATerm n_37 = NULL;
  l_37 = t;
  {
    ATerm o_37 = NULL;
    ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL;
    t = not_null(l_37);
    {
      o_37 = t;
      {
        t = SSL_explode_term(not_null(o_37));
        {
          q_37 = t;
          j_37 :
          if(match_cons(q_37, sym__2))
            {
              r_37 = ATgetArgument(q_37, 0);
              s_37 = ATgetArgument(q_37, 1);
              if(((n_37 != NULL) && (n_37 != s_37)))
                _fail(s_37);
              else
                n_37 = s_37;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(n_37);
      t = foldr_2(t, x_72, y_72);
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
    ATerm i_5 (ATerm t)
    {
      t = term_w_21;
      return(t);
    }
    t = crush_2(t, i_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
  y_37 = t;
  x_37 :
  if(match_cons(y_37, sym__2))
    {
      z_37 = ATgetArgument(y_37, 0);
      a_38 = ATgetArgument(y_37, 1);
      {
        ATerm f_24;
        f_24 = t;
        {
          ATerm i_24 = t;
          int j_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(z_37), not_null(a_38));
              LocalPopChoice(j_24);
            }
          else
            {
              t = i_24;
              t = SSL_gtr(not_null(z_37), not_null(a_38));
            }
        }
        t = f_24;
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
  ATerm g_38 = NULL;
  ATerm k_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL;
      h_38 = t;
      f_38 :
      if(match_cons(h_38, sym__2))
        {
          i_38 = ATgetArgument(h_38, 0);
          j_38 = ATgetArgument(h_38, 1);
          {
            if(((g_38 != NULL) && (g_38 != i_38)))
              _fail(i_38);
            else
              g_38 = i_38;
            if(((g_38 != NULL) && (g_38 != j_38)))
              _fail(j_38);
            else
              g_38 = j_38;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(m_24);
    }
  else
    {
      t = k_24;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm h_62 (ATerm))
{
  ATerm n_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_24;
      p_24 = t;
      {
        ATerm m_38 = NULL;
        ATerm n_38 = NULL;
        t = term_b_8;
        {
          t = get_config_0(t);
          {
            n_38 = t;
            if(((m_38 != NULL) && (m_38 != n_38)))
              _fail(n_38);
            else
              m_38 = n_38;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_38), term_s_23);
          t = geq_0(t);
        }
      }
      t = p_24;
      t = h_62(t);
      LocalPopChoice(o_24);
    }
  else
    {
      t = n_24;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm r_38 = NULL,t_38 = NULL;
    ATerm q_24;
    q_24 = t;
    {
      ATerm s_38 = NULL;
      t = run_time_0(t);
      {
        s_38 = t;
        if(((r_38 != NULL) && (r_38 != s_38)))
          _fail(s_38);
        else
          r_38 = s_38;
      }
    }
    t = q_24;
    {
      ATerm u_38 = NULL;
      t = term_r_24;
      {
        t = get_config_0(t);
        {
          u_38 = t;
          if(((t_38 != NULL) && (t_38 != u_38)))
            _fail(u_38);
          else
            t_38 = u_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_24), not_null(r_38)), term_s_24), not_null(t_38)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, j_5);
  {
    t = term_w_21;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm b_39 = NULL;
  b_39 = t;
  a_39 :
  if(match_cons(b_39, sym_Version_0))
    {
      ATerm d_39 = NULL,f_39 = NULL;
      ATerm u_24;
      u_24 = t;
      {
        ATerm e_39 = NULL;
        t = SSLgetAnnotations(not_null(b_39));
        {
          e_39 = t;
          if(((d_39 != NULL) && (d_39 != e_39)))
            _fail(e_39);
          else
            d_39 = e_39;
        }
      }
      t = u_24;
      {
        ATerm g_39 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(d_39));
        {
          g_39 = t;
          if(((f_39 != NULL) && (f_39 != g_39)))
            _fail(g_39);
          else
            f_39 = g_39;
        }
        t = not_null(f_39);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_78 (ATerm))
{
  ATerm k_5 (ATerm t)
  {
    ATerm w_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(z_24);
      }
    else
      {
        t = w_24;
        {
          ATerm a_25 = t;
          int b_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(b_25);
            }
          else
            {
              t = a_25;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, k_5);
  t = g_78(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm l_39 = NULL;
  l_39 = t;
  t = SSL_table_create(not_null(l_39));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm p_39 = NULL;
  p_39 = t;
  {
    ATerm e_25;
    e_25 = t;
    {
      t = term_f_25;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_25, term_g_25, not_null(p_39));
          t = table_put_0(t);
        }
      }
    }
    t = e_25;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm z_39 = NULL;
  z_39 = t;
  t = SSL_table_destroy(not_null(z_39));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm g_40 = NULL;
  g_40 = t;
  t = SSL_exit(not_null(g_40));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
  k_40 = t;
  j_40 :
  if(((ATgetType(k_40) == AT_LIST) && ATisEmpty(k_40)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(k_40) == AT_LIST) && !(ATisEmpty(k_40))))
        {
          l_40 = ATgetFirst((ATermList) k_40);
          m_40 = (ATerm) ATgetNext((ATermList) k_40);
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
  ATerm h_25;
  h_25 = t;
  {
    ATerm p_40 = NULL;
    ATerm s_40 = NULL;
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        {
          ATerm q_40 = NULL;
          ATerm r_40 = NULL;
          r_40 = t;
          if(((q_40 != NULL) && (q_40 != r_40)))
            _fail(r_40);
          else
            q_40 = r_40;
          t = (ATerm) ATinsert(ATempty, not_null(q_40));
        }
      }
    {
      s_40 = t;
      if(((p_40 != NULL) && (p_40 != s_40)))
        _fail(s_40);
      else
        p_40 = s_40;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_21, not_null(p_40));
      t = printnl_0(t);
    }
  }
  t = h_25;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm o_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL;
  d_41 = t;
  a_41 :
  if(((ATgetType(d_41) == AT_LIST) && !(ATisEmpty(d_41))))
    {
      b_41 = ATgetFirst((ATermList) d_41);
      c_41 = (ATerm) ATgetNext((ATermList) d_41);
      {
        ATerm g_41 = NULL;
        t = not_null(c_41);
        {
          ATerm k_25;
          k_25 = t;
          {
            ATerm h_41 = NULL,j_41 = NULL,l_41 = NULL;
            ATerm l_25;
            l_25 = t;
            {
              ATerm i_41 = NULL;
              t = i_0(t);
              {
                i_41 = t;
                if(((h_41 != NULL) && (h_41 != i_41)))
                  _fail(i_41);
                else
                  h_41 = i_41;
              }
            }
            t = l_25;
            {
              ATerm k_41 = NULL;
              t = not_null(b_41);
              {
                t = h_0(t);
                {
                  k_41 = t;
                  if(((j_41 != NULL) && (j_41 != k_41)))
                    _fail(k_41);
                  else
                    j_41 = k_41;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(h_41)), not_null(j_41));
                {
                  l_41 = t;
                  if(((g_41 != NULL) && (g_41 != l_41)))
                    _fail(l_41);
                  else
                    g_41 = l_41;
                }
              }
            }
          }
          t = k_25;
          {
            ATerm l_5 (ATerm t)
            {
              t = not_null(g_41);
              return(t);
            }
            t = reverse_acc_2(t, h_0, l_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(d_41) == AT_LIST) && ATisEmpty(d_41)))
        {
          {
            t = term_u_16;
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
  ATerm r_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, r_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm n_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm s_54 (ATerm))
{
  ATerm w_41 = NULL,x_41 = NULL;
  w_41 = t;
  v_41 :
  if(match_cons(w_41, sym_Program_1))
    {
      x_41 = ATgetArgument(w_41, 0);
      {
        ATerm a_42 = NULL,c_42 = NULL;
        ATerm b_42 = NULL;
        t = SSLgetAnnotations(not_null(w_41));
        {
          b_42 = t;
          if(((a_42 != NULL) && (a_42 != b_42)))
            _fail(b_42);
          else
            a_42 = b_42;
        }
        {
          t = not_null(x_41);
          {
            ATerm e_42 = NULL;
            t = s_54(t);
            {
              c_42 = t;
              {
                ATerm f_42 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(c_42)), not_null(a_42));
                {
                  f_42 = t;
                  if(((e_42 != NULL) && (e_42 != f_42)))
                    _fail(f_42);
                  else
                    e_42 = f_42;
                }
                t = not_null(e_42);
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
  ATerm n_42 = NULL;
  ATerm n_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_42 = NULL;
      t = term_r_24;
      {
        t = get_config_0(t);
        {
          o_42 = t;
          if(((n_42 != NULL) && (n_42 != o_42)))
            _fail(o_42);
          else
            n_42 = o_42;
        }
      }
      LocalPopChoice(q_25);
    }
  else
    {
      t = n_25;
      {
        ATerm s_5 (ATerm t)
        {
          ATerm w_5 (ATerm t)
          {
            ATerm p_42 = NULL;
            p_42 = t;
            if(((n_42 != NULL) && (n_42 != p_42)))
              _fail(p_42);
            else
              n_42 = p_42;
            return(t);
          }
          t = Program_1(t, w_5);
          return(t);
        }
        t = fetch_1(t, s_5);
      }
    }
  {
    t = term_r_25;
    {
      t = echo_0(t);
      {
        t = term_u_25;
        {
          t = table_get_0(t);
          {
            ATerm x_5 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, x_5);
            {
              ATerm y_5 (ATerm t)
              {
                ATerm q_42 = NULL;
                ATerm r_42 = NULL;
                r_42 = t;
                if(((q_42 != NULL) && (q_42 != r_42)))
                  _fail(r_42);
                else
                  q_42 = r_42;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_42)), term_v_25);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, y_5);
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
  ATerm y_25;
  y_25 = t;
  {
    ATerm w_42 = NULL;
    ATerm x_42 = NULL;
    x_42 = t;
    if(((w_42 != NULL) && (w_42 != x_42)))
      _fail(x_42);
    else
      w_42 = x_42;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATempty, not_null(w_42)));
      t = printnl_0(t);
    }
  }
  t = y_25;
  return(t);
}
ATerm say_1 (ATerm t, ATerm c_81 (ATerm))
{
  ATerm z_25;
  z_25 = t;
  {
    t = c_81(t);
    t = debug_0(t);
  }
  t = z_25;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm t_54 (ATerm))
{
  ATerm e_43 = NULL,f_43 = NULL;
  e_43 = t;
  d_43 :
  if(match_cons(e_43, sym_Undefined_1))
    {
      f_43 = ATgetArgument(e_43, 0);
      {
        ATerm i_43 = NULL,k_43 = NULL;
        ATerm j_43 = NULL;
        t = SSLgetAnnotations(not_null(e_43));
        {
          j_43 = t;
          if(((i_43 != NULL) && (i_43 != j_43)))
            _fail(j_43);
          else
            i_43 = j_43;
        }
        {
          t = not_null(f_43);
          {
            ATerm m_43 = NULL;
            t = t_54(t);
            {
              k_43 = t;
              {
                ATerm n_43 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(k_43)), not_null(i_43));
                {
                  n_43 = t;
                  if(((m_43 != NULL) && (m_43 != n_43)))
                    _fail(n_43);
                  else
                    m_43 = n_43;
                }
                t = not_null(m_43);
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
ATerm fetch_1 (ATerm t, ATerm u_67 (ATerm))
{
  ATerm s_43 (ATerm t)
  {
    ATerm a_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, u_67, _id);
        LocalPopChoice(c_26);
      }
    else
      {
        t = a_26;
        t = Cons_2(t, _id, s_43);
      }
    return(t);
  }
  t = s_43(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_79 (ATerm))
{
  t = fetch_1(t, n_79);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_43 = NULL;
  x_43 = t;
  w_43 :
  if(match_cons(x_43, sym_Help_0))
    {
      ATerm z_43 = NULL,b_44 = NULL;
      ATerm f_26;
      f_26 = t;
      {
        ATerm a_44 = NULL;
        t = SSLgetAnnotations(not_null(x_43));
        {
          a_44 = t;
          if(((z_43 != NULL) && (z_43 != a_44)))
            _fail(a_44);
          else
            z_43 = a_44;
        }
      }
      t = f_26;
      {
        ATerm c_44 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(z_43));
        {
          c_44 = t;
          if(((b_44 != NULL) && (b_44 != c_44)))
            _fail(c_44);
          else
            b_44 = c_44;
        }
        t = not_null(b_44);
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
  ATerm k_44 = NULL;
  k_44 = t;
  t = SSL_implode_string(not_null(k_44));
  return(t);
}
ATerm concat_0 (ATerm t)
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
      {
        ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL;
        r_44 = t;
        q_44 :
        if(((ATgetType(r_44) == AT_LIST) && !(ATisEmpty(r_44))))
          {
            s_44 = ATgetFirst((ATermList) r_44);
            t_44 = (ATerm) ATgetNext((ATermList) r_44);
            {
              t = not_null(s_44);
              {
                ATerm z_5 (ATerm t)
                {
                  t = not_null(t_44);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm g_45 = NULL;
  ATerm i_45 = NULL;
  g_45 = t;
  {
    ATerm j_45 = NULL;
    ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL;
    t = not_null(g_45);
    {
      j_45 = t;
      {
        t = SSL_explode_term(not_null(j_45));
        {
          l_45 = t;
          e_45 :
          if(match_cons(l_45, sym__2))
            {
              m_45 = ATgetArgument(l_45, 0);
              n_45 = ATgetArgument(l_45, 1);
              f_45 :
              if(match_string(m_45, ""))
                {
                  if(((i_45 != NULL) && (i_45 != n_45)))
                    _fail(n_45);
                  else
                    i_45 = n_45;
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
      t = not_null(i_45);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm a_68 (ATerm))
{
  ATerm t_45 (ATerm t)
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, t_45);
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        {
          t = Nil_0(t);
          t = a_68(t);
        }
      }
    return(t);
  }
  t = t_45(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL;
  z_45 = t;
  y_45 :
  if(match_cons(z_45, sym__2))
    {
      a_46 = ATgetArgument(z_45, 0);
      b_46 = ATgetArgument(z_45, 1);
      {
        t = not_null(a_46);
        {
          ATerm a_6 (ATerm t)
          {
            t = not_null(b_46);
            return(t);
          }
          t = at_end_1(t, a_6);
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
  ATerm q_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(v_26);
    }
  else
    {
      t = q_26;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm g_46 = NULL;
  g_46 = t;
  t = SSL_explode_string(not_null(g_46));
  return(t);
}
ATerm _2 (ATerm t, ATerm p_52 (ATerm), ATerm q_52 (ATerm))
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL;
  p_46 = t;
  o_46 :
  if(match_cons(p_46, sym__2))
    {
      q_46 = ATgetArgument(p_46, 0);
      r_46 = ATgetArgument(p_46, 1);
      {
        ATerm x_46 = NULL,z_46 = NULL;
        ATerm y_46 = NULL;
        t = SSLgetAnnotations(not_null(p_46));
        {
          y_46 = t;
          if(((x_46 != NULL) && (x_46 != y_46)))
            _fail(y_46);
          else
            x_46 = y_46;
        }
        {
          t = not_null(q_46);
          {
            ATerm i_47 = NULL;
            t = p_52(t);
            {
              z_46 = t;
              {
                t = not_null(r_46);
                {
                  ATerm k_47 = NULL;
                  t = q_52(t);
                  {
                    i_47 = t;
                    {
                      ATerm l_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(z_46), not_null(i_47)), not_null(x_46));
                      {
                        l_47 = t;
                        if(((k_47 != NULL) && (k_47 != l_47)))
                          _fail(l_47);
                        else
                          k_47 = l_47;
                      }
                      t = not_null(k_47);
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
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL;
  t_47 = t;
  s_47 :
  if(match_cons(t_47, sym__2))
    {
      u_47 = ATgetArgument(t_47, 0);
      v_47 = ATgetArgument(t_47, 1);
      {
        ATerm y_26;
        y_26 = t;
        t = SSL_printnl(not_null(u_47), not_null(v_47));
        t = y_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm b_81 (ATerm))
{
  ATerm z_26;
  z_26 = t;
  {
    ATerm b_48 = NULL,d_48 = NULL;
    ATerm a_27;
    a_27 = t;
    {
      ATerm c_48 = NULL;
      t = b_81(t);
      {
        c_48 = t;
        if(((b_48 != NULL) && (b_48 != c_48)))
          _fail(c_48);
        else
          b_48 = c_48;
      }
    }
    t = a_27;
    {
      ATerm e_48 = NULL;
      e_48 = t;
      if(((d_48 != NULL) && (d_48 != e_48)))
        _fail(e_48);
      else
        d_48 = e_48;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_48)), not_null(b_48)));
        t = printnl_0(t);
      }
    }
  }
  t = z_26;
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_67 (ATerm))
{
  ATerm h_48 (ATerm t)
  {
    ATerm d_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(i_27);
      }
    else
      {
        t = d_27;
        t = Cons_2(t, l_67, h_48);
      }
    return(t);
  }
  t = h_48(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm j_48 = NULL;
  j_48 = t;
  t = SSL_is_string(not_null(j_48));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
      {
        ATerm l_27 = t;
        int m_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_6 (ATerm t)
            {
              ATerm n_27 = t;
              int q_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(q_27);
                }
              else
                {
                  t = n_27;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, b_6);
            LocalPopChoice(m_27);
          }
        else
          {
            t = l_27;
            {
              ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL;
              s_48 = t;
              r_48 :
              if(match_cons(s_48, sym_Path_1))
                {
                  t_48 = ATgetArgument(s_48, 0);
                  t = not_null(t_48);
                }
              else
                {
                  if(match_cons(s_48, sym_Var_1))
                    {
                      t_48 = ATgetArgument(s_48, 0);
                      {
                        t = not_null(t_48);
                        {
                          ATerm v_27 = t;
                          int w_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(w_27);
                            }
                          else
                            {
                              t = v_27;
                              {
                                ATerm d_6 (ATerm t)
                                {
                                  t = term_x_27;
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
                      if(match_cons(s_48, sym_Prefix_2))
                        {
                          t_48 = ATgetArgument(s_48, 0);
                          u_48 = ATgetArgument(s_48, 1);
                          {
                            ATerm z_48 = NULL,b_49 = NULL;
                            ATerm y_27;
                            y_27 = t;
                            {
                              ATerm a_49 = NULL;
                              t = not_null(t_48);
                              {
                                t = eval_config_0(t);
                                {
                                  a_49 = t;
                                  if(((z_48 != NULL) && (z_48 != a_49)))
                                    _fail(a_49);
                                  else
                                    z_48 = a_49;
                                }
                              }
                            }
                            t = y_27;
                            {
                              ATerm c_49 = NULL;
                              t = not_null(u_48);
                              {
                                t = eval_config_0(t);
                                {
                                  c_49 = t;
                                  if(((b_49 != NULL) && (b_49 != c_49)))
                                    _fail(c_49);
                                  else
                                    b_49 = c_49;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_48), not_null(b_49));
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
  ATerm k_49 = NULL;
  k_49 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_27, not_null(k_49));
    {
      t = table_get_0(t);
      {
        ATerm a_28 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm c_28;
              c_28 = t;
              {
                ATerm m_49 = NULL;
                ATerm n_49 = NULL;
                n_49 = t;
                if(((m_49 != NULL) && (m_49 != n_49)))
                  _fail(n_49);
                else
                  m_49 = n_49;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_z_27, not_null(k_49), not_null(m_49));
                  t = table_put_0(t);
                }
              }
              t = c_28;
            }
            LocalPopChoice(b_28);
          }
        else
          {
            t = a_28;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm a_66 (ATerm))
{
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_66(t);
      LocalPopChoice(e_28);
    }
  else
    {
      t = d_28;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL;
  s_49 = t;
  r_49 :
  if(match_cons(s_49, sym__2))
    {
      t_49 = ATgetArgument(s_49, 0);
      u_49 = ATgetArgument(s_49, 1);
      t = SSL_table_get(not_null(t_49), not_null(u_49));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL;
  b_50 = t;
  a_50 :
  if(match_cons(b_50, sym__3))
    {
      c_50 = ATgetArgument(b_50, 0);
      d_50 = ATgetArgument(b_50, 1);
      e_50 = ATgetArgument(b_50, 2);
      {
        ATerm i_28;
        i_28 = t;
        {
          ATerm i_50 = NULL;
          ATerm j_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_50), not_null(d_50));
          {
            ATerm l_28 = t;
            int p_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_28);
              }
            else
              {
                t = l_28;
                t = (ATerm) ATempty;
              }
            {
              j_50 = t;
              if(((i_50 != NULL) && (i_50 != j_50)))
                _fail(j_50);
              else
                i_50 = j_50;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_50), not_null(d_50), (ATerm) ATinsert(CheckATermList(not_null(i_50)), not_null(e_50)));
            t = table_put_0(t);
          }
        }
        t = i_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_80 (ATerm))
{
  ATerm n_50 = NULL;
  ATerm o_50 = NULL;
  t = term_u_16;
  {
    t = s_80(t);
    {
      o_50 = t;
      if(((n_50 != NULL) && (n_50 != o_50)))
        _fail(o_50);
      else
        n_50 = o_50;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_25, term_t_25, not_null(n_50));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL;
  u_50 = t;
  t_50 :
  if(match_string(u_50, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(u_50) == AT_LIST) && !(ATisEmpty(u_50))))
        {
          v_50 = ATgetFirst((ATermList) u_50);
          w_50 = (ATerm) ATgetNext((ATermList) u_50);
          {
            ATerm z_50 = NULL;
            ATerm r_28;
            r_28 = t;
            {
              t = not_null(v_50);
              t = a_0(t);
            }
            t = r_28;
            {
              ATerm a_51 = NULL;
              t = term_u_16;
              {
                t = d_0(t);
                {
                  a_51 = t;
                  if(((z_50 != NULL) && (z_50 != a_51)))
                    _fail(a_51);
                  else
                    z_50 = a_51;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(w_50)), not_null(z_50));
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
  ATerm g_6 (ATerm t)
  {
    ATerm f_51 = NULL;
    f_51 = t;
    e_51 :
    if(!(match_string(f_51, "--help")))
      {
        if(!(match_string(f_51, "-h")))
          {
            if(!(match_string(f_51, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm h_6 (ATerm t)
  {
    t = term_t_28;
    {
      t = set_config_0(t);
      t = term_u_28;
    }
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    t = term_v_28;
    return(t);
  }
  t = Option_3(t, g_6, h_6, i_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL;
  i_51 = t;
  h_51 :
  if(((ATgetType(i_51) == AT_LIST) && !(ATisEmpty(i_51))))
    {
      j_51 = ATgetFirst((ATermList) i_51);
      k_51 = (ATerm) ATgetNext((ATermList) i_51);
      t = (ATerm) ATinsert(CheckATermList(not_null(k_51)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_51)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_53 (ATerm), ATerm z_53 (ATerm))
{
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL;
  u_51 = t;
  t_51 :
  if(((ATgetType(u_51) == AT_LIST) && !(ATisEmpty(u_51))))
    {
      v_51 = ATgetFirst((ATermList) u_51);
      w_51 = (ATerm) ATgetNext((ATermList) u_51);
      {
        ATerm a_52 = NULL,o_52 = NULL;
        ATerm b_52 = NULL;
        t = SSLgetAnnotations(not_null(u_51));
        {
          b_52 = t;
          if(((a_52 != NULL) && (a_52 != b_52)))
            _fail(b_52);
          else
            a_52 = b_52;
        }
        {
          t = not_null(v_51);
          {
            ATerm s_52 = NULL;
            t = y_53(t);
            {
              o_52 = t;
              {
                t = not_null(w_51);
                {
                  ATerm u_52 = NULL;
                  t = z_53(t);
                  {
                    s_52 = t;
                    {
                      ATerm v_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(s_52)), not_null(o_52)), not_null(a_52));
                      {
                        v_52 = t;
                        if(((u_52 != NULL) && (u_52 != v_52)))
                          _fail(v_52);
                        else
                          u_52 = v_52;
                      }
                      t = not_null(u_52);
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
  ATerm f_53 = NULL;
  f_53 = t;
  e_53 :
  if(((ATgetType(f_53) == AT_LIST) && ATisEmpty(f_53)))
    {
      {
        ATerm h_53 = NULL,j_53 = NULL;
        ATerm w_28;
        w_28 = t;
        {
          ATerm i_53 = NULL;
          t = SSLgetAnnotations(not_null(f_53));
          {
            i_53 = t;
            if(((h_53 != NULL) && (h_53 != i_53)))
              _fail(i_53);
            else
              h_53 = i_53;
          }
        }
        t = w_28;
        {
          ATerm k_53 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(h_53));
          {
            k_53 = t;
            if(((j_53 != NULL) && (j_53 != k_53)))
              _fail(k_53);
            else
              j_53 = k_53;
          }
          t = not_null(j_53);
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
  ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL;
  q_53 = t;
  p_53 :
  if(match_cons(q_53, sym__2))
    {
      r_53 = ATgetArgument(q_53, 0);
      s_53 = ATgetArgument(q_53, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_z_27, not_null(r_53), not_null(s_53));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_80 (ATerm))
{
  ATerm x_28;
  x_28 = t;
  {
    ATerm y_28 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_29;
        t = q_80(t);
        LocalPopChoice(d_29);
      }
    else
      {
        t = y_28;
        {
        }
      }
  }
  t = x_28;
  {
    ATerm k_6 (ATerm t)
    {
      ATerm c_54 = NULL;
      ATerm f_29;
      f_29 = t;
      {
        ATerm a_54 = NULL;
        ATerm b_54 = NULL;
        b_54 = t;
        if(((a_54 != NULL) && (a_54 != b_54)))
          _fail(b_54);
        else
          a_54 = b_54;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_24, not_null(a_54));
          t = set_config_0(t);
        }
      }
      t = f_29;
      {
        ATerm d_54 = NULL;
        d_54 = t;
        if(((c_54 != NULL) && (c_54 != d_54)))
          _fail(d_54);
        else
          c_54 = d_54;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_54));
      }
      return(t);
    }
    ATerm l_6 (ATerm t)
    {
      ATerm g_29 = t;
      int l_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_29 = t;
          int p_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(p_29);
            }
          else
            {
              t = m_29;
              {
                t = q_80(t);
                t = Cons_2(t, _id, l_6);
              }
            }
          LocalPopChoice(l_29);
        }
      else
        {
          t = g_29;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, k_6, l_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm j_54 = NULL,k_54 = NULL,m_54 = NULL;
  ATerm q_29;
  q_29 = t;
  {
    ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL;
    n_54 = t;
    i_54 :
    if(match_cons(n_54, sym__3))
      {
        o_54 = ATgetArgument(n_54, 0);
        p_54 = ATgetArgument(n_54, 1);
        q_54 = ATgetArgument(n_54, 2);
        {
          if(((j_54 != NULL) && (j_54 != o_54)))
            _fail(o_54);
          else
            j_54 = o_54;
          {
            if(((k_54 != NULL) && (k_54 != p_54)))
              _fail(p_54);
            else
              k_54 = p_54;
            {
              if(((m_54 != NULL) && (m_54 != q_54)))
                _fail(q_54);
              else
                m_54 = q_54;
              t = SSL_table_put(not_null(j_54), not_null(k_54), not_null(m_54));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = q_29;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_80 (ATerm))
{
  ATerm v_54 = NULL;
  ATerm r_29;
  r_29 = t;
  {
    t = term_s_29;
    t = table_put_0(t);
  }
  t = r_29;
  {
    ATerm m_6 (ATerm t)
    {
      ATerm t_29 = t;
      int d_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_80(t);
          LocalPopChoice(d_30);
        }
      else
        {
          t = t_29;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, m_6);
    {
      ATerm e_30 = t;
      int f_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_30;
          g_30 = t;
          {
            ATerm h_30 = t;
            int j_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_s_28;
                t = get_config_0(t);
                LocalPopChoice(j_30);
              }
            else
              {
                t = h_30;
                t = fetch_1(t, Help_0);
              }
          }
          t = g_30;
          {
            t = system_usage_0(t);
            {
              t = term_w_21;
              t = exit_0(t);
            }
          }
          LocalPopChoice(f_30);
        }
      else
        {
          t = e_30;
          {
            ATerm k_30 = t;
            int l_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_6 (ATerm t)
                {
                  ATerm q_6 (ATerm t)
                  {
                    ATerm w_54 = NULL;
                    w_54 = t;
                    if(((v_54 != NULL) && (v_54 != w_54)))
                      _fail(w_54);
                    else
                      v_54 = w_54;
                    return(t);
                  }
                  t = Undefined_1(t, q_6);
                  return(t);
                }
                t = fetch_1(t, p_6);
                {
                  ATerm v_6 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_54)), term_m_30);
                    return(t);
                  }
                  t = say_1(t, v_6);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_s_23;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(l_30);
              }
            else
              {
                t = k_30;
                {
                }
              }
          }
        }
      {
        ATerm o_30;
        o_30 = t;
        {
          t = term_s_25;
          t = table_destroy_0(t);
        }
        t = o_30;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm p_78 (ATerm))
{
  t = parse_options_1(t, m_78);
  {
    t = store_options_0(t);
    {
      t = o_78(t);
      {
        ATerm p_30 = t;
        int t_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, n_78);
            LocalPopChoice(t_30);
          }
        else
          {
            t = p_30;
            {
              ATerm u_30 = t;
              int v_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_78(t);
                  t = report_success_0(t);
                  LocalPopChoice(v_30);
                }
              else
                {
                  t = u_30;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm q_78 (ATerm), ATerm r_78 (ATerm))
{
  t = option_wrap_4(t, q_78, default_usage_0, _id, r_78);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm c_77 (ATerm), ATerm d_77 (ATerm))
{
  ATerm w_6 (ATerm t)
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_77(t);
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm x_6 (ATerm t)
  {
    t = xtc_io_1(t, d_77);
    return(t);
  }
  t = option_wrap_2(t, w_6, x_6);
  return(t);
}
ATerm term_to_dot_0 (ATerm t)
{
  ATerm y_6 (ATerm t)
  {
    t = xtc_io_transform_1(t, to_adot_0);
    {
      ATerm a_7 (ATerm t)
      {
        t = term_y_30;
        return(t);
      }
      ATerm b_7 (ATerm t)
      {
        ATerm z_54 = NULL;
        ATerm a_55 = NULL;
        t = term_z_30;
        {
          t = xtc_find_0(t);
          {
            a_55 = t;
            if(((z_54 != NULL) && (z_54 != a_55)))
              _fail(a_55);
            else
              z_54 = a_55;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_54)), term_a_31);
        return(t);
      }
      t = xtc_transform_2(t, a_7, b_7);
      {
        ATerm c_7 (ATerm t)
        {
          t = term_g_31;
          return(t);
        }
        t = xtc_transform_1(t, c_7);
      }
    }
    return(t);
  }
  t = xtc_io_wrap_2(t, term_to_adot_options_0, y_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = term_to_dot_0(t);
  return(t);
}
