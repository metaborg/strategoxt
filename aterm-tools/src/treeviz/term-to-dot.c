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
Symbol sym_Scopes_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
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
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_o_30;
ATerm term_f_30;
ATerm term_i_29;
ATerm term_w_28;
ATerm term_t_28;
ATerm term_r_28;
ATerm term_n_28;
ATerm term_k_28;
ATerm term_z_27;
ATerm term_x_27;
ATerm term_g_26;
ATerm term_d_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_k_25;
ATerm term_i_25;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_z_23;
ATerm term_r_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_i_23;
ATerm term_e_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_k_22;
ATerm term_g_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_h_21;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_q_18;
ATerm term_l_18;
ATerm term_f_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_v_17;
ATerm term_o_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_d_17;
ATerm term_y_16;
ATerm term_v_16;
ATerm term_n_16;
ATerm term_k_16;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_p_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_o_10;
ATerm term_g_10;
ATerm term_c_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_r_9;
ATerm term_l_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_b_9;
ATerm term_t_8;
ATerm term_n_8;
ATerm term_m_8;
void init_constant_terms (void)
{
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_t_8);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_y_9);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_AttrId_2, term_w_13, term_z_13);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym__2, term_n_16, term_l_17);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym__2, term_k_16, term_l_17);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym__2, term_o_17, term_v_16);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym__2, term_o_21, term_l_17);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_b_22);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_22);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym__2, term_o_22, term_l_17);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym__2, term_i_23, term_l_17);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym__2, term_v_25, term_w_25);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym__2, term_k_28, term_l_17);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym__3, term_v_25, term_w_25, (ATerm) ATempty);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Dot-pretty.pp", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_1 (ATerm, ATerm b_81 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm r_78 (ATerm));
ATerm repeat_1 (ATerm, ATerm q_77 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm u_62 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm w_62 (ATerm));
ATerm set_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm f_63 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm j_81 (ATerm), ATerm k_81 (ATerm));
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm n_62 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm a_81 (ATerm));
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm o_59 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm c_81 (ATerm), ATerm d_81 (ATerm));
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
ATerm string_as_chars_1 (ATerm, ATerm m_77 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm EdgeToDot_0 (ATerm);
ATerm ListEdgeToDot_0 (ATerm);
ATerm graph_to_adot_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm NodeId_0 (ATerm);
ATerm address_0 (ATerm);
ATerm term_to_graph_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm n_73 (ATerm), ATerm o_73 (ATerm));
ATerm union_1 (ATerm, ATerm j_73 (ATerm));
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm c_73 (ATerm));
ATerm foldr_3 (ATerm, ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm e_74 (ATerm));
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm v_62 (ATerm));
ATerm term_to_tree_0 (ATerm);
ATerm to_adot_0 (ATerm);
ATerm close_file_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm assert_1 (ATerm, ATerm l_75 (ATerm));
ATerm obsolete_1 (ATerm, ATerm z_75 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm xtc_io_transform_1 (ATerm, ATerm l_81 (ATerm));
ATerm term_to_adot_options_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm i_75 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm n_66 (ATerm), ATerm o_66 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm h_75 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm m_80 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm n_80 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm a_74 (ATerm), ATerm b_74 (ATerm));
ATerm crush_2 (ATerm, ATerm y_72 (ATerm), ATerm z_72 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm r_62 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm q_81 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm y_83 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm x_83 (ATerm));
ATerm Program_1 (ATerm, ATerm v_59 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm t_75 (ATerm));
ATerm Undefined_1 (ATerm, ATerm w_59 (ATerm));
ATerm fetch_1 (ATerm, ATerm z_67 (ATerm));
ATerm option_defined_1 (ATerm, ATerm x_82 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm f_68 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm z_52 (ATerm), ATerm a_53 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm s_75 (ATerm));
ATerm map_1 (ATerm, ATerm q_67 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm y_65 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm c_84 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm i_54 (ATerm), ATerm j_54 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm a_84 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm z_83 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm w_81 (ATerm), ATerm x_81 (ATerm), ATerm y_81 (ATerm), ATerm z_81 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm a_82 (ATerm), ATerm b_82 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm r_80 (ATerm), ATerm s_80 (ATerm));
ATerm term_to_dot_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_transform_1 (ATerm t, ATerm b_81 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, b_81, b_0);
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
ATerm filter_1 (ATerm t, ATerm r_78 (ATerm))
{
  ATerm o_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
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
              t = filter_1(t, r_78);
              return(t);
            }
            t = Cons_2(t, r_78, p_0);
            ;
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
                    t = filter_1(t, r_78);
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
ATerm repeat_1 (ATerm t, ATerm q_77 (ATerm))
{
  ATerm l_4 (ATerm t)
  {
    ATerm q_0 (ATerm t)
    {
      t = q_77(t);
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
  ATerm s_8;
  s_8 = t;
  {
    ATerm r_0 (ATerm t)
    {
      t = term_b_9;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm g_9 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = g_9;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, r_0);
  }
  t = s_8;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm u_62 (ATerm))
{
  ATerm s_0 (ATerm t)
  {
    ATerm h_9;
    h_9 = t;
    {
      ATerm n_4 = NULL;
      ATerm o_4 = NULL;
      t = term_i_9;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_4), term_j_9);
        t = geq_0(t);
      }
    }
    t = h_9;
    t = u_62(t);
    return(t);
  }
  t = try_1(t, s_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm w_62 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm k_9;
    k_9 = t;
    {
      ATerm r_4 = NULL;
      ATerm s_4 = NULL;
      t = term_i_9;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_4), term_l_9);
        t = geq_0(t);
      }
    }
    t = k_9;
    t = w_62(t);
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
        ATerm m_9;
        m_9 = t;
        {
          ATerm f_5 = NULL;
          ATerm g_5 = NULL,i_5 = NULL;
          ATerm h_5 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_4), not_null(a_5));
          {
            ATerm n_9 = t;
            int o_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(o_9);
              }
            else
              {
                t = n_9;
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
        t = m_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm f_63 (ATerm))
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
                  t = f_63(t);
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
        t = term_r_9;
        return(t);
      }
      t = debug_1(t, w_0);
      return(t);
    }
    t = if_verbose5_1(t, v_0);
    {
      ATerm w_9 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATmakeAppl(sym_Imported_1, not_null(e_6)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = w_9;
        }
      {
        ATerm x_9;
        x_9 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_n_8, term_y_9, (ATerm) ATinsert(ATempty, not_null(e_6)));
          t = table_put_0(t);
        }
        t = x_9;
        {
          ATerm x_0 (ATerm t)
          {
            ATerm y_0 (ATerm t)
            {
              t = term_z_9;
              return(t);
            }
            t = debug_1(t, y_0);
            return(t);
          }
          t = if_verbose4_1(t, x_0);
          {
            ATerm a_10 = t;
            int b_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                ;
                LocalPopChoice(b_10);
              }
            else
              {
                t = a_10;
                t = (ATerm) ATempty;
              }
            {
              ATerm z_0 (ATerm t)
              {
                ATerm a_1 (ATerm t)
                {
                  t = term_c_10;
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
                          t = term_g_10;
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
                                t = term_c_10;
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
  ATerm h_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_10;
      t = get_config_0(t);
      ;
      LocalPopChoice(l_10);
    }
  else
    {
      t = h_10;
      {
        ATerm p_10 = t;
        int q_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_r_10;
            t = getenv_0(t);
            ;
            LocalPopChoice(q_10);
          }
        else
          {
            t = p_10;
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
      t = term_s_10;
      return(t);
    }
    t = debug_1(t, h_1);
    return(t);
  }
  t = if_verbose5_1(t, g_1);
  {
    ATerm y_10;
    y_10 = t;
    {
      ATerm z_10 = t;
      int a_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_g_11;
          t = table_get_0(t);
          ;
          LocalPopChoice(a_11);
        }
      else
        {
          t = z_10;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = y_10;
    {
      ATerm j_1 (ATerm t)
      {
        ATerm l_1 (ATerm t)
        {
          t = term_h_11;
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
  ATerm i_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_1 (ATerm t)
      {
        ATerm n_1 (ATerm t)
        {
          t = term_p_11;
          return(t);
        }
        t = debug_1(t, n_1);
        return(t);
      }
      t = if_verbose5_1(t, m_1);
      {
        t = xtc_load_0(t);
        {
          ATerm q_11 = t;
          int r_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(r_11);
            }
          else
            {
              t = q_11;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm o_1 (ATerm t)
            {
              ATerm p_1 (ATerm t)
              {
                t = term_p_11;
                return(t);
              }
              t = debug_1(t, p_1);
              return(t);
            }
            t = if_verbose5_1(t, o_1);
          }
        }
      }
      ;
      LocalPopChoice(o_11);
    }
  else
    {
      t = i_11;
      {
        ATerm p_6 = NULL;
        ATerm q_6 = NULL;
        q_6 = t;
        if(((p_6 != NULL) && (p_6 != q_6)))
          _fail(q_6);
        else
          p_6 = q_6;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_11), not_null(p_6)), term_t_11);
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
                      t = term_v_11;
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
ATerm xtc_transform_term_2 (ATerm t, ATerm j_81 (ATerm), ATerm k_81 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, j_81, k_81);
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
ATerm fork_and_wait_1 (ATerm t, ATerm n_62 (ATerm))
{
  ATerm l_7 = NULL;
  ATerm n_7 = NULL;
  l_7 = t;
  {
    t = fork_0(t);
    {
      n_7 = t;
      {
        ATerm a_12 = t;
        int b_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_7 = NULL;
            p_7 = t;
            h_7 :
            if(match_int(p_7, 0))
              {
                t = not_null(l_7);
                t = n_62(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(b_12);
          }
        else
          {
            t = a_12;
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
ATerm xtc_command_1 (ATerm t, ATerm a_81 (ATerm))
{
  ATerm i_8 = NULL;
  ATerm c_12;
  c_12 = t;
  {
    ATerm j_8 = NULL;
    t = a_81(t);
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
  t = c_12;
  {
    ATerm d_12;
    d_12 = t;
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
    t = d_12;
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
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_8), (ATerm) ATinsert(ATinsert(ATempty, not_null(x_8)), term_g_12));
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
                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_9), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(c_9)), term_g_12), not_null(w_8)), term_h_12));
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
      ATerm i_12;
      i_12 = t;
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
      t = i_12;
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
ATerm FILE_1 (ATerm t, ATerm o_59 (ATerm))
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
            t = o_59(t);
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
ATerm xtc_transform_2 (ATerm t, ATerm c_81 (ATerm), ATerm d_81 (ATerm))
{
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_12 = t;
      int n_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(n_12);
        }
      else
        {
          t = m_12;
          t = stdin_0(t);
        }
      LocalPopChoice(k_12);
      t = xtc_transform_file_2(t, c_81, d_81);
    }
  else
    {
      t = j_12;
      t = xtc_transform_term_2(t, c_81, d_81);
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
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(x_10)), term_p_12), term_o_12);
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
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(f_11)), term_o_12), term_o_12);
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
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(n_11)), term_q_12), term_o_12);
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
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      ;
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      {
        ATerm a_13 = t;
        int i_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            ;
            LocalPopChoice(i_13);
          }
        else
          {
            t = a_13;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm k_13 = t;
  int l_13 = stack_ptr;
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
      ;
      LocalPopChoice(l_13);
    }
  else
    {
      t = k_13;
      {
        ATerm q_13 = t;
        int r_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            ;
            LocalPopChoice(r_13);
          }
        else
          {
            t = q_13;
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
    t = (ATerm) ATmakeAppl(sym__2, term_q_12, not_null(e_12));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm m_77 (ATerm))
{
  t = explode_string_0(t);
  {
    t = m_77(t);
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
        ATerm s_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_12 = NULL,y_12 = NULL,e_13 = NULL,g_13 = NULL;
            ATerm u_13;
            u_13 = t;
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
            t = u_13;
            {
              ATerm v_13;
              v_13 = t;
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
              t = v_13;
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
                t = (ATerm) ATinsert(CheckATermList(not_null(g_13)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_12)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_w_13, not_null(e_13)))))));
              }
            }
            ;
            LocalPopChoice(t_13);
          }
        else
          {
            t = s_13;
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
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_13), not_null(n_13)), term_x_13);
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
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_12)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_w_13, not_null(m_13)))))));
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
        ATerm y_13;
        y_13 = t;
        {
          t = not_null(f_14);
          t = is_list_0(t);
        }
        t = y_13;
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
          t = (ATerm) ATinsert(CheckATermList(not_null(i_14)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_14)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_a_14)))));
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
        ATerm b_14 = t;
        int g_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ListEdgeToDot_0(t);
            ;
            LocalPopChoice(g_14);
          }
        else
          {
            t = b_14;
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
    t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_h_14, not_null(t_14));
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
    t = (ATerm) ATmakeAppl(sym__2, term_k_14, not_null(c_15));
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
  ATerm m_14;
  m_14 = t;
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
  t = m_14;
  {
    ATerm n_14;
    n_14 = t;
    {
      ATerm p_15 = NULL;
      ATerm o_14 = t;
      int p_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_1 (ATerm t)
          {
            t = address_0(t);
            t = NodeId_0(t);
            return(t);
          }
          t = map_1(t, x_1);
          ;
          LocalPopChoice(p_14);
        }
      else
        {
          t = o_14;
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
    t = n_14;
    {
      ATerm r_15 = NULL;
      ATerm q_14 = t;
      int s_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_2 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = foldr_3(t, a_2, union_0, term_to_graph_0);
          ;
          LocalPopChoice(s_14);
        }
      else
        {
          t = q_14;
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
ATerm HdMember_p__2 (ATerm t, ATerm n_73 (ATerm), ATerm o_73 (ATerm))
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
  g_16 = t;
  f_16 :
  if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
    {
      h_16 = ATgetFirst((ATermList) g_16);
      i_16 = (ATerm) ATgetNext((ATermList) g_16);
      {
        t = o_73(t);
        {
          ATerm c_2 (ATerm t)
          {
            ATerm l_16 = NULL;
            l_16 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_16), not_null(l_16));
              t = n_73(t);
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
ATerm union_1 (ATerm t, ATerm j_73 (ATerm))
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
            ATerm v_14 = t;
            int w_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(t_16);
                ;
                LocalPopChoice(w_14);
              }
            else
              {
                t = v_14;
                {
                  ATerm x_14 = t;
                  int z_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_2 (ATerm t)
                      {
                        t = not_null(t_16);
                        return(t);
                      }
                      t = HdMember_p__2(t, j_73, d_2);
                      t = x_16(t);
                      ;
                      LocalPopChoice(z_14);
                    }
                  else
                    {
                      t = x_14;
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
ATerm crush_3 (ATerm t, ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm c_73 (ATerm))
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
      t = foldr_3(t, a_73, b_73, c_73);
    }
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm e_74 (ATerm))
{
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_74(t);
      ;
      LocalPopChoice(b_15);
    }
  else
    {
      t = a_15;
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
              ATerm e_15;
              e_15 = t;
              {
                ATerm x_17 = NULL;
                t = not_null(s_17);
                {
                  t = e_74(t);
                  {
                    x_17 = t;
                    if(((w_17 != NULL) && (w_17 != x_17)))
                      _fail(x_17);
                    else
                      w_17 = x_17;
                  }
                }
              }
              t = e_15;
              {
                ATerm z_17 = NULL;
                t = not_null(t_17);
                {
                  t = foldr_3(t, c_74, d_74, e_74);
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
                  t = d_74(t);
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
ATerm if_verbose5_1 (ATerm t, ATerm v_62 (ATerm))
{
  ATerm e_2 (ATerm t)
  {
    ATerm f_15;
    f_15 = t;
    {
      ATerm w_19 = NULL;
      ATerm x_19 = NULL;
      t = term_i_9;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), term_h_15);
        t = geq_0(t);
      }
    }
    t = f_15;
    t = v_62(t);
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
      t = term_i_15;
      return(t);
    }
    t = debug_1(t, g_2);
    return(t);
  }
  t = if_verbose5_1(t, f_2);
  {
    ATerm j_15;
    j_15 = t;
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
    t = j_15;
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
              ATerm k_15 = t;
              int l_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_2 (ATerm t)
                  {
                    ATerm l_20 = NULL,o_20 = NULL;
                    ATerm s_15;
                    s_15 = t;
                    {
                      ATerm n_20 = NULL;
                      t = new_0(t);
                      {
                        n_20 = t;
                        if(((l_20 != NULL) && (l_20 != n_20)))
                          _fail(n_20);
                        else
                          l_20 = n_20;
                      }
                    }
                    t = s_15;
                    {
                      ATerm p_20 = NULL;
                      p_20 = t;
                      if(((o_20 != NULL) && (o_20 != p_20)))
                        _fail(p_20);
                      else
                        o_20 = p_20;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(l_20), not_null(o_20));
                    }
                    return(t);
                  }
                  t = map_1(t, i_2);
                  ;
                  LocalPopChoice(l_15);
                }
              else
                {
                  t = k_15;
                  {
                    ATerm j_2 (ATerm t)
                    {
                      ATerm q_20 = NULL,s_20 = NULL;
                      ATerm t_15;
                      t_15 = t;
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
                      t = t_15;
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
              ATerm u_15;
              u_15 = t;
              {
                ATerm v_20 = NULL;
                ATerm k_2 (ATerm t)
                {
                  ATerm v_15 = t;
                  int w_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = map_1(t, Fst_0);
                      ;
                      LocalPopChoice(w_15);
                    }
                  else
                    {
                      t = v_15;
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
              t = u_15;
              {
                ATerm x_20 = NULL;
                t = Snd_0(t);
                {
                  ATerm b_16 = t;
                  int c_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_2 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = foldr_3(t, l_2, union_0, a_21);
                      ;
                      LocalPopChoice(c_16);
                    }
                  else
                    {
                      t = b_16;
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
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_16;
      j_16 = t;
      {
        t = term_k_16;
        t = get_config_0(t);
      }
      t = j_16;
      t = term_to_tree_0(t);
      ;
      LocalPopChoice(e_16);
    }
  else
    {
      t = d_16;
      {
        ATerm m_16;
        m_16 = t;
        {
          t = term_n_16;
          t = get_config_0(t);
        }
        t = m_16;
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
ATerm assert_1 (ATerm t, ATerm l_75 (ATerm))
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
  l_22 = t;
  f_22 :
  if(match_cons(l_22, sym__2))
    {
      m_22 = ATgetArgument(l_22, 0);
      n_22 = ATgetArgument(l_22, 1);
      {
        ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL;
        ATerm o_16;
        o_16 = t;
        {
          ATerm t_22 = NULL;
          ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
          t = l_75(t);
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
                    ATerm p_16 = t;
                    int u_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_22), term_v_16);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(u_16);
                      }
                    else
                      {
                        t = p_16;
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
                                t = (ATerm) ATmakeAppl(sym__3, not_null(q_22), term_v_16, (ATerm) ATinsert(CheckATermList(not_null(s_22)), (ATerm) ATinsert(CheckATermList(not_null(r_22)), not_null(m_22))));
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
        t = o_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm z_75 (ATerm))
{
  ATerm w_16;
  w_16 = t;
  {
    t = z_75(t);
    {
      ATerm n_2 (ATerm t)
      {
        t = term_y_16;
        return(t);
      }
      t = debug_1(t, n_2);
    }
  }
  t = w_16;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm j_23 = NULL,o_23 = NULL;
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_23 = NULL,x_23 = NULL,y_23 = NULL;
      p_23 = t;
      g_23 :
      if(match_cons(p_23, sym__2))
        {
          x_23 = ATgetArgument(p_23, 0);
          y_23 = ATgetArgument(p_23, 1);
          {
            if(((o_23 != NULL) && (o_23 != x_23)))
              _fail(x_23);
            else
              o_23 = x_23;
            if(((j_23 != NULL) && (j_23 != y_23)))
              _fail(y_23);
            else
              j_23 = y_23;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(a_17);
      t = SSL_open_file(not_null(o_23), not_null(j_23));
    }
  else
    {
      t = z_16;
      {
        ATerm a_24 = NULL;
        ATerm b_24 = NULL;
        ATerm o_2 (ATerm t)
        {
          t = term_d_17;
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
              ATerm g_17;
              g_17 = t;
              {
                ATerm c_24 = NULL;
                t = term_k_17;
                {
                  c_24 = t;
                  if(((b_24 != NULL) && (b_24 != c_24)))
                    _fail(c_24);
                  else
                    b_24 = c_24;
                }
              }
              t = g_17;
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
  t = term_l_17;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_24), term_m_17);
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
      ATerm n_17;
      n_17 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_24), term_k_17);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_24), term_l_17);
            {
              ATerm q_2 (ATerm t)
              {
                t = term_o_17;
                return(t);
              }
              t = assert_1(t, q_2);
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
  ATerm p_17 = t;
  int u_17 = stack_ptr;
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
      ;
      LocalPopChoice(u_17);
    }
  else
    {
      t = p_17;
      {
        ATerm r_2 (ATerm t)
        {
          t = term_v_17;
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
    ATerm a_18;
    a_18 = t;
    {
      ATerm m_25 = NULL;
      t = term_b_18;
      {
        m_25 = t;
        if(((l_25 != NULL) && (l_25 != m_25)))
          _fail(m_25);
        else
          l_25 = m_25;
      }
    }
    t = a_18;
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
      t = term_c_18;
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
            ATerm f_26 = NULL;
            t = not_null(a_26);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  f_26 = t;
                  if(((e_26 != NULL) && (e_26 != f_26)))
                    _fail(f_26);
                  else
                    e_26 = f_26;
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
ATerm xtc_io_transform_1 (ATerm t, ATerm l_81 (ATerm))
{
  t = read_from_0(t);
  {
    t = l_81(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm term_to_adot_options_0 (ATerm t)
{
  ATerm d_18 = t;
  int e_18 = stack_ptr;
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
        t = term_f_18;
        t = set_config_0(t);
        t = term_l_18;
        return(t);
      }
      ATerm v_2 (ATerm t)
      {
        t = term_q_18;
        return(t);
      }
      t = Option_3(t, s_2, t_2, v_2);
      ;
      LocalPopChoice(e_18);
    }
  else
    {
      t = d_18;
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
          t = term_y_18;
          t = set_config_0(t);
          t = term_z_18;
          return(t);
        }
        ATerm z_2 (ATerm t)
        {
          t = term_a_19;
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
      ATerm b_19;
      b_19 = t;
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
      t = b_19;
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
      ATerm c_19;
      c_19 = t;
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
      t = c_19;
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
        ATerm d_19 = t;
        int i_19 = stack_ptr;
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
                  ATerm m_19 = t;
                  int s_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(s_19);
                    }
                  else
                    {
                      t = m_19;
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
            ;
            LocalPopChoice(i_19);
          }
        else
          {
            t = d_19;
            {
              ATerm t_19 = t;
              int u_19 = stack_ptr;
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
                        ATerm v_19 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm y_19 = t;
                            int z_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(z_19);
                              }
                            else
                              {
                                t = y_19;
                                {
                                  ATerm a_20 = t;
                                  int b_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(b_20);
                                    }
                                  else
                                    {
                                      t = a_20;
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
                            t = v_19;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(j_28), not_null(o_28));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_28));
                  ;
                  LocalPopChoice(u_19);
                }
              else
                {
                  t = t_19;
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
        ATerm c_20;
        c_20 = t;
        {
          ATerm p_29 = NULL;
          ATerm q_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_29), not_null(m_29));
          {
            ATerm d_20 = t;
            int e_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(e_20);
              }
            else
              {
                t = d_20;
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
        t = c_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm i_75 (ATerm))
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
  ATerm f_20;
  f_20 = t;
  {
    ATerm a_30 = NULL;
    ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
    t = i_75(t);
    {
      a_30 = t;
      {
        if(((z_29 != NULL) && (z_29 != a_30)))
          _fail(a_30);
        else
          z_29 = a_30;
        {
          ATerm g_20 = t;
          int m_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_29), term_v_16);
              t = table_get_0(t);
              ;
              LocalPopChoice(m_20);
            }
          else
            {
              t = g_20;
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
                      t = (ATerm) ATmakeAppl(sym__3, not_null(z_29), term_v_16, not_null(x_29));
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
  t = f_20;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm k_30 = NULL;
  k_30 = t;
  t = SSL_remove(not_null(k_30));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm n_66 (ATerm), ATerm o_66 (ATerm))
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_66(t);
      t = o_66(t);
      ;
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      {
        t = o_66(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm h_75 (ATerm))
{
  ATerm p_30 = NULL;
  ATerm b_21;
  b_21 = t;
  {
    ATerm q_30 = NULL;
    ATerm r_30 = NULL;
    t = h_75(t);
    {
      q_30 = t;
      {
        if(((p_30 != NULL) && (p_30 != q_30)))
          _fail(q_30);
        else
          p_30 = q_30;
        {
          ATerm s_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_30), term_v_16);
          {
            ATerm c_21 = t;
            int d_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(d_21);
              }
            else
              {
                t = c_21;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_30), term_v_16, (ATerm) ATinsert(CheckATermList(not_null(r_30)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = b_21;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm m_80 (ATerm))
{
  ATerm z_30 = NULL,a_31 = NULL;
  ATerm b_3 (ATerm t)
  {
    t = term_o_17;
    return(t);
  }
  t = begin_scope_1(t, b_3);
  {
    ATerm f_3 (ATerm t)
    {
      ATerm e_21;
      e_21 = t;
      {
        ATerm b_31 = NULL,e_31 = NULL,f_31 = NULL;
        ATerm f_21 = t;
        int g_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_h_21;
            t = table_get_0(t);
            ;
            LocalPopChoice(g_21);
          }
        else
          {
            t = f_21;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          b_31 = t;
          y_30 :
          if(((ATgetType(b_31) == AT_LIST) && !(ATisEmpty(b_31))))
            {
              e_31 = ATgetFirst((ATermList) b_31);
              f_31 = (ATerm) ATgetNext((ATermList) b_31);
              {
                if(((a_31 != NULL) && (a_31 != e_31)))
                  _fail(e_31);
                else
                  a_31 = e_31;
                {
                  if(((z_30 != NULL) && (z_30 != f_31)))
                    _fail(f_31);
                  else
                    z_30 = f_31;
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
      t = e_21;
      {
        ATerm o_3 (ATerm t)
        {
          t = term_o_17;
          return(t);
        }
        t = end_scope_1(t, o_3);
      }
      return(t);
    }
    t = restore_always_2(t, m_80, f_3);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm n_80 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    ATerm i_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_31 = NULL;
        ATerm m_31 = NULL;
        t = term_h_12;
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
        ;
        LocalPopChoice(k_21);
      }
    else
      {
        t = i_21;
        t = term_c_18;
      }
    {
      t = n_80(t);
      {
        ATerm q_3 (ATerm t)
        {
          ATerm l_21 = t;
          int m_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_g_12;
              t = get_config_0(t);
              ;
              LocalPopChoice(m_21);
            }
          else
            {
              t = l_21;
              t = term_n_21;
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
    t = term_p_21;
    t = set_config_0(t);
    t = term_q_21;
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_r_21;
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
    ATerm w_21;
    w_21 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, term_x_21, not_null(u_31));
        t = set_config_0(t);
      }
    }
    t = w_21;
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = term_y_21;
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
  ATerm z_21 = t;
  int a_22 = stack_ptr;
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
        t = term_c_22;
        t = set_config_0(t);
        t = term_d_22;
        return(t);
      }
      ATerm p_4 (ATerm t)
      {
        t = term_g_22;
        return(t);
      }
      t = Option_3(t, k_4, m_4, p_4);
      ;
      LocalPopChoice(a_22);
    }
  else
    {
      t = z_21;
      {
        ATerm h_22 = t;
        int i_22 = stack_ptr;
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
              ATerm j_22;
              j_22 = t;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_i_9, not_null(m_32));
                  t = set_config_0(t);
                }
              }
              t = j_22;
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
              t = term_k_22;
              return(t);
            }
            t = ArgOption_3(t, q_4, t_4, u_4);
            ;
            LocalPopChoice(i_22);
          }
        else
          {
            t = h_22;
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
                t = term_p_22;
                t = set_config_0(t);
                t = term_x_22;
                return(t);
              }
              ATerm c_5 (ATerm t)
              {
                t = term_y_22;
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
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(a_23);
    }
  else
    {
      t = z_22;
      {
        ATerm b_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(c_23);
          }
        else
          {
            t = b_23;
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
    ATerm d_23;
    d_23 = t;
    {
      ATerm x_32 = NULL;
      ATerm y_32 = NULL;
      y_32 = t;
      if(((x_32 != NULL) && (x_32 != y_32)))
        _fail(y_32);
      else
        x_32 = y_32;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_12, not_null(x_32));
        t = set_config_0(t);
      }
    }
    t = d_23;
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
    t = term_e_23;
    return(t);
  }
  t = ArgOption_3(t, d_5, e_5, j_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm f_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(h_23);
    }
  else
    {
      t = f_23;
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
          t = term_k_23;
          t = set_config_0(t);
          t = term_l_23;
          return(t);
        }
        ATerm m_5 (ATerm t)
        {
          t = term_m_23;
          return(t);
        }
        t = Option_3(t, k_5, l_5, m_5);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL;
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
              o_33 = (ATerm) ATgetNext((ATermList) m_33);
              {
                ATerm s_33 = NULL;
                ATerm n_23;
                n_23 = t;
                {
                  t = not_null(l_33);
                  t = j_0(t);
                }
                t = n_23;
                {
                  ATerm t_33 = NULL;
                  t = not_null(n_33);
                  {
                    t = k_0(t);
                    {
                      t_33 = t;
                      if(((s_33 != NULL) && (s_33 != t_33)))
                        _fail(t_33);
                      else
                        s_33 = t_33;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_33)), not_null(s_33));
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
    ATerm f_34 = NULL;
    f_34 = t;
    z_33 :
    if(!(match_string(f_34, "-i")))
      {
        if(!(match_string(f_34, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    ATerm i_34 = NULL;
    ATerm q_23;
    q_23 = t;
    {
      ATerm g_34 = NULL;
      ATerm h_34 = NULL;
      h_34 = t;
      if(((g_34 != NULL) && (g_34 != h_34)))
        _fail(h_34);
      else
        g_34 = h_34;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_12, not_null(g_34));
        t = set_config_0(t);
      }
    }
    t = q_23;
    {
      ATerm j_34 = NULL;
      j_34 = t;
      if(((i_34 != NULL) && (i_34 != j_34)))
        _fail(j_34);
      else
        i_34 = j_34;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_34));
    }
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    t = term_r_23;
    return(t);
  }
  t = ArgOption_3(t, n_5, t_5, u_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      {
        ATerm u_23 = t;
        int v_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(v_23);
          }
        else
          {
            t = u_23;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm o_34 = NULL;
  ATerm w_23;
  w_23 = t;
  {
    ATerm y_5 (ATerm t)
    {
      ATerm p_34 = NULL,q_34 = NULL;
      p_34 = t;
      n_34 :
      if(match_cons(p_34, sym_Program_1))
        {
          q_34 = ATgetArgument(p_34, 0);
          if(((o_34 != NULL) && (o_34 != q_34)))
            _fail(q_34);
          else
            o_34 = q_34;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, y_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_24), not_null(o_34)), term_z_23));
      {
        t = printnl_0(t);
        {
          t = term_e_24;
          t = exit_0(t);
        }
      }
    }
  }
  t = w_23;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATempty, term_f_24));
  {
    t = printnl_0(t);
    {
      t = term_e_24;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm t_34 = NULL;
  t_34 = t;
  t = SSL_TicksToSeconds(not_null(t_34));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
  y_34 = t;
  x_34 :
  if(match_cons(y_34, sym__2))
    {
      z_34 = ATgetArgument(y_34, 0);
      a_35 = ATgetArgument(y_34, 1);
      {
        ATerm g_24 = t;
        int h_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(z_34), not_null(a_35));
            ;
            LocalPopChoice(h_24);
          }
        else
          {
            t = g_24;
            t = SSL_addr(not_null(z_34), not_null(a_35));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm a_74 (ATerm), ATerm b_74 (ATerm))
{
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = a_74(t);
      ;
      LocalPopChoice(l_24);
    }
  else
    {
      t = k_24;
      {
        ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
        u_35 = t;
        i_35 :
        if(((ATgetType(u_35) == AT_LIST) && !(ATisEmpty(u_35))))
          {
            v_35 = ATgetFirst((ATermList) u_35);
            w_35 = (ATerm) ATgetNext((ATermList) u_35);
            {
              ATerm d_36 = NULL;
              ATerm e_36 = NULL;
              t = not_null(w_35);
              {
                t = foldr_2(t, a_74, b_74);
                {
                  e_36 = t;
                  if(((d_36 != NULL) && (d_36 != e_36)))
                    _fail(e_36);
                  else
                    d_36 = e_36;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(v_35), not_null(d_36));
                t = b_74(t);
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
ATerm crush_2 (ATerm t, ATerm y_72 (ATerm), ATerm z_72 (ATerm))
{
  ATerm q_36 = NULL;
  ATerm s_36 = NULL;
  q_36 = t;
  {
    ATerm t_36 = NULL;
    ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
    t = not_null(q_36);
    {
      t_36 = t;
      {
        t = SSL_explode_term(not_null(t_36));
        {
          v_36 = t;
          p_36 :
          if(match_cons(v_36, sym__2))
            {
              w_36 = ATgetArgument(v_36, 0);
              x_36 = ATgetArgument(v_36, 1);
              if(((s_36 != NULL) && (s_36 != x_36)))
                _fail(x_36);
              else
                s_36 = x_36;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_36);
      t = foldr_2(t, y_72, z_72);
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
      t = term_b_22;
      return(t);
    }
    t = crush_2(t, z_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
  d_37 = t;
  c_37 :
  if(match_cons(d_37, sym__2))
    {
      e_37 = ATgetArgument(d_37, 0);
      f_37 = ATgetArgument(d_37, 1);
      {
        ATerm m_24;
        m_24 = t;
        {
          ATerm o_24 = t;
          int p_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(e_37), not_null(f_37));
              ;
              LocalPopChoice(p_24);
            }
          else
            {
              t = o_24;
              t = SSL_gtr(not_null(e_37), not_null(f_37));
            }
        }
        t = m_24;
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
  ATerm l_37 = NULL;
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
      m_37 = t;
      k_37 :
      if(match_cons(m_37, sym__2))
        {
          n_37 = ATgetArgument(m_37, 0);
          o_37 = ATgetArgument(m_37, 1);
          {
            if(((l_37 != NULL) && (l_37 != n_37)))
              _fail(n_37);
            else
              l_37 = n_37;
            if(((l_37 != NULL) && (l_37 != o_37)))
              _fail(o_37);
            else
              l_37 = o_37;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(r_24);
    }
  else
    {
      t = q_24;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm r_62 (ATerm))
{
  ATerm a_6 (ATerm t)
  {
    ATerm s_24;
    s_24 = t;
    {
      ATerm r_37 = NULL;
      ATerm s_37 = NULL;
      t = term_i_9;
      {
        t = get_config_0(t);
        {
          s_37 = t;
          if(((r_37 != NULL) && (r_37 != s_37)))
            _fail(s_37);
          else
            r_37 = s_37;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_37), term_e_24);
        t = geq_0(t);
      }
    }
    t = s_24;
    t = r_62(t);
    return(t);
  }
  t = try_1(t, a_6);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm w_37 = NULL,y_37 = NULL;
    ATerm t_24;
    t_24 = t;
    {
      ATerm x_37 = NULL;
      t = run_time_0(t);
      {
        x_37 = t;
        if(((w_37 != NULL) && (w_37 != x_37)))
          _fail(x_37);
        else
          w_37 = x_37;
      }
    }
    t = t_24;
    {
      ATerm z_37 = NULL;
      t = term_u_24;
      {
        t = get_config_0(t);
        {
          z_37 = t;
          if(((y_37 != NULL) && (y_37 != z_37)))
            _fail(z_37);
          else
            y_37 = z_37;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_24), not_null(w_37)), term_v_24), not_null(y_37)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, b_6);
  {
    t = term_b_22;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm g_38 = NULL;
  g_38 = t;
  f_38 :
  if(match_cons(g_38, sym_Version_0))
    {
      ATerm i_38 = NULL,k_38 = NULL;
      ATerm y_24;
      y_24 = t;
      {
        ATerm j_38 = NULL;
        t = SSLgetAnnotations(not_null(g_38));
        {
          j_38 = t;
          if(((i_38 != NULL) && (i_38 != j_38)))
            _fail(j_38);
          else
            i_38 = j_38;
        }
      }
      t = y_24;
      {
        ATerm l_38 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(i_38));
        {
          l_38 = t;
          if(((k_38 != NULL) && (k_38 != l_38)))
            _fail(l_38);
          else
            k_38 = l_38;
        }
        t = not_null(k_38);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm q_81 (ATerm))
{
  ATerm c_6 (ATerm t)
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        {
          ATerm d_25 = t;
          int g_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(g_25);
            }
          else
            {
              t = d_25;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, c_6);
  t = q_81(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm q_38 = NULL;
  q_38 = t;
  t = SSL_table_create(not_null(q_38));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm u_38 = NULL;
  u_38 = t;
  {
    ATerm h_25;
    h_25 = t;
    {
      t = term_i_25;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_i_25, term_k_25, not_null(u_38));
          t = table_put_0(t);
        }
      }
    }
    t = h_25;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm y_38 = NULL;
  y_38 = t;
  t = SSL_table_destroy(not_null(y_38));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm c_39 = NULL;
  c_39 = t;
  t = SSL_exit(not_null(c_39));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL;
  g_39 = t;
  f_39 :
  if(((ATgetType(g_39) == AT_LIST) && ATisEmpty(g_39)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(g_39) == AT_LIST) && !(ATisEmpty(g_39))))
        {
          h_39 = ATgetFirst((ATermList) g_39);
          i_39 = (ATerm) ATgetNext((ATermList) g_39);
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
  ATerm n_25;
  n_25 = t;
  {
    ATerm l_39 = NULL;
    ATerm o_39 = NULL;
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(p_25);
      }
    else
      {
        t = o_25;
        {
          ATerm m_39 = NULL;
          ATerm n_39 = NULL;
          n_39 = t;
          if(((m_39 != NULL) && (m_39 != n_39)))
            _fail(n_39);
          else
            m_39 = n_39;
          t = (ATerm) ATinsert(ATempty, not_null(m_39));
        }
      }
    {
      o_39 = t;
      if(((l_39 != NULL) && (l_39 != o_39)))
        _fail(o_39);
      else
        l_39 = o_39;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_21, not_null(l_39));
      t = printnl_0(t);
    }
  }
  t = n_25;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm y_83 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL;
  z_39 = t;
  w_39 :
  if(((ATgetType(z_39) == AT_LIST) && !(ATisEmpty(z_39))))
    {
      x_39 = ATgetFirst((ATermList) z_39);
      y_39 = (ATerm) ATgetNext((ATermList) z_39);
      {
        ATerm c_40 = NULL;
        t = not_null(y_39);
        {
          ATerm q_25;
          q_25 = t;
          {
            ATerm d_40 = NULL,f_40 = NULL,h_40 = NULL;
            ATerm r_25;
            r_25 = t;
            {
              ATerm e_40 = NULL;
              t = i_0(t);
              {
                e_40 = t;
                if(((d_40 != NULL) && (d_40 != e_40)))
                  _fail(e_40);
                else
                  d_40 = e_40;
              }
            }
            t = r_25;
            {
              ATerm g_40 = NULL;
              t = not_null(x_39);
              {
                t = h_0(t);
                {
                  g_40 = t;
                  if(((f_40 != NULL) && (f_40 != g_40)))
                    _fail(g_40);
                  else
                    f_40 = g_40;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(d_40)), not_null(f_40));
                {
                  h_40 = t;
                  if(((c_40 != NULL) && (c_40 != h_40)))
                    _fail(h_40);
                  else
                    c_40 = h_40;
                }
              }
            }
          }
          t = q_25;
          {
            ATerm d_6 (ATerm t)
            {
              t = not_null(c_40);
              return(t);
            }
            t = reverse_acc_2(t, h_0, d_6);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(z_39) == AT_LIST) && ATisEmpty(z_39)))
        {
          {
            t = term_l_17;
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
ATerm short_description_1 (ATerm t, ATerm x_83 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm v_59 (ATerm))
{
  ATerm x_40 = NULL,y_40 = NULL;
  x_40 = t;
  w_40 :
  if(match_cons(x_40, sym_Program_1))
    {
      y_40 = ATgetArgument(x_40, 0);
      {
        ATerm b_41 = NULL,g_41 = NULL;
        ATerm c_41 = NULL;
        t = SSLgetAnnotations(not_null(x_40));
        {
          c_41 = t;
          if(((b_41 != NULL) && (b_41 != c_41)))
            _fail(c_41);
          else
            b_41 = c_41;
        }
        {
          t = not_null(y_40);
          {
            ATerm j_41 = NULL;
            t = v_59(t);
            {
              g_41 = t;
              {
                ATerm k_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(g_41)), not_null(b_41));
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
  ATerm t_41 = NULL;
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_41 = NULL;
      t = term_u_24;
      {
        t = get_config_0(t);
        {
          u_41 = t;
          if(((t_41 != NULL) && (t_41 != u_41)))
            _fail(u_41);
          else
            t_41 = u_41;
        }
      }
      ;
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
      {
        ATerm i_6 (ATerm t)
        {
          ATerm j_6 (ATerm t)
          {
            ATerm v_41 = NULL;
            v_41 = t;
            if(((t_41 != NULL) && (t_41 != v_41)))
              _fail(v_41);
            else
              t_41 = v_41;
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
        t = not_null(t_41);
        return(t);
      }
      t = short_description_1(t, m_6);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, k_6);
    {
      t = term_u_25;
      {
        t = echo_0(t);
        {
          t = term_x_25;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm n_6 (ATerm t)
                {
                  ATerm w_41 = NULL;
                  ATerm x_41 = NULL;
                  x_41 = t;
                  if(((w_41 != NULL) && (w_41 != x_41)))
                    _fail(x_41);
                  else
                    w_41 = x_41;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_41)), term_d_26);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, n_6);
                {
                  ATerm o_6 (ATerm t)
                  {
                    ATerm y_41 = NULL;
                    ATerm z_41 = NULL;
                    ATerm r_6 (ATerm t)
                    {
                      t = not_null(t_41);
                      return(t);
                    }
                    t = long_description_1(t, r_6);
                    {
                      z_41 = t;
                      if(((y_41 != NULL) && (y_41 != z_41)))
                        _fail(z_41);
                      else
                        y_41 = z_41;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(y_41)), term_g_26);
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
  ATerm h_26;
  h_26 = t;
  {
    ATerm f_42 = NULL;
    ATerm g_42 = NULL;
    g_42 = t;
    if(((f_42 != NULL) && (f_42 != g_42)))
      _fail(g_42);
    else
      f_42 = g_42;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATempty, not_null(f_42)));
      t = printnl_0(t);
    }
  }
  t = h_26;
  return(t);
}
ATerm say_1 (ATerm t, ATerm t_75 (ATerm))
{
  ATerm i_26;
  i_26 = t;
  {
    t = t_75(t);
    t = debug_0(t);
  }
  t = i_26;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm w_59 (ATerm))
{
  ATerm n_42 = NULL,o_42 = NULL;
  n_42 = t;
  m_42 :
  if(match_cons(n_42, sym_Undefined_1))
    {
      o_42 = ATgetArgument(n_42, 0);
      {
        ATerm r_42 = NULL,t_42 = NULL;
        ATerm s_42 = NULL;
        t = SSLgetAnnotations(not_null(n_42));
        {
          s_42 = t;
          if(((r_42 != NULL) && (r_42 != s_42)))
            _fail(s_42);
          else
            r_42 = s_42;
        }
        {
          t = not_null(o_42);
          {
            ATerm v_42 = NULL;
            t = w_59(t);
            {
              t_42 = t;
              {
                ATerm w_42 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(t_42)), not_null(r_42));
                {
                  w_42 = t;
                  if(((v_42 != NULL) && (v_42 != w_42)))
                    _fail(w_42);
                  else
                    v_42 = w_42;
                }
                t = not_null(v_42);
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
ATerm fetch_1 (ATerm t, ATerm z_67 (ATerm))
{
  ATerm b_43 (ATerm t)
  {
    ATerm j_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_67, _id);
        ;
        LocalPopChoice(k_26);
      }
    else
      {
        t = j_26;
        t = Cons_2(t, _id, b_43);
      }
    return(t);
  }
  t = b_43(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm x_82 (ATerm))
{
  t = fetch_1(t, x_82);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm g_43 = NULL;
  g_43 = t;
  f_43 :
  if(match_cons(g_43, sym_Help_0))
    {
      ATerm i_43 = NULL,k_43 = NULL;
      ATerm l_26;
      l_26 = t;
      {
        ATerm j_43 = NULL;
        t = SSLgetAnnotations(not_null(g_43));
        {
          j_43 = t;
          if(((i_43 != NULL) && (i_43 != j_43)))
            _fail(j_43);
          else
            i_43 = j_43;
        }
      }
      t = l_26;
      {
        ATerm l_43 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(i_43));
        {
          l_43 = t;
          if(((k_43 != NULL) && (k_43 != l_43)))
            _fail(l_43);
          else
            k_43 = l_43;
        }
        t = not_null(k_43);
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
  ATerm q_43 = NULL;
  q_43 = t;
  t = SSL_implode_string(not_null(q_43));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(n_26);
    }
  else
    {
      t = m_26;
      {
        ATerm x_43 = NULL,a_44 = NULL,b_44 = NULL;
        x_43 = t;
        w_43 :
        if(((ATgetType(x_43) == AT_LIST) && !(ATisEmpty(x_43))))
          {
            a_44 = ATgetFirst((ATermList) x_43);
            b_44 = (ATerm) ATgetNext((ATermList) x_43);
            {
              t = not_null(a_44);
              {
                ATerm s_6 (ATerm t)
                {
                  t = not_null(b_44);
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
  ATerm n_44 = NULL;
  ATerm p_44 = NULL;
  n_44 = t;
  {
    ATerm q_44 = NULL;
    ATerm s_44 = NULL,t_44 = NULL,z_44 = NULL;
    t = not_null(n_44);
    {
      q_44 = t;
      {
        t = SSL_explode_term(not_null(q_44));
        {
          s_44 = t;
          j_44 :
          if(match_cons(s_44, sym__2))
            {
              t_44 = ATgetArgument(s_44, 0);
              z_44 = ATgetArgument(s_44, 1);
              k_44 :
              if(match_string(t_44, ""))
                {
                  if(((p_44 != NULL) && (p_44 != z_44)))
                    _fail(z_44);
                  else
                    p_44 = z_44;
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
      t = not_null(p_44);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_68 (ATerm))
{
  ATerm d_45 (ATerm t)
  {
    ATerm s_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_45);
        ;
        LocalPopChoice(x_26);
      }
    else
      {
        t = s_26;
        {
          t = Nil_0(t);
          t = f_68(t);
        }
      }
    return(t);
  }
  t = d_45(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL;
  g_45 = t;
  f_45 :
  if(match_cons(g_45, sym__2))
    {
      h_45 = ATgetArgument(g_45, 0);
      i_45 = ATgetArgument(g_45, 1);
      {
        t = not_null(h_45);
        {
          ATerm x_6 (ATerm t)
          {
            t = not_null(i_45);
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
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm y_45 = NULL;
  y_45 = t;
  t = SSL_explode_string(not_null(y_45));
  return(t);
}
ATerm _2 (ATerm t, ATerm z_52 (ATerm), ATerm a_53 (ATerm))
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL;
  o_46 = t;
  n_46 :
  if(match_cons(o_46, sym__2))
    {
      p_46 = ATgetArgument(o_46, 0);
      q_46 = ATgetArgument(o_46, 1);
      {
        ATerm a_47 = NULL,c_47 = NULL;
        ATerm b_47 = NULL;
        t = SSLgetAnnotations(not_null(o_46));
        {
          b_47 = t;
          if(((a_47 != NULL) && (a_47 != b_47)))
            _fail(b_47);
          else
            a_47 = b_47;
        }
        {
          t = not_null(p_46);
          {
            ATerm e_47 = NULL;
            t = z_52(t);
            {
              c_47 = t;
              {
                t = not_null(q_46);
                {
                  ATerm g_47 = NULL;
                  t = a_53(t);
                  {
                    e_47 = t;
                    {
                      ATerm h_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(c_47), not_null(e_47)), not_null(a_47));
                      {
                        h_47 = t;
                        if(((g_47 != NULL) && (g_47 != h_47)))
                          _fail(h_47);
                        else
                          g_47 = h_47;
                      }
                      t = not_null(g_47);
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
        ATerm a_27;
        a_27 = t;
        t = SSL_printnl(not_null(a_48), not_null(b_48));
        t = a_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm s_75 (ATerm))
{
  ATerm b_27;
  b_27 = t;
  {
    ATerm h_48 = NULL,j_48 = NULL;
    ATerm c_27;
    c_27 = t;
    {
      ATerm i_48 = NULL;
      t = s_75(t);
      {
        i_48 = t;
        if(((h_48 != NULL) && (h_48 != i_48)))
          _fail(i_48);
        else
          h_48 = i_48;
      }
    }
    t = c_27;
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
  t = b_27;
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_67 (ATerm))
{
  ATerm n_48 (ATerm t)
  {
    ATerm f_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(k_27);
      }
    else
      {
        t = f_27;
        t = Cons_2(t, q_67, n_48);
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
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      {
        ATerm n_27 = t;
        int o_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, y_6);
            ;
            LocalPopChoice(o_27);
          }
        else
          {
            t = n_27;
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
                          ATerm p_27 = t;
                          int s_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(s_27);
                            }
                          else
                            {
                              t = p_27;
                              {
                                ATerm z_6 (ATerm t)
                                {
                                  t = term_x_27;
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
                            ATerm y_27;
                            y_27 = t;
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
                            t = y_27;
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
    t = (ATerm) ATmakeAppl(sym__2, term_z_27, not_null(q_49));
    {
      t = table_get_0(t);
      {
        ATerm a_7 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm a_28;
            a_28 = t;
            {
              ATerm s_49 = NULL;
              ATerm t_49 = NULL;
              t_49 = t;
              if(((s_49 != NULL) && (s_49 != t_49)))
                _fail(t_49);
              else
                s_49 = t_49;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_z_27, not_null(q_49), not_null(s_49));
                t = table_put_0(t);
              }
            }
            t = a_28;
          }
          return(t);
        }
        t = try_1(t, a_7);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm y_65 (ATerm))
{
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_65(t);
      ;
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
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
        ATerm d_28;
        d_28 = t;
        {
          ATerm o_50 = NULL;
          ATerm p_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_50), not_null(j_50));
          {
            ATerm e_28 = t;
            int f_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(f_28);
              }
            else
              {
                t = e_28;
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
        t = d_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm c_84 (ATerm))
{
  ATerm t_50 = NULL;
  ATerm u_50 = NULL;
  t = term_l_17;
  {
    t = c_84(t);
    {
      u_50 = t;
      if(((t_50 != NULL) && (t_50 != u_50)))
        _fail(u_50);
      else
        t_50 = u_50;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_v_25, term_w_25, not_null(t_50));
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
            ATerm g_28;
            g_28 = t;
            {
              t = not_null(b_51);
              t = a_0(t);
            }
            t = g_28;
            {
              ATerm g_51 = NULL;
              t = term_l_17;
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
    t = term_n_28;
    {
      t = set_config_0(t);
      t = term_r_28;
    }
    return(t);
  }
  ATerm e_7 (ATerm t)
  {
    t = term_t_28;
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
ATerm Cons_2 (ATerm t, ATerm i_54 (ATerm), ATerm j_54 (ATerm))
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
            ATerm k_52 = NULL;
            t = i_54(t);
            {
              i_52 = t;
              {
                t = not_null(c_52);
                {
                  ATerm y_52 = NULL;
                  t = j_54(t);
                  {
                    k_52 = t;
                    {
                      ATerm b_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(k_52)), not_null(i_52)), not_null(g_52));
                      {
                        b_53 = t;
                        if(((y_52 != NULL) && (y_52 != b_53)))
                          _fail(b_53);
                        else
                          y_52 = b_53;
                      }
                      t = not_null(y_52);
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
        ATerm u_28;
        u_28 = t;
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
        t = u_28;
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
        t = (ATerm) ATmakeAppl(sym__3, term_z_27, not_null(x_53), not_null(y_53));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm a_84 (ATerm))
{
  ATerm v_28;
  v_28 = t;
  {
    ATerm f_7 (ATerm t)
    {
      t = term_w_28;
      t = a_84(t);
      return(t);
    }
    t = try_1(t, f_7);
  }
  t = v_28;
  {
    ATerm g_7 (ATerm t)
    {
      ATerm g_54 = NULL;
      ATerm x_28;
      x_28 = t;
      {
        ATerm e_54 = NULL;
        ATerm f_54 = NULL;
        f_54 = t;
        if(((e_54 != NULL) && (e_54 != f_54)))
          _fail(f_54);
        else
          e_54 = f_54;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_24, not_null(e_54));
          t = set_config_0(t);
        }
      }
      t = x_28;
      {
        ATerm h_54 = NULL;
        h_54 = t;
        if(((g_54 != NULL) && (g_54 != h_54)))
          _fail(h_54);
        else
          g_54 = h_54;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_54));
      }
      return(t);
    }
    ATerm i_7 (ATerm t)
    {
      ATerm y_28 = t;
      int z_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_29 = t;
          int f_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(f_29);
            }
          else
            {
              t = a_29;
              {
                t = a_84(t);
                t = Cons_2(t, _id, i_7);
              }
            }
          ;
          LocalPopChoice(z_28);
        }
      else
        {
          t = y_28;
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
  ATerm g_29;
  g_29 = t;
  {
    ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL;
    s_54 = t;
    o_54 :
    if(match_cons(s_54, sym__3))
      {
        t_54 = ATgetArgument(s_54, 0);
        u_54 = ATgetArgument(s_54, 1);
        v_54 = ATgetArgument(s_54, 2);
        {
          if(((p_54 != NULL) && (p_54 != t_54)))
            _fail(t_54);
          else
            p_54 = t_54;
          {
            if(((q_54 != NULL) && (q_54 != u_54)))
              _fail(u_54);
            else
              q_54 = u_54;
            {
              if(((r_54 != NULL) && (r_54 != v_54)))
                _fail(v_54);
              else
                r_54 = v_54;
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
  t = g_29;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm z_83 (ATerm))
{
  ATerm y_54 = NULL;
  ATerm h_29;
  h_29 = t;
  {
    t = term_i_29;
    t = table_put_0(t);
  }
  t = h_29;
  {
    ATerm m_7 (ATerm t)
    {
      ATerm n_29 = t;
      int o_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_83(t);
          ;
          LocalPopChoice(o_29);
        }
      else
        {
          t = n_29;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, m_7);
    {
      ATerm o_7 (ATerm t)
      {
        ATerm r_29 = t;
        int s_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_29;
            t_29 = t;
            {
              ATerm u_29 = t;
              int v_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_k_28;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(v_29);
                }
              else
                {
                  t = u_29;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = t_29;
            {
              t = system_usage_0(t);
              {
                t = term_b_22;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(s_29);
          }
        else
          {
            t = r_29;
            {
              ATerm u_7 (ATerm t)
              {
                ATerm v_7 (ATerm t)
                {
                  ATerm z_54 = NULL;
                  z_54 = t;
                  if(((y_54 != NULL) && (y_54 != z_54)))
                    _fail(z_54);
                  else
                    y_54 = z_54;
                  return(t);
                }
                t = Undefined_1(t, v_7);
                return(t);
              }
              t = option_defined_1(t, u_7);
              {
                ATerm w_7 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_54)), term_f_30);
                  return(t);
                }
                t = say_1(t, w_7);
                {
                  t = system_usage_0(t);
                  {
                    t = term_e_24;
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
        ATerm g_30;
        g_30 = t;
        {
          t = term_v_25;
          t = table_destroy_0(t);
        }
        t = g_30;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm w_81 (ATerm), ATerm x_81 (ATerm), ATerm y_81 (ATerm), ATerm z_81 (ATerm))
{
  t = parse_options_1(t, w_81);
  {
    t = store_options_0(t);
    {
      t = y_81(t);
      {
        ATerm h_30 = t;
        int i_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, x_81);
            ;
            LocalPopChoice(i_30);
          }
        else
          {
            t = h_30;
            {
              ATerm j_30 = t;
              int l_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_81(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(l_30);
                }
              else
                {
                  t = j_30;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm a_82 (ATerm), ATerm b_82 (ATerm))
{
  t = option_wrap_4(t, a_82, default_usage_0, _id, b_82);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm r_80 (ATerm), ATerm s_80 (ATerm))
{
  ATerm x_7 (ATerm t)
  {
    ATerm m_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_80(t);
        ;
        LocalPopChoice(n_30);
      }
    else
      {
        t = m_30;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm y_7 (ATerm t)
  {
    t = xtc_io_1(t, s_80);
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
        t = term_o_30;
        return(t);
      }
      ATerm f_8 (ATerm t)
      {
        ATerm c_55 = NULL;
        ATerm d_55 = NULL;
        t = term_t_30;
        {
          t = xtc_find_0(t);
          {
            d_55 = t;
            if(((c_55 != NULL) && (c_55 != d_55)))
              _fail(d_55);
            else
              c_55 = d_55;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_55)), term_u_30);
        return(t);
      }
      t = xtc_transform_2(t, e_8, f_8);
      {
        ATerm g_8 (ATerm t)
        {
          t = term_v_30;
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
