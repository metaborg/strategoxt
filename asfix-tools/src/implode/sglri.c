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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_v_34;
ATerm term_s_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_o_32;
ATerm term_f_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_v_31;
ATerm term_s_31;
ATerm term_q_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_b_31;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_g_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_z_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_l_29;
ATerm term_a_29;
ATerm term_x_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_j_26;
ATerm term_f_26;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_c_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_v_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_j_22;
ATerm term_f_22;
ATerm term_d_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_v_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_l_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_d_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_t_20;
ATerm term_l_20;
ATerm term_e_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_t_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_i_19;
ATerm term_h_18;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_y_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_l_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_z_9;
ATerm term_w_9;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_g_8;
ATerm term_d_8;
ATerm term_c_8;
void init_constant_terms (void)
{
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_9, term_b_9, term_c_9);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_9, term_i_9, term_j_9);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_9, term_q_9, term_r_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_9, term_z_9, term_d_10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_10, term_h_10, term_j_10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_10, term_o_10, term_s_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_10, term_b_11, term_c_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_11, term_f_11, term_g_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_l_11, term_n_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_11, term_t_11, term_u_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_11, term_f_12, term_g_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_12, term_m_12, term_o_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_g_13, term_i_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_l_13, term_m_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_p_13, term_r_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_v_13, term_w_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_b_14, term_c_14);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_f_14, term_g_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_l_14, term_p_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_s_14, term_u_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_d_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_h_15, term_j_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_s_15, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_y_15, term_a_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_e_16, term_f_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_16, term_k_16, term_l_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_q_16, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_v_16);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym__2, term_e_20, term_a_21);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym__2, term_e_20, term_l_20);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_v_21);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym__2, term_h_18, term_q_26);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_26);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__2, term_v_26, term_d_22);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-p f             Use parse table |f| (required)", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr opt       Pass option to sglr", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl opt       Pass option to implode asfix", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym__2, term_i_27, term_j_27);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("The sglri tool parses a text file according to the parse table provided with\n", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("the -p option and implodes the resulting concrete (asfix) tree to an abstract\n", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym__2, term_n_31, term_d_22);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym__2, term_s_31, term_d_22);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym__2, term_o_29, term_d_22);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym__2, term_k_34, term_d_22);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm read_from_0_0 (ATerm);
ATerm g_6 (ATerm r_27, ATerm s_27, ATerm);
ATerm h_6 (ATerm j_72 (ATerm), ATerm d_185, ATerm z_27, ATerm);
ATerm b_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm);
ATerm i_6 (ATerm n_24, ATerm o_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm o_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm y_70 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm d_88 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm c_88 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm e_88 (ATerm), ATerm);
ATerm l_6 (ATerm j_80 (ATerm), ATerm k_80 (ATerm), ATerm u_34, ATerm t_34, ATerm);
ATerm m_6 (ATerm g_80 (ATerm), ATerm q_34, ATerm p_34, ATerm);
ATerm z_0 (ATerm);
ATerm n_6 (ATerm e_46, ATerm f_46, ATerm g_46, ATerm);
ATerm o_6 (ATerm g_88 (ATerm), ATerm o_46, ATerm n_46, ATerm);
ATerm j_8 (ATerm a_8, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm p_6 (ATerm x_27, ATerm);
ATerm q_6 (ATerm t_48, ATerm u_48, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm w_10 (ATerm x_8, ATerm);
ATerm x_10 (ATerm f_9, ATerm g_9, ATerm h_9, ATerm);
ATerm y_10 (ATerm u_9, ATerm v_9, ATerm y_9, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm c_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm l_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm s_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm x_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm r_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm x_1 (ATerm);
ATerm a_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm i_16 (ATerm f_15, ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm k_90 (ATerm), ATerm);
ATerm r_6 (ATerm v_86 (ATerm), ATerm q_44, ATerm o_44, ATerm);
ATerm a_18 (ATerm o_17, ATerm);
ATerm b_18 (ATerm s_17, ATerm t_17, ATerm u_17, ATerm);
ATerm n_2 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm s_6 (ATerm l_48, ATerm m_48, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm p_2 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm get_parse_table_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm a_3 (ATerm);
ATerm sglr_2_0 (ATerm r_69 (ATerm), ATerm s_69 (ATerm), ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm f_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm parse_and_implode_0_0 (ATerm);
ATerm u_6 (ATerm t_24, ATerm u_24, ATerm);
ATerm copy_to_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm v_6 (ATerm m_45, ATerm n_45, ATerm);
ATerm end_scope_1_0 (ATerm s_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm r_86 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm o_3 (ATerm);
ATerm q_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm w_89 (ATerm), ATerm);
ATerm s_3 (ATerm);
ATerm xtc_io_1_0 (ATerm x_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm b_4 (ATerm);
ATerm d_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm d_7 (ATerm h_47, ATerm i_47, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm t_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm at_end_1_0 (ATerm s_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm a_28 (ATerm k_27, ATerm);
ATerm conc_0_0 (ATerm);
ATerm t_6 (ATerm n_47, ATerm m_47, ATerm);
ATerm b_7 (ATerm h_45, ATerm i_45, ATerm g_45, ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm sglri_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm w_6 (ATerm c_43, ATerm d_43, ATerm);
ATerm foldr_2_0 (ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm t_5 (ATerm);
ATerm y_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_87 (ATerm), ATerm);
ATerm z_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm c_6 (ATerm);
ATerm need_help_1_0 (ATerm y_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm f_6 (ATerm);
ATerm j_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm z_6 (ATerm y_41, ATerm z_41, ATerm);
ATerm debug_1_0 (ATerm h_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm c_76 (ATerm), ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm a_7 (ATerm y_46, ATerm z_46, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm w_93 (ATerm), ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm parse_options_1_0 (ATerm v_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm b_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm r_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_c_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm u_0 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          r_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_d_8);
      u_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_0, (ATerm) ATinsert(ATempty, term_d_8));
      t = s_6(r_0, u_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm g_6 (ATerm r_27, ATerm s_27, ATerm t)
{
  ATerm v_0 = NULL;
  t = SSL_write_term_to_stream_baf(r_27, s_27);
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_0);
  return(t);
}
ATerm h_6 (ATerm j_72 (ATerm), ATerm d_185, ATerm z_27, ATerm t)
{
  ATerm w_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_185, term_g_8);
  t = open_stream_0_0(t);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_0, z_27);
  t = j_72(t);
  t = fclose_0_0(t);
  t = z_27;
  return(t);
}
ATerm b_0 (ATerm t)
{
  ATerm a_1 = NULL,d_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_8 = ATgetArgument(t, 0);
      if(match_cons(h_8, sym_Stream_1))
        {
          a_1 = ATgetArgument(h_8, 0);
        }
      else
        _fail(t);
      d_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(a_1, d_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL;
  x_0 = t;
  t = xtc_new_file_0_0(t);
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_0, x_0);
  t = h_6(b_0, y_0, x_0, t);
  t = SSL_close_file(y_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, y_0);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(t_90, u_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm i_6 (ATerm n_24, ATerm o_24, ATerm t)
{
  t = SSL_execvp(n_24, o_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL;
  s_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      t_2 = ATgetArgument(t, 0);
      {
        ATerm i_0 = NULL,q_0 = NULL;
        t = SSL_int_to_string(t_2);
        i_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), i_0), term_o_8);
        q_0 = t;
        t = SSL_concat_strings(q_0);
      }
    }
  else
    {
      ATerm j_1 = NULL,k_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          t_2 = ATgetArgument(t, 0);
          u_2 = ATgetArgument(t, 1);
          v_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(u_2);
      j_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_2), term_r_8), j_1), term_q_8), t_2);
      k_1 = t;
      t = SSL_concat_strings(k_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm o_76 (ATerm), ATerm t)
{
  ATerm y_2 = NULL;
  ATerm e_0 (ATerm t)
  {
    t = o_76(t);
    if(((y_2 != NULL) && (y_2 != t)))
      _fail(t);
    else
      y_2 = t;
    return(t);
  }
  t = fetch_1_0(e_0, t);
  t = not_null(y_2);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm z_2 = NULL;
  if(((z_2 != NULL) && (z_2 != t)))
    _fail(t);
  else
    z_2 = t;
  {
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm w_8 = ATgetArgument(t, 0);
              if(((z_2 != NULL) && (z_2 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                z_2 = ATgetArgument(t, 1);
              {
                ATerm z_8 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_16), term_s_16), term_o_16), term_g_16), term_c_16), term_u_15), term_k_15), term_e_15), term_a_15), term_q_14), term_i_14), term_d_14), term_x_13), term_s_13), term_n_13), term_j_13), term_s_12), term_i_12), term_v_11), term_o_11), term_j_11), term_d_11), term_u_10), term_l_10), term_e_10), term_t_9), term_k_9), term_d_9);
        t = fetch_elem_1_0(f_0, t);
        ;
        LocalPopChoice(t_8);
      }
    else
      {
        t = s_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(z_2));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm e_3 = NULL,p_3 = NULL;
  e_3 = t;
  {
    ATerm c_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm e_17 = ATgetArgument(t, 0);
            p_3 = ATgetArgument(t, 1);
            {
              ATerm g_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_17);
        {
          ATerm i_17 = t;
          int j_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_1 = NULL,y_1 = NULL,z_1 = NULL;
              t = p_3;
              {
                ATerm l_17 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_17;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                w_1 = t;
                t = term_m_17;
                y_1 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, w_1), term_n_17);
                z_1 = t;
                t = SSL_printnl(y_1, z_1);
                t = (ATerm) ATmakeAppl(sym__2, term_m_17, (ATerm) ATinsert(ATinsert(ATempty, w_1), term_n_17));
              }
              ;
              LocalPopChoice(j_17);
            }
          else
            {
              t = i_17;
              t = e_3;
            }
        }
      }
    else
      {
        t = c_17;
        t = e_3;
      }
    t = e_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm y_70 (ATerm), ATerm t)
{
  ATerm a_4 = NULL,c_4 = NULL;
  c_4 = t;
  t = fork_0_0(t);
  a_4 = t;
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = c_4;
        t = y_70(t);
        ;
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
        t = SSL_waitpid(a_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm r_17 = ATgetArgument(t, 0);
            if(((ATgetType(r_17) != AT_INT) || (ATgetInt((ATermInt) r_17) != 0)))
              _fail(t);
            {
              ATerm v_17 = ATgetArgument(t, 1);
            }
            {
              ATerm w_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = c_4;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm e_4 = NULL;
  ATerm o_0 (ATerm t)
  {
    ATerm f_4 = NULL,g_4 = NULL;
    f_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_4), f_4);
    t = a_7(not_null(e_4), f_4, t);
    g_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_4, g_4);
    return(t);
  }
  if(((e_4 != NULL) && (e_4 != t)))
    _fail(t);
  else
    e_4 = t;
  t = SSL_table_keys(not_null(e_4));
  t = map_1_0(o_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  ATerm j_4 = NULL;
  j_4 = t;
  {
    ATerm c_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_4 = NULL;
        t = term_h_18;
        t = get_config_0_0(t);
        m_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_4, term_e_16);
        t = geq_0_0(t);
        t = j_4;
        t = d_88(t);
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = c_18;
        t = j_4;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  ATerm p_4 = NULL;
  p_4 = t;
  {
    ATerm j_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_4 = NULL;
        t = term_h_18;
        t = get_config_0_0(t);
        u_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_4, term_m_12);
        t = geq_0_0(t);
        t = p_4;
        t = c_88(t);
        ;
        LocalPopChoice(k_18);
      }
    else
      {
        t = j_18;
        t = p_4;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm e_88 (ATerm), ATerm t)
{
  ATerm y_4 = NULL;
  y_4 = t;
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_5 = NULL;
        t = term_h_18;
        t = get_config_0_0(t);
        a_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_5, term_z_9);
        t = geq_0_0(t);
        t = y_4;
        t = e_88(t);
        ;
        LocalPopChoice(m_18);
      }
    else
      {
        t = l_18;
        t = y_4;
      }
  }
  return(t);
}
ATerm l_6 (ATerm j_80 (ATerm), ATerm k_80 (ATerm), ATerm u_34, ATerm t_34, ATerm t)
{
  t = k_80(t);
  {
    ATerm s_0 (ATerm t)
    {
      ATerm g_5 = NULL;
      g_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_34), g_5);
      t = j_80(t);
      return(t);
    }
    t = fetch_1_0(s_0, t);
    t = not_null(t_34);
  }
  return(t);
}
ATerm m_6 (ATerm g_80 (ATerm), ATerm q_34, ATerm p_34, ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
    u_5 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(p_34);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_5 = ATgetFirst((ATermList) t);
            w_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_18 = t;
          int q_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_5;
              {
                ATerm t_0 (ATerm t)
                {
                  t = not_null(p_34);
                  return(t);
                }
                t = l_6(g_80, t_0, not_null(v_5), not_null(w_5), t);
                t = a_6(t);
              }
              ;
              LocalPopChoice(q_18);
            }
          else
            {
              t = n_18;
              {
                ATerm e_2 = NULL,h_2 = NULL,m_1 = NULL;
                t = SSLgetAnnotations(u_5);
                e_2 = t;
                t = w_5;
                t = a_6(t);
                h_2 = t;
                t = (ATerm) ATinsert(CheckATermList(h_2), v_5);
                m_1 = t;
                t = SSLsetAnnotations(m_1, e_2);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(q_34);
  t = a_6(t);
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm k_7 = NULL;
  if(match_cons(t, sym__2))
    {
      k_7 = ATgetArgument(t, 0);
      if((k_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm n_6 (ATerm e_46, ATerm f_46, ATerm g_46, ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL,c_7 = NULL;
  x_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_18 = ATgetArgument(t, 0);
            ATerm u_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
        t = a_7(e_46, f_46, t);
        ;
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        t = (ATerm) ATempty;
      }
    c_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_7, g_46);
    t = m_6(z_0, c_7, g_46, t);
    y_6 = t;
    t = SSL_table_put(e_46, f_46, y_6);
    t = x_6;
  }
  return(t);
}
ATerm o_6 (ATerm g_88 (ATerm), ATerm o_46, ATerm n_46, ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm l_7 = NULL,m_7 = NULL;
    if(match_cons(t, sym__2))
      {
        l_7 = ATgetArgument(t, 0);
        m_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(o_46), l_7, m_7);
    t = g_88(t);
    return(t);
  }
  t = not_null(n_46);
  t = map_1_0(b_1, t);
  return(t);
}
ATerm j_8 (ATerm a_8, ATerm t)
{
  t = SSL_fclose(a_8);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL;
  f_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_8 = ATgetArgument(t, 0);
      {
        ATerm v_18 = t;
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_8);
            ;
            LocalPopChoice(w_18);
          }
        else
          {
            t = v_18;
            t = j_8(f_8, t);
          }
      }
    }
  else
    {
      t = j_8(f_8, t);
    }
  return(t);
}
ATerm p_6 (ATerm x_27, ATerm t)
{
  t = SSL_read_term_from_stream(x_27);
  return(t);
}
ATerm q_6 (ATerm t_48, ATerm u_48, ATerm t)
{
  ATerm k_8 = NULL;
  t = SSL_fopen(t_48, u_48);
  k_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_8);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_8 = NULL;
  t = SSL_stdin_stream();
  l_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_8 = NULL;
  t = SSL_stdout_stream();
  m_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_8 = NULL;
  t = SSL_stderr_stream();
  n_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_8);
  return(t);
}
ATerm w_10 (ATerm x_8, ATerm t)
{
  ATerm y_8 = NULL;
  t = SSL_explode_term(x_8);
  if(match_cons(t, sym__2))
    {
      ATerm x_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_18 = ATgetArgument(t, 1);
        if(((ATgetType(y_18) == AT_LIST) && !(ATisEmpty(y_18))))
          {
            y_8 = ATgetFirst((ATermList) y_18);
            {
              ATerm z_18 = (ATerm) ATgetNext((ATermList) y_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_8;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_8;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_8;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_8;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm x_10 (ATerm f_9, ATerm g_9, ATerm h_9, ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL,s_9 = NULL,q_1 = NULL;
  t = SSLgetAnnotations(h_9);
  o_9 = t;
  t = f_9;
  if(match_cons(t, sym_Path_1))
    {
      s_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_9, g_9);
  q_1 = t;
  t = SSLsetAnnotations(q_1, o_9);
  if(match_cons(t, sym__2))
    {
      m_9 = ATgetArgument(t, 0);
      n_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(m_9, n_9, t);
  return(t);
}
ATerm y_10 (ATerm u_9, ATerm v_9, ATerm y_9, ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,k_10 = NULL,r_1 = NULL;
  t = SSLgetAnnotations(y_9);
  c_10 = t;
  t = SSL_is_string(u_9);
  k_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_10, v_9);
  r_1 = t;
  t = SSLsetAnnotations(r_1, c_10);
  if(match_cons(t, sym__2))
    {
      a_10 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(a_10, b_10, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm m_10 = NULL,q_10 = NULL,t_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_19 = ATgetArgument(t, 0);
      ATerm b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  m_10 = t;
  if(match_cons(t, sym__2))
    {
      q_10 = ATgetArgument(t, 0);
      t_10 = ATgetArgument(t, 1);
      {
        ATerm c_19 = t;
        int d_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_10(m_10, t);
            ;
            LocalPopChoice(d_19);
          }
        else
          {
            t = c_19;
            {
              ATerm e_19 = t;
              int h_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_10(q_10, t_10, m_10, t);
                  ;
                  LocalPopChoice(h_19);
                }
              else
                {
                  t = e_19;
                  t = y_10(q_10, t_10, m_10, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_10(m_10, t);
    }
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_i_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,h_11 = NULL;
  ATerm j_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_11 = NULL;
      i_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_11, term_l_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(k_19);
    }
  else
    {
      t = j_19;
      t = debug_1_0(c_1, t);
      _fail(t);
    }
  a_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6(h_11, t);
  z_10 = t;
  t = a_11;
  t = fclose_0_0(t);
  t = z_10;
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_m_19;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_n_19;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm o_19 = t;
  int s_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_11 = NULL,r_11 = NULL;
      q_11 = t;
      t = (ATerm) ATinsert(ATempty, term_t_19);
      r_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_11, (ATerm) ATinsert(ATempty, term_t_19));
      t = s_6(q_11, r_11, t);
      LocalPopChoice(s_19);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = o_19;
      {
        ATerm u_19 = t;
        int v_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_19 = t;
            if((PushChoice() == 0))
              {
                ATerm s_11 = NULL,y_11 = NULL;
                s_11 = t;
                t = (ATerm) ATinsert(ATempty, term_d_8);
                y_11 = t;
                t = (ATerm) ATmakeAppl(sym__2, s_11, (ATerm) ATinsert(ATempty, term_d_8));
                t = s_6(s_11, y_11, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_19;
              }
            t = debug_1_0(e_1, t);
            ;
            LocalPopChoice(v_19);
          }
        else
          {
            t = u_19;
            t = debug_1_0(f_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = debug_1_0(h_1, t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_x_19;
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = debug_1_0(l_1, t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_y_19;
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
  u_12 = t;
  t = term_m_17;
  v_12 = t;
  t = (ATerm) ATinsert(ATempty, term_z_19);
  w_12 = t;
  t = SSL_printnl(v_12, w_12);
  t = u_12;
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL;
  if(match_cons(t, sym__3))
    {
      x_12 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
      z_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_6(x_12, y_12, z_12, t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
  a_13 = t;
  t = term_m_17;
  b_13 = t;
  t = (ATerm) ATinsert(ATempty, term_a_20);
  c_13 = t;
  t = SSL_printnl(b_13, c_13);
  t = a_13;
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
  d_13 = t;
  t = term_m_17;
  e_13 = t;
  t = (ATerm) ATinsert(ATempty, term_z_19);
  f_13 = t;
  t = SSL_printnl(e_13, f_13);
  t = d_13;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,j_12 = NULL,k_12 = NULL,n_12 = NULL,p_12 = NULL;
  z_11 = t;
  t = if_verbose5_1_0(g_1, t);
  {
    ATerm c_20 = t;
    if((PushChoice() == 0))
      {
        ATerm q_12 = NULL,r_12 = NULL;
        t = term_e_20;
        q_12 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, z_11);
        r_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_20, (ATerm) ATmakeAppl(sym_Imported_1, z_11));
        t = a_7(q_12, r_12, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_20;
      }
    b_12 = t;
    t = term_e_20;
    k_12 = t;
    t = term_l_20;
    n_12 = t;
    t = (ATerm) ATinsert(ATempty, z_11);
    p_12 = t;
    t = SSL_table_put(k_12, n_12, p_12);
    t = b_12;
    t = if_verbose4_1_0(i_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(n_1, t);
    a_12 = t;
    t = term_e_20;
    j_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_e_20, a_12);
    t = o_6(o_1, j_12, a_12, t);
    t = if_verbose6_1_0(p_1, t);
    t = term_e_20;
    c_12 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, z_11);
    d_12 = t;
    t = (ATerm) ATempty;
    e_12 = t;
    t = SSL_table_put(c_12, d_12, e_12);
    t = (ATerm) ATmakeAppl(sym__3, term_e_20, (ATerm)ATmakeAppl(sym_Imported_1, z_11), (ATerm) ATempty);
    t = if_verbose4_1_0(s_1, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm x_83 (ATerm), ATerm t)
{
  ATerm u_13 = NULL,y_13 = NULL,z_13 = NULL;
  u_13 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_13;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_13 = ATgetFirst((ATermList) t);
          z_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm m_20 = t;
        int n_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_3 = NULL,h_4 = NULL,i_4 = NULL,i_2 = NULL;
            t = SSLgetAnnotations(u_13);
            x_3 = t;
            t = y_13;
            t = x_83(t);
            h_4 = t;
            t = z_13;
            t = filter_1_0(x_83, t);
            i_4 = t;
            t = (ATerm) ATinsert(CheckATermList(i_4), h_4);
            i_2 = t;
            t = SSLsetAnnotations(i_2, x_3);
            ;
            LocalPopChoice(n_20);
          }
        else
          {
            t = m_20;
            t = z_13;
            t = filter_1_0(x_83, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm r_85 (ATerm), ATerm t)
{
  ATerm k_14 (ATerm t)
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_85(t);
        t = k_14(t);
        ;
        LocalPopChoice(q_20);
      }
    else
      {
        t = p_20;
      }
    return(t);
  }
  t = k_14(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      {
        ATerm u_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_14 = NULL;
            t = term_y_20;
            m_14 = t;
            t = SSL_getenv(m_14);
            ;
            LocalPopChoice(w_20);
          }
        else
          {
            t = u_20;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = debug_1_0(u_1, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_z_20;
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL;
  t = term_e_20;
  y_14 = t;
  t = term_a_21;
  z_14 = t;
  t = term_b_21;
  t = a_7(y_14, z_14, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm c_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_21;
      }
  }
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = debug_1_0(a_2, t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_d_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm t_14 = NULL;
  t = if_verbose5_1_0(t_1, t);
  t_14 = t;
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_14 = NULL,w_14 = NULL;
        t = term_e_20;
        v_14 = t;
        t = term_l_20;
        w_14 = t;
        t = term_g_21;
        t = a_7(v_14, w_14, t);
        ;
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        {
          ATerm x_14 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          x_14 = t;
          t = repeat_1_0(v_1, t);
          t = x_14;
        }
      }
    t = t_14;
    t = if_verbose5_1_0(x_1, t);
  }
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = debug_1_0(c_2, t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_h_21;
  return(t);
}
ATerm i_16 (ATerm f_15, ATerm t)
{
  ATerm i_15 = NULL,n_15 = NULL,o_15 = NULL;
  t = term_e_20;
  n_15 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, f_15);
  o_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_20, (ATerm) ATmakeAppl(sym_Tool_1, f_15));
  t = a_7(n_15, o_15, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_21 = ATgetFirst((ATermList) t);
      if(match_cons(i_21, sym__2))
        {
          ATerm k_21 = ATgetArgument(i_21, 0);
          i_15 = ATgetArgument(i_21, 1);
        }
      else
        _fail(t);
      {
        ATerm j_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_15;
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_h_21;
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_e_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(k_2, t);
  return(t);
}
ATerm k_2 (ATerm t)
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
      ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
      t = if_verbose5_1_0(b_2, t);
      t = xtc_load_0_0(t);
      if(((r_15 != NULL) && (r_15 != t)))
        _fail(t);
      else
        r_15 = t;
      if(match_cons(t, sym__2))
        {
          p_15 = ATgetArgument(t, 0);
          q_15 = ATgetArgument(t, 1);
          {
            ATerm o_21 = t;
            int p_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_15 = NULL,x_15 = NULL,b_16 = NULL;
                t = term_e_20;
                if(((x_15 != NULL) && (x_15 != t)))
                  _fail(t);
                else
                  x_15 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, not_null(p_15));
                if(((b_16 != NULL) && (b_16 != t)))
                  _fail(t);
                else
                  b_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_e_20, (ATerm) ATmakeAppl(sym_Tool_1, not_null(p_15)));
                t = a_7(not_null(x_15), not_null(b_16), t);
                {
                  ATerm d_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if(((q_15 != NULL) && (q_15 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          q_15 = ATgetArgument(t, 0);
                        if(((w_15 != NULL) && (w_15 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          w_15 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(d_2, t);
                  t = not_null(w_15);
                }
                ;
                LocalPopChoice(p_21);
              }
            else
              {
                t = o_21;
                t = i_16(not_null(r_15), t);
              }
          }
        }
      else
        {
          t = i_16(not_null(r_15), t);
        }
      t = if_verbose5_1_0(f_2, t);
      ;
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      {
        ATerm h_16 = NULL,x_4 = NULL,b_5 = NULL;
        h_16 = t;
        t = term_m_17;
        x_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_21), h_16), term_q_21);
        b_5 = t;
        t = SSL_printnl(x_4, b_5);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_21), h_16), term_q_21);
        t = if_verbose5_1_0(j_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm k_90 (ATerm), ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL;
  if(((n_16 != NULL) && (n_16 != t)))
    _fail(t);
  else
    n_16 = t;
  t = k_90(t);
  t = xtc_find_0_0(t);
  if(((m_16 != NULL) && (m_16 != t)))
    _fail(t);
  else
    m_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_16), not_null(n_16));
  {
    ATerm m_2 (ATerm t)
    {
      ATerm w_16 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_16), not_null(n_16));
      t = i_6(not_null(m_16), not_null(n_16), t);
      t = term_s_21;
      w_16 = t;
      t = SSL_exit(w_16);
      return(t);
    }
    t = fork_and_wait_1_0(m_2, t);
    t = not_null(n_16);
  }
  return(t);
}
ATerm r_6 (ATerm v_86 (ATerm), ATerm q_44, ATerm o_44, ATerm t)
{
  ATerm x_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,f_17 = NULL,h_17 = NULL;
  b_17 = t;
  t = v_86(t);
  x_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_16, q_44, o_44);
  t = b_7(x_16, q_44, o_44, t);
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_17 = NULL;
        t = term_v_21;
        k_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_16, term_v_21);
        t = a_7(x_16, k_17, t);
        ;
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_16 = ATgetFirst((ATermList) t);
        a_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_v_21;
    f_17 = t;
    t = (ATerm) ATinsert(CheckATermList(a_17), (ATerm) ATinsert(CheckATermList(z_16), q_44));
    h_17 = t;
    t = SSL_table_put(x_16, f_17, h_17);
    t = b_17;
  }
  return(t);
}
ATerm a_18 (ATerm o_17, ATerm t)
{
  t = o_17;
  {
    ATerm w_21 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_21 = ATgetArgument(t, 0);
            ATerm y_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_21;
      }
    t = term_z_21;
    t = debug_1_0(n_2, t);
    t = (ATerm) ATmakeAppl(sym__2, o_17, term_g_8);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm b_18 (ATerm s_17, ATerm t_17, ATerm u_17, ATerm t)
{
  t = SSL_open_file(s_17, t_17);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
  x_17 = t;
  if(match_cons(t, sym__2))
    {
      y_17 = ATgetArgument(t, 0);
      z_17 = ATgetArgument(t, 1);
      {
        ATerm b_22 = t;
        int c_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_18(x_17, t);
            ;
            LocalPopChoice(c_22);
          }
        else
          {
            t = b_22;
            t = b_18(y_17, z_17, x_17, t);
          }
      }
    }
  else
    {
      t = a_18(x_17, t);
    }
  return(t);
}
ATerm s_6 (ATerm l_48, ATerm m_48, ATerm t)
{
  t = SSL_access(l_48, m_48);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm d_18 = NULL,f_18 = NULL,g_18 = NULL;
  t = term_d_22;
  t = new_0_0(t);
  d_18 = t;
  t = term_f_22;
  f_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_18, term_f_22);
  t = z_6(d_18, f_18, t);
  g_18 = t;
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_18 = NULL;
        t = (ATerm) ATinsert(ATempty, term_d_8);
        i_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_18, (ATerm) ATinsert(ATempty, term_d_8));
        t = s_6(g_18, i_18, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
        t = g_18;
      }
  }
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL;
  t = new_file_0_0(t);
  o_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_18, term_g_8);
  t = open_file_0_0(t);
  t = term_d_22;
  p_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_18, term_d_22);
  t = r_6(p_2, o_18, p_18, t);
  t = o_18;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL;
  f_19 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm e_5 = NULL,h_5 = NULL;
      t = f_19;
      t = xtc_new_file_0_0(t);
      e_5 = t;
      t = p_0(t);
      h_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_5, (ATerm) ATinsert(ATinsert(ATempty, e_5), term_m_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(n_0, t);
      t = SSL_close_file(e_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_5);
    }
  else
    {
      ATerm x_5 = NULL,b_6 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          g_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_19;
      t = xtc_new_file_0_0(t);
      x_5 = t;
      t = p_0(t);
      b_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_5), term_m_22), g_19), term_n_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(n_0, t);
      t = SSL_close_file(x_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_5);
    }
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm r_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_22);
    }
  else
    {
      t = r_22;
      {
        ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
        t = term_m_17;
        q_19 = t;
        t = (ATerm) ATinsert(ATempty, term_y_22);
        r_19 = t;
        t = SSL_printnl(q_19, r_19);
        t = term_b_9;
        p_19 = t;
        t = SSL_exit(p_19);
        t = (ATerm) ATinsert(ATempty, term_y_22);
      }
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_z_22;
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_z_22;
  return(t);
}
ATerm sglr_2_0 (ATerm r_69 (ATerm), ATerm s_69 (ATerm), ATerm t)
{
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_20 = NULL,d_20 = NULL;
      d_20 = t;
      if(match_cons(t, sym_FILE_1))
        {
          b_20 = ATgetArgument(t, 0);
          {
            ATerm k_6 = NULL,l_2 = NULL;
            t = SSLgetAnnotations(d_20);
            k_6 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, b_20);
            l_2 = t;
            t = SSLsetAnnotations(l_2, k_6);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_20;
        }
      LocalPopChoice(b_23);
      {
        ATerm x_2 (ATerm t)
        {
          ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
          h_20 = t;
          t = r_69(t);
          f_20 = t;
          t = h_20;
          t = s_69(t);
          g_20 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(g_20), f_20), term_v_22);
          return(t);
        }
        t = xtc_transform_file_2_0(r_2, x_2, t);
      }
    }
  else
    {
      t = a_23;
      {
        ATerm b_3 (ATerm t)
        {
          ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL;
          k_20 = t;
          t = r_69(t);
          i_20 = t;
          t = k_20;
          t = s_69(t);
          j_20 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(j_20), i_20), term_v_22);
          return(t);
        }
        t = xtc_transform_term_2_0(a_3, b_3, t);
      }
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm o_20 = NULL;
  t = term_c_23;
  {
    ATerm d_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(j_23);
      }
    else
      {
        t = d_23;
        t = (ATerm) ATempty;
      }
    o_20 = t;
    t = (ATerm) ATinsert(CheckATermList(o_20), term_k_23);
  }
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_l_23;
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_m_23;
  {
    ATerm n_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(p_23);
      }
    else
      {
        t = n_23;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_l_23;
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_m_23;
  {
    ATerm q_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(r_23);
      }
    else
      {
        t = q_23;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
ATerm parse_and_implode_0_0 (ATerm t)
{
  t = sglr_2_0(get_parse_table_0_0, c_3, t);
  {
    ATerm s_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_20 = NULL,x_20 = NULL;
        x_20 = t;
        if(match_cons(t, sym_FILE_1))
          {
            v_20 = ATgetArgument(t, 0);
            {
              ATerm q_7 = NULL,o_2 = NULL;
              t = SSLgetAnnotations(x_20);
              q_7 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_20);
              o_2 = t;
              t = SSLsetAnnotations(o_2, q_7);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = x_20;
          }
        LocalPopChoice(w_23);
        t = xtc_transform_file_2_0(d_3, f_3, t);
      }
    else
      {
        t = s_23;
        t = xtc_transform_term_2_0(h_3, i_3, t);
      }
  }
  return(t);
}
ATerm u_6 (ATerm t_24, ATerm u_24, ATerm t)
{
  t = SSL_copy(t_24, u_24);
  return(t);
}
ATerm copy_to_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm e_22 = NULL,g_22 = NULL;
  e_22 = t;
  if(match_cons(t, sym_FILE_1))
    {
      g_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_8 = NULL;
        t = e_22;
        t = m_0(t);
        i_8 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = i_8;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = i_8;
          }
        t = (ATerm) ATmakeAppl(sym__2, g_22, i_8);
        t = u_6(g_22, i_8, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, g_22);
        ;
        LocalPopChoice(z_23);
      }
    else
      {
        t = x_23;
        {
          ATerm a_24 = t;
          int b_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_8 = NULL;
              t = e_22;
              t = m_0(t);
              u_8 = t;
              {
                ATerm d_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm v_8 = NULL;
                    v_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = v_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = v_8;
                          }
                        else
                          {
                            t = v_8;
                            if((g_22 != t))
                              {
                                _fail(t);
                              }
                            t = v_8;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = d_24;
                  }
                t = (ATerm) ATmakeAppl(sym__2, g_22, u_8);
                t = u_6(g_22, u_8, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, g_22);
              }
              ;
              LocalPopChoice(b_24);
            }
          else
            {
              t = a_24;
              t = e_22;
              t = m_0(t);
              if((g_22 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_22);
            }
        }
      }
  }
  return(t);
}
ATerm v_6 (ATerm m_45, ATerm n_45, ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL;
  l_22 = t;
  {
    ATerm e_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
        t = a_7(m_45, n_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_24 = ATgetFirst((ATermList) t);
            k_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(l_24);
        t = SSL_table_put(m_45, n_45, k_22);
        t = (ATerm) ATmakeAppl(sym__3, m_45, n_45, k_22);
      }
    else
      {
        t = e_24;
        t = SSL_table_remove(m_45, n_45);
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
      }
    t = l_22;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm s_86 (ATerm), ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,s_22 = NULL,t_22 = NULL;
  if(((s_22 != NULL) && (s_22 != t)))
    _fail(t);
  else
    s_22 = t;
  t = s_86(t);
  if(((q_22 != NULL) && (q_22 != t)))
    _fail(t);
  else
    q_22 = t;
  {
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_22 = NULL;
        t = term_v_21;
        w_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_22), term_v_21);
        t = a_7(not_null(q_22), w_22, t);
        ;
        LocalPopChoice(d_25);
      }
    else
      {
        t = c_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((p_22 != NULL) && (p_22 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          p_22 = ATgetFirst((ATermList) t);
        if(((o_22 != NULL) && (o_22 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          o_22 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_v_21;
    if(((t_22 != NULL) && (t_22 != t)))
      _fail(t);
    else
      t_22 = t;
    t = SSL_table_put(not_null(q_22), not_null(t_22), not_null(o_22));
    t = not_null(p_22);
    {
      ATerm l_3 (ATerm t)
      {
        ATerm x_22 = NULL;
        x_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_22), x_22);
        t = v_6(not_null(q_22), x_22, t);
        return(t);
      }
      t = map_1_0(l_3, t);
      t = not_null(s_22);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm t)
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_87(t);
      t = o_87(t);
      ;
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      t = o_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm r_86 (ATerm), ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL;
  f_23 = t;
  t = r_86(t);
  e_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_23, term_v_21);
  {
    ATerm n_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_23 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_25 = ATgetArgument(t, 0);
            ATerm t_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_v_21;
        o_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_23, term_v_21);
        t = a_7(e_23, o_23, t);
        ;
        LocalPopChoice(o_25);
      }
    else
      {
        t = n_25;
        t = (ATerm) ATempty;
      }
    g_23 = t;
    t = term_v_21;
    h_23 = t;
    t = (ATerm) ATinsert(CheckATermList(g_23), (ATerm) ATempty);
    i_23 = t;
    t = SSL_table_put(e_23, h_23, i_23);
    t = f_23;
  }
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm c_24 = NULL;
  c_24 = t;
  {
    ATerm v_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(c_24);
        ;
        LocalPopChoice(z_25);
      }
    else
      {
        t = v_25;
        t = c_24;
      }
  }
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm w_89 (ATerm), ATerm t)
{
  ATerm t_23 = NULL;
  ATerm n_3 (ATerm t)
  {
    ATerm u_23 = NULL;
    u_23 = t;
    {
      ATerm c_26 = t;
      int d_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_23 = NULL,y_23 = NULL;
          t = term_j_22;
          v_23 = t;
          t = term_v_21;
          y_23 = t;
          t = term_f_26;
          t = a_7(v_23, y_23, t);
          ;
          LocalPopChoice(d_26);
        }
      else
        {
          t = c_26;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((t_23 != NULL) && (t_23 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            t_23 = ATgetFirst((ATermList) t);
          {
            ATerm g_26 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(t_23);
      t = map_1_0(o_3, t);
      t = u_23;
      t = end_scope_1_0(q_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(m_3, t);
  t = restore_always_2_0(w_89, n_3, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      t = term_j_26;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm x_89 (ATerm), ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_24 = NULL;
        t = term_n_22;
        t = get_config_0_0(t);
        f_24 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, f_24);
        ;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        t = term_c_8;
      }
    t = x_89(t);
    t = copy_to_1_0(s_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(r_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
  g_24 = t;
  t = term_d_22;
  t = whoami_0_0(t);
  h_24 = t;
  t = term_m_17;
  j_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_26), h_24), term_m_26);
  k_24 = t;
  t = SSL_printnl(j_24, k_24);
  t = term_b_9;
  i_24 = t;
  t = SSL_exit(i_24);
  t = g_24;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm m_24 = NULL;
  m_24 = t;
  if(match_string(t, "-k"))
    {
      t = m_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_24;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  p_24 = t;
  t = SSL_string_to_int(p_24);
  q_24 = t;
  t = term_o_26;
  r_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_26, q_24);
  t = d_7(r_24, q_24, t);
  t = p_24;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_3, u_3, v_3, t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm v_24 = NULL;
  v_24 = t;
  if(match_string(t, "-S"))
    {
      t = v_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_24;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL;
  t = term_h_18;
  w_24 = t;
  t = term_q_26;
  x_24 = t;
  t = term_r_26;
  t = d_7(w_24, x_24, t);
  t = term_s_26;
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_t_26;
  return(t);
}
ATerm b_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL;
  y_24 = t;
  t = SSL_string_to_int(y_24);
  z_24 = t;
  t = term_h_18;
  a_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_18, z_24);
  t = d_7(a_25, z_24, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_24);
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_u_26;
  return(t);
}
ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm b_25 = NULL,e_25 = NULL;
  t = term_v_26;
  b_25 = t;
  t = term_d_22;
  e_25 = t;
  t = term_x_26;
  t = d_7(b_25, e_25, t);
  t = term_y_26;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_z_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_3, y_3, z_3, t);
      ;
      LocalPopChoice(b_27);
    }
  else
    {
      t = a_27;
      {
        ATerm c_27 = t;
        int g_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_4, d_4, k_4, t);
            ;
            LocalPopChoice(g_27);
          }
        else
          {
            t = c_27;
            t = Option_3_0(l_4, n_4, o_4, t);
          }
      }
    }
  return(t);
}
ATerm d_7 (ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm f_25 = NULL;
  t = term_h_27;
  f_25 = t;
  t = SSL_table_put(f_25, h_47, i_47);
  t = (ATerm) ATmakeAppl(sym__3, term_h_27, h_47, i_47);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
      t = term_d_22;
      t = d_0(t);
      k_25 = t;
      t = term_i_27;
      l_25 = t;
      t = term_j_27;
      m_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_27, term_j_27, k_25);
      t = b_7(l_25, m_25, k_25, t);
      _fail(t);
    }
  else
    {
      ATerm p_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_25 = ATgetFirst((ATermList) t);
          j_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_25;
      t = a_0(t);
      t = term_d_22;
      t = c_0(t);
      p_25 = t;
      t = (ATerm) ATinsert(CheckATermList(j_25), p_25);
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm r_25 = NULL;
  r_25 = t;
  if(match_string(t, "-o"))
    {
      t = r_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_25;
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm s_25 = NULL,u_25 = NULL;
  s_25 = t;
  t = term_m_22;
  u_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_22, s_25);
  t = d_7(u_25, s_25, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_25);
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_m_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_4, r_4, s_4, t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm w_25 = NULL;
  w_25 = t;
  if(match_string(t, "-i"))
    {
      t = w_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_25;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL;
  x_25 = t;
  t = term_n_22;
  y_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_22, x_25);
  t = d_7(y_25, x_25, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_25);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_n_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_4, v_4, w_4, t);
  return(t);
}
ATerm at_end_1_0 (ATerm s_76 (ATerm), ATerm t)
{
  ATerm f_27 (ATerm t)
  {
    ATerm w_26 = NULL,d_27 = NULL,e_27 = NULL;
    e_27 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_26 = ATgetFirst((ATermList) t);
        d_27 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_9 = NULL,x_9 = NULL,q_2 = NULL;
          t = SSLgetAnnotations(e_27);
          l_9 = t;
          t = d_27;
          t = f_27(t);
          x_9 = t;
          t = (ATerm) ATinsert(CheckATermList(x_9), w_26);
          q_2 = t;
          t = SSLsetAnnotations(q_2, l_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_27;
        t = s_76(t);
      }
    return(t);
  }
  t = f_27(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,e_26 = NULL;
  a_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_26;
    }
  else
    {
      ATerm z_4 (ATerm t)
      {
        t = not_null(e_26);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((b_26 != NULL) && (b_26 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            b_26 = ATgetFirst((ATermList) t);
          if(((e_26 != NULL) && (e_26 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(b_26);
      t = at_end_1_0(z_4, t);
    }
  return(t);
}
ATerm a_28 (ATerm k_27, ATerm t)
{
  ATerm l_27 = NULL;
  t = SSL_explode_term(k_27);
  if(match_cons(t, sym__2))
    {
      ATerm t_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      l_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_27;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
  if(((q_27 != NULL) && (q_27 != t)))
    _fail(t);
  else
    q_27 = t;
  if(match_cons(t, sym__2))
    {
      o_27 = ATgetArgument(t, 0);
      p_27 = ATgetArgument(t, 1);
      {
        ATerm u_27 = t;
        int v_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_5 (ATerm t)
            {
              t = not_null(p_27);
              return(t);
            }
            t = not_null(o_27);
            t = at_end_1_0(c_5, t);
            ;
            LocalPopChoice(v_27);
          }
        else
          {
            t = u_27;
            t = a_28(not_null(q_27), t);
          }
      }
    }
  else
    {
      t = a_28(not_null(q_27), t);
    }
  return(t);
}
ATerm t_6 (ATerm n_47, ATerm m_47, ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL;
  t = n_47;
  {
    ATerm w_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(y_27);
      }
    else
      {
        t = w_27;
        t = (ATerm) ATempty;
      }
    c_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_47, c_28);
    t = conc_0_0(t);
    b_28 = t;
    t = term_h_27;
    d_28 = t;
    t = SSL_table_put(d_28, n_47, b_28);
    t = (ATerm) ATmakeAppl(sym__3, term_h_27, n_47, b_28);
  }
  return(t);
}
ATerm b_7 (ATerm h_45, ATerm i_45, ATerm g_45, ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
  g_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_28 = ATgetArgument(t, 0);
            ATerm k_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
        t = a_7(h_45, i_45, t);
        ;
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
        t = (ATerm) ATempty;
      }
    h_28 = t;
    t = (ATerm) ATinsert(CheckATermList(h_28), g_45);
    i_28 = t;
    t = SSL_table_put(h_45, i_45, i_28);
    t = g_28;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_28 = NULL,y_28 = NULL,z_28 = NULL;
      t = term_d_22;
      t = l_0(t);
      v_28 = t;
      t = term_i_27;
      y_28 = t;
      t = term_j_27;
      z_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_27, term_j_27, v_28);
      t = b_7(y_28, z_28, v_28, t);
      _fail(t);
    }
  else
    {
      ATerm i_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_28 = ATgetFirst((ATermList) t);
          q_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_28 = ATgetFirst((ATermList) t);
          s_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_28;
      t = j_0(t);
      t = r_28;
      t = k_0(t);
      i_29 = t;
      t = (ATerm) ATinsert(CheckATermList(s_28), i_29);
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm q_29 = NULL,t_29 = NULL;
  q_29 = t;
  t = term_v_22;
  t_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_22, q_29);
  t = d_7(t_29, q_29, t);
  t = q_29;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_l_28;
  return(t);
}
ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--sglr", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL;
  v_29 = t;
  t = term_c_23;
  w_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_23, v_29);
  t = t_6(w_29, v_29, t);
  t = v_29;
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_m_28;
  return(t);
}
ATerm o_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--impl", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm x_29 = NULL,a_30 = NULL;
  x_29 = t;
  t = term_m_23;
  a_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_23, x_29);
  t = t_6(a_30, x_29, t);
  t = x_29;
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_n_28;
  return(t);
}
ATerm sglri_options_0_0 (ATerm t)
{
  ATerm o_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(d_5, f_5, i_5, t);
      ;
      LocalPopChoice(t_28);
    }
  else
    {
      t = o_28;
      {
        ATerm u_28 = t;
        int w_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_5, k_5, m_5, t);
            ;
            LocalPopChoice(w_28);
          }
        else
          {
            t = u_28;
            t = ArgOption_3_0(o_5, q_5, s_5, t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_30 = NULL,e_30 = NULL,f_30 = NULL,j_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_22;
  t = whoami_0_0(t);
  b_30 = t;
  t = term_m_17;
  f_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_28), b_30);
  j_30 = t;
  t = SSL_printnl(f_30, j_30);
  t = term_b_9;
  e_30 = t;
  t = SSL_exit(e_30);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_a_29;
  t = get_config_0_0(t);
  return(t);
}
ATerm w_6 (ATerm c_43, ATerm d_43, ATerm t)
{
  ATerm b_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_43, d_43);
      ;
      LocalPopChoice(c_29);
    }
  else
    {
      t = b_29;
      t = SSL_addr(c_43, d_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
  o_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_30;
      t = u_82(t);
    }
  else
    {
      ATerm t_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_30 = ATgetFirst((ATermList) t);
          q_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_30;
      t = foldr_2_0(u_82, v_82, t);
      t_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_30, t_30);
      t = v_82(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_q_26;
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm p_10 = NULL,r_10 = NULL;
  if(match_cons(t, sym__2))
    {
      p_10 = ATgetArgument(t, 0);
      r_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(p_10, r_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_30 = NULL,g_10 = NULL,i_10 = NULL;
  t = times_0_0(t);
  i_10 = t;
  t = SSL_explode_term(i_10);
  if(match_cons(t, sym__2))
    {
      ATerm d_29 = ATgetArgument(t, 0);
      g_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10;
  t = foldr_2_0(t_5, y_5, t);
  w_30 = t;
  t = SSL_TicksToSeconds(w_30);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
  j_31 = t;
  if(match_cons(t, sym__2))
    {
      k_31 = ATgetArgument(t, 0);
      l_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_31;
        if((k_31 != t))
          {
            _fail(t);
          }
        t = j_31;
        ;
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
        t = (ATerm) ATmakeAppl(sym__2, k_31, l_31);
        {
          ATerm g_29 = t;
          int h_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_31, l_31);
              ;
              LocalPopChoice(h_29);
            }
          else
            {
              t = g_29;
              t = SSL_gtr(k_31, l_31);
            }
          t = (ATerm) ATmakeAppl(sym__2, k_31, l_31);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  ATerm p_31 = NULL;
  p_31 = t;
  {
    ATerm j_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_31 = NULL;
        t = term_h_18;
        t = get_config_0_0(t);
        r_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_31, term_b_9);
        t = geq_0_0(t);
        t = p_31;
        t = z_87(t);
        ;
        LocalPopChoice(k_29);
      }
    else
      {
        t = j_29;
        t = p_31;
      }
  }
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,w_31 = NULL,x_31 = NULL;
  t = run_time_0_0(t);
  t_31 = t;
  t = term_d_22;
  t = whoami_0_0(t);
  u_31 = t;
  t = term_m_17;
  w_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_29), t_31), term_q_8), u_31);
  x_31 = t;
  t = SSL_printnl(w_31, x_31);
  t = (ATerm) ATmakeAppl(sym__2, term_m_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_29), t_31), term_q_8), u_31));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_26;
  y_31 = t;
  t = SSL_exit(y_31);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL;
  h_32 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = h_32;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          g_32 = ATgetArgument(t, 0);
          {
            ATerm m_11 = NULL,w_2 = NULL;
            t = SSLgetAnnotations(h_32);
            m_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, g_32);
            w_2 = t;
            t = SSLsetAnnotations(w_2, m_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = h_32;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_91 (ATerm), ATerm t)
{
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
      t = fetch_1_0(c_6, t);
    }
  t = y_91(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_32 = ATgetFirst((ATermList) t);
      l_32 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_32 = NULL,q_32 = NULL;
        ATerm d_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_32)), not_null(q_32));
          return(t);
        }
        t = not_null(l_32);
        t = h_0(t);
        if(((p_32 != NULL) && (p_32 != t)))
          _fail(t);
        else
          p_32 = t;
        t = not_null(k_32);
        t = g_0(t);
        if(((q_32 != NULL) && (q_32 != t)))
          _fail(t);
        else
          q_32 = t;
        t = not_null(l_32);
        t = reverse_acc_2_0(g_0, d_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_22;
      t = h_0(t);
    }
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm d_33 = NULL;
  d_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_33), term_p_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
  ATerm r_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_29;
      t = get_config_0_0(t);
      u_32 = t;
      ;
      LocalPopChoice(s_29);
    }
  else
    {
      t = r_29;
      {
        ATerm e_6 (ATerm t)
        {
          ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL,g_3 = NULL;
          z_32 = t;
          if(match_cons(t, sym_Program_1))
            {
              y_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_32);
          x_32 = t;
          t = y_32;
          if(((u_32 != NULL) && (u_32 != t)))
            _fail(t);
          else
            u_32 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, y_32);
          g_3 = t;
          t = SSLsetAnnotations(g_3, x_32);
          return(t);
        }
        t = fetch_1_0(e_6, t);
      }
    }
  {
    ATerm u_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_30), not_null(u_32)), term_z_29);
        t = echo_0_0(t);
        ;
        LocalPopChoice(y_29);
      }
    else
      {
        t = u_29;
      }
    t = term_d_30;
    t = echo_0_0(t);
    t = term_i_27;
    if(((v_32 != NULL) && (v_32 != t)))
      _fail(t);
    else
      v_32 = t;
    t = term_j_27;
    if(((w_32 != NULL) && (w_32 != t)))
      _fail(t);
    else
      w_32 = t;
    t = term_g_30;
    t = a_7(not_null(v_32), not_null(w_32), t);
    t = reverse_acc_2_0(_id, f_6, t);
    t = map_1_0(j_6, t);
    {
      ATerm h_30 = t;
      int i_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_30), term_m_30), term_l_30), term_k_30);
          t = echo_0_0(t);
          ;
          LocalPopChoice(i_30);
        }
      else
        {
          t = h_30;
        }
    }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm c_34 (ATerm t)
  {
    ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
    z_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_34 = ATgetFirst((ATermList) t);
        b_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_30 = t;
      int s_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_11 = NULL,h_12 = NULL,j_3 = NULL;
          t = SSLgetAnnotations(z_33);
          x_11 = t;
          t = a_34;
          t = m_76(t);
          h_12 = t;
          t = (ATerm) ATinsert(CheckATermList(b_34), h_12);
          j_3 = t;
          t = SSLsetAnnotations(j_3, x_11);
          ;
          LocalPopChoice(s_30);
        }
      else
        {
          t = r_30;
          {
            ATerm h_13 = NULL,q_13 = NULL,k_3 = NULL;
            t = SSLgetAnnotations(z_33);
            h_13 = t;
            t = b_34;
            t = c_34(t);
            q_13 = t;
            t = (ATerm) ATinsert(CheckATermList(q_13), a_34);
            k_3 = t;
            t = SSLsetAnnotations(k_3, h_13);
          }
        }
    }
    return(t);
  }
  t = c_34(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
  g_34 = t;
  {
    ATerm u_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_34;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_30 = ATgetFirst((ATermList) t);
                ATerm y_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_34;
          }
        ;
        LocalPopChoice(v_30);
      }
    else
      {
        t = u_30;
        t = (ATerm) ATinsert(ATempty, g_34);
      }
    h_34 = t;
    t = term_j_26;
    i_34 = t;
    t = SSL_printnl(i_34, h_34);
    t = g_34;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_a_29;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm z_6 (ATerm y_41, ATerm z_41, ATerm t)
{
  t = SSL_strcat(y_41, z_41);
  return(t);
}
ATerm debug_1_0 (ATerm h_72 (ATerm), ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,r_34 = NULL;
  m_34 = t;
  t = h_72(t);
  n_34 = t;
  t = term_m_17;
  o_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_34), n_34);
  r_34 = t;
  t = SSL_printnl(o_34, r_34);
  t = m_34;
  return(t);
}
ATerm map_1_0 (ATerm c_76 (ATerm), ATerm t)
{
  ATerm k_35 (ATerm t)
  {
    ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL;
    h_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_35;
      }
    else
      {
        ATerm h_14 = NULL,n_14 = NULL,o_14 = NULL,l_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_35 = ATgetFirst((ATermList) t);
            j_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_35);
        h_14 = t;
        t = i_35;
        t = c_76(t);
        n_14 = t;
        t = j_35;
        t = k_35(t);
        o_14 = t;
        t = (ATerm) ATinsert(CheckATermList(o_14), n_14);
        l_5 = t;
        t = SSLsetAnnotations(l_5, h_14);
      }
    return(t);
  }
  t = k_35(t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm z_30 = t;
  int a_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(a_31);
    }
  else
    {
      t = z_30;
    }
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_b_31;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_31 = t;
  int d_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_35 = NULL;
      s_35 = t;
      t = SSL_is_string(s_35);
      ;
      LocalPopChoice(d_31);
    }
  else
    {
      t = c_31;
      {
        ATerm e_31 = t;
        int f_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(e_7, t);
            ;
            LocalPopChoice(f_31);
          }
        else
          {
            t = e_31;
            {
              ATerm y_35 = NULL,b_36 = NULL,c_36 = NULL;
              y_35 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_36 = ATgetArgument(t, 0);
                  t = b_36;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_36 = ATgetArgument(t, 0);
                      t = b_36;
                      {
                        ATerm g_31 = t;
                        int h_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(h_31);
                          }
                        else
                          {
                            t = g_31;
                            t = debug_1_0(f_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_36 = NULL,h_36 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_36 = ATgetArgument(t, 0);
                          c_36 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_36;
                      t = eval_config_0_0(t);
                      g_36 = t;
                      t = c_36;
                      t = eval_config_0_0(t);
                      h_36 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_36, h_36);
                      t = z_6(g_36, h_36, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm a_7 (ATerm y_46, ATerm z_46, ATerm t)
{
  t = SSL_table_get(y_46, z_46);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL;
  l_36 = t;
  t = term_h_27;
  m_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_27, l_36);
  t = a_7(m_36, l_36, t);
  {
    ATerm i_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_36 = NULL,o_36 = NULL;
        t = eval_config_0_0(t);
        n_36 = t;
        t = term_h_27;
        o_36 = t;
        t = SSL_table_put(o_36, l_36, n_36);
        t = n_36;
        ;
        LocalPopChoice(m_31);
      }
    else
      {
        t = i_31;
      }
  }
  return(t);
}
ATerm g_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL;
  t = term_n_31;
  r_36 = t;
  t = term_d_22;
  s_36 = t;
  t = term_o_31;
  t = d_7(r_36, s_36, t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_q_31;
  return(t);
}
ATerm j_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL;
  t = term_n_31;
  v_36 = t;
  t = term_d_22;
  w_36 = t;
  t = term_o_31;
  t = d_7(v_36, w_36, t);
  t = term_s_31;
  t_36 = t;
  t = term_d_22;
  u_36 = t;
  t = term_v_31;
  t = d_7(t_36, u_36, t);
  t = term_z_31;
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_a_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_7, h_7, i_7, t);
      ;
      LocalPopChoice(c_32);
    }
  else
    {
      t = b_32;
      t = Option_3_0(j_7, n_7, o_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,n_5 = NULL;
  c_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_36 = ATgetFirst((ATermList) t);
      z_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_37);
  x_36 = t;
  t = y_36;
  t = o_63(t);
  a_37 = t;
  t = z_36;
  t = p_63(t);
  b_37 = t;
  t = (ATerm) ATinsert(CheckATermList(b_37), a_37);
  n_5 = t;
  t = SSLsetAnnotations(n_5, x_36);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_93 (ATerm), ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,m_37 = NULL,n_37 = NULL,p_5 = NULL;
  if(((h_37 != NULL) && (h_37 != t)))
    _fail(t);
  else
    h_37 = t;
  {
    ATerm d_32 = t;
    int e_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_32;
        t = w_93(t);
        ;
        LocalPopChoice(e_32);
      }
    else
      {
        t = d_32;
      }
    t = not_null(h_37);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((j_37 != NULL) && (j_37 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          j_37 = ATgetFirst((ATermList) t);
        if(((k_37 != NULL) && (k_37 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          k_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(h_37));
    if(((i_37 != NULL) && (i_37 != t)))
      _fail(t);
    else
      i_37 = t;
    t = term_a_29;
    if(((n_37 != NULL) && (n_37 != t)))
      _fail(t);
    else
      n_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_a_29, not_null(j_37));
    t = d_7(not_null(n_37), not_null(j_37), t);
    t = not_null(k_37);
    {
      ATerm x_37 (ATerm t)
      {
        ATerm i_32 = t;
        int j_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_32 = t;
            int n_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_37 = NULL;
                q_37 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = q_37;
                ;
                LocalPopChoice(n_32);
              }
            else
              {
                t = m_32;
                t = w_93(t);
                t = Cons_2_0(_id, x_37, t);
              }
            ;
            LocalPopChoice(j_32);
          }
        else
          {
            t = i_32;
            {
              ATerm t_37 = NULL,u_37 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_37 = ATgetFirst((ATermList) t);
                  u_37 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(u_37), (ATerm) ATmakeAppl(sym_Undefined_1, t_37));
            }
          }
        return(t);
      }
      t = x_37(t);
      if(((m_37 != NULL) && (m_37 != t)))
        _fail(t);
      else
        m_37 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(m_37)), (ATerm) ATmakeAppl(sym_Program_1, not_null(j_37)));
      if(((p_5 != NULL) && (p_5 != t)))
        _fail(t);
      else
        p_5 = t;
      t = SSLsetAnnotations(not_null(p_5), not_null(i_37));
    }
  }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm j_38 = NULL;
  j_38 = t;
  if(match_string(t, "--help"))
    {
      t = j_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = j_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = j_38;
        }
    }
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL;
  t = term_o_29;
  k_38 = t;
  t = term_d_22;
  l_38 = t;
  t = term_o_32;
  t = d_7(k_38, l_38, t);
  t = term_r_32;
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_s_32;
  return(t);
}
ATerm u_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_93 (ATerm), ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL;
  if(((e_38 != NULL) && (e_38 != t)))
    _fail(t);
  else
    e_38 = t;
  t = term_i_27;
  if(((g_38 != NULL) && (g_38 != t)))
    _fail(t);
  else
    g_38 = t;
  t = term_j_27;
  if(((h_38 != NULL) && (h_38 != t)))
    _fail(t);
  else
    h_38 = t;
  t = (ATerm) ATempty;
  if(((i_38 != NULL) && (i_38 != t)))
    _fail(t);
  else
    i_38 = t;
  t = SSL_table_put(not_null(g_38), not_null(h_38), not_null(i_38));
  t = not_null(e_38);
  {
    ATerm p_7 (ATerm t)
    {
      ATerm t_32 = t;
      int a_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_93(t);
          ;
          LocalPopChoice(a_33);
        }
      else
        {
          t = t_32;
          {
            ATerm b_33 = t;
            int c_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_7, s_7, t_7, t);
                ;
                LocalPopChoice(c_33);
              }
            else
              {
                t = b_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_7, t);
    {
      ATerm e_33 = t;
      int f_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_38 = NULL;
          s_38 = t;
          {
            ATerm g_33 = t;
            int h_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_15 = NULL;
                t = s_38;
                {
                  ATerm i_33 = t;
                  int j_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_o_29;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(j_33);
                    }
                  else
                    {
                      t = i_33;
                      t = fetch_1_0(u_7, t);
                    }
                  t = s_38;
                  t = default_system_usage_0_0(t);
                  t = term_q_26;
                  m_15 = t;
                  t = SSL_exit(m_15);
                }
                ;
                LocalPopChoice(h_33);
              }
            else
              {
                t = g_33;
                {
                  ATerm z_15 = NULL;
                  t = term_n_31;
                  t = get_config_0_0(t);
                  t = s_38;
                  t = default_system_about_0_0(t);
                  t = term_q_26;
                  z_15 = t;
                  t = SSL_exit(z_15);
                }
              }
          }
          ;
          LocalPopChoice(f_33);
        }
      else
        {
          t = e_33;
          {
            ATerm k_33 = t;
            int l_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL;
                ATerm v_7 (ATerm t)
                {
                  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,r_5 = NULL;
                  y_38 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      x_38 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(y_38);
                  w_38 = t;
                  t = x_38;
                  if(((c_38 != NULL) && (c_38 != t)))
                    _fail(t);
                  else
                    c_38 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, x_38);
                  r_5 = t;
                  t = SSLsetAnnotations(r_5, w_38);
                  return(t);
                }
                t = fetch_1_0(v_7, t);
                t = term_m_17;
                if(((u_38 != NULL) && (u_38 != t)))
                  _fail(t);
                else
                  u_38 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_38)), term_m_33);
                if(((v_38 != NULL) && (v_38 != t)))
                  _fail(t);
                else
                  v_38 = t;
                t = SSL_printnl(not_null(u_38), not_null(v_38));
                t = (ATerm) ATmakeAppl(sym__2, term_m_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_38)), term_m_33));
                t = default_system_usage_0_0(t);
                t = term_b_9;
                if(((t_38 != NULL) && (t_38 != t)))
                  _fail(t);
                else
                  t_38 = t;
                t = SSL_exit(not_null(t_38));
                ;
                LocalPopChoice(l_33);
              }
            else
              {
                t = k_33;
              }
          }
        }
      if(((d_38 != NULL) && (d_38 != t)))
        _fail(t);
      else
        d_38 = t;
      t = term_i_27;
      if(((f_38 != NULL) && (f_38 != t)))
        _fail(t);
      else
        f_38 = t;
      t = SSL_table_destroy(not_null(f_38));
      t = not_null(d_38);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
  t = parse_options_1_0(a_92, t);
  d_39 = t;
  t = term_n_33;
  g_39 = t;
  t = SSL_table_create(g_39);
  t = term_n_33;
  e_39 = t;
  t = term_o_33;
  f_39 = t;
  t = SSL_table_put(e_39, f_39, d_39);
  t = d_39;
  t = c_92(t);
  {
    ATerm p_33 = t;
    int q_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_92, t);
        ;
        LocalPopChoice(q_33);
      }
    else
      {
        t = p_33;
        {
          ATerm r_33 = t;
          int s_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_92(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_33);
            }
          else
            {
              t = r_33;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm t_33 = t;
  int u_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sglri_options_0_0(t);
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
            t = input_option_0_0(t);
            ;
            LocalPopChoice(w_33);
          }
        else
          {
            t = v_33;
            {
              ATerm x_33 = t;
              int y_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(y_33);
                }
              else
                {
                  t = x_33;
                  {
                    ATerm d_34 = t;
                    int e_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(y_7, z_7, b_8, t);
                        ;
                        LocalPopChoice(e_34);
                      }
                    else
                      {
                        t = d_34;
                        {
                          ATerm f_34 = t;
                          int j_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(j_34);
                            }
                          else
                            {
                              t = f_34;
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
ATerm x_7 (ATerm t)
{
  t = xtc_io_1_0(parse_and_implode_0_0, t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL;
  t = term_k_34;
  i_39 = t;
  t = term_d_22;
  j_39 = t;
  t = term_l_34;
  t = d_7(i_39, j_39, t);
  t = term_s_34;
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_v_34;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(w_7, default_usage_0_0, _id, x_7, t);
  return(t);
}
