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
ATerm term_y_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_w_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_z_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_z_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_a_31;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_j_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_x_29;
ATerm term_d_29;
ATerm term_c_28;
ATerm term_i_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_s_26;
ATerm term_p_26;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_l_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_g_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_j_21;
ATerm term_h_21;
ATerm term_y_19;
ATerm term_a_18;
ATerm term_o_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_d_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_w_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
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
ATerm term_h_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
void init_constant_terms (void)
{
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_8, term_i_8, term_j_8);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_8, term_m_8, term_n_8);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_8, term_q_8, term_r_8);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_8, term_u_8, term_v_8);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_8, term_y_8, term_a_9);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_9, term_d_9, term_e_9);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_9, term_h_9, term_i_9);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_9, term_t_9, term_u_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_9, term_y_9, term_z_9);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_10, term_p_10, term_q_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_10, term_w_10, term_x_10);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_11, term_e_11, term_h_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_w_11, term_a_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_l_12, term_m_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_12, term_t_12, term_u_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_f_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_13, term_o_13, term_p_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_s_13, term_t_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_x_13, term_y_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_d_14, term_i_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_l_14, term_y_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_b_15, term_c_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_g_15, term_i_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_p_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_s_15, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_x_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_d_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_i_16, term_k_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_AttrId_2, term_w_22, term_l_23);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_30);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym__3, term_r_33, term_s_33, term_d_27);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Dot-pretty.pp", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_term_2_0 (ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm d_73 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm m_67 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm a_64 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm i_84 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm k_84 (ATerm), ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm t_84 (ATerm), ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm k_80 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm e_82 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm EdgeToDot_0_0 (ATerm);
ATerm ListEdgeToDot_0_0 (ATerm);
ATerm term_to_graph_0_0 (ATerm);
ATerm union_1_0 (ATerm u_76 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm j_79 (ATerm), ATerm k_79 (ATerm), ATerm l_79 (ATerm), ATerm);
ATerm if_verbose5_1_0 (ATerm j_84 (ATerm), ATerm);
ATerm term_to_tree_0_0 (ATerm);
ATerm to_adot_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm x_68 (ATerm), ATerm);
ATerm assert_1_0 (ATerm i_83 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_1_0 (ATerm i_87 (ATerm), ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm f_83 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm e_83 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm j_86 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm k_86 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm term_to_adot_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm h_79 (ATerm), ATerm i_79 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm f_84 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm l_88 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm h_64 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm i_64 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm b_73 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm h_73 (ATerm), ATerm);
ATerm _2_0 (ATerm s_57 (ATerm), ATerm t_57 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm q_72 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm b_59 (ATerm), ATerm c_59 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm j_90 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm i_90 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm p_88 (ATerm), ATerm q_88 (ATerm), ATerm);
ATerm term_to_dot_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(g_87, h_87, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL;
  s_1 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      t_1 = ATgetArgument(t, 0);
      {
        ATerm p_0 = NULL;
        t = SSL_int_to_string(t_1);
        p_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_8), p_0), term_a_8);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm b_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          t_1 = ATgetArgument(t, 0);
          u_1 = ATgetArgument(t, 1);
          v_1 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(u_1);
      b_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_1), term_d_8), b_1), term_c_8), t_1);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm d_73 (ATerm), ATerm t)
{
  ATerm y_1 = NULL;
  ATerm b_0 (ATerm t)
  {
    t = d_73(t);
    if(((y_1 != NULL) && (y_1 != t)))
      _fail(t);
    else
      y_1 = t;
    return(t);
  }
  t = fetch_1_0(b_0, t);
  t = not_null(y_1);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm z_1 = NULL;
  z_1 = t;
  {
    ATerm e_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_16), term_e_16), term_a_16), term_u_15), term_q_15), term_m_15), term_d_15), term_z_14), term_j_14), term_z_13), term_u_13), term_q_13), term_g_13), term_a_13), term_o_12), term_b_12), term_i_11), term_z_10), term_r_10), term_n_10), term_v_9), term_m_9), term_f_9), term_b_9), term_w_8), term_s_8), term_o_8), term_k_8);
        {
          ATerm f_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm m_16 = ATgetArgument(t, 0);
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
          t = fetch_elem_1_0(f_0, t);
        }
        ;
        LocalPopChoice(g_8);
      }
    else
      {
        t = e_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, z_1);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm d_2 = NULL;
  d_2 = t;
  {
    ATerm o_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_2 = NULL,e_1 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm v_16 = ATgetArgument(t, 0);
            m_2 = ATgetArgument(t, 1);
            {
              ATerm x_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = m_2;
        {
          ATerm a_17 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_17;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          e_1 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_1), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATinsert(ATinsert(ATempty, e_1), term_c_17));
        }
        ;
        LocalPopChoice(u_16);
      }
    else
      {
        t = o_16;
      }
    t = d_2;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm m_67 (ATerm), ATerm t)
{
  ATerm w_2 = NULL,y_2 = NULL;
  w_2 = t;
  t = fork_0_0(t);
  y_2 = t;
  {
    ATerm d_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = w_2;
        t = m_67(t);
        ;
        LocalPopChoice(e_17);
      }
    else
      {
        t = d_17;
        t = SSL_waitpid(y_2);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm h_17 = ATgetArgument(t, 0);
            if(((ATgetType(h_17) != AT_INT) || (ATgetInt((ATermInt) h_17) != 0)))
              _fail(t);
            {
              ATerm i_17 = ATgetArgument(t, 1);
            }
            {
              ATerm k_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = w_2;
      }
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL;
  j_4 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm t_2 = NULL,u_2 = NULL,h_3 = NULL,i_3 = NULL;
      t = j_4;
      t = xtc_new_file_0_0(t);
      t_2 = t;
      t = m_0(t);
      u_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_2, (ATerm) ATinsert(ATinsert(ATempty, t_2), term_o_17));
      {
        ATerm r_17 = t;
        int s_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm u_17 = ATgetArgument(t, 0);
                ATerm w_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_2;
            {
              ATerm n_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, t_2), term_o_17);
                return(t);
              }
              t = at_end_1_0(n_0, t);
            }
            ;
            LocalPopChoice(s_17);
          }
        else
          {
            t = r_17;
            {
              ATerm g_3 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, u_2, (ATerm) ATinsert(ATinsert(ATempty, t_2), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm z_17 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) z_17) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  g_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_3;
              t = concat_0_0(t);
            }
          }
        h_3 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        i_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_3, h_3);
        {
          ATerm o_0 (ATerm t)
          {
            t = SSL_execvp(i_3, h_3);
            return(t);
          }
          t = fork_and_wait_1_0(o_0, t);
          t = SSL_close_file(t_2);
          t = (ATerm) ATmakeAppl(sym_FILE_1, t_2);
        }
      }
    }
  else
    {
      ATerm n_3 = NULL,o_3 = NULL,p_4 = NULL,u_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          k_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_4;
      t = xtc_new_file_0_0(t);
      n_3 = t;
      t = m_0(t);
      o_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_3), term_o_17), k_4), term_a_18));
      {
        ATerm b_18 = t;
        int c_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm e_18 = ATgetArgument(t, 0);
                ATerm h_18 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_3;
            {
              ATerm q_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_3), term_o_17), k_4), term_a_18);
                return(t);
              }
              t = at_end_1_0(q_0, t);
            }
            ;
            LocalPopChoice(c_18);
          }
        else
          {
            t = b_18;
            {
              ATerm m_4 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, o_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_3), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), k_4), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm i_18 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) i_18) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  m_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_4;
              t = concat_0_0(t);
            }
          }
        p_4 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        u_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_4, p_4);
        {
          ATerm r_0 (ATerm t)
          {
            t = SSL_execvp(u_4, p_4);
            return(t);
          }
          t = fork_and_wait_1_0(r_0, t);
          t = SSL_close_file(n_3);
          t = (ATerm) ATmakeAppl(sym_FILE_1, n_3);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm a_64 (ATerm), ATerm t)
{
  ATerm o_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL;
  s_4 = t;
  if(match_cons(t, sym_FILE_1))
    {
      q_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_4);
  o_4 = t;
  t = q_4;
  t = a_64(t);
  r_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, r_4), o_4);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm i_84 (ATerm), ATerm t)
{
  ATerm j_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_5 = NULL,r_5 = NULL;
      n_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm m_18 = t;
        int n_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_5 = NULL;
            t = eval_config_0_0(t);
            d_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), d_5);
            t = d_5;
            ;
            LocalPopChoice(n_18);
          }
        else
          {
            t = m_18;
          }
        r_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_5, term_e_11);
        t = geq_0_0(t);
        t = n_5;
        t = i_84(t);
      }
      ;
      LocalPopChoice(k_18);
    }
  else
    {
      t = j_18;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm k_84 (ATerm), ATerm t)
{
  ATerm u_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_5 = NULL,u_5 = NULL;
      s_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm y_18 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_5 = NULL;
            t = eval_config_0_0(t);
            k_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_5);
            t = k_5;
            ;
            LocalPopChoice(b_19);
          }
        else
          {
            t = y_18;
          }
        u_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_5, term_u_8);
        t = geq_0_0(t);
        t = s_5;
        t = k_84(t);
      }
      ;
      LocalPopChoice(w_18);
    }
  else
    {
      t = u_18;
    }
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL,k_6 = NULL,m_6 = NULL,n_6 = NULL;
  if(match_cons(t, sym__3))
    {
      z_5 = ATgetArgument(t, 0);
      a_6 = ATgetArgument(t, 1);
      k_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_5, a_6);
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_19 = ATgetArgument(t, 0);
            ATerm f_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(z_5, a_6);
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        t = (ATerm) ATempty;
      }
    m_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_6, k_6);
    {
      ATerm s_0 (ATerm t)
      {
        ATerm r_6 = NULL;
        if(match_cons(t, sym__2))
          {
            r_6 = ATgetArgument(t, 0);
            if((r_6 != ATgetArgument(t, 1)))
              {
                _fail(ATgetArgument(t, 1));
              }
          }
        else
          _fail(t);
        return(t);
      }
      t = union_1_0(s_0, t);
      n_6 = t;
      t = SSL_table_put(z_5, a_6, n_6);
      t = (ATerm) ATmakeAppl(sym__3, z_5, a_6, k_6);
    }
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm t_84 (ATerm), ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL;
  if(match_cons(t, sym__2))
    {
      u_6 = ATgetArgument(t, 0);
      t_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6;
  {
    ATerm t_0 (ATerm t)
    {
      ATerm v_6 = NULL,w_6 = NULL;
      if(match_cons(t, sym__2))
        {
          v_6 = ATgetArgument(t, 0);
          w_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, u_6, v_6, w_6);
      t = t_84(t);
      return(t);
    }
    t = map_1_0(t_0, t);
  }
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm h_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_6 = NULL;
      x_6 = t;
      t = SSL_access(x_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(n_19);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = h_19;
      {
        ATerm o_19 = t;
        int p_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_5 = NULL;
            ATerm r_19 = t;
            if((PushChoice() == 0))
              {
                ATerm y_6 = NULL;
                y_6 = t;
                t = SSL_access(y_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_19;
              }
            p_5 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_5), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = p_5;
            ;
            LocalPopChoice(p_19);
          }
        else
          {
            t = o_19;
            {
              ATerm w_5 = NULL;
              w_5 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_5), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = w_5;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL;
  z_6 = t;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm b_6 = NULL;
      b_6 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_6), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
      t = b_6;
      return(t);
    }
    t = if_verbose5_1_0(u_0, t);
    {
      ATerm w_19 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, z_6));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = w_19;
        }
      a_7 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, z_6));
      t = a_7;
      {
        ATerm v_0 (ATerm t)
        {
          ATerm e_6 = NULL;
          e_6 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_6), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
          t = e_6;
          return(t);
        }
        t = if_verbose4_1_0(v_0, t);
        t = read_repository_file_0_0(t);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm c_7 = NULL;
            c_7 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
            t = c_7;
            return(t);
          }
          t = if_verbose6_1_0(w_0, t);
          b_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_y_19, b_7);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm x_0 (ATerm t)
            {
              ATerm d_7 = NULL;
              d_7 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
              t = d_7;
              return(t);
            }
            t = if_verbose6_1_0(x_0, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, z_6), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_y_19, (ATerm)ATmakeAppl(sym_Imported_1, z_6), (ATerm) ATempty);
            {
              ATerm y_0 (ATerm t)
              {
                ATerm e_7 = NULL;
                e_7 = t;
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
                t = e_7;
                return(t);
              }
              t = if_verbose4_1_0(y_0, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm filter_1_0 (ATerm k_80 (ATerm), ATerm t)
{
  ATerm a_20 = t;
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
      t = a_20;
      {
        ATerm d_20 = t;
        int e_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              t = filter_1_0(k_80, t);
              return(t);
            }
            t = Cons_2_0(k_80, z_0, t);
            ;
            LocalPopChoice(e_20);
          }
        else
          {
            t = d_20;
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
              t = filter_1_0(k_80, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm e_82 (ATerm), ATerm t)
{
  ATerm k_7 (ATerm t)
  {
    ATerm h_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_82(t);
        t = k_7(t);
        ;
        LocalPopChoice(k_20);
      }
    else
      {
        t = h_20;
      }
    return(t);
  }
  t = k_7(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm o_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_6 = NULL;
            t = eval_config_0_0(t);
            l_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), l_6);
            t = l_6;
            ;
            LocalPopChoice(p_20);
          }
        else
          {
            t = o_20;
          }
      }
      ;
      LocalPopChoice(n_20);
    }
  else
    {
      t = m_20;
      {
        ATerm q_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(r_20);
          }
        else
          {
            t = q_20;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm l_7 = NULL;
  ATerm a_1 (ATerm t)
  {
    ATerm f_7 = NULL;
    f_7 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_7), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
    t = f_7;
    return(t);
  }
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
          {
            ATerm c_1 (ATerm t)
            {
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
              t = filter_1_0(xtc_read_0_0, t);
              {
                ATerm u_20 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = u_20;
                  }
              }
              return(t);
            }
            t = repeat_1_0(c_1, t);
            t = m_7;
          }
        }
      }
    t = l_7;
    {
      ATerm d_1 (ATerm t)
      {
        ATerm v_7 = NULL;
        v_7 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_7), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
        t = v_7;
        return(t);
      }
      t = if_verbose5_1_0(d_1, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm v_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_1 (ATerm t)
      {
        ATerm f_8 = NULL;
        f_8 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_8), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
        t = f_8;
        return(t);
      }
      t = if_verbose5_1_0(f_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm a_21 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_8 = NULL,o_9 = NULL,p_9 = NULL;
            if(match_cons(t, sym__2))
              {
                z_8 = ATgetArgument(t, 0);
                o_9 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, z_8));
            {
              ATerm g_1 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((o_9 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((p_9 != NULL) && (p_9 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      p_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(g_1, t);
              t = not_null(p_9);
            }
            ;
            LocalPopChoice(b_21);
          }
        else
          {
            t = a_21;
            {
              ATerm y_10 = NULL,c_11 = NULL;
              y_10 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, y_10));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm c_21 = ATgetFirst((ATermList) t);
                  if(match_cons(c_21, sym__2))
                    {
                      ATerm g_21 = ATgetArgument(c_21, 0);
                      c_11 = ATgetArgument(c_21, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm e_21 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = c_11;
            }
          }
        {
          ATerm h_1 (ATerm t)
          {
            ATerm y_11 = NULL;
            y_11 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_11), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
            t = y_11;
            return(t);
          }
          t = if_verbose5_1_0(h_1, t);
        }
      }
      ;
      LocalPopChoice(x_20);
    }
  else
    {
      t = v_20;
      {
        ATerm q_7 = NULL;
        q_7 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), q_7), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_21), q_7), term_h_21);
        {
          ATerm i_1 (ATerm t)
          {
            ATerm l_15 = NULL;
            t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
            {
              ATerm j_1 (ATerm t)
              {
                ATerm j_15 = NULL,k_15 = NULL;
                j_15 = t;
                t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), j_15);
                k_15 = t;
                t = (ATerm) ATmakeAppl(sym__2, j_15, k_15);
                return(t);
              }
              t = map_1_0(j_1, t);
              l_15 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_15), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
              t = l_15;
            }
            return(t);
          }
          t = if_verbose5_1_0(i_1, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm s_7 = NULL;
  ATerm k_1 (ATerm t)
  {
    ATerm t_7 = NULL;
    t_7 = t;
    t = SSL_explode_string(t_7);
    return(t);
  }
  t = map_1_0(k_1, t);
  t = concat_0_0(t);
  s_7 = t;
  t = SSL_implode_string(s_7);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm k_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_21 = t;
      int r_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_7 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm s_21 = ATgetFirst((ATermList) t);
              if(((ATgetType(s_21) != AT_INT) || (ATgetInt((ATermInt) s_21) != 34)))
                _fail(t);
              w_7 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(w_7), term_a_22), term_z_21);
          ;
          LocalPopChoice(r_21);
        }
      else
        {
          t = q_21;
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
                t = (ATerm) ATinsert(ATinsert(CheckATermList(z_7), term_z_21), term_z_21);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(z_7), term_g_22), term_z_21);
              }
          }
        }
      {
        ATerm l_1 (ATerm t)
        {
          t = Cons_2_0(_id, escape_chars_0_0, t);
          return(t);
        }
        t = Cons_2_0(_id, l_1, t);
      }
      ;
      LocalPopChoice(n_21);
    }
  else
    {
      t = k_21;
      {
        ATerm h_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(j_22);
          }
        else
          {
            t = h_22;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm EdgeToDot_0_0 (ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL;
  j_9 = t;
  if(match_cons(t, sym__2))
    {
      k_9 = ATgetArgument(t, 0);
      l_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,v_19 = NULL,i_20 = NULL,j_20 = NULL,l_20 = NULL;
        t = SSL_explode_term(l_9);
        if(match_cons(t, sym__2))
          {
            o_18 = ATgetArgument(t, 0);
            r_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_explode_string(o_18);
        t = escape_chars_0_0(t);
        v_19 = t;
        t = SSL_implode_string(v_19);
        i_20 = t;
        t = SSL_explode_string(i_20);
        l_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_20), term_a_22), (ATerm) ATinsert(ATempty, term_a_22));
        {
          ATerm o_22 = t;
          int q_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm t_22 = ATgetArgument(t, 0);
                  ATerm u_22 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(l_20), term_a_22);
              {
                ATerm m_1 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, term_a_22);
                  return(t);
                }
                t = at_end_1_0(m_1, t);
              }
              ;
              LocalPopChoice(q_22);
            }
          else
            {
              t = o_22;
              {
                ATerm d_21 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_20), (ATerm) ATmakeInt(34)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(34))));
                if(match_cons(t, sym__2))
                  {
                    ATerm v_22 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) v_22) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    d_21 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_21;
                t = concat_0_0(t);
              }
            }
          j_20 = t;
          t = SSL_implode_string(j_20);
          s_18 = t;
          t = r_18;
          {
            ATerm n_1 (ATerm t)
            {
              ATerm g_19 = NULL;
              g_19 = t;
              t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, k_9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, g_19))));
              return(t);
            }
            t = map_1_0(n_1, t);
            t_18 = t;
            t = (ATerm) ATinsert(CheckATermList(t_18), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, k_9), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_w_22, s_18))))));
          }
        }
        ;
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
        {
          ATerm p_22 = NULL,h_23 = NULL,t_23 = NULL,u_23 = NULL;
          t = SSL_is_int(l_9);
          t = SSL_int_to_string(l_9);
          t_23 = t;
          t = SSL_explode_string(t_23);
          t = escape_chars_0_0(t);
          u_23 = t;
          t = SSL_implode_string(u_23);
          p_22 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_22), p_22), term_x_22);
          t = concat_strings_0_0(t);
          h_23 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, k_9), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_w_22, h_23))))));
        }
      }
  }
  return(t);
}
ATerm ListEdgeToDot_0_0 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL;
  if(match_cons(t, sym__2))
    {
      q_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_9;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm f_23 = ATgetFirst((ATermList) t);
          ATerm g_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_9;
    }
  t = r_9;
  {
    ATerm o_1 (ATerm t)
    {
      ATerm x_9 = NULL;
      x_9 = t;
      t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, q_9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, x_9))));
      return(t);
    }
    t = map_1_0(o_1, t);
    s_9 = t;
    t = (ATerm) ATinsert(CheckATermList(s_9), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, q_9), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_o_23)))));
  }
  return(t);
}
ATerm term_to_graph_0_0 (ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL;
  a_10 = t;
  t = SSL_address(a_10);
  c_10 = t;
  t = SSL_int_to_string(c_10);
  d_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_23, d_10);
  t = conc_strings_0_0(t);
  b_10 = t;
  t = a_10;
  {
    ATerm q_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_1 (ATerm t)
        {
          ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
          h_10 = t;
          t = SSL_address(h_10);
          g_10 = t;
          t = SSL_int_to_string(g_10);
          i_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_p_23, i_10);
          t = conc_strings_0_0(t);
          return(t);
        }
        t = map_1_0(p_1, t);
        ;
        LocalPopChoice(r_23);
      }
    else
      {
        t = q_23;
        {
          ATerm q_1 (ATerm t)
          {
            ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
            k_10 = t;
            t = SSL_address(k_10);
            j_10 = t;
            t = SSL_int_to_string(j_10);
            l_10 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_p_23, l_10);
            t = conc_strings_0_0(t);
            return(t);
          }
          t = SRTS_all(q_1, t);
        }
      }
    e_10 = t;
    t = a_10;
    {
      ATerm v_23 = t;
      int w_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm w_1 (ATerm t)
          {
            ATerm x_1 (ATerm t)
            {
              ATerm m_10 = NULL;
              if(match_cons(t, sym__2))
                {
                  m_10 = ATgetArgument(t, 0);
                  if((m_10 != ATgetArgument(t, 1)))
                    {
                      _fail(ATgetArgument(t, 1));
                    }
                }
              else
                _fail(t);
              return(t);
            }
            t = union_1_0(x_1, t);
            return(t);
          }
          t = foldr_3_0(r_1, w_1, term_to_graph_0_0, t);
          ;
          LocalPopChoice(w_23);
        }
      else
        {
          t = v_23;
          {
            ATerm x_24 = NULL;
            t = SSL_explode_term(a_10);
            if(match_cons(t, sym__2))
              {
                ATerm x_23 = ATgetArgument(t, 0);
                x_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = x_24;
            {
              ATerm a_2 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              ATerm b_2 (ATerm t)
              {
                ATerm c_2 (ATerm t)
                {
                  ATerm j_25 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      j_25 = ATgetArgument(t, 0);
                      if((j_25 != ATgetArgument(t, 1)))
                        {
                          _fail(ATgetArgument(t, 1));
                        }
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = union_1_0(c_2, t);
                return(t);
              }
              t = foldr_3_0(a_2, b_2, term_to_graph_0_0, t);
            }
          }
        }
      f_10 = t;
      t = (ATerm) ATinsert(CheckATermList(f_10), (ATerm) ATmakeAppl(sym__2, b_10, e_10));
    }
  }
  return(t);
}
ATerm union_1_0 (ATerm u_76 (ATerm), ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL;
  if(match_cons(t, sym__2))
    {
      u_10 = ATgetArgument(t, 0);
      t_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_10;
  {
    ATerm v_10 (ATerm t)
    {
      ATerm y_23 = t;
      int a_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = t_10;
          ;
          LocalPopChoice(a_24);
        }
      else
        {
          t = y_23;
          {
            ATerm b_24 = t;
            int c_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_25 = NULL,z_25 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    y_25 = ATgetFirst((ATermList) t);
                    z_25 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = t_10;
                {
                  ATerm e_2 (ATerm t)
                  {
                    ATerm a_26 = NULL;
                    a_26 = t;
                    t = (ATerm) ATmakeAppl(sym__2, y_25, a_26);
                    t = u_76(t);
                    return(t);
                  }
                  t = fetch_1_0(e_2, t);
                  t = z_25;
                  t = v_10(t);
                }
                ;
                LocalPopChoice(c_24);
              }
            else
              {
                t = b_24;
                t = Cons_2_0(_id, v_10, t);
              }
          }
        }
      return(t);
    }
    t = v_10(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm j_79 (ATerm), ATerm k_79 (ATerm), ATerm l_79 (ATerm), ATerm t)
{
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_79(t);
      ;
      LocalPopChoice(h_24);
    }
  else
    {
      t = g_24;
      {
        ATerm a_11 = NULL,b_11 = NULL,f_11 = NULL,g_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_11 = ATgetFirst((ATermList) t);
            b_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_11;
        t = l_79(t);
        f_11 = t;
        t = b_11;
        t = foldr_3_0(j_79, k_79, l_79, t);
        g_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_11, g_11);
        t = k_79(t);
      }
    }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm j_84 (ATerm), ATerm t)
{
  ATerm i_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_11 = NULL,l_11 = NULL;
      j_11 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm m_24 = t;
        int n_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_26 = NULL;
            t = eval_config_0_0(t);
            g_26 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), g_26);
            t = g_26;
            ;
            LocalPopChoice(n_24);
          }
        else
          {
            t = m_24;
          }
        l_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_11, term_s_15);
        t = geq_0_0(t);
        t = j_11;
        t = j_84(t);
      }
      ;
      LocalPopChoice(l_24);
    }
  else
    {
      t = i_24;
    }
  return(t);
}
ATerm term_to_tree_0_0 (ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL;
  ATerm f_2 (ATerm t)
  {
    ATerm h_26 = NULL;
    h_26 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_26), (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue))));
    t = h_26;
    return(t);
  }
  t = if_verbose5_1_0(f_2, t);
  m_11 = t;
  t = new_0_0(t);
  n_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_11, m_11);
  {
    ATerm x_11 (ATerm t)
    {
      ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,v_26 = NULL;
      ATerm g_2 (ATerm t)
      {
        ATerm o_24 = t;
        int v_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_2 (ATerm t)
            {
              ATerm r_11 = NULL,s_11 = NULL;
              r_11 = t;
              t = new_0_0(t);
              s_11 = t;
              t = (ATerm) ATmakeAppl(sym__2, s_11, r_11);
              return(t);
            }
            t = map_1_0(h_2, t);
            ;
            LocalPopChoice(v_24);
          }
        else
          {
            t = o_24;
            {
              ATerm i_2 (ATerm t)
              {
                ATerm t_11 = NULL,u_11 = NULL;
                t_11 = t;
                t = new_0_0(t);
                u_11 = t;
                t = (ATerm) ATmakeAppl(sym__2, u_11, t_11);
                return(t);
              }
              t = SRTS_all(i_2, t);
            }
          }
        return(t);
      }
      t = _2_0(_id, g_2, t);
      o_11 = t;
      {
        ATerm j_2 (ATerm t)
        {
          ATerm w_24 = t;
          int a_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_2 (ATerm t)
              {
                ATerm m_26 = NULL,n_26 = NULL;
                m_26 = t;
                t = SSL_explode_term(m_26);
                if(match_cons(t, sym__2))
                  {
                    ATerm d_25 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) d_25) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm e_25 = ATgetArgument(t, 1);
                      if(((ATgetType(e_25) == AT_LIST) && !(ATisEmpty(e_25))))
                        {
                          n_26 = ATgetFirst((ATermList) e_25);
                          {
                            ATerm f_25 = (ATerm) ATgetNext((ATermList) e_25);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = n_26;
                return(t);
              }
              t = map_1_0(k_2, t);
              ;
              LocalPopChoice(a_25);
            }
          else
            {
              t = w_24;
              {
                ATerm l_2 (ATerm t)
                {
                  ATerm q_26 = NULL,r_26 = NULL;
                  q_26 = t;
                  t = SSL_explode_term(q_26);
                  if(match_cons(t, sym__2))
                    {
                      ATerm g_25 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) g_25) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm h_25 = ATgetArgument(t, 1);
                        if(((ATgetType(h_25) == AT_LIST) && !(ATisEmpty(h_25))))
                          {
                            r_26 = ATgetFirst((ATermList) h_25);
                            {
                              ATerm i_25 = (ATerm) ATgetNext((ATermList) h_25);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = r_26;
                  return(t);
                }
                t = SRTS_all(l_2, t);
              }
            }
          return(t);
        }
        t = _2_0(_id, j_2, t);
        p_11 = t;
        t = SSL_explode_term(o_11);
        if(match_cons(t, sym__2))
          {
            ATerm o_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_25) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_25 = ATgetArgument(t, 1);
              if(((ATgetType(p_25) == AT_LIST) && !(ATisEmpty(p_25))))
                {
                  ATerm q_25 = ATgetFirst((ATermList) p_25);
                  ATerm r_25 = (ATerm) ATgetNext((ATermList) p_25);
                  if(((ATgetType(r_25) == AT_LIST) && !(ATisEmpty(r_25))))
                    {
                      v_26 = ATgetFirst((ATermList) r_25);
                      {
                        ATerm t_25 = (ATerm) ATgetNext((ATermList) r_25);
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
        t = v_26;
        {
          ATerm u_25 = t;
          int b_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_2 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              ATerm o_2 (ATerm t)
              {
                ATerm p_2 (ATerm t)
                {
                  ATerm v_11 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      v_11 = ATgetArgument(t, 0);
                      if((v_11 != ATgetArgument(t, 1)))
                        {
                          _fail(ATgetArgument(t, 1));
                        }
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = union_1_0(p_2, t);
                return(t);
              }
              t = foldr_3_0(n_2, o_2, x_11, t);
              ;
              LocalPopChoice(b_26);
            }
          else
            {
              t = u_25;
              {
                ATerm x_26 = NULL;
                t = SSL_explode_term(v_26);
                if(match_cons(t, sym__2))
                  {
                    ATerm c_26 = ATgetArgument(t, 0);
                    x_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_26;
                {
                  ATerm q_2 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm r_2 (ATerm t)
                  {
                    ATerm s_2 (ATerm t)
                    {
                      ATerm b_27 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          b_27 = ATgetArgument(t, 0);
                          if((b_27 != ATgetArgument(t, 1)))
                            {
                              _fail(ATgetArgument(t, 1));
                            }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = union_1_0(s_2, t);
                    return(t);
                  }
                  t = foldr_3_0(q_2, r_2, x_11, t);
                }
              }
            }
          q_11 = t;
          t = (ATerm) ATinsert(CheckATermList(q_11), p_11);
        }
      }
      return(t);
    }
    t = x_11(t);
  }
  return(t);
}
ATerm to_adot_0_0 (ATerm t)
{
  ATerm n_27 = NULL,z_11 = NULL;
  z_11 = t;
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue)));
        {
          ATerm f_26 = t;
          int i_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_27 = NULL;
              t = eval_config_0_0(t);
              f_27 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue)), f_27);
              t = f_27;
              ;
              LocalPopChoice(i_26);
            }
          else
            {
              t = f_26;
            }
          t = z_11;
          t = term_to_tree_0_0(t);
        }
        ;
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue)));
        {
          ATerm j_26 = t;
          int k_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_27 = NULL;
              t = eval_config_0_0(t);
              j_27 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue)), j_27);
              t = j_27;
              ;
              LocalPopChoice(k_26);
            }
          else
            {
              t = j_26;
            }
          t = z_11;
          t = term_to_graph_0_0(t);
        }
      }
    {
      ATerm v_2 (ATerm t)
      {
        ATerm l_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ListEdgeToDot_0_0(t);
            ;
            LocalPopChoice(o_26);
          }
        else
          {
            t = l_26;
            t = EdgeToDot_0_0(t);
          }
        return(t);
      }
      t = map_1_0(v_2, t);
      t = concat_0_0(t);
      n_27 = t;
      t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_p_26, n_27);
    }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm x_68 (ATerm), ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
  if(match_cons(t, sym__2))
    {
      c_12 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_12, term_s_26);
  t = open_stream_0_0(t);
  e_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_12, d_12);
  t = x_68(t);
  t = fclose_0_0(t);
  t = d_12;
  return(t);
}
ATerm assert_1_0 (ATerm i_83 (ATerm), ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL;
  if(match_cons(t, sym__2))
    {
      f_12 = ATgetArgument(t, 0);
      g_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_83(t);
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_12, f_12, g_12);
  t = table_push_0_0(t);
  {
    ATerm t_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(h_12, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(u_26);
      }
    else
      {
        t = t_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_12 = ATgetFirst((ATermList) t);
        j_12 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(h_12, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(j_12), (ATerm) ATinsert(CheckATermList(i_12), f_12)));
    t = (ATerm) ATmakeAppl(sym__2, f_12, g_12);
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm y_12 (ATerm n_12, ATerm t)
  {
    t = n_12;
    {
      ATerm w_26 = t;
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
          t = w_26;
        }
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
      t = (ATerm) ATmakeAppl(sym__2, n_12, term_s_26);
      t = open_file_0_0(t);
    }
    return(t);
  }
  ATerm z_12 (ATerm p_12, ATerm q_12, ATerm r_12, ATerm t)
  {
    t = SSL_open_file(p_12, q_12);
    return(t);
  }
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
  v_12 = t;
  if(match_cons(t, sym__2))
    {
      w_12 = ATgetArgument(t, 0);
      x_12 = ATgetArgument(t, 1);
      {
        ATerm a_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_12(v_12, t);
            ;
            LocalPopChoice(c_27);
          }
        else
          {
            t = a_27;
            t = z_12(w_12, x_12, v_12, t);
          }
      }
    }
  else
    {
      t = y_12(v_12, t);
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
  ATerm b_13 = NULL;
  t = term_d_27;
  t = new_0_0(t);
  b_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_13, term_e_27);
  t = conc_strings_0_0(t);
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_13 = NULL;
        e_13 = t;
        t = SSL_access(e_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
      }
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm h_13 = NULL;
  t = new_file_0_0(t);
  h_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_13, term_s_26);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, h_13, term_d_27);
  {
    ATerm x_2 (ATerm t)
    {
      t = term_i_27;
      return(t);
    }
    t = assert_1_0(x_2, t);
    t = h_13;
  }
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL;
  i_13 = t;
  t = xtc_new_file_0_0(t);
  j_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_13, i_13);
  {
    ATerm z_2 (ATerm t)
    {
      ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm k_27 = ATgetArgument(t, 0);
          if(match_cons(k_27, sym_Stream_1))
            {
              k_13 = ATgetArgument(k_27, 0);
            }
          else
            _fail(t);
          l_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_write_term_to_stream_baf(k_13, l_13);
      m_13 = t;
      t = (ATerm) ATmakeAppl(sym_Stream_1, m_13);
      return(t);
    }
    t = WriteToFile_1_0(z_2, t);
    t = SSL_close_file(j_13);
    t = (ATerm) ATmakeAppl(sym_FILE_1, j_13);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_14 (ATerm w_13, ATerm t)
  {
    t = SSL_fclose(w_13);
    return(t);
  }
  ATerm b_14 = NULL,c_14 = NULL;
  c_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_14 = ATgetArgument(t, 0);
      {
        ATerm l_27 = t;
        int m_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_14);
            ;
            LocalPopChoice(m_27);
          }
        else
          {
            t = l_27;
            t = e_14(c_14, t);
          }
      }
    }
  else
    {
      t = e_14(c_14, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_14 = NULL;
  t = SSL_stdin_stream();
  f_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_14 = NULL;
  t = SSL_stdout_stream();
  g_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_14 = NULL;
  t = SSL_stderr_stream();
  h_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_14);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_27 = ATgetArgument(t, 0);
      ATerm p_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_27 = NULL,a_28 = NULL;
        z_27 = t;
        t = SSL_explode_term(z_27);
        if(match_cons(t, sym__2))
          {
            ATerm s_27 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_27) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm t_27 = ATgetArgument(t, 1);
              if(((ATgetType(t_27) == AT_LIST) && !(ATisEmpty(t_27))))
                {
                  a_28 = ATgetFirst((ATermList) t_27);
                  {
                    ATerm u_27 = (ATerm) ATgetNext((ATermList) t_27);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = a_28;
        if(match_cons(t, sym_stderr_0))
          {
            t = a_28;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = a_28;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = a_28;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(r_27);
      }
    else
      {
        t = q_27;
        {
          ATerm v_27 = t;
          int w_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
              ATerm a_3 (ATerm t)
              {
                ATerm p_14 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    p_14 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = p_14;
                return(t);
              }
              t = _2_0(a_3, _id, t);
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
              LocalPopChoice(w_27);
            }
          else
            {
              t = v_27;
              {
                ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL;
                ATerm b_3 (ATerm t)
                {
                  ATerm t_14 = NULL;
                  t_14 = t;
                  t = SSL_is_string(t_14);
                  return(t);
                }
                t = _2_0(b_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    q_14 = ATgetArgument(t, 0);
                    r_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(q_14, r_14);
                s_14 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, s_14);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL;
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_14 = NULL;
      x_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_14, term_c_28);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      {
        ATerm b_28 = NULL;
        b_28 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_28), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = b_28;
        _fail(t);
      }
    }
  u_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(w_14);
  v_14 = t;
  t = u_14;
  t = fclose_0_0(t);
  t = v_14;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm f_15 = NULL,h_15 = NULL;
  f_15 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = f_15;
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
ATerm xtc_io_transform_1_0 (ATerm i_87 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = i_87(t);
  t = write_to_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL;
  y_15 = t;
  if(match_cons(t, sym_FILE_1))
    {
      z_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_28 = NULL;
        t = y_15;
        t = k_0(t);
        k_28 = t;
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
          t = SSL_copy(z_15, k_28);
          t = (ATerm) ATmakeAppl(sym_FILE_1, z_15);
        }
        ;
        LocalPopChoice(e_28);
      }
    else
      {
        t = d_28;
        {
          ATerm h_28 = t;
          int i_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_28 = NULL;
              t = y_15;
              t = k_0(t);
              o_28 = t;
              {
                ATerm j_28 = t;
                if((PushChoice() == 0))
                  {
                    ATerm l_28 = t;
                    int m_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(m_28);
                      }
                    else
                      {
                        t = l_28;
                        {
                          ATerm n_28 = t;
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
                              t = n_28;
                              {
                                ATerm p_28 = NULL;
                                p_28 = t;
                                if((z_15 != t))
                                  {
                                    _fail(t);
                                  }
                                t = p_28;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_28;
                  }
                t = SSL_copy(z_15, o_28);
                t = (ATerm) ATmakeAppl(sym_FILE_1, z_15);
              }
              ;
              LocalPopChoice(i_28);
            }
          else
            {
              t = h_28;
              t = y_15;
              t = k_0(t);
              if((z_15 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_15);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm f_16 = NULL,h_16 = NULL,j_16 = NULL;
  if(match_cons(t, sym__2))
    {
      f_16 = ATgetArgument(t, 0);
      h_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_28 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_28 = ATgetArgument(t, 0);
            ATerm v_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(f_16, h_16);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_28 = ATgetFirst((ATermList) t);
            r_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_28;
        ;
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
        t = (ATerm) ATempty;
      }
    j_16 = t;
    t = SSL_table_put(f_16, h_16, j_16);
    t = (ATerm) ATmakeAppl(sym__2, f_16, h_16);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm f_83 (ATerm), ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL;
  p_16 = t;
  t = f_83(t);
  q_16 = t;
  {
    ATerm y_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(q_16, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(z_28);
      }
    else
      {
        t = y_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_16 = ATgetFirst((ATermList) t);
        r_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(q_16, (ATerm)ATmakeAppl(sym_Scopes_0), r_16);
    t = s_16;
    {
      ATerm c_3 (ATerm t)
      {
        ATerm t_16 = NULL;
        t_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_16, t_16);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(c_3, t);
      t = p_16;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm t)
{
  ATerm a_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_84(t);
      t = b_84(t);
      ;
      LocalPopChoice(c_29);
    }
  else
    {
      t = a_29;
      t = b_84(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_83 (ATerm), ATerm t)
{
  ATerm w_16 = NULL,y_16 = NULL,z_16 = NULL;
  w_16 = t;
  t = e_83(t);
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_16, term_d_29);
  {
    ATerm e_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_29 = ATgetArgument(t, 0);
            ATerm m_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(y_16, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(i_29);
      }
    else
      {
        t = e_29;
        t = (ATerm) ATempty;
      }
    z_16 = t;
    t = SSL_table_put(y_16, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(z_16), (ATerm) ATempty));
    t = w_16;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm j_86 (ATerm), ATerm t)
{
  ATerm f_17 = NULL;
  ATerm d_3 (ATerm t)
  {
    t = term_i_27;
    return(t);
  }
  t = begin_scope_1_0(d_3, t);
  {
    ATerm e_3 (ATerm t)
    {
      ATerm g_17 = NULL;
      g_17 = t;
      {
        ATerm n_29 = t;
        int o_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(o_29);
          }
        else
          {
            t = n_29;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((f_17 != NULL) && (f_17 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              f_17 = ATgetFirst((ATermList) t);
            {
              ATerm p_29 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(f_17);
        {
          ATerm f_3 (ATerm t)
          {
            ATerm q_29 = t;
            int r_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_17 = NULL;
                j_17 = t;
                t = SSL_remove(j_17);
                ;
                LocalPopChoice(r_29);
              }
            else
              {
                t = q_29;
              }
            return(t);
          }
          t = map_1_0(f_3, t);
          t = g_17;
          {
            ATerm j_3 (ATerm t)
            {
              t = term_i_27;
              return(t);
            }
            t = end_scope_1_0(j_3, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(j_86, e_3, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm k_86 (ATerm), ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_17 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm u_29 = t;
          int w_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_28 = NULL;
              t = eval_config_0_0(t);
              x_28 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), x_28);
              t = x_28;
              ;
              LocalPopChoice(w_29);
            }
          else
            {
              t = u_29;
            }
          l_17 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, l_17);
        }
        ;
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
        t = term_x_29;
      }
    t = k_86(t);
    {
      ATerm l_3 (ATerm t)
      {
        ATerm y_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
            {
              ATerm b_30 = t;
              int c_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_29 = NULL;
                  t = eval_config_0_0(t);
                  b_29 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), b_29);
                  t = b_29;
                  ;
                  LocalPopChoice(c_30);
                }
              else
                {
                  t = b_30;
                }
            }
            ;
            LocalPopChoice(a_30);
          }
        else
          {
            t = y_29;
            t = term_e_30;
          }
        return(t);
      }
      t = copy_to_1_0(l_3, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(k_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL;
  m_17 = t;
  t = term_d_27;
  t = whoami_0_0(t);
  n_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), n_17), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = m_17;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm p_17 = NULL;
    p_17 = t;
    if(match_string(t, "-k"))
      {
        t = p_17;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = p_17;
      }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    ATerm q_17 = NULL,t_17 = NULL;
    q_17 = t;
    t = SSL_string_to_int(q_17);
    t_17 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), t_17);
    t = q_17;
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = term_f_30;
    return(t);
  }
  t = ArgOption_3_0(m_3, p_3, q_3, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_3 (ATerm t)
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
      ATerm s_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_m_30;
        return(t);
      }
      ATerm t_3 (ATerm t)
      {
        t = term_n_30;
        return(t);
      }
      t = Option_3_0(r_3, s_3, t_3, t);
      ;
      LocalPopChoice(i_30);
    }
  else
    {
      t = g_30;
      {
        ATerm o_30 = t;
        int p_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_3 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm v_3 (ATerm t)
            {
              ATerm x_17 = NULL,y_17 = NULL;
              x_17 = t;
              t = SSL_string_to_int(x_17);
              y_17 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), y_17);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, x_17);
              return(t);
            }
            ATerm w_3 (ATerm t)
            {
              t = term_q_30;
              return(t);
            }
            t = ArgOption_3_0(u_3, v_3, w_3, t);
            ;
            LocalPopChoice(p_30);
          }
        else
          {
            t = o_30;
            {
              ATerm x_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm y_3 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_r_30;
                return(t);
              }
              ATerm z_3 (ATerm t)
              {
                t = term_s_30;
                return(t);
              }
              t = Option_3_0(x_3, y_3, z_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm d_18 = NULL,f_18 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_18 = NULL;
      t = term_d_27;
      t = d_0(t);
      g_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_30, term_u_30, g_18);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm l_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_18 = ATgetFirst((ATermList) t);
          f_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_18;
      t = a_0(t);
      t = term_d_27;
      t = c_0(t);
      l_18 = t;
      t = (ATerm) ATinsert(CheckATermList(f_18), l_18);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
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
  ATerm b_4 (ATerm t)
  {
    ATerm q_18 = NULL;
    q_18 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), q_18);
    t = (ATerm) ATmakeAppl(sym_Output_1, q_18);
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_v_30;
    return(t);
  }
  t = ArgOption_3_0(a_4, b_4, c_4, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm v_18 = NULL,x_18 = NULL,z_18 = NULL,a_19 = NULL;
  if(match_cons(t, sym__3))
    {
      v_18 = ATgetArgument(t, 0);
      x_18 = ATgetArgument(t, 1);
      z_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_18, x_18);
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_30 = ATgetArgument(t, 0);
            ATerm z_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(v_18, x_18);
        ;
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        t = (ATerm) ATempty;
      }
    a_19 = t;
    t = SSL_table_put(v_18, x_18, (ATerm) ATinsert(CheckATermList(a_19), z_18));
    t = (ATerm) ATmakeAppl(sym__3, v_18, x_18, z_18);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_19 = NULL;
      t = term_d_27;
      t = j_0(t);
      m_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_30, term_u_30, m_19);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm q_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_19 = ATgetFirst((ATermList) t);
          j_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_19;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_19 = ATgetFirst((ATermList) t);
          l_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_19;
      t = h_0(t);
      t = k_19;
      t = i_0(t);
      q_19 = t;
      t = (ATerm) ATinsert(CheckATermList(l_19), q_19);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm s_19 = NULL;
    s_19 = t;
    if(match_string(t, "-i"))
      {
        t = s_19;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = s_19;
      }
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    ATerm t_19 = NULL;
    t_19 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), t_19);
    t = (ATerm) ATmakeAppl(sym_Input_1, t_19);
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    t = term_a_31;
    return(t);
  }
  t = ArgOption_3_0(d_4, e_4, f_4, t);
  return(t);
}
ATerm term_to_adot_options_0_0 (ATerm t)
{
  ATerm c_31 = t;
  int d_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--graph", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm h_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_e_31;
        return(t);
      }
      ATerm i_4 (ATerm t)
      {
        t = term_f_31;
        return(t);
      }
      t = Option_3_0(g_4, h_4, i_4, t);
      ;
      LocalPopChoice(d_31);
    }
  else
    {
      t = c_31;
      {
        ATerm l_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tree", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm n_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_g_31;
          return(t);
        }
        ATerm t_4 (ATerm t)
        {
          t = term_h_31;
          return(t);
        }
        t = Option_3_0(l_4, n_4, t_4, t);
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_19 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_27;
  t = whoami_0_0(t);
  u_19 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), u_19));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm i_31 = t;
    int j_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_29 = NULL;
        t = eval_config_0_0(t);
        f_29 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_29);
        t = f_29;
        ;
        LocalPopChoice(j_31);
      }
    else
      {
        t = i_31;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm h_79 (ATerm), ATerm i_79 (ATerm), ATerm t)
{
  ATerm k_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_79(t);
      ;
      LocalPopChoice(l_31);
    }
  else
    {
      t = k_31;
      {
        ATerm x_19 = NULL,z_19 = NULL,c_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_19 = ATgetFirst((ATermList) t);
            z_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_19;
        t = foldr_2_0(h_79, i_79, t);
        c_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_19, c_20);
        t = i_79(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_20 = NULL,g_29 = NULL,h_29 = NULL;
  t = times_0_0(t);
  g_29 = t;
  t = SSL_explode_term(g_29);
  if(match_cons(t, sym__2))
    {
      ATerm m_31 = ATgetArgument(t, 0);
      h_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_29;
  {
    ATerm v_4 (ATerm t)
    {
      t = term_j_30;
      return(t);
    }
    ATerm w_4 (ATerm t)
    {
      ATerm k_29 = NULL,l_29 = NULL;
      if(match_cons(t, sym__2))
        {
          k_29 = ATgetArgument(t, 0);
          l_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm n_31 = t;
        int o_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(k_29, l_29);
            ;
            LocalPopChoice(o_31);
          }
        else
          {
            t = n_31;
            t = SSL_addr(k_29, l_29);
          }
      }
      return(t);
    }
    t = foldr_2_0(v_4, w_4, t);
    f_20 = t;
    t = SSL_TicksToSeconds(f_20);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_20 = NULL,y_20 = NULL,z_20 = NULL;
  w_20 = t;
  if(match_cons(t, sym__2))
    {
      y_20 = ATgetArgument(t, 0);
      z_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_20;
        if((y_20 != t))
          {
            _fail(t);
          }
        t = w_20;
        ;
        LocalPopChoice(q_31);
      }
    else
      {
        t = p_31;
        t = w_20;
        {
          ATerm r_31 = t;
          int t_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_20, z_20);
              ;
              LocalPopChoice(t_31);
            }
          else
            {
              t = r_31;
              t = SSL_gtr(y_20, z_20);
            }
          t = (ATerm) ATmakeAppl(sym__2, y_20, z_20);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_84 (ATerm), ATerm t)
{
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_21 = NULL,i_21 = NULL;
      f_21 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm w_31 = t;
        int x_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_29 = NULL;
            t = eval_config_0_0(t);
            v_29 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), v_29);
            t = v_29;
            ;
            LocalPopChoice(x_31);
          }
        else
          {
            t = w_31;
          }
        i_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_21, term_i_8);
        t = geq_0_0(t);
        t = f_21;
        t = f_84(t);
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
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm l_21 = NULL,m_21 = NULL;
    t = run_time_0_0(t);
    l_21 = t;
    t = term_d_27;
    t = whoami_0_0(t);
    m_21 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), l_21), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), m_21));
    t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_31), l_21), term_c_8), m_21));
    return(t);
  }
  t = if_verbose1_1_0(x_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm l_88 (ATerm), ATerm t)
{
  ATerm a_32 = t;
  int b_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm c_32 = t;
        int d_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_29 = NULL;
            t = eval_config_0_0(t);
            z_29 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), z_29);
            t = z_29;
            ;
            LocalPopChoice(d_32);
          }
        else
          {
            t = c_32;
          }
      }
      ;
      LocalPopChoice(b_32);
    }
  else
    {
      t = a_32;
      {
        ATerm y_4 (ATerm t)
        {
          ATerm e_32 = t;
          int f_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(f_32);
            }
          else
            {
              t = e_32;
              {
                ATerm g_32 = t;
                int h_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(h_32);
                  }
                else
                  {
                    t = g_32;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(y_4, t);
      }
    }
  t = l_88(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_21 = ATgetFirst((ATermList) t);
      p_21 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_21 = NULL,u_21 = NULL;
        t = p_21;
        t = g_0(t);
        t_21 = t;
        t = o_21;
        t = e_0(t);
        u_21 = t;
        t = p_21;
        {
          ATerm z_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(t_21), u_21);
            return(t);
          }
          t = reverse_acc_2_0(e_0, z_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_27;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm h_64 (ATerm), ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL;
  y_21 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_21);
  v_21 = t;
  t = w_21;
  t = h_64(t);
  x_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, x_21), v_21);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm k_32 = t;
        int l_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_30 = NULL;
            t = eval_config_0_0(t);
            d_30 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_30);
            t = d_30;
            ;
            LocalPopChoice(l_32);
          }
        else
          {
            t = k_32;
          }
      }
      ;
      LocalPopChoice(j_32);
    }
  else
    {
      t = i_32;
      {
        ATerm a_5 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(a_5, t);
      }
    }
  t = term_m_32;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm b_5 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, b_5, t);
    {
      ATerm c_5 (ATerm t)
      {
        ATerm b_22 = NULL;
        b_22 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, b_22), term_n_32);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(c_5, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm i_64 (ATerm), ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
  f_22 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      d_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_22);
  c_22 = t;
  t = d_22;
  t = i_64(t);
  e_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, e_22), c_22);
  return(t);
}
ATerm fetch_1_0 (ATerm b_73 (ATerm), ATerm t)
{
  ATerm i_22 (ATerm t)
  {
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(b_73, _id, t);
        ;
        LocalPopChoice(p_32);
      }
    else
      {
        t = o_32;
        t = Cons_2_0(_id, i_22, t);
      }
    return(t);
  }
  t = i_22(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL;
  k_22 = t;
  {
    ATerm q_32 = t;
    int r_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_22;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_32 = ATgetFirst((ATermList) t);
                ATerm t_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_22;
          }
        ;
        LocalPopChoice(r_32);
      }
    else
      {
        t = q_32;
        t = (ATerm) ATinsert(ATempty, k_22);
      }
    l_22 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), l_22);
    t = k_22;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm u_32 = t;
    int v_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_30 = NULL;
        t = eval_config_0_0(t);
        h_30 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_30);
        t = h_30;
        ;
        LocalPopChoice(v_32);
      }
    else
      {
        t = u_32;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(x_32);
    }
  else
    {
      t = w_32;
      {
        ATerm r_22 = NULL,s_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_22 = ATgetFirst((ATermList) t);
            s_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_22;
        {
          ATerm e_5 (ATerm t)
          {
            t = s_22;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(e_5, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm h_73 (ATerm), ATerm t)
{
  ATerm y_22 (ATerm t)
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, y_22, t);
        ;
        LocalPopChoice(z_32);
      }
    else
      {
        t = y_32;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_73(t);
      }
    return(t);
  }
  t = y_22(t);
  return(t);
}
ATerm _2_0 (ATerm s_57 (ATerm), ATerm t_57 (ATerm), ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL;
  e_23 = t;
  if(match_cons(t, sym__2))
    {
      a_23 = ATgetArgument(t, 0);
      b_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_23);
  z_22 = t;
  t = a_23;
  t = s_57(t);
  c_23 = t;
  t = b_23;
  t = t_57(t);
  d_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, c_23, d_23), z_22);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm i_23 = NULL;
  ATerm f_5 (ATerm t)
  {
    ATerm j_23 = NULL;
    j_23 = t;
    t = SSL_explode_string(j_23);
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    ATerm k_23 = NULL;
    k_23 = t;
    t = SSL_explode_string(k_23);
    return(t);
  }
  t = _2_0(f_5, g_5, t);
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_23 = NULL,n_23 = NULL;
        if(match_cons(t, sym__2))
          {
            m_23 = ATgetArgument(t, 0);
            n_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_23;
        {
          ATerm h_5 (ATerm t)
          {
            t = n_23;
            return(t);
          }
          t = at_end_1_0(h_5, t);
        }
        ;
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        {
          ATerm k_30 = NULL,l_30 = NULL;
          k_30 = t;
          t = SSL_explode_term(k_30);
          if(match_cons(t, sym__2))
            {
              ATerm c_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) c_33) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              l_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_30;
          t = concat_0_0(t);
        }
      }
    i_23 = t;
    t = SSL_implode_string(i_23);
  }
  return(t);
}
ATerm map_1_0 (ATerm q_72 (ATerm), ATerm t)
{
  ATerm s_23 (ATerm t)
  {
    ATerm d_33 = t;
    int e_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(e_33);
      }
    else
      {
        t = d_33;
        t = Cons_2_0(q_72, s_23, t);
      }
    return(t);
  }
  t = s_23(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_33 = t;
  int g_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_23 = NULL;
      z_23 = t;
      t = SSL_is_string(z_23);
      ;
      LocalPopChoice(g_33);
    }
  else
    {
      t = f_33;
      {
        ATerm h_33 = t;
        int i_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_5 (ATerm t)
            {
              ATerm j_33 = t;
              int k_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(k_33);
                }
              else
                {
                  t = j_33;
                }
              return(t);
            }
            t = map_1_0(i_5, t);
            ;
            LocalPopChoice(i_33);
          }
        else
          {
            t = h_33;
            {
              ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
              d_24 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_24 = ATgetArgument(t, 0);
                  t = e_24;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_24 = ATgetArgument(t, 0);
                      t = e_24;
                      {
                        ATerm l_33 = t;
                        int m_33 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_24);
                            {
                              ATerm n_33 = t;
                              int o_33 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm b_31 = NULL;
                                  t = eval_config_0_0(t);
                                  b_31 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_24, b_31);
                                  t = b_31;
                                  ;
                                  LocalPopChoice(o_33);
                                }
                              else
                                {
                                  t = n_33;
                                }
                            }
                            ;
                            LocalPopChoice(m_33);
                          }
                        else
                          {
                            t = l_33;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_24), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = e_24;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm j_24 = NULL,k_24 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_24 = ATgetArgument(t, 0);
                          f_24 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_24;
                      t = eval_config_0_0(t);
                      j_24 = t;
                      t = f_24;
                      t = eval_config_0_0(t);
                      k_24 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_24, k_24);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_5 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm l_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_t_33;
        return(t);
      }
      ATerm m_5 (ATerm t)
      {
        t = term_u_33;
        return(t);
      }
      t = Option_3_0(j_5, l_5, m_5, t);
      ;
      LocalPopChoice(q_33);
    }
  else
    {
      t = p_33;
      {
        ATerm o_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm q_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_v_33;
          return(t);
        }
        ATerm t_5 (ATerm t)
        {
          t = term_w_33;
          return(t);
        }
        t = Option_3_0(o_5, q_5, t_5, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm b_59 (ATerm), ATerm c_59 (ATerm), ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL;
  u_24 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_24 = ATgetFirst((ATermList) t);
      r_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_24);
  p_24 = t;
  t = q_24;
  t = b_59(t);
  s_24 = t;
  t = r_24;
  t = c_59(t);
  t_24 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(t_24), s_24), p_24);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_90 (ATerm), ATerm t)
{
  ATerm y_24 = NULL;
  y_24 = t;
  {
    ATerm x_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_33;
        t = j_90(t);
        ;
        LocalPopChoice(y_33);
      }
    else
      {
        t = x_33;
      }
    t = y_24;
    {
      ATerm v_5 (ATerm t)
      {
        ATerm z_24 = NULL;
        z_24 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_24);
        t = (ATerm) ATmakeAppl(sym_Program_1, z_24);
        return(t);
      }
      ATerm x_5 (ATerm t)
      {
        ATerm a_34 = t;
        int b_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_34 = t;
            int d_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(d_34);
              }
            else
              {
                t = c_34;
                t = j_90(t);
                t = Cons_2_0(_id, x_5, t);
              }
            ;
            LocalPopChoice(b_34);
          }
        else
          {
            t = a_34;
            {
              ATerm b_25 = NULL,c_25 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_25 = ATgetFirst((ATermList) t);
                  c_25 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(c_25), (ATerm) ATmakeAppl(sym_Undefined_1, b_25));
            }
          }
        return(t);
      }
      t = Cons_2_0(v_5, x_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm i_90 (ATerm), ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
  k_25 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = k_25;
  {
    ATerm y_5 (ATerm t)
    {
      ATerm e_34 = t;
      int f_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_90(t);
          ;
          LocalPopChoice(f_34);
        }
      else
        {
          t = e_34;
          {
            ATerm g_34 = t;
            int h_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_6 (ATerm t)
                {
                  ATerm n_25 = NULL;
                  n_25 = t;
                  if(match_string(t, "--help"))
                    {
                      t = n_25;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = n_25;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = n_25;
                        }
                    }
                  return(t);
                }
                ATerm d_6 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_i_34;
                  return(t);
                }
                ATerm f_6 (ATerm t)
                {
                  t = term_j_34;
                  return(t);
                }
                t = Option_3_0(c_6, d_6, f_6, t);
                ;
                LocalPopChoice(h_34);
              }
            else
              {
                t = g_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_5, t);
    {
      ATerm k_34 = t;
      int l_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_25 = NULL;
          s_25 = t;
          {
            ATerm m_34 = t;
            int n_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = s_25;
                {
                  ATerm o_34 = t;
                  int p_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm q_34 = t;
                        int r_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm s_31 = NULL;
                            t = eval_config_0_0(t);
                            s_31 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), s_31);
                            t = s_31;
                            ;
                            LocalPopChoice(r_34);
                          }
                        else
                          {
                            t = q_34;
                          }
                      }
                      ;
                      LocalPopChoice(p_34);
                    }
                  else
                    {
                      t = o_34;
                      {
                        ATerm g_6 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(g_6, t);
                      }
                    }
                  t = s_25;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(n_34);
              }
            else
              {
                t = m_34;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm s_34 = t;
                  int t_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_31 = NULL;
                      t = eval_config_0_0(t);
                      y_31 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), y_31);
                      t = y_31;
                      ;
                      LocalPopChoice(t_34);
                    }
                  else
                    {
                      t = s_34;
                    }
                  t = s_25;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(l_34);
        }
      else
        {
          t = k_34;
          {
            ATerm u_34 = t;
            int v_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_6 (ATerm t)
                {
                  ATerm i_6 (ATerm t)
                  {
                    if(((l_25 != NULL) && (l_25 != t)))
                      _fail(t);
                    else
                      l_25 = t;
                    return(t);
                  }
                  t = Undefined_1_0(i_6, t);
                  return(t);
                }
                t = fetch_1_0(h_6, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(l_25)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_25)), term_w_34));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(v_34);
              }
            else
              {
                t = u_34;
              }
          }
        }
      m_25 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = m_25;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm p_88 (ATerm), ATerm q_88 (ATerm), ATerm t)
{
  ATerm v_25 = NULL;
  t = parse_options_1_0(n_88, t);
  v_25 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), v_25);
  t = v_25;
  t = p_88(t);
  {
    ATerm x_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_88, t);
        ;
        LocalPopChoice(y_34);
      }
    else
      {
        t = x_34;
        {
          ATerm z_34 = t;
          int a_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_88(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(a_35);
            }
          else
            {
              t = z_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm term_to_dot_0_0 (ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    ATerm b_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_to_adot_options_0_0(t);
        ;
        LocalPopChoice(c_35);
      }
    else
      {
        t = b_35;
        {
          ATerm d_35 = t;
          int e_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
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
                          ATerm p_6 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm q_6 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_j_35;
                            return(t);
                          }
                          ATerm s_6 (ATerm t)
                          {
                            t = term_k_35;
                            return(t);
                          }
                          t = Option_3_0(p_6, q_6, s_6, t);
                          ;
                          LocalPopChoice(i_35);
                        }
                      else
                        {
                          t = h_35;
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
  ATerm o_6 (ATerm t)
  {
    ATerm g_7 (ATerm t)
    {
      t = xtc_io_transform_1_0(to_adot_0_0, t);
      {
        ATerm n_35 = t;
        int o_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_35 = t;
            int q_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(q_35);
              }
            else
              {
                t = p_35;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(o_35);
            {
              ATerm h_7 (ATerm t)
              {
                t = term_r_35;
                return(t);
              }
              ATerm j_7 (ATerm t)
              {
                ATerm w_25 = NULL;
                t = term_s_35;
                t = xtc_find_0_0(t);
                w_25 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, w_25), term_t_35);
                return(t);
              }
              t = xtc_transform_file_2_0(h_7, j_7, t);
            }
          }
        else
          {
            t = n_35;
            {
              ATerm n_7 (ATerm t)
              {
                t = term_r_35;
                return(t);
              }
              ATerm o_7 (ATerm t)
              {
                ATerm x_25 = NULL;
                t = term_s_35;
                t = xtc_find_0_0(t);
                x_25 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, x_25), term_t_35);
                return(t);
              }
              t = xtc_transform_term_2_0(n_7, o_7, t);
            }
          }
        {
          ATerm u_35 = t;
          int v_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_35 = t;
              int x_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FILE_1_0(_id, t);
                  ;
                  LocalPopChoice(x_35);
                }
              else
                {
                  t = w_35;
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                }
              LocalPopChoice(v_35);
              {
                ATerm p_7 (ATerm t)
                {
                  t = term_y_35;
                  return(t);
                }
                ATerm r_7 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = xtc_transform_file_2_0(p_7, r_7, t);
              }
            }
          else
            {
              t = u_35;
              {
                ATerm u_7 (ATerm t)
                {
                  t = term_y_35;
                  return(t);
                }
                ATerm x_7 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = xtc_transform_term_2_0(u_7, x_7, t);
              }
            }
        }
      }
      return(t);
    }
    t = xtc_io_1_0(g_7, t);
    return(t);
  }
  t = option_wrap_4_0(j_6, default_usage_0_0, _id, o_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = term_to_dot_0_0(t);
  return(t);
}
