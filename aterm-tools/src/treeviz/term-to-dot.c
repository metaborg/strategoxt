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
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_WaitStatus_3;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_Some_1;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Graph_0;
Symbol sym_Tree_0;
Symbol sym_DotDigraph_2;
Symbol sym_AttrId_2;
Symbol sym_Node_2;
Symbol sym_Id_1;
Symbol sym_Attrs_1;
Symbol sym_EdgeNoAttrs_2;
Symbol sym_Arrow_1;
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
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Graph_0 = ATmakeSymbol("Graph", 0, ATfalse);
  ATprotectSymbol(sym_Graph_0);
  sym_Tree_0 = ATmakeSymbol("Tree", 0, ATfalse);
  ATprotectSymbol(sym_Tree_0);
  sym_DotDigraph_2 = ATmakeSymbol("DotDigraph", 2, ATfalse);
  ATprotectSymbol(sym_DotDigraph_2);
  sym_AttrId_2 = ATmakeSymbol("AttrId", 2, ATfalse);
  ATprotectSymbol(sym_AttrId_2);
  sym_Node_2 = ATmakeSymbol("Node", 2, ATfalse);
  ATprotectSymbol(sym_Node_2);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_Attrs_1 = ATmakeSymbol("Attrs", 1, ATfalse);
  ATprotectSymbol(sym_Attrs_1);
  sym_EdgeNoAttrs_2 = ATmakeSymbol("EdgeNoAttrs", 2, ATfalse);
  ATprotectSymbol(sym_EdgeNoAttrs_2);
  sym_Arrow_1 = ATmakeSymbol("Arrow", 1, ATfalse);
  ATprotectSymbol(sym_Arrow_1);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_a_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_y_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_b_34;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_n_32;
ATerm term_i_32;
ATerm term_z_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_z_30;
ATerm term_t_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_u_29;
ATerm term_d_29;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_j_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_q_23;
ATerm term_n_23;
ATerm term_i_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_b_22;
ATerm term_m_21;
ATerm term_k_21;
ATerm term_r_19;
ATerm term_e_18;
ATerm term_q_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_b_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_y_11;
ATerm term_t_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_n_10;
ATerm term_f_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_v_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_a_8;
ATerm term_x_7;
ATerm term_u_7;
ATerm term_r_7;
void init_constant_terms (void)
{
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_8, term_e_8, term_f_8);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_8, term_k_8, term_l_8);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_8, term_o_8, term_p_8);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_8, term_s_8, term_t_8);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_8, term_y_8, term_z_8);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_9, term_c_9, term_d_9);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_9, term_g_9, term_h_9);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_9, term_n_9, term_o_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_9, term_v_9, term_w_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_9, term_f_10, term_n_10);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_10, term_r_10, term_s_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_10, term_y_10, term_a_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_11, term_f_11, term_i_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_11, term_t_11, term_y_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_l_12, term_m_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_u_12, term_v_12);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_g_13, term_h_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_13, term_s_13, term_t_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_x_13, term_y_13);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_j_14, term_k_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_q_14, term_a_15);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_d_15, term_e_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_15, term_j_15, term_k_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_n_15, term_o_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_15, term_r_15, term_s_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_x_15, term_y_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_b_16, term_d_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_j_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_AttrId_2, term_x_22, term_i_23);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_30);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym__3, term_r_33, term_s_33, term_e_27);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Dot-pretty.pp", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_term_2_0 (ATerm r_93 (ATerm), ATerm s_93 (ATerm), ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm o_79 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm x_73 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm l_70 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm a_91 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm c_91 (ATerm), ATerm);
ATerm s_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm e_91 (ATerm), ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm v_86 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm p_88 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm e_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm j_1 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm k_1 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm quote_chars_0_0 (ATerm);
ATerm EdgeToDot_0_0 (ATerm);
ATerm ListEdgeToDot_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm u_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
ATerm term_to_graph_0_0 (ATerm);
ATerm union_1_0 (ATerm g_83 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm);
ATerm if_verbose5_1_0 (ATerm b_91 (ATerm), ATerm);
ATerm f_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm term_to_tree_0_0 (ATerm);
ATerm v_2 (ATerm);
ATerm to_adot_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm i_75 (ATerm), ATerm);
ATerm assert_1_0 (ATerm t_89 (ATerm), ATerm);
ATerm z_12 (ATerm o_12, ATerm);
ATerm a_13 (ATerm r_12, ATerm s_12, ATerm t_12, ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm w_2 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm c_14 (ATerm w_13, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_1_0 (ATerm t_93 (ATerm), ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm q_89 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm p_89 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm u_92 (ATerm), ATerm);
ATerm i_3 (ATerm);
ATerm xtc_io_1_0 (ATerm v_92 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm c_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm h_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm term_to_adot_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm s_85 (ATerm), ATerm t_85 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm o_4 (ATerm);
ATerm r_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_90 (ATerm), ATerm);
ATerm s_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm t_4 (ATerm);
ATerm need_help_1_0 (ATerm w_94 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm s_70 (ATerm), ATerm);
ATerm w_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm t_70 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm m_79 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm s_79 (ATerm), ATerm);
ATerm _2_0 (ATerm x_60 (ATerm), ATerm y_60 (ATerm), ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm b_79 (ATerm), ATerm);
ATerm f_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm m_5 (ATerm);
ATerm o_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm m_65 (ATerm), ATerm n_65 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm parse_options_p__1_0 (ATerm u_96 (ATerm), ATerm);
ATerm z_5 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm parse_options_1_0 (ATerm t_96 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm b_95 (ATerm), ATerm);
ATerm l_6 (ATerm);
ATerm p_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm j_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm term_to_dot_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm r_93 (ATerm), ATerm s_93 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(r_93, s_93, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm r_1 = NULL,s_1 = NULL,t_1 = NULL,v_1 = NULL;
  r_1 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      s_1 = ATgetArgument(t, 0);
      {
        ATerm p_0 = NULL;
        t = SSL_int_to_string(s_1);
        p_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_7), p_0), term_r_7);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm d_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          s_1 = ATgetArgument(t, 0);
          t_1 = ATgetArgument(t, 1);
          v_1 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(t_1);
      d_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_1), term_a_8), d_1), term_x_7), s_1);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm o_79 (ATerm), ATerm t)
{
  ATerm y_1 = NULL;
  ATerm c_0 (ATerm t)
  {
    t = o_79(t);
    if(((y_1 != NULL) && (y_1 != t)))
      _fail(t);
    else
      y_1 = t;
    return(t);
  }
  t = fetch_1_0(c_0, t);
  t = not_null(y_1);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm z_1 = NULL;
  z_1 = t;
  {
    ATerm b_8 = t;
    int c_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_16), term_f_16), term_z_15), term_t_15), term_p_15), term_l_15), term_f_15), term_b_15), term_l_14), term_b_14), term_u_13), term_p_13), term_d_13), term_n_12), term_b_12), term_j_11), term_d_11), term_t_10), term_p_10), term_y_9), term_p_9), term_i_9), term_e_9), term_a_9), term_v_8), term_q_8), term_m_8), term_i_8);
        {
          ATerm e_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm l_16 = ATgetArgument(t, 0);
                if((z_1 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm n_16 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(e_0, t);
        }
        ;
        LocalPopChoice(c_8);
      }
    else
      {
        t = b_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, z_1);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm c_2 = NULL;
  c_2 = t;
  {
    ATerm p_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_2 = NULL,a_2 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_16 = ATgetArgument(t, 0);
            j_2 = ATgetArgument(t, 1);
            {
              ATerm v_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = j_2;
        {
          ATerm z_16 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_16;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          a_2 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, a_2), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_a_17, (ATerm) ATinsert(ATinsert(ATempty, a_2), term_b_17));
        }
        ;
        LocalPopChoice(r_16);
      }
    else
      {
        t = p_16;
      }
    t = c_2;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm x_73 (ATerm), ATerm t)
{
  ATerm n_2 = NULL,o_2 = NULL;
  n_2 = t;
  t = fork_0_0(t);
  o_2 = t;
  {
    ATerm c_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = n_2;
        t = x_73(t);
        ;
        LocalPopChoice(e_17);
      }
    else
      {
        t = c_17;
        t = SSL_waitpid(o_2);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm i_17 = ATgetArgument(t, 0);
            if(((ATgetType(i_17) != AT_INT) || (ATgetInt((ATermInt) i_17) != 0)))
              _fail(t);
            {
              ATerm j_17 = ATgetArgument(t, 1);
            }
            {
              ATerm m_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = n_2;
      }
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm g_4 = NULL,i_4 = NULL;
  g_4 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm f_3 = NULL,g_3 = NULL,b_4 = NULL,d_4 = NULL;
      t = g_4;
      t = xtc_new_file_0_0(t);
      f_3 = t;
      t = m_0(t);
      g_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_3, (ATerm) ATinsert(ATinsert(ATempty, f_3), term_q_17));
      {
        ATerm u_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm x_17 = ATgetArgument(t, 0);
                ATerm a_18 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = g_3;
            {
              ATerm n_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, f_3), term_q_17);
                return(t);
              }
              t = at_end_1_0(n_0, t);
            }
            ;
            LocalPopChoice(w_17);
          }
        else
          {
            t = u_17;
            {
              ATerm r_3 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, g_3, (ATerm) ATinsert(ATinsert(ATempty, f_3), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm c_18 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) c_18) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  r_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_3;
              t = concat_0_0(t);
            }
          }
        b_4 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        d_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_4, b_4);
        {
          ATerm o_0 (ATerm t)
          {
            t = SSL_execvp(d_4, b_4);
            return(t);
          }
          t = fork_and_wait_1_0(o_0, t);
          t = SSL_close_file(f_3);
          t = (ATerm) ATmakeAppl(sym_FILE_1, f_3);
        }
      }
    }
  else
    {
      ATerm u_4 = NULL,x_4 = NULL,s_5 = NULL,t_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_4;
      t = xtc_new_file_0_0(t);
      u_4 = t;
      t = m_0(t);
      x_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_4), term_q_17), i_4), term_e_18));
      {
        ATerm f_18 = t;
        int i_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm j_18 = ATgetArgument(t, 0);
                ATerm k_18 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = x_4;
            {
              ATerm q_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_4), term_q_17), i_4), term_e_18);
                return(t);
              }
              t = at_end_1_0(q_0, t);
            }
            ;
            LocalPopChoice(i_18);
          }
        else
          {
            t = f_18;
            {
              ATerm r_5 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, x_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_4), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), i_4), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm m_18 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) m_18) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  r_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_5;
              t = concat_0_0(t);
            }
          }
        s_5 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        t_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_5, s_5);
        {
          ATerm r_0 (ATerm t)
          {
            t = SSL_execvp(t_5, s_5);
            return(t);
          }
          t = fork_and_wait_1_0(r_0, t);
          t = SSL_close_file(u_4);
          t = (ATerm) ATmakeAppl(sym_FILE_1, u_4);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm l_70 (ATerm), ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL,p_4 = NULL,q_4 = NULL;
  q_4 = t;
  if(match_cons(t, sym_FILE_1))
    {
      n_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_4);
  m_4 = t;
  t = n_4;
  t = l_70(t);
  p_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, p_4), m_4);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm a_91 (ATerm), ATerm t)
{
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_5 = NULL,k_5 = NULL;
      d_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm r_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_6 = NULL;
            t = eval_config_0_0(t);
            o_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), o_6);
            t = o_6;
            ;
            LocalPopChoice(s_18);
          }
        else
          {
            t = r_18;
          }
        k_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_5, term_y_10);
        t = geq_0_0(t);
        t = d_5;
        t = a_91(t);
      }
      ;
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm c_91 (ATerm), ATerm t)
{
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_5 = NULL,n_5 = NULL;
      l_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm x_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_6 = NULL;
            t = eval_config_0_0(t);
            u_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), u_6);
            t = u_6;
            ;
            LocalPopChoice(z_18);
          }
        else
          {
            t = x_18;
          }
        n_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_5, term_s_8);
        t = geq_0_0(t);
        t = l_5;
        t = c_91(t);
      }
      ;
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
    }
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm e_6 = NULL;
  if(match_cons(t, sym__2))
    {
      e_6 = ATgetArgument(t, 0);
      if((e_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL,a_6 = NULL;
  if(match_cons(t, sym__3))
    {
      u_5 = ATgetArgument(t, 0);
      v_5 = ATgetArgument(t, 1);
      w_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_5, v_5);
  {
    ATerm b_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_19 = ATgetArgument(t, 0);
            ATerm e_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(u_5, v_5);
        ;
        LocalPopChoice(c_19);
      }
    else
      {
        t = b_19;
        t = (ATerm) ATempty;
      }
    x_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_5, w_5);
    t = union_1_0(s_0, t);
    a_6 = t;
    t = SSL_table_put(u_5, v_5, a_6);
    t = (ATerm) ATmakeAppl(sym__3, u_5, v_5, w_5);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm e_91 (ATerm), ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL;
  if(match_cons(t, sym__2))
    {
      i_6 = ATgetArgument(t, 0);
      h_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6;
  {
    ATerm t_0 (ATerm t)
    {
      ATerm j_6 = NULL,k_6 = NULL;
      if(match_cons(t, sym__2))
        {
          j_6 = ATgetArgument(t, 0);
          k_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, i_6, j_6, k_6);
      t = e_91(t);
      return(t);
    }
    t = map_1_0(t_0, t);
  }
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_6 = NULL;
      m_6 = t;
      t = SSL_access(m_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(g_19);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = f_19;
      {
        ATerm h_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_6 = NULL;
            ATerm p_19 = t;
            if((PushChoice() == 0))
              {
                ATerm n_6 = NULL;
                n_6 = t;
                t = SSL_access(n_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = p_19;
              }
            v_6 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_6), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = v_6;
            ;
            LocalPopChoice(j_19);
          }
        else
          {
            t = h_19;
            {
              ATerm y_6 = NULL;
              y_6 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_6), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = y_6;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm f_7 = NULL;
  f_7 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_7), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
  t = f_7;
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm v_7 = NULL;
  v_7 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_7), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
  t = v_7;
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm c_7 = NULL;
  c_7 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = c_7;
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm d_7 = NULL;
  d_7 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
  t = d_7;
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm e_7 = NULL;
  e_7 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = e_7;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL,b_7 = NULL;
  q_6 = t;
  t = if_verbose5_1_0(u_0, t);
  {
    ATerm q_19 = t;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, q_6));
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_19;
      }
    r_6 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, q_6));
    t = r_6;
    t = if_verbose4_1_0(v_0, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(w_0, t);
    b_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_r_19, b_7);
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(x_0, t);
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, q_6), (ATerm) ATempty);
    t = (ATerm) ATmakeAppl(sym__3, term_r_19, (ATerm)ATmakeAppl(sym_Imported_1, q_6), (ATerm) ATempty);
    t = if_verbose4_1_0(y_0, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm y_19 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(b_20);
    }
  else
    {
      t = y_19;
      {
        ATerm c_20 = t;
        int f_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              t = filter_1_0(v_86, t);
              return(t);
            }
            t = Cons_2_0(v_86, z_0, t);
            ;
            LocalPopChoice(f_20);
          }
        else
          {
            t = c_20;
            {
              ATerm i_7 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm g_20 = ATgetFirst((ATermList) t);
                  i_7 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = i_7;
              t = filter_1_0(v_86, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm p_88 (ATerm), ATerm t)
{
  ATerm k_7 (ATerm t)
  {
    ATerm i_20 = t;
    int j_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_88(t);
        t = k_7(t);
        ;
        LocalPopChoice(j_20);
      }
    else
      {
        t = i_20;
      }
    return(t);
  }
  t = k_7(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm k_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm n_20 = t;
        int o_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_8 = NULL;
            t = eval_config_0_0(t);
            u_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), u_8);
            t = u_8;
            ;
            LocalPopChoice(o_20);
          }
        else
          {
            t = n_20;
          }
      }
      ;
      LocalPopChoice(m_20);
    }
  else
    {
      t = k_20;
      {
        ATerm p_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(q_20);
          }
        else
          {
            t = p_20;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm w_8 = NULL;
  w_8 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_8), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
  t = w_8;
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm r_20 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_20;
      }
  }
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm q_9 = NULL;
  q_9 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_9), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
  t = q_9;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm l_7 = NULL;
  t = if_verbose5_1_0(a_1, t);
  l_7 = t;
  {
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(t_20);
      }
    else
      {
        t = s_20;
        {
          ATerm m_7 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          m_7 = t;
          t = repeat_1_0(b_1, t);
          t = m_7;
        }
      }
    t = l_7;
    t = if_verbose5_1_0(c_1, t);
  }
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm z_10 = NULL;
  z_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_10), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = z_10;
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm h_14 = NULL;
  h_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_14), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = h_14;
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm k_17 = NULL;
  t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
  t = map_1_0(i_1, t);
  k_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_17), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
  t = k_17;
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm d_17 = NULL,f_17 = NULL;
  d_17 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), d_17);
  f_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_17, f_17);
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm u_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(e_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm z_20 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_12 = NULL,b_13 = NULL,k_13 = NULL;
            if(match_cons(t, sym__2))
              {
                p_12 = ATgetArgument(t, 0);
                b_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, p_12));
            {
              ATerm f_1 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((b_13 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((k_13 != NULL) && (k_13 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      k_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(f_1, t);
              t = not_null(k_13);
            }
            ;
            LocalPopChoice(b_21);
          }
        else
          {
            t = z_20;
            {
              ATerm r_13 = NULL,g_14 = NULL;
              r_13 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, r_13));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm d_21 = ATgetFirst((ATermList) t);
                  if(match_cons(d_21, sym__2))
                    {
                      ATerm i_21 = ATgetArgument(d_21, 0);
                      g_14 = ATgetArgument(d_21, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm f_21 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = g_14;
            }
          }
        t = if_verbose5_1_0(g_1, t);
      }
      ;
      LocalPopChoice(x_20);
    }
  else
    {
      t = u_20;
      {
        ATerm q_7 = NULL;
        q_7 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), q_7), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_21), q_7), term_k_21);
        t = if_verbose5_1_0(h_1, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm t_7 = NULL;
  t_7 = t;
  t = SSL_explode_string(t_7);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm s_7 = NULL;
  t = map_1_0(j_1, t);
  t = concat_0_0(t);
  s_7 = t;
  t = SSL_implode_string(s_7);
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = Cons_2_0(_id, escape_chars_0_0, t);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm o_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_21 = t;
      int t_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_7 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm a_22 = ATgetFirst((ATermList) t);
              if(((ATgetType(a_22) != AT_INT) || (ATgetInt((ATermInt) a_22) != 34)))
                _fail(t);
              w_7 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(w_7), term_h_22), term_b_22);
          ;
          LocalPopChoice(t_21);
        }
      else
        {
          t = s_21;
          {
            ATerm y_7 = NULL,z_7 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_7 = ATgetFirst((ATermList) t);
                z_7 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_7;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(z_7), term_b_22), term_b_22);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(z_7), term_i_22), term_b_22);
              }
          }
        }
      t = Cons_2_0(_id, k_1, t);
      ;
      LocalPopChoice(r_21);
    }
  else
    {
      t = o_21;
      {
        ATerm k_22 = t;
        int n_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(n_22);
          }
        else
          {
            t = k_22;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm quote_chars_0_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL;
  if(match_cons(t, sym__2))
    {
      g_8 = ATgetArgument(t, 0);
      h_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_8), g_8), (ATerm) ATinsert(ATempty, g_8));
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_22 = ATgetArgument(t, 0);
            ATerm r_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(h_8), g_8);
        {
          ATerm l_1 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, g_8);
            return(t);
          }
          t = at_end_1_0(l_1, t);
        }
        ;
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        {
          ATerm b_18 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_8), g_8), (ATerm) ATinsert(ATempty, g_8)));
          if(match_cons(t, sym__2))
            {
              ATerm u_22 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) u_22) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              b_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_18;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm EdgeToDot_0_0 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
  k_9 = t;
  if(match_cons(t, sym__2))
    {
      l_9 = ATgetArgument(t, 0);
      m_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_19 = NULL,t_19 = NULL,x_19 = NULL,d_20 = NULL,y_20 = NULL,c_21 = NULL,h_21 = NULL,j_21 = NULL;
        t = SSL_explode_term(m_9);
        if(match_cons(t, sym__2))
          {
            i_19 = ATgetArgument(t, 0);
            t_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_explode_string(i_19);
        t = escape_chars_0_0(t);
        y_20 = t;
        t = SSL_implode_string(y_20);
        c_21 = t;
        t = SSL_explode_string(c_21);
        j_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_22, j_21);
        t = quote_chars_0_0(t);
        h_21 = t;
        t = SSL_implode_string(h_21);
        x_19 = t;
        t = t_19;
        {
          ATerm m_1 (ATerm t)
          {
            ATerm l_20 = NULL;
            l_20 = t;
            t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, l_9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, l_20))));
            return(t);
          }
          t = map_1_0(m_1, t);
          d_20 = t;
          t = (ATerm) ATinsert(CheckATermList(d_20), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, l_9), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_x_22, x_19))))));
        }
        ;
        LocalPopChoice(w_22);
      }
    else
      {
        t = v_22;
        {
          ATerm k_23 = NULL,v_23 = NULL,y_24 = NULL,a_25 = NULL;
          t = SSL_is_int(m_9);
          t = SSL_int_to_string(m_9);
          y_24 = t;
          t = SSL_explode_string(y_24);
          t = escape_chars_0_0(t);
          a_25 = t;
          t = SSL_implode_string(a_25);
          k_23 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_22), k_23), term_y_22);
          t = concat_strings_0_0(t);
          v_23 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, l_9), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_x_22, v_23))))));
        }
      }
  }
  return(t);
}
ATerm ListEdgeToDot_0_0 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL;
  if(match_cons(t, sym__2))
    {
      r_9 = ATgetArgument(t, 0);
      s_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_9;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm g_23 = ATgetFirst((ATermList) t);
          ATerm h_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_9;
    }
  t = s_9;
  {
    ATerm n_1 (ATerm t)
    {
      ATerm x_9 = NULL;
      x_9 = t;
      t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, r_9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, x_9))));
      return(t);
    }
    t = map_1_0(n_1, t);
    t_9 = t;
    t = (ATerm) ATinsert(CheckATermList(t_9), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, r_9), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_n_23)))));
  }
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
  i_10 = t;
  t = SSL_address(i_10);
  h_10 = t;
  t = SSL_int_to_string(h_10);
  j_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_23, j_10);
  t = conc_strings_0_0(t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL;
  l_10 = t;
  t = SSL_address(l_10);
  k_10 = t;
  t = SSL_int_to_string(k_10);
  m_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_23, m_10);
  t = conc_strings_0_0(t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = union_1_0(w_1, t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm o_10 = NULL;
  if(match_cons(t, sym__2))
    {
      o_10 = ATgetArgument(t, 0);
      if((o_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = union_1_0(d_2, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm d_26 = NULL;
  if(match_cons(t, sym__2))
    {
      d_26 = ATgetArgument(t, 0);
      if((d_26 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm term_to_graph_0_0 (ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,g_10 = NULL;
  a_10 = t;
  t = SSL_address(a_10);
  c_10 = t;
  t = SSL_int_to_string(c_10);
  d_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_23, d_10);
  t = conc_strings_0_0(t);
  b_10 = t;
  t = a_10;
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = map_1_0(o_1, t);
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        t = SRTS_all(p_1, t);
      }
    e_10 = t;
    t = a_10;
    {
      ATerm t_23 = t;
      int w_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = foldr_3_0(q_1, u_1, term_to_graph_0_0, t);
          ;
          LocalPopChoice(w_23);
        }
      else
        {
          t = t_23;
          {
            ATerm l_25 = NULL;
            t = SSL_explode_term(a_10);
            if(match_cons(t, sym__2))
              {
                ATerm x_23 = ATgetArgument(t, 0);
                l_25 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_25;
            t = foldr_3_0(x_1, b_2, term_to_graph_0_0, t);
          }
        }
      g_10 = t;
      t = (ATerm) ATinsert(CheckATermList(g_10), (ATerm) ATmakeAppl(sym__2, b_10, e_10));
    }
  }
  return(t);
}
ATerm union_1_0 (ATerm g_83 (ATerm), ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL;
  if(match_cons(t, sym__2))
    {
      u_10 = ATgetArgument(t, 0);
      v_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_10;
  {
    ATerm w_10 (ATerm t)
    {
      ATerm y_23 = t;
      int z_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = v_10;
          ;
          LocalPopChoice(z_23);
        }
      else
        {
          t = y_23;
          {
            ATerm b_24 = t;
            int c_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_26 = NULL,f_26 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    e_26 = ATgetFirst((ATermList) t);
                    f_26 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = v_10;
                {
                  ATerm e_2 (ATerm t)
                  {
                    ATerm g_26 = NULL;
                    g_26 = t;
                    t = (ATerm) ATmakeAppl(sym__2, e_26, g_26);
                    t = g_83(t);
                    return(t);
                  }
                  t = fetch_1_0(e_2, t);
                  t = f_26;
                  t = w_10(t);
                }
                ;
                LocalPopChoice(c_24);
              }
            else
              {
                t = b_24;
                t = Cons_2_0(_id, w_10, t);
              }
          }
        }
      return(t);
    }
    t = w_10(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm t)
{
  ATerm d_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_85(t);
      ;
      LocalPopChoice(h_24);
    }
  else
    {
      t = d_24;
      {
        ATerm b_11 = NULL,c_11 = NULL,g_11 = NULL,h_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_11 = ATgetFirst((ATermList) t);
            c_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_11;
        t = w_85(t);
        g_11 = t;
        t = c_11;
        t = foldr_3_0(u_85, v_85, w_85, t);
        h_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_11, h_11);
        t = v_85(t);
      }
    }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_91 (ATerm), ATerm t)
{
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_11 = NULL,m_11 = NULL;
      k_11 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm m_24 = t;
        int n_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_26 = NULL;
            t = eval_config_0_0(t);
            m_26 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), m_26);
            t = m_26;
            ;
            LocalPopChoice(n_24);
          }
        else
          {
            t = m_24;
          }
        m_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_11, term_r_15);
        t = geq_0_0(t);
        t = k_11;
        t = b_91(t);
      }
      ;
      LocalPopChoice(j_24);
    }
  else
    {
      t = i_24;
    }
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm n_26 = NULL;
  n_26 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_26), (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue))));
  t = n_26;
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm s_11 = NULL,u_11 = NULL;
  s_11 = t;
  t = new_0_0(t);
  u_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_11, s_11);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL;
  v_11 = t;
  t = new_0_0(t);
  w_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_11, v_11);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL;
  s_26 = t;
  t = SSL_explode_term(s_26);
  if(match_cons(t, sym__2))
    {
      ATerm o_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_24 = ATgetArgument(t, 1);
        if(((ATgetType(p_24) == AT_LIST) && !(ATisEmpty(p_24))))
          {
            t_26 = ATgetFirst((ATermList) p_24);
            {
              ATerm q_24 = (ATerm) ATgetNext((ATermList) p_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_26;
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL;
  w_26 = t;
  t = SSL_explode_term(w_26);
  if(match_cons(t, sym__2))
    {
      ATerm x_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_24 = ATgetArgument(t, 1);
        if(((ATgetType(z_24) == AT_LIST) && !(ATisEmpty(z_24))))
          {
            x_26 = ATgetFirst((ATermList) z_24);
            {
              ATerm d_25 = (ATerm) ATgetNext((ATermList) z_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_26;
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = union_1_0(r_2, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm x_11 = NULL;
  if(match_cons(t, sym__2))
    {
      x_11 = ATgetArgument(t, 0);
      if((x_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = union_1_0(u_2, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm h_27 = NULL;
  if(match_cons(t, sym__2))
    {
      h_27 = ATgetArgument(t, 0);
      if((h_27 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm term_to_tree_0_0 (ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL;
  t = if_verbose5_1_0(f_2, t);
  n_11 = t;
  t = new_0_0(t);
  o_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_11, n_11);
  {
    ATerm z_11 (ATerm t)
    {
      ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL,b_27 = NULL;
      ATerm g_2 (ATerm t)
      {
        ATerm g_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(h_2, t);
            ;
            LocalPopChoice(h_25);
          }
        else
          {
            t = g_25;
            t = SRTS_all(i_2, t);
          }
        return(t);
      }
      t = _2_0(_id, g_2, t);
      p_11 = t;
      {
        ATerm k_2 (ATerm t)
        {
          ATerm i_25 = t;
          int j_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map_1_0(l_2, t);
              ;
              LocalPopChoice(j_25);
            }
          else
            {
              t = i_25;
              t = SRTS_all(m_2, t);
            }
          return(t);
        }
        t = _2_0(_id, k_2, t);
        q_11 = t;
        t = SSL_explode_term(p_11);
        if(match_cons(t, sym__2))
          {
            ATerm k_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_25) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm q_25 = ATgetArgument(t, 1);
              if(((ATgetType(q_25) == AT_LIST) && !(ATisEmpty(q_25))))
                {
                  ATerm r_25 = ATgetFirst((ATermList) q_25);
                  ATerm s_25 = (ATerm) ATgetNext((ATermList) q_25);
                  if(((ATgetType(s_25) == AT_LIST) && !(ATisEmpty(s_25))))
                    {
                      b_27 = ATgetFirst((ATermList) s_25);
                      {
                        ATerm t_25 = (ATerm) ATgetNext((ATermList) s_25);
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_27;
        {
          ATerm v_25 = t;
          int w_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = foldr_3_0(p_2, q_2, z_11, t);
              ;
              LocalPopChoice(w_25);
            }
          else
            {
              t = v_25;
              {
                ATerm d_27 = NULL;
                t = SSL_explode_term(b_27);
                if(match_cons(t, sym__2))
                  {
                    ATerm a_26 = ATgetArgument(t, 0);
                    d_27 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_27;
                t = foldr_3_0(s_2, t_2, z_11, t);
              }
            }
          r_11 = t;
          t = (ATerm) ATinsert(CheckATermList(r_11), q_11);
        }
      }
      return(t);
    }
    t = z_11(t);
  }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ListEdgeToDot_0_0(t);
      ;
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      t = EdgeToDot_0_0(t);
    }
  return(t);
}
ATerm to_adot_0_0 (ATerm t)
{
  ATerm t_27 = NULL,a_12 = NULL;
  a_12 = t;
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue)));
        {
          ATerm j_26 = t;
          int k_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_27 = NULL;
              t = eval_config_0_0(t);
              l_27 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue)), l_27);
              t = l_27;
              ;
              LocalPopChoice(k_26);
            }
          else
            {
              t = j_26;
            }
          t = a_12;
          t = term_to_tree_0_0(t);
        }
        ;
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue)));
        {
          ATerm l_26 = t;
          int o_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_27 = NULL;
              t = eval_config_0_0(t);
              p_27 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue)), p_27);
              t = p_27;
              ;
              LocalPopChoice(o_26);
            }
          else
            {
              t = l_26;
            }
          t = a_12;
          t = term_to_graph_0_0(t);
        }
      }
    t = map_1_0(v_2, t);
    t = concat_0_0(t);
    t_27 = t;
    t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_p_26, t_27);
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm i_75 (ATerm), ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
  if(match_cons(t, sym__2))
    {
      d_12 = ATgetArgument(t, 0);
      e_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_12, term_q_26);
  t = open_stream_0_0(t);
  f_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_12, e_12);
  t = i_75(t);
  t = fclose_0_0(t);
  t = e_12;
  return(t);
}
ATerm assert_1_0 (ATerm t_89 (ATerm), ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
  if(match_cons(t, sym__2))
    {
      g_12 = ATgetArgument(t, 0);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_89(t);
  i_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_12, g_12, h_12);
  t = table_push_0_0(t);
  {
    ATerm r_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(i_12, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(u_26);
      }
    else
      {
        t = r_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_12 = ATgetFirst((ATermList) t);
        k_12 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(i_12, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(k_12), (ATerm) ATinsert(CheckATermList(j_12), g_12)));
    t = (ATerm) ATmakeAppl(sym__2, g_12, h_12);
  }
  return(t);
}
ATerm z_12 (ATerm o_12, ATerm t)
{
  t = o_12;
  {
    ATerm v_26 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_26 = ATgetArgument(t, 0);
            ATerm z_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_26;
      }
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
    t = (ATerm) ATmakeAppl(sym__2, o_12, term_q_26);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm a_13 (ATerm r_12, ATerm s_12, ATerm t_12, ATerm t)
{
  t = SSL_open_file(r_12, s_12);
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL;
  w_12 = t;
  if(match_cons(t, sym__2))
    {
      x_12 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
      {
        ATerm a_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_12(w_12, t);
            ;
            LocalPopChoice(c_27);
          }
        else
          {
            t = a_27;
            t = a_13(x_12, y_12, w_12, t);
          }
      }
    }
  else
    {
      t = z_12(w_12, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm c_13 = NULL;
  t = term_e_27;
  t = new_0_0(t);
  c_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_13, term_f_27);
  t = conc_strings_0_0(t);
  {
    ATerm g_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_13 = NULL;
        f_13 = t;
        t = SSL_access(f_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(i_27);
      }
    else
      {
        t = g_27;
      }
  }
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_j_27;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm i_13 = NULL;
  t = new_file_0_0(t);
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_13, term_q_26);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, i_13, term_e_27);
  t = assert_1_0(w_2, t);
  t = i_13;
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_27 = ATgetArgument(t, 0);
      if(match_cons(k_27, sym_Stream_1))
        {
          m_13 = ATgetArgument(k_27, 0);
        }
      else
        _fail(t);
      n_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(m_13, n_13);
  o_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_13);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm j_13 = NULL,l_13 = NULL;
  j_13 = t;
  t = xtc_new_file_0_0(t);
  l_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_13, j_13);
  t = WriteToFile_1_0(x_2, t);
  t = SSL_close_file(l_13);
  t = (ATerm) ATmakeAppl(sym_FILE_1, l_13);
  return(t);
}
ATerm c_14 (ATerm w_13, ATerm t)
{
  t = SSL_fclose(w_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL;
  a_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_13 = ATgetArgument(t, 0);
      {
        ATerm m_27 = t;
        int n_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_13);
            ;
            LocalPopChoice(n_27);
          }
        else
          {
            t = m_27;
            t = c_14(a_14, t);
          }
      }
    }
  else
    {
      t = c_14(a_14, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_14 = NULL;
  t = SSL_stdin_stream();
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_14 = NULL;
  t = SSL_stdout_stream();
  e_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_14 = NULL;
  t = SSL_stderr_stream();
  f_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_14);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm r_14 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      r_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14;
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm v_14 = NULL;
  v_14 = t;
  t = SSL_is_string(v_14);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_27 = ATgetArgument(t, 0);
      ATerm q_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_28 = NULL,j_28 = NULL;
        i_28 = t;
        t = SSL_explode_term(i_28);
        if(match_cons(t, sym__2))
          {
            ATerm u_27 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_27) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm v_27 = ATgetArgument(t, 1);
              if(((ATgetType(v_27) == AT_LIST) && !(ATisEmpty(v_27))))
                {
                  j_28 = ATgetFirst((ATermList) v_27);
                  {
                    ATerm w_27 = (ATerm) ATgetNext((ATermList) v_27);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = j_28;
        if(match_cons(t, sym_stderr_0))
          {
            t = j_28;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = j_28;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = j_28;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(s_27);
      }
    else
      {
        t = r_27;
        {
          ATerm x_27 = t;
          int y_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
              t = _2_0(y_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  m_14 = ATgetArgument(t, 0);
                  n_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(m_14, n_14);
              o_14 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, o_14);
              ;
              LocalPopChoice(y_27);
            }
          else
            {
              t = x_27;
              {
                ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL;
                t = _2_0(z_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    s_14 = ATgetArgument(t, 0);
                    t_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(s_14, t_14);
                u_14 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, u_14);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_14 = NULL;
      z_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_14, term_b_28);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(a_28);
    }
  else
    {
      t = z_27;
      {
        ATerm k_28 = NULL;
        k_28 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_28), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = k_28;
        _fail(t);
      }
    }
  w_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(y_14);
  x_14 = t;
  t = w_14;
  t = fclose_0_0(t);
  t = x_14;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL;
  g_15 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_c_28;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          h_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(h_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm t_93 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = t_93(t);
  t = write_to_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL;
  v_15 = t;
  if(match_cons(t, sym_FILE_1))
    {
      w_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_28 = NULL;
        t = v_15;
        t = k_0(t);
        v_28 = t;
        {
          ATerm f_28 = t;
          int g_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(g_28);
            }
          else
            {
              t = f_28;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(w_15, v_28);
          t = (ATerm) ATmakeAppl(sym_FILE_1, w_15);
        }
        ;
        LocalPopChoice(e_28);
      }
    else
      {
        t = d_28;
        {
          ATerm h_28 = t;
          int l_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_29 = NULL;
              t = v_15;
              t = k_0(t);
              b_29 = t;
              {
                ATerm m_28 = t;
                if((PushChoice() == 0))
                  {
                    ATerm n_28 = t;
                    int o_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(o_28);
                      }
                    else
                      {
                        t = n_28;
                        {
                          ATerm p_28 = t;
                          int q_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(q_28);
                            }
                          else
                            {
                              t = p_28;
                              {
                                ATerm c_29 = NULL;
                                c_29 = t;
                                if((w_15 != t))
                                  {
                                    _fail(t);
                                  }
                                t = c_29;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_28;
                  }
                t = SSL_copy(w_15, b_29);
                t = (ATerm) ATmakeAppl(sym_FILE_1, w_15);
              }
              ;
              LocalPopChoice(l_28);
            }
          else
            {
              t = h_28;
              t = v_15;
              t = k_0(t);
              if((w_15 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_15);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm c_16 = NULL,e_16 = NULL,g_16 = NULL;
  if(match_cons(t, sym__2))
    {
      c_16 = ATgetArgument(t, 0);
      e_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_16, e_16);
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_29 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm t_28 = ATgetArgument(t, 0);
            ATerm u_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(c_16, e_16);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_28 = ATgetFirst((ATermList) t);
            g_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_29;
        ;
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
        t = (ATerm) ATempty;
      }
    g_16 = t;
    t = SSL_table_put(c_16, e_16, g_16);
    t = (ATerm) ATmakeAppl(sym__2, c_16, e_16);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm q_89 (ATerm), ATerm t)
{
  ATerm m_16 = NULL,o_16 = NULL,q_16 = NULL,s_16 = NULL;
  m_16 = t;
  t = q_89(t);
  o_16 = t;
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(o_16, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_16 = ATgetFirst((ATermList) t);
        q_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(o_16, (ATerm)ATmakeAppl(sym_Scopes_0), q_16);
    t = s_16;
    {
      ATerm a_3 (ATerm t)
      {
        ATerm t_16 = NULL;
        t_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_16, t_16);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(a_3, t);
      t = m_16;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm t)
{
  ATerm z_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_90(t);
      t = m_90(t);
      ;
      LocalPopChoice(a_29);
    }
  else
    {
      t = z_28;
      t = m_90(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_89 (ATerm), ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
  w_16 = t;
  t = p_89(t);
  x_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_16, term_d_29);
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_29 = ATgetArgument(t, 0);
            ATerm i_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(x_16, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
        t = (ATerm) ATempty;
      }
    y_16 = t;
    t = SSL_table_put(x_16, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(y_16), (ATerm) ATempty));
    t = w_16;
  }
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_j_27;
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_17 = NULL;
      l_17 = t;
      t = SSL_remove(l_17);
      ;
      LocalPopChoice(k_29);
    }
  else
    {
      t = j_29;
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_j_27;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm u_92 (ATerm), ATerm t)
{
  ATerm g_17 = NULL;
  t = begin_scope_1_0(b_3, t);
  {
    ATerm c_3 (ATerm t)
    {
      ATerm h_17 = NULL;
      h_17 = t;
      {
        ATerm l_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(m_29);
          }
        else
          {
            t = l_29;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((g_17 != NULL) && (g_17 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              g_17 = ATgetFirst((ATermList) t);
            {
              ATerm o_29 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(g_17);
        t = map_1_0(d_3, t);
        t = h_17;
        t = end_scope_1_0(e_3, t);
      }
      return(t);
    }
    t = restore_always_2_0(u_92, c_3, t);
  }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm p_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
      {
        ATerm s_29 = t;
        int t_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_29 = NULL;
            t = eval_config_0_0(t);
            r_29 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), r_29);
            t = r_29;
            ;
            LocalPopChoice(t_29);
          }
        else
          {
            t = s_29;
          }
      }
      ;
      LocalPopChoice(q_29);
    }
  else
    {
      t = p_29;
      t = term_u_29;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm v_92 (ATerm), ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_17 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm c_30 = t;
          int d_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_29 = NULL;
              t = eval_config_0_0(t);
              n_29 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), n_29);
              t = n_29;
              ;
              LocalPopChoice(d_30);
            }
          else
            {
              t = c_30;
            }
          n_17 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, n_17);
        }
        ;
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
        t = term_c_28;
      }
    t = v_92(t);
    t = copy_to_1_0(i_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(h_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL;
  o_17 = t;
  t = term_e_27;
  t = whoami_0_0(t);
  p_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), p_17), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = o_17;
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm r_17 = NULL;
  r_17 = t;
  if(match_string(t, "-k"))
    {
      t = r_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_17;
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL;
  s_17 = t;
  t = SSL_string_to_int(s_17);
  t_17 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), t_17);
  t = s_17;
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_e_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_3, k_3, l_3, t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm v_17 = NULL;
  v_17 = t;
  if(match_string(t, "-S"))
    {
      t = v_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_17;
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_g_30;
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm p_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL;
  y_17 = t;
  t = SSL_string_to_int(y_17);
  z_17 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), z_17);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_17);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_i_30;
  return(t);
}
ATerm t_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_j_30;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_k_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_3, n_3, o_3, t);
      ;
      LocalPopChoice(m_30);
    }
  else
    {
      t = l_30;
      {
        ATerm n_30 = t;
        int p_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_3, q_3, s_3, t);
            ;
            LocalPopChoice(p_30);
          }
        else
          {
            t = n_30;
            t = Option_3_0(t_3, u_3, v_3, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm d_18 = NULL,g_18 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_18 = NULL;
      t = term_e_27;
      t = d_0(t);
      h_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_30, term_r_30, h_18);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm l_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_18 = ATgetFirst((ATermList) t);
          g_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_18;
      t = a_0(t);
      t = term_e_27;
      t = b_0(t);
      l_18 = t;
      t = (ATerm) ATinsert(CheckATermList(g_18), l_18);
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm p_18 = NULL;
  p_18 = t;
  if(match_string(t, "-o"))
    {
      t = p_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_18;
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm q_18 = NULL;
  q_18 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), q_18);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_18);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_t_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_3, x_3, y_3, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL,y_18 = NULL,a_19 = NULL;
  if(match_cons(t, sym__3))
    {
      v_18 = ATgetArgument(t, 0);
      w_18 = ATgetArgument(t, 1);
      y_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_18, w_18);
  {
    ATerm u_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_30 = ATgetArgument(t, 0);
            ATerm y_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(v_18, w_18);
        ;
        LocalPopChoice(v_30);
      }
    else
      {
        t = u_30;
        t = (ATerm) ATempty;
      }
    a_19 = t;
    t = SSL_table_put(v_18, w_18, (ATerm) ATinsert(CheckATermList(a_19), y_18));
    t = (ATerm) ATmakeAppl(sym__3, v_18, w_18, y_18);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_19 = NULL;
      t = term_e_27;
      t = j_0(t);
      o_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_30, term_r_30, o_19);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_19 = ATgetFirst((ATermList) t);
          l_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_19;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_19 = ATgetFirst((ATermList) t);
          n_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_19;
      t = h_0(t);
      t = m_19;
      t = i_0(t);
      s_19 = t;
      t = (ATerm) ATinsert(CheckATermList(n_19), s_19);
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm u_19 = NULL;
  u_19 = t;
  if(match_string(t, "-i"))
    {
      t = u_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_19;
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm v_19 = NULL;
  v_19 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), v_19);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_19);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_z_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_3, a_4, c_4, t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--graph", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_b_31;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_c_31;
  return(t);
}
ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tree", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_31;
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_g_31;
  return(t);
}
ATerm term_to_adot_options_0_0 (ATerm t)
{
  ATerm h_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_4, f_4, h_4, t);
      ;
      LocalPopChoice(i_31);
    }
  else
    {
      t = h_31;
      t = Option_3_0(j_4, k_4, l_4, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_19 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_27;
  t = whoami_0_0(t);
  w_19 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), w_19));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm j_31 = t;
    int k_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_29 = NULL;
        t = eval_config_0_0(t);
        v_29 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_29);
        t = v_29;
        ;
        LocalPopChoice(k_31);
      }
    else
      {
        t = j_31;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm s_85 (ATerm), ATerm t_85 (ATerm), ATerm t)
{
  ATerm l_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_85(t);
      ;
      LocalPopChoice(m_31);
    }
  else
    {
      t = l_31;
      {
        ATerm z_19 = NULL,a_20 = NULL,e_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_19 = ATgetFirst((ATermList) t);
            a_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_20;
        t = foldr_2_0(s_85, t_85, t);
        e_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_19, e_20);
        t = t_85(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_f_30;
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL;
  if(match_cons(t, sym__2))
    {
      a_30 = ATgetArgument(t, 0);
      b_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(a_30, b_30);
        ;
        LocalPopChoice(o_31);
      }
    else
      {
        t = n_31;
        t = SSL_addr(a_30, b_30);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_20 = NULL,w_29 = NULL,x_29 = NULL;
  t = times_0_0(t);
  w_29 = t;
  t = SSL_explode_term(w_29);
  if(match_cons(t, sym__2))
    {
      ATerm p_31 = ATgetArgument(t, 0);
      x_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_29;
  t = foldr_2_0(o_4, r_4, t);
  h_20 = t;
  t = SSL_TicksToSeconds(h_20);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,a_21 = NULL;
  v_20 = t;
  if(match_cons(t, sym__2))
    {
      w_20 = ATgetArgument(t, 0);
      a_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_21;
        if((w_20 != t))
          {
            _fail(t);
          }
        t = v_20;
        ;
        LocalPopChoice(r_31);
      }
    else
      {
        t = q_31;
        t = v_20;
        {
          ATerm s_31 = t;
          int t_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_20, a_21);
              ;
              LocalPopChoice(t_31);
            }
          else
            {
              t = s_31;
              t = SSL_gtr(w_20, a_21);
            }
          t = (ATerm) ATmakeAppl(sym__2, w_20, a_21);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_90 (ATerm), ATerm t)
{
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_21 = NULL,g_21 = NULL;
      e_21 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm w_31 = t;
        int y_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_30 = NULL;
            t = eval_config_0_0(t);
            o_30 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), o_30);
            t = o_30;
            ;
            LocalPopChoice(y_31);
          }
        else
          {
            t = w_31;
          }
        g_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_21, term_e_8);
        t = geq_0_0(t);
        t = e_21;
        t = x_90(t);
      }
      ;
      LocalPopChoice(v_31);
    }
  else
    {
      t = u_31;
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm l_21 = NULL,n_21 = NULL;
  t = run_time_0_0(t);
  l_21 = t;
  t = term_e_27;
  t = whoami_0_0(t);
  n_21 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), l_21), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), n_21));
  t = (ATerm) ATmakeAppl(sym__2, term_a_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_31), l_21), term_x_7), n_21));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm a_32 = t;
  int b_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(b_32);
    }
  else
    {
      t = a_32;
      {
        ATerm c_32 = t;
        int d_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(d_32);
          }
        else
          {
            t = c_32;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_94 (ATerm), ATerm t)
{
  ATerm e_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm g_32 = t;
        int h_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_30 = NULL;
            t = eval_config_0_0(t);
            s_30 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), s_30);
            t = s_30;
            ;
            LocalPopChoice(h_32);
          }
        else
          {
            t = g_32;
          }
      }
      ;
      LocalPopChoice(f_32);
    }
  else
    {
      t = e_32;
      t = fetch_1_0(t_4, t);
    }
  t = w_94(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_21 = ATgetFirst((ATermList) t);
      q_21 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_21 = NULL,v_21 = NULL;
        t = q_21;
        t = g_0(t);
        u_21 = t;
        t = p_21;
        t = f_0(t);
        v_21 = t;
        t = q_21;
        {
          ATerm v_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(u_21), v_21);
            return(t);
          }
          t = reverse_acc_2_0(f_0, v_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_27;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm s_70 (ATerm), ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
  z_21 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_21);
  w_21 = t;
  t = x_21;
  t = s_70(t);
  y_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, y_21), w_21);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm c_22 = NULL;
  c_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_22), term_i_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_32 = t;
  int k_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm l_32 = t;
        int m_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_30 = NULL;
            t = eval_config_0_0(t);
            w_30 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_30);
            t = w_30;
            ;
            LocalPopChoice(m_32);
          }
        else
          {
            t = l_32;
          }
      }
      ;
      LocalPopChoice(k_32);
    }
  else
    {
      t = j_32;
      t = fetch_1_0(w_4, t);
    }
  t = term_n_32;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, y_4, t);
  t = map_1_0(z_4, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm t_70 (ATerm), ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL;
  g_22 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      e_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_22);
  d_22 = t;
  t = e_22;
  t = t_70(t);
  f_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, f_22), d_22);
  return(t);
}
ATerm fetch_1_0 (ATerm m_79 (ATerm), ATerm t)
{
  ATerm j_22 (ATerm t)
  {
    ATerm o_32 = t;
    int q_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(m_79, _id, t);
        ;
        LocalPopChoice(q_32);
      }
    else
      {
        t = o_32;
        t = Cons_2_0(_id, j_22, t);
      }
    return(t);
  }
  t = j_22(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL;
  l_22 = t;
  {
    ATerm r_32 = t;
    int s_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_22;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_32 = ATgetFirst((ATermList) t);
                ATerm u_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_22;
          }
        ;
        LocalPopChoice(s_32);
      }
    else
      {
        t = r_32;
        t = (ATerm) ATinsert(ATempty, l_22);
      }
    m_22 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), m_22);
    t = l_22;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm v_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_31 = NULL;
        t = eval_config_0_0(t);
        a_31 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), a_31);
        t = a_31;
        ;
        LocalPopChoice(x_32);
      }
    else
      {
        t = v_32;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_32 = t;
  int z_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(z_32);
    }
  else
    {
      t = y_32;
      {
        ATerm s_22 = NULL,t_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_22 = ATgetFirst((ATermList) t);
            t_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_22;
        {
          ATerm a_5 (ATerm t)
          {
            t = t_22;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(a_5, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm s_79 (ATerm), ATerm t)
{
  ATerm z_22 (ATerm t)
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, z_22, t);
        ;
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_79(t);
      }
    return(t);
  }
  t = z_22(t);
  return(t);
}
ATerm _2_0 (ATerm x_60 (ATerm), ATerm y_60 (ATerm), ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL;
  f_23 = t;
  if(match_cons(t, sym__2))
    {
      b_23 = ATgetArgument(t, 0);
      c_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_23);
  a_23 = t;
  t = b_23;
  t = x_60(t);
  d_23 = t;
  t = c_23;
  t = y_60(t);
  e_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, d_23, e_23), a_23);
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm l_23 = NULL;
  l_23 = t;
  t = SSL_explode_string(l_23);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm m_23 = NULL;
  m_23 = t;
  t = SSL_explode_string(m_23);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm j_23 = NULL;
  t = _2_0(b_5, c_5, t);
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_23 = NULL,p_23 = NULL;
        if(match_cons(t, sym__2))
          {
            o_23 = ATgetArgument(t, 0);
            p_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_23;
        {
          ATerm e_5 (ATerm t)
          {
            t = p_23;
            return(t);
          }
          t = at_end_1_0(e_5, t);
        }
        ;
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
        {
          ATerm d_31 = NULL,e_31 = NULL;
          d_31 = t;
          t = SSL_explode_term(d_31);
          if(match_cons(t, sym__2))
            {
              ATerm e_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) e_33) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              e_31 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_31;
          t = concat_0_0(t);
        }
      }
    j_23 = t;
    t = SSL_implode_string(j_23);
  }
  return(t);
}
ATerm map_1_0 (ATerm b_79 (ATerm), ATerm t)
{
  ATerm u_23 (ATerm t)
  {
    ATerm f_33 = t;
    int g_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(g_33);
      }
    else
      {
        t = f_33;
        t = Cons_2_0(b_79, u_23, t);
      }
    return(t);
  }
  t = u_23(t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm h_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_33);
    }
  else
    {
      t = h_33;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm j_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_24 = NULL;
      a_24 = t;
      t = SSL_is_string(a_24);
      ;
      LocalPopChoice(k_33);
    }
  else
    {
      t = j_33;
      {
        ATerm l_33 = t;
        int m_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_5, t);
            ;
            LocalPopChoice(m_33);
          }
        else
          {
            t = l_33;
            {
              ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
              e_24 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_24 = ATgetArgument(t, 0);
                  t = f_24;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_24 = ATgetArgument(t, 0);
                      t = f_24;
                      {
                        ATerm n_33 = t;
                        int o_33 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), f_24);
                            {
                              ATerm p_33 = t;
                              int q_33 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm x_31 = NULL;
                                  t = eval_config_0_0(t);
                                  x_31 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), f_24, x_31);
                                  t = x_31;
                                  ;
                                  LocalPopChoice(q_33);
                                }
                              else
                                {
                                  t = p_33;
                                }
                            }
                            ;
                            LocalPopChoice(o_33);
                          }
                        else
                          {
                            t = n_33;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_24), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = f_24;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm k_24 = NULL,l_24 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_24 = ATgetArgument(t, 0);
                          g_24 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_24;
                      t = eval_config_0_0(t);
                      k_24 = t;
                      t = g_24;
                      t = eval_config_0_0(t);
                      l_24 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_24, l_24);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_t_33;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_u_33;
  return(t);
}
ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_v_33;
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_w_33;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_33 = t;
  int y_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_5, h_5, i_5, t);
      ;
      LocalPopChoice(y_33);
    }
  else
    {
      t = x_33;
      t = Option_3_0(j_5, m_5, o_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_65 (ATerm), ATerm n_65 (ATerm), ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL;
  w_24 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_24 = ATgetFirst((ATermList) t);
      t_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_24);
  r_24 = t;
  t = s_24;
  t = m_65(t);
  u_24 = t;
  t = t_24;
  t = n_65(t);
  v_24 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(v_24), u_24), r_24);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm c_25 = NULL;
  c_25 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_25);
  t = (ATerm) ATmakeAppl(sym_Program_1, c_25);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_96 (ATerm), ATerm t)
{
  ATerm b_25 = NULL;
  b_25 = t;
  {
    ATerm z_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_34;
        t = u_96(t);
        ;
        LocalPopChoice(a_34);
      }
    else
      {
        t = z_33;
      }
    t = b_25;
    {
      ATerm q_5 (ATerm t)
      {
        ATerm c_34 = t;
        int d_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_34 = t;
            int f_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(f_34);
              }
            else
              {
                t = e_34;
                t = u_96(t);
                t = Cons_2_0(_id, q_5, t);
              }
            ;
            LocalPopChoice(d_34);
          }
        else
          {
            t = c_34;
            {
              ATerm e_25 = NULL,f_25 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_25 = ATgetFirst((ATermList) t);
                  f_25 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(f_25), (ATerm) ATmakeAppl(sym_Undefined_1, e_25));
            }
          }
        return(t);
      }
      t = Cons_2_0(p_5, q_5, t);
    }
  }
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm p_25 = NULL;
  p_25 = t;
  if(match_string(t, "--help"))
    {
      t = p_25;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_25;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_25;
        }
    }
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_g_34;
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_h_34;
  return(t);
}
ATerm d_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_96 (ATerm), ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
  m_25 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = m_25;
  {
    ATerm y_5 (ATerm t)
    {
      ATerm i_34 = t;
      int j_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_96(t);
          ;
          LocalPopChoice(j_34);
        }
      else
        {
          t = i_34;
          {
            ATerm k_34 = t;
            int l_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_5, b_6, c_6, t);
                ;
                LocalPopChoice(l_34);
              }
            else
              {
                t = k_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_5, t);
    {
      ATerm m_34 = t;
      int n_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_25 = NULL;
          u_25 = t;
          {
            ATerm o_34 = t;
            int p_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = u_25;
                {
                  ATerm q_34 = t;
                  int r_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm s_34 = t;
                        int t_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm p_32 = NULL;
                            t = eval_config_0_0(t);
                            p_32 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), p_32);
                            t = p_32;
                            ;
                            LocalPopChoice(t_34);
                          }
                        else
                          {
                            t = s_34;
                          }
                      }
                      ;
                      LocalPopChoice(r_34);
                    }
                  else
                    {
                      t = q_34;
                      t = fetch_1_0(d_6, t);
                    }
                  t = u_25;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(p_34);
              }
            else
              {
                t = o_34;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm u_34 = t;
                  int v_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_32 = NULL;
                      t = eval_config_0_0(t);
                      w_32 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), w_32);
                      t = w_32;
                      ;
                      LocalPopChoice(v_34);
                    }
                  else
                    {
                      t = u_34;
                    }
                  t = u_25;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(n_34);
        }
      else
        {
          t = m_34;
          {
            ATerm w_34 = t;
            int x_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_6 (ATerm t)
                {
                  ATerm g_6 (ATerm t)
                  {
                    if(((n_25 != NULL) && (n_25 != t)))
                      _fail(t);
                    else
                      n_25 = t;
                    return(t);
                  }
                  t = Undefined_1_0(g_6, t);
                  return(t);
                }
                t = fetch_1_0(f_6, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(n_25)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_a_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_25)), term_y_34));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(x_34);
              }
            else
              {
                t = w_34;
              }
          }
        }
      o_25 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = o_25;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm b_95 (ATerm), ATerm t)
{
  ATerm x_25 = NULL;
  t = parse_options_1_0(y_94, t);
  x_25 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), x_25);
  t = x_25;
  t = a_95(t);
  {
    ATerm z_34 = t;
    int a_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_94, t);
        ;
        LocalPopChoice(a_35);
      }
    else
      {
        t = z_34;
        {
          ATerm b_35 = t;
          int c_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_95(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(c_35);
            }
          else
            {
              t = b_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm d_35 = t;
  int e_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_to_adot_options_0_0(t);
      ;
      LocalPopChoice(e_35);
    }
  else
    {
      t = d_35;
      {
        ATerm f_35 = t;
        int g_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(g_35);
          }
        else
          {
            t = f_35;
            {
              ATerm h_35 = t;
              int i_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(i_35);
                }
              else
                {
                  t = h_35;
                  {
                    ATerm j_35 = t;
                    int k_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(s_6, t_6, w_6, t);
                        ;
                        LocalPopChoice(k_35);
                      }
                    else
                      {
                        t = j_35;
                        {
                          ATerm l_35 = t;
                          int m_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(m_35);
                            }
                          else
                            {
                              t = l_35;
                              t = keep_option_0_0(t);
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
ATerm p_6 (ATerm t)
{
  t = xtc_io_1_0(x_6, t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_n_35;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_o_35;
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = xtc_io_transform_1_0(to_adot_0_0, t);
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_35 = t;
        int s_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(s_35);
          }
        else
          {
            t = r_35;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(q_35);
        t = xtc_transform_file_2_0(z_6, a_7, t);
      }
    else
      {
        t = p_35;
        t = xtc_transform_term_2_0(g_7, h_7, t);
      }
    {
      ATerm t_35 = t;
      int u_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_35 = t;
          int w_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(w_35);
            }
          else
            {
              t = v_35;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(u_35);
          t = xtc_transform_file_2_0(j_7, n_7, t);
        }
      else
        {
          t = t_35;
          t = xtc_transform_term_2_0(o_7, p_7, t);
        }
    }
  }
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_x_35;
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm y_25 = NULL;
  t = term_y_35;
  t = xtc_find_0_0(t);
  y_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_25), term_z_35);
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_x_35;
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm z_25 = NULL;
  t = term_y_35;
  t = xtc_find_0_0(t);
  z_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_25), term_z_35);
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_a_36;
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_a_36;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm term_to_dot_0_0 (ATerm t)
{
  t = option_wrap_4_0(l_6, default_usage_0_0, _id, p_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = term_to_dot_0_0(t);
  return(t);
}
