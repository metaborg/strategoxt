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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  init_constant_terms();
}
ATerm term_l_23;
ATerm term_r_22;
ATerm term_z_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_h_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_t_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_t_16;
ATerm term_o_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_y_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_l_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_q_14;
ATerm term_b_14;
ATerm term_p_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_w_9;
ATerm term_r_9;
ATerm term_l_9;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_a_8;
ATerm term_v_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_y_5;
ATerm term_w_5;
void init_constant_terms (void)
{
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym__2, term_w_5, term_y_5);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(sym__2, term_f_6, term_y_5);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_AttrId_2, term_s_7, term_v_7);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym__2, term_x_14, term_y_5);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym__2, term_l_9, term_o_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__2, term_b_16, term_y_5);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym__2, term_z_16, term_y_5);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym__2, term_d_20, term_h_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym__2, term_k_21, term_y_5);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__3, term_d_20, term_h_20, (ATerm) ATempty);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm term_to_adot_options_0 (ATerm);
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
ATerm string_as_chars_1 (ATerm, ATerm u_75 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm EdgeToDot_0 (ATerm);
ATerm ListEdgeToDot_0 (ATerm);
ATerm graph_to_adot_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm NodeId_0 (ATerm);
ATerm address_0 (ATerm);
ATerm term_to_graph_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm v_71 (ATerm), ATerm w_71 (ATerm));
ATerm union_1 (ATerm, ATerm r_71 (ATerm));
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm i_71 (ATerm), ATerm j_71 (ATerm), ATerm k_71 (ATerm));
ATerm foldr_3 (ATerm, ATerm k_72 (ATerm), ATerm l_72 (ATerm), ATerm m_72 (ATerm));
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm new_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm s_79 (ATerm));
ATerm term_to_tree_0 (ATerm);
ATerm to_adot_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_66 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm p_79 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm s_49 (ATerm), ATerm t_49 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm w_77 (ATerm));
ATerm debug_1 (ATerm, ATerm s_76 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm x_73 (ATerm), ATerm y_73 (ATerm));
ATerm input_file_0 (ATerm);
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
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm i_72 (ATerm), ATerm j_72 (ATerm));
ATerm crush_2 (ATerm, ATerm g_71 (ATerm), ATerm h_71 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm o_79 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm u_77 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm s_81 (ATerm));
ATerm map_1 (ATerm, ATerm u_65 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm r_81 (ATerm));
ATerm Program_1 (ATerm, ATerm q_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm t_76 (ATerm));
ATerm Undefined_1 (ATerm, ATerm r_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_66 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_80 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm d_58 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm w_81 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_51 (ATerm), ATerm c_51 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm u_81 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm t_81 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm c_78 (ATerm), ATerm d_78 (ATerm));
ATerm iowrap_4 (ATerm, ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm));
ATerm iowrap_3 (ATerm, ATerm l_78 (ATerm), ATerm m_78 (ATerm), ATerm n_78 (ATerm));
ATerm iowrap_2 (ATerm, ATerm j_78 (ATerm), ATerm k_78 (ATerm));
ATerm term_to_adot_0 (ATerm);
ATerm main_0 (ATerm);
ATerm term_to_adot_options_0 (ATerm t)
{
  ATerm w_2 = t;
  int v_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        ATerm f_1 = NULL;
        f_1 = t;
        p_0 :
        if(!(match_string(f_1, "--graph")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm c_0 (ATerm t)
      {
        t = term_b_6;
        t = set_config_0(t);
        t = term_c_6;
        return(t);
      }
      ATerm e_0 (ATerm t)
      {
        t = term_d_6;
        return(t);
      }
      t = Option_3(t, b_0, c_0, e_0);
      LocalPopChoice(v_5);
    }
  else
    {
      t = w_2;
      {
        ATerm f_0 (ATerm t)
        {
          ATerm g_1 = NULL;
          g_1 = t;
          r_0 :
          if(!(match_string(g_1, "--tree")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm m_0 (ATerm t)
        {
          t = term_g_6;
          t = set_config_0(t);
          t = term_h_6;
          return(t);
        }
        ATerm n_0 (ATerm t)
        {
          t = term_k_6;
          return(t);
        }
        t = Option_3(t, f_0, m_0, n_0);
      }
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
  ATerm z_1 = NULL,a_2 = NULL,c_2 = NULL;
  z_1 = t;
  u_1 :
  if(((ATgetType(z_1) == AT_LIST) && !(ATisEmpty(z_1))))
    {
      a_2 = ATgetFirst((ATermList) z_1);
      c_2 = (ATerm) ATgetNext((ATermList) z_1);
      y_1 :
      if(match_int(a_2, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(c_2)), term_n_6), term_l_6);
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
  ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL;
  j_2 = t;
  g_2 :
  if(((ATgetType(j_2) == AT_LIST) && !(ATisEmpty(j_2))))
    {
      k_2 = ATgetFirst((ATermList) j_2);
      l_2 = (ATerm) ATgetNext((ATermList) j_2);
      i_2 :
      if(match_int(k_2, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(l_2)), term_l_6), term_l_6);
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
  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL;
  r_2 = t;
  p_2 :
  if(((ATgetType(r_2) == AT_LIST) && !(ATisEmpty(r_2))))
    {
      s_2 = ATgetFirst((ATermList) r_2);
      t_2 = (ATerm) ATgetNext((ATermList) r_2);
      q_2 :
      if(match_int(s_2, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(t_2)), term_o_6), term_l_6);
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
  ATerm p_6 = t;
  int q_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      LocalPopChoice(q_6);
    }
  else
    {
      t = p_6;
      {
        ATerm r_6 = t;
        int y_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            LocalPopChoice(y_6);
          }
        else
          {
            t = r_6;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm z_6 = t;
  int a_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0(t);
      {
        ATerm o_0 (ATerm t)
        {
          t = Cons_2(t, _id, escape_chars_0);
          return(t);
        }
        t = Cons_2(t, _id, o_0);
      }
      LocalPopChoice(a_7);
    }
  else
    {
      t = z_6;
      {
        ATerm b_7 = t;
        int c_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            LocalPopChoice(c_7);
          }
        else
          {
            t = b_7;
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
  ATerm y_2 = NULL;
  y_2 = t;
  t = SSL_is_int(not_null(y_2));
  return(t);
}
ATerm quote_chars_0 (ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL;
  d_3 = t;
  c_3 :
  if(match_cons(d_3, sym__2))
    {
      e_3 = ATgetArgument(d_3, 0);
      f_3 = ATgetArgument(d_3, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_3)), not_null(e_3)), (ATerm) ATinsert(ATempty, not_null(e_3)));
        {
          ATerm h_7 = t;
          int i_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_two_lists_0(t);
              LocalPopChoice(i_7);
            }
          else
            {
              t = h_7;
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
  ATerm k_3 = NULL;
  ATerm l_3 = NULL;
  l_3 = t;
  if(((k_3 != NULL) && (k_3 != l_3)))
    _fail(l_3);
  else
    k_3 = l_3;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_o_6, not_null(k_3));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm u_75 (ATerm))
{
  t = explode_string_0(t);
  {
    t = u_75(t);
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
  ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL;
  y_3 = t;
  x_3 :
  if(match_cons(y_3, sym__2))
    {
      z_3 = ATgetArgument(y_3, 0);
      a_4 = ATgetArgument(y_3, 1);
      {
        ATerm j_7 = t;
        int k_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_4 = NULL,e_4 = NULL,k_4 = NULL,m_4 = NULL;
            ATerm p_7;
            p_7 = t;
            {
              ATerm f_4 = NULL;
              ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL;
              t = not_null(a_4);
              {
                f_4 = t;
                {
                  t = SSL_explode_term(not_null(f_4));
                  {
                    h_4 = t;
                    r_3 :
                    if(match_cons(h_4, sym__2))
                      {
                        i_4 = ATgetArgument(h_4, 0);
                        j_4 = ATgetArgument(h_4, 1);
                        {
                          if(((d_4 != NULL) && (d_4 != i_4)))
                            _fail(i_4);
                          else
                            d_4 = i_4;
                          if(((e_4 != NULL) && (e_4 != j_4)))
                            _fail(j_4);
                          else
                            e_4 = j_4;
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
            t = p_7;
            {
              ATerm q_7;
              q_7 = t;
              {
                ATerm l_4 = NULL;
                t = not_null(d_4);
                {
                  t = string_as_chars_1(t, escape_chars_0);
                  {
                    t = string_as_chars_1(t, double_quote_chars_0);
                    {
                      l_4 = t;
                      if(((k_4 != NULL) && (k_4 != l_4)))
                        _fail(l_4);
                      else
                        k_4 = l_4;
                    }
                  }
                }
              }
              t = q_7;
              {
                ATerm p_4 = NULL;
                t = not_null(e_4);
                {
                  ATerm q_0 (ATerm t)
                  {
                    ATerm n_4 = NULL;
                    n_4 = t;
                    t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_3)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_4)))));
                    return(t);
                  }
                  t = map_1(t, q_0);
                  {
                    p_4 = t;
                    if(((m_4 != NULL) && (m_4 != p_4)))
                      _fail(p_4);
                    else
                      m_4 = p_4;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(m_4)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_3)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_s_7, not_null(k_4)))))));
              }
            }
            LocalPopChoice(k_7);
          }
        else
          {
            t = j_7;
            {
              ATerm s_4 = NULL;
              ATerm t_4 = NULL,v_4 = NULL;
              t = not_null(a_4);
              {
                t = is_int_0(t);
                {
                  ATerm u_4 = NULL;
                  t = not_null(a_4);
                  {
                    t = int_to_string_0(t);
                    {
                      t = string_as_chars_1(t, escape_chars_0);
                      {
                        u_4 = t;
                        if(((t_4 != NULL) && (t_4 != u_4)))
                          _fail(u_4);
                        else
                          t_4 = u_4;
                      }
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(t_4)), term_t_7);
                    {
                      t = concat_strings_0(t);
                      {
                        v_4 = t;
                        if(((s_4 != NULL) && (s_4 != v_4)))
                          _fail(v_4);
                        else
                          s_4 = v_4;
                      }
                    }
                  }
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_3)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_s_7, not_null(s_4)))))));
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
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL;
  j_5 = t;
  i_5 :
  if(match_cons(j_5, sym__2))
    {
      k_5 = ATgetArgument(j_5, 0);
      l_5 = ATgetArgument(j_5, 1);
      {
        ATerm o_5 = NULL;
        ATerm u_7;
        u_7 = t;
        {
          t = not_null(l_5);
          t = is_list_0(t);
        }
        t = u_7;
        {
          ATerm r_5 = NULL;
          t = not_null(l_5);
          {
            ATerm s_0 (ATerm t)
            {
              ATerm p_5 = NULL;
              p_5 = t;
              t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_5)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(p_5)))));
              return(t);
            }
            t = map_1(t, s_0);
            {
              r_5 = t;
              if(((o_5 != NULL) && (o_5 != r_5)))
                _fail(r_5);
              else
                o_5 = r_5;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(o_5)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_5)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_a_8)))));
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
  ATerm x_5 = NULL;
  ATerm z_5 = NULL;
  x_5 = t;
  {
    ATerm a_6 = NULL;
    t = not_null(x_5);
    {
      ATerm t_0 (ATerm t)
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ListEdgeToDot_0(t);
            LocalPopChoice(c_8);
          }
        else
          {
            t = b_8;
            t = EdgeToDot_0(t);
          }
        return(t);
      }
      t = map_1(t, t_0);
      {
        t = concat_0(t);
        {
          a_6 = t;
          if(((z_5 != NULL) && (z_5 != a_6)))
            _fail(a_6);
          else
            z_5 = a_6;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_e_8, not_null(z_5));
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm e_6 = NULL;
  e_6 = t;
  t = SSL_int_to_string(not_null(e_6));
  return(t);
}
ATerm NodeId_0 (ATerm t)
{
  ATerm i_6 = NULL;
  ATerm j_6 = NULL;
  t = int_to_string_0(t);
  {
    j_6 = t;
    if(((i_6 != NULL) && (i_6 != j_6)))
      _fail(j_6);
    else
      i_6 = j_6;
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_8, not_null(i_6));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm address_0 (ATerm t)
{
  ATerm m_6 = NULL;
  m_6 = t;
  t = SSL_address(not_null(m_6));
  return(t);
}
ATerm term_to_graph_0 (ATerm t)
{
  ATerm s_6 = NULL,u_6 = NULL,w_6 = NULL;
  ATerm g_8;
  g_8 = t;
  {
    ATerm t_6 = NULL;
    t = address_0(t);
    {
      t = NodeId_0(t);
      {
        t_6 = t;
        if(((s_6 != NULL) && (s_6 != t_6)))
          _fail(t_6);
        else
          s_6 = t_6;
      }
    }
  }
  t = g_8;
  {
    ATerm j_8;
    j_8 = t;
    {
      ATerm v_6 = NULL;
      ATerm m_8 = t;
      int q_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_0 (ATerm t)
          {
            t = address_0(t);
            t = NodeId_0(t);
            return(t);
          }
          t = map_1(t, u_0);
          LocalPopChoice(q_8);
        }
      else
        {
          t = m_8;
          {
            ATerm v_0 (ATerm t)
            {
              t = address_0(t);
              t = NodeId_0(t);
              return(t);
            }
            t = _all(t, v_0);
          }
        }
      {
        v_6 = t;
        if(((u_6 != NULL) && (u_6 != v_6)))
          _fail(v_6);
        else
          u_6 = v_6;
      }
    }
    t = j_8;
    {
      ATerm x_6 = NULL;
      ATerm r_8 = t;
      int s_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_0 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm x_0 (ATerm t)
          {
            t = union_1(t, eq_0);
            return(t);
          }
          t = foldr_3(t, w_0, x_0, term_to_graph_0);
          LocalPopChoice(s_8);
        }
      else
        {
          t = r_8;
          {
            ATerm y_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            ATerm z_0 (ATerm t)
            {
              t = union_1(t, eq_0);
              return(t);
            }
            t = crush_3(t, y_0, z_0, term_to_graph_0);
          }
        }
      {
        x_6 = t;
        if(((w_6 != NULL) && (w_6 != x_6)))
          _fail(x_6);
        else
          w_6 = x_6;
      }
      t = (ATerm) ATinsert(CheckATermList(not_null(w_6)), (ATerm) ATmakeAppl(sym__2, not_null(s_6), not_null(u_6)));
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL;
  e_7 = t;
  d_7 :
  if(match_cons(e_7, sym__2))
    {
      f_7 = ATgetArgument(e_7, 0);
      g_7 = ATgetArgument(e_7, 1);
      if(((f_7 != NULL) && (f_7 != g_7)))
        _fail(g_7);
      else
        f_7 = g_7;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm v_71 (ATerm), ATerm w_71 (ATerm))
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL;
  m_7 = t;
  l_7 :
  if(((ATgetType(m_7) == AT_LIST) && !(ATisEmpty(m_7))))
    {
      n_7 = ATgetFirst((ATermList) m_7);
      o_7 = (ATerm) ATgetNext((ATermList) m_7);
      {
        t = w_71(t);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm r_7 = NULL;
            r_7 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_7), not_null(r_7));
              t = v_71(t);
            }
            return(t);
          }
          t = fetch_1(t, a_1);
        }
        t = not_null(o_7);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm r_71 (ATerm))
{
  ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL;
  x_7 = t;
  w_7 :
  if(match_cons(x_7, sym__2))
    {
      y_7 = ATgetArgument(x_7, 0);
      z_7 = ATgetArgument(x_7, 1);
      {
        t = not_null(y_7);
        {
          ATerm d_8 (ATerm t)
          {
            ATerm t_8 = t;
            int u_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(z_7);
                LocalPopChoice(u_8);
              }
            else
              {
                t = t_8;
                {
                  ATerm v_8 = t;
                  int a_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_1 (ATerm t)
                      {
                        t = not_null(z_7);
                        return(t);
                      }
                      t = HdMember_p__2(t, r_71, b_1);
                      t = d_8(t);
                      LocalPopChoice(a_9);
                    }
                  else
                    {
                      t = v_8;
                      t = Cons_2(t, _id, d_8);
                    }
                }
              }
            return(t);
          }
          t = d_8(t);
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
ATerm crush_3 (ATerm t, ATerm i_71 (ATerm), ATerm j_71 (ATerm), ATerm k_71 (ATerm))
{
  ATerm i_8 = NULL;
  ATerm k_8 = NULL;
  i_8 = t;
  {
    ATerm l_8 = NULL;
    ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL;
    t = not_null(i_8);
    {
      l_8 = t;
      {
        t = SSL_explode_term(not_null(l_8));
        {
          n_8 = t;
          h_8 :
          if(match_cons(n_8, sym__2))
            {
              o_8 = ATgetArgument(n_8, 0);
              p_8 = ATgetArgument(n_8, 1);
              if(((k_8 != NULL) && (k_8 != p_8)))
                _fail(p_8);
              else
                k_8 = p_8;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(k_8);
      t = foldr_3(t, i_71, j_71, k_71);
    }
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm k_72 (ATerm), ATerm l_72 (ATerm), ATerm m_72 (ATerm))
{
  ATerm b_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_72(t);
      LocalPopChoice(g_9);
    }
  else
    {
      t = b_9;
      {
        ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
        x_8 = t;
        w_8 :
        if(((ATgetType(x_8) == AT_LIST) && !(ATisEmpty(x_8))))
          {
            y_8 = ATgetFirst((ATermList) x_8);
            z_8 = (ATerm) ATgetNext((ATermList) x_8);
            {
              ATerm c_9 = NULL,e_9 = NULL;
              ATerm h_9;
              h_9 = t;
              {
                ATerm d_9 = NULL;
                t = not_null(y_8);
                {
                  t = m_72(t);
                  {
                    d_9 = t;
                    if(((c_9 != NULL) && (c_9 != d_9)))
                      _fail(d_9);
                    else
                      c_9 = d_9;
                  }
                }
              }
              t = h_9;
              {
                ATerm f_9 = NULL;
                t = not_null(z_8);
                {
                  t = foldr_3(t, k_72, l_72, m_72);
                  {
                    f_9 = t;
                    if(((e_9 != NULL) && (e_9 != f_9)))
                      _fail(f_9);
                    else
                      e_9 = f_9;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_9), not_null(e_9));
                  t = l_72(t);
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
  ATerm q_9 = NULL;
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
  q_9 = t;
  {
    ATerm v_9 = NULL;
    ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL;
    t = not_null(q_9);
    {
      v_9 = t;
      {
        t = SSL_explode_term(not_null(v_9));
        {
          x_9 = t;
          m_9 :
          if(match_cons(x_9, sym__2))
            {
              y_9 = ATgetArgument(x_9, 0);
              z_9 = ATgetArgument(x_9, 1);
              n_9 :
              if(match_string(y_9, ""))
                {
                  o_9 :
                  if(((ATgetType(z_9) == AT_LIST) && !(ATisEmpty(z_9))))
                    {
                      a_10 = ATgetFirst((ATermList) z_9);
                      b_10 = (ATerm) ATgetNext((ATermList) z_9);
                      p_9 :
                      if(((ATgetType(b_10) == AT_LIST) && !(ATisEmpty(b_10))))
                        {
                          c_10 = ATgetFirst((ATermList) b_10);
                          d_10 = (ATerm) ATgetNext((ATermList) b_10);
                          {
                            if(((s_9 != NULL) && (s_9 != a_10)))
                              _fail(a_10);
                            else
                              s_9 = a_10;
                            {
                              if(((u_9 != NULL) && (u_9 != c_10)))
                                _fail(c_10);
                              else
                                u_9 = c_10;
                              if(((t_9 != NULL) && (t_9 != d_10)))
                                _fail(d_10);
                              else
                                t_9 = d_10;
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
    t = not_null(u_9);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm n_10 = NULL;
  ATerm p_10 = NULL,q_10 = NULL;
  n_10 = t;
  {
    ATerm r_10 = NULL;
    ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL;
    t = not_null(n_10);
    {
      r_10 = t;
      {
        t = SSL_explode_term(not_null(r_10));
        {
          t_10 = t;
          k_10 :
          if(match_cons(t_10, sym__2))
            {
              u_10 = ATgetArgument(t_10, 0);
              v_10 = ATgetArgument(t_10, 1);
              l_10 :
              if(match_string(u_10, ""))
                {
                  m_10 :
                  if(((ATgetType(v_10) == AT_LIST) && !(ATisEmpty(v_10))))
                    {
                      w_10 = ATgetFirst((ATermList) v_10);
                      x_10 = (ATerm) ATgetNext((ATermList) v_10);
                      {
                        if(((q_10 != NULL) && (q_10 != w_10)))
                          _fail(w_10);
                        else
                          q_10 = w_10;
                        if(((p_10 != NULL) && (p_10 != x_10)))
                          _fail(x_10);
                        else
                          p_10 = x_10;
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
    t = not_null(q_10);
  }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm s_79 (ATerm))
{
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_9;
      k_9 = t;
      {
        ATerm c_11 = NULL;
        ATerm d_11 = NULL;
        t = term_l_9;
        {
          t = get_config_0(t);
          {
            d_11 = t;
            if(((c_11 != NULL) && (c_11 != d_11)))
              _fail(d_11);
            else
              c_11 = d_11;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_11), term_r_9);
          t = geq_0(t);
        }
      }
      t = k_9;
      t = s_79(t);
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
      {
      }
    }
  return(t);
}
ATerm term_to_tree_0 (ATerm t)
{
  ATerm n_11 = NULL,p_11 = NULL;
  ATerm c_1 (ATerm t)
  {
    ATerm d_1 (ATerm t)
    {
      t = term_w_9;
      return(t);
    }
    t = debug_1(t, d_1);
    return(t);
  }
  t = if_verbose5_1(t, c_1);
  {
    ATerm e_10;
    e_10 = t;
    {
      ATerm o_11 = NULL;
      t = new_0(t);
      {
        o_11 = t;
        if(((n_11 != NULL) && (n_11 != o_11)))
          _fail(o_11);
        else
          n_11 = o_11;
      }
    }
    t = e_10;
    {
      ATerm q_11 = NULL;
      q_11 = t;
      if(((p_11 != NULL) && (p_11 != q_11)))
        _fail(q_11);
      else
        p_11 = q_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_11), not_null(p_11));
        {
          ATerm f_12 (ATerm t)
          {
            ATerm z_11 = NULL,b_12 = NULL;
            ATerm e_1 (ATerm t)
            {
              ATerm f_10 = t;
              int g_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_1 (ATerm t)
                  {
                    ATerm r_11 = NULL,t_11 = NULL;
                    ATerm h_10;
                    h_10 = t;
                    {
                      ATerm s_11 = NULL;
                      t = new_0(t);
                      {
                        s_11 = t;
                        if(((r_11 != NULL) && (r_11 != s_11)))
                          _fail(s_11);
                        else
                          r_11 = s_11;
                      }
                    }
                    t = h_10;
                    {
                      ATerm u_11 = NULL;
                      u_11 = t;
                      if(((t_11 != NULL) && (t_11 != u_11)))
                        _fail(u_11);
                      else
                        t_11 = u_11;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_11), not_null(t_11));
                    }
                    return(t);
                  }
                  t = map_1(t, h_1);
                  LocalPopChoice(g_10);
                }
              else
                {
                  t = f_10;
                  {
                    ATerm i_1 (ATerm t)
                    {
                      ATerm v_11 = NULL,x_11 = NULL;
                      ATerm i_10;
                      i_10 = t;
                      {
                        ATerm w_11 = NULL;
                        t = new_0(t);
                        {
                          w_11 = t;
                          if(((v_11 != NULL) && (v_11 != w_11)))
                            _fail(w_11);
                          else
                            v_11 = w_11;
                        }
                      }
                      t = i_10;
                      {
                        ATerm y_11 = NULL;
                        y_11 = t;
                        if(((x_11 != NULL) && (x_11 != y_11)))
                          _fail(y_11);
                        else
                          x_11 = y_11;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(v_11), not_null(x_11));
                      }
                      return(t);
                    }
                    t = _all(t, i_1);
                  }
                }
              return(t);
            }
            t = _2(t, _id, e_1);
            {
              ATerm j_10;
              j_10 = t;
              {
                ATerm a_12 = NULL;
                ATerm j_1 (ATerm t)
                {
                  ATerm o_10 = t;
                  int s_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = map_1(t, Fst_0);
                      LocalPopChoice(s_10);
                    }
                  else
                    {
                      t = o_10;
                      t = _all(t, Fst_0);
                    }
                  return(t);
                }
                t = _2(t, _id, j_1);
                {
                  a_12 = t;
                  if(((z_11 != NULL) && (z_11 != a_12)))
                    _fail(a_12);
                  else
                    z_11 = a_12;
                }
              }
              t = j_10;
              {
                ATerm c_12 = NULL;
                t = Snd_0(t);
                {
                  ATerm y_10 = t;
                  int z_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_1 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      ATerm l_1 (ATerm t)
                      {
                        t = union_1(t, eq_0);
                        return(t);
                      }
                      t = foldr_3(t, k_1, l_1, f_12);
                      LocalPopChoice(z_10);
                    }
                  else
                    {
                      t = y_10;
                      {
                        ATerm m_1 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        ATerm n_1 (ATerm t)
                        {
                          t = union_1(t, eq_0);
                          return(t);
                        }
                        t = crush_3(t, m_1, n_1, f_12);
                      }
                    }
                  {
                    c_12 = t;
                    if(((b_12 != NULL) && (b_12 != c_12)))
                      _fail(c_12);
                    else
                      b_12 = c_12;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(b_12)), not_null(z_11));
              }
            }
            return(t);
          }
          t = f_12(t);
        }
      }
    }
  }
  return(t);
}
ATerm to_adot_0 (ATerm t)
{
  ATerm a_11 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_11;
      e_11 = t;
      {
        t = term_f_6;
        t = get_config_0(t);
      }
      t = e_11;
      t = term_to_tree_0(t);
      LocalPopChoice(b_11);
    }
  else
    {
      t = a_11;
      {
        ATerm f_11;
        f_11 = t;
        {
          t = term_w_5;
          t = get_config_0(t);
        }
        t = f_11;
        t = term_to_graph_0(t);
      }
    }
  t = graph_to_adot_0(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm o_12 = NULL;
  ATerm g_11;
  g_11 = t;
  {
    ATerm o_1 (ATerm t)
    {
      ATerm p_12 = NULL,q_12 = NULL;
      p_12 = t;
      n_12 :
      if(match_cons(p_12, sym_Program_1))
        {
          q_12 = ATgetArgument(p_12, 0);
          if(((o_12 != NULL) && (o_12 != q_12)))
            _fail(q_12);
          else
            o_12 = q_12;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, o_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_11), not_null(o_12)), term_i_11));
      {
        t = printnl_0(t);
        {
          t = term_k_11;
          t = exit_0(t);
        }
      }
    }
  }
  t = g_11;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
  u_12 = t;
  t_12 :
  if(match_cons(u_12, sym__2))
    {
      v_12 = ATgetArgument(u_12, 0);
      w_12 = ATgetArgument(u_12, 1);
      {
        ATerm l_11;
        l_11 = t;
        t = SSL_printnl(not_null(v_12), not_null(w_12));
        t = l_11;
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
  ATerm b_13 = NULL;
  b_13 = t;
  t = SSL_implode_string(not_null(b_13));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm m_11 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(d_12);
    }
  else
    {
      t = m_11;
      {
        ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
        g_13 = t;
        f_13 :
        if(((ATgetType(g_13) == AT_LIST) && !(ATisEmpty(g_13))))
          {
            h_13 = ATgetFirst((ATermList) g_13);
            i_13 = (ATerm) ATgetNext((ATermList) g_13);
            {
              t = not_null(h_13);
              {
                ATerm p_1 (ATerm t)
                {
                  t = not_null(i_13);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, p_1);
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
  ATerm s_13 = NULL;
  ATerm u_13 = NULL;
  s_13 = t;
  {
    ATerm v_13 = NULL;
    ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL;
    t = not_null(s_13);
    {
      v_13 = t;
      {
        t = SSL_explode_term(not_null(v_13));
        {
          x_13 = t;
          q_13 :
          if(match_cons(x_13, sym__2))
            {
              y_13 = ATgetArgument(x_13, 0);
              z_13 = ATgetArgument(x_13, 1);
              r_13 :
              if(match_string(y_13, ""))
                {
                  if(((u_13 != NULL) && (u_13 != z_13)))
                    _fail(z_13);
                  else
                    u_13 = z_13;
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
      t = not_null(u_13);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_66 (ATerm))
{
  ATerm d_14 (ATerm t)
  {
    ATerm e_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_14);
        LocalPopChoice(g_12);
      }
    else
      {
        t = e_12;
        {
          t = Nil_0(t);
          t = j_66(t);
        }
      }
    return(t);
  }
  t = d_14(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL;
  g_14 = t;
  f_14 :
  if(match_cons(g_14, sym__2))
    {
      h_14 = ATgetArgument(g_14, 0);
      i_14 = ATgetArgument(g_14, 1);
      {
        t = not_null(h_14);
        {
          ATerm q_1 (ATerm t)
          {
            t = not_null(i_14);
            return(t);
          }
          t = at_end_1(t, q_1);
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
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(i_12);
    }
  else
    {
      t = h_12;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm n_14 = NULL;
  n_14 = t;
  t = SSL_explode_string(not_null(n_14));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm r_14 = NULL;
  r_14 = t;
  t = SSL_is_string(not_null(r_14));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
      {
        ATerm r_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              ATerm x_12 = t;
              int y_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(y_12);
                }
              else
                {
                  t = x_12;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, r_1);
            LocalPopChoice(s_12);
          }
        else
          {
            t = r_12;
            {
              ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL;
              a_15 = t;
              z_14 :
              if(match_cons(a_15, sym_Path_1))
                {
                  b_15 = ATgetArgument(a_15, 0);
                  t = not_null(b_15);
                }
              else
                {
                  if(match_cons(a_15, sym_Var_1))
                    {
                      b_15 = ATgetArgument(a_15, 0);
                      {
                        t = not_null(b_15);
                        {
                          ATerm z_12 = t;
                          int a_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(a_13);
                            }
                          else
                            {
                              t = z_12;
                              {
                                ATerm s_1 (ATerm t)
                                {
                                  t = term_c_13;
                                  return(t);
                                }
                                t = debug_1(t, s_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(a_15, sym_Prefix_2))
                        {
                          b_15 = ATgetArgument(a_15, 0);
                          c_15 = ATgetArgument(a_15, 1);
                          {
                            ATerm h_15 = NULL,j_15 = NULL;
                            ATerm d_13;
                            d_13 = t;
                            {
                              ATerm i_15 = NULL;
                              t = not_null(b_15);
                              {
                                t = eval_config_0(t);
                                {
                                  i_15 = t;
                                  if(((h_15 != NULL) && (h_15 != i_15)))
                                    _fail(i_15);
                                  else
                                    h_15 = i_15;
                                }
                              }
                            }
                            t = d_13;
                            {
                              ATerm k_15 = NULL;
                              t = not_null(c_15);
                              {
                                t = eval_config_0(t);
                                {
                                  k_15 = t;
                                  if(((j_15 != NULL) && (j_15 != k_15)))
                                    _fail(k_15);
                                  else
                                    j_15 = k_15;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_15), not_null(j_15));
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
  ATerm s_15 = NULL;
  s_15 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_e_13, not_null(s_15));
    {
      t = table_get_0(t);
      {
        ATerm j_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm l_13;
              l_13 = t;
              {
                ATerm u_15 = NULL;
                ATerm v_15 = NULL;
                v_15 = t;
                if(((u_15 != NULL) && (u_15 != v_15)))
                  _fail(v_15);
                else
                  u_15 = v_15;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_e_13, not_null(s_15), not_null(u_15));
                  t = table_put_0(t);
                }
              }
              t = l_13;
            }
            LocalPopChoice(k_13);
          }
        else
          {
            t = j_13;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm p_79 (ATerm))
{
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_13;
      o_13 = t;
      {
        ATerm z_15 = NULL;
        ATerm a_16 = NULL;
        t = term_l_9;
        {
          t = get_config_0(t);
          {
            a_16 = t;
            if(((z_15 != NULL) && (z_15 != a_16)))
              _fail(a_16);
            else
              z_15 = a_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_15), term_p_13);
          t = geq_0(t);
        }
      }
      t = o_13;
      t = p_79(t);
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
  e_16 = t;
  d_16 :
  if(match_cons(e_16, sym__2))
    {
      f_16 = ATgetArgument(e_16, 0);
      g_16 = ATgetArgument(e_16, 1);
      t = SSL_WriteToTextFile(not_null(f_16), not_null(g_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm s_49 (ATerm), ATerm t_49 (ATerm))
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
  q_16 = t;
  p_16 :
  if(match_cons(q_16, sym__2))
    {
      r_16 = ATgetArgument(q_16, 0);
      s_16 = ATgetArgument(q_16, 1);
      {
        ATerm w_16 = NULL,y_16 = NULL;
        ATerm x_16 = NULL;
        t = SSLgetAnnotations(not_null(q_16));
        {
          x_16 = t;
          if(((w_16 != NULL) && (w_16 != x_16)))
            _fail(x_16);
          else
            w_16 = x_16;
        }
        {
          t = not_null(r_16);
          {
            ATerm a_17 = NULL;
            t = s_49(t);
            {
              y_16 = t;
              {
                t = not_null(s_16);
                {
                  ATerm c_17 = NULL;
                  t = t_49(t);
                  {
                    a_17 = t;
                    {
                      ATerm d_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_16), not_null(a_17)), not_null(w_16));
                      {
                        d_17 = t;
                        if(((c_17 != NULL) && (c_17 != d_17)))
                          _fail(d_17);
                        else
                          c_17 = d_17;
                      }
                      t = not_null(c_17);
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
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
  l_17 = t;
  k_17 :
  if(match_cons(l_17, sym__2))
    {
      m_17 = ATgetArgument(l_17, 0);
      n_17 = ATgetArgument(l_17, 1);
      t = SSL_WriteToBinaryFile(not_null(m_17), not_null(n_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm v_17 = NULL;
  ATerm t_13;
  t_13 = t;
  {
    ATerm t_1 (ATerm t)
    {
      ATerm w_13 = t;
      int a_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_1 (ATerm t)
          {
            ATerm w_17 = NULL,x_17 = NULL;
            w_17 = t;
            s_17 :
            if(match_cons(w_17, sym_Output_1))
              {
                x_17 = ATgetArgument(w_17, 0);
                if(((v_17 != NULL) && (v_17 != x_17)))
                  _fail(x_17);
                else
                  v_17 = x_17;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, v_1);
          LocalPopChoice(a_14);
        }
      else
        {
          t = w_13;
          {
            ATerm y_17 = NULL;
            t = term_b_14;
            {
              y_17 = t;
              if(((v_17 != NULL) && (v_17 != y_17)))
                _fail(y_17);
              else
                v_17 = y_17;
            }
          }
        }
      return(t);
    }
    t = _2(t, t_1, _id);
  }
  t = t_13;
  {
    ATerm w_1 (ATerm t)
    {
      ATerm x_1 (ATerm t)
      {
        t = not_null(v_17);
        return(t);
      }
      t = split_2(t, x_1, _id);
      return(t);
    }
    t = _2(t, _id, w_1);
    {
      ATerm c_14 = t;
      int e_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_2 (ATerm t)
          {
            ATerm d_2 (ATerm t)
            {
              ATerm z_17 = NULL;
              z_17 = t;
              u_17 :
              if(!(match_cons(z_17, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, d_2);
            return(t);
          }
          t = _2(t, b_2, WriteToBinaryFile_0);
          LocalPopChoice(e_14);
        }
      else
        {
          t = c_14;
          t = _2(t, _id, WriteToTextFile_0);
        }
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm w_77 (ATerm))
{
  ATerm f_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL;
  ATerm j_14;
  j_14 = t;
  t = dtime_0(t);
  t = j_14;
  {
    t = w_77(t);
    {
      ATerm k_14;
      k_14 = t;
      {
        ATerm g_18 = NULL;
        t = dtime_0(t);
        {
          g_18 = t;
          if(((f_18 != NULL) && (f_18 != g_18)))
            _fail(g_18);
          else
            f_18 = g_18;
        }
      }
      t = k_14;
      {
        h_18 = t;
        e_18 :
        if(match_cons(h_18, sym__2))
          {
            i_18 = ATgetArgument(h_18, 0);
            j_18 = ATgetArgument(h_18, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_18)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(f_18))), not_null(j_18));
          }
        else
          {
            _fail(t);
          }
      }
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm s_76 (ATerm))
{
  ATerm l_14;
  l_14 = t;
  {
    ATerm q_18 = NULL,s_18 = NULL;
    ATerm m_14;
    m_14 = t;
    {
      ATerm r_18 = NULL;
      t = s_76(t);
      {
        r_18 = t;
        if(((q_18 != NULL) && (q_18 != r_18)))
          _fail(r_18);
        else
          q_18 = r_18;
      }
    }
    t = m_14;
    {
      ATerm t_18 = NULL;
      t_18 = t;
      if(((s_18 != NULL) && (s_18 != t_18)))
        _fail(t_18);
      else
        s_18 = t_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_18)), not_null(q_18)));
        t = printnl_0(t);
      }
    }
  }
  t = l_14;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm x_18 = NULL;
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_18 = NULL;
      y_18 = t;
      {
        if(((x_18 != NULL) && (x_18 != y_18)))
          _fail(y_18);
        else
          x_18 = y_18;
        t = SSL_ReadFromFile(not_null(x_18));
      }
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
      {
        ATerm e_2 (ATerm t)
        {
          t = term_q_14;
          return(t);
        }
        t = debug_1(t, e_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_73 (ATerm), ATerm y_73 (ATerm))
{
  ATerm c_19 = NULL,e_19 = NULL;
  ATerm s_14;
  s_14 = t;
  {
    ATerm d_19 = NULL;
    t = x_73(t);
    {
      d_19 = t;
      if(((c_19 != NULL) && (c_19 != d_19)))
        _fail(d_19);
      else
        c_19 = d_19;
    }
  }
  t = s_14;
  {
    ATerm f_19 = NULL;
    t = y_73(t);
    {
      f_19 = t;
      if(((e_19 != NULL) && (e_19 != f_19)))
        _fail(f_19);
      else
        e_19 = f_19;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_19), not_null(e_19));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm y_19 = NULL;
  ATerm t_14;
  t_14 = t;
  {
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_2 (ATerm t)
        {
          ATerm z_19 = NULL,a_20 = NULL;
          z_19 = t;
          j_19 :
          if(match_cons(z_19, sym_Input_1))
            {
              a_20 = ATgetArgument(z_19, 0);
              if(((y_19 != NULL) && (y_19 != a_20)))
                _fail(a_20);
              else
                y_19 = a_20;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, f_2);
        LocalPopChoice(v_14);
      }
    else
      {
        t = u_14;
        {
          ATerm b_20 = NULL;
          t = term_w_14;
          {
            b_20 = t;
            if(((y_19 != NULL) && (y_19 != b_20)))
              _fail(b_20);
            else
              y_19 = b_20;
          }
        }
      }
  }
  t = t_14;
  {
    ATerm h_2 (ATerm t)
    {
      t = not_null(y_19);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, h_2);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm f_20 = NULL;
    f_20 = t;
    e_20 :
    if(!(match_string(f_20, "-v")))
      {
        if(!(match_string(f_20, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = term_y_14;
    t = set_config_0(t);
    t = term_d_15;
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    t = term_e_15;
    return(t);
  }
  t = Option_3(t, m_2, n_2, o_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm i_20 = NULL;
    i_20 = t;
    g_20 :
    if(!(match_string(i_20, "-k")))
      {
        if(!(match_string(i_20, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm f_15;
    f_15 = t;
    {
      ATerm j_20 = NULL;
      ATerm k_20 = NULL;
      t = string_to_int_0(t);
      {
        k_20 = t;
        if(((j_20 != NULL) && (j_20 != k_20)))
          _fail(k_20);
        else
          j_20 = k_20;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_15, not_null(j_20));
        t = set_config_0(t);
      }
    }
    t = f_15;
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_l_15;
    return(t);
  }
  t = ArgOption_3(t, u_2, v_2, x_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm n_20 = NULL;
  n_20 = t;
  t = SSL_string_to_int(not_null(n_20));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_2 (ATerm t)
      {
        ATerm v_20 = NULL;
        v_20 = t;
        q_20 :
        if(!(match_string(v_20, "-S")))
          {
            if(!(match_string(v_20, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm a_3 (ATerm t)
      {
        t = term_p_15;
        t = set_config_0(t);
        t = term_q_15;
        return(t);
      }
      ATerm b_3 (ATerm t)
      {
        t = term_r_15;
        return(t);
      }
      t = Option_3(t, z_2, a_3, b_3);
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
      {
        ATerm t_15 = t;
        int w_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_3 (ATerm t)
            {
              ATerm w_20 = NULL;
              w_20 = t;
              r_20 :
              if(!(match_string(w_20, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_3 (ATerm t)
            {
              ATerm z_20 = NULL;
              ATerm x_15;
              x_15 = t;
              {
                ATerm x_20 = NULL;
                ATerm y_20 = NULL;
                t = string_to_int_0(t);
                {
                  y_20 = t;
                  if(((x_20 != NULL) && (x_20 != y_20)))
                    _fail(y_20);
                  else
                    x_20 = y_20;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_l_9, not_null(x_20));
                  t = set_config_0(t);
                }
              }
              t = x_15;
              {
                ATerm a_21 = NULL;
                a_21 = t;
                if(((z_20 != NULL) && (z_20 != a_21)))
                  _fail(a_21);
                else
                  z_20 = a_21;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(z_20));
              }
              return(t);
            }
            ATerm i_3 (ATerm t)
            {
              t = term_y_15;
              return(t);
            }
            t = ArgOption_3(t, g_3, h_3, i_3);
            LocalPopChoice(w_15);
          }
        else
          {
            t = t_15;
            {
              ATerm j_3 (ATerm t)
              {
                ATerm b_21 = NULL;
                b_21 = t;
                u_20 :
                if(!(match_string(b_21, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm m_3 (ATerm t)
              {
                t = term_c_16;
                t = set_config_0(t);
                t = term_h_16;
                return(t);
              }
              ATerm n_3 (ATerm t)
              {
                t = term_i_16;
                return(t);
              }
              t = Option_3(t, j_3, m_3, n_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm j_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(k_16);
    }
  else
    {
      t = j_16;
      {
        ATerm l_16 = t;
        int m_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(m_16);
          }
        else
          {
            t = l_16;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    ATerm m_21 = NULL;
    m_21 = t;
    j_21 :
    if(!(match_string(m_21, "-o")))
      {
        if(!(match_string(m_21, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    ATerm p_21 = NULL;
    ATerm n_16;
    n_16 = t;
    {
      ATerm n_21 = NULL;
      ATerm o_21 = NULL;
      o_21 = t;
      if(((n_21 != NULL) && (n_21 != o_21)))
        _fail(o_21);
      else
        n_21 = o_21;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_16, not_null(n_21));
        t = set_config_0(t);
      }
    }
    t = n_16;
    {
      ATerm q_21 = NULL;
      q_21 = t;
      if(((p_21 != NULL) && (p_21 != q_21)))
        _fail(q_21);
      else
        p_21 = q_21;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_21));
    }
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = term_t_16;
    return(t);
  }
  t = ArgOption_3(t, o_3, p_3, q_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(v_16);
    }
  else
    {
      t = u_16;
      {
        ATerm s_3 (ATerm t)
        {
          ATerm u_21 = NULL;
          u_21 = t;
          t_21 :
          if(!(match_string(u_21, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm t_3 (ATerm t)
        {
          t = term_b_17;
          t = set_config_0(t);
          t = term_e_17;
          return(t);
        }
        ATerm u_3 (ATerm t)
        {
          t = term_f_17;
          return(t);
        }
        t = Option_3(t, s_3, t_3, u_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL;
  d_22 = t;
  b_22 :
  if(match_string(d_22, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(d_22) == AT_LIST) && !(ATisEmpty(d_22))))
        {
          e_22 = ATgetFirst((ATermList) d_22);
          f_22 = (ATerm) ATgetNext((ATermList) d_22);
          c_22 :
          if(((ATgetType(f_22) == AT_LIST) && !(ATisEmpty(f_22))))
            {
              g_22 = ATgetFirst((ATermList) f_22);
              h_22 = (ATerm) ATgetNext((ATermList) f_22);
              {
                ATerm l_22 = NULL;
                ATerm g_17;
                g_17 = t;
                {
                  t = not_null(e_22);
                  t = j_0(t);
                }
                t = g_17;
                {
                  ATerm m_22 = NULL;
                  t = not_null(g_22);
                  {
                    t = k_0(t);
                    {
                      m_22 = t;
                      if(((l_22 != NULL) && (l_22 != m_22)))
                        _fail(m_22);
                      else
                        l_22 = m_22;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_22)), not_null(l_22));
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
  ATerm v_3 (ATerm t)
  {
    ATerm t_22 = NULL;
    t_22 = t;
    q_22 :
    if(!(match_string(t_22, "-i")))
      {
        if(!(match_string(t_22, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    ATerm w_22 = NULL;
    ATerm h_17;
    h_17 = t;
    {
      ATerm u_22 = NULL;
      ATerm v_22 = NULL;
      v_22 = t;
      if(((u_22 != NULL) && (u_22 != v_22)))
        _fail(v_22);
      else
        u_22 = v_22;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_17, not_null(u_22));
        t = set_config_0(t);
      }
    }
    t = h_17;
    {
      ATerm x_22 = NULL;
      x_22 = t;
      if(((w_22 != NULL) && (w_22 != x_22)))
        _fail(x_22);
      else
        w_22 = x_22;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_22));
    }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = term_j_17;
    return(t);
  }
  t = ArgOption_3(t, v_3, w_3, b_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(p_17);
    }
  else
    {
      t = o_17;
      {
        ATerm q_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(r_17);
          }
        else
          {
            t = q_17;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_h_11, (ATerm) ATinsert(ATempty, term_t_17));
  {
    t = printnl_0(t);
    {
      t = term_k_11;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm b_23 = NULL;
  b_23 = t;
  t = SSL_TicksToSeconds(not_null(b_23));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL;
  g_23 = t;
  f_23 :
  if(match_cons(g_23, sym__2))
    {
      h_23 = ATgetArgument(g_23, 0);
      i_23 = ATgetArgument(g_23, 1);
      {
        ATerm a_18 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(h_23), not_null(i_23));
            LocalPopChoice(b_18);
          }
        else
          {
            t = a_18;
            t = SSL_addr(not_null(h_23), not_null(i_23));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm i_72 (ATerm), ATerm j_72 (ATerm))
{
  ATerm c_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_72(t);
      LocalPopChoice(d_18);
    }
  else
    {
      t = c_18;
      {
        ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
        p_23 = t;
        o_23 :
        if(((ATgetType(p_23) == AT_LIST) && !(ATisEmpty(p_23))))
          {
            q_23 = ATgetFirst((ATermList) p_23);
            r_23 = (ATerm) ATgetNext((ATermList) p_23);
            {
              ATerm u_23 = NULL;
              ATerm v_23 = NULL;
              t = not_null(r_23);
              {
                t = foldr_2(t, i_72, j_72);
                {
                  v_23 = t;
                  if(((u_23 != NULL) && (u_23 != v_23)))
                    _fail(v_23);
                  else
                    u_23 = v_23;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_23), not_null(u_23));
                t = j_72(t);
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
ATerm crush_2 (ATerm t, ATerm g_71 (ATerm), ATerm h_71 (ATerm))
{
  ATerm c_24 = NULL;
  ATerm e_24 = NULL;
  c_24 = t;
  {
    ATerm f_24 = NULL;
    ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
    t = not_null(c_24);
    {
      f_24 = t;
      {
        t = SSL_explode_term(not_null(f_24));
        {
          h_24 = t;
          b_24 :
          if(match_cons(h_24, sym__2))
            {
              i_24 = ATgetArgument(h_24, 0);
              j_24 = ATgetArgument(h_24, 1);
              if(((e_24 != NULL) && (e_24 != j_24)))
                _fail(j_24);
              else
                e_24 = j_24;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_24);
      t = foldr_2(t, g_71, h_71);
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
    ATerm c_4 (ATerm t)
    {
      t = term_o_15;
      return(t);
    }
    t = crush_2(t, c_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  p_24 = t;
  o_24 :
  if(match_cons(p_24, sym__2))
    {
      q_24 = ATgetArgument(p_24, 0);
      r_24 = ATgetArgument(p_24, 1);
      {
        ATerm k_18;
        k_18 = t;
        {
          ATerm l_18 = t;
          int m_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(q_24), not_null(r_24));
              LocalPopChoice(m_18);
            }
          else
            {
              t = l_18;
              t = SSL_gtr(not_null(q_24), not_null(r_24));
            }
        }
        t = k_18;
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
  ATerm x_24 = NULL;
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL;
      y_24 = t;
      w_24 :
      if(match_cons(y_24, sym__2))
        {
          z_24 = ATgetArgument(y_24, 0);
          a_25 = ATgetArgument(y_24, 1);
          {
            if(((x_24 != NULL) && (x_24 != z_24)))
              _fail(z_24);
            else
              x_24 = z_24;
            if(((x_24 != NULL) && (x_24 != a_25)))
              _fail(a_25);
            else
              x_24 = a_25;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm o_79 (ATerm))
{
  ATerm p_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_18;
      v_18 = t;
      {
        ATerm d_25 = NULL;
        ATerm e_25 = NULL;
        t = term_l_9;
        {
          t = get_config_0(t);
          {
            e_25 = t;
            if(((d_25 != NULL) && (d_25 != e_25)))
              _fail(e_25);
            else
              d_25 = e_25;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_25), term_k_11);
          t = geq_0(t);
        }
      }
      t = v_18;
      t = o_79(t);
      LocalPopChoice(u_18);
    }
  else
    {
      t = p_18;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm i_25 = NULL,k_25 = NULL;
    ATerm w_18;
    w_18 = t;
    {
      ATerm j_25 = NULL;
      t = run_time_0(t);
      {
        j_25 = t;
        if(((i_25 != NULL) && (i_25 != j_25)))
          _fail(j_25);
        else
          i_25 = j_25;
      }
    }
    t = w_18;
    {
      ATerm l_25 = NULL;
      t = term_z_18;
      {
        t = get_config_0(t);
        {
          l_25 = t;
          if(((k_25 != NULL) && (k_25 != l_25)))
            _fail(l_25);
          else
            k_25 = l_25;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_19), not_null(i_25)), term_a_19), not_null(k_25)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, g_4);
  {
    t = term_o_15;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm s_25 = NULL;
  s_25 = t;
  r_25 :
  if(match_cons(s_25, sym_Version_0))
    {
      ATerm u_25 = NULL,w_25 = NULL;
      ATerm g_19;
      g_19 = t;
      {
        ATerm v_25 = NULL;
        t = SSLgetAnnotations(not_null(s_25));
        {
          v_25 = t;
          if(((u_25 != NULL) && (u_25 != v_25)))
            _fail(v_25);
          else
            u_25 = v_25;
        }
      }
      t = g_19;
      {
        ATerm x_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(u_25));
        {
          x_25 = t;
          if(((w_25 != NULL) && (w_25 != x_25)))
            _fail(x_25);
          else
            w_25 = x_25;
        }
        t = not_null(w_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm u_77 (ATerm))
{
  ATerm o_4 (ATerm t)
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
        {
          ATerm k_19 = t;
          int l_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(l_19);
            }
          else
            {
              t = k_19;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, o_4);
  t = u_77(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_26 = NULL;
  c_26 = t;
  t = SSL_table_create(not_null(c_26));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  {
    ATerm m_19;
    m_19 = t;
    {
      t = term_n_19;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_n_19, term_o_19, not_null(g_26));
          t = table_put_0(t);
        }
      }
    }
    t = m_19;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm k_26 = NULL;
  k_26 = t;
  t = SSL_table_destroy(not_null(k_26));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm q_26 = NULL;
  q_26 = t;
  t = SSL_exit(not_null(q_26));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
  z_26 = t;
  v_26 :
  if(((ATgetType(z_26) == AT_LIST) && ATisEmpty(z_26)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(z_26) == AT_LIST) && !(ATisEmpty(z_26))))
        {
          a_27 = ATgetFirst((ATermList) z_26);
          b_27 = (ATerm) ATgetNext((ATermList) z_26);
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
  ATerm p_19;
  p_19 = t;
  {
    ATerm e_27 = NULL;
    ATerm h_27 = NULL;
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        {
          ATerm f_27 = NULL;
          ATerm g_27 = NULL;
          g_27 = t;
          if(((f_27 != NULL) && (f_27 != g_27)))
            _fail(g_27);
          else
            f_27 = g_27;
          t = (ATerm) ATinsert(ATempty, not_null(f_27));
        }
      }
    {
      h_27 = t;
      if(((e_27 != NULL) && (e_27 != h_27)))
        _fail(h_27);
      else
        e_27 = h_27;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_14, not_null(e_27));
      t = printnl_0(t);
    }
  }
  t = p_19;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm s_81 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_65 (ATerm))
{
  ATerm o_27 (ATerm t)
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
        t = Cons_2(t, u_65, o_27);
      }
    return(t);
  }
  t = o_27(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
  x_27 = t;
  u_27 :
  if(((ATgetType(x_27) == AT_LIST) && !(ATisEmpty(x_27))))
    {
      v_27 = ATgetFirst((ATermList) x_27);
      w_27 = (ATerm) ATgetNext((ATermList) x_27);
      {
        ATerm a_28 = NULL;
        t = not_null(w_27);
        {
          ATerm u_19;
          u_19 = t;
          {
            ATerm b_28 = NULL,d_28 = NULL,f_28 = NULL;
            ATerm v_19;
            v_19 = t;
            {
              ATerm c_28 = NULL;
              t = i_0(t);
              {
                c_28 = t;
                if(((b_28 != NULL) && (b_28 != c_28)))
                  _fail(c_28);
                else
                  b_28 = c_28;
              }
            }
            t = v_19;
            {
              ATerm e_28 = NULL;
              t = not_null(v_27);
              {
                t = h_0(t);
                {
                  e_28 = t;
                  if(((d_28 != NULL) && (d_28 != e_28)))
                    _fail(e_28);
                  else
                    d_28 = e_28;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(b_28)), not_null(d_28));
                {
                  f_28 = t;
                  if(((a_28 != NULL) && (a_28 != f_28)))
                    _fail(f_28);
                  else
                    a_28 = f_28;
                }
              }
            }
          }
          t = u_19;
          {
            ATerm q_4 (ATerm t)
            {
              t = not_null(a_28);
              return(t);
            }
            t = reverse_acc_2(t, h_0, q_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(x_27) == AT_LIST) && ATisEmpty(x_27)))
        {
          {
            t = term_y_5;
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
  ATerm r_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, r_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm r_81 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm q_57 (ATerm))
{
  ATerm q_28 = NULL,r_28 = NULL;
  q_28 = t;
  p_28 :
  if(match_cons(q_28, sym_Program_1))
    {
      r_28 = ATgetArgument(q_28, 0);
      {
        ATerm u_28 = NULL,w_28 = NULL;
        ATerm v_28 = NULL;
        t = SSLgetAnnotations(not_null(q_28));
        {
          v_28 = t;
          if(((u_28 != NULL) && (u_28 != v_28)))
            _fail(v_28);
          else
            u_28 = v_28;
        }
        {
          t = not_null(r_28);
          {
            ATerm d_29 = NULL;
            t = q_57(t);
            {
              w_28 = t;
              {
                ATerm e_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(w_28)), not_null(u_28));
                {
                  e_29 = t;
                  if(((d_29 != NULL) && (d_29 != e_29)))
                    _fail(e_29);
                  else
                    d_29 = e_29;
                }
                t = not_null(d_29);
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
  ATerm m_29 = NULL;
  ATerm w_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_29 = NULL;
      t = term_z_18;
      {
        t = get_config_0(t);
        {
          n_29 = t;
          if(((m_29 != NULL) && (m_29 != n_29)))
            _fail(n_29);
          else
            m_29 = n_29;
        }
      }
      LocalPopChoice(x_19);
    }
  else
    {
      t = w_19;
      {
        ATerm w_4 (ATerm t)
        {
          ATerm x_4 (ATerm t)
          {
            ATerm o_29 = NULL;
            o_29 = t;
            if(((m_29 != NULL) && (m_29 != o_29)))
              _fail(o_29);
            else
              m_29 = o_29;
            return(t);
          }
          t = Program_1(t, x_4);
          return(t);
        }
        t = fetch_1(t, w_4);
      }
    }
  {
    t = term_c_20;
    {
      t = echo_0(t);
      {
        t = term_l_20;
        {
          t = table_get_0(t);
          {
            ATerm y_4 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, y_4);
            {
              ATerm z_4 (ATerm t)
              {
                ATerm p_29 = NULL;
                ATerm q_29 = NULL;
                q_29 = t;
                if(((p_29 != NULL) && (p_29 != q_29)))
                  _fail(q_29);
                else
                  p_29 = q_29;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_29)), term_m_20);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, z_4);
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
  ATerm o_20;
  o_20 = t;
  {
    ATerm v_29 = NULL;
    ATerm w_29 = NULL;
    w_29 = t;
    if(((v_29 != NULL) && (v_29 != w_29)))
      _fail(w_29);
    else
      v_29 = w_29;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_11, (ATerm) ATinsert(ATempty, not_null(v_29)));
      t = printnl_0(t);
    }
  }
  t = o_20;
  return(t);
}
ATerm say_1 (ATerm t, ATerm t_76 (ATerm))
{
  ATerm p_20;
  p_20 = t;
  {
    t = t_76(t);
    t = debug_0(t);
  }
  t = p_20;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm r_57 (ATerm))
{
  ATerm d_30 = NULL,e_30 = NULL;
  d_30 = t;
  c_30 :
  if(match_cons(d_30, sym_Undefined_1))
    {
      e_30 = ATgetArgument(d_30, 0);
      {
        ATerm h_30 = NULL,j_30 = NULL;
        ATerm i_30 = NULL;
        t = SSLgetAnnotations(not_null(d_30));
        {
          i_30 = t;
          if(((h_30 != NULL) && (h_30 != i_30)))
            _fail(i_30);
          else
            h_30 = i_30;
        }
        {
          t = not_null(e_30);
          {
            ATerm l_30 = NULL;
            t = r_57(t);
            {
              j_30 = t;
              {
                ATerm m_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(j_30)), not_null(h_30));
                {
                  m_30 = t;
                  if(((l_30 != NULL) && (l_30 != m_30)))
                    _fail(m_30);
                  else
                    l_30 = m_30;
                }
                t = not_null(l_30);
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
ATerm fetch_1 (ATerm t, ATerm d_66 (ATerm))
{
  ATerm r_30 (ATerm t)
  {
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_66, _id);
        LocalPopChoice(t_20);
      }
    else
      {
        t = s_20;
        t = Cons_2(t, _id, r_30);
      }
    return(t);
  }
  t = r_30(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_80 (ATerm))
{
  t = fetch_1(t, r_80);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_30 = NULL;
  w_30 = t;
  v_30 :
  if(match_cons(w_30, sym_Help_0))
    {
      ATerm y_30 = NULL,a_31 = NULL;
      ATerm c_21;
      c_21 = t;
      {
        ATerm z_30 = NULL;
        t = SSLgetAnnotations(not_null(w_30));
        {
          z_30 = t;
          if(((y_30 != NULL) && (y_30 != z_30)))
            _fail(z_30);
          else
            y_30 = z_30;
        }
      }
      t = c_21;
      {
        ATerm b_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(y_30));
        {
          b_31 = t;
          if(((a_31 != NULL) && (a_31 != b_31)))
            _fail(b_31);
          else
            a_31 = b_31;
        }
        t = not_null(a_31);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm d_58 (ATerm))
{
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_58(t);
      LocalPopChoice(e_21);
    }
  else
    {
      t = d_21;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL;
  h_31 = t;
  g_31 :
  if(match_cons(h_31, sym__2))
    {
      i_31 = ATgetArgument(h_31, 0);
      j_31 = ATgetArgument(h_31, 1);
      t = SSL_table_get(not_null(i_31), not_null(j_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL;
  q_31 = t;
  p_31 :
  if(match_cons(q_31, sym__3))
    {
      r_31 = ATgetArgument(q_31, 0);
      s_31 = ATgetArgument(q_31, 1);
      t_31 = ATgetArgument(q_31, 2);
      {
        ATerm f_21;
        f_21 = t;
        {
          ATerm x_31 = NULL;
          ATerm y_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_31), not_null(s_31));
          {
            ATerm g_21 = t;
            int h_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(h_21);
              }
            else
              {
                t = g_21;
                t = (ATerm) ATempty;
              }
            {
              y_31 = t;
              if(((x_31 != NULL) && (x_31 != y_31)))
                _fail(y_31);
              else
                x_31 = y_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_31), not_null(s_31), (ATerm) ATinsert(CheckATermList(not_null(x_31)), not_null(t_31)));
            t = table_put_0(t);
          }
        }
        t = f_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm w_81 (ATerm))
{
  ATerm c_32 = NULL;
  ATerm d_32 = NULL;
  t = term_y_5;
  {
    t = w_81(t);
    {
      d_32 = t;
      if(((c_32 != NULL) && (c_32 != d_32)))
        _fail(d_32);
      else
        c_32 = d_32;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_d_20, term_h_20, not_null(c_32));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL;
  j_32 = t;
  i_32 :
  if(match_string(j_32, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(j_32) == AT_LIST) && !(ATisEmpty(j_32))))
        {
          k_32 = ATgetFirst((ATermList) j_32);
          l_32 = (ATerm) ATgetNext((ATermList) j_32);
          {
            ATerm o_32 = NULL;
            ATerm i_21;
            i_21 = t;
            {
              t = not_null(k_32);
              t = a_0(t);
            }
            t = i_21;
            {
              ATerm p_32 = NULL;
              t = term_y_5;
              {
                t = d_0(t);
                {
                  p_32 = t;
                  if(((o_32 != NULL) && (o_32 != p_32)))
                    _fail(p_32);
                  else
                    o_32 = p_32;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_32)), not_null(o_32));
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
  ATerm a_5 (ATerm t)
  {
    ATerm u_32 = NULL;
    u_32 = t;
    t_32 :
    if(!(match_string(u_32, "--help")))
      {
        if(!(match_string(u_32, "-h")))
          {
            if(!(match_string(u_32, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    t = term_l_21;
    {
      t = set_config_0(t);
      t = term_r_21;
    }
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    t = term_s_21;
    return(t);
  }
  t = Option_3(t, a_5, b_5, c_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  x_32 = t;
  w_32 :
  if(((ATgetType(x_32) == AT_LIST) && !(ATisEmpty(x_32))))
    {
      y_32 = ATgetFirst((ATermList) x_32);
      z_32 = (ATerm) ATgetNext((ATermList) x_32);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_32)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_32)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_51 (ATerm), ATerm c_51 (ATerm))
{
  ATerm l_33 = NULL,n_33 = NULL,q_33 = NULL;
  l_33 = t;
  k_33 :
  if(((ATgetType(l_33) == AT_LIST) && !(ATisEmpty(l_33))))
    {
      n_33 = ATgetFirst((ATermList) l_33);
      q_33 = (ATerm) ATgetNext((ATermList) l_33);
      {
        ATerm u_33 = NULL,w_33 = NULL;
        ATerm v_33 = NULL;
        t = SSLgetAnnotations(not_null(l_33));
        {
          v_33 = t;
          if(((u_33 != NULL) && (u_33 != v_33)))
            _fail(v_33);
          else
            u_33 = v_33;
        }
        {
          t = not_null(n_33);
          {
            ATerm b_34 = NULL;
            t = b_51(t);
            {
              w_33 = t;
              {
                t = not_null(q_33);
                {
                  ATerm d_34 = NULL;
                  t = c_51(t);
                  {
                    b_34 = t;
                    {
                      ATerm e_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_34)), not_null(w_33)), not_null(u_33));
                      {
                        e_34 = t;
                        if(((d_34 != NULL) && (d_34 != e_34)))
                          _fail(e_34);
                        else
                          d_34 = e_34;
                      }
                      t = not_null(d_34);
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
  ATerm p_34 = NULL;
  p_34 = t;
  o_34 :
  if(((ATgetType(p_34) == AT_LIST) && ATisEmpty(p_34)))
    {
      {
        ATerm r_34 = NULL,t_34 = NULL;
        ATerm v_21;
        v_21 = t;
        {
          ATerm s_34 = NULL;
          t = SSLgetAnnotations(not_null(p_34));
          {
            s_34 = t;
            if(((r_34 != NULL) && (r_34 != s_34)))
              _fail(s_34);
            else
              r_34 = s_34;
          }
        }
        t = v_21;
        {
          ATerm u_34 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(r_34));
          {
            u_34 = t;
            if(((t_34 != NULL) && (t_34 != u_34)))
              _fail(u_34);
            else
              t_34 = u_34;
          }
          t = not_null(t_34);
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
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
  a_35 = t;
  z_34 :
  if(match_cons(a_35, sym__2))
    {
      b_35 = ATgetArgument(a_35, 0);
      c_35 = ATgetArgument(a_35, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_e_13, not_null(b_35), not_null(c_35));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm u_81 (ATerm))
{
  ATerm w_21;
  w_21 = t;
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_21;
        t = u_81(t);
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        {
        }
      }
  }
  t = w_21;
  {
    ATerm d_5 (ATerm t)
    {
      ATerm k_35 = NULL;
      ATerm a_22;
      a_22 = t;
      {
        ATerm i_35 = NULL;
        ATerm j_35 = NULL;
        j_35 = t;
        if(((i_35 != NULL) && (i_35 != j_35)))
          _fail(j_35);
        else
          i_35 = j_35;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_18, not_null(i_35));
          t = set_config_0(t);
        }
      }
      t = a_22;
      {
        ATerm l_35 = NULL;
        l_35 = t;
        if(((k_35 != NULL) && (k_35 != l_35)))
          _fail(l_35);
        else
          k_35 = l_35;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_35));
      }
      return(t);
    }
    ATerm e_5 (ATerm t)
    {
      ATerm i_22 = t;
      int j_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_22 = t;
          int n_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(n_22);
            }
          else
            {
              t = k_22;
              {
                t = u_81(t);
                t = Cons_2(t, _id, e_5);
              }
            }
          LocalPopChoice(j_22);
        }
      else
        {
          t = i_22;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, d_5, e_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_35 = NULL,x_35 = NULL,y_35 = NULL;
  ATerm o_22;
  o_22 = t;
  {
    ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL;
    z_35 = t;
    s_35 :
    if(match_cons(z_35, sym__3))
      {
        a_36 = ATgetArgument(z_35, 0);
        b_36 = ATgetArgument(z_35, 1);
        c_36 = ATgetArgument(z_35, 2);
        {
          if(((t_35 != NULL) && (t_35 != a_36)))
            _fail(a_36);
          else
            t_35 = a_36;
          {
            if(((x_35 != NULL) && (x_35 != b_36)))
              _fail(b_36);
            else
              x_35 = b_36;
            {
              if(((y_35 != NULL) && (y_35 != c_36)))
                _fail(c_36);
              else
                y_35 = c_36;
              t = SSL_table_put(not_null(t_35), not_null(x_35), not_null(y_35));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = o_22;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm t_81 (ATerm))
{
  ATerm f_36 = NULL;
  ATerm p_22;
  p_22 = t;
  {
    t = term_r_22;
    t = table_put_0(t);
  }
  t = p_22;
  {
    ATerm f_5 (ATerm t)
    {
      ATerm s_22 = t;
      int y_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_81(t);
          LocalPopChoice(y_22);
        }
      else
        {
          t = s_22;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, f_5);
    {
      ATerm z_22 = t;
      int a_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_23;
          c_23 = t;
          {
            ATerm d_23 = t;
            int e_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_k_21;
                t = get_config_0(t);
                LocalPopChoice(e_23);
              }
            else
              {
                t = d_23;
                t = fetch_1(t, Help_0);
              }
          }
          t = c_23;
          {
            t = system_usage_0(t);
            {
              t = term_o_15;
              t = exit_0(t);
            }
          }
          LocalPopChoice(a_23);
        }
      else
        {
          t = z_22;
          {
            ATerm j_23 = t;
            int k_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_5 (ATerm t)
                {
                  ATerm h_5 (ATerm t)
                  {
                    ATerm g_36 = NULL;
                    g_36 = t;
                    if(((f_36 != NULL) && (f_36 != g_36)))
                      _fail(g_36);
                    else
                      f_36 = g_36;
                    return(t);
                  }
                  t = Undefined_1(t, h_5);
                  return(t);
                }
                t = fetch_1(t, g_5);
                {
                  ATerm m_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_36)), term_l_23);
                    return(t);
                  }
                  t = say_1(t, m_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_k_11;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(k_23);
              }
            else
              {
                t = j_23;
                {
                }
              }
          }
        }
      {
        ATerm m_23;
        m_23 = t;
        {
          t = term_d_20;
          t = table_destroy_0(t);
        }
        t = m_23;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm c_78 (ATerm), ATerm d_78 (ATerm))
{
  t = parse_options_1(t, a_78);
  {
    t = store_options_0(t);
    {
      t = c_78(t);
      {
        ATerm n_23 = t;
        int s_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, b_78);
            LocalPopChoice(s_23);
          }
        else
          {
            t = n_23;
            {
              ATerm t_23 = t;
              int w_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_78(t);
                  t = report_success_0(t);
                  LocalPopChoice(w_23);
                }
              else
                {
                  t = t_23;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm))
{
  ATerm n_5 (ATerm t)
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_78(t);
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, r_78);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, n_5, t_78, u_78, q_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm l_78 (ATerm), ATerm m_78 (ATerm), ATerm n_78 (ATerm))
{
  ATerm s_5 (ATerm t)
  {
    ATerm t_5 (ATerm t)
    {
      ATerm z_23;
      z_23 = t;
      {
        ATerm j_36 = NULL;
        ATerm k_36 = NULL;
        t = term_z_18;
        {
          t = get_config_0(t);
          {
            k_36 = t;
            if(((j_36 != NULL) && (j_36 != k_36)))
              _fail(k_36);
            else
              j_36 = k_36;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_11, (ATerm) ATinsert(ATempty, not_null(j_36)));
          t = printnl_0(t);
        }
      }
      t = z_23;
      return(t);
    }
    t = if_verbose2_1(t, t_5);
    return(t);
  }
  t = iowrap_4(t, l_78, m_78, n_78, s_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm j_78 (ATerm), ATerm k_78 (ATerm))
{
  t = iowrap_3(t, j_78, k_78, default_usage_0);
  return(t);
}
ATerm term_to_adot_0 (ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL;
    o_36 = t;
    n_36 :
    if(match_cons(o_36, sym__2))
      {
        p_36 = ATgetArgument(o_36, 0);
        q_36 = ATgetArgument(o_36, 1);
        {
          t = not_null(p_36);
          t = to_adot_0(t);
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = iowrap_2(t, u_5, term_to_adot_options_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = term_to_adot_0(t);
  return(t);
}
