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
ATerm term_t_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_y_37;
ATerm term_i_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_n_35;
ATerm term_f_35;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_f_34;
ATerm term_s_33;
ATerm term_d_33;
ATerm term_b_33;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_p_32;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_f_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_b_30;
ATerm term_l_29;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_p_27;
ATerm term_z_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_m_26;
ATerm term_k_26;
ATerm term_d_26;
ATerm term_w_25;
ATerm term_r_25;
ATerm term_p_25;
ATerm term_f_24;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_a_23;
ATerm term_y_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_f_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_u_21;
ATerm term_r_21;
ATerm term_l_21;
ATerm term_g_21;
ATerm term_e_21;
ATerm term_y_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_q_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_y_19;
ATerm term_s_19;
ATerm term_o_19;
ATerm term_m_19;
ATerm term_k_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_y_17;
ATerm term_u_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_t_10;
void init_constant_terms (void)
{
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_n_11, term_o_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_r_11, term_u_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_y_11, term_a_12);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_g_12, term_h_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_l_12, term_n_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_12, term_q_12, term_y_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_e_13);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_13, term_h_13, term_i_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_13, term_o_13, term_p_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_s_13, term_t_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_w_13, term_x_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_b_14, term_c_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_g_14, term_k_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_n_14, term_o_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_s_14, term_u_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_z_14, term_a_15);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_d_15, term_e_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_h_15, term_i_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_l_15, term_m_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_s_15, term_t_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_15, term_y_15, term_z_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_16, term_e_16, term_f_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_16, term_l_16, term_o_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_s_16, term_t_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_16, term_w_16, term_x_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_a_17, term_b_17);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_e_17, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_i_17, term_k_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_v_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_g_20);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_AttrId_2, term_n_22, term_y_22);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym__2, term_z_26, term_d_26);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym__2, term_k_18, term_k_30);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_30);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym__2, term_p_30, term_s_26);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym__2, term_r_25, term_s_26);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym__2, term_p_25, term_s_26);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym__2, term_y_30, term_z_30);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym__2, term_f_34, term_s_26);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym__2, term_l_34, term_s_26);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(sym__2, term_t_32, term_s_26);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(sym__2, term_y_37, term_s_26);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Dot-pretty.pp", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_term_2_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm);
ATerm b_7 (ATerm a_26, ATerm b_26, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm o_79 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm y_73 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm k_93 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose4_1_0 (ATerm c_91 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm e_91 (ATerm), ATerm);
ATerm s_0 (ATerm);
ATerm z_6 (ATerm r_47, ATerm s_47, ATerm t_47, ATerm);
ATerm a_7 (ATerm g_91 (ATerm), ATerm b_48, ATerm a_48, ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm g_1 (ATerm);
ATerm i_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm x_86 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm r_88 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm q_1 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm r_1 (ATerm);
ATerm x_1 (ATerm);
ATerm t_11 (ATerm m_10, ATerm);
ATerm c_2 (ATerm);
ATerm e_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm at_end_1_0 (ATerm s_79 (ATerm), ATerm);
ATerm m_16 (ATerm b_16, ATerm);
ATerm conc_0_0 (ATerm);
ATerm EdgeToDot_0_0 (ATerm);
ATerm h_7 (ATerm n_60, ATerm o_60, ATerm);
ATerm r_2 (ATerm);
ATerm graph_to_adot_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm term_to_graph_0_0 (ATerm);
ATerm i_7 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm h_36, ATerm g_36, ATerm);
ATerm j_7 (ATerm g_83 (ATerm), ATerm d_36, ATerm c_36, ATerm);
ATerm foldr_3_0 (ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm);
ATerm if_verbose5_1_0 (ATerm d_91 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm z_3 (ATerm);
ATerm b_4 (ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm term_to_tree_0_0 (ATerm);
ATerm to_adot_0_0 (ATerm);
ATerm k_7 (ATerm e_29, ATerm f_29, ATerm);
ATerm l_7 (ATerm j_75 (ATerm), ATerm t_184, ATerm m_29, ATerm);
ATerm m_7 (ATerm v_89 (ATerm), ATerm d_46, ATerm b_46, ATerm);
ATerm u_25 (ATerm d_25, ATerm);
ATerm v_25 (ATerm g_25, ATerm j_25, ATerm m_25, ATerm);
ATerm h_4 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm i_4 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm j_4 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm u_27 (ATerm i_27, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm n_7 (ATerm k_29, ATerm);
ATerm o_7 (ATerm g_50, ATerm h_50, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm t_29 (ATerm i_28, ATerm);
ATerm u_29 (ATerm o_28, ATerm p_28, ATerm r_28, ATerm);
ATerm v_29 (ATerm z_28, ATerm a_29, ATerm b_29, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm m_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm p_7 (ATerm y_49, ATerm z_49, ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_1_0 (ATerm v_93 (ATerm), ATerm);
ATerm q_7 (ATerm g_26, ATerm h_26, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm r_7 (ATerm z_46, ATerm a_47, ATerm);
ATerm end_scope_1_0 (ATerm s_89 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm r_89 (ATerm), ATerm);
ATerm t_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm w_92 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm xtc_io_1_0 (ATerm x_92 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm i_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm y_5 (ATerm);
ATerm b_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm z_7 (ATerm u_48, ATerm v_48, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm k_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm x_7 (ATerm u_46, ATerm v_46, ATerm t_46, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm w_6 (ATerm);
ATerm c_7 (ATerm);
ATerm g_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm y_7 (ATerm);
ATerm term_to_adot_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm s_7 (ATerm p_44, ATerm q_44, ATerm);
ATerm foldr_2_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_90 (ATerm), ATerm);
ATerm g_8 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm i_8 (ATerm);
ATerm need_help_1_0 (ATerm y_94 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm m_8 (ATerm);
ATerm o_8 (ATerm);
ATerm q_8 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_79 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm v_7 (ATerm l_43, ATerm m_43, ATerm);
ATerm debug_1_0 (ATerm h_75 (ATerm), ATerm);
ATerm map_1_0 (ATerm c_79 (ATerm), ATerm);
ATerm r_8 (ATerm);
ATerm t_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm w_7 (ATerm l_48, ATerm m_48, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_65 (ATerm), ATerm o_65 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm w_96 (ATerm), ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm parse_options_1_0 (ATerm v_96 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_95 (ATerm), ATerm b_95 (ATerm), ATerm c_95 (ATerm), ATerm d_95 (ATerm), ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm p_9 (ATerm);
ATerm s_9 (ATerm);
ATerm w_9 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm f_10 (ATerm);
ATerm g_10 (ATerm);
ATerm h_10 (ATerm);
ATerm l_10 (ATerm);
ATerm n_10 (ATerm);
ATerm o_10 (ATerm);
ATerm term_to_dot_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(t_93, u_93, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm b_7 (ATerm a_26, ATerm b_26, ATerm t)
{
  t = SSL_execvp(a_26, b_26);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL;
  t_1 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      u_1 = ATgetArgument(t, 0);
      {
        ATerm p_0 = NULL,q_0 = NULL;
        t = SSL_int_to_string(u_1);
        p_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_10), p_0), term_t_10);
        q_0 = t;
        t = SSL_concat_strings(q_0);
      }
    }
  else
    {
      ATerm e_1 = NULL,f_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          u_1 = ATgetArgument(t, 0);
          v_1 = ATgetArgument(t, 1);
          w_1 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(v_1);
      e_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_1), term_a_11), e_1), term_z_10), u_1);
      f_1 = t;
      t = SSL_concat_strings(f_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm o_79 (ATerm), ATerm t)
{
  ATerm a_2 = NULL;
  ATerm b_0 (ATerm t)
  {
    t = o_79(t);
    if(((a_2 != NULL) && (a_2 != t)))
      _fail(t);
    else
      a_2 = t;
    return(t);
  }
  t = fetch_1_0(b_0, t);
  t = not_null(a_2);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm b_2 = NULL;
  if(((b_2 != NULL) && (b_2 != t)))
    _fail(t);
  else
    b_2 = t;
  {
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm f_11 = ATgetArgument(t, 0);
              if(((b_2 != NULL) && (b_2 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                b_2 = ATgetArgument(t, 1);
              {
                ATerm g_11 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_17), term_g_17), term_c_17), term_y_16), term_u_16), term_p_16), term_j_16), term_a_16), term_v_15), term_n_15), term_j_15), term_f_15), term_b_15), term_v_14), term_p_14), term_l_14), term_d_14), term_z_13), term_u_13), term_q_13), term_j_13), term_f_13), term_z_12), term_o_12), term_i_12), term_b_12), term_v_11), term_p_11);
        t = fetch_elem_1_0(f_0, t);
        ;
        LocalPopChoice(e_11);
      }
    else
      {
        t = d_11;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(b_2));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm g_2 = NULL,p_2 = NULL;
  g_2 = t;
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm o_17 = ATgetArgument(t, 0);
            p_2 = ATgetArgument(t, 1);
            {
              ATerm p_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(n_17);
        {
          ATerm q_17 = t;
          int r_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_2 = NULL,f_2 = NULL,h_2 = NULL;
              t = p_2;
              {
                ATerm s_17 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_17;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                d_2 = t;
                t = term_u_17;
                f_2 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, d_2), term_y_17);
                h_2 = t;
                t = SSL_printnl(f_2, h_2);
                t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATinsert(ATinsert(ATempty, d_2), term_y_17));
              }
              ;
              LocalPopChoice(r_17);
            }
          else
            {
              t = q_17;
              t = g_2;
            }
        }
      }
    else
      {
        t = m_17;
        t = g_2;
      }
    t = g_2;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm y_73 (ATerm), ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL;
  c_3 = t;
  t = fork_0_0(t);
  b_3 = t;
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = c_3;
        t = y_73(t);
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        t = SSL_waitpid(b_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm b_18 = ATgetArgument(t, 0);
            if(((ATgetType(b_18) != AT_INT) || (ATgetInt((ATermInt) b_18) != 0)))
              _fail(t);
            {
              ATerm c_18 = ATgetArgument(t, 1);
            }
            {
              ATerm d_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = c_3;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm k_93 (ATerm), ATerm t)
{
  ATerm h_3 = NULL,k_3 = NULL;
  if(((k_3 != NULL) && (k_3 != t)))
    _fail(t);
  else
    k_3 = t;
  t = k_93(t);
  t = xtc_find_0_0(t);
  if(((h_3 != NULL) && (h_3 != t)))
    _fail(t);
  else
    h_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_3), not_null(k_3));
  {
    ATerm o_0 (ATerm t)
    {
      ATerm l_3 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_3), not_null(k_3));
      t = b_7(not_null(h_3), not_null(k_3), t);
      t = term_f_18;
      l_3 = t;
      t = SSL_exit(l_3);
      return(t);
    }
    t = fork_and_wait_1_0(o_0, t);
    t = not_null(k_3);
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm d_4 = NULL,f_4 = NULL;
  d_4 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm v_2 = NULL,w_2 = NULL;
      t = d_4;
      t = xtc_new_file_0_0(t);
      v_2 = t;
      t = m_0(t);
      w_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_2, (ATerm) ATinsert(ATinsert(ATempty, v_2), term_g_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(v_2);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_2);
    }
  else
    {
      ATerm f_3 = NULL,g_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          f_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_4;
      t = xtc_new_file_0_0(t);
      f_3 = t;
      t = m_0(t);
      g_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_3), term_g_18), f_4), term_h_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(f_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_3);
    }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm l_4 = NULL;
  ATerm r_0 (ATerm t)
  {
    ATerm n_4 = NULL,o_4 = NULL;
    n_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_4), n_4);
    t = w_7(not_null(l_4), n_4, t);
    o_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_4, o_4);
    return(t);
  }
  if(((l_4 != NULL) && (l_4 != t)))
    _fail(t);
  else
    l_4 = t;
  t = SSL_table_keys(not_null(l_4));
  t = map_1_0(r_0, t);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm c_91 (ATerm), ATerm t)
{
  ATerm r_4 = NULL;
  r_4 = t;
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_4 = NULL;
        t = term_k_18;
        t = get_config_0_0(t);
        u_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_4, term_b_14);
        t = geq_0_0(t);
        t = r_4;
        t = c_91(t);
        ;
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
        t = r_4;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm e_91 (ATerm), ATerm t)
{
  ATerm y_4 = NULL;
  y_4 = t;
  {
    ATerm m_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_5 = NULL;
        t = term_k_18;
        t = get_config_0_0(t);
        b_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_5, term_g_12);
        t = geq_0_0(t);
        t = y_4;
        t = e_91(t);
        ;
        LocalPopChoice(n_18);
      }
    else
      {
        t = m_18;
        t = y_4;
      }
  }
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm p_5 = NULL;
  if(match_cons(t, sym__2))
    {
      p_5 = ATgetArgument(t, 0);
      if((p_5 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm z_6 (ATerm r_47, ATerm s_47, ATerm t_47, ATerm t)
{
  ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL;
  f_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_47, s_47);
  {
    ATerm s_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_19 = ATgetArgument(t, 0);
            ATerm f_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_47, s_47);
        t = w_7(r_47, s_47, t);
        ;
        LocalPopChoice(u_18);
      }
    else
      {
        t = s_18;
        t = (ATerm) ATempty;
      }
    h_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_5, t_47);
    t = j_7(s_0, h_5, t_47, t);
    g_5 = t;
    t = SSL_table_put(r_47, s_47, g_5);
    t = f_5;
  }
  return(t);
}
ATerm a_7 (ATerm g_91 (ATerm), ATerm b_48, ATerm a_48, ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm q_5 = NULL,r_5 = NULL;
    if(match_cons(t, sym__2))
      {
        q_5 = ATgetArgument(t, 0);
        r_5 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(b_48), q_5, r_5);
    t = g_91(t);
    return(t);
  }
  t = not_null(a_48);
  t = map_1_0(t_0, t);
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = term_m_19;
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_o_19;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_5 = NULL,v_5 = NULL;
      s_5 = t;
      t = (ATerm) ATinsert(ATempty, term_s_19);
      v_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_5, (ATerm) ATinsert(ATempty, term_s_19));
      t = p_7(s_5, v_5, t);
      LocalPopChoice(r_19);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = q_19;
      {
        ATerm u_19 = t;
        int w_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_19 = t;
            if((PushChoice() == 0))
              {
                ATerm w_5 = NULL,x_5 = NULL;
                w_5 = t;
                t = (ATerm) ATinsert(ATempty, term_y_19);
                x_5 = t;
                t = (ATerm) ATmakeAppl(sym__2, w_5, (ATerm) ATinsert(ATempty, term_y_19));
                t = p_7(w_5, x_5, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_19;
              }
            t = debug_1_0(u_0, t);
            ;
            LocalPopChoice(w_19);
          }
        else
          {
            t = u_19;
            t = debug_1_0(v_0, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = debug_1_0(x_0, t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_a_20;
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = debug_1_0(b_1, t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_b_20;
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm r_6 = NULL,v_6 = NULL,x_6 = NULL;
  r_6 = t;
  t = term_u_17;
  v_6 = t;
  t = (ATerm) ATinsert(ATempty, term_c_20);
  x_6 = t;
  t = SSL_printnl(v_6, x_6);
  t = r_6;
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm y_6 = NULL,f_7 = NULL,c_8 = NULL;
  if(match_cons(t, sym__3))
    {
      y_6 = ATgetArgument(t, 0);
      f_7 = ATgetArgument(t, 1);
      c_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_6(y_6, f_7, c_8, t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL;
  d_8 = t;
  t = term_u_17;
  e_8 = t;
  t = (ATerm) ATinsert(ATempty, term_d_20);
  f_8 = t;
  t = SSL_printnl(e_8, f_8);
  t = d_8;
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm h_8 = NULL,j_8 = NULL,k_8 = NULL;
  h_8 = t;
  t = term_u_17;
  j_8 = t;
  t = (ATerm) ATinsert(ATempty, term_c_20);
  k_8 = t;
  t = SSL_printnl(j_8, k_8);
  t = h_8;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL;
  z_5 = t;
  t = if_verbose5_1_0(w_0, t);
  {
    ATerm e_20 = t;
    if((PushChoice() == 0))
      {
        ATerm m_6 = NULL,n_6 = NULL;
        t = term_f_20;
        m_6 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, z_5);
        n_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_20, (ATerm) ATmakeAppl(sym_Imported_1, z_5));
        t = w_7(m_6, n_6, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_20;
      }
    c_6 = t;
    t = term_f_20;
    h_6 = t;
    t = term_g_20;
    i_6 = t;
    t = (ATerm) ATinsert(ATempty, z_5);
    j_6 = t;
    t = SSL_table_put(h_6, i_6, j_6);
    t = c_6;
    t = if_verbose4_1_0(a_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(c_1, t);
    a_6 = t;
    t = term_f_20;
    g_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_f_20, a_6);
    t = a_7(d_1, g_6, a_6, t);
    t = if_verbose6_1_0(g_1, t);
    t = term_f_20;
    d_6 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, z_5);
    e_6 = t;
    t = (ATerm) ATempty;
    f_6 = t;
    t = SSL_table_put(d_6, e_6, f_6);
    t = (ATerm) ATmakeAppl(sym__3, term_f_20, (ATerm)ATmakeAppl(sym_Imported_1, z_5), (ATerm) ATempty);
    t = if_verbose4_1_0(i_1, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
  f_9 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_9;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_9 = ATgetFirst((ATermList) t);
          h_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm i_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_3 = NULL,s_3 = NULL,t_3 = NULL,n_0 = NULL;
            t = SSLgetAnnotations(f_9);
            p_3 = t;
            t = g_9;
            t = x_86(t);
            s_3 = t;
            t = h_9;
            t = filter_1_0(x_86, t);
            t_3 = t;
            t = (ATerm) ATinsert(CheckATermList(t_3), s_3);
            n_0 = t;
            t = SSLsetAnnotations(n_0, p_3);
            ;
            LocalPopChoice(j_20);
          }
        else
          {
            t = i_20;
            t = h_9;
            t = filter_1_0(x_86, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm r_88 (ATerm), ATerm t)
{
  ATerm q_9 (ATerm t)
  {
    ATerm k_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_88(t);
        t = q_9(t);
        ;
        LocalPopChoice(l_20);
      }
    else
      {
        t = k_20;
      }
    return(t);
  }
  t = q_9(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm m_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_20);
    }
  else
    {
      t = m_20;
      {
        ATerm r_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_9 = NULL;
            t = term_t_20;
            r_9 = t;
            t = SSL_getenv(r_9);
            ;
            LocalPopChoice(s_20);
          }
        else
          {
            t = r_20;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = debug_1_0(l_1, t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_u_20;
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL;
  t = term_f_20;
  d_10 = t;
  t = term_v_20;
  e_10 = t;
  t = term_w_20;
  t = w_7(d_10, e_10, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm x_20 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_20;
      }
  }
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = debug_1_0(q_1, t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_y_20;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm u_9 = NULL;
  t = if_verbose5_1_0(k_1, t);
  u_9 = t;
  {
    ATerm z_20 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_9 = NULL,z_9 = NULL;
        t = term_f_20;
        y_9 = t;
        t = term_g_20;
        z_9 = t;
        t = term_e_21;
        t = w_7(y_9, z_9, t);
        ;
        LocalPopChoice(d_21);
      }
    else
      {
        t = z_20;
        {
          ATerm c_10 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          c_10 = t;
          t = repeat_1_0(m_1, t);
          t = c_10;
        }
      }
    t = u_9;
    t = if_verbose5_1_0(n_1, t);
  }
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = debug_1_0(x_1, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_g_21;
  return(t);
}
ATerm t_11 (ATerm m_10, ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
  t = term_f_20;
  q_10 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, m_10);
  r_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_20, (ATerm) ATmakeAppl(sym_Tool_1, m_10));
  t = w_7(q_10, r_10, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_21 = ATgetFirst((ATermList) t);
      if(match_cons(h_21, sym__2))
        {
          ATerm k_21 = ATgetArgument(h_21, 0);
          p_10 = ATgetArgument(h_21, 1);
        }
      else
        _fail(t);
      {
        ATerm i_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_10;
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = debug_1_0(e_2, t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_g_21;
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_f_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(j_2, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_l_21;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_10 = NULL,u_10 = NULL,v_10 = NULL;
      t = if_verbose5_1_0(r_1, t);
      t = xtc_load_0_0(t);
      if(((v_10 != NULL) && (v_10 != t)))
        _fail(t);
      else
        v_10 = t;
      if(match_cons(t, sym__2))
        {
          s_10 = ATgetArgument(t, 0);
          u_10 = ATgetArgument(t, 1);
          {
            ATerm o_21 = t;
            int p_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_11 = NULL,i_11 = NULL,l_11 = NULL;
                t = term_f_20;
                if(((i_11 != NULL) && (i_11 != t)))
                  _fail(t);
                else
                  i_11 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, not_null(s_10));
                if(((l_11 != NULL) && (l_11 != t)))
                  _fail(t);
                else
                  l_11 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_f_20, (ATerm) ATmakeAppl(sym_Tool_1, not_null(s_10)));
                t = w_7(not_null(i_11), not_null(l_11), t);
                {
                  ATerm z_1 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if(((u_10 != NULL) && (u_10 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          u_10 = ATgetArgument(t, 0);
                        if(((b_11 != NULL) && (b_11 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          b_11 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(z_1, t);
                  t = not_null(b_11);
                }
                ;
                LocalPopChoice(p_21);
              }
            else
              {
                t = o_21;
                t = t_11(not_null(v_10), t);
              }
          }
        }
      else
        {
          t = t_11(not_null(v_10), t);
        }
      t = if_verbose5_1_0(c_2, t);
      ;
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      {
        ATerm s_11 = NULL,p_4 = NULL,q_4 = NULL;
        s_11 = t;
        t = term_u_17;
        p_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_21), s_11), term_r_21);
        q_4 = t;
        t = SSL_printnl(p_4, q_4);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_21), s_11), term_r_21);
        t = if_verbose5_1_0(i_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
  d_12 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_12;
    }
  else
    {
      ATerm l_2 (ATerm t)
      {
        t = not_null(f_12);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((e_12 != NULL) && (e_12 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            e_12 = ATgetFirst((ATermList) t);
          if(((f_12 != NULL) && (f_12 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(e_12);
      t = at_end_1_0(l_2, t);
    }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm v_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,a_13 = NULL,y_0 = NULL;
      ATerm y_21 = t;
      int z_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_13 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm a_22 = ATgetFirst((ATermList) t);
              if(((ATgetType(a_22) != AT_INT) || (ATgetInt((ATermInt) a_22) != 34)))
                _fail(t);
              b_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(b_13), term_c_22), term_b_22);
          ;
          LocalPopChoice(z_21);
        }
      else
        {
          t = y_21;
          {
            ATerm l_13 = NULL,m_13 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_13 = ATgetFirst((ATermList) t);
                m_13 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_13;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(m_13), term_b_22), term_b_22);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(m_13), term_f_22), term_b_22);
              }
          }
        }
      a_13 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_12 = ATgetFirst((ATermList) t);
          w_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_13);
      u_12 = t;
      t = w_12;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      x_12 = t;
      t = (ATerm) ATinsert(CheckATermList(x_12), v_12);
      y_0 = t;
      t = SSLsetAnnotations(y_0, u_12);
      ;
      LocalPopChoice(x_21);
    }
  else
    {
      t = v_21;
      {
        ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
        j_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_14 = ATgetFirst((ATermList) t);
            i_14 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm c_5 = NULL,j_5 = NULL,z_0 = NULL;
              t = SSLgetAnnotations(j_14);
              c_5 = t;
              t = i_14;
              t = escape_chars_0_0(t);
              j_5 = t;
              t = (ATerm) ATinsert(CheckATermList(j_5), h_14);
              z_0 = t;
              t = SSLsetAnnotations(z_0, c_5);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = j_14;
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm s_79 (ATerm), ATerm t)
{
  ATerm x_15 (ATerm t)
  {
    ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL;
    q_15 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_15 = ATgetFirst((ATermList) t);
        p_15 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_6 = NULL,q_6 = NULL,h_1 = NULL;
          t = SSLgetAnnotations(q_15);
          l_6 = t;
          t = p_15;
          t = x_15(t);
          q_6 = t;
          t = (ATerm) ATinsert(CheckATermList(q_6), o_15);
          h_1 = t;
          t = SSLsetAnnotations(h_1, l_6);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_15;
        t = s_79(t);
      }
    return(t);
  }
  t = x_15(t);
  return(t);
}
ATerm m_16 (ATerm b_16, ATerm t)
{
  ATerm d_16 = NULL;
  t = SSL_explode_term(b_16);
  if(match_cons(t, sym__2))
    {
      ATerm g_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_16;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
  if(((i_16 != NULL) && (i_16 != t)))
    _fail(t);
  else
    i_16 = t;
  if(match_cons(t, sym__2))
    {
      g_16 = ATgetArgument(t, 0);
      h_16 = ATgetArgument(t, 1);
      {
        ATerm h_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_2 (ATerm t)
            {
              t = not_null(h_16);
              return(t);
            }
            t = not_null(g_16);
            t = at_end_1_0(n_2, t);
            ;
            LocalPopChoice(j_22);
          }
        else
          {
            t = h_22;
            t = m_16(not_null(i_16), t);
          }
      }
    }
  else
    {
      t = m_16(not_null(i_16), t);
    }
  return(t);
}
ATerm EdgeToDot_0_0 (ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL;
  if(((v_17 != NULL) && (v_17 != t)))
    _fail(t);
  else
    v_17 = t;
  if(match_cons(t, sym__2))
    {
      if(((w_17 != NULL) && (w_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_17 = ATgetArgument(t, 0);
      if(((x_17 != NULL) && (x_17 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_8 = NULL,p_8 = NULL,s_8 = NULL,u_8 = NULL,t_9 = NULL,v_9 = NULL,x_9 = NULL,l_9 = NULL;
        t = SSL_explode_term(not_null(x_17));
        if(match_cons(t, sym__2))
          {
            if(((n_8 != NULL) && (n_8 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              n_8 = ATgetArgument(t, 0);
            if(((p_8 != NULL) && (p_8 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              p_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_explode_string(not_null(n_8));
        t = escape_chars_0_0(t);
        if(((l_9 != NULL) && (l_9 != t)))
          _fail(t);
        else
          l_9 = t;
        t = SSL_implode_string(not_null(l_9));
        if(((v_9 != NULL) && (v_9 != t)))
          _fail(t);
        else
          v_9 = t;
        t = SSL_explode_string(not_null(v_9));
        if(((x_9 != NULL) && (x_9 != t)))
          _fail(t);
        else
          x_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_9)), term_c_22), (ATerm) ATinsert(ATempty, term_c_22));
        t = conc_0_0(t);
        if(((t_9 != NULL) && (t_9 != t)))
          _fail(t);
        else
          t_9 = t;
        t = SSL_implode_string(not_null(t_9));
        if(((s_8 != NULL) && (s_8 != t)))
          _fail(t);
        else
          s_8 = t;
        t = not_null(p_8);
        {
          ATerm o_2 (ATerm t)
          {
            ATerm x_8 = NULL;
            x_8 = t;
            t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_17)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, x_8))));
            return(t);
          }
          t = map_1_0(o_2, t);
          if(((u_8 != NULL) && (u_8 != t)))
            _fail(t);
          else
            u_8 = t;
          t = (ATerm) ATinsert(CheckATermList(not_null(u_8)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_17)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_n_22, not_null(s_8)))))));
        }
        ;
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
        {
          ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL,w_10 = NULL,y_10 = NULL;
          t = SSL_is_int(not_null(x_17));
          t = SSL_int_to_string(not_null(x_17));
          y_10 = t;
          t = SSL_explode_string(y_10);
          t = escape_chars_0_0(t);
          w_10 = t;
          t = SSL_implode_string(w_10);
          j_10 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_22), j_10), term_o_22);
          k_10 = t;
          t = SSL_concat_strings(k_10);
          i_10 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_17)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_n_22, i_10))))));
        }
      }
  }
  return(t);
}
ATerm h_7 (ATerm n_60, ATerm o_60, ATerm t)
{
  ATerm e_18 = NULL;
  t = not_null(o_60);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(o_60);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm t_22 = ATgetFirst((ATermList) t);
          ATerm w_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(o_60);
    }
  t = not_null(o_60);
  {
    ATerm q_2 (ATerm t)
    {
      ATerm l_18 = NULL;
      l_18 = t;
      t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_60)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, l_18))));
      return(t);
    }
    t = map_1_0(q_2, t);
    if(((e_18 != NULL) && (e_18 != t)))
      _fail(t);
    else
      e_18 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(e_18)), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_60)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_a_23)))));
  }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm f_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
      p_18 = t;
      if(match_cons(t, sym__2))
        {
          q_18 = ATgetArgument(t, 0);
          r_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_18;
      t = h_7(q_18, r_18, t);
      ;
      LocalPopChoice(g_23);
    }
  else
    {
      t = f_23;
      t = EdgeToDot_0_0(t);
    }
  return(t);
}
ATerm graph_to_adot_0_0 (ATerm t)
{
  ATerm o_18 = NULL;
  t = map_1_0(r_2, t);
  t = concat_0_0(t);
  o_18 = t;
  t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_j_23, o_18);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,h_19 = NULL,i_19 = NULL;
  i_19 = t;
  t = SSL_address(i_19);
  d_19 = t;
  t = SSL_int_to_string(d_19);
  c_19 = t;
  t = term_k_23;
  h_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_23, c_19);
  t = v_7(h_19, c_19, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,n_19 = NULL,p_19 = NULL;
  p_19 = t;
  t = SSL_address(p_19);
  k_19 = t;
  t = SSL_int_to_string(k_19);
  j_19 = t;
  t = term_k_23;
  n_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_23, j_19);
  t = v_7(n_19, j_19, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm t_19 = NULL,v_19 = NULL;
  if(match_cons(t, sym__2))
    {
      t_19 = ATgetArgument(t, 0);
      v_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(z_2, t_19, v_19, t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm z_19 = NULL;
  if(match_cons(t, sym__2))
    {
      z_19 = ATgetArgument(t, 0);
      if((z_19 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm h_11 = NULL,j_11 = NULL;
  if(match_cons(t, sym__2))
    {
      h_11 = ATgetArgument(t, 0);
      j_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(e_3, h_11, j_11, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm k_11 = NULL;
  if(match_cons(t, sym__2))
    {
      k_11 = ATgetArgument(t, 0);
      if((k_11 != ATgetArgument(t, 1)))
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
  ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL;
  y_18 = t;
  t = SSL_address(y_18);
  a_19 = t;
  t = SSL_int_to_string(a_19);
  z_18 = t;
  t = term_k_23;
  b_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_23, z_18);
  t = v_7(b_19, z_18, t);
  v_18 = t;
  t = y_18;
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = map_1_0(s_2, t);
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        t = SRTS_all(t_2, t);
      }
    w_18 = t;
    t = y_18;
    {
      ATerm r_23 = t;
      int v_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = foldr_3_0(u_2, y_2, term_to_graph_0_0, t);
          ;
          LocalPopChoice(v_23);
        }
      else
        {
          t = r_23;
          {
            ATerm c_11 = NULL;
            t = SSL_explode_term(y_18);
            if(match_cons(t, sym__2))
              {
                ATerm w_23 = ATgetArgument(t, 0);
                c_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = c_11;
            t = foldr_3_0(a_3, d_3, term_to_graph_0_0, t);
          }
        }
      x_18 = t;
      t = (ATerm) ATinsert(CheckATermList(x_18), (ATerm) ATmakeAppl(sym__2, v_18, w_18));
    }
  }
  return(t);
}
ATerm i_7 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm h_36, ATerm g_36, ATerm t)
{
  t = k_83(t);
  {
    ATerm i_3 (ATerm t)
    {
      ATerm n_20 = NULL;
      n_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_36), n_20);
      t = j_83(t);
      return(t);
    }
    t = fetch_1_0(i_3, t);
    t = not_null(g_36);
  }
  return(t);
}
ATerm j_7 (ATerm g_83 (ATerm), ATerm d_36, ATerm c_36, ATerm t)
{
  ATerm j_21 (ATerm t)
  {
    ATerm b_21 = NULL,c_21 = NULL,f_21 = NULL;
    b_21 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(c_36);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_21 = ATgetFirst((ATermList) t);
            f_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm x_23 = t;
          int c_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_21;
              {
                ATerm j_3 (ATerm t)
                {
                  t = not_null(c_36);
                  return(t);
                }
                t = i_7(g_83, j_3, not_null(c_21), not_null(f_21), t);
                t = j_21(t);
              }
              ;
              LocalPopChoice(c_24);
            }
          else
            {
              t = x_23;
              {
                ATerm w_11 = NULL,z_11 = NULL,j_1 = NULL;
                t = SSLgetAnnotations(b_21);
                w_11 = t;
                t = f_21;
                t = j_21(t);
                z_11 = t;
                t = (ATerm) ATinsert(CheckATermList(z_11), c_21);
                j_1 = t;
                t = SSLsetAnnotations(j_1, w_11);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(d_36);
  t = j_21(t);
  return(t);
}
ATerm foldr_3_0 (ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,w_21 = NULL;
  s_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_21;
      t = w_85(t);
    }
  else
    {
      ATerm d_22 = NULL,e_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_21 = ATgetFirst((ATermList) t);
          w_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_21;
      t = y_85(t);
      d_22 = t;
      t = w_21;
      t = foldr_3_0(w_85, x_85, y_85, t);
      e_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_22, e_22);
      t = x_85(t);
    }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm d_91 (ATerm), ATerm t)
{
  ATerm i_22 = NULL;
  i_22 = t;
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_22 = NULL;
        t = term_k_18;
        t = get_config_0_0(t);
        k_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_22, term_w_16);
        t = geq_0_0(t);
        t = i_22;
        t = d_91(t);
        ;
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        t = i_22;
      }
  }
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = debug_1_0(n_3, t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_f_24;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL;
  m_23 = t;
  t = new_0_0(t);
  l_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_23, m_23);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL;
  o_23 = t;
  t = new_0_0(t);
  n_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_23, o_23);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL;
  t_23 = t;
  t = SSL_explode_term(t_23);
  if(match_cons(t, sym__2))
    {
      ATerm g_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_24 = ATgetArgument(t, 1);
        if(((ATgetType(h_24) == AT_LIST) && !(ATisEmpty(h_24))))
          {
            s_23 = ATgetFirst((ATermList) h_24);
            {
              ATerm i_24 = (ATerm) ATgetNext((ATermList) h_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_23;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm u_23 = NULL,y_23 = NULL;
  y_23 = t;
  t = SSL_explode_term(y_23);
  if(match_cons(t, sym__2))
    {
      ATerm j_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_24 = ATgetArgument(t, 1);
        if(((ATgetType(m_24) == AT_LIST) && !(ATisEmpty(m_24))))
          {
            u_23 = ATgetFirst((ATermList) m_24);
            {
              ATerm n_24 = (ATerm) ATgetNext((ATermList) m_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_23;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL;
  if(match_cons(t, sym__2))
    {
      z_23 = ATgetArgument(t, 0);
      a_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(z_3, z_23, a_24, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm b_24 = NULL;
  if(match_cons(t, sym__2))
    {
      b_24 = ATgetArgument(t, 0);
      if((b_24 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL;
  if(match_cons(t, sym__2))
    {
      r_12 = ATgetArgument(t, 0);
      s_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(g_4, r_12, s_12, t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm t_12 = NULL;
  if(match_cons(t, sym__2))
    {
      t_12 = ATgetArgument(t, 0);
      if((t_12 != ATgetArgument(t, 1)))
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
  ATerm p_22 = NULL,q_22 = NULL;
  ATerm k_24 (ATerm t)
  {
    ATerm r_22 = NULL,s_22 = NULL,u_22 = NULL,v_22 = NULL,x_22 = NULL,z_22 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,h_23 = NULL,i_23 = NULL,j_12 = NULL,p_1 = NULL,o_1 = NULL;
    i_23 = t;
    if(match_cons(t, sym__2))
      {
        c_23 = ATgetArgument(t, 0);
        d_23 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_23);
    b_23 = t;
    t = d_23;
    {
      ATerm p_24 = t;
      int x_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = map_1_0(o_3, t);
          ;
          LocalPopChoice(x_24);
        }
      else
        {
          t = p_24;
          t = SRTS_all(q_3, t);
        }
      e_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_23, e_23);
      o_1 = t;
      t = SSLsetAnnotations(o_1, b_23);
      h_23 = t;
      if(match_cons(t, sym__2))
        {
          u_22 = ATgetArgument(t, 0);
          v_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_23);
      s_22 = t;
      t = v_22;
      {
        ATerm z_24 = t;
        int a_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(r_3, t);
            ;
            LocalPopChoice(a_25);
          }
        else
          {
            t = z_24;
            t = SRTS_all(u_3, t);
          }
        x_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_22, x_22);
        p_1 = t;
        t = SSLsetAnnotations(p_1, s_22);
        z_22 = t;
        t = SSL_explode_term(h_23);
        if(match_cons(t, sym__2))
          {
            ATerm b_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_25) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm c_25 = ATgetArgument(t, 1);
              if(((ATgetType(c_25) == AT_LIST) && !(ATisEmpty(c_25))))
                {
                  ATerm e_25 = ATgetFirst((ATermList) c_25);
                  ATerm f_25 = (ATerm) ATgetNext((ATermList) c_25);
                  if(((ATgetType(f_25) == AT_LIST) && !(ATisEmpty(f_25))))
                    {
                      j_12 = ATgetFirst((ATermList) f_25);
                      {
                        ATerm h_25 = (ATerm) ATgetNext((ATermList) f_25);
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
        t = j_12;
        {
          ATerm i_25 = t;
          int k_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = foldr_3_0(w_3, x_3, k_24, t);
              ;
              LocalPopChoice(k_25);
            }
          else
            {
              t = i_25;
              {
                ATerm m_12 = NULL;
                t = SSL_explode_term(j_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm l_25 = ATgetArgument(t, 0);
                    m_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_12;
                t = foldr_3_0(b_4, e_4, k_24, t);
              }
            }
          r_22 = t;
          t = (ATerm) ATinsert(CheckATermList(r_22), z_22);
        }
      }
    }
    return(t);
  }
  t = if_verbose5_1_0(m_3, t);
  if(((q_22 != NULL) && (q_22 != t)))
    _fail(t);
  else
    q_22 = t;
  t = new_0_0(t);
  if(((p_22 != NULL) && (p_22 != t)))
    _fail(t);
  else
    p_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_22), not_null(q_22));
  t = k_24(t);
  return(t);
}
ATerm to_adot_0_0 (ATerm t)
{
  ATerm l_24 = NULL;
  l_24 = t;
  {
    ATerm n_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_25;
        t = get_config_0_0(t);
        t = l_24;
        t = term_to_tree_0_0(t);
        ;
        LocalPopChoice(o_25);
      }
    else
      {
        t = n_25;
        t = term_r_25;
        t = get_config_0_0(t);
        t = l_24;
        t = term_to_graph_0_0(t);
      }
    t = graph_to_adot_0_0(t);
  }
  return(t);
}
ATerm k_7 (ATerm e_29, ATerm f_29, ATerm t)
{
  ATerm o_24 = NULL;
  t = SSL_write_term_to_stream_baf(e_29, f_29);
  o_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_24);
  return(t);
}
ATerm l_7 (ATerm j_75 (ATerm), ATerm t_184, ATerm m_29, ATerm t)
{
  ATerm q_24 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_184, term_w_25);
  t = open_stream_0_0(t);
  q_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_24, m_29);
  t = j_75(t);
  t = fclose_0_0(t);
  t = m_29;
  return(t);
}
ATerm m_7 (ATerm v_89 (ATerm), ATerm d_46, ATerm b_46, ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL;
  u_24 = t;
  t = v_89(t);
  r_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_24, d_46, b_46);
  t = x_7(r_24, d_46, b_46, t);
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_24 = NULL;
        t = term_d_26;
        y_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_24, term_d_26);
        t = w_7(r_24, y_24, t);
        ;
        LocalPopChoice(y_25);
      }
    else
      {
        t = x_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_24 = ATgetFirst((ATermList) t);
        t_24 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_d_26;
    v_24 = t;
    t = (ATerm) ATinsert(CheckATermList(t_24), (ATerm) ATinsert(CheckATermList(s_24), d_46));
    w_24 = t;
    t = SSL_table_put(r_24, v_24, w_24);
    t = u_24;
  }
  return(t);
}
ATerm u_25 (ATerm d_25, ATerm t)
{
  t = d_25;
  {
    ATerm f_26 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_26 = ATgetArgument(t, 0);
            ATerm j_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_26;
      }
    t = term_k_26;
    t = debug_1_0(h_4, t);
    t = (ATerm) ATmakeAppl(sym__2, d_25, term_w_25);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm v_25 (ATerm g_25, ATerm j_25, ATerm m_25, ATerm t)
{
  t = SSL_open_file(g_25, j_25);
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_m_26;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm q_25 = NULL,s_25 = NULL,t_25 = NULL;
  q_25 = t;
  if(match_cons(t, sym__2))
    {
      s_25 = ATgetArgument(t, 0);
      t_25 = ATgetArgument(t, 1);
      {
        ATerm n_26 = t;
        int p_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_25(q_25, t);
            ;
            LocalPopChoice(p_26);
          }
        else
          {
            t = n_26;
            t = v_25(s_25, t_25, q_25, t);
          }
      }
    }
  else
    {
      t = u_25(q_25, t);
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
  ATerm z_25 = NULL,c_26 = NULL,e_26 = NULL;
  t = term_s_26;
  t = new_0_0(t);
  z_25 = t;
  t = term_t_26;
  c_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_25, term_t_26);
  t = v_7(z_25, c_26, t);
  e_26 = t;
  {
    ATerm v_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_26 = NULL;
        t = (ATerm) ATinsert(ATempty, term_y_19);
        l_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_26, (ATerm) ATinsert(ATempty, term_y_19));
        t = p_7(e_26, l_26, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(y_26);
      }
    else
      {
        t = v_26;
        t = e_26;
      }
  }
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_z_26;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm o_26 = NULL,q_26 = NULL;
  t = new_file_0_0(t);
  o_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_26, term_w_25);
  t = open_file_0_0(t);
  t = term_s_26;
  q_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_26, term_s_26);
  t = m_7(i_4, o_26, q_26, t);
  t = o_26;
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_27 = ATgetArgument(t, 0);
      if(match_cons(a_27, sym_Stream_1))
        {
          w_26 = ATgetArgument(a_27, 0);
        }
      else
        _fail(t);
      x_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(w_26, x_26, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm r_26 = NULL,u_26 = NULL;
  r_26 = t;
  t = xtc_new_file_0_0(t);
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_26, r_26);
  t = l_7(j_4, u_26, r_26, t);
  t = SSL_close_file(u_26);
  t = (ATerm) ATmakeAppl(sym_FILE_1, u_26);
  return(t);
}
ATerm u_27 (ATerm i_27, ATerm t)
{
  t = SSL_fclose(i_27);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL;
  o_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_27 = ATgetArgument(t, 0);
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_27);
            ;
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            t = u_27(o_27, t);
          }
      }
    }
  else
    {
      t = u_27(o_27, t);
    }
  return(t);
}
ATerm n_7 (ATerm k_29, ATerm t)
{
  t = SSL_read_term_from_stream(k_29);
  return(t);
}
ATerm o_7 (ATerm g_50, ATerm h_50, ATerm t)
{
  ATerm v_27 = NULL;
  t = SSL_fopen(g_50, h_50);
  v_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_27);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_27 = NULL;
  t = SSL_stdin_stream();
  w_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_27);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_27 = NULL;
  t = SSL_stdout_stream();
  x_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_27);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_28 = NULL;
  t = SSL_stderr_stream();
  a_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_28);
  return(t);
}
ATerm t_29 (ATerm i_28, ATerm t)
{
  ATerm j_28 = NULL;
  t = SSL_explode_term(i_28);
  if(match_cons(t, sym__2))
    {
      ATerm d_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_27 = ATgetArgument(t, 1);
        if(((ATgetType(e_27) == AT_LIST) && !(ATisEmpty(e_27))))
          {
            j_28 = ATgetFirst((ATermList) e_27);
            {
              ATerm f_27 = (ATerm) ATgetNext((ATermList) e_27);
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
  return(t);
}
ATerm u_29 (ATerm o_28, ATerm p_28, ATerm r_28, ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,x_28 = NULL,s_1 = NULL;
  t = SSLgetAnnotations(r_28);
  u_28 = t;
  t = o_28;
  if(match_cons(t, sym_Path_1))
    {
      x_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_28, p_28);
  s_1 = t;
  t = SSLsetAnnotations(s_1, u_28);
  if(match_cons(t, sym__2))
    {
      s_28 = ATgetArgument(t, 0);
      t_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_7(s_28, t_28, t);
  return(t);
}
ATerm v_29 (ATerm z_28, ATerm a_29, ATerm b_29, ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,i_29 = NULL,o_29 = NULL,y_1 = NULL;
  t = SSLgetAnnotations(b_29);
  i_29 = t;
  t = SSL_is_string(z_28);
  o_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_29, a_29);
  y_1 = t;
  t = SSLsetAnnotations(y_1, i_29);
  if(match_cons(t, sym__2))
    {
      c_29 = ATgetArgument(t, 0);
      d_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_7(c_29, d_29, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_27 = ATgetArgument(t, 0);
      ATerm h_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  q_29 = t;
  if(match_cons(t, sym__2))
    {
      r_29 = ATgetArgument(t, 0);
      s_29 = ATgetArgument(t, 1);
      {
        ATerm j_27 = t;
        int k_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_29(q_29, t);
            ;
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
                  t = u_29(r_29, s_29, q_29, t);
                  ;
                  LocalPopChoice(m_27);
                }
              else
                {
                  t = l_27;
                  t = v_29(r_29, s_29, q_29, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_29(q_29, t);
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_p_27;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL;
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_29 = NULL;
      z_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_29, term_s_27);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      t = debug_1_0(m_4, t);
      _fail(t);
    }
  x_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_7(y_29, t);
  w_29 = t;
  t = x_29;
  t = fclose_0_0(t);
  t = w_29;
  return(t);
}
ATerm p_7 (ATerm y_49, ATerm z_49, ATerm t)
{
  t = SSL_access(y_49, z_49);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm e_30 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_t_27;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm h_30 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          e_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_y_19);
      h_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_30, (ATerm) ATinsert(ATempty, term_y_19));
      t = p_7(e_30, h_30, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm v_93 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = v_93(t);
  t = write_to_0_0(t);
  return(t);
}
ATerm q_7 (ATerm g_26, ATerm h_26, ATerm t)
{
  t = SSL_copy(g_26, h_26);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm g_31 = NULL,j_31 = NULL;
  g_31 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_13 = NULL;
        t = g_31;
        t = k_0(t);
        k_13 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = k_13;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = k_13;
          }
        t = (ATerm) ATmakeAppl(sym__2, j_31, k_13);
        t = q_7(j_31, k_13, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_31);
        ;
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        {
          ATerm b_28 = t;
          int c_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_13 = NULL;
              t = g_31;
              t = k_0(t);
              y_13 = t;
              {
                ATerm d_28 = t;
                if((PushChoice() == 0))
                  {
                    ATerm e_14 = NULL;
                    e_14 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = e_14;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = e_14;
                          }
                        else
                          {
                            t = e_14;
                            if((j_31 != t))
                              {
                                _fail(t);
                              }
                            t = e_14;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = d_28;
                  }
                t = (ATerm) ATmakeAppl(sym__2, j_31, y_13);
                t = q_7(j_31, y_13, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, j_31);
              }
              ;
              LocalPopChoice(c_28);
            }
          else
            {
              t = b_28;
              t = g_31;
              t = k_0(t);
              if((j_31 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_31);
            }
        }
      }
  }
  return(t);
}
ATerm r_7 (ATerm z_46, ATerm a_47, ATerm t)
{
  ATerm o_31 = NULL,r_31 = NULL;
  r_31 = t;
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_46, a_47);
        t = w_7(z_46, a_47, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_28 = ATgetFirst((ATermList) t);
            o_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(f_28);
        t = SSL_table_put(z_46, a_47, o_31);
        t = (ATerm) ATmakeAppl(sym__3, z_46, a_47, o_31);
      }
    else
      {
        t = e_28;
        t = SSL_table_remove(z_46, a_47);
        t = (ATerm) ATmakeAppl(sym__2, z_46, a_47);
      }
    t = r_31;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm s_89 (ATerm), ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,d_32 = NULL;
  if(((b_32 != NULL) && (b_32 != t)))
    _fail(t);
  else
    b_32 = t;
  t = s_89(t);
  if(((a_32 != NULL) && (a_32 != t)))
    _fail(t);
  else
    a_32 = t;
  {
    ATerm h_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_32 = NULL;
        t = term_d_26;
        e_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_32), term_d_26);
        t = w_7(not_null(a_32), e_32, t);
        ;
        LocalPopChoice(k_28);
      }
    else
      {
        t = h_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((z_31 != NULL) && (z_31 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          z_31 = ATgetFirst((ATermList) t);
        if(((y_31 != NULL) && (y_31 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          y_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_d_26;
    if(((d_32 != NULL) && (d_32 != t)))
      _fail(t);
    else
      d_32 = t;
    t = SSL_table_put(not_null(a_32), not_null(d_32), not_null(y_31));
    t = not_null(z_31);
    {
      ATerm s_4 (ATerm t)
      {
        ATerm f_32 = NULL;
        f_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_32), f_32);
        t = r_7(not_null(a_32), f_32, t);
        return(t);
      }
      t = map_1_0(s_4, t);
      t = not_null(b_32);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm t)
{
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_90(t);
      t = o_90(t);
      ;
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      t = o_90(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm r_89 (ATerm), ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL;
  j_32 = t;
  t = r_89(t);
  i_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_32, term_d_26);
  {
    ATerm n_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_32 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm v_28 = ATgetArgument(t, 0);
            ATerm w_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_d_26;
        s_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_32, term_d_26);
        t = w_7(i_32, s_32, t);
        ;
        LocalPopChoice(q_28);
      }
    else
      {
        t = n_28;
        t = (ATerm) ATempty;
      }
    m_32 = t;
    t = term_d_26;
    n_32 = t;
    t = (ATerm) ATinsert(CheckATermList(m_32), (ATerm) ATempty);
    o_32 = t;
    t = SSL_table_put(i_32, n_32, o_32);
    t = j_32;
  }
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_z_26;
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm c_33 = NULL;
  c_33 = t;
  {
    ATerm y_28 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(c_33);
        ;
        LocalPopChoice(g_29);
      }
    else
      {
        t = y_28;
        t = c_33;
      }
  }
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_z_26;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm w_92 (ATerm), ATerm t)
{
  ATerm w_32 = NULL;
  ATerm v_4 (ATerm t)
  {
    ATerm x_32 = NULL;
    x_32 = t;
    {
      ATerm h_29 = t;
      int j_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_32 = NULL,z_32 = NULL;
          t = term_z_26;
          y_32 = t;
          t = term_d_26;
          z_32 = t;
          t = term_l_29;
          t = w_7(y_32, z_32, t);
          ;
          LocalPopChoice(j_29);
        }
      else
        {
          t = h_29;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((w_32 != NULL) && (w_32 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            w_32 = ATgetFirst((ATermList) t);
          {
            ATerm n_29 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(w_32);
      t = map_1_0(w_4, t);
      t = x_32;
      t = end_scope_1_0(x_4, t);
    }
    return(t);
  }
  t = begin_scope_1_0(t_4, t);
  t = restore_always_2_0(w_92, v_4, t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm p_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_30);
    }
  else
    {
      t = p_29;
      t = term_b_30;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm x_92 (ATerm), ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_33 = NULL;
        t = term_h_18;
        t = get_config_0_0(t);
        h_33 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_33);
        ;
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
        t = term_t_27;
      }
    t = x_92(t);
    t = copy_to_1_0(a_5, t);
    return(t);
  }
  t = xtc_temp_files_1_0(z_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,r_33 = NULL;
  k_33 = t;
  t = term_s_26;
  t = whoami_0_0(t);
  l_33 = t;
  t = term_u_17;
  n_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_30), l_33), term_f_30);
  r_33 = t;
  t = SSL_printnl(n_33, r_33);
  t = term_n_11;
  m_33 = t;
  t = SSL_exit(m_33);
  t = k_33;
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm x_33 = NULL;
  x_33 = t;
  if(match_string(t, "-k"))
    {
      t = x_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_33;
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
  a_34 = t;
  t = SSL_string_to_int(a_34);
  b_34 = t;
  t = term_i_30;
  c_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_30, b_34);
  t = z_7(c_34, b_34, t);
  t = a_34;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_j_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_5, e_5, i_5, t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm g_34 = NULL;
  g_34 = t;
  if(match_string(t, "-S"))
    {
      t = g_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_34;
    }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL;
  t = term_k_18;
  h_34 = t;
  t = term_k_30;
  i_34 = t;
  t = term_l_30;
  t = z_7(h_34, i_34, t);
  t = term_m_30;
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_n_30;
  return(t);
}
ATerm n_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm m_34 = NULL,q_34 = NULL,r_34 = NULL;
  m_34 = t;
  t = SSL_string_to_int(m_34);
  q_34 = t;
  t = term_k_18;
  r_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_18, q_34);
  t = z_7(r_34, q_34, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_34);
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_o_30;
  return(t);
}
ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL;
  t = term_p_30;
  s_34 = t;
  t = term_s_26;
  t_34 = t;
  t = term_q_30;
  t = z_7(s_34, t_34, t);
  t = term_r_30;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_s_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_30 = t;
  int u_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_5, l_5, m_5, t);
      ;
      LocalPopChoice(u_30);
    }
  else
    {
      t = t_30;
      {
        ATerm v_30 = t;
        int w_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_5, o_5, t_5, t);
            ;
            LocalPopChoice(w_30);
          }
        else
          {
            t = v_30;
            t = Option_3_0(u_5, y_5, b_6, t);
          }
      }
    }
  return(t);
}
ATerm z_7 (ATerm u_48, ATerm v_48, ATerm t)
{
  ATerm u_34 = NULL;
  t = term_x_30;
  u_34 = t;
  t = SSL_table_put(u_34, u_48, v_48);
  t = (ATerm) ATmakeAppl(sym__3, term_x_30, u_48, v_48);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
      t = term_s_26;
      t = d_0(t);
      z_34 = t;
      t = term_y_30;
      a_35 = t;
      t = term_z_30;
      b_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_30, term_z_30, z_34);
      t = x_7(a_35, b_35, z_34, t);
      _fail(t);
    }
  else
    {
      ATerm e_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_34 = ATgetFirst((ATermList) t);
          y_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_34;
      t = a_0(t);
      t = term_s_26;
      t = c_0(t);
      e_35 = t;
      t = (ATerm) ATinsert(CheckATermList(y_34), e_35);
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm i_35 = NULL;
  i_35 = t;
  if(match_string(t, "-o"))
    {
      t = i_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_35;
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm j_35 = NULL,l_35 = NULL;
  j_35 = t;
  t = term_g_18;
  l_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_18, j_35);
  t = z_7(l_35, j_35, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_35);
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_a_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_6, o_6, p_6, t);
  return(t);
}
ATerm x_7 (ATerm u_46, ATerm v_46, ATerm t_46, ATerm t)
{
  ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL;
  o_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_46, v_46);
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_31 = ATgetArgument(t, 0);
            ATerm e_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_46, v_46);
        t = w_7(u_46, v_46, t);
        ;
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
        t = (ATerm) ATempty;
      }
    p_35 = t;
    t = (ATerm) ATinsert(CheckATermList(p_35), t_46);
    q_35 = t;
    t = SSL_table_put(u_46, v_46, q_35);
    t = o_35;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_36 = NULL,e_36 = NULL,f_36 = NULL;
      t = term_s_26;
      t = j_0(t);
      b_36 = t;
      t = term_y_30;
      e_36 = t;
      t = term_z_30;
      f_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_30, term_z_30, b_36);
      t = x_7(e_36, f_36, b_36, t);
      _fail(t);
    }
  else
    {
      ATerm o_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_35 = ATgetFirst((ATermList) t);
          y_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_35;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_35 = ATgetFirst((ATermList) t);
          a_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_35;
      t = h_0(t);
      t = z_35;
      t = i_0(t);
      o_36 = t;
      t = (ATerm) ATinsert(CheckATermList(a_36), o_36);
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm q_36 = NULL;
  q_36 = t;
  if(match_string(t, "-i"))
    {
      t = q_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_36;
    }
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL;
  r_36 = t;
  t = term_h_18;
  s_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_18, r_36);
  t = z_7(s_36, r_36, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_36);
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_f_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_6, t_6, u_6, t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--graph", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL;
  t = term_r_25;
  t_36 = t;
  t = term_s_26;
  u_36 = t;
  t = term_h_31;
  t = z_7(t_36, u_36, t);
  t = term_i_31;
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_k_31;
  return(t);
}
ATerm t_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tree", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL;
  t = term_p_25;
  v_36 = t;
  t = term_s_26;
  w_36 = t;
  t = term_l_31;
  t = z_7(v_36, w_36, t);
  t = term_m_31;
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = term_n_31;
  return(t);
}
ATerm term_to_adot_options_0_0 (ATerm t)
{
  ATerm p_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_6, c_7, g_7, t);
      ;
      LocalPopChoice(q_31);
    }
  else
    {
      t = p_31;
      t = Option_3_0(t_7, u_7, y_7, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_26;
  t = whoami_0_0(t);
  x_36 = t;
  t = term_u_17;
  z_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_31), x_36);
  a_37 = t;
  t = SSL_printnl(z_36, a_37);
  t = term_n_11;
  y_36 = t;
  t = SSL_exit(y_36);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_t_31;
  t = get_config_0_0(t);
  return(t);
}
ATerm s_7 (ATerm p_44, ATerm q_44, ATerm t)
{
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_44, q_44);
      ;
      LocalPopChoice(v_31);
    }
  else
    {
      t = u_31;
      t = SSL_addr(p_44, q_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
  c_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_37;
      t = u_85(t);
    }
  else
    {
      ATerm h_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_37 = ATgetFirst((ATermList) t);
          e_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_37;
      t = foldr_2_0(u_85, v_85, t);
      h_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_37, h_37);
      t = v_85(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_k_30;
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm w_14 = NULL,y_14 = NULL;
  if(match_cons(t, sym__2))
    {
      w_14 = ATgetArgument(t, 0);
      y_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(w_14, y_14, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_37 = NULL,q_14 = NULL,t_14 = NULL;
  t = times_0_0(t);
  t_14 = t;
  t = SSL_explode_term(t_14);
  if(match_cons(t, sym__2))
    {
      ATerm w_31 = ATgetArgument(t, 0);
      q_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_14;
  t = foldr_2_0(a_8, b_8, t);
  k_37 = t;
  t = SSL_TicksToSeconds(k_37);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  z_37 = t;
  if(match_cons(t, sym__2))
    {
      a_38 = ATgetArgument(t, 0);
      b_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_31 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_38;
        if((a_38 != t))
          {
            _fail(t);
          }
        t = z_37;
        ;
        LocalPopChoice(c_32);
      }
    else
      {
        t = x_31;
        t = (ATerm) ATmakeAppl(sym__2, a_38, b_38);
        {
          ATerm g_32 = t;
          int h_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_38, b_38);
              ;
              LocalPopChoice(h_32);
            }
          else
            {
              t = g_32;
              t = SSL_gtr(a_38, b_38);
            }
          t = (ATerm) ATmakeAppl(sym__2, a_38, b_38);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_90 (ATerm), ATerm t)
{
  ATerm f_38 = NULL;
  f_38 = t;
  {
    ATerm k_32 = t;
    int l_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_38 = NULL;
        t = term_k_18;
        t = get_config_0_0(t);
        h_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_38, term_n_11);
        t = geq_0_0(t);
        t = f_38;
        t = z_90(t);
        ;
        LocalPopChoice(l_32);
      }
    else
      {
        t = k_32;
        t = f_38;
      }
  }
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL,m_38 = NULL,n_38 = NULL;
  t = run_time_0_0(t);
  j_38 = t;
  t = term_s_26;
  t = whoami_0_0(t);
  k_38 = t;
  t = term_u_17;
  m_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_32), j_38), term_z_10), k_38);
  n_38 = t;
  t = SSL_printnl(m_38, n_38);
  t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_32), j_38), term_z_10), k_38));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_30;
  o_38 = t;
  t = SSL_exit(o_38);
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL;
  x_38 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = x_38;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          w_38 = ATgetArgument(t, 0);
          {
            ATerm u_15 = NULL,k_2 = NULL;
            t = SSLgetAnnotations(x_38);
            u_15 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, w_38);
            k_2 = t;
            t = SSLsetAnnotations(k_2, u_15);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = x_38;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_94 (ATerm), ATerm t)
{
  ATerm q_32 = t;
  int r_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_32);
    }
  else
    {
      t = q_32;
      t = fetch_1_0(i_8, t);
    }
  t = y_94(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_39 = ATgetFirst((ATermList) t);
      b_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_39 = NULL,g_39 = NULL;
        ATerm l_8 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_39)), not_null(g_39));
          return(t);
        }
        t = not_null(b_39);
        t = g_0(t);
        if(((f_39 != NULL) && (f_39 != t)))
          _fail(t);
        else
          f_39 = t;
        t = not_null(a_39);
        t = e_0(t);
        if(((g_39 != NULL) && (g_39 != t)))
          _fail(t);
        else
          g_39 = t;
        t = not_null(b_39);
        t = reverse_acc_2_0(e_0, l_8, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_26;
      t = g_0(t);
    }
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL,m_2 = NULL;
  m_39 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_39);
  k_39 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_39);
  m_2 = t;
  t = SSLsetAnnotations(m_2, k_39);
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm o_39 = NULL;
  o_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_39), term_u_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL;
  ATerm v_32 = t;
  int a_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_33);
    }
  else
    {
      t = v_32;
      t = fetch_1_0(m_8, t);
    }
  t = term_b_33;
  t = echo_0_0(t);
  t = term_y_30;
  i_39 = t;
  t = term_z_30;
  j_39 = t;
  t = term_d_33;
  t = w_7(i_39, j_39, t);
  t = reverse_acc_2_0(_id, o_8, t);
  t = map_1_0(q_8, t);
  return(t);
}
ATerm fetch_1_0 (ATerm m_79 (ATerm), ATerm t)
{
  ATerm l_40 (ATerm t)
  {
    ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL;
    i_40 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_40 = ATgetFirst((ATermList) t);
        k_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_33 = t;
      int f_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_16 = NULL,q_16 = NULL,x_2 = NULL;
          t = SSLgetAnnotations(i_40);
          n_16 = t;
          t = j_40;
          t = m_79(t);
          q_16 = t;
          t = (ATerm) ATinsert(CheckATermList(k_40), q_16);
          x_2 = t;
          t = SSLsetAnnotations(x_2, n_16);
          ;
          LocalPopChoice(f_33);
        }
      else
        {
          t = e_33;
          {
            ATerm j_17 = NULL,t_17 = NULL,v_3 = NULL;
            t = SSLgetAnnotations(i_40);
            j_17 = t;
            t = k_40;
            t = l_40(t);
            t_17 = t;
            t = (ATerm) ATinsert(CheckATermList(t_17), j_40);
            v_3 = t;
            t = SSLsetAnnotations(v_3, j_17);
          }
        }
    }
    return(t);
  }
  t = l_40(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
  p_40 = t;
  {
    ATerm g_33 = t;
    int i_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_40;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_33 = ATgetFirst((ATermList) t);
                ATerm o_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_40;
          }
        ;
        LocalPopChoice(i_33);
      }
    else
      {
        t = g_33;
        t = (ATerm) ATinsert(ATempty, p_40);
      }
    q_40 = t;
    t = term_b_30;
    r_40 = t;
    t = SSL_printnl(r_40, q_40);
    t = p_40;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_t_31;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm v_7 (ATerm l_43, ATerm m_43, ATerm t)
{
  t = SSL_strcat(l_43, m_43);
  return(t);
}
ATerm debug_1_0 (ATerm h_75 (ATerm), ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL;
  v_40 = t;
  t = h_75(t);
  w_40 = t;
  t = term_u_17;
  x_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_40), w_40);
  y_40 = t;
  t = SSL_printnl(x_40, y_40);
  t = v_40;
  return(t);
}
ATerm map_1_0 (ATerm c_79 (ATerm), ATerm t)
{
  ATerm n_41 (ATerm t)
  {
    ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
    k_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_41;
      }
    else
      {
        ATerm t_18 = NULL,g_19 = NULL,l_19 = NULL,y_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_41 = ATgetFirst((ATermList) t);
            m_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_41);
        t_18 = t;
        t = l_41;
        t = c_79(t);
        g_19 = t;
        t = m_41;
        t = n_41(t);
        l_19 = t;
        t = (ATerm) ATinsert(CheckATermList(l_19), g_19);
        y_3 = t;
        t = SSLsetAnnotations(y_3, t_18);
      }
    return(t);
  }
  t = n_41(t);
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(q_33);
    }
  else
    {
      t = p_33;
    }
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = term_s_33;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_33 = t;
  int u_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_41 = NULL;
      v_41 = t;
      t = SSL_is_string(v_41);
      ;
      LocalPopChoice(u_33);
    }
  else
    {
      t = t_33;
      {
        ATerm v_33 = t;
        int w_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(r_8, t);
            ;
            LocalPopChoice(w_33);
          }
        else
          {
            t = v_33;
            {
              ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL;
              b_42 = t;
              if(match_cons(t, sym_Path_1))
                {
                  c_42 = ATgetArgument(t, 0);
                  t = c_42;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_42 = ATgetArgument(t, 0);
                      t = c_42;
                      {
                        ATerm y_33 = t;
                        int z_33 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(z_33);
                          }
                        else
                          {
                            t = y_33;
                            t = debug_1_0(t_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm h_42 = NULL,i_42 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_42 = ATgetArgument(t, 0);
                          d_42 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_42;
                      t = eval_config_0_0(t);
                      h_42 = t;
                      t = d_42;
                      t = eval_config_0_0(t);
                      i_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_42, i_42);
                      t = v_7(h_42, i_42, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm w_7 (ATerm l_48, ATerm m_48, ATerm t)
{
  t = SSL_table_get(l_48, m_48);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL;
  m_42 = t;
  t = term_x_30;
  n_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_30, m_42);
  t = w_7(n_42, m_42, t);
  {
    ATerm d_34 = t;
    int e_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_42 = NULL,p_42 = NULL;
        t = eval_config_0_0(t);
        o_42 = t;
        t = term_x_30;
        p_42 = t;
        t = SSL_table_put(p_42, m_42, o_42);
        t = o_42;
        ;
        LocalPopChoice(e_34);
      }
    else
      {
        t = d_34;
      }
  }
  return(t);
}
ATerm v_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm s_42 = NULL,t_42 = NULL;
  t = term_f_34;
  s_42 = t;
  t = term_s_26;
  t_42 = t;
  t = term_j_34;
  t = z_7(s_42, t_42, t);
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_k_34;
  return(t);
}
ATerm z_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL;
  t = term_f_34;
  w_42 = t;
  t = term_s_26;
  x_42 = t;
  t = term_j_34;
  t = z_7(w_42, x_42, t);
  t = term_l_34;
  u_42 = t;
  t = term_s_26;
  v_42 = t;
  t = term_n_34;
  t = z_7(u_42, v_42, t);
  t = term_o_34;
  return(t);
}
ATerm b_9 (ATerm t)
{
  t = term_p_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_34 = t;
  int w_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_8, w_8, y_8, t);
      ;
      LocalPopChoice(w_34);
    }
  else
    {
      t = v_34;
      t = Option_3_0(z_8, a_9, b_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_65 (ATerm), ATerm o_65 (ATerm), ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,a_4 = NULL;
  d_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_42 = ATgetFirst((ATermList) t);
      a_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_43);
  y_42 = t;
  t = z_42;
  t = n_65(t);
  b_43 = t;
  t = a_43;
  t = o_65(t);
  c_43 = t;
  t = (ATerm) ATinsert(CheckATermList(c_43), b_43);
  a_4 = t;
  t = SSLsetAnnotations(a_4, y_42);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_96 (ATerm), ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,n_43 = NULL,p_43 = NULL,q_43 = NULL,c_4 = NULL;
  if(((i_43 != NULL) && (i_43 != t)))
    _fail(t);
  else
    i_43 = t;
  {
    ATerm c_35 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_35;
        t = w_96(t);
        ;
        LocalPopChoice(d_35);
      }
    else
      {
        t = c_35;
      }
    t = not_null(i_43);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((k_43 != NULL) && (k_43 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          k_43 = ATgetFirst((ATermList) t);
        if(((n_43 != NULL) && (n_43 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          n_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(i_43));
    if(((j_43 != NULL) && (j_43 != t)))
      _fail(t);
    else
      j_43 = t;
    t = term_t_31;
    if(((q_43 != NULL) && (q_43 != t)))
      _fail(t);
    else
      q_43 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_31, not_null(k_43));
    t = z_7(not_null(q_43), not_null(k_43), t);
    t = not_null(n_43);
    {
      ATerm a_44 (ATerm t)
      {
        ATerm g_35 = t;
        int h_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_35 = t;
            int m_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_43 = NULL;
                t_43 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = t_43;
                ;
                LocalPopChoice(m_35);
              }
            else
              {
                t = k_35;
                t = w_96(t);
                t = Cons_2_0(_id, a_44, t);
              }
            ;
            LocalPopChoice(h_35);
          }
        else
          {
            t = g_35;
            {
              ATerm w_43 = NULL,x_43 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_43 = ATgetFirst((ATermList) t);
                  x_43 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(x_43), (ATerm) ATmakeAppl(sym_Undefined_1, w_43));
            }
          }
        return(t);
      }
      t = a_44(t);
      if(((p_43 != NULL) && (p_43 != t)))
        _fail(t);
      else
        p_43 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(p_43)), (ATerm) ATmakeAppl(sym_Program_1, not_null(k_43)));
      if(((c_4 != NULL) && (c_4 != t)))
        _fail(t);
      else
        c_4 = t;
      t = SSLsetAnnotations(not_null(c_4), not_null(j_43));
    }
  }
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm m_44 = NULL;
  m_44 = t;
  if(match_string(t, "--help"))
    {
      t = m_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_44;
        }
    }
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL;
  t = term_t_32;
  n_44 = t;
  t = term_s_26;
  o_44 = t;
  t = term_n_35;
  t = z_7(n_44, o_44, t);
  t = term_r_35;
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = term_s_35;
  return(t);
}
ATerm j_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_96 (ATerm), ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL;
  if(((h_44 != NULL) && (h_44 != t)))
    _fail(t);
  else
    h_44 = t;
  t = term_y_30;
  if(((j_44 != NULL) && (j_44 != t)))
    _fail(t);
  else
    j_44 = t;
  t = term_z_30;
  if(((k_44 != NULL) && (k_44 != t)))
    _fail(t);
  else
    k_44 = t;
  t = (ATerm) ATempty;
  if(((l_44 != NULL) && (l_44 != t)))
    _fail(t);
  else
    l_44 = t;
  t = SSL_table_put(not_null(j_44), not_null(k_44), not_null(l_44));
  t = not_null(h_44);
  {
    ATerm c_9 (ATerm t)
    {
      ATerm t_35 = t;
      int u_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_96(t);
          ;
          LocalPopChoice(u_35);
        }
      else
        {
          t = t_35;
          {
            ATerm v_35 = t;
            int w_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_9, e_9, i_9, t);
                ;
                LocalPopChoice(w_35);
              }
            else
              {
                t = v_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_9, t);
    {
      ATerm i_36 = t;
      int j_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_44 = NULL;
          x_44 = t;
          {
            ATerm k_36 = t;
            int l_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_20 = NULL;
                t = x_44;
                {
                  ATerm m_36 = t;
                  int n_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_t_32;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(n_36);
                    }
                  else
                    {
                      t = m_36;
                      t = fetch_1_0(j_9, t);
                    }
                  t = x_44;
                  t = default_system_usage_0_0(t);
                  t = term_k_30;
                  h_20 = t;
                  t = SSL_exit(h_20);
                }
                ;
                LocalPopChoice(l_36);
              }
            else
              {
                t = k_36;
                {
                  ATerm o_20 = NULL;
                  t = term_f_34;
                  t = get_config_0_0(t);
                  t = x_44;
                  t = default_system_about_0_0(t);
                  t = term_k_30;
                  o_20 = t;
                  t = SSL_exit(o_20);
                }
              }
          }
          ;
          LocalPopChoice(j_36);
        }
      else
        {
          t = i_36;
          {
            ATerm p_36 = t;
            int b_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL;
                ATerm k_9 (ATerm t)
                {
                  ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL,k_4 = NULL;
                  d_45 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      c_45 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(d_45);
                  b_45 = t;
                  t = c_45;
                  if(((f_44 != NULL) && (f_44 != t)))
                    _fail(t);
                  else
                    f_44 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, c_45);
                  k_4 = t;
                  t = SSLsetAnnotations(k_4, b_45);
                  return(t);
                }
                t = fetch_1_0(k_9, t);
                t = term_u_17;
                if(((z_44 != NULL) && (z_44 != t)))
                  _fail(t);
                else
                  z_44 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_44)), term_f_37);
                if(((a_45 != NULL) && (a_45 != t)))
                  _fail(t);
                else
                  a_45 = t;
                t = SSL_printnl(not_null(z_44), not_null(a_45));
                t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_44)), term_f_37));
                t = default_system_usage_0_0(t);
                t = term_n_11;
                if(((y_44 != NULL) && (y_44 != t)))
                  _fail(t);
                else
                  y_44 = t;
                t = SSL_exit(not_null(y_44));
                ;
                LocalPopChoice(b_37);
              }
            else
              {
                t = p_36;
              }
          }
        }
      if(((g_44 != NULL) && (g_44 != t)))
        _fail(t);
      else
        g_44 = t;
      t = term_y_30;
      if(((i_44 != NULL) && (i_44 != t)))
        _fail(t);
      else
        i_44 = t;
      t = SSL_table_destroy(not_null(i_44));
      t = not_null(g_44);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_95 (ATerm), ATerm b_95 (ATerm), ATerm c_95 (ATerm), ATerm d_95 (ATerm), ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL;
  t = parse_options_1_0(a_95, t);
  i_45 = t;
  t = term_g_37;
  l_45 = t;
  t = SSL_table_create(l_45);
  t = term_g_37;
  j_45 = t;
  t = term_i_37;
  k_45 = t;
  t = SSL_table_put(j_45, k_45, i_45);
  t = i_45;
  t = c_95(t);
  {
    ATerm j_37 = t;
    int l_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_95, t);
        ;
        LocalPopChoice(l_37);
      }
    else
      {
        t = j_37;
        {
          ATerm m_37 = t;
          int n_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_95(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(n_37);
            }
          else
            {
              t = m_37;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm o_37 = t;
  int p_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_to_adot_options_0_0(t);
      ;
      LocalPopChoice(p_37);
    }
  else
    {
      t = o_37;
      {
        ATerm q_37 = t;
        int r_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(r_37);
          }
        else
          {
            t = q_37;
            {
              ATerm s_37 = t;
              int t_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(t_37);
                }
              else
                {
                  t = s_37;
                  {
                    ATerm u_37 = t;
                    int v_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(o_9, p_9, s_9, t);
                        ;
                        LocalPopChoice(v_37);
                      }
                    else
                      {
                        t = u_37;
                        {
                          ATerm w_37 = t;
                          int x_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(x_37);
                            }
                          else
                            {
                              t = w_37;
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
ATerm n_9 (ATerm t)
{
  t = xtc_io_1_0(w_9, t);
  return(t);
}
ATerm o_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL;
  t = term_y_37;
  r_45 = t;
  t = term_s_26;
  s_45 = t;
  t = term_c_38;
  t = z_7(r_45, s_45, t);
  t = term_d_38;
  return(t);
}
ATerm s_9 (ATerm t)
{
  t = term_e_38;
  return(t);
}
ATerm w_9 (ATerm t)
{
  t = xtc_io_transform_1_0(to_adot_0_0, t);
  {
    ATerm g_38 = t;
    int i_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_46 = NULL,l_46 = NULL;
        l_46 = t;
        if(match_cons(t, sym_FILE_1))
          {
            k_46 = ATgetArgument(t, 0);
            {
              ATerm a_21 = NULL,d_7 = NULL;
              t = SSLgetAnnotations(l_46);
              a_21 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_46);
              d_7 = t;
              t = SSLsetAnnotations(d_7, a_21);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_46;
          }
        LocalPopChoice(i_38);
        t = xtc_transform_file_2_0(a_10, b_10, t);
      }
    else
      {
        t = g_38;
        t = xtc_transform_term_2_0(f_10, g_10, t);
      }
    {
      ATerm l_38 = t;
      int p_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_47 = NULL,f_47 = NULL;
          f_47 = t;
          if(match_cons(t, sym_FILE_1))
            {
              e_47 = ATgetArgument(t, 0);
              {
                ATerm q_21 = NULL,e_7 = NULL;
                t = SSLgetAnnotations(f_47);
                q_21 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, e_47);
                e_7 = t;
                t = SSLsetAnnotations(e_7, q_21);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = f_47;
            }
          LocalPopChoice(p_38);
          t = xtc_transform_file_2_0(h_10, l_10, t);
        }
      else
        {
          t = l_38;
          t = xtc_transform_term_2_0(n_10, o_10, t);
        }
    }
  }
  return(t);
}
ATerm a_10 (ATerm t)
{
  t = term_q_38;
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm n_46 = NULL;
  t = term_r_38;
  t = xtc_find_0_0(t);
  n_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_46), term_s_38);
  return(t);
}
ATerm f_10 (ATerm t)
{
  t = term_q_38;
  return(t);
}
ATerm g_10 (ATerm t)
{
  ATerm o_46 = NULL;
  t = term_r_38;
  t = xtc_find_0_0(t);
  o_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_46), term_s_38);
  return(t);
}
ATerm h_10 (ATerm t)
{
  t = term_t_38;
  return(t);
}
ATerm l_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_10 (ATerm t)
{
  t = term_t_38;
  return(t);
}
ATerm o_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm term_to_dot_0_0 (ATerm t)
{
  t = option_wrap_4_0(m_9, default_usage_0_0, _id, n_9, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = term_to_dot_0_0(t);
  return(t);
}
