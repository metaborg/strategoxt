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
ATerm term_u_22;
ATerm term_e_22;
ATerm term_o_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_a_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_f_19;
ATerm term_d_19;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_k_18;
ATerm term_l_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_j_14;
ATerm term_r_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_z_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_l_8;
ATerm term_h_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
void init_constant_terms (void)
{
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym__2, term_i_6, term_j_6);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym__2, term_t_6, term_j_6);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_AttrId_2, term_a_8, term_h_8);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym__2, term_q_14, term_j_6);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym__2, term_s_15, term_j_6);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym__2, term_p_16, term_j_6);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym__2, term_v_19, term_w_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym__2, term_h_21, term_j_6);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym__3, term_v_19, term_w_19, (ATerm) ATempty);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm if_verbose5_1 (ATerm, ATerm t_79 (ATerm));
ATerm term_to_tree_0 (ATerm);
ATerm to_adot_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_66 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm q_79 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm b_50 (ATerm), ATerm c_50 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm x_77 (ATerm));
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
ATerm if_verbose1_1 (ATerm, ATerm p_79 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm v_77 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm t_81 (ATerm));
ATerm map_1 (ATerm, ATerm y_65 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm s_81 (ATerm));
ATerm Program_1 (ATerm, ATerm z_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm t_76 (ATerm));
ATerm Undefined_1 (ATerm, ATerm a_58 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_66 (ATerm));
ATerm option_defined_1 (ATerm, ATerm s_80 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm m_58 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm x_81 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm k_51 (ATerm), ATerm l_51 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm v_81 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm u_81 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm b_78 (ATerm), ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm e_78 (ATerm));
ATerm iowrap_4 (ATerm, ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm v_78 (ATerm));
ATerm iowrap_3 (ATerm, ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm o_78 (ATerm));
ATerm iowrap_2 (ATerm, ATerm k_78 (ATerm), ATerm l_78 (ATerm));
ATerm term_to_adot_0 (ATerm);
ATerm main_0 (ATerm);
ATerm term_to_adot_options_0 (ATerm t)
{
  ATerm r_2 = t;
  int g_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        ATerm r_0 = NULL;
        r_0 = t;
        p_0 :
        if(!(match_string(r_0, "--graph")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm c_0 (ATerm t)
      {
        t = term_k_6;
        t = set_config_0(t);
        t = term_l_6;
        return(t);
      }
      ATerm e_0 (ATerm t)
      {
        t = term_m_6;
        return(t);
      }
      t = Option_3(t, b_0, c_0, e_0);
      ;
      LocalPopChoice(g_6);
    }
  else
    {
      t = r_2;
      {
        ATerm f_0 (ATerm t)
        {
          ATerm f_1 = NULL;
          f_1 = t;
          q_0 :
          if(!(match_string(f_1, "--tree")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm m_0 (ATerm t)
        {
          t = term_u_6;
          t = set_config_0(t);
          t = term_v_6;
          return(t);
        }
        ATerm n_0 (ATerm t)
        {
          t = term_w_6;
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
  ATerm t_1 = NULL,u_1 = NULL,y_1 = NULL;
  t_1 = t;
  h_1 :
  if(((ATgetType(t_1) == AT_LIST) && !(ATisEmpty(t_1))))
    {
      u_1 = ATgetFirst((ATermList) t_1);
      y_1 = (ATerm) ATgetNext((ATermList) t_1);
      s_1 :
      if(match_int(u_1, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(y_1)), term_c_7), term_x_6);
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
  ATerm e_2 = NULL,f_2 = NULL,g_2 = NULL;
  e_2 = t;
  c_2 :
  if(((ATgetType(e_2) == AT_LIST) && !(ATisEmpty(e_2))))
    {
      f_2 = ATgetFirst((ATermList) e_2);
      g_2 = (ATerm) ATgetNext((ATermList) e_2);
      d_2 :
      if(match_int(f_2, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(g_2)), term_x_6), term_x_6);
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
  ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL;
  m_2 = t;
  k_2 :
  if(((ATgetType(m_2) == AT_LIST) && !(ATisEmpty(m_2))))
    {
      n_2 = ATgetFirst((ATermList) m_2);
      o_2 = (ATerm) ATgetNext((ATermList) m_2);
      l_2 :
      if(match_int(n_2, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(o_2)), term_d_7), term_x_6);
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
  ATerm e_7 = t;
  int f_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      ;
      LocalPopChoice(f_7);
    }
  else
    {
      t = e_7;
      {
        ATerm k_7 = t;
        int l_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            ;
            LocalPopChoice(l_7);
          }
        else
          {
            t = k_7;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm n_7 = t;
  int o_7 = stack_ptr;
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
      ;
      LocalPopChoice(o_7);
    }
  else
    {
      t = n_7;
      {
        ATerm p_7 = t;
        int q_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            ;
            LocalPopChoice(q_7);
          }
        else
          {
            t = p_7;
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
  ATerm t_2 = NULL;
  t_2 = t;
  t = SSL_is_int(not_null(t_2));
  return(t);
}
ATerm quote_chars_0 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
  y_2 = t;
  x_2 :
  if(match_cons(y_2, sym__2))
    {
      z_2 = ATgetArgument(y_2, 0);
      a_3 = ATgetArgument(y_2, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_3)), not_null(z_2)), (ATerm) ATinsert(ATempty, not_null(z_2)));
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
  ATerm f_3 = NULL;
  ATerm g_3 = NULL;
  g_3 = t;
  if(((f_3 != NULL) && (f_3 != g_3)))
    _fail(g_3);
  else
    f_3 = g_3;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_7, not_null(f_3));
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
  ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL;
  t_3 = t;
  s_3 :
  if(match_cons(t_3, sym__2))
    {
      u_3 = ATgetArgument(t_3, 0);
      v_3 = ATgetArgument(t_3, 1);
      {
        ATerm v_7 = t;
        int w_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_3 = NULL,z_3 = NULL,f_4 = NULL,h_4 = NULL;
            ATerm x_7;
            x_7 = t;
            {
              ATerm a_4 = NULL;
              ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL;
              t = not_null(v_3);
              {
                a_4 = t;
                {
                  t = SSL_explode_term(not_null(a_4));
                  {
                    c_4 = t;
                    m_3 :
                    if(match_cons(c_4, sym__2))
                      {
                        d_4 = ATgetArgument(c_4, 0);
                        e_4 = ATgetArgument(c_4, 1);
                        {
                          if(((y_3 != NULL) && (y_3 != d_4)))
                            _fail(d_4);
                          else
                            y_3 = d_4;
                          if(((z_3 != NULL) && (z_3 != e_4)))
                            _fail(e_4);
                          else
                            z_3 = e_4;
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
            t = x_7;
            {
              ATerm z_7;
              z_7 = t;
              {
                ATerm g_4 = NULL;
                t = not_null(y_3);
                {
                  t = escape_0(t);
                  {
                    t = double_quote_0(t);
                    {
                      g_4 = t;
                      if(((f_4 != NULL) && (f_4 != g_4)))
                        _fail(g_4);
                      else
                        f_4 = g_4;
                    }
                  }
                }
              }
              t = z_7;
              {
                ATerm k_4 = NULL;
                t = not_null(z_3);
                {
                  ATerm s_0 (ATerm t)
                  {
                    ATerm i_4 = NULL;
                    i_4 = t;
                    t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(u_3)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(i_4)))));
                    return(t);
                  }
                  t = map_1(t, s_0);
                  {
                    k_4 = t;
                    if(((h_4 != NULL) && (h_4 != k_4)))
                      _fail(k_4);
                    else
                      h_4 = k_4;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(h_4)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(u_3)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_a_8, not_null(f_4)))))));
              }
            }
            ;
            LocalPopChoice(w_7);
          }
        else
          {
            t = v_7;
            {
              ATerm n_4 = NULL;
              ATerm o_4 = NULL,q_4 = NULL;
              t = not_null(v_3);
              {
                t = is_int_0(t);
                {
                  ATerm p_4 = NULL;
                  t = not_null(v_3);
                  {
                    t = int_to_string_0(t);
                    {
                      t = escape_0(t);
                      {
                        p_4 = t;
                        if(((o_4 != NULL) && (o_4 != p_4)))
                          _fail(p_4);
                        else
                          o_4 = p_4;
                      }
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_8), not_null(o_4)), term_b_8);
                    {
                      t = concat_strings_0(t);
                      {
                        q_4 = t;
                        if(((n_4 != NULL) && (n_4 != q_4)))
                          _fail(q_4);
                        else
                          n_4 = q_4;
                      }
                    }
                  }
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(u_3)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_a_8, not_null(n_4)))))));
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
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
  e_5 = t;
  d_5 :
  if(match_cons(e_5, sym__2))
    {
      f_5 = ATgetArgument(e_5, 0);
      g_5 = ATgetArgument(e_5, 1);
      {
        ATerm j_5 = NULL;
        ATerm e_8;
        e_8 = t;
        {
          t = not_null(g_5);
          t = is_list_0(t);
        }
        t = e_8;
        {
          ATerm m_5 = NULL;
          t = not_null(g_5);
          {
            ATerm t_0 (ATerm t)
            {
              ATerm k_5 = NULL;
              k_5 = t;
              t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_5)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_5)))));
              return(t);
            }
            t = map_1(t, t_0);
            {
              m_5 = t;
              if(((j_5 != NULL) && (j_5 != m_5)))
                _fail(m_5);
              else
                j_5 = m_5;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(j_5)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_5)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_l_8)))));
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
  ATerm s_5 = NULL;
  ATerm u_5 = NULL;
  s_5 = t;
  {
    ATerm v_5 = NULL;
    t = not_null(s_5);
    {
      ATerm u_0 (ATerm t)
      {
        ATerm m_8 = t;
        int n_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ListEdgeToDot_0(t);
            ;
            LocalPopChoice(n_8);
          }
        else
          {
            t = m_8;
            t = EdgeToDot_0(t);
          }
        return(t);
      }
      t = map_1(t, u_0);
      {
        t = concat_0(t);
        {
          v_5 = t;
          if(((u_5 != NULL) && (u_5 != v_5)))
            _fail(v_5);
          else
            u_5 = v_5;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_o_8, not_null(u_5));
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm z_5 = NULL;
  z_5 = t;
  t = SSL_int_to_string(not_null(z_5));
  return(t);
}
ATerm NodeId_0 (ATerm t)
{
  ATerm d_6 = NULL;
  ATerm e_6 = NULL;
  t = int_to_string_0(t);
  {
    e_6 = t;
    if(((d_6 != NULL) && (d_6 != e_6)))
      _fail(e_6);
    else
      d_6 = e_6;
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_8, not_null(d_6));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm address_0 (ATerm t)
{
  ATerm h_6 = NULL;
  h_6 = t;
  t = SSL_address(not_null(h_6));
  return(t);
}
ATerm term_to_graph_0 (ATerm t)
{
  ATerm n_6 = NULL,p_6 = NULL,r_6 = NULL;
  ATerm q_8;
  q_8 = t;
  {
    ATerm o_6 = NULL;
    t = address_0(t);
    {
      t = NodeId_0(t);
      {
        o_6 = t;
        if(((n_6 != NULL) && (n_6 != o_6)))
          _fail(o_6);
        else
          n_6 = o_6;
      }
    }
  }
  t = q_8;
  {
    ATerm v_8;
    v_8 = t;
    {
      ATerm q_6 = NULL;
      ATerm w_8 = t;
      int b_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_0 (ATerm t)
          {
            t = address_0(t);
            t = NodeId_0(t);
            return(t);
          }
          t = map_1(t, v_0);
          ;
          LocalPopChoice(b_9);
        }
      else
        {
          t = w_8;
          {
            ATerm w_0 (ATerm t)
            {
              t = address_0(t);
              t = NodeId_0(t);
              return(t);
            }
            t = _all(t, w_0);
          }
        }
      {
        q_6 = t;
        if(((p_6 != NULL) && (p_6 != q_6)))
          _fail(q_6);
        else
          p_6 = q_6;
      }
    }
    t = v_8;
    {
      ATerm s_6 = NULL;
      ATerm c_9 = t;
      int d_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_0 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = foldr_3(t, x_0, union_0, term_to_graph_0);
          ;
          LocalPopChoice(d_9);
        }
      else
        {
          t = c_9;
          {
            ATerm y_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, y_0, union_0, term_to_graph_0);
          }
        }
      {
        s_6 = t;
        if(((r_6 != NULL) && (r_6 != s_6)))
          _fail(s_6);
        else
          r_6 = s_6;
      }
      t = (ATerm) ATinsert(CheckATermList(not_null(r_6)), (ATerm) ATmakeAppl(sym__2, not_null(n_6), not_null(p_6)));
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL;
  z_6 = t;
  y_6 :
  if(match_cons(z_6, sym__2))
    {
      a_7 = ATgetArgument(z_6, 0);
      b_7 = ATgetArgument(z_6, 1);
      if(((a_7 != NULL) && (a_7 != b_7)))
        _fail(b_7);
      else
        a_7 = b_7;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm v_71 (ATerm), ATerm w_71 (ATerm))
{
  ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL;
  h_7 = t;
  g_7 :
  if(((ATgetType(h_7) == AT_LIST) && !(ATisEmpty(h_7))))
    {
      i_7 = ATgetFirst((ATermList) h_7);
      j_7 = (ATerm) ATgetNext((ATermList) h_7);
      {
        t = w_71(t);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm m_7 = NULL;
            m_7 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_7), not_null(m_7));
              t = v_71(t);
            }
            return(t);
          }
          t = fetch_1(t, z_0);
        }
        t = not_null(j_7);
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
  ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
  s_7 = t;
  r_7 :
  if(match_cons(s_7, sym__2))
    {
      t_7 = ATgetArgument(s_7, 0);
      u_7 = ATgetArgument(s_7, 1);
      {
        t = not_null(t_7);
        {
          ATerm y_7 (ATerm t)
          {
            ATerm e_9 = t;
            int f_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(u_7);
                ;
                LocalPopChoice(f_9);
              }
            else
              {
                t = e_9;
                {
                  ATerm g_9 = t;
                  int m_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_1 (ATerm t)
                      {
                        t = not_null(u_7);
                        return(t);
                      }
                      t = HdMember_p__2(t, r_71, a_1);
                      t = y_7(t);
                      ;
                      LocalPopChoice(m_9);
                    }
                  else
                    {
                      t = g_9;
                      t = Cons_2(t, _id, y_7);
                    }
                }
              }
            return(t);
          }
          t = y_7(t);
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
  ATerm d_8 = NULL;
  ATerm f_8 = NULL;
  d_8 = t;
  {
    ATerm g_8 = NULL;
    ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
    t = not_null(d_8);
    {
      g_8 = t;
      {
        t = SSL_explode_term(not_null(g_8));
        {
          i_8 = t;
          c_8 :
          if(match_cons(i_8, sym__2))
            {
              j_8 = ATgetArgument(i_8, 0);
              k_8 = ATgetArgument(i_8, 1);
              if(((f_8 != NULL) && (f_8 != k_8)))
                _fail(k_8);
              else
                f_8 = k_8;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(f_8);
      t = foldr_3(t, i_71, j_71, k_71);
    }
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm k_72 (ATerm), ATerm l_72 (ATerm), ATerm m_72 (ATerm))
{
  ATerm r_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_72(t);
      ;
      LocalPopChoice(z_9);
    }
  else
    {
      t = r_9;
      {
        ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL;
        s_8 = t;
        r_8 :
        if(((ATgetType(s_8) == AT_LIST) && !(ATisEmpty(s_8))))
          {
            t_8 = ATgetFirst((ATermList) s_8);
            u_8 = (ATerm) ATgetNext((ATermList) s_8);
            {
              ATerm x_8 = NULL,z_8 = NULL;
              ATerm a_10;
              a_10 = t;
              {
                ATerm y_8 = NULL;
                t = not_null(t_8);
                {
                  t = m_72(t);
                  {
                    y_8 = t;
                    if(((x_8 != NULL) && (x_8 != y_8)))
                      _fail(y_8);
                    else
                      x_8 = y_8;
                  }
                }
              }
              t = a_10;
              {
                ATerm a_9 = NULL;
                t = not_null(u_8);
                {
                  t = foldr_3(t, k_72, l_72, m_72);
                  {
                    a_9 = t;
                    if(((z_8 != NULL) && (z_8 != a_9)))
                      _fail(a_9);
                    else
                      z_8 = a_9;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_8), not_null(z_8));
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
  ATerm l_9 = NULL;
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
  l_9 = t;
  {
    ATerm q_9 = NULL;
    ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL;
    t = not_null(l_9);
    {
      q_9 = t;
      {
        t = SSL_explode_term(not_null(q_9));
        {
          s_9 = t;
          h_9 :
          if(match_cons(s_9, sym__2))
            {
              t_9 = ATgetArgument(s_9, 0);
              u_9 = ATgetArgument(s_9, 1);
              i_9 :
              if(match_string(t_9, ""))
                {
                  j_9 :
                  if(((ATgetType(u_9) == AT_LIST) && !(ATisEmpty(u_9))))
                    {
                      v_9 = ATgetFirst((ATermList) u_9);
                      w_9 = (ATerm) ATgetNext((ATermList) u_9);
                      k_9 :
                      if(((ATgetType(w_9) == AT_LIST) && !(ATisEmpty(w_9))))
                        {
                          x_9 = ATgetFirst((ATermList) w_9);
                          y_9 = (ATerm) ATgetNext((ATermList) w_9);
                          {
                            if(((n_9 != NULL) && (n_9 != v_9)))
                              _fail(v_9);
                            else
                              n_9 = v_9;
                            {
                              if(((p_9 != NULL) && (p_9 != x_9)))
                                _fail(x_9);
                              else
                                p_9 = x_9;
                              if(((o_9 != NULL) && (o_9 != y_9)))
                                _fail(y_9);
                              else
                                o_9 = y_9;
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
    t = not_null(p_9);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm i_10 = NULL;
  ATerm k_10 = NULL,l_10 = NULL;
  i_10 = t;
  {
    ATerm m_10 = NULL;
    ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL;
    t = not_null(i_10);
    {
      m_10 = t;
      {
        t = SSL_explode_term(not_null(m_10));
        {
          o_10 = t;
          f_10 :
          if(match_cons(o_10, sym__2))
            {
              p_10 = ATgetArgument(o_10, 0);
              q_10 = ATgetArgument(o_10, 1);
              g_10 :
              if(match_string(p_10, ""))
                {
                  h_10 :
                  if(((ATgetType(q_10) == AT_LIST) && !(ATisEmpty(q_10))))
                    {
                      r_10 = ATgetFirst((ATermList) q_10);
                      s_10 = (ATerm) ATgetNext((ATermList) q_10);
                      {
                        if(((l_10 != NULL) && (l_10 != r_10)))
                          _fail(r_10);
                        else
                          l_10 = r_10;
                        if(((k_10 != NULL) && (k_10 != s_10)))
                          _fail(s_10);
                        else
                          k_10 = s_10;
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
    t = not_null(l_10);
  }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm t_79 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm b_10;
    b_10 = t;
    {
      ATerm x_10 = NULL;
      ATerm y_10 = NULL;
      t = term_c_10;
      {
        t = get_config_0(t);
        {
          y_10 = t;
          if(((x_10 != NULL) && (x_10 != y_10)))
            _fail(y_10);
          else
            x_10 = y_10;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_10), term_d_10);
        t = geq_0(t);
      }
    }
    t = b_10;
    t = t_79(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm term_to_tree_0 (ATerm t)
{
  ATerm i_11 = NULL,k_11 = NULL;
  ATerm c_1 (ATerm t)
  {
    ATerm d_1 (ATerm t)
    {
      t = term_e_10;
      return(t);
    }
    t = debug_1(t, d_1);
    return(t);
  }
  t = if_verbose5_1(t, c_1);
  {
    ATerm j_10;
    j_10 = t;
    {
      ATerm j_11 = NULL;
      t = new_0(t);
      {
        j_11 = t;
        if(((i_11 != NULL) && (i_11 != j_11)))
          _fail(j_11);
        else
          i_11 = j_11;
      }
    }
    t = j_10;
    {
      ATerm l_11 = NULL;
      l_11 = t;
      if(((k_11 != NULL) && (k_11 != l_11)))
        _fail(l_11);
      else
        k_11 = l_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_11), not_null(k_11));
        {
          ATerm a_12 (ATerm t)
          {
            ATerm u_11 = NULL,w_11 = NULL;
            ATerm e_1 (ATerm t)
            {
              ATerm n_10 = t;
              int t_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_1 (ATerm t)
                  {
                    ATerm m_11 = NULL,o_11 = NULL;
                    ATerm u_10;
                    u_10 = t;
                    {
                      ATerm n_11 = NULL;
                      t = new_0(t);
                      {
                        n_11 = t;
                        if(((m_11 != NULL) && (m_11 != n_11)))
                          _fail(n_11);
                        else
                          m_11 = n_11;
                      }
                    }
                    t = u_10;
                    {
                      ATerm p_11 = NULL;
                      p_11 = t;
                      if(((o_11 != NULL) && (o_11 != p_11)))
                        _fail(p_11);
                      else
                        o_11 = p_11;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_11), not_null(o_11));
                    }
                    return(t);
                  }
                  t = map_1(t, g_1);
                  ;
                  LocalPopChoice(t_10);
                }
              else
                {
                  t = n_10;
                  {
                    ATerm i_1 (ATerm t)
                    {
                      ATerm q_11 = NULL,s_11 = NULL;
                      ATerm v_10;
                      v_10 = t;
                      {
                        ATerm r_11 = NULL;
                        t = new_0(t);
                        {
                          r_11 = t;
                          if(((q_11 != NULL) && (q_11 != r_11)))
                            _fail(r_11);
                          else
                            q_11 = r_11;
                        }
                      }
                      t = v_10;
                      {
                        ATerm t_11 = NULL;
                        t_11 = t;
                        if(((s_11 != NULL) && (s_11 != t_11)))
                          _fail(t_11);
                        else
                          s_11 = t_11;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), not_null(s_11));
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
              ATerm w_10;
              w_10 = t;
              {
                ATerm v_11 = NULL;
                ATerm j_1 (ATerm t)
                {
                  ATerm z_10 = t;
                  int a_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = map_1(t, Fst_0);
                      ;
                      LocalPopChoice(a_11);
                    }
                  else
                    {
                      t = z_10;
                      t = _all(t, Fst_0);
                    }
                  return(t);
                }
                t = _2(t, _id, j_1);
                {
                  v_11 = t;
                  if(((u_11 != NULL) && (u_11 != v_11)))
                    _fail(v_11);
                  else
                    u_11 = v_11;
                }
              }
              t = w_10;
              {
                ATerm x_11 = NULL;
                t = Snd_0(t);
                {
                  ATerm b_11 = t;
                  int c_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_1 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = foldr_3(t, k_1, union_0, a_12);
                      ;
                      LocalPopChoice(c_11);
                    }
                  else
                    {
                      t = b_11;
                      {
                        ATerm l_1 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        t = crush_3(t, l_1, union_0, a_12);
                      }
                    }
                  {
                    x_11 = t;
                    if(((w_11 != NULL) && (w_11 != x_11)))
                      _fail(x_11);
                    else
                      w_11 = x_11;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(w_11)), not_null(u_11));
              }
            }
            return(t);
          }
          t = a_12(t);
        }
      }
    }
  }
  return(t);
}
ATerm to_adot_0 (ATerm t)
{
  ATerm d_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_11;
      f_11 = t;
      {
        t = term_t_6;
        t = get_config_0(t);
      }
      t = f_11;
      t = term_to_tree_0(t);
      ;
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
      {
        ATerm g_11;
        g_11 = t;
        {
          t = term_i_6;
          t = get_config_0(t);
        }
        t = g_11;
        t = term_to_graph_0(t);
      }
    }
  t = graph_to_adot_0(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm j_12 = NULL;
  ATerm h_11;
  h_11 = t;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm k_12 = NULL,l_12 = NULL;
      k_12 = t;
      i_12 :
      if(match_cons(k_12, sym_Program_1))
        {
          l_12 = ATgetArgument(k_12, 0);
          if(((j_12 != NULL) && (j_12 != l_12)))
            _fail(l_12);
          else
            j_12 = l_12;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, m_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_12), not_null(j_12)), term_z_11));
      {
        t = printnl_0(t);
        {
          t = term_c_12;
          t = exit_0(t);
        }
      }
    }
  }
  t = h_11;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL;
  p_12 = t;
  o_12 :
  if(match_cons(p_12, sym__2))
    {
      q_12 = ATgetArgument(p_12, 0);
      r_12 = ATgetArgument(p_12, 1);
      {
        ATerm d_12;
        d_12 = t;
        t = SSL_printnl(not_null(q_12), not_null(r_12));
        t = d_12;
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
  ATerm w_12 = NULL;
  w_12 = t;
  t = SSL_implode_string(not_null(w_12));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(f_12);
    }
  else
    {
      t = e_12;
      {
        ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
        b_13 = t;
        a_13 :
        if(((ATgetType(b_13) == AT_LIST) && !(ATisEmpty(b_13))))
          {
            c_13 = ATgetFirst((ATermList) b_13);
            d_13 = (ATerm) ATgetNext((ATermList) b_13);
            {
              t = not_null(c_13);
              {
                ATerm n_1 (ATerm t)
                {
                  t = not_null(d_13);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, n_1);
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
  ATerm n_13 = NULL;
  ATerm p_13 = NULL;
  n_13 = t;
  {
    ATerm q_13 = NULL;
    ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
    t = not_null(n_13);
    {
      q_13 = t;
      {
        t = SSL_explode_term(not_null(q_13));
        {
          s_13 = t;
          l_13 :
          if(match_cons(s_13, sym__2))
            {
              t_13 = ATgetArgument(s_13, 0);
              u_13 = ATgetArgument(s_13, 1);
              m_13 :
              if(match_string(t_13, ""))
                {
                  if(((p_13 != NULL) && (p_13 != u_13)))
                    _fail(u_13);
                  else
                    p_13 = u_13;
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
      t = not_null(p_13);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_66 (ATerm))
{
  ATerm y_13 (ATerm t)
  {
    ATerm g_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, y_13);
        ;
        LocalPopChoice(h_12);
      }
    else
      {
        t = g_12;
        {
          t = Nil_0(t);
          t = n_66(t);
        }
      }
    return(t);
  }
  t = y_13(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL;
  b_14 = t;
  a_14 :
  if(match_cons(b_14, sym__2))
    {
      c_14 = ATgetArgument(b_14, 0);
      d_14 = ATgetArgument(b_14, 1);
      {
        t = not_null(c_14);
        {
          ATerm o_1 (ATerm t)
          {
            t = not_null(d_14);
            return(t);
          }
          t = at_end_1(t, o_1);
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
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm i_14 = NULL;
  i_14 = t;
  t = SSL_explode_string(not_null(i_14));
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
ATerm is_string_0 (ATerm t)
{
  ATerm m_14 = NULL;
  m_14 = t;
  t = SSL_is_string(not_null(m_14));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      {
        ATerm u_12 = t;
        int v_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, p_1);
            ;
            LocalPopChoice(v_12);
          }
        else
          {
            t = u_12;
            {
              ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
              v_14 = t;
              u_14 :
              if(match_cons(v_14, sym_Path_1))
                {
                  w_14 = ATgetArgument(v_14, 0);
                  t = not_null(w_14);
                }
              else
                {
                  if(match_cons(v_14, sym_Var_1))
                    {
                      w_14 = ATgetArgument(v_14, 0);
                      {
                        t = not_null(w_14);
                        {
                          ATerm x_12 = t;
                          int y_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(y_12);
                            }
                          else
                            {
                              t = x_12;
                              {
                                ATerm q_1 (ATerm t)
                                {
                                  t = term_z_12;
                                  return(t);
                                }
                                t = debug_1(t, q_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(v_14, sym_Prefix_2))
                        {
                          w_14 = ATgetArgument(v_14, 0);
                          x_14 = ATgetArgument(v_14, 1);
                          {
                            ATerm c_15 = NULL,e_15 = NULL;
                            ATerm e_13;
                            e_13 = t;
                            {
                              ATerm d_15 = NULL;
                              t = not_null(w_14);
                              {
                                t = eval_config_0(t);
                                {
                                  d_15 = t;
                                  if(((c_15 != NULL) && (c_15 != d_15)))
                                    _fail(d_15);
                                  else
                                    c_15 = d_15;
                                }
                              }
                            }
                            t = e_13;
                            {
                              ATerm f_15 = NULL;
                              t = not_null(x_14);
                              {
                                t = eval_config_0(t);
                                {
                                  f_15 = t;
                                  if(((e_15 != NULL) && (e_15 != f_15)))
                                    _fail(f_15);
                                  else
                                    e_15 = f_15;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_15), not_null(e_15));
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
  ATerm n_15 = NULL;
  n_15 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_13, not_null(n_15));
    {
      t = table_get_0(t);
      {
        ATerm r_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm g_13;
            g_13 = t;
            {
              ATerm p_15 = NULL;
              ATerm q_15 = NULL;
              q_15 = t;
              if(((p_15 != NULL) && (p_15 != q_15)))
                _fail(q_15);
              else
                p_15 = q_15;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_f_13, not_null(n_15), not_null(p_15));
                t = table_put_0(t);
              }
            }
            t = g_13;
          }
          return(t);
        }
        t = try_1(t, r_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm q_79 (ATerm))
{
  ATerm v_1 (ATerm t)
  {
    ATerm h_13;
    h_13 = t;
    {
      ATerm u_15 = NULL;
      ATerm v_15 = NULL;
      t = term_c_10;
      {
        t = get_config_0(t);
        {
          v_15 = t;
          if(((u_15 != NULL) && (u_15 != v_15)))
            _fail(v_15);
          else
            u_15 = v_15;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_15), term_i_13);
        t = geq_0(t);
      }
    }
    t = h_13;
    t = q_79(t);
    return(t);
  }
  t = try_1(t, v_1);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
  z_15 = t;
  y_15 :
  if(match_cons(z_15, sym__2))
    {
      a_16 = ATgetArgument(z_15, 0);
      b_16 = ATgetArgument(z_15, 1);
      t = SSL_WriteToTextFile(not_null(a_16), not_null(b_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm b_50 (ATerm), ATerm c_50 (ATerm))
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL;
  l_16 = t;
  k_16 :
  if(match_cons(l_16, sym__2))
    {
      m_16 = ATgetArgument(l_16, 0);
      n_16 = ATgetArgument(l_16, 1);
      {
        ATerm r_16 = NULL,t_16 = NULL;
        ATerm s_16 = NULL;
        t = SSLgetAnnotations(not_null(l_16));
        {
          s_16 = t;
          if(((r_16 != NULL) && (r_16 != s_16)))
            _fail(s_16);
          else
            r_16 = s_16;
        }
        {
          t = not_null(m_16);
          {
            ATerm v_16 = NULL;
            t = b_50(t);
            {
              t_16 = t;
              {
                t = not_null(n_16);
                {
                  ATerm x_16 = NULL;
                  t = c_50(t);
                  {
                    v_16 = t;
                    {
                      ATerm y_16 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_16), not_null(v_16)), not_null(r_16));
                      {
                        y_16 = t;
                        if(((x_16 != NULL) && (x_16 != y_16)))
                          _fail(y_16);
                        else
                          x_16 = y_16;
                      }
                      t = not_null(x_16);
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
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
  g_17 = t;
  f_17 :
  if(match_cons(g_17, sym__2))
    {
      h_17 = ATgetArgument(g_17, 0);
      i_17 = ATgetArgument(g_17, 1);
      t = SSL_WriteToBinaryFile(not_null(h_17), not_null(i_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm q_17 = NULL;
  ATerm j_13;
  j_13 = t;
  {
    ATerm w_1 (ATerm t)
    {
      ATerm k_13 = t;
      int o_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_1 (ATerm t)
          {
            ATerm r_17 = NULL,s_17 = NULL;
            r_17 = t;
            n_17 :
            if(match_cons(r_17, sym_Output_1))
              {
                s_17 = ATgetArgument(r_17, 0);
                if(((q_17 != NULL) && (q_17 != s_17)))
                  _fail(s_17);
                else
                  q_17 = s_17;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, x_1);
          ;
          LocalPopChoice(o_13);
        }
      else
        {
          t = k_13;
          {
            ATerm t_17 = NULL;
            t = term_r_13;
            {
              t_17 = t;
              if(((q_17 != NULL) && (q_17 != t_17)))
                _fail(t_17);
              else
                q_17 = t_17;
            }
          }
        }
      return(t);
    }
    t = _2(t, w_1, _id);
  }
  t = j_13;
  {
    ATerm z_1 (ATerm t)
    {
      ATerm a_2 (ATerm t)
      {
        t = not_null(q_17);
        return(t);
      }
      t = split_2(t, a_2, _id);
      return(t);
    }
    t = _2(t, _id, z_1);
    {
      ATerm v_13 = t;
      int w_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_2 (ATerm t)
          {
            ATerm h_2 (ATerm t)
            {
              ATerm u_17 = NULL;
              u_17 = t;
              p_17 :
              if(!(match_cons(u_17, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, h_2);
            return(t);
          }
          t = _2(t, b_2, WriteToBinaryFile_0);
          ;
          LocalPopChoice(w_13);
        }
      else
        {
          t = v_13;
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
ATerm apply_strategy_1 (ATerm t, ATerm x_77 (ATerm))
{
  ATerm a_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL;
  ATerm x_13;
  x_13 = t;
  t = dtime_0(t);
  t = x_13;
  {
    t = x_77(t);
    {
      ATerm z_13;
      z_13 = t;
      {
        ATerm b_18 = NULL;
        t = dtime_0(t);
        {
          b_18 = t;
          if(((a_18 != NULL) && (a_18 != b_18)))
            _fail(b_18);
          else
            a_18 = b_18;
        }
      }
      t = z_13;
      {
        c_18 = t;
        z_17 :
        if(match_cons(c_18, sym__2))
          {
            d_18 = ATgetArgument(c_18, 0);
            e_18 = ATgetArgument(c_18, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_18)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(a_18))), not_null(e_18));
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
  ATerm e_14;
  e_14 = t;
  {
    ATerm l_18 = NULL,n_18 = NULL;
    ATerm f_14;
    f_14 = t;
    {
      ATerm m_18 = NULL;
      t = s_76(t);
      {
        m_18 = t;
        if(((l_18 != NULL) && (l_18 != m_18)))
          _fail(m_18);
        else
          l_18 = m_18;
      }
    }
    t = f_14;
    {
      ATerm o_18 = NULL;
      o_18 = t;
      if(((n_18 != NULL) && (n_18 != o_18)))
        _fail(o_18);
      else
        n_18 = o_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_18)), not_null(l_18)));
        t = printnl_0(t);
      }
    }
  }
  t = e_14;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm s_18 = NULL;
  ATerm g_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_18 = NULL;
      t_18 = t;
      {
        if(((s_18 != NULL) && (s_18 != t_18)))
          _fail(t_18);
        else
          s_18 = t_18;
        t = SSL_ReadFromFile(not_null(s_18));
      }
      ;
      LocalPopChoice(h_14);
    }
  else
    {
      t = g_14;
      {
        ATerm i_2 (ATerm t)
        {
          t = term_j_14;
          return(t);
        }
        t = debug_1(t, i_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_73 (ATerm), ATerm y_73 (ATerm))
{
  ATerm x_18 = NULL,z_18 = NULL;
  ATerm k_14;
  k_14 = t;
  {
    ATerm y_18 = NULL;
    t = x_73(t);
    {
      y_18 = t;
      if(((x_18 != NULL) && (x_18 != y_18)))
        _fail(y_18);
      else
        x_18 = y_18;
    }
  }
  t = k_14;
  {
    ATerm a_19 = NULL;
    t = y_73(t);
    {
      a_19 = t;
      if(((z_18 != NULL) && (z_18 != a_19)))
        _fail(a_19);
      else
        z_18 = a_19;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_18), not_null(z_18));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm g_19 = NULL;
  ATerm l_14;
  l_14 = t;
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_2 (ATerm t)
        {
          ATerm h_19 = NULL,i_19 = NULL;
          h_19 = t;
          e_19 :
          if(match_cons(h_19, sym_Input_1))
            {
              i_19 = ATgetArgument(h_19, 0);
              if(((g_19 != NULL) && (g_19 != i_19)))
                _fail(i_19);
              else
                g_19 = i_19;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, j_2);
        ;
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        {
          ATerm j_19 = NULL;
          t = term_p_14;
          {
            j_19 = t;
            if(((g_19 != NULL) && (g_19 != j_19)))
              _fail(j_19);
            else
              g_19 = j_19;
          }
        }
      }
  }
  t = l_14;
  {
    ATerm p_2 (ATerm t)
    {
      t = not_null(g_19);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, p_2);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm z_19 = NULL;
    z_19 = t;
    m_19 :
    if(!(match_string(z_19, "-v")))
      {
        if(!(match_string(z_19, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    t = term_r_14;
    t = set_config_0(t);
    t = term_s_14;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_t_14;
    return(t);
  }
  t = Option_3(t, q_2, s_2, u_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm d_20 = NULL;
    d_20 = t;
    b_20 :
    if(!(match_string(d_20, "-k")))
      {
        if(!(match_string(d_20, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    ATerm y_14;
    y_14 = t;
    {
      ATerm e_20 = NULL;
      ATerm f_20 = NULL;
      t = string_to_int_0(t);
      {
        f_20 = t;
        if(((e_20 != NULL) && (e_20 != f_20)))
          _fail(f_20);
        else
          e_20 = f_20;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_14, not_null(e_20));
        t = set_config_0(t);
      }
    }
    t = y_14;
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_a_15;
    return(t);
  }
  t = ArgOption_3(t, v_2, w_2, b_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_20 = NULL;
  i_20 = t;
  t = SSL_string_to_int(not_null(i_20));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm b_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_3 (ATerm t)
      {
        ATerm q_20 = NULL;
        q_20 = t;
        l_20 :
        if(!(match_string(q_20, "-S")))
          {
            if(!(match_string(q_20, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = term_i_15;
        t = set_config_0(t);
        t = term_j_15;
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        t = term_k_15;
        return(t);
      }
      t = Option_3(t, c_3, d_3, e_3);
      ;
      LocalPopChoice(g_15);
    }
  else
    {
      t = b_15;
      {
        ATerm l_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_3 (ATerm t)
            {
              ATerm r_20 = NULL;
              r_20 = t;
              m_20 :
              if(!(match_string(r_20, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_3 (ATerm t)
            {
              ATerm u_20 = NULL;
              ATerm o_15;
              o_15 = t;
              {
                ATerm s_20 = NULL;
                ATerm t_20 = NULL;
                t = string_to_int_0(t);
                {
                  t_20 = t;
                  if(((s_20 != NULL) && (s_20 != t_20)))
                    _fail(t_20);
                  else
                    s_20 = t_20;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_10, not_null(s_20));
                  t = set_config_0(t);
                }
              }
              t = o_15;
              {
                ATerm v_20 = NULL;
                v_20 = t;
                if(((u_20 != NULL) && (u_20 != v_20)))
                  _fail(v_20);
                else
                  u_20 = v_20;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(u_20));
              }
              return(t);
            }
            ATerm j_3 (ATerm t)
            {
              t = term_r_15;
              return(t);
            }
            t = ArgOption_3(t, h_3, i_3, j_3);
            ;
            LocalPopChoice(m_15);
          }
        else
          {
            t = l_15;
            {
              ATerm k_3 (ATerm t)
              {
                ATerm w_20 = NULL;
                w_20 = t;
                p_20 :
                if(!(match_string(w_20, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm l_3 (ATerm t)
              {
                t = term_t_15;
                t = set_config_0(t);
                t = term_w_15;
                return(t);
              }
              ATerm n_3 (ATerm t)
              {
                t = term_x_15;
                return(t);
              }
              t = Option_3(t, k_3, l_3, n_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm c_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(d_16);
    }
  else
    {
      t = c_16;
      {
        ATerm e_16 = t;
        int f_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(f_16);
          }
        else
          {
            t = e_16;
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
    ATerm c_21 = NULL;
    c_21 = t;
    z_20 :
    if(!(match_string(c_21, "-o")))
      {
        if(!(match_string(c_21, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    ATerm f_21 = NULL;
    ATerm g_16;
    g_16 = t;
    {
      ATerm d_21 = NULL;
      ATerm e_21 = NULL;
      e_21 = t;
      if(((d_21 != NULL) && (d_21 != e_21)))
        _fail(e_21);
      else
        d_21 = e_21;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_16, not_null(d_21));
        t = set_config_0(t);
      }
    }
    t = g_16;
    {
      ATerm g_21 = NULL;
      g_21 = t;
      if(((f_21 != NULL) && (f_21 != g_21)))
        _fail(g_21);
      else
        f_21 = g_21;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(f_21));
    }
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = term_i_16;
    return(t);
  }
  t = ArgOption_3(t, o_3, p_3, q_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm j_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(o_16);
    }
  else
    {
      t = j_16;
      {
        ATerm r_3 (ATerm t)
        {
          ATerm p_21 = NULL;
          p_21 = t;
          j_21 :
          if(!(match_string(p_21, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm w_3 (ATerm t)
        {
          t = term_q_16;
          t = set_config_0(t);
          t = term_u_16;
          return(t);
        }
        ATerm x_3 (ATerm t)
        {
          t = term_w_16;
          return(t);
        }
        t = Option_3(t, r_3, w_3, x_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
  v_21 = t;
  t_21 :
  if(match_string(v_21, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(v_21) == AT_LIST) && !(ATisEmpty(v_21))))
        {
          w_21 = ATgetFirst((ATermList) v_21);
          x_21 = (ATerm) ATgetNext((ATermList) v_21);
          u_21 :
          if(((ATgetType(x_21) == AT_LIST) && !(ATisEmpty(x_21))))
            {
              y_21 = ATgetFirst((ATermList) x_21);
              z_21 = (ATerm) ATgetNext((ATermList) x_21);
              {
                ATerm g_22 = NULL;
                ATerm z_16;
                z_16 = t;
                {
                  t = not_null(w_21);
                  t = j_0(t);
                }
                t = z_16;
                {
                  ATerm h_22 = NULL;
                  t = not_null(y_21);
                  {
                    t = k_0(t);
                    {
                      h_22 = t;
                      if(((g_22 != NULL) && (g_22 != h_22)))
                        _fail(h_22);
                      else
                        g_22 = h_22;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(z_21)), not_null(g_22));
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
  ATerm b_4 (ATerm t)
  {
    ATerm o_22 = NULL;
    o_22 = t;
    l_22 :
    if(!(match_string(o_22, "-i")))
      {
        if(!(match_string(o_22, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    ATerm r_22 = NULL;
    ATerm a_17;
    a_17 = t;
    {
      ATerm p_22 = NULL;
      ATerm q_22 = NULL;
      q_22 = t;
      if(((p_22 != NULL) && (p_22 != q_22)))
        _fail(q_22);
      else
        p_22 = q_22;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_17, not_null(p_22));
        t = set_config_0(t);
      }
    }
    t = a_17;
    {
      ATerm s_22 = NULL;
      s_22 = t;
      if(((r_22 != NULL) && (r_22 != s_22)))
        _fail(s_22);
      else
        r_22 = s_22;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_22));
    }
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    t = term_c_17;
    return(t);
  }
  t = ArgOption_3(t, b_4, j_4, l_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm d_17 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(e_17);
    }
  else
    {
      t = d_17;
      {
        ATerm j_17 = t;
        int k_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(k_17);
          }
        else
          {
            t = j_17;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_y_11, (ATerm) ATinsert(ATempty, term_l_17));
  {
    t = printnl_0(t);
    {
      t = term_c_12;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm w_22 = NULL;
  w_22 = t;
  t = SSL_TicksToSeconds(not_null(w_22));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
  b_23 = t;
  a_23 :
  if(match_cons(b_23, sym__2))
    {
      c_23 = ATgetArgument(b_23, 0);
      d_23 = ATgetArgument(b_23, 1);
      {
        ATerm m_17 = t;
        int o_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(c_23), not_null(d_23));
            ;
            LocalPopChoice(o_17);
          }
        else
          {
            t = m_17;
            t = SSL_addr(not_null(c_23), not_null(d_23));
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
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_72(t);
      ;
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      {
        ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
        k_23 = t;
        j_23 :
        if(((ATgetType(k_23) == AT_LIST) && !(ATisEmpty(k_23))))
          {
            l_23 = ATgetFirst((ATermList) k_23);
            m_23 = (ATerm) ATgetNext((ATermList) k_23);
            {
              ATerm p_23 = NULL;
              ATerm q_23 = NULL;
              t = not_null(m_23);
              {
                t = foldr_2(t, i_72, j_72);
                {
                  q_23 = t;
                  if(((p_23 != NULL) && (p_23 != q_23)))
                    _fail(q_23);
                  else
                    p_23 = q_23;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_23), not_null(p_23));
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
  ATerm x_23 = NULL;
  ATerm z_23 = NULL;
  x_23 = t;
  {
    ATerm a_24 = NULL;
    ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL;
    t = not_null(x_23);
    {
      a_24 = t;
      {
        t = SSL_explode_term(not_null(a_24));
        {
          c_24 = t;
          w_23 :
          if(match_cons(c_24, sym__2))
            {
              d_24 = ATgetArgument(c_24, 0);
              e_24 = ATgetArgument(c_24, 1);
              if(((z_23 != NULL) && (z_23 != e_24)))
                _fail(e_24);
              else
                z_23 = e_24;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_23);
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
    ATerm m_4 (ATerm t)
    {
      t = term_h_15;
      return(t);
    }
    t = crush_2(t, m_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
  k_24 = t;
  j_24 :
  if(match_cons(k_24, sym__2))
    {
      l_24 = ATgetArgument(k_24, 0);
      m_24 = ATgetArgument(k_24, 1);
      {
        ATerm x_17;
        x_17 = t;
        {
          ATerm y_17 = t;
          int f_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(l_24), not_null(m_24));
              ;
              LocalPopChoice(f_18);
            }
          else
            {
              t = y_17;
              t = SSL_gtr(not_null(l_24), not_null(m_24));
            }
        }
        t = x_17;
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
  ATerm s_24 = NULL;
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL;
      t_24 = t;
      r_24 :
      if(match_cons(t_24, sym__2))
        {
          u_24 = ATgetArgument(t_24, 0);
          v_24 = ATgetArgument(t_24, 1);
          {
            if(((s_24 != NULL) && (s_24 != u_24)))
              _fail(u_24);
            else
              s_24 = u_24;
            if(((s_24 != NULL) && (s_24 != v_24)))
              _fail(v_24);
            else
              s_24 = v_24;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(h_18);
    }
  else
    {
      t = g_18;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm p_79 (ATerm))
{
  ATerm r_4 (ATerm t)
  {
    ATerm i_18;
    i_18 = t;
    {
      ATerm y_24 = NULL;
      ATerm z_24 = NULL;
      t = term_c_10;
      {
        t = get_config_0(t);
        {
          z_24 = t;
          if(((y_24 != NULL) && (y_24 != z_24)))
            _fail(z_24);
          else
            y_24 = z_24;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_24), term_c_12);
        t = geq_0(t);
      }
    }
    t = i_18;
    t = p_79(t);
    return(t);
  }
  t = try_1(t, r_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm d_25 = NULL,f_25 = NULL;
    ATerm j_18;
    j_18 = t;
    {
      ATerm e_25 = NULL;
      t = run_time_0(t);
      {
        e_25 = t;
        if(((d_25 != NULL) && (d_25 != e_25)))
          _fail(e_25);
        else
          d_25 = e_25;
      }
    }
    t = j_18;
    {
      ATerm g_25 = NULL;
      t = term_k_18;
      {
        t = get_config_0(t);
        {
          g_25 = t;
          if(((f_25 != NULL) && (f_25 != g_25)))
            _fail(g_25);
          else
            f_25 = g_25;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_18), not_null(d_25)), term_p_18), not_null(f_25)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, s_4);
  {
    t = term_h_15;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm n_25 = NULL;
  n_25 = t;
  m_25 :
  if(match_cons(n_25, sym_Version_0))
    {
      ATerm p_25 = NULL,r_25 = NULL;
      ATerm r_18;
      r_18 = t;
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
      t = r_18;
      {
        ATerm s_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(p_25));
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
ATerm need_help_1 (ATerm t, ATerm v_77 (ATerm))
{
  ATerm t_4 (ATerm t)
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        {
          ATerm w_18 = t;
          int b_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(b_19);
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
  t = option_defined_1(t, t_4);
  t = v_77(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm x_25 = NULL;
  x_25 = t;
  t = SSL_table_create(not_null(x_25));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_26 = NULL;
  b_26 = t;
  {
    ATerm c_19;
    c_19 = t;
    {
      t = term_d_19;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_d_19, term_f_19, not_null(b_26));
          t = table_put_0(t);
        }
      }
    }
    t = c_19;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  t = SSL_table_destroy(not_null(f_26));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm j_26 = NULL;
  j_26 = t;
  t = SSL_exit(not_null(j_26));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL;
  n_26 = t;
  m_26 :
  if(((ATgetType(n_26) == AT_LIST) && ATisEmpty(n_26)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(n_26) == AT_LIST) && !(ATisEmpty(n_26))))
        {
          o_26 = ATgetFirst((ATermList) n_26);
          p_26 = (ATerm) ATgetNext((ATermList) n_26);
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
  ATerm k_19;
  k_19 = t;
  {
    ATerm s_26 = NULL;
    ATerm x_26 = NULL;
    ATerm l_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(n_19);
      }
    else
      {
        t = l_19;
        {
          ATerm v_26 = NULL;
          ATerm w_26 = NULL;
          w_26 = t;
          if(((v_26 != NULL) && (v_26 != w_26)))
            _fail(w_26);
          else
            v_26 = w_26;
          t = (ATerm) ATinsert(ATempty, not_null(v_26));
        }
      }
    {
      x_26 = t;
      if(((s_26 != NULL) && (s_26 != x_26)))
        _fail(x_26);
      else
        s_26 = x_26;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_13, not_null(s_26));
      t = printnl_0(t);
    }
  }
  t = k_19;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm t_81 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_65 (ATerm))
{
  ATerm c_27 (ATerm t)
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(p_19);
      }
    else
      {
        t = o_19;
        t = Cons_2(t, y_65, c_27);
      }
    return(t);
  }
  t = c_27(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
  o_27 = t;
  l_27 :
  if(((ATgetType(o_27) == AT_LIST) && !(ATisEmpty(o_27))))
    {
      m_27 = ATgetFirst((ATermList) o_27);
      n_27 = (ATerm) ATgetNext((ATermList) o_27);
      {
        ATerm v_27 = NULL;
        t = not_null(n_27);
        {
          ATerm q_19;
          q_19 = t;
          {
            ATerm w_27 = NULL,y_27 = NULL,a_28 = NULL;
            ATerm r_19;
            r_19 = t;
            {
              ATerm x_27 = NULL;
              t = i_0(t);
              {
                x_27 = t;
                if(((w_27 != NULL) && (w_27 != x_27)))
                  _fail(x_27);
                else
                  w_27 = x_27;
              }
            }
            t = r_19;
            {
              ATerm z_27 = NULL;
              t = not_null(m_27);
              {
                t = h_0(t);
                {
                  z_27 = t;
                  if(((y_27 != NULL) && (y_27 != z_27)))
                    _fail(z_27);
                  else
                    y_27 = z_27;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(w_27)), not_null(y_27));
                {
                  a_28 = t;
                  if(((v_27 != NULL) && (v_27 != a_28)))
                    _fail(a_28);
                  else
                    v_27 = a_28;
                }
              }
            }
          }
          t = q_19;
          {
            ATerm u_4 (ATerm t)
            {
              t = not_null(v_27);
              return(t);
            }
            t = reverse_acc_2(t, h_0, u_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(o_27) == AT_LIST) && ATisEmpty(o_27)))
        {
          {
            t = term_j_6;
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
  ATerm v_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, v_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm s_81 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm z_57 (ATerm))
{
  ATerm l_28 = NULL,m_28 = NULL;
  l_28 = t;
  k_28 :
  if(match_cons(l_28, sym_Program_1))
    {
      m_28 = ATgetArgument(l_28, 0);
      {
        ATerm p_28 = NULL,r_28 = NULL;
        ATerm q_28 = NULL;
        t = SSLgetAnnotations(not_null(l_28));
        {
          q_28 = t;
          if(((p_28 != NULL) && (p_28 != q_28)))
            _fail(q_28);
          else
            p_28 = q_28;
        }
        {
          t = not_null(m_28);
          {
            ATerm t_28 = NULL;
            t = z_57(t);
            {
              r_28 = t;
              {
                ATerm u_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(r_28)), not_null(p_28));
                {
                  u_28 = t;
                  if(((t_28 != NULL) && (t_28 != u_28)))
                    _fail(u_28);
                  else
                    t_28 = u_28;
                }
                t = not_null(t_28);
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
  ATerm d_29 = NULL;
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_29 = NULL;
      t = term_k_18;
      {
        t = get_config_0(t);
        {
          j_29 = t;
          if(((d_29 != NULL) && (d_29 != j_29)))
            _fail(j_29);
          else
            d_29 = j_29;
        }
      }
      ;
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      {
        ATerm w_4 (ATerm t)
        {
          ATerm x_4 (ATerm t)
          {
            ATerm k_29 = NULL;
            k_29 = t;
            if(((d_29 != NULL) && (d_29 != k_29)))
              _fail(k_29);
            else
              d_29 = k_29;
            return(t);
          }
          t = Program_1(t, x_4);
          return(t);
        }
        t = option_defined_1(t, w_4);
      }
    }
  {
    ATerm y_4 (ATerm t)
    {
      ATerm z_4 (ATerm t)
      {
        t = not_null(d_29);
        return(t);
      }
      t = short_description_1(t, z_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, y_4);
    {
      t = term_u_19;
      {
        t = echo_0(t);
        {
          t = term_x_19;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_5 (ATerm t)
                {
                  ATerm l_29 = NULL;
                  ATerm m_29 = NULL;
                  m_29 = t;
                  if(((l_29 != NULL) && (l_29 != m_29)))
                    _fail(m_29);
                  else
                    l_29 = m_29;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_29)), term_y_19);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_5);
                {
                  ATerm b_5 (ATerm t)
                  {
                    ATerm n_29 = NULL;
                    ATerm o_29 = NULL;
                    ATerm c_5 (ATerm t)
                    {
                      t = not_null(d_29);
                      return(t);
                    }
                    t = long_description_1(t, c_5);
                    {
                      o_29 = t;
                      if(((n_29 != NULL) && (n_29 != o_29)))
                        _fail(o_29);
                      else
                        n_29 = o_29;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(n_29)), term_a_20);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, b_5);
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
  ATerm c_20;
  c_20 = t;
  {
    ATerm u_29 = NULL;
    ATerm v_29 = NULL;
    v_29 = t;
    if(((u_29 != NULL) && (u_29 != v_29)))
      _fail(v_29);
    else
      u_29 = v_29;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_11, (ATerm) ATinsert(ATempty, not_null(u_29)));
      t = printnl_0(t);
    }
  }
  t = c_20;
  return(t);
}
ATerm say_1 (ATerm t, ATerm t_76 (ATerm))
{
  ATerm g_20;
  g_20 = t;
  {
    t = t_76(t);
    t = debug_0(t);
  }
  t = g_20;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm a_58 (ATerm))
{
  ATerm c_30 = NULL,d_30 = NULL;
  c_30 = t;
  b_30 :
  if(match_cons(c_30, sym_Undefined_1))
    {
      d_30 = ATgetArgument(c_30, 0);
      {
        ATerm g_30 = NULL,i_30 = NULL;
        ATerm h_30 = NULL;
        t = SSLgetAnnotations(not_null(c_30));
        {
          h_30 = t;
          if(((g_30 != NULL) && (g_30 != h_30)))
            _fail(h_30);
          else
            g_30 = h_30;
        }
        {
          t = not_null(d_30);
          {
            ATerm k_30 = NULL;
            t = a_58(t);
            {
              i_30 = t;
              {
                ATerm l_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(i_30)), not_null(g_30));
                {
                  l_30 = t;
                  if(((k_30 != NULL) && (k_30 != l_30)))
                    _fail(l_30);
                  else
                    k_30 = l_30;
                }
                t = not_null(k_30);
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
ATerm fetch_1 (ATerm t, ATerm h_66 (ATerm))
{
  ATerm q_30 (ATerm t)
  {
    ATerm h_20 = t;
    int j_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_66, _id);
        ;
        LocalPopChoice(j_20);
      }
    else
      {
        t = h_20;
        t = Cons_2(t, _id, q_30);
      }
    return(t);
  }
  t = q_30(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm s_80 (ATerm))
{
  t = fetch_1(t, s_80);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm v_30 = NULL;
  v_30 = t;
  u_30 :
  if(match_cons(v_30, sym_Help_0))
    {
      ATerm x_30 = NULL,z_30 = NULL;
      ATerm k_20;
      k_20 = t;
      {
        ATerm y_30 = NULL;
        t = SSLgetAnnotations(not_null(v_30));
        {
          y_30 = t;
          if(((x_30 != NULL) && (x_30 != y_30)))
            _fail(y_30);
          else
            x_30 = y_30;
        }
      }
      t = k_20;
      {
        ATerm a_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(x_30));
        {
          a_31 = t;
          if(((z_30 != NULL) && (z_30 != a_31)))
            _fail(a_31);
          else
            z_30 = a_31;
        }
        t = not_null(z_30);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm m_58 (ATerm))
{
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_58(t);
      ;
      LocalPopChoice(o_20);
    }
  else
    {
      t = n_20;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL;
  g_31 = t;
  f_31 :
  if(match_cons(g_31, sym__2))
    {
      h_31 = ATgetArgument(g_31, 0);
      i_31 = ATgetArgument(g_31, 1);
      t = SSL_table_get(not_null(h_31), not_null(i_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL;
  p_31 = t;
  o_31 :
  if(match_cons(p_31, sym__3))
    {
      q_31 = ATgetArgument(p_31, 0);
      r_31 = ATgetArgument(p_31, 1);
      s_31 = ATgetArgument(p_31, 2);
      {
        ATerm x_20;
        x_20 = t;
        {
          ATerm w_31 = NULL;
          ATerm x_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_31), not_null(r_31));
          {
            ATerm y_20 = t;
            int a_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(a_21);
              }
            else
              {
                t = y_20;
                t = (ATerm) ATempty;
              }
            {
              x_31 = t;
              if(((w_31 != NULL) && (w_31 != x_31)))
                _fail(x_31);
              else
                w_31 = x_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_31), not_null(r_31), (ATerm) ATinsert(CheckATermList(not_null(w_31)), not_null(s_31)));
            t = table_put_0(t);
          }
        }
        t = x_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm x_81 (ATerm))
{
  ATerm b_32 = NULL;
  ATerm c_32 = NULL;
  t = term_j_6;
  {
    t = x_81(t);
    {
      c_32 = t;
      if(((b_32 != NULL) && (b_32 != c_32)))
        _fail(c_32);
      else
        b_32 = c_32;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_v_19, term_w_19, not_null(b_32));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
  i_32 = t;
  h_32 :
  if(match_string(i_32, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(i_32) == AT_LIST) && !(ATisEmpty(i_32))))
        {
          j_32 = ATgetFirst((ATermList) i_32);
          k_32 = (ATerm) ATgetNext((ATermList) i_32);
          {
            ATerm n_32 = NULL;
            ATerm b_21;
            b_21 = t;
            {
              t = not_null(j_32);
              t = a_0(t);
            }
            t = b_21;
            {
              ATerm o_32 = NULL;
              t = term_j_6;
              {
                t = d_0(t);
                {
                  o_32 = t;
                  if(((n_32 != NULL) && (n_32 != o_32)))
                    _fail(o_32);
                  else
                    n_32 = o_32;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(k_32)), not_null(n_32));
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
  ATerm h_5 (ATerm t)
  {
    ATerm t_32 = NULL;
    t_32 = t;
    s_32 :
    if(!(match_string(t_32, "--help")))
      {
        if(!(match_string(t_32, "-h")))
          {
            if(!(match_string(t_32, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    t = term_i_21;
    {
      t = set_config_0(t);
      t = term_k_21;
    }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = term_l_21;
    return(t);
  }
  t = Option_3(t, h_5, i_5, l_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
  w_32 = t;
  v_32 :
  if(((ATgetType(w_32) == AT_LIST) && !(ATisEmpty(w_32))))
    {
      x_32 = ATgetFirst((ATermList) w_32);
      y_32 = (ATerm) ATgetNext((ATermList) w_32);
      t = (ATerm) ATinsert(CheckATermList(not_null(y_32)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(x_32)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_51 (ATerm), ATerm l_51 (ATerm))
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
  i_33 = t;
  h_33 :
  if(((ATgetType(i_33) == AT_LIST) && !(ATisEmpty(i_33))))
    {
      j_33 = ATgetFirst((ATermList) i_33);
      k_33 = (ATerm) ATgetNext((ATermList) i_33);
      {
        ATerm q_33 = NULL,s_33 = NULL;
        ATerm r_33 = NULL;
        t = SSLgetAnnotations(not_null(i_33));
        {
          r_33 = t;
          if(((q_33 != NULL) && (q_33 != r_33)))
            _fail(r_33);
          else
            q_33 = r_33;
        }
        {
          t = not_null(j_33);
          {
            ATerm x_33 = NULL;
            t = k_51(t);
            {
              s_33 = t;
              {
                t = not_null(k_33);
                {
                  ATerm z_33 = NULL;
                  t = l_51(t);
                  {
                    x_33 = t;
                    {
                      ATerm a_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(x_33)), not_null(s_33)), not_null(q_33));
                      {
                        a_34 = t;
                        if(((z_33 != NULL) && (z_33 != a_34)))
                          _fail(a_34);
                        else
                          z_33 = a_34;
                      }
                      t = not_null(z_33);
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
  ATerm o_34 = NULL;
  o_34 = t;
  n_34 :
  if(((ATgetType(o_34) == AT_LIST) && ATisEmpty(o_34)))
    {
      {
        ATerm q_34 = NULL,s_34 = NULL;
        ATerm m_21;
        m_21 = t;
        {
          ATerm r_34 = NULL;
          t = SSLgetAnnotations(not_null(o_34));
          {
            r_34 = t;
            if(((q_34 != NULL) && (q_34 != r_34)))
              _fail(r_34);
            else
              q_34 = r_34;
          }
        }
        t = m_21;
        {
          ATerm t_34 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(q_34));
          {
            t_34 = t;
            if(((s_34 != NULL) && (s_34 != t_34)))
              _fail(t_34);
            else
              s_34 = t_34;
          }
          t = not_null(s_34);
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
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
  z_34 = t;
  y_34 :
  if(match_cons(z_34, sym__2))
    {
      a_35 = ATgetArgument(z_34, 0);
      b_35 = ATgetArgument(z_34, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_13, not_null(a_35), not_null(b_35));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm v_81 (ATerm))
{
  ATerm n_21;
  n_21 = t;
  {
    ATerm n_5 (ATerm t)
    {
      t = term_o_21;
      t = v_81(t);
      return(t);
    }
    t = try_1(t, n_5);
  }
  t = n_21;
  {
    ATerm o_5 (ATerm t)
    {
      ATerm j_35 = NULL;
      ATerm q_21;
      q_21 = t;
      {
        ATerm h_35 = NULL;
        ATerm i_35 = NULL;
        i_35 = t;
        if(((h_35 != NULL) && (h_35 != i_35)))
          _fail(i_35);
        else
          h_35 = i_35;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_18, not_null(h_35));
          t = set_config_0(t);
        }
      }
      t = q_21;
      {
        ATerm k_35 = NULL;
        k_35 = t;
        if(((j_35 != NULL) && (j_35 != k_35)))
          _fail(k_35);
        else
          j_35 = k_35;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_35));
      }
      return(t);
    }
    ATerm p_5 (ATerm t)
    {
      ATerm r_21 = t;
      int s_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_22 = t;
          int b_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(b_22);
            }
          else
            {
              t = a_22;
              {
                t = v_81(t);
                t = Cons_2(t, _id, p_5);
              }
            }
          ;
          LocalPopChoice(s_21);
        }
      else
        {
          t = r_21;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, o_5, p_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL;
  ATerm c_22;
  c_22 = t;
  {
    ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL,y_35 = NULL;
    t_35 = t;
    p_35 :
    if(match_cons(t_35, sym__3))
      {
        u_35 = ATgetArgument(t_35, 0);
        v_35 = ATgetArgument(t_35, 1);
        y_35 = ATgetArgument(t_35, 2);
        {
          if(((q_35 != NULL) && (q_35 != u_35)))
            _fail(u_35);
          else
            q_35 = u_35;
          {
            if(((r_35 != NULL) && (r_35 != v_35)))
              _fail(v_35);
            else
              r_35 = v_35;
            {
              if(((s_35 != NULL) && (s_35 != y_35)))
                _fail(y_35);
              else
                s_35 = y_35;
              t = SSL_table_put(not_null(q_35), not_null(r_35), not_null(s_35));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = c_22;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm u_81 (ATerm))
{
  ATerm e_36 = NULL;
  ATerm d_22;
  d_22 = t;
  {
    t = term_e_22;
    t = table_put_0(t);
  }
  t = d_22;
  {
    ATerm q_5 (ATerm t)
    {
      ATerm f_22 = t;
      int i_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_81(t);
          ;
          LocalPopChoice(i_22);
        }
      else
        {
          t = f_22;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, q_5);
    {
      ATerm r_5 (ATerm t)
      {
        ATerm j_22 = t;
        int k_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_22;
            m_22 = t;
            {
              ATerm n_22 = t;
              int t_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_h_21;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(t_22);
                }
              else
                {
                  t = n_22;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = m_22;
            {
              t = system_usage_0(t);
              {
                t = term_h_15;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(k_22);
          }
        else
          {
            t = j_22;
            {
              ATerm t_5 (ATerm t)
              {
                ATerm w_5 (ATerm t)
                {
                  ATerm f_36 = NULL;
                  f_36 = t;
                  if(((e_36 != NULL) && (e_36 != f_36)))
                    _fail(f_36);
                  else
                    e_36 = f_36;
                  return(t);
                }
                t = Undefined_1(t, w_5);
                return(t);
              }
              t = option_defined_1(t, t_5);
              {
                ATerm x_5 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_36)), term_u_22);
                  return(t);
                }
                t = say_1(t, x_5);
                {
                  t = system_usage_0(t);
                  {
                    t = term_c_12;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, r_5);
      {
        ATerm v_22;
        v_22 = t;
        {
          t = term_v_19;
          t = table_destroy_0(t);
        }
        t = v_22;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm b_78 (ATerm), ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm e_78 (ATerm))
{
  t = parse_options_1(t, b_78);
  {
    t = store_options_0(t);
    {
      t = d_78(t);
      {
        ATerm x_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, c_78);
            ;
            LocalPopChoice(y_22);
          }
        else
          {
            t = x_22;
            {
              ATerm z_22 = t;
              int e_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_78(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(e_23);
                }
              else
                {
                  t = z_22;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm v_78 (ATerm))
{
  ATerm y_5 (ATerm t)
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_78(t);
        ;
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, s_78);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, y_5, u_78, v_78, a_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm o_78 (ATerm))
{
  ATerm b_6 (ATerm t)
  {
    ATerm c_6 (ATerm t)
    {
      ATerm h_23;
      h_23 = t;
      {
        ATerm i_36 = NULL;
        ATerm j_36 = NULL;
        t = term_k_18;
        {
          t = get_config_0(t);
          {
            j_36 = t;
            if(((i_36 != NULL) && (i_36 != j_36)))
              _fail(j_36);
            else
              i_36 = j_36;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_11, (ATerm) ATinsert(ATempty, not_null(i_36)));
          t = printnl_0(t);
        }
      }
      t = h_23;
      return(t);
    }
    t = if_verbose2_1(t, c_6);
    return(t);
  }
  t = iowrap_4(t, m_78, n_78, o_78, b_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm k_78 (ATerm), ATerm l_78 (ATerm))
{
  t = iowrap_3(t, k_78, l_78, default_usage_0);
  return(t);
}
ATerm term_to_adot_0 (ATerm t)
{
  ATerm f_6 (ATerm t)
  {
    ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
    n_36 = t;
    m_36 :
    if(match_cons(n_36, sym__2))
      {
        o_36 = ATgetArgument(n_36, 0);
        p_36 = ATgetArgument(n_36, 1);
        {
          t = not_null(o_36);
          t = to_adot_0(t);
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = iowrap_2(t, f_6, term_to_adot_options_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = term_to_adot_0(t);
  return(t);
}
