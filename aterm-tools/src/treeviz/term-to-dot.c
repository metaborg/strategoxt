#include <srts/stratego.h>
#include <srts/stratego-lib.h>
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
Symbol sym_None_0;
Symbol sym_Some_1;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
ATerm term_u_30;
ATerm term_t_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_v_29;
ATerm term_h_29;
ATerm term_v_28;
ATerm term_r_28;
ATerm term_n_28;
ATerm term_k_28;
ATerm term_g_28;
ATerm term_y_27;
ATerm term_s_27;
ATerm term_d_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_e_24;
ATerm term_c_24;
ATerm term_y_23;
ATerm term_v_23;
ATerm term_p_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_d_23;
ATerm term_x_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_g_21;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_q_18;
ATerm term_l_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_u_17;
ATerm term_n_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_g_17;
ATerm term_a_17;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_g_12;
ATerm term_d_12;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_o_11;
ATerm term_g_11;
ATerm term_a_11;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_l_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_o_9;
ATerm term_k_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_n_8;
ATerm term_m_8;
void init_constant_terms (void)
{
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_s_8);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_x_9);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_AttrId_2, term_v_13, term_y_13);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym__2, term_m_16, term_k_17);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym__2, term_j_16, term_k_17);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym__2, term_n_17, term_u_16);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym__2, term_n_21, term_k_17);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_a_22);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_22);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_k_17);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym__2, term_h_23, term_k_17);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym__2, term_u_25, term_v_25);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym__2, term_g_28, term_k_17);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__3, term_u_25, term_v_25, (ATerm) ATempty);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Dot-pretty.pp", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_1 (ATerm, ATerm a_78 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm q_75 (ATerm));
ATerm repeat_1 (ATerm, ATerm r_83 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm r_62 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm t_62 (ATerm));
ATerm set_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm c_63 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm i_78 (ATerm), ATerm j_78 (ATerm));
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm k_62 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm z_77 (ATerm));
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm t_54 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm b_78 (ATerm), ATerm c_78 (ATerm));
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
ATerm string_as_chars_1 (ATerm, ATerm n_83 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm EdgeToDot_0 (ATerm);
ATerm ListEdgeToDot_0 (ATerm);
ATerm graph_to_adot_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm NodeId_0 (ATerm);
ATerm address_0 (ATerm);
ATerm term_to_graph_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm a_74 (ATerm), ATerm b_74 (ATerm));
ATerm union_1 (ATerm, ATerm w_73 (ATerm));
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm p_73 (ATerm));
ATerm foldr_3 (ATerm, ATerm p_74 (ATerm), ATerm q_74 (ATerm), ATerm r_74 (ATerm));
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm s_62 (ATerm));
ATerm term_to_tree_0 (ATerm);
ATerm to_adot_0 (ATerm);
ATerm close_file_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm assert_1 (ATerm, ATerm v_78 (ATerm));
ATerm obsolete_1 (ATerm, ATerm a_82 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm xtc_io_transform_1 (ATerm, ATerm k_78 (ATerm));
ATerm term_to_adot_options_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm s_78 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm w_66 (ATerm), ATerm x_66 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm r_78 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm l_77 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm m_77 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm n_74 (ATerm), ATerm o_74 (ATerm));
ATerm crush_2 (ATerm, ATerm l_73 (ATerm), ATerm m_73 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm o_62 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm y_78 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm g_81 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_81 (ATerm));
ATerm Program_1 (ATerm, ATerm a_55 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm u_81 (ATerm));
ATerm Undefined_1 (ATerm, ATerm b_55 (ATerm));
ATerm fetch_1 (ATerm, ATerm i_68 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_80 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm o_68 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm w_52 (ATerm), ATerm x_52 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm t_81 (ATerm));
ATerm map_1 (ATerm, ATerm z_67 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm h_66 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm k_81 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm f_54 (ATerm), ATerm g_54 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_81 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm h_81 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm h_79 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm i_79 (ATerm), ATerm j_79 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm q_77 (ATerm), ATerm r_77 (ATerm));
ATerm term_to_dot_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_transform_1 (ATerm t, ATerm a_78 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, a_78, b_0);
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
  ATerm d_1 = NULL;
  d_1 = t;
  {
    t = table_keys_0(t);
    {
      ATerm e_0 (ATerm t)
      {
        ATerm i_1 = NULL;
        ATerm k_1 = NULL;
        i_1 = t;
        {
          ATerm y_1 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_1), not_null(i_1));
          {
            t = table_get_0(t);
            {
              y_1 = t;
              if(((k_1 != NULL) && (k_1 != y_1)))
                _fail(y_1);
              else
                k_1 = y_1;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_1), not_null(k_1));
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
  ATerm h_8;
  h_8 = t;
  {
    ATerm u_2 = NULL;
    ATerm y_2 = NULL;
    y_2 = t;
    if(((u_2 != NULL) && (u_2 != y_2)))
      _fail(y_2);
    else
      u_2 = y_2;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_8, not_null(u_2));
      t = printnl_0(t);
    }
  }
  t = h_8;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm e_3 = NULL;
  ATerm g_3 = NULL,h_3 = NULL;
  e_3 = t;
  {
    ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(e_3)));
    {
      t = table_get_0(t);
      {
        i_3 = t;
        c_3 :
        if(((ATgetType(i_3) == AT_LIST) && !(ATisEmpty(i_3))))
          {
            j_3 = ATgetFirst((ATermList) i_3);
            m_3 = (ATerm) ATgetNext((ATermList) i_3);
            d_3 :
            if(match_cons(j_3, sym__2))
              {
                k_3 = ATgetArgument(j_3, 0);
                l_3 = ATgetArgument(j_3, 1);
                {
                  if(((g_3 != NULL) && (g_3 != k_3)))
                    _fail(k_3);
                  else
                    g_3 = k_3;
                  if(((h_3 != NULL) && (h_3 != l_3)))
                    _fail(l_3);
                  else
                    h_3 = l_3;
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
    t = not_null(h_3);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL;
  t_3 = t;
  s_3 :
  if(match_cons(t_3, sym__2))
    {
      u_3 = ATgetArgument(t_3, 0);
      v_3 = ATgetArgument(t_3, 1);
      {
        ATerm y_3 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(u_3)));
        {
          t = table_get_0(t);
          {
            ATerm f_0 (ATerm t)
            {
              ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL;
              z_3 = t;
              r_3 :
              if(match_cons(z_3, sym__2))
                {
                  a_4 = ATgetArgument(z_3, 0);
                  b_4 = ATgetArgument(z_3, 1);
                  {
                    if(((v_3 != NULL) && (v_3 != a_4)))
                      _fail(a_4);
                    else
                      v_3 = a_4;
                    if(((y_3 != NULL) && (y_3 != b_4)))
                      _fail(b_4);
                    else
                      y_3 = b_4;
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
        t = not_null(y_3);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm q_75 (ATerm))
{
  ATerm o_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(p_8);
    }
  else
    {
      t = o_8;
      {
        ATerm q_8 = t;
        int r_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_0 (ATerm t)
            {
              t = filter_1(t, q_75);
              return(t);
            }
            t = Cons_2(t, q_75, p_0);
            LocalPopChoice(r_8);
          }
        else
          {
            t = q_8;
            {
              ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL;
              g_4 = t;
              f_4 :
              if(((ATgetType(g_4) == AT_LIST) && !(ATisEmpty(g_4))))
                {
                  h_4 = ATgetFirst((ATermList) g_4);
                  i_4 = (ATerm) ATgetNext((ATermList) g_4);
                  {
                    t = not_null(i_4);
                    t = filter_1(t, q_75);
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
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm r_83 (ATerm))
{
  ATerm l_4 (ATerm t)
  {
    ATerm q_0 (ATerm t)
    {
      t = r_83(t);
      t = l_4(t);
      return(t);
    }
    t = try_1(t, q_0);
    return(t);
  }
  t = l_4(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    t = term_t_8;
    {
      t = table_get_0(t);
      {
        t = filter_1(t, xtc_read_0);
        {
          ATerm b_9 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_9;
            }
        }
      }
    }
    return(t);
  }
  t = repeat_1(t, r_0);
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm r_62 (ATerm))
{
  ATerm s_0 (ATerm t)
  {
    ATerm g_9;
    g_9 = t;
    {
      ATerm n_4 = NULL;
      ATerm o_4 = NULL;
      t = term_h_9;
      {
        t = get_config_0(t);
        {
          o_4 = t;
          if(((n_4 != NULL) && (n_4 != o_4)))
            _fail(o_4);
          else
            n_4 = o_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_4), term_i_9);
        t = geq_0(t);
      }
    }
    t = g_9;
    t = r_62(t);
    return(t);
  }
  t = try_1(t, s_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm t_62 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm j_9;
    j_9 = t;
    {
      ATerm r_4 = NULL;
      ATerm s_4 = NULL;
      t = term_h_9;
      {
        t = get_config_0(t);
        {
          s_4 = t;
          if(((r_4 != NULL) && (r_4 != s_4)))
            _fail(s_4);
          else
            r_4 = s_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_4), term_k_9);
        t = geq_0(t);
      }
    }
    t = j_9;
    t = t_62(t);
    return(t);
  }
  t = try_1(t, t_0);
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
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL;
  y_4 = t;
  x_4 :
  if(match_cons(y_4, sym__3))
    {
      z_4 = ATgetArgument(y_4, 0);
      a_5 = ATgetArgument(y_4, 1);
      b_5 = ATgetArgument(y_4, 2);
      {
        ATerm l_9;
        l_9 = t;
        {
          ATerm f_5 = NULL;
          ATerm g_5 = NULL,i_5 = NULL;
          ATerm h_5 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_4), not_null(a_5));
          {
            ATerm m_9 = t;
            int n_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(n_9);
              }
            else
              {
                t = m_9;
                t = (ATerm) ATempty;
              }
            {
              h_5 = t;
              if(((g_5 != NULL) && (g_5 != h_5)))
                _fail(h_5);
              else
                g_5 = h_5;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_5), not_null(b_5));
            {
              t = union_0(t);
              {
                i_5 = t;
                if(((f_5 != NULL) && (f_5 != i_5)))
                  _fail(i_5);
                else
                  f_5 = i_5;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_4), not_null(a_5), not_null(f_5));
            t = set_0(t);
          }
        }
        t = l_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm c_63 (ATerm))
{
  ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL;
  q_5 = t;
  p_5 :
  if(match_cons(q_5, sym__2))
    {
      r_5 = ATgetArgument(q_5, 0);
      s_5 = ATgetArgument(q_5, 1);
      {
        t = not_null(s_5);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
            v_5 = t;
            o_5 :
            if(match_cons(v_5, sym__2))
              {
                w_5 = ATgetArgument(v_5, 0);
                x_5 = ATgetArgument(v_5, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(r_5), not_null(w_5), not_null(x_5));
                  t = c_63(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, u_0);
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
  ATerm e_6 = NULL;
  ATerm g_6 = NULL;
  e_6 = t;
  {
    ATerm v_0 (ATerm t)
    {
      ATerm w_0 (ATerm t)
      {
        t = term_o_9;
        return(t);
      }
      t = debug_1(t, w_0);
      return(t);
    }
    t = if_verbose5_1(t, v_0);
    {
      ATerm r_9 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATmakeAppl(sym_Imported_1, not_null(e_6)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_9;
        }
      {
        ATerm w_9;
        w_9 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_n_8, term_x_9, (ATerm) ATinsert(ATempty, not_null(e_6)));
          t = table_put_0(t);
        }
        t = w_9;
        {
          ATerm x_0 (ATerm t)
          {
            ATerm y_0 (ATerm t)
            {
              t = term_y_9;
              return(t);
            }
            t = debug_1(t, y_0);
            return(t);
          }
          t = if_verbose4_1(t, x_0);
          {
            ATerm z_9 = t;
            int a_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                LocalPopChoice(a_10);
              }
            else
              {
                t = z_9;
                t = (ATerm) ATempty;
              }
            {
              ATerm z_0 (ATerm t)
              {
                ATerm a_1 (ATerm t)
                {
                  t = term_b_10;
                  return(t);
                }
                t = say_1(t, a_1);
                return(t);
              }
              t = if_verbose6_1(t, z_0);
              {
                ATerm h_6 = NULL;
                h_6 = t;
                if(((g_6 != NULL) && (g_6 != h_6)))
                  _fail(h_6);
                else
                  g_6 = h_6;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_8, not_null(g_6));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm b_1 (ATerm t)
                      {
                        ATerm c_1 (ATerm t)
                        {
                          t = term_c_10;
                          return(t);
                        }
                        t = say_1(t, c_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, b_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_n_8, (ATerm)ATmakeAppl(sym_Imported_1, not_null(e_6)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm e_1 (ATerm t)
                            {
                              ATerm f_1 (ATerm t)
                              {
                                t = term_b_10;
                                return(t);
                              }
                              t = say_1(t, f_1);
                              return(t);
                            }
                            t = if_verbose4_1(t, e_1);
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
ATerm getenv_0 (ATerm t)
{
  ATerm l_6 = NULL;
  l_6 = t;
  t = SSL_getenv(not_null(l_6));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_10;
      t = get_config_0(t);
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_q_10;
            t = getenv_0(t);
            LocalPopChoice(p_10);
          }
        else
          {
            t = o_10;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm h_1 (ATerm t)
    {
      t = term_r_10;
      return(t);
    }
    t = debug_1(t, h_1);
    return(t);
  }
  t = if_verbose5_1(t, g_1);
  {
    ATerm s_10;
    s_10 = t;
    {
      ATerm y_10 = t;
      int z_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_a_11;
          t = table_get_0(t);
          LocalPopChoice(z_10);
        }
      else
        {
          t = y_10;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = s_10;
    {
      ATerm j_1 (ATerm t)
      {
        ATerm l_1 (ATerm t)
        {
          t = term_g_11;
          return(t);
        }
        t = debug_1(t, l_1);
        return(t);
      }
      t = if_verbose5_1(t, j_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_1 (ATerm t)
      {
        ATerm n_1 (ATerm t)
        {
          t = term_o_11;
          return(t);
        }
        t = debug_1(t, n_1);
        return(t);
      }
      t = if_verbose5_1(t, m_1);
      {
        t = xtc_load_0(t);
        {
          ATerm p_11 = t;
          int q_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(q_11);
            }
          else
            {
              t = p_11;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm o_1 (ATerm t)
            {
              ATerm p_1 (ATerm t)
              {
                t = term_o_11;
                return(t);
              }
              t = debug_1(t, p_1);
              return(t);
            }
            t = if_verbose5_1(t, o_1);
          }
        }
      }
      LocalPopChoice(i_11);
    }
  else
    {
      t = h_11;
      {
        ATerm p_6 = NULL;
        ATerm q_6 = NULL;
        q_6 = t;
        if(((p_6 != NULL) && (p_6 != q_6)))
          _fail(q_6);
        else
          p_6 = q_6;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_11), not_null(p_6)), term_r_11);
          {
            t = error_0(t);
            {
              ATerm q_1 (ATerm t)
              {
                t = term_n_8;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm r_1 (ATerm t)
                    {
                      t = term_u_11;
                      return(t);
                    }
                    t = debug_1(t, r_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, q_1);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm i_78 (ATerm), ATerm j_78 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, i_78, j_78);
    t = read_from_0(t);
  }
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL;
  u_6 = t;
  t_6 :
  if(match_cons(u_6, sym__2))
    {
      v_6 = ATgetArgument(u_6, 0);
      w_6 = ATgetArgument(u_6, 1);
      t = SSL_execvp(not_null(v_6), not_null(w_6));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm b_7 = NULL;
  b_7 = t;
  t = SSL_waitpid(not_null(b_7));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm k_62 (ATerm))
{
  ATerm l_7 = NULL;
  ATerm n_7 = NULL;
  l_7 = t;
  {
    t = fork_0(t);
    {
      n_7 = t;
      {
        ATerm v_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_7 = NULL;
            p_7 = t;
            h_7 :
            if(match_int(p_7, 0))
              {
                t = not_null(l_7);
                t = k_62(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(a_12);
          }
        else
          {
            t = v_11;
            {
              ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL;
              t = not_null(n_7);
              {
                t = waitpid_0(t);
                {
                  q_7 = t;
                  j_7 :
                  if(match_cons(q_7, sym_WaitStatus_3))
                    {
                      r_7 = ATgetArgument(q_7, 0);
                      s_7 = ATgetArgument(q_7, 1);
                      t_7 = ATgetArgument(q_7, 2);
                      k_7 :
                      if(match_int(r_7, 0))
                        {
                          t = not_null(l_7);
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
  ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL;
  a_8 = t;
  z_7 :
  if(match_cons(a_8, sym__2))
    {
      b_8 = ATgetArgument(a_8, 0);
      c_8 = ATgetArgument(a_8, 1);
      {
        ATerm s_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_8), not_null(c_8));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, s_1);
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
ATerm xtc_command_1 (ATerm t, ATerm z_77 (ATerm))
{
  ATerm i_8 = NULL;
  ATerm b_12;
  b_12 = t;
  {
    ATerm j_8 = NULL;
    t = z_77(t);
    {
      t = xtc_find_warning_0(t);
      {
        j_8 = t;
        if(((i_8 != NULL) && (i_8 != j_8)))
          _fail(j_8);
        else
          i_8 = j_8;
      }
    }
  }
  t = b_12;
  {
    ATerm c_12;
    c_12 = t;
    {
      ATerm k_8 = NULL;
      ATerm l_8 = NULL;
      l_8 = t;
      if(((k_8 != NULL) && (k_8 != l_8)))
        _fail(l_8);
      else
        k_8 = l_8;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_8), not_null(k_8));
        t = call_0(t);
      }
    }
    t = c_12;
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm v_8 = NULL,w_8 = NULL;
  v_8 = t;
  u_8 :
  if(match_cons(v_8, sym_stdin_0))
    {
      ATerm x_8 = NULL;
      ATerm y_8 = NULL;
      ATerm z_8 = NULL;
      t = xtc_new_file_0(t);
      {
        y_8 = t;
        {
          if(((x_8 != NULL) && (x_8 != y_8)))
            _fail(y_8);
          else
            x_8 = y_8;
          {
            ATerm a_9 = NULL;
            t = o_0(t);
            {
              a_9 = t;
              if(((z_8 != NULL) && (z_8 != a_9)))
                _fail(a_9);
              else
                z_8 = a_9;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_8), (ATerm) ATinsert(ATinsert(ATempty, not_null(x_8)), term_d_12));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(x_8);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_8));
    }
  else
    {
      if(match_cons(v_8, sym_FILE_1))
        {
          w_8 = ATgetArgument(v_8, 0);
          {
            ATerm c_9 = NULL;
            ATerm d_9 = NULL;
            t = not_null(w_8);
            {
              ATerm e_9 = NULL;
              t = xtc_new_file_0(t);
              {
                d_9 = t;
                {
                  if(((c_9 != NULL) && (c_9 != d_9)))
                    _fail(d_9);
                  else
                    c_9 = d_9;
                  {
                    ATerm f_9 = NULL;
                    t = o_0(t);
                    {
                      f_9 = t;
                      if(((e_9 != NULL) && (e_9 != f_9)))
                        _fail(f_9);
                      else
                        e_9 = f_9;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_9), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(c_9)), term_d_12), not_null(w_8)), term_g_12));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(c_9);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_9));
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
  ATerm q_9 = NULL;
  q_9 = t;
  p_9 :
  if(match_cons(q_9, sym_stdin_0))
    {
      ATerm s_9 = NULL,u_9 = NULL;
      ATerm h_12;
      h_12 = t;
      {
        ATerm t_9 = NULL;
        t = SSLgetAnnotations(not_null(q_9));
        {
          t_9 = t;
          if(((s_9 != NULL) && (s_9 != t_9)))
            _fail(t_9);
          else
            s_9 = t_9;
        }
      }
      t = h_12;
      {
        ATerm v_9 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(s_9));
        {
          v_9 = t;
          if(((u_9 != NULL) && (u_9 != v_9)))
            _fail(v_9);
          else
            u_9 = v_9;
        }
        t = not_null(u_9);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm t_54 (ATerm))
{
  ATerm e_10 = NULL,f_10 = NULL;
  e_10 = t;
  d_10 :
  if(match_cons(e_10, sym_FILE_1))
    {
      f_10 = ATgetArgument(e_10, 0);
      {
        ATerm i_10 = NULL,k_10 = NULL;
        ATerm j_10 = NULL;
        t = SSLgetAnnotations(not_null(e_10));
        {
          j_10 = t;
          if(((i_10 != NULL) && (i_10 != j_10)))
            _fail(j_10);
          else
            i_10 = j_10;
        }
        {
          t = not_null(f_10);
          {
            ATerm m_10 = NULL;
            t = t_54(t);
            {
              k_10 = t;
              {
                ATerm n_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(k_10)), not_null(i_10));
                {
                  n_10 = t;
                  if(((m_10 != NULL) && (m_10 != n_10)))
                    _fail(n_10);
                  else
                    m_10 = n_10;
                }
                t = not_null(m_10);
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
ATerm xtc_transform_2 (ATerm t, ATerm b_78 (ATerm), ATerm c_78 (ATerm))
{
  ATerm i_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_12 = t;
      int m_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(m_12);
        }
      else
        {
          t = k_12;
          t = stdin_0(t);
        }
      LocalPopChoice(j_12);
      t = xtc_transform_file_2(t, b_78, c_78);
    }
  else
    {
      t = i_12;
      t = xtc_transform_term_2(t, b_78, c_78);
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
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
  v_10 = t;
  t_10 :
  if(((ATgetType(v_10) == AT_LIST) && !(ATisEmpty(v_10))))
    {
      w_10 = ATgetFirst((ATermList) v_10);
      x_10 = (ATerm) ATgetNext((ATermList) v_10);
      u_10 :
      if(match_int(w_10, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(x_10)), term_o_12), term_n_12);
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
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL;
  d_11 = t;
  b_11 :
  if(((ATgetType(d_11) == AT_LIST) && !(ATisEmpty(d_11))))
    {
      e_11 = ATgetFirst((ATermList) d_11);
      f_11 = (ATerm) ATgetNext((ATermList) d_11);
      c_11 :
      if(match_int(e_11, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(f_11)), term_n_12), term_n_12);
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
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
  l_11 = t;
  j_11 :
  if(((ATgetType(l_11) == AT_LIST) && !(ATisEmpty(l_11))))
    {
      m_11 = ATgetFirst((ATermList) l_11);
      n_11 = (ATerm) ATgetNext((ATermList) l_11);
      k_11 :
      if(match_int(m_11, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(n_11)), term_p_12), term_n_12);
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
  ATerm q_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      LocalPopChoice(v_12);
    }
  else
    {
      t = q_12;
      {
        ATerm w_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            LocalPopChoice(a_13);
          }
        else
          {
            t = w_12;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm i_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0(t);
      {
        ATerm t_1 (ATerm t)
        {
          t = Cons_2(t, _id, escape_chars_0);
          return(t);
        }
        t = Cons_2(t, _id, t_1);
      }
      LocalPopChoice(k_13);
    }
  else
    {
      t = i_13;
      {
        ATerm l_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            LocalPopChoice(q_13);
          }
        else
          {
            t = l_13;
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
  ATerm s_11 = NULL;
  s_11 = t;
  t = SSL_is_int(not_null(s_11));
  return(t);
}
ATerm quote_chars_0 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL;
  x_11 = t;
  w_11 :
  if(match_cons(x_11, sym__2))
    {
      y_11 = ATgetArgument(x_11, 0);
      z_11 = ATgetArgument(x_11, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_11)), not_null(y_11)), (ATerm) ATinsert(ATempty, not_null(y_11)));
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
  ATerm e_12 = NULL;
  ATerm f_12 = NULL;
  f_12 = t;
  if(((e_12 != NULL) && (e_12 != f_12)))
    _fail(f_12);
  else
    e_12 = f_12;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_12, not_null(e_12));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm n_83 (ATerm))
{
  t = explode_string_0(t);
  {
    t = n_83(t);
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
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
  s_12 = t;
  r_12 :
  if(match_cons(s_12, sym__2))
    {
      t_12 = ATgetArgument(s_12, 0);
      u_12 = ATgetArgument(s_12, 1);
      {
        ATerm r_13 = t;
        int s_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_12 = NULL,y_12 = NULL,e_13 = NULL,g_13 = NULL;
            ATerm t_13;
            t_13 = t;
            {
              ATerm z_12 = NULL;
              ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
              t = not_null(u_12);
              {
                z_12 = t;
                {
                  t = SSL_explode_term(not_null(z_12));
                  {
                    b_13 = t;
                    l_12 :
                    if(match_cons(b_13, sym__2))
                      {
                        c_13 = ATgetArgument(b_13, 0);
                        d_13 = ATgetArgument(b_13, 1);
                        {
                          if(((x_12 != NULL) && (x_12 != c_13)))
                            _fail(c_13);
                          else
                            x_12 = c_13;
                          if(((y_12 != NULL) && (y_12 != d_13)))
                            _fail(d_13);
                          else
                            y_12 = d_13;
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
            t = t_13;
            {
              ATerm u_13;
              u_13 = t;
              {
                ATerm f_13 = NULL;
                t = not_null(x_12);
                {
                  t = escape_0(t);
                  {
                    t = double_quote_0(t);
                    {
                      f_13 = t;
                      if(((e_13 != NULL) && (e_13 != f_13)))
                        _fail(f_13);
                      else
                        e_13 = f_13;
                    }
                  }
                }
              }
              t = u_13;
              {
                ATerm j_13 = NULL;
                t = not_null(y_12);
                {
                  ATerm u_1 (ATerm t)
                  {
                    ATerm h_13 = NULL;
                    h_13 = t;
                    t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_12)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_13)))));
                    return(t);
                  }
                  t = map_1(t, u_1);
                  {
                    j_13 = t;
                    if(((g_13 != NULL) && (g_13 != j_13)))
                      _fail(j_13);
                    else
                      g_13 = j_13;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(g_13)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_12)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_v_13, not_null(e_13)))))));
              }
            }
            LocalPopChoice(s_13);
          }
        else
          {
            t = r_13;
            {
              ATerm m_13 = NULL;
              ATerm n_13 = NULL,p_13 = NULL;
              t = not_null(u_12);
              {
                t = is_int_0(t);
                {
                  ATerm o_13 = NULL;
                  t = not_null(u_12);
                  {
                    t = int_to_string_0(t);
                    {
                      t = escape_0(t);
                      {
                        o_13 = t;
                        if(((n_13 != NULL) && (n_13 != o_13)))
                          _fail(o_13);
                        else
                          n_13 = o_13;
                      }
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_13), not_null(n_13)), term_w_13);
                    {
                      t = concat_strings_0(t);
                      {
                        p_13 = t;
                        if(((m_13 != NULL) && (m_13 != p_13)))
                          _fail(p_13);
                        else
                          m_13 = p_13;
                      }
                    }
                  }
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_12)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_v_13, not_null(m_13)))))));
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
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL;
  d_14 = t;
  c_14 :
  if(match_cons(d_14, sym__2))
    {
      e_14 = ATgetArgument(d_14, 0);
      f_14 = ATgetArgument(d_14, 1);
      {
        ATerm i_14 = NULL;
        ATerm x_13;
        x_13 = t;
        {
          t = not_null(f_14);
          t = is_list_0(t);
        }
        t = x_13;
        {
          ATerm l_14 = NULL;
          t = not_null(f_14);
          {
            ATerm v_1 (ATerm t)
            {
              ATerm j_14 = NULL;
              j_14 = t;
              t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_14)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(j_14)))));
              return(t);
            }
            t = map_1(t, v_1);
            {
              l_14 = t;
              if(((i_14 != NULL) && (i_14 != l_14)))
                _fail(l_14);
              else
                i_14 = l_14;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(i_14)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_14)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_z_13)))));
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
  ATerm r_14 = NULL;
  ATerm t_14 = NULL;
  r_14 = t;
  {
    ATerm u_14 = NULL;
    t = not_null(r_14);
    {
      ATerm w_1 (ATerm t)
      {
        ATerm a_14 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ListEdgeToDot_0(t);
            LocalPopChoice(b_14);
          }
        else
          {
            t = a_14;
            t = EdgeToDot_0(t);
          }
        return(t);
      }
      t = map_1(t, w_1);
      {
        t = concat_0(t);
        {
          u_14 = t;
          if(((t_14 != NULL) && (t_14 != u_14)))
            _fail(u_14);
          else
            t_14 = u_14;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_g_14, not_null(t_14));
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm y_14 = NULL;
  y_14 = t;
  t = SSL_int_to_string(not_null(y_14));
  return(t);
}
ATerm NodeId_0 (ATerm t)
{
  ATerm c_15 = NULL;
  ATerm d_15 = NULL;
  t = int_to_string_0(t);
  {
    d_15 = t;
    if(((c_15 != NULL) && (c_15 != d_15)))
      _fail(d_15);
    else
      c_15 = d_15;
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, term_h_14, not_null(c_15));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm address_0 (ATerm t)
{
  ATerm g_15 = NULL;
  g_15 = t;
  t = SSL_address(not_null(g_15));
  return(t);
}
ATerm term_to_graph_0 (ATerm t)
{
  ATerm m_15 = NULL,o_15 = NULL,q_15 = NULL;
  ATerm k_14;
  k_14 = t;
  {
    ATerm n_15 = NULL;
    t = address_0(t);
    {
      t = NodeId_0(t);
      {
        n_15 = t;
        if(((m_15 != NULL) && (m_15 != n_15)))
          _fail(n_15);
        else
          m_15 = n_15;
      }
    }
  }
  t = k_14;
  {
    ATerm m_14;
    m_14 = t;
    {
      ATerm p_15 = NULL;
      ATerm n_14 = t;
      int o_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_1 (ATerm t)
          {
            t = address_0(t);
            t = NodeId_0(t);
            return(t);
          }
          t = map_1(t, x_1);
          LocalPopChoice(o_14);
        }
      else
        {
          t = n_14;
          {
            ATerm z_1 (ATerm t)
            {
              t = address_0(t);
              t = NodeId_0(t);
              return(t);
            }
            t = _all(t, z_1);
          }
        }
      {
        p_15 = t;
        if(((o_15 != NULL) && (o_15 != p_15)))
          _fail(p_15);
        else
          o_15 = p_15;
      }
    }
    t = m_14;
    {
      ATerm r_15 = NULL;
      ATerm p_14 = t;
      int q_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_2 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = foldr_3(t, a_2, union_0, term_to_graph_0);
          LocalPopChoice(q_14);
        }
      else
        {
          t = p_14;
          {
            ATerm b_2 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, b_2, union_0, term_to_graph_0);
          }
        }
      {
        r_15 = t;
        if(((q_15 != NULL) && (q_15 != r_15)))
          _fail(r_15);
        else
          q_15 = r_15;
      }
      t = (ATerm) ATinsert(CheckATermList(not_null(q_15)), (ATerm) ATmakeAppl(sym__2, not_null(m_15), not_null(o_15)));
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL;
  y_15 = t;
  x_15 :
  if(match_cons(y_15, sym__2))
    {
      z_15 = ATgetArgument(y_15, 0);
      a_16 = ATgetArgument(y_15, 1);
      if(((z_15 != NULL) && (z_15 != a_16)))
        _fail(a_16);
      else
        z_15 = a_16;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm a_74 (ATerm), ATerm b_74 (ATerm))
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
  g_16 = t;
  f_16 :
  if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
    {
      h_16 = ATgetFirst((ATermList) g_16);
      i_16 = (ATerm) ATgetNext((ATermList) g_16);
      {
        t = b_74(t);
        {
          ATerm c_2 (ATerm t)
          {
            ATerm l_16 = NULL;
            l_16 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_16), not_null(l_16));
              t = a_74(t);
            }
            return(t);
          }
          t = fetch_1(t, c_2);
        }
        t = not_null(i_16);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm w_73 (ATerm))
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
  r_16 = t;
  q_16 :
  if(match_cons(r_16, sym__2))
    {
      s_16 = ATgetArgument(r_16, 0);
      t_16 = ATgetArgument(r_16, 1);
      {
        t = not_null(s_16);
        {
          ATerm x_16 (ATerm t)
          {
            ATerm s_14 = t;
            int v_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(t_16);
                LocalPopChoice(v_14);
              }
            else
              {
                t = s_14;
                {
                  ATerm w_14 = t;
                  int x_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_2 (ATerm t)
                      {
                        t = not_null(t_16);
                        return(t);
                      }
                      t = HdMember_p__2(t, w_73, d_2);
                      t = x_16(t);
                      LocalPopChoice(x_14);
                    }
                  else
                    {
                      t = w_14;
                      t = Cons_2(t, _id, x_16);
                    }
                }
              }
            return(t);
          }
          t = x_16(t);
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
ATerm crush_3 (ATerm t, ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm p_73 (ATerm))
{
  ATerm c_17 = NULL;
  ATerm e_17 = NULL;
  c_17 = t;
  {
    ATerm f_17 = NULL;
    ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL;
    t = not_null(c_17);
    {
      f_17 = t;
      {
        t = SSL_explode_term(not_null(f_17));
        {
          h_17 = t;
          b_17 :
          if(match_cons(h_17, sym__2))
            {
              i_17 = ATgetArgument(h_17, 0);
              j_17 = ATgetArgument(h_17, 1);
              if(((e_17 != NULL) && (e_17 != j_17)))
                _fail(j_17);
              else
                e_17 = j_17;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_17);
      t = foldr_3(t, n_73, o_73, p_73);
    }
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm p_74 (ATerm), ATerm q_74 (ATerm), ATerm r_74 (ATerm))
{
  ATerm z_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_74(t);
      LocalPopChoice(a_15);
    }
  else
    {
      t = z_14;
      {
        ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
        r_17 = t;
        q_17 :
        if(((ATgetType(r_17) == AT_LIST) && !(ATisEmpty(r_17))))
          {
            s_17 = ATgetFirst((ATermList) r_17);
            t_17 = (ATerm) ATgetNext((ATermList) r_17);
            {
              ATerm w_17 = NULL,y_17 = NULL;
              ATerm b_15;
              b_15 = t;
              {
                ATerm x_17 = NULL;
                t = not_null(s_17);
                {
                  t = r_74(t);
                  {
                    x_17 = t;
                    if(((w_17 != NULL) && (w_17 != x_17)))
                      _fail(x_17);
                    else
                      w_17 = x_17;
                  }
                }
              }
              t = b_15;
              {
                ATerm z_17 = NULL;
                t = not_null(t_17);
                {
                  t = foldr_3(t, p_74, q_74, r_74);
                  {
                    z_17 = t;
                    if(((y_17 != NULL) && (y_17 != z_17)))
                      _fail(z_17);
                    else
                      y_17 = z_17;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_17), not_null(y_17));
                  t = q_74(t);
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
  ATerm k_18 = NULL;
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
  k_18 = t;
  {
    ATerm p_18 = NULL;
    ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL;
    t = not_null(k_18);
    {
      p_18 = t;
      {
        t = SSL_explode_term(not_null(p_18));
        {
          r_18 = t;
          g_18 :
          if(match_cons(r_18, sym__2))
            {
              s_18 = ATgetArgument(r_18, 0);
              t_18 = ATgetArgument(r_18, 1);
              h_18 :
              if(match_string(s_18, ""))
                {
                  i_18 :
                  if(((ATgetType(t_18) == AT_LIST) && !(ATisEmpty(t_18))))
                    {
                      u_18 = ATgetFirst((ATermList) t_18);
                      v_18 = (ATerm) ATgetNext((ATermList) t_18);
                      j_18 :
                      if(((ATgetType(v_18) == AT_LIST) && !(ATisEmpty(v_18))))
                        {
                          w_18 = ATgetFirst((ATermList) v_18);
                          x_18 = (ATerm) ATgetNext((ATermList) v_18);
                          {
                            if(((m_18 != NULL) && (m_18 != u_18)))
                              _fail(u_18);
                            else
                              m_18 = u_18;
                            {
                              if(((o_18 != NULL) && (o_18 != w_18)))
                                _fail(w_18);
                              else
                                o_18 = w_18;
                              if(((n_18 != NULL) && (n_18 != x_18)))
                                _fail(x_18);
                              else
                                n_18 = x_18;
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
    t = not_null(o_18);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm h_19 = NULL;
  ATerm j_19 = NULL,k_19 = NULL;
  h_19 = t;
  {
    ATerm l_19 = NULL;
    ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
    t = not_null(h_19);
    {
      l_19 = t;
      {
        t = SSL_explode_term(not_null(l_19));
        {
          n_19 = t;
          e_19 :
          if(match_cons(n_19, sym__2))
            {
              o_19 = ATgetArgument(n_19, 0);
              p_19 = ATgetArgument(n_19, 1);
              f_19 :
              if(match_string(o_19, ""))
                {
                  g_19 :
                  if(((ATgetType(p_19) == AT_LIST) && !(ATisEmpty(p_19))))
                    {
                      q_19 = ATgetFirst((ATermList) p_19);
                      r_19 = (ATerm) ATgetNext((ATermList) p_19);
                      {
                        if(((k_19 != NULL) && (k_19 != q_19)))
                          _fail(q_19);
                        else
                          k_19 = q_19;
                        if(((j_19 != NULL) && (j_19 != r_19)))
                          _fail(r_19);
                        else
                          j_19 = r_19;
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
    t = not_null(k_19);
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm s_62 (ATerm))
{
  ATerm e_2 (ATerm t)
  {
    ATerm e_15;
    e_15 = t;
    {
      ATerm w_19 = NULL;
      ATerm x_19 = NULL;
      t = term_h_9;
      {
        t = get_config_0(t);
        {
          x_19 = t;
          if(((w_19 != NULL) && (w_19 != x_19)))
            _fail(x_19);
          else
            w_19 = x_19;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), term_f_15);
        t = geq_0(t);
      }
    }
    t = e_15;
    t = s_62(t);
    return(t);
  }
  t = try_1(t, e_2);
  return(t);
}
ATerm term_to_tree_0 (ATerm t)
{
  ATerm h_20 = NULL,j_20 = NULL;
  ATerm f_2 (ATerm t)
  {
    ATerm g_2 (ATerm t)
    {
      t = term_h_15;
      return(t);
    }
    t = debug_1(t, g_2);
    return(t);
  }
  t = if_verbose5_1(t, f_2);
  {
    ATerm i_15;
    i_15 = t;
    {
      ATerm i_20 = NULL;
      t = new_0(t);
      {
        i_20 = t;
        if(((h_20 != NULL) && (h_20 != i_20)))
          _fail(i_20);
        else
          h_20 = i_20;
      }
    }
    t = i_15;
    {
      ATerm k_20 = NULL;
      k_20 = t;
      if(((j_20 != NULL) && (j_20 != k_20)))
        _fail(k_20);
      else
        j_20 = k_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_20), not_null(j_20));
        {
          ATerm a_21 (ATerm t)
          {
            ATerm u_20 = NULL,w_20 = NULL;
            ATerm h_2 (ATerm t)
            {
              ATerm j_15 = t;
              int k_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_2 (ATerm t)
                  {
                    ATerm m_20 = NULL,o_20 = NULL;
                    ATerm l_15;
                    l_15 = t;
                    {
                      ATerm n_20 = NULL;
                      t = new_0(t);
                      {
                        n_20 = t;
                        if(((m_20 != NULL) && (m_20 != n_20)))
                          _fail(n_20);
                        else
                          m_20 = n_20;
                      }
                    }
                    t = l_15;
                    {
                      ATerm p_20 = NULL;
                      p_20 = t;
                      if(((o_20 != NULL) && (o_20 != p_20)))
                        _fail(p_20);
                      else
                        o_20 = p_20;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_20), not_null(o_20));
                    }
                    return(t);
                  }
                  t = map_1(t, i_2);
                  LocalPopChoice(k_15);
                }
              else
                {
                  t = j_15;
                  {
                    ATerm j_2 (ATerm t)
                    {
                      ATerm q_20 = NULL,s_20 = NULL;
                      ATerm s_15;
                      s_15 = t;
                      {
                        ATerm r_20 = NULL;
                        t = new_0(t);
                        {
                          r_20 = t;
                          if(((q_20 != NULL) && (q_20 != r_20)))
                            _fail(r_20);
                          else
                            q_20 = r_20;
                        }
                      }
                      t = s_15;
                      {
                        ATerm t_20 = NULL;
                        t_20 = t;
                        if(((s_20 != NULL) && (s_20 != t_20)))
                          _fail(t_20);
                        else
                          s_20 = t_20;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_20), not_null(s_20));
                      }
                      return(t);
                    }
                    t = _all(t, j_2);
                  }
                }
              return(t);
            }
            t = _2(t, _id, h_2);
            {
              ATerm t_15;
              t_15 = t;
              {
                ATerm v_20 = NULL;
                ATerm k_2 (ATerm t)
                {
                  ATerm u_15 = t;
                  int v_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = map_1(t, Fst_0);
                      LocalPopChoice(v_15);
                    }
                  else
                    {
                      t = u_15;
                      t = _all(t, Fst_0);
                    }
                  return(t);
                }
                t = _2(t, _id, k_2);
                {
                  v_20 = t;
                  if(((u_20 != NULL) && (u_20 != v_20)))
                    _fail(v_20);
                  else
                    u_20 = v_20;
                }
              }
              t = t_15;
              {
                ATerm x_20 = NULL;
                t = Snd_0(t);
                {
                  ATerm w_15 = t;
                  int b_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_2 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = foldr_3(t, l_2, union_0, a_21);
                      LocalPopChoice(b_16);
                    }
                  else
                    {
                      t = w_15;
                      {
                        ATerm m_2 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        t = crush_3(t, m_2, union_0, a_21);
                      }
                    }
                  {
                    x_20 = t;
                    if(((w_20 != NULL) && (w_20 != x_20)))
                      _fail(x_20);
                    else
                      w_20 = x_20;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(w_20)), not_null(u_20));
              }
            }
            return(t);
          }
          t = a_21(t);
        }
      }
    }
  }
  return(t);
}
ATerm to_adot_0 (ATerm t)
{
  ATerm c_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_16;
      e_16 = t;
      {
        t = term_j_16;
        t = get_config_0(t);
      }
      t = e_16;
      t = term_to_tree_0(t);
      LocalPopChoice(d_16);
    }
  else
    {
      t = c_16;
      {
        ATerm k_16;
        k_16 = t;
        {
          t = term_m_16;
          t = get_config_0(t);
        }
        t = k_16;
        t = term_to_graph_0(t);
      }
    }
  t = graph_to_adot_0(t);
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm j_21 = NULL;
  j_21 = t;
  t = SSL_close_file(not_null(j_21));
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
  t_21 = t;
  s_21 :
  if(match_cons(t_21, sym__2))
    {
      u_21 = ATgetArgument(t_21, 0);
      v_21 = ATgetArgument(t_21, 1);
      t = SSL_WriteToBinaryFile(not_null(u_21), not_null(v_21));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm v_78 (ATerm))
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
  l_22 = t;
  k_22 :
  if(match_cons(l_22, sym__2))
    {
      m_22 = ATgetArgument(l_22, 0);
      n_22 = ATgetArgument(l_22, 1);
      {
        ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL;
        ATerm n_16;
        n_16 = t;
        {
          ATerm t_22 = NULL;
          ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
          t = v_78(t);
          {
            t_22 = t;
            {
              if(((q_22 != NULL) && (q_22 != t_22)))
                _fail(t_22);
              else
                q_22 = t_22;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(q_22), not_null(m_22), not_null(n_22));
                {
                  t = table_push_0(t);
                  {
                    ATerm o_16 = t;
                    int p_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_22), term_u_16);
                        t = table_get_0(t);
                        LocalPopChoice(p_16);
                      }
                    else
                      {
                        t = o_16;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      u_22 = t;
                      e_22 :
                      if(((ATgetType(u_22) == AT_LIST) && !(ATisEmpty(u_22))))
                        {
                          v_22 = ATgetFirst((ATermList) u_22);
                          w_22 = (ATerm) ATgetNext((ATermList) u_22);
                          {
                            if(((r_22 != NULL) && (r_22 != v_22)))
                              _fail(v_22);
                            else
                              r_22 = v_22;
                            {
                              if(((s_22 != NULL) && (s_22 != w_22)))
                                _fail(w_22);
                              else
                                s_22 = w_22;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(q_22), term_u_16, (ATerm) ATinsert(CheckATermList(not_null(s_22)), (ATerm) ATinsert(CheckATermList(not_null(r_22)), not_null(m_22))));
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
        t = n_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm a_82 (ATerm))
{
  ATerm v_16;
  v_16 = t;
  {
    t = a_82(t);
    {
      ATerm n_2 (ATerm t)
      {
        t = term_w_16;
        return(t);
      }
      t = debug_1(t, n_2);
    }
  }
  t = v_16;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL;
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_23 = NULL,x_23 = NULL,z_23 = NULL;
      w_23 = t;
      g_23 :
      if(match_cons(w_23, sym__2))
        {
          x_23 = ATgetArgument(w_23, 0);
          z_23 = ATgetArgument(w_23, 1);
          {
            if(((o_23 != NULL) && (o_23 != x_23)))
              _fail(x_23);
            else
              o_23 = x_23;
            if(((n_23 != NULL) && (n_23 != z_23)))
              _fail(z_23);
            else
              n_23 = z_23;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(z_16);
      t = SSL_open_file(not_null(o_23), not_null(n_23));
    }
  else
    {
      t = y_16;
      {
        ATerm a_24 = NULL;
        ATerm b_24 = NULL;
        ATerm o_2 (ATerm t)
        {
          t = term_a_17;
          return(t);
        }
        t = obsolete_1(t, o_2);
        {
          a_24 = t;
          {
            if(((o_23 != NULL) && (o_23 != a_24)))
              _fail(a_24);
            else
              o_23 = a_24;
            {
              ATerm d_17;
              d_17 = t;
              {
                ATerm d_24 = NULL;
                t = term_g_17;
                {
                  d_24 = t;
                  if(((b_24 != NULL) && (b_24 != d_24)))
                    _fail(d_24);
                  else
                    b_24 = d_24;
                }
              }
              t = d_17;
              t = SSL_open_file(not_null(o_23), not_null(b_24));
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
  ATerm i_24 = NULL;
  ATerm j_24 = NULL;
  t = term_k_17;
  {
    t = new_0(t);
    {
      j_24 = t;
      if(((i_24 != NULL) && (i_24 != j_24)))
        _fail(j_24);
      else
        i_24 = j_24;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_24), term_l_17);
    {
      t = conc_strings_0(t);
      {
        ATerm p_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, p_2);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm n_24 = NULL;
  t = new_file_0(t);
  {
    n_24 = t;
    {
      ATerm m_17;
      m_17 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_24), term_g_17);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_24), term_k_17);
            {
              ATerm q_2 (ATerm t)
              {
                t = term_n_17;
                return(t);
              }
              t = assert_1(t, q_2);
            }
          }
        }
      }
      t = m_17;
    }
  }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm x_24 = NULL;
  ATerm z_24 = NULL;
  x_24 = t;
  {
    ATerm a_25 = NULL;
    t = xtc_new_file_0(t);
    {
      a_25 = t;
      {
        if(((z_24 != NULL) && (z_24 != a_25)))
          _fail(a_25);
        else
          z_24 = a_25;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_24), not_null(x_24));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(z_24);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_24));
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm e_25 = NULL;
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_25 = NULL;
      f_25 = t;
      {
        if(((e_25 != NULL) && (e_25 != f_25)))
          _fail(f_25);
        else
          e_25 = f_25;
        t = SSL_ReadFromFile(not_null(e_25));
      }
      LocalPopChoice(p_17);
    }
  else
    {
      t = o_17;
      {
        ATerm r_2 (ATerm t)
        {
          t = term_u_17;
          return(t);
        }
        t = debug_1(t, r_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm j_25 = NULL;
  ATerm l_25 = NULL;
  j_25 = t;
  {
    ATerm v_17;
    v_17 = t;
    {
      ATerm r_25 = NULL;
      t = term_a_18;
      {
        r_25 = t;
        if(((l_25 != NULL) && (l_25 != r_25)))
          _fail(r_25);
        else
          l_25 = r_25;
      }
    }
    t = v_17;
    {
      t = SSL_open_file(not_null(j_25), not_null(l_25));
      t = SSL_close_file(not_null(j_25));
    }
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL;
  z_25 = t;
  y_25 :
  if(match_cons(z_25, sym_stdin_0))
    {
      ATerm b_26 = NULL;
      ATerm c_26 = NULL;
      t = term_b_18;
      {
        t = ReadFromFile_0(t);
        {
          c_26 = t;
          if(((b_26 != NULL) && (b_26 != c_26)))
            _fail(c_26);
          else
            b_26 = c_26;
        }
      }
      t = not_null(b_26);
    }
  else
    {
      if(match_cons(z_25, sym_FILE_1))
        {
          a_26 = ATgetArgument(z_25, 0);
          {
            ATerm e_26 = NULL;
            ATerm i_26 = NULL;
            t = not_null(a_26);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  i_26 = t;
                  if(((e_26 != NULL) && (e_26 != i_26)))
                    _fail(i_26);
                  else
                    e_26 = i_26;
                }
              }
            }
            t = not_null(e_26);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm k_78 (ATerm))
{
  t = read_from_0(t);
  {
    t = k_78(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm term_to_adot_options_0 (ATerm t)
{
  ATerm c_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 (ATerm t)
      {
        ATerm q_26 = NULL;
        q_26 = t;
        o_26 :
        if(!(match_string(q_26, "--graph")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm t_2 (ATerm t)
      {
        t = term_e_18;
        t = set_config_0(t);
        t = term_f_18;
        return(t);
      }
      ATerm v_2 (ATerm t)
      {
        t = term_l_18;
        return(t);
      }
      t = Option_3(t, s_2, t_2, v_2);
      LocalPopChoice(d_18);
    }
  else
    {
      t = c_18;
      {
        ATerm w_2 (ATerm t)
        {
          ATerm r_26 = NULL;
          r_26 = t;
          p_26 :
          if(!(match_string(r_26, "--tree")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm x_2 (ATerm t)
        {
          t = term_q_18;
          t = set_config_0(t);
          t = term_y_18;
          return(t);
        }
        ATerm z_2 (ATerm t)
        {
          t = term_z_18;
          return(t);
        }
        t = Option_3(t, w_2, x_2, z_2);
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL;
  u_26 = t;
  t_26 :
  if(match_cons(u_26, sym__2))
    {
      v_26 = ATgetArgument(u_26, 0);
      w_26 = ATgetArgument(u_26, 1);
      t = SSL_copy(not_null(v_26), not_null(w_26));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm e_27 = NULL;
  e_27 = t;
  d_27 :
  if(match_cons(e_27, sym_stderr_0))
    {
      ATerm g_27 = NULL,i_27 = NULL;
      ATerm a_19;
      a_19 = t;
      {
        ATerm h_27 = NULL;
        t = SSLgetAnnotations(not_null(e_27));
        {
          h_27 = t;
          if(((g_27 != NULL) && (g_27 != h_27)))
            _fail(h_27);
          else
            g_27 = h_27;
        }
      }
      t = a_19;
      {
        ATerm j_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(g_27));
        {
          j_27 = t;
          if(((i_27 != NULL) && (i_27 != j_27)))
            _fail(j_27);
          else
            i_27 = j_27;
        }
        t = not_null(i_27);
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
  ATerm r_27 = NULL;
  r_27 = t;
  q_27 :
  if(match_cons(r_27, sym_stdout_0))
    {
      ATerm t_27 = NULL,v_27 = NULL;
      ATerm b_19;
      b_19 = t;
      {
        ATerm u_27 = NULL;
        t = SSLgetAnnotations(not_null(r_27));
        {
          u_27 = t;
          if(((t_27 != NULL) && (t_27 != u_27)))
            _fail(u_27);
          else
            t_27 = u_27;
        }
      }
      t = b_19;
      {
        ATerm w_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(t_27));
        {
          w_27 = t;
          if(((v_27 != NULL) && (v_27 != w_27)))
            _fail(w_27);
          else
            v_27 = w_27;
        }
        t = not_null(v_27);
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
  ATerm i_28 = NULL,j_28 = NULL;
  i_28 = t;
  h_28 :
  if(match_cons(i_28, sym_FILE_1))
    {
      j_28 = ATgetArgument(i_28, 0);
      {
        ATerm c_19 = t;
        int d_19 = stack_ptr;
        if((PushChoice() == 0))
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
                  ATerm i_19 = t;
                  int m_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(m_19);
                    }
                  else
                    {
                      t = i_19;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(j_28), not_null(l_28));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_28));
            LocalPopChoice(d_19);
          }
        else
          {
            t = c_19;
            {
              ATerm s_19 = t;
              int t_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_28 = NULL;
                  ATerm p_28 = NULL;
                  t = m_0(t);
                  {
                    p_28 = t;
                    {
                      if(((o_28 != NULL) && (o_28 != p_28)))
                        _fail(p_28);
                      else
                        o_28 = p_28;
                      {
                        ATerm u_19 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm v_19 = t;
                            int y_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(y_19);
                              }
                            else
                              {
                                t = v_19;
                                {
                                  ATerm z_19 = t;
                                  int a_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(a_20);
                                    }
                                  else
                                    {
                                      t = z_19;
                                      {
                                        ATerm q_28 = NULL;
                                        q_28 = t;
                                        if(((j_28 != NULL) && (j_28 != q_28)))
                                          _fail(q_28);
                                        else
                                          j_28 = q_28;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = u_19;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(j_28), not_null(o_28));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_28));
                  LocalPopChoice(t_19);
                }
              else
                {
                  t = s_19;
                  {
                    ATerm s_28 = NULL;
                    t = m_0(t);
                    {
                      s_28 = t;
                      if(((j_28 != NULL) && (j_28 != s_28)))
                        _fail(s_28);
                      else
                        j_28 = s_28;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_28));
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
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
  c_29 = t;
  b_29 :
  if(((ATgetType(c_29) == AT_LIST) && !(ATisEmpty(c_29))))
    {
      d_29 = ATgetFirst((ATermList) c_29);
      e_29 = (ATerm) ATgetNext((ATermList) c_29);
      t = not_null(e_29);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL;
  k_29 = t;
  j_29 :
  if(match_cons(k_29, sym__2))
    {
      l_29 = ATgetArgument(k_29, 0);
      m_29 = ATgetArgument(k_29, 1);
      {
        ATerm b_20;
        b_20 = t;
        {
          ATerm p_29 = NULL;
          ATerm q_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_29), not_null(m_29));
          {
            ATerm c_20 = t;
            int d_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(d_20);
              }
            else
              {
                t = c_20;
                t = (ATerm) ATempty;
              }
            {
              q_29 = t;
              if(((p_29 != NULL) && (p_29 != q_29)))
                _fail(q_29);
              else
                p_29 = q_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_29), not_null(m_29), not_null(p_29));
            t = table_put_0(t);
          }
        }
        t = b_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm s_78 (ATerm))
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
  ATerm e_20;
  e_20 = t;
  {
    ATerm a_30 = NULL;
    ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
    t = s_78(t);
    {
      a_30 = t;
      {
        if(((z_29 != NULL) && (z_29 != a_30)))
          _fail(a_30);
        else
          z_29 = a_30;
        {
          ATerm f_20 = t;
          int g_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_29), term_u_16);
              t = table_get_0(t);
              LocalPopChoice(g_20);
            }
          else
            {
              t = f_20;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            b_30 = t;
            w_29 :
            if(((ATgetType(b_30) == AT_LIST) && !(ATisEmpty(b_30))))
              {
                c_30 = ATgetFirst((ATermList) b_30);
                d_30 = (ATerm) ATgetNext((ATermList) b_30);
                {
                  if(((y_29 != NULL) && (y_29 != c_30)))
                    _fail(c_30);
                  else
                    y_29 = c_30;
                  {
                    if(((x_29 != NULL) && (x_29 != d_30)))
                      _fail(d_30);
                    else
                      x_29 = d_30;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(z_29), term_u_16, not_null(x_29));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(y_29);
                          {
                            ATerm a_3 (ATerm t)
                            {
                              ATerm e_30 = NULL;
                              e_30 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_29), not_null(e_30));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, a_3);
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
  t = e_20;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm k_30 = NULL;
  k_30 = t;
  t = SSL_remove(not_null(k_30));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm w_66 (ATerm), ATerm x_66 (ATerm))
{
  ATerm l_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_66(t);
      t = x_66(t);
      LocalPopChoice(y_20);
    }
  else
    {
      t = l_20;
      {
        t = x_66(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm r_78 (ATerm))
{
  ATerm p_30 = NULL;
  ATerm z_20;
  z_20 = t;
  {
    ATerm q_30 = NULL;
    ATerm r_30 = NULL;
    t = r_78(t);
    {
      q_30 = t;
      {
        if(((p_30 != NULL) && (p_30 != q_30)))
          _fail(q_30);
        else
          p_30 = q_30;
        {
          ATerm s_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_30), term_u_16);
          {
            ATerm b_21 = t;
            int c_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_21);
              }
            else
              {
                t = b_21;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_30), term_u_16, (ATerm) ATinsert(CheckATermList(not_null(r_30)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = z_20;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm l_77 (ATerm))
{
  ATerm z_30 = NULL,a_31 = NULL;
  ATerm b_3 (ATerm t)
  {
    t = term_n_17;
    return(t);
  }
  t = begin_scope_1(t, b_3);
  {
    ATerm f_3 (ATerm t)
    {
      ATerm d_21;
      d_21 = t;
      {
        ATerm d_31 = NULL,e_31 = NULL,i_31 = NULL;
        ATerm e_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_g_21;
            t = table_get_0(t);
            LocalPopChoice(f_21);
          }
        else
          {
            t = e_21;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          d_31 = t;
          y_30 :
          if(((ATgetType(d_31) == AT_LIST) && !(ATisEmpty(d_31))))
            {
              e_31 = ATgetFirst((ATermList) d_31);
              i_31 = (ATerm) ATgetNext((ATermList) d_31);
              {
                if(((a_31 != NULL) && (a_31 != e_31)))
                  _fail(e_31);
                else
                  a_31 = e_31;
                {
                  if(((z_30 != NULL) && (z_30 != i_31)))
                    _fail(i_31);
                  else
                    z_30 = i_31;
                  {
                    t = not_null(a_31);
                    {
                      ATerm n_3 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, n_3);
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
      t = d_21;
      {
        ATerm o_3 (ATerm t)
        {
          t = term_n_17;
          return(t);
        }
        t = end_scope_1(t, o_3);
      }
      return(t);
    }
    t = restore_always_2(t, l_77, f_3);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm m_77 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_31 = NULL;
        ATerm m_31 = NULL;
        t = term_g_12;
        {
          t = get_config_0(t);
          {
            m_31 = t;
            if(((l_31 != NULL) && (l_31 != m_31)))
              _fail(m_31);
            else
              l_31 = m_31;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_31));
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        t = term_b_18;
      }
    {
      t = m_77(t);
      {
        ATerm q_3 (ATerm t)
        {
          ATerm k_21 = t;
          int l_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_d_12;
              t = get_config_0(t);
              LocalPopChoice(l_21);
            }
          else
            {
              t = k_21;
              t = term_m_21;
            }
          return(t);
        }
        t = copy_to_1(t, q_3);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, p_3);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
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
  ATerm x_3 (ATerm t)
  {
    t = term_o_21;
    t = set_config_0(t);
    t = term_p_21;
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_q_21;
    return(t);
  }
  t = Option_3(t, w_3, x_3, c_4);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm t_31 = NULL;
    t_31 = t;
    r_31 :
    if(!(match_string(t_31, "-k")))
      {
        if(!(match_string(t_31, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    ATerm r_21;
    r_21 = t;
    {
      ATerm u_31 = NULL;
      ATerm v_31 = NULL;
      t = string_to_int_0(t);
      {
        v_31 = t;
        if(((u_31 != NULL) && (u_31 != v_31)))
          _fail(v_31);
        else
          u_31 = v_31;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_21, not_null(u_31));
        t = set_config_0(t);
      }
    }
    t = r_21;
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = term_x_21;
    return(t);
  }
  t = ArgOption_3(t, d_4, e_4, j_4);
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
  ATerm y_21 = t;
  int z_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_4 (ATerm t)
      {
        ATerm k_32 = NULL;
        k_32 = t;
        f_32 :
        if(!(match_string(k_32, "-S")))
          {
            if(!(match_string(k_32, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm m_4 (ATerm t)
      {
        t = term_b_22;
        t = set_config_0(t);
        t = term_c_22;
        return(t);
      }
      ATerm p_4 (ATerm t)
      {
        t = term_d_22;
        return(t);
      }
      t = Option_3(t, k_4, m_4, p_4);
      LocalPopChoice(z_21);
    }
  else
    {
      t = y_21;
      {
        ATerm f_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_4 (ATerm t)
            {
              ATerm l_32 = NULL;
              l_32 = t;
              g_32 :
              if(!(match_string(l_32, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm t_4 (ATerm t)
            {
              ATerm o_32 = NULL;
              ATerm h_22;
              h_22 = t;
              {
                ATerm m_32 = NULL;
                ATerm n_32 = NULL;
                t = string_to_int_0(t);
                {
                  n_32 = t;
                  if(((m_32 != NULL) && (m_32 != n_32)))
                    _fail(n_32);
                  else
                    m_32 = n_32;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_9, not_null(m_32));
                  t = set_config_0(t);
                }
              }
              t = h_22;
              {
                ATerm p_32 = NULL;
                p_32 = t;
                if(((o_32 != NULL) && (o_32 != p_32)))
                  _fail(p_32);
                else
                  o_32 = p_32;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(o_32));
              }
              return(t);
            }
            ATerm u_4 (ATerm t)
            {
              t = term_i_22;
              return(t);
            }
            t = ArgOption_3(t, q_4, t_4, u_4);
            LocalPopChoice(g_22);
          }
        else
          {
            t = f_22;
            {
              ATerm v_4 (ATerm t)
              {
                ATerm q_32 = NULL;
                q_32 = t;
                j_32 :
                if(!(match_string(q_32, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm w_4 (ATerm t)
              {
                t = term_o_22;
                t = set_config_0(t);
                t = term_p_22;
                return(t);
              }
              ATerm c_5 (ATerm t)
              {
                t = term_x_22;
                return(t);
              }
              t = Option_3(t, v_4, w_4, c_5);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(z_22);
    }
  else
    {
      t = y_22;
      {
        ATerm a_23 = t;
        int b_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(b_23);
          }
        else
          {
            t = a_23;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm w_32 = NULL;
    w_32 = t;
    t_32 :
    if(!(match_string(w_32, "-o")))
      {
        if(!(match_string(w_32, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    ATerm z_32 = NULL;
    ATerm c_23;
    c_23 = t;
    {
      ATerm x_32 = NULL;
      ATerm y_32 = NULL;
      y_32 = t;
      if(((x_32 != NULL) && (x_32 != y_32)))
        _fail(y_32);
      else
        x_32 = y_32;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_12, not_null(x_32));
        t = set_config_0(t);
      }
    }
    t = c_23;
    {
      ATerm a_33 = NULL;
      a_33 = t;
      if(((z_32 != NULL) && (z_32 != a_33)))
        _fail(a_33);
      else
        z_32 = a_33;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_32));
    }
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    t = term_d_23;
    return(t);
  }
  t = ArgOption_3(t, d_5, e_5, j_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(f_23);
    }
  else
    {
      t = e_23;
      {
        ATerm k_5 (ATerm t)
        {
          ATerm e_33 = NULL;
          e_33 = t;
          d_33 :
          if(!(match_string(e_33, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm l_5 (ATerm t)
        {
          t = term_i_23;
          t = set_config_0(t);
          t = term_j_23;
          return(t);
        }
        ATerm m_5 (ATerm t)
        {
          t = term_k_23;
          return(t);
        }
        t = Option_3(t, k_5, l_5, m_5);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm k_33 = NULL,l_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL;
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
          o_33 = (ATerm) ATgetNext((ATermList) k_33);
          j_33 :
          if(((ATgetType(o_33) == AT_LIST) && !(ATisEmpty(o_33))))
            {
              p_33 = ATgetFirst((ATermList) o_33);
              q_33 = (ATerm) ATgetNext((ATermList) o_33);
              {
                ATerm u_33 = NULL;
                ATerm l_23;
                l_23 = t;
                {
                  t = not_null(l_33);
                  t = j_0(t);
                }
                t = l_23;
                {
                  ATerm a_34 = NULL;
                  t = not_null(p_33);
                  {
                    t = k_0(t);
                    {
                      a_34 = t;
                      if(((u_33 != NULL) && (u_33 != a_34)))
                        _fail(a_34);
                      else
                        u_33 = a_34;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_33)), not_null(u_33));
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
  ATerm n_5 (ATerm t)
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
  ATerm t_5 (ATerm t)
  {
    ATerm o_34 = NULL;
    ATerm m_23;
    m_23 = t;
    {
      ATerm m_34 = NULL;
      ATerm n_34 = NULL;
      n_34 = t;
      if(((m_34 != NULL) && (m_34 != n_34)))
        _fail(n_34);
      else
        m_34 = n_34;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_12, not_null(m_34));
        t = set_config_0(t);
      }
    }
    t = m_23;
    {
      ATerm p_34 = NULL;
      p_34 = t;
      if(((o_34 != NULL) && (o_34 != p_34)))
        _fail(p_34);
      else
        o_34 = p_34;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(o_34));
    }
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    t = term_p_23;
    return(t);
  }
  t = ArgOption_3(t, n_5, t_5, u_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      {
        ATerm s_23 = t;
        int t_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(t_23);
          }
        else
          {
            t = s_23;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm u_34 = NULL;
  ATerm u_23;
  u_23 = t;
  {
    ATerm y_5 (ATerm t)
    {
      ATerm v_34 = NULL,w_34 = NULL;
      v_34 = t;
      t_34 :
      if(match_cons(v_34, sym_Program_1))
        {
          w_34 = ATgetArgument(v_34, 0);
          if(((u_34 != NULL) && (u_34 != w_34)))
            _fail(w_34);
          else
            u_34 = w_34;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, y_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_23), not_null(u_34)), term_v_23));
      {
        t = printnl_0(t);
        {
          t = term_c_24;
          t = exit_0(t);
        }
      }
    }
  }
  t = u_23;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATempty, term_e_24));
  {
    t = printnl_0(t);
    {
      t = term_c_24;
      t = exit_0(t);
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
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
  r_35 = t;
  o_35 :
  if(match_cons(r_35, sym__2))
    {
      s_35 = ATgetArgument(r_35, 0);
      t_35 = ATgetArgument(r_35, 1);
      {
        ATerm f_24 = t;
        int g_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(s_35), not_null(t_35));
            LocalPopChoice(g_24);
          }
        else
          {
            t = f_24;
            t = SSL_addr(not_null(s_35), not_null(t_35));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_74 (ATerm), ATerm o_74 (ATerm))
{
  ATerm h_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_74(t);
      LocalPopChoice(k_24);
    }
  else
    {
      t = h_24;
      {
        ATerm o_36 = NULL,p_36 = NULL,r_36 = NULL;
        o_36 = t;
        n_36 :
        if(((ATgetType(o_36) == AT_LIST) && !(ATisEmpty(o_36))))
          {
            p_36 = ATgetFirst((ATermList) o_36);
            r_36 = (ATerm) ATgetNext((ATermList) o_36);
            {
              ATerm u_36 = NULL;
              ATerm v_36 = NULL;
              t = not_null(r_36);
              {
                t = foldr_2(t, n_74, o_74);
                {
                  v_36 = t;
                  if(((u_36 != NULL) && (u_36 != v_36)))
                    _fail(v_36);
                  else
                    u_36 = v_36;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_36), not_null(u_36));
                t = o_74(t);
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
ATerm crush_2 (ATerm t, ATerm l_73 (ATerm), ATerm m_73 (ATerm))
{
  ATerm i_37 = NULL;
  ATerm k_37 = NULL;
  i_37 = t;
  {
    ATerm l_37 = NULL;
    ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL;
    t = not_null(i_37);
    {
      l_37 = t;
      {
        t = SSL_explode_term(not_null(l_37));
        {
          s_37 = t;
          h_37 :
          if(match_cons(s_37, sym__2))
            {
              t_37 = ATgetArgument(s_37, 0);
              u_37 = ATgetArgument(s_37, 1);
              if(((k_37 != NULL) && (k_37 != u_37)))
                _fail(u_37);
              else
                k_37 = u_37;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(k_37);
      t = foldr_2(t, l_73, m_73);
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
    ATerm z_5 (ATerm t)
    {
      t = term_a_22;
      return(t);
    }
    t = crush_2(t, z_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL;
  a_38 = t;
  z_37 :
  if(match_cons(a_38, sym__2))
    {
      b_38 = ATgetArgument(a_38, 0);
      c_38 = ATgetArgument(a_38, 1);
      {
        ATerm l_24;
        l_24 = t;
        {
          ATerm m_24 = t;
          int o_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(b_38), not_null(c_38));
              LocalPopChoice(o_24);
            }
          else
            {
              t = m_24;
              t = SSL_gtr(not_null(b_38), not_null(c_38));
            }
        }
        t = l_24;
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
  ATerm i_38 = NULL;
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL;
      j_38 = t;
      h_38 :
      if(match_cons(j_38, sym__2))
        {
          k_38 = ATgetArgument(j_38, 0);
          l_38 = ATgetArgument(j_38, 1);
          {
            if(((i_38 != NULL) && (i_38 != k_38)))
              _fail(k_38);
            else
              i_38 = k_38;
            if(((i_38 != NULL) && (i_38 != l_38)))
              _fail(l_38);
            else
              i_38 = l_38;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm o_62 (ATerm))
{
  ATerm a_6 (ATerm t)
  {
    ATerm r_24;
    r_24 = t;
    {
      ATerm o_38 = NULL;
      ATerm p_38 = NULL;
      t = term_h_9;
      {
        t = get_config_0(t);
        {
          p_38 = t;
          if(((o_38 != NULL) && (o_38 != p_38)))
            _fail(p_38);
          else
            o_38 = p_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_38), term_c_24);
        t = geq_0(t);
      }
    }
    t = r_24;
    t = o_62(t);
    return(t);
  }
  t = try_1(t, a_6);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm t_38 = NULL,v_38 = NULL;
    ATerm s_24;
    s_24 = t;
    {
      ATerm u_38 = NULL;
      t = run_time_0(t);
      {
        u_38 = t;
        if(((t_38 != NULL) && (t_38 != u_38)))
          _fail(u_38);
        else
          t_38 = u_38;
      }
    }
    t = s_24;
    {
      ATerm w_38 = NULL;
      t = term_t_24;
      {
        t = get_config_0(t);
        {
          w_38 = t;
          if(((v_38 != NULL) && (v_38 != w_38)))
            _fail(w_38);
          else
            v_38 = w_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_24), not_null(t_38)), term_u_24), not_null(v_38)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, b_6);
  {
    t = term_a_22;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_39 = NULL;
  d_39 = t;
  c_39 :
  if(match_cons(d_39, sym_Version_0))
    {
      ATerm f_39 = NULL,h_39 = NULL;
      ATerm w_24;
      w_24 = t;
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
      t = w_24;
      {
        ATerm i_39 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(f_39));
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
ATerm need_help_1 (ATerm t, ATerm y_78 (ATerm))
{
  ATerm c_6 (ATerm t)
  {
    ATerm y_24 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(b_25);
      }
    else
      {
        t = y_24;
        {
          ATerm c_25 = t;
          int d_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(d_25);
            }
          else
            {
              t = c_25;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, c_6);
  t = y_78(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_39 = NULL;
  n_39 = t;
  t = SSL_table_create(not_null(n_39));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_39 = NULL;
  r_39 = t;
  {
    ATerm g_25;
    g_25 = t;
    {
      t = term_h_25;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_h_25, term_i_25, not_null(r_39));
          t = table_put_0(t);
        }
      }
    }
    t = g_25;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm v_39 = NULL;
  v_39 = t;
  t = SSL_table_destroy(not_null(v_39));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm d_40 = NULL;
  d_40 = t;
  t = SSL_exit(not_null(d_40));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm j_40 = NULL,n_40 = NULL,o_40 = NULL;
  j_40 = t;
  i_40 :
  if(((ATgetType(j_40) == AT_LIST) && ATisEmpty(j_40)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(j_40) == AT_LIST) && !(ATisEmpty(j_40))))
        {
          n_40 = ATgetFirst((ATermList) j_40);
          o_40 = (ATerm) ATgetNext((ATermList) j_40);
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
  ATerm k_25;
  k_25 = t;
  {
    ATerm r_40 = NULL;
    ATerm u_40 = NULL;
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
        {
          ATerm s_40 = NULL;
          ATerm t_40 = NULL;
          t_40 = t;
          if(((s_40 != NULL) && (s_40 != t_40)))
            _fail(t_40);
          else
            s_40 = t_40;
          t = (ATerm) ATinsert(ATempty, not_null(s_40));
        }
      }
    {
      u_40 = t;
      if(((r_40 != NULL) && (r_40 != u_40)))
        _fail(u_40);
      else
        r_40 = u_40;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_21, not_null(r_40));
      t = printnl_0(t);
    }
  }
  t = k_25;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm g_81 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL;
  f_41 = t;
  c_41 :
  if(((ATgetType(f_41) == AT_LIST) && !(ATisEmpty(f_41))))
    {
      d_41 = ATgetFirst((ATermList) f_41);
      e_41 = (ATerm) ATgetNext((ATermList) f_41);
      {
        ATerm i_41 = NULL;
        t = not_null(e_41);
        {
          ATerm o_25;
          o_25 = t;
          {
            ATerm j_41 = NULL,l_41 = NULL,n_41 = NULL;
            ATerm p_25;
            p_25 = t;
            {
              ATerm k_41 = NULL;
              t = i_0(t);
              {
                k_41 = t;
                if(((j_41 != NULL) && (j_41 != k_41)))
                  _fail(k_41);
                else
                  j_41 = k_41;
              }
            }
            t = p_25;
            {
              ATerm m_41 = NULL;
              t = not_null(d_41);
              {
                t = h_0(t);
                {
                  m_41 = t;
                  if(((l_41 != NULL) && (l_41 != m_41)))
                    _fail(m_41);
                  else
                    l_41 = m_41;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(j_41)), not_null(l_41));
                {
                  n_41 = t;
                  if(((i_41 != NULL) && (i_41 != n_41)))
                    _fail(n_41);
                  else
                    i_41 = n_41;
                }
              }
            }
          }
          t = o_25;
          {
            ATerm d_6 (ATerm t)
            {
              t = not_null(i_41);
              return(t);
            }
            t = reverse_acc_2(t, h_0, d_6);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(f_41) == AT_LIST) && ATisEmpty(f_41)))
        {
          {
            t = term_k_17;
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
  ATerm f_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, f_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_81 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_55 (ATerm))
{
  ATerm y_41 = NULL,z_41 = NULL;
  y_41 = t;
  x_41 :
  if(match_cons(y_41, sym_Program_1))
    {
      z_41 = ATgetArgument(y_41, 0);
      {
        ATerm c_42 = NULL,e_42 = NULL;
        ATerm d_42 = NULL;
        t = SSLgetAnnotations(not_null(y_41));
        {
          d_42 = t;
          if(((c_42 != NULL) && (c_42 != d_42)))
            _fail(d_42);
          else
            c_42 = d_42;
        }
        {
          t = not_null(z_41);
          {
            ATerm g_42 = NULL;
            t = a_55(t);
            {
              e_42 = t;
              {
                ATerm h_42 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_42)), not_null(c_42));
                {
                  h_42 = t;
                  if(((g_42 != NULL) && (g_42 != h_42)))
                    _fail(h_42);
                  else
                    g_42 = h_42;
                }
                t = not_null(g_42);
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
  ATerm q_42 = NULL;
  ATerm q_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_42 = NULL;
      t = term_t_24;
      {
        t = get_config_0(t);
        {
          r_42 = t;
          if(((q_42 != NULL) && (q_42 != r_42)))
            _fail(r_42);
          else
            q_42 = r_42;
        }
      }
      LocalPopChoice(s_25);
    }
  else
    {
      t = q_25;
      {
        ATerm i_6 (ATerm t)
        {
          ATerm j_6 (ATerm t)
          {
            ATerm s_42 = NULL;
            s_42 = t;
            if(((q_42 != NULL) && (q_42 != s_42)))
              _fail(s_42);
            else
              q_42 = s_42;
            return(t);
          }
          t = Program_1(t, j_6);
          return(t);
        }
        t = option_defined_1(t, i_6);
      }
    }
  {
    ATerm k_6 (ATerm t)
    {
      ATerm m_6 (ATerm t)
      {
        t = not_null(q_42);
        return(t);
      }
      t = short_description_1(t, m_6);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, k_6);
    {
      t = term_t_25;
      {
        t = echo_0(t);
        {
          t = term_w_25;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm n_6 (ATerm t)
                {
                  ATerm t_42 = NULL;
                  ATerm u_42 = NULL;
                  u_42 = t;
                  if(((t_42 != NULL) && (t_42 != u_42)))
                    _fail(u_42);
                  else
                    t_42 = u_42;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_42)), term_x_25);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, n_6);
                {
                  ATerm o_6 (ATerm t)
                  {
                    ATerm v_42 = NULL;
                    ATerm w_42 = NULL;
                    ATerm r_6 (ATerm t)
                    {
                      t = not_null(q_42);
                      return(t);
                    }
                    t = long_description_1(t, r_6);
                    {
                      w_42 = t;
                      if(((v_42 != NULL) && (v_42 != w_42)))
                        _fail(w_42);
                      else
                        v_42 = w_42;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(v_42)), term_d_26);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, o_6);
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
  ATerm f_26;
  f_26 = t;
  {
    ATerm c_43 = NULL;
    ATerm d_43 = NULL;
    d_43 = t;
    if(((c_43 != NULL) && (c_43 != d_43)))
      _fail(d_43);
    else
      c_43 = d_43;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATempty, not_null(c_43)));
      t = printnl_0(t);
    }
  }
  t = f_26;
  return(t);
}
ATerm say_1 (ATerm t, ATerm u_81 (ATerm))
{
  ATerm g_26;
  g_26 = t;
  {
    t = u_81(t);
    t = debug_0(t);
  }
  t = g_26;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_55 (ATerm))
{
  ATerm k_43 = NULL,l_43 = NULL;
  k_43 = t;
  j_43 :
  if(match_cons(k_43, sym_Undefined_1))
    {
      l_43 = ATgetArgument(k_43, 0);
      {
        ATerm o_43 = NULL,q_43 = NULL;
        ATerm p_43 = NULL;
        t = SSLgetAnnotations(not_null(k_43));
        {
          p_43 = t;
          if(((o_43 != NULL) && (o_43 != p_43)))
            _fail(p_43);
          else
            o_43 = p_43;
        }
        {
          t = not_null(l_43);
          {
            ATerm s_43 = NULL;
            t = b_55(t);
            {
              q_43 = t;
              {
                ATerm t_43 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_43)), not_null(o_43));
                {
                  t_43 = t;
                  if(((s_43 != NULL) && (s_43 != t_43)))
                    _fail(t_43);
                  else
                    s_43 = t_43;
                }
                t = not_null(s_43);
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
ATerm fetch_1 (ATerm t, ATerm i_68 (ATerm))
{
  ATerm y_43 (ATerm t)
  {
    ATerm h_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, i_68, _id);
        LocalPopChoice(j_26);
      }
    else
      {
        t = h_26;
        t = Cons_2(t, _id, y_43);
      }
    return(t);
  }
  t = y_43(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_80 (ATerm))
{
  t = fetch_1(t, f_80);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_44 = NULL;
  d_44 = t;
  c_44 :
  if(match_cons(d_44, sym_Help_0))
    {
      ATerm f_44 = NULL,h_44 = NULL;
      ATerm k_26;
      k_26 = t;
      {
        ATerm g_44 = NULL;
        t = SSLgetAnnotations(not_null(d_44));
        {
          g_44 = t;
          if(((f_44 != NULL) && (f_44 != g_44)))
            _fail(g_44);
          else
            f_44 = g_44;
        }
      }
      t = k_26;
      {
        ATerm i_44 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(f_44));
        {
          i_44 = t;
          if(((h_44 != NULL) && (h_44 != i_44)))
            _fail(i_44);
          else
            h_44 = i_44;
        }
        t = not_null(h_44);
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
  ATerm p_44 = NULL;
  p_44 = t;
  t = SSL_implode_string(not_null(p_44));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      {
        ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL;
        x_44 = t;
        w_44 :
        if(((ATgetType(x_44) == AT_LIST) && !(ATisEmpty(x_44))))
          {
            y_44 = ATgetFirst((ATermList) x_44);
            z_44 = (ATerm) ATgetNext((ATermList) x_44);
            {
              t = not_null(y_44);
              {
                ATerm s_6 (ATerm t)
                {
                  t = not_null(z_44);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, s_6);
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
  ATerm m_45 = NULL;
  ATerm o_45 = NULL;
  m_45 = t;
  {
    ATerm p_45 = NULL;
    ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL;
    t = not_null(m_45);
    {
      p_45 = t;
      {
        t = SSL_explode_term(not_null(p_45));
        {
          r_45 = t;
          k_45 :
          if(match_cons(r_45, sym__2))
            {
              s_45 = ATgetArgument(r_45, 0);
              t_45 = ATgetArgument(r_45, 1);
              l_45 :
              if(match_string(s_45, ""))
                {
                  if(((o_45 != NULL) && (o_45 != t_45)))
                    _fail(t_45);
                  else
                    o_45 = t_45;
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
      t = not_null(o_45);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm o_68 (ATerm))
{
  ATerm z_45 (ATerm t)
  {
    ATerm n_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, z_45);
        LocalPopChoice(s_26);
      }
    else
      {
        t = n_26;
        {
          t = Nil_0(t);
          t = o_68(t);
        }
      }
    return(t);
  }
  t = z_45(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
  f_46 = t;
  e_46 :
  if(match_cons(f_46, sym__2))
    {
      g_46 = ATgetArgument(f_46, 0);
      h_46 = ATgetArgument(f_46, 1);
      {
        t = not_null(g_46);
        {
          ATerm x_6 (ATerm t)
          {
            t = not_null(h_46);
            return(t);
          }
          t = at_end_1(t, x_6);
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
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm m_46 = NULL;
  m_46 = t;
  t = SSL_explode_string(not_null(m_46));
  return(t);
}
ATerm _2 (ATerm t, ATerm w_52 (ATerm), ATerm x_52 (ATerm))
{
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL;
  v_46 = t;
  u_46 :
  if(match_cons(v_46, sym__2))
    {
      w_46 = ATgetArgument(v_46, 0);
      x_46 = ATgetArgument(v_46, 1);
      {
        ATerm b_47 = NULL,f_47 = NULL;
        ATerm e_47 = NULL;
        t = SSLgetAnnotations(not_null(v_46));
        {
          e_47 = t;
          if(((b_47 != NULL) && (b_47 != e_47)))
            _fail(e_47);
          else
            b_47 = e_47;
        }
        {
          t = not_null(w_46);
          {
            ATerm h_47 = NULL;
            t = w_52(t);
            {
              f_47 = t;
              {
                t = not_null(x_46);
                {
                  ATerm q_47 = NULL;
                  t = x_52(t);
                  {
                    h_47 = t;
                    {
                      ATerm r_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(f_47), not_null(h_47)), not_null(b_47));
                      {
                        r_47 = t;
                        if(((q_47 != NULL) && (q_47 != r_47)))
                          _fail(r_47);
                        else
                          q_47 = r_47;
                      }
                      t = not_null(q_47);
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
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL;
  z_47 = t;
  y_47 :
  if(match_cons(z_47, sym__2))
    {
      a_48 = ATgetArgument(z_47, 0);
      b_48 = ATgetArgument(z_47, 1);
      {
        ATerm z_26;
        z_26 = t;
        t = SSL_printnl(not_null(a_48), not_null(b_48));
        t = z_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm t_81 (ATerm))
{
  ATerm a_27;
  a_27 = t;
  {
    ATerm h_48 = NULL,j_48 = NULL;
    ATerm b_27;
    b_27 = t;
    {
      ATerm i_48 = NULL;
      t = t_81(t);
      {
        i_48 = t;
        if(((h_48 != NULL) && (h_48 != i_48)))
          _fail(i_48);
        else
          h_48 = i_48;
      }
    }
    t = b_27;
    {
      ATerm k_48 = NULL;
      k_48 = t;
      if(((j_48 != NULL) && (j_48 != k_48)))
        _fail(k_48);
      else
        j_48 = k_48;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_48)), not_null(h_48)));
        t = printnl_0(t);
      }
    }
  }
  t = a_27;
  return(t);
}
ATerm map_1 (ATerm t, ATerm z_67 (ATerm))
{
  ATerm n_48 (ATerm t)
  {
    ATerm c_27 = t;
    int f_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(f_27);
      }
    else
      {
        t = c_27;
        t = Cons_2(t, z_67, n_48);
      }
    return(t);
  }
  t = n_48(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm p_48 = NULL;
  p_48 = t;
  t = SSL_is_string(not_null(p_48));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm k_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(l_27);
    }
  else
    {
      t = k_27;
      {
        ATerm m_27 = t;
        int n_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, y_6);
            LocalPopChoice(n_27);
          }
        else
          {
            t = m_27;
            {
              ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL;
              y_48 = t;
              x_48 :
              if(match_cons(y_48, sym_Path_1))
                {
                  z_48 = ATgetArgument(y_48, 0);
                  t = not_null(z_48);
                }
              else
                {
                  if(match_cons(y_48, sym_Var_1))
                    {
                      z_48 = ATgetArgument(y_48, 0);
                      {
                        t = not_null(z_48);
                        {
                          ATerm o_27 = t;
                          int p_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(p_27);
                            }
                          else
                            {
                              t = o_27;
                              {
                                ATerm z_6 (ATerm t)
                                {
                                  t = term_s_27;
                                  return(t);
                                }
                                t = debug_1(t, z_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(y_48, sym_Prefix_2))
                        {
                          z_48 = ATgetArgument(y_48, 0);
                          a_49 = ATgetArgument(y_48, 1);
                          {
                            ATerm f_49 = NULL,h_49 = NULL;
                            ATerm x_27;
                            x_27 = t;
                            {
                              ATerm g_49 = NULL;
                              t = not_null(z_48);
                              {
                                t = eval_config_0(t);
                                {
                                  g_49 = t;
                                  if(((f_49 != NULL) && (f_49 != g_49)))
                                    _fail(g_49);
                                  else
                                    f_49 = g_49;
                                }
                              }
                            }
                            t = x_27;
                            {
                              ATerm i_49 = NULL;
                              t = not_null(a_49);
                              {
                                t = eval_config_0(t);
                                {
                                  i_49 = t;
                                  if(((h_49 != NULL) && (h_49 != i_49)))
                                    _fail(i_49);
                                  else
                                    h_49 = i_49;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_49), not_null(h_49));
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
  ATerm q_49 = NULL;
  q_49 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_y_27, not_null(q_49));
    {
      t = table_get_0(t);
      {
        ATerm a_7 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm z_27;
            z_27 = t;
            {
              ATerm s_49 = NULL;
              ATerm t_49 = NULL;
              t_49 = t;
              if(((s_49 != NULL) && (s_49 != t_49)))
                _fail(t_49);
              else
                s_49 = t_49;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_y_27, not_null(q_49), not_null(s_49));
                t = table_put_0(t);
              }
            }
            t = z_27;
          }
          return(t);
        }
        t = try_1(t, a_7);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm h_66 (ATerm))
{
  ATerm a_28 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_66(t);
      LocalPopChoice(b_28);
    }
  else
    {
      t = a_28;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL;
  y_49 = t;
  x_49 :
  if(match_cons(y_49, sym__2))
    {
      z_49 = ATgetArgument(y_49, 0);
      a_50 = ATgetArgument(y_49, 1);
      t = SSL_table_get(not_null(z_49), not_null(a_50));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL,k_50 = NULL;
  h_50 = t;
  g_50 :
  if(match_cons(h_50, sym__3))
    {
      i_50 = ATgetArgument(h_50, 0);
      j_50 = ATgetArgument(h_50, 1);
      k_50 = ATgetArgument(h_50, 2);
      {
        ATerm c_28;
        c_28 = t;
        {
          ATerm o_50 = NULL;
          ATerm p_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_50), not_null(j_50));
          {
            ATerm d_28 = t;
            int e_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(e_28);
              }
            else
              {
                t = d_28;
                t = (ATerm) ATempty;
              }
            {
              p_50 = t;
              if(((o_50 != NULL) && (o_50 != p_50)))
                _fail(p_50);
              else
                o_50 = p_50;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_50), not_null(j_50), (ATerm) ATinsert(CheckATermList(not_null(o_50)), not_null(k_50)));
            t = table_put_0(t);
          }
        }
        t = c_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm k_81 (ATerm))
{
  ATerm t_50 = NULL;
  ATerm u_50 = NULL;
  t = term_k_17;
  {
    t = k_81(t);
    {
      u_50 = t;
      if(((t_50 != NULL) && (t_50 != u_50)))
        _fail(u_50);
      else
        t_50 = u_50;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_u_25, term_v_25, not_null(t_50));
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
            ATerm f_28;
            f_28 = t;
            {
              t = not_null(b_51);
              t = a_0(t);
            }
            t = f_28;
            {
              ATerm g_51 = NULL;
              t = term_k_17;
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
  ATerm c_7 (ATerm t)
  {
    ATerm l_51 = NULL;
    l_51 = t;
    k_51 :
    if(!(match_string(l_51, "--help")))
      {
        if(!(match_string(l_51, "-h")))
          {
            if(!(match_string(l_51, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm d_7 (ATerm t)
  {
    t = term_k_28;
    {
      t = set_config_0(t);
      t = term_n_28;
    }
    return(t);
  }
  ATerm e_7 (ATerm t)
  {
    t = term_r_28;
    return(t);
  }
  t = Option_3(t, c_7, d_7, e_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL;
  o_51 = t;
  n_51 :
  if(((ATgetType(o_51) == AT_LIST) && !(ATisEmpty(o_51))))
    {
      p_51 = ATgetFirst((ATermList) o_51);
      q_51 = (ATerm) ATgetNext((ATermList) o_51);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_51)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_51)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm f_54 (ATerm), ATerm g_54 (ATerm))
{
  ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL;
  a_52 = t;
  z_51 :
  if(((ATgetType(a_52) == AT_LIST) && !(ATisEmpty(a_52))))
    {
      b_52 = ATgetFirst((ATermList) a_52);
      c_52 = (ATerm) ATgetNext((ATermList) a_52);
      {
        ATerm g_52 = NULL,i_52 = NULL;
        ATerm h_52 = NULL;
        t = SSLgetAnnotations(not_null(a_52));
        {
          h_52 = t;
          if(((g_52 != NULL) && (g_52 != h_52)))
            _fail(h_52);
          else
            g_52 = h_52;
        }
        {
          t = not_null(b_52);
          {
            ATerm y_52 = NULL;
            t = f_54(t);
            {
              i_52 = t;
              {
                t = not_null(c_52);
                {
                  ATerm a_53 = NULL;
                  t = g_54(t);
                  {
                    y_52 = t;
                    {
                      ATerm b_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_52)), not_null(i_52)), not_null(g_52));
                      {
                        b_53 = t;
                        if(((a_53 != NULL) && (a_53 != b_53)))
                          _fail(b_53);
                        else
                          a_53 = b_53;
                      }
                      t = not_null(a_53);
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
  ATerm l_53 = NULL;
  l_53 = t;
  k_53 :
  if(((ATgetType(l_53) == AT_LIST) && ATisEmpty(l_53)))
    {
      {
        ATerm n_53 = NULL,p_53 = NULL;
        ATerm t_28;
        t_28 = t;
        {
          ATerm o_53 = NULL;
          t = SSLgetAnnotations(not_null(l_53));
          {
            o_53 = t;
            if(((n_53 != NULL) && (n_53 != o_53)))
              _fail(o_53);
            else
              n_53 = o_53;
          }
        }
        t = t_28;
        {
          ATerm q_53 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(n_53));
          {
            q_53 = t;
            if(((p_53 != NULL) && (p_53 != q_53)))
              _fail(q_53);
            else
              p_53 = q_53;
          }
          t = not_null(p_53);
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
  ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL;
  w_53 = t;
  v_53 :
  if(match_cons(w_53, sym__2))
    {
      x_53 = ATgetArgument(w_53, 0);
      y_53 = ATgetArgument(w_53, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_y_27, not_null(x_53), not_null(y_53));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm i_81 (ATerm))
{
  ATerm u_28;
  u_28 = t;
  {
    ATerm f_7 (ATerm t)
    {
      t = term_v_28;
      t = i_81(t);
      return(t);
    }
    t = try_1(t, f_7);
  }
  t = u_28;
  {
    ATerm g_7 (ATerm t)
    {
      ATerm i_54 = NULL;
      ATerm w_28;
      w_28 = t;
      {
        ATerm e_54 = NULL;
        ATerm h_54 = NULL;
        h_54 = t;
        if(((e_54 != NULL) && (e_54 != h_54)))
          _fail(h_54);
        else
          e_54 = h_54;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_24, not_null(e_54));
          t = set_config_0(t);
        }
      }
      t = w_28;
      {
        ATerm j_54 = NULL;
        j_54 = t;
        if(((i_54 != NULL) && (i_54 != j_54)))
          _fail(j_54);
        else
          i_54 = j_54;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_54));
      }
      return(t);
    }
    ATerm i_7 (ATerm t)
    {
      ATerm x_28 = t;
      int y_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_28 = t;
          int a_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(a_29);
            }
          else
            {
              t = z_28;
              {
                t = i_81(t);
                t = Cons_2(t, _id, i_7);
              }
            }
          LocalPopChoice(y_28);
        }
      else
        {
          t = x_28;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, g_7, i_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL;
  ATerm f_29;
  f_29 = t;
  {
    ATerm s_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL;
    s_54 = t;
    o_54 :
    if(match_cons(s_54, sym__3))
      {
        u_54 = ATgetArgument(s_54, 0);
        v_54 = ATgetArgument(s_54, 1);
        w_54 = ATgetArgument(s_54, 2);
        {
          if(((p_54 != NULL) && (p_54 != u_54)))
            _fail(u_54);
          else
            p_54 = u_54;
          {
            if(((q_54 != NULL) && (q_54 != v_54)))
              _fail(v_54);
            else
              q_54 = v_54;
            {
              if(((r_54 != NULL) && (r_54 != w_54)))
                _fail(w_54);
              else
                r_54 = w_54;
              t = SSL_table_put(not_null(p_54), not_null(q_54), not_null(r_54));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = f_29;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_81 (ATerm))
{
  ATerm z_54 = NULL;
  ATerm g_29;
  g_29 = t;
  {
    t = term_h_29;
    t = table_put_0(t);
  }
  t = g_29;
  {
    ATerm m_7 (ATerm t)
    {
      ATerm i_29 = t;
      int n_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_81(t);
          LocalPopChoice(n_29);
        }
      else
        {
          t = i_29;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, m_7);
    {
      ATerm o_7 (ATerm t)
      {
        ATerm o_29 = t;
        int r_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_29;
            s_29 = t;
            {
              ATerm t_29 = t;
              int u_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_g_28;
                  t = get_config_0(t);
                  LocalPopChoice(u_29);
                }
              else
                {
                  t = t_29;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = s_29;
            {
              t = system_usage_0(t);
              {
                t = term_a_22;
                t = exit_0(t);
              }
            }
            LocalPopChoice(r_29);
          }
        else
          {
            t = o_29;
            {
              ATerm u_7 (ATerm t)
              {
                ATerm v_7 (ATerm t)
                {
                  ATerm c_55 = NULL;
                  c_55 = t;
                  if(((z_54 != NULL) && (z_54 != c_55)))
                    _fail(c_55);
                  else
                    z_54 = c_55;
                  return(t);
                }
                t = Undefined_1(t, v_7);
                return(t);
              }
              t = option_defined_1(t, u_7);
              {
                ATerm w_7 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_54)), term_v_29);
                  return(t);
                }
                t = say_1(t, w_7);
                {
                  t = system_usage_0(t);
                  {
                    t = term_c_24;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, o_7);
      {
        ATerm f_30;
        f_30 = t;
        {
          t = term_u_25;
          t = table_destroy_0(t);
        }
        t = f_30;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm h_79 (ATerm))
{
  t = parse_options_1(t, e_79);
  {
    t = store_options_0(t);
    {
      t = g_79(t);
      {
        ATerm g_30 = t;
        int h_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, f_79);
            LocalPopChoice(h_30);
          }
        else
          {
            t = g_30;
            {
              ATerm i_30 = t;
              int j_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_79(t);
                  t = report_success_0(t);
                  LocalPopChoice(j_30);
                }
              else
                {
                  t = i_30;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm i_79 (ATerm), ATerm j_79 (ATerm))
{
  t = option_wrap_4(t, i_79, default_usage_0, _id, j_79);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm q_77 (ATerm), ATerm r_77 (ATerm))
{
  ATerm x_7 (ATerm t)
  {
    ATerm l_30 = t;
    int m_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_77(t);
        LocalPopChoice(m_30);
      }
    else
      {
        t = l_30;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm y_7 (ATerm t)
  {
    t = xtc_io_1(t, r_77);
    return(t);
  }
  t = option_wrap_2(t, x_7, y_7);
  return(t);
}
ATerm term_to_dot_0 (ATerm t)
{
  ATerm d_8 (ATerm t)
  {
    t = xtc_io_transform_1(t, to_adot_0);
    {
      ATerm e_8 (ATerm t)
      {
        t = term_n_30;
        return(t);
      }
      ATerm f_8 (ATerm t)
      {
        ATerm f_55 = NULL;
        ATerm g_55 = NULL;
        t = term_o_30;
        {
          t = xtc_find_0(t);
          {
            g_55 = t;
            if(((f_55 != NULL) && (f_55 != g_55)))
              _fail(g_55);
            else
              f_55 = g_55;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_55)), term_t_30);
        return(t);
      }
      t = xtc_transform_2(t, e_8, f_8);
      {
        ATerm g_8 (ATerm t)
        {
          t = term_u_30;
          return(t);
        }
        t = xtc_transform_1(t, g_8);
      }
    }
    return(t);
  }
  t = xtc_io_wrap_2(t, term_to_adot_options_0, d_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = term_to_dot_0(t);
  return(t);
}
