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
ATerm term_n_32;
ATerm term_m_32;
ATerm term_z_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_c_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_t_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_z_27;
ATerm term_s_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_n_26;
ATerm term_y_25;
ATerm term_q_24;
ATerm term_o_24;
ATerm term_i_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_z_23;
ATerm term_q_23;
ATerm term_d_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_p_22;
ATerm term_n_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_h_20;
ATerm term_u_19;
ATerm term_u_16;
ATerm term_s_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_d_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_k_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_g_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_o_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_i_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_g_7;
void init_constant_terms (void)
{
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_8, term_m_8, term_n_8);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_8, term_r_8, term_s_8);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_8, term_y_8, term_a_9);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_9, term_i_9, term_j_9);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_9, term_m_9, term_o_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_9, term_z_9, term_b_10);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_10, term_f_10, term_h_10);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_10, term_m_10, term_n_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_10, term_q_10, term_r_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_10, term_u_10, term_v_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_10, term_z_10, term_a_11);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_11, term_d_11, term_g_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_n_11, term_v_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_y_11, term_z_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_c_12, term_d_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_12, term_g_12, term_h_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_12, term_m_12, term_n_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_12, term_q_12, term_r_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_12, term_v_12, term_w_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_13, term_b_13, term_c_13);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_g_13, term_l_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_r_13, term_s_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_v_13, term_y_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_k_14, term_o_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_14, term_u_14, term_v_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_d_15, term_i_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_s_15, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_x_15);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_26);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-p f             Use parse table |f| (required)", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr opt       Pass option to sglr", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl opt       Pass option to implode asfix", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("The sglri tool parses a text file according to the parse table provided with\n", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("the -p option and implodes the resulting concrete (asfix) tree to an abstract\n", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym__3, term_s_27, term_v_30, term_n_22);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm read_from_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm x_65 (ATerm), ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm g_84 (ATerm), ATerm h_84 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm d_70 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm m_64 (ATerm), ATerm);
ATerm if_verbose5_1_0 (ATerm j_81 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm i_81 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm k_81 (ATerm), ATerm);
ATerm union_1_0 (ATerm u_73 (ATerm), ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm t_81 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm k_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm e_79 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm assert_1_0 (ATerm i_80 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm b_62 (ATerm), ATerm);
ATerm get_parse_table_0_0 (ATerm);
ATerm sglr_2_0 (ATerm f_63 (ATerm), ATerm g_63 (ATerm), ATerm);
ATerm parse_and_implode_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm f_80 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm e_80 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm j_83 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm k_83 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm sglri_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm h_76 (ATerm), ATerm i_76 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm f_81 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm l_85 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm i_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm j_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm b_70 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm h_70 (ATerm), ATerm);
ATerm _2_0 (ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm q_69 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm j_87 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm i_87 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm v_0 = NULL,y_0 = NULL;
  v_0 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = v_0;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          y_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(y_0, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm x_65 (ATerm), ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL,j_1 = NULL;
  if(match_cons(t, sym__2))
    {
      d_1 = ATgetArgument(t, 0);
      e_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_1, term_g_7);
  t = open_stream_0_0(t);
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_1, e_1);
  t = x_65(t);
  t = fclose_0_0(t);
  t = e_1;
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL;
  n_1 = t;
  t = xtc_new_file_0_0(t);
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_1, n_1);
  {
    ATerm b_0 (ATerm t)
    {
      ATerm p_1 = NULL,q_1 = NULL,v_1 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm h_7 = ATgetArgument(t, 0);
          if(match_cons(h_7, sym_Stream_1))
            {
              p_1 = ATgetArgument(h_7, 0);
            }
          else
            _fail(t);
          q_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_write_term_to_stream_baf(p_1, q_1);
      v_1 = t;
      t = (ATerm) ATmakeAppl(sym_Stream_1, v_1);
      return(t);
    }
    t = WriteToFile_1_0(b_0, t);
    t = SSL_close_file(o_1);
    t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
  }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm g_84 (ATerm), ATerm h_84 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(g_84, h_84, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm e_2 = NULL;
  ATerm e_0 (ATerm t)
  {
    ATerm f_2 = NULL;
    f_2 = t;
    t = SSL_explode_string(f_2);
    return(t);
  }
  t = map_1_0(e_0, t);
  t = concat_0_0(t);
  e_2 = t;
  t = SSL_implode_string(e_2);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL;
  b_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      c_3 = ATgetArgument(t, 0);
      {
        ATerm s_0 = NULL;
        t = SSL_int_to_string(c_3);
        s_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_7), s_0), term_i_7);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm h_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          c_3 = ATgetArgument(t, 0);
          d_3 = ATgetArgument(t, 1);
          e_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(d_3);
      h_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_3), term_a_8), h_1), term_z_7), c_3);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm d_70 (ATerm), ATerm t)
{
  ATerm l_3 = NULL;
  ATerm f_0 (ATerm t)
  {
    t = d_70(t);
    if(((l_3 != NULL) && (l_3 != t)))
      _fail(t);
    else
      l_3 = t;
    return(t);
  }
  t = fetch_1_0(f_0, t);
  t = not_null(l_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm m_3 = NULL;
  m_3 = t;
  {
    ATerm b_8 = t;
    int h_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_15), term_u_15), term_j_15), term_x_14), term_p_14), term_z_13), term_t_13), term_m_13), term_d_13), term_z_12), term_s_12), term_o_12), term_k_12), term_e_12), term_a_12), term_w_11), term_h_11), term_b_11), term_w_10), term_s_10), term_o_10), term_i_10), term_c_10), term_s_9), term_k_9), term_b_9), term_w_8), term_o_8);
        {
          ATerm i_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm e_16 = ATgetArgument(t, 0);
                if((m_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm f_16 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(i_0, t);
        }
        ;
        LocalPopChoice(h_8);
      }
    else
      {
        t = b_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, m_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm q_3 = NULL;
  q_3 = t;
  {
    ATerm g_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_3 = NULL,l_1 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm n_16 = ATgetArgument(t, 0);
            z_3 = ATgetArgument(t, 1);
            {
              ATerm o_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = z_3;
        {
          ATerm r_16 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_16;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          l_1 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_1), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_s_16, (ATerm) ATinsert(ATinsert(ATempty, l_1), term_u_16));
        }
        ;
        LocalPopChoice(l_16);
      }
    else
      {
        t = g_16;
      }
    t = q_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm m_64 (ATerm), ATerm t)
{
  ATerm e_4 = NULL,j_4 = NULL;
  e_4 = t;
  t = fork_0_0(t);
  j_4 = t;
  {
    ATerm v_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = e_4;
        t = m_64(t);
        ;
        LocalPopChoice(x_16);
      }
    else
      {
        t = v_16;
        t = SSL_waitpid(j_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm y_16 = ATgetArgument(t, 0);
            if(((ATgetType(y_16) != AT_INT) || (ATgetInt((ATermInt) y_16) != 0)))
              _fail(t);
            {
              ATerm b_17 = ATgetArgument(t, 1);
            }
            {
              ATerm c_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = e_4;
      }
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm j_81 (ATerm), ATerm t)
{
  ATerm d_17 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_4 = NULL,v_4 = NULL;
      t_4 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm f_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_1 = NULL;
            t = eval_config_0_0(t);
            t_1 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), t_1);
            t = t_1;
            ;
            LocalPopChoice(g_17);
          }
        else
          {
            t = f_17;
          }
        v_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_4, term_u_14);
        t = geq_0_0(t);
        t = t_4;
        t = j_81(t);
      }
      ;
      LocalPopChoice(e_17);
    }
  else
    {
      t = d_17;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm i_81 (ATerm), ATerm t)
{
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_5 = NULL,h_5 = NULL;
      e_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm n_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_1 = NULL;
            t = eval_config_0_0(t);
            y_1 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), y_1);
            t = y_1;
            ;
            LocalPopChoice(p_17);
          }
        else
          {
            t = n_17;
          }
        h_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_5, term_d_11);
        t = geq_0_0(t);
        t = e_5;
        t = i_81(t);
      }
      ;
      LocalPopChoice(l_17);
    }
  else
    {
      t = k_17;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm k_81 (ATerm), ATerm t)
{
  ATerm s_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_5 = NULL,m_5 = NULL;
      i_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm w_17 = t;
        int x_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_2 = NULL;
            t = eval_config_0_0(t);
            c_2 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), c_2);
            t = c_2;
            ;
            LocalPopChoice(x_17);
          }
        else
          {
            t = w_17;
          }
        m_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_5, term_i_9);
        t = geq_0_0(t);
        t = i_5;
        t = k_81(t);
      }
      ;
      LocalPopChoice(v_17);
    }
  else
    {
      t = s_17;
    }
  return(t);
}
ATerm union_1_0 (ATerm u_73 (ATerm), ATerm t)
{
  ATerm w_5 = NULL,x_5 = NULL;
  if(match_cons(t, sym__2))
    {
      x_5 = ATgetArgument(t, 0);
      w_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5;
  {
    ATerm y_5 (ATerm t)
    {
      ATerm e_18 = t;
      int f_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = w_5;
          ;
          LocalPopChoice(f_18);
        }
      else
        {
          t = e_18;
          {
            ATerm g_18 = t;
            int n_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_2 = NULL,g_2 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    d_2 = ATgetFirst((ATermList) t);
                    g_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = w_5;
                {
                  ATerm o_0 (ATerm t)
                  {
                    ATerm h_2 = NULL;
                    h_2 = t;
                    t = (ATerm) ATmakeAppl(sym__2, d_2, h_2);
                    t = u_73(t);
                    return(t);
                  }
                  t = fetch_1_0(o_0, t);
                  t = g_2;
                  t = y_5(t);
                }
                ;
                LocalPopChoice(n_18);
              }
            else
              {
                t = g_18;
                t = Cons_2_0(_id, y_5, t);
              }
          }
        }
      return(t);
    }
    t = y_5(t);
  }
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL;
  if(match_cons(t, sym__3))
    {
      b_6 = ATgetArgument(t, 0);
      c_6 = ATgetArgument(t, 1);
      d_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_6, c_6);
  {
    ATerm o_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_18 = ATgetArgument(t, 0);
            ATerm u_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(b_6, c_6);
        ;
        LocalPopChoice(q_18);
      }
    else
      {
        t = o_18;
        t = (ATerm) ATempty;
      }
    e_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_6, d_6);
    {
      ATerm q_0 (ATerm t)
      {
        ATerm j_6 = NULL;
        if(match_cons(t, sym__2))
          {
            j_6 = ATgetArgument(t, 0);
            if((j_6 != ATgetArgument(t, 1)))
              {
                _fail(ATgetArgument(t, 1));
              }
          }
        else
          _fail(t);
        return(t);
      }
      t = union_1_0(q_0, t);
      f_6 = t;
      t = SSL_table_put(b_6, c_6, f_6);
      t = (ATerm) ATmakeAppl(sym__3, b_6, c_6, d_6);
    }
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm t_81 (ATerm), ATerm t)
{
  ATerm l_6 = NULL,m_6 = NULL;
  if(match_cons(t, sym__2))
    {
      m_6 = ATgetArgument(t, 0);
      l_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_6;
  {
    ATerm r_0 (ATerm t)
    {
      ATerm n_6 = NULL,o_6 = NULL;
      if(match_cons(t, sym__2))
        {
          n_6 = ATgetArgument(t, 0);
          o_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, m_6, n_6, o_6);
      t = t_81(t);
      return(t);
    }
    t = map_1_0(r_0, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_7 (ATerm w_6, ATerm t)
  {
    t = SSL_fclose(w_6);
    return(t);
  }
  ATerm z_6 = NULL,a_7 = NULL;
  a_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_6 = ATgetArgument(t, 0);
      {
        ATerm v_18 = t;
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_6);
            ;
            LocalPopChoice(w_18);
          }
        else
          {
            t = v_18;
            t = c_7(a_7, t);
          }
      }
    }
  else
    {
      t = c_7(a_7, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_7 = NULL;
  t = SSL_stdin_stream();
  d_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_7);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_7 = NULL;
  t = SSL_stdout_stream();
  e_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_7);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_7 = NULL;
  t = SSL_stderr_stream();
  f_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_7);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_18 = ATgetArgument(t, 0);
      ATerm z_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_3 = NULL,i_3 = NULL;
        g_3 = t;
        t = SSL_explode_term(g_3);
        if(match_cons(t, sym__2))
          {
            ATerm g_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_19) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm h_19 = ATgetArgument(t, 1);
              if(((ATgetType(h_19) == AT_LIST) && !(ATisEmpty(h_19))))
                {
                  i_3 = ATgetFirst((ATermList) h_19);
                  {
                    ATerm i_19 = (ATerm) ATgetNext((ATermList) h_19);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_3;
        if(match_cons(t, sym_stderr_0))
          {
            t = i_3;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = i_3;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = i_3;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(f_19);
      }
    else
      {
        t = a_19;
        {
          ATerm j_19 = t;
          int k_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
              ATerm t_0 (ATerm t)
              {
                ATerm n_7 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    n_7 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = n_7;
                return(t);
              }
              t = _2_0(t_0, _id, t);
              if(match_cons(t, sym__2))
                {
                  k_7 = ATgetArgument(t, 0);
                  l_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(k_7, l_7);
              m_7 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, m_7);
              ;
              LocalPopChoice(k_19);
            }
          else
            {
              t = j_19;
              {
                ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL;
                ATerm u_0 (ATerm t)
                {
                  ATerm r_7 = NULL;
                  r_7 = t;
                  t = SSL_is_string(r_7);
                  return(t);
                }
                t = _2_0(u_0, _id, t);
                if(match_cons(t, sym__2))
                  {
                    o_7 = ATgetArgument(t, 0);
                    p_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(o_7, p_7);
                q_7 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, q_7);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_7 = NULL;
      y_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_7, term_u_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      {
        ATerm k_3 = NULL;
        k_3 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_3), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = k_3;
        _fail(t);
      }
    }
  v_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(x_7);
  w_7 = t;
  t = v_7;
  t = fclose_0_0(t);
  t = w_7;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm w_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_8 = NULL;
      c_8 = t;
      t = SSL_access(c_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(z_19);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = w_19;
      {
        ATerm c_20 = t;
        int d_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_3 = NULL;
            ATerm e_20 = t;
            if((PushChoice() == 0))
              {
                ATerm d_8 = NULL;
                d_8 = t;
                t = SSL_access(d_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_20;
              }
            p_3 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_3), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = p_3;
            ;
            LocalPopChoice(d_20);
          }
        else
          {
            t = c_20;
            {
              ATerm x_3 = NULL;
              x_3 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_3), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = x_3;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL;
  e_8 = t;
  {
    ATerm w_0 (ATerm t)
    {
      ATerm f_4 = NULL;
      f_4 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_4), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
      t = f_4;
      return(t);
    }
    t = if_verbose5_1_0(w_0, t);
    {
      ATerm f_20 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, e_8));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_20;
        }
      f_8 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, e_8));
      t = f_8;
      {
        ATerm x_0 (ATerm t)
        {
          ATerm i_4 = NULL;
          i_4 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_4), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
          t = i_4;
          return(t);
        }
        t = if_verbose4_1_0(x_0, t);
        t = read_repository_file_0_0(t);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm j_8 = NULL;
            j_8 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
            t = j_8;
            return(t);
          }
          t = if_verbose6_1_0(z_0, t);
          g_8 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_20, g_8);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm a_1 (ATerm t)
            {
              ATerm k_8 = NULL;
              k_8 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
              t = k_8;
              return(t);
            }
            t = if_verbose6_1_0(a_1, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, e_8), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_h_20, (ATerm)ATmakeAppl(sym_Imported_1, e_8), (ATerm) ATempty);
            {
              ATerm b_1 (ATerm t)
              {
                ATerm l_8 = NULL;
                l_8 = t;
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
                t = l_8;
                return(t);
              }
              t = if_verbose4_1_0(b_1, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm filter_1_0 (ATerm k_77 (ATerm), ATerm t)
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
      {
        ATerm l_20 = t;
        int n_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_1 (ATerm t)
            {
              t = filter_1_0(k_77, t);
              return(t);
            }
            t = Cons_2_0(k_77, c_1, t);
            ;
            LocalPopChoice(n_20);
          }
        else
          {
            t = l_20;
            {
              ATerm p_8 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm o_20 = ATgetFirst((ATermList) t);
                  p_8 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = p_8;
              t = filter_1_0(k_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm e_79 (ATerm), ATerm t)
{
  ATerm t_8 (ATerm t)
  {
    ATerm p_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_79(t);
        t = t_8(t);
        ;
        LocalPopChoice(t_20);
      }
    else
      {
        t = p_20;
      }
    return(t);
  }
  t = t_8(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm y_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_4 = NULL;
            t = eval_config_0_0(t);
            w_4 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), w_4);
            t = w_4;
            ;
            LocalPopChoice(z_20);
          }
        else
          {
            t = y_20;
          }
      }
      ;
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      {
        ATerm a_21 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(b_21);
          }
        else
          {
            t = a_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm u_8 = NULL;
  ATerm f_1 (ATerm t)
  {
    ATerm b_5 = NULL;
    b_5 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_5), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
    t = b_5;
    return(t);
  }
  t = if_verbose5_1_0(f_1, t);
  u_8 = t;
  {
    ATerm c_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(j_21);
      }
    else
      {
        t = c_21;
        {
          ATerm v_8 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          v_8 = t;
          {
            ATerm g_1 (ATerm t)
            {
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
              t = filter_1_0(xtc_read_0_0, t);
              {
                ATerm k_21 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_21;
                  }
              }
              return(t);
            }
            t = repeat_1_0(g_1, t);
            t = v_8;
          }
        }
      }
    t = u_8;
    {
      ATerm i_1 (ATerm t)
      {
        ATerm j_5 = NULL;
        j_5 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, j_5), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
        t = j_5;
        return(t);
      }
      t = if_verbose5_1_0(i_1, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm l_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_1 (ATerm t)
      {
        ATerm o_5 = NULL;
        o_5 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_5), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
        t = o_5;
        return(t);
      }
      t = if_verbose5_1_0(k_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm r_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_6 = NULL,p_6 = NULL,q_6 = NULL;
            if(match_cons(t, sym__2))
              {
                a_6 = ATgetArgument(t, 0);
                p_6 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, a_6));
            {
              ATerm m_1 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((p_6 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((q_6 != NULL) && (q_6 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      q_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(m_1, t);
              t = not_null(q_6);
            }
            ;
            LocalPopChoice(s_21);
          }
        else
          {
            t = r_21;
            {
              ATerm s_7 = NULL,t_7 = NULL;
              s_7 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, s_7));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm t_21 = ATgetFirst((ATermList) t);
                  if(match_cons(t_21, sym__2))
                    {
                      ATerm w_21 = ATgetArgument(t_21, 0);
                      t_7 = ATgetArgument(t_21, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm v_21 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = t_7;
            }
          }
        {
          ATerm r_1 (ATerm t)
          {
            ATerm u_7 = NULL;
            u_7 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_7), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
            t = u_7;
            return(t);
          }
          t = if_verbose5_1_0(r_1, t);
        }
      }
      ;
      LocalPopChoice(o_21);
    }
  else
    {
      t = l_21;
      {
        ATerm z_8 = NULL;
        z_8 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), z_8), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_22), z_8), term_b_22);
        {
          ATerm s_1 (ATerm t)
          {
            ATerm x_10 = NULL;
            t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
            {
              ATerm u_1 (ATerm t)
              {
                ATerm k_10 = NULL,l_10 = NULL;
                k_10 = t;
                t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), k_10);
                l_10 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_10, l_10);
                return(t);
              }
              t = map_1_0(u_1, t);
              x_10 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_10), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
              t = x_10;
            }
            return(t);
          }
          t = if_verbose5_1_0(s_1, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm assert_1_0 (ATerm i_80 (ATerm), ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL;
  if(match_cons(t, sym__2))
    {
      d_9 = ATgetArgument(t, 0);
      e_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_80(t);
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_9, d_9, e_9);
  t = table_push_0_0(t);
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(f_9, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_9 = ATgetFirst((ATermList) t);
        h_9 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(f_9, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(h_9), (ATerm) ATinsert(CheckATermList(g_9), d_9)));
    t = (ATerm) ATmakeAppl(sym__2, d_9, e_9);
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm x_9 (ATerm n_9, ATerm t)
  {
    t = n_9;
    {
      ATerm g_22 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm h_22 = ATgetArgument(t, 0);
              ATerm j_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = g_22;
        }
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
      t = (ATerm) ATmakeAppl(sym__2, n_9, term_g_7);
      t = open_file_0_0(t);
    }
    return(t);
  }
  ATerm y_9 (ATerm p_9, ATerm q_9, ATerm r_9, ATerm t)
  {
    t = SSL_open_file(p_9, q_9);
    return(t);
  }
  ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL;
  u_9 = t;
  if(match_cons(t, sym__2))
    {
      v_9 = ATgetArgument(t, 0);
      w_9 = ATgetArgument(t, 1);
      {
        ATerm l_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_9(u_9, t);
            ;
            LocalPopChoice(m_22);
          }
        else
          {
            t = l_22;
            t = y_9(v_9, w_9, u_9, t);
          }
      }
    }
  else
    {
      t = x_9(u_9, t);
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
  ATerm a_10 = NULL;
  t = term_n_22;
  t = new_0_0(t);
  a_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_10, term_p_22);
  t = conc_strings_0_0(t);
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_10 = NULL;
        d_10 = t;
        t = SSL_access(d_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
      }
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm g_10 = NULL;
  t = new_file_0_0(t);
  g_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_10, term_g_7);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, g_10, term_n_22);
  {
    ATerm w_1 (ATerm t)
    {
      t = term_t_22;
      return(t);
    }
    t = assert_1_0(w_1, t);
    t = g_10;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  e_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm f_14 = NULL,g_14 = NULL,m_15 = NULL,q_15 = NULL;
      t = e_11;
      t = xtc_new_file_0_0(t);
      f_14 = t;
      t = p_0(t);
      g_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_14, (ATerm) ATinsert(ATinsert(ATempty, f_14), term_u_22));
      {
        ATerm v_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm a_23 = ATgetArgument(t, 0);
                ATerm b_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = g_14;
            {
              ATerm x_1 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, f_14), term_u_22);
                return(t);
              }
              t = at_end_1_0(x_1, t);
            }
            ;
            LocalPopChoice(y_22);
          }
        else
          {
            t = v_22;
            {
              ATerm l_15 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, g_14, (ATerm) ATinsert(ATinsert(ATempty, f_14), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm c_23 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) c_23) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  l_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = l_15;
              t = concat_0_0(t);
            }
          }
        m_15 = t;
        t = n_0(t);
        t = xtc_find_0_0(t);
        q_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_15, m_15);
        {
          ATerm z_1 (ATerm t)
          {
            t = SSL_execvp(q_15, m_15);
            return(t);
          }
          t = fork_and_wait_1_0(z_1, t);
          t = SSL_close_file(f_14);
          t = (ATerm) ATmakeAppl(sym_FILE_1, f_14);
        }
      }
    }
  else
    {
      ATerm z_16 = NULL,a_17 = NULL,d_19 = NULL,e_19 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          f_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_11;
      t = xtc_new_file_0_0(t);
      z_16 = t;
      t = p_0(t);
      a_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_16), term_u_22), f_11), term_d_23));
      {
        ATerm e_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm h_23 = ATgetArgument(t, 0);
                ATerm i_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_17;
            {
              ATerm a_2 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_16), term_u_22), f_11), term_d_23);
                return(t);
              }
              t = at_end_1_0(a_2, t);
            }
            ;
            LocalPopChoice(g_23);
          }
        else
          {
            t = e_23;
            {
              ATerm c_19 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, a_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_16), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), f_11), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm k_23 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) k_23) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  c_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = c_19;
              t = concat_0_0(t);
            }
          }
        d_19 = t;
        t = n_0(t);
        t = xtc_find_0_0(t);
        e_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_19, d_19);
        {
          ATerm b_2 (ATerm t)
          {
            t = SSL_execvp(e_19, d_19);
            return(t);
          }
          t = fork_and_wait_1_0(b_2, t);
          t = SSL_close_file(z_16);
          t = (ATerm) ATmakeAppl(sym_FILE_1, z_16);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm b_62 (ATerm), ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
  l_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_11);
  i_11 = t;
  t = j_11;
  t = b_62(t);
  k_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, k_11), i_11);
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue)));
      {
        ATerm o_23 = t;
        int p_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_20 = NULL;
            t = eval_config_0_0(t);
            i_20 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue)), i_20);
            t = i_20;
            ;
            LocalPopChoice(p_23);
          }
        else
          {
            t = o_23;
          }
      }
      ;
      LocalPopChoice(m_23);
    }
  else
    {
      t = l_23;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue))));
      t = SSL_exit((ATerm) ATmakeInt(1));
      t = (ATerm) ATinsert(ATempty, term_q_23);
    }
  return(t);
}
ATerm sglr_2_0 (ATerm f_63 (ATerm), ATerm g_63 (ATerm), ATerm t)
{
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_23 = t;
      int y_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(y_23);
        }
      else
        {
          t = u_23;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(t_23);
      {
        ATerm i_2 (ATerm t)
        {
          t = term_z_23;
          return(t);
        }
        ATerm j_2 (ATerm t)
        {
          ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
          o_11 = t;
          t = f_63(t);
          p_11 = t;
          t = o_11;
          t = g_63(t);
          q_11 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(q_11), p_11), term_c_24);
          return(t);
        }
        t = xtc_transform_file_2_0(i_2, j_2, t);
      }
    }
  else
    {
      t = s_23;
      {
        ATerm k_2 (ATerm t)
        {
          t = term_z_23;
          return(t);
        }
        ATerm l_2 (ATerm t)
        {
          ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL;
          r_11 = t;
          t = f_63(t);
          s_11 = t;
          t = r_11;
          t = g_63(t);
          t_11 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(t_11), s_11), term_c_24);
          return(t);
        }
        t = xtc_transform_term_2_0(k_2, l_2, t);
      }
    }
  return(t);
}
ATerm parse_and_implode_0_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm u_11 = NULL;
    t = term_d_24;
    {
      ATerm e_24 = t;
      int f_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue)));
          {
            ATerm g_24 = t;
            int h_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_21 = NULL;
                t = eval_config_0_0(t);
                u_21 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue)), u_21);
                t = u_21;
                ;
                LocalPopChoice(h_24);
              }
            else
              {
                t = g_24;
              }
          }
          ;
          LocalPopChoice(f_24);
        }
      else
        {
          t = e_24;
          t = (ATerm) ATempty;
        }
      u_11 = t;
      t = (ATerm) ATinsert(CheckATermList(u_11), term_i_24);
    }
    return(t);
  }
  t = sglr_2_0(get_parse_table_0_0, m_2, t);
  {
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_24 = t;
        int n_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(n_24);
          }
        else
          {
            t = m_24;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(k_24);
        {
          ATerm n_2 (ATerm t)
          {
            t = term_o_24;
            return(t);
          }
          ATerm o_2 (ATerm t)
          {
            t = term_q_24;
            {
              ATerm r_24 = t;
              int s_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue)));
                  {
                    ATerm u_24 = t;
                    int v_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_22 = NULL;
                        t = eval_config_0_0(t);
                        k_22 = t;
                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue)), k_22);
                        t = k_22;
                        ;
                        LocalPopChoice(v_24);
                      }
                    else
                      {
                        t = u_24;
                      }
                  }
                  ;
                  LocalPopChoice(s_24);
                }
              else
                {
                  t = r_24;
                  t = (ATerm) ATempty;
                }
            }
            return(t);
          }
          t = xtc_transform_file_2_0(n_2, o_2, t);
        }
      }
    else
      {
        t = j_24;
        {
          ATerm p_2 (ATerm t)
          {
            t = term_o_24;
            return(t);
          }
          ATerm q_2 (ATerm t)
          {
            t = term_q_24;
            {
              ATerm w_24 = t;
              int y_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue)));
                  {
                    ATerm z_24 = t;
                    int c_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_22 = NULL;
                        t = eval_config_0_0(t);
                        o_22 = t;
                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue)), o_22);
                        t = o_22;
                        ;
                        LocalPopChoice(c_25);
                      }
                    else
                      {
                        t = z_24;
                      }
                  }
                  ;
                  LocalPopChoice(y_24);
                }
              else
                {
                  t = w_24;
                  t = (ATerm) ATempty;
                }
            }
            return(t);
          }
          t = xtc_transform_term_2_0(p_2, q_2, t);
        }
      }
  }
  return(t);
}
ATerm copy_to_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL;
  i_12 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_22 = NULL;
        t = i_12;
        t = m_0(t);
        s_22 = t;
        {
          ATerm f_25 = t;
          int g_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(g_25);
            }
          else
            {
              t = f_25;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(j_12, s_22);
          t = (ATerm) ATmakeAppl(sym_FILE_1, j_12);
        }
        ;
        LocalPopChoice(e_25);
      }
    else
      {
        t = d_25;
        {
          ATerm h_25 = t;
          int i_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_22 = NULL;
              t = i_12;
              t = m_0(t);
              w_22 = t;
              {
                ATerm j_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm k_25 = t;
                    int l_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(l_25);
                      }
                    else
                      {
                        t = k_25;
                        {
                          ATerm m_25 = t;
                          int n_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(n_25);
                            }
                          else
                            {
                              t = m_25;
                              {
                                ATerm x_22 = NULL;
                                x_22 = t;
                                if((j_12 != t))
                                  {
                                    _fail(t);
                                  }
                                t = x_22;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_25;
                  }
                t = SSL_copy(j_12, w_22);
                t = (ATerm) ATmakeAppl(sym_FILE_1, j_12);
              }
              ;
              LocalPopChoice(i_25);
            }
          else
            {
              t = h_25;
              t = i_12;
              t = m_0(t);
              if((j_12 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_12);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm t_12 = NULL,x_12 = NULL,y_12 = NULL;
  if(match_cons(t, sym__2))
    {
      t_12 = ATgetArgument(t, 0);
      x_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_22 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_25 = ATgetArgument(t, 0);
            ATerm s_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(t_12, x_12);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_25 = ATgetFirst((ATermList) t);
            z_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_22;
        ;
        LocalPopChoice(p_25);
      }
    else
      {
        t = o_25;
        t = (ATerm) ATempty;
      }
    y_12 = t;
    t = SSL_table_put(t_12, x_12, y_12);
    t = (ATerm) ATmakeAppl(sym__2, t_12, x_12);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm f_80 (ATerm), ATerm t)
{
  ATerm f_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL;
  f_13 = t;
  t = f_80(t);
  h_13 = t;
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(h_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_13 = ATgetFirst((ATermList) t);
        i_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(h_13, (ATerm)ATmakeAppl(sym_Scopes_0), i_13);
    t = j_13;
    {
      ATerm r_2 (ATerm t)
      {
        ATerm k_13 = NULL;
        k_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_13, k_13);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(r_2, t);
      t = f_13;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm t)
{
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_81(t);
      t = b_81(t);
      ;
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
      t = b_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_80 (ATerm), ATerm t)
{
  ATerm n_13 = NULL,p_13 = NULL,q_13 = NULL;
  n_13 = t;
  t = e_80(t);
  p_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_13, term_y_25);
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_26 = ATgetArgument(t, 0);
            ATerm c_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(p_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(a_26);
      }
    else
      {
        t = z_25;
        t = (ATerm) ATempty;
      }
    q_13 = t;
    t = SSL_table_put(p_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(q_13), (ATerm) ATempty));
    t = n_13;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm j_83 (ATerm), ATerm t)
{
  ATerm w_13 = NULL;
  ATerm s_2 (ATerm t)
  {
    t = term_t_22;
    return(t);
  }
  t = begin_scope_1_0(s_2, t);
  {
    ATerm t_2 (ATerm t)
    {
      ATerm x_13 = NULL;
      x_13 = t;
      {
        ATerm d_26 = t;
        int e_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(e_26);
          }
        else
          {
            t = d_26;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((w_13 != NULL) && (w_13 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              w_13 = ATgetFirst((ATermList) t);
            {
              ATerm f_26 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(w_13);
        {
          ATerm u_2 (ATerm t)
          {
            ATerm g_26 = t;
            int h_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_14 = NULL;
                a_14 = t;
                t = SSL_remove(a_14);
                ;
                LocalPopChoice(h_26);
              }
            else
              {
                t = g_26;
              }
            return(t);
          }
          t = map_1_0(u_2, t);
          t = x_13;
          {
            ATerm v_2 (ATerm t)
            {
              t = term_t_22;
              return(t);
            }
            t = end_scope_1_0(v_2, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(j_83, t_2, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm k_83 (ATerm), ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm j_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_14 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm l_26 = t;
          int m_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_23 = NULL;
              t = eval_config_0_0(t);
              f_23 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), f_23);
              t = f_23;
              ;
              LocalPopChoice(m_26);
            }
          else
            {
              t = l_26;
            }
          c_14 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, c_14);
        }
        ;
        LocalPopChoice(k_26);
      }
    else
      {
        t = j_26;
        t = term_n_26;
      }
    t = k_83(t);
    {
      ATerm x_2 (ATerm t)
      {
        ATerm p_26 = t;
        int q_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
            {
              ATerm r_26 = t;
              int s_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_23 = NULL;
                  t = eval_config_0_0(t);
                  j_23 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), j_23);
                  t = j_23;
                  ;
                  LocalPopChoice(s_26);
                }
              else
                {
                  t = r_26;
                }
            }
            ;
            LocalPopChoice(q_26);
          }
        else
          {
            t = p_26;
            t = term_t_26;
          }
        return(t);
      }
      t = copy_to_1_0(x_2, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(w_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL;
  d_14 = t;
  t = term_n_22;
  t = whoami_0_0(t);
  e_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), e_14), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = d_14;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm h_14 = NULL;
    h_14 = t;
    if(match_string(t, "-k"))
      {
        t = h_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = h_14;
      }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    ATerm i_14 = NULL,j_14 = NULL;
    i_14 = t;
    t = SSL_string_to_int(i_14);
    j_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), j_14);
    t = i_14;
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_u_26;
    return(t);
  }
  t = ArgOption_3_0(y_2, z_2, a_3, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_3 (ATerm t)
      {
        ATerm l_14 = NULL;
        l_14 = t;
        if(match_string(t, "-S"))
          {
            t = l_14;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = l_14;
          }
        return(t);
      }
      ATerm h_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_y_26;
        return(t);
      }
      ATerm j_3 (ATerm t)
      {
        t = term_z_26;
        return(t);
      }
      t = Option_3_0(f_3, h_3, j_3, t);
      ;
      LocalPopChoice(w_26);
    }
  else
    {
      t = v_26;
      {
        ATerm a_27 = t;
        int b_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_3 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm o_3 (ATerm t)
            {
              ATerm m_14 = NULL,n_14 = NULL;
              m_14 = t;
              t = SSL_string_to_int(m_14);
              n_14 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_14);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, m_14);
              return(t);
            }
            ATerm r_3 (ATerm t)
            {
              t = term_c_27;
              return(t);
            }
            t = ArgOption_3_0(n_3, o_3, r_3, t);
            ;
            LocalPopChoice(b_27);
          }
        else
          {
            t = a_27;
            {
              ATerm s_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm t_3 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_d_27;
                return(t);
              }
              ATerm u_3 (ATerm t)
              {
                t = term_e_27;
                return(t);
              }
              t = Option_3_0(s_3, t_3, u_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_14 = NULL;
      t = term_n_22;
      t = d_0(t);
      s_14 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_27, term_g_27, s_14);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm w_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_14 = ATgetFirst((ATermList) t);
          r_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_14;
      t = a_0(t);
      t = term_n_22;
      t = c_0(t);
      w_14 = t;
      t = (ATerm) ATinsert(CheckATermList(r_14), w_14);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm y_14 = NULL;
    y_14 = t;
    if(match_string(t, "-o"))
      {
        t = y_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = y_14;
      }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    ATerm z_14 = NULL;
    z_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), z_14);
    t = (ATerm) ATmakeAppl(sym_Output_1, z_14);
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_h_27;
    return(t);
  }
  t = ArgOption_3_0(v_3, w_3, y_3, t);
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm b_15 = NULL;
    b_15 = t;
    if(match_string(t, "-i"))
      {
        t = b_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = b_15;
      }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    ATerm c_15 = NULL;
    c_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), c_15);
    t = (ATerm) ATmakeAppl(sym_Input_1, c_15);
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_i_27;
    return(t);
  }
  t = ArgOption_3_0(a_4, b_4, c_4, t);
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
  if(match_cons(t, sym__2))
    {
      e_15 = ATgetArgument(t, 0);
      f_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_15;
  {
    ATerm j_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_15);
        {
          ATerm l_27 = t;
          int m_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_23 = NULL;
              t = eval_config_0_0(t);
              n_23 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_15, n_23);
              t = n_23;
              ;
              LocalPopChoice(m_27);
            }
          else
            {
              t = l_27;
            }
        }
        ;
        LocalPopChoice(k_27);
      }
    else
      {
        t = j_27;
        t = (ATerm) ATempty;
      }
    g_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_15, g_15);
    {
      ATerm n_27 = t;
      int o_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm p_27 = ATgetArgument(t, 0);
              ATerm q_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_15;
          {
            ATerm d_4 (ATerm t)
            {
              t = g_15;
              return(t);
            }
            t = at_end_1_0(d_4, t);
          }
          ;
          LocalPopChoice(o_27);
        }
      else
        {
          t = n_27;
          {
            ATerm r_23 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, f_15, g_15));
            if(match_cons(t, sym__2))
              {
                ATerm r_27 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) r_27) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                r_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_23;
            t = concat_0_0(t);
          }
        }
      h_15 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_15, h_15);
      t = (ATerm) ATmakeAppl(sym__3, term_s_27, e_15, h_15);
    }
  }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,r_15 = NULL;
  if(match_cons(t, sym__3))
    {
      n_15 = ATgetArgument(t, 0);
      o_15 = ATgetArgument(t, 1);
      p_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_15, o_15);
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_27 = ATgetArgument(t, 0);
            ATerm w_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_15, o_15);
        ;
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        t = (ATerm) ATempty;
      }
    r_15 = t;
    t = SSL_table_put(n_15, o_15, (ATerm) ATinsert(CheckATermList(r_15), p_15));
    t = (ATerm) ATmakeAppl(sym__3, n_15, o_15, p_15);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_16 = NULL;
      t = term_n_22;
      t = l_0(t);
      d_16 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_27, term_g_27, d_16);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm h_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_15 = ATgetFirst((ATermList) t);
          a_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_16;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_16 = ATgetFirst((ATermList) t);
          c_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_15;
      t = j_0(t);
      t = b_16;
      t = k_0(t);
      h_16 = t;
      t = (ATerm) ATinsert(CheckATermList(c_16), h_16);
    }
  return(t);
}
ATerm sglri_options_0_0 (ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm h_4 (ATerm t)
      {
        ATerm i_16 = NULL;
        i_16 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue)), i_16);
        t = i_16;
        return(t);
      }
      ATerm k_4 (ATerm t)
      {
        t = term_z_27;
        return(t);
      }
      t = ArgOption_3_0(g_4, h_4, k_4, t);
      ;
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      {
        ATerm a_28 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_4 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--sglr", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm m_4 (ATerm t)
            {
              ATerm j_16 = NULL;
              j_16 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_d_24, j_16);
              t = extend_config_0_0(t);
              t = j_16;
              return(t);
            }
            ATerm n_4 (ATerm t)
            {
              t = term_c_28;
              return(t);
            }
            t = ArgOption_3_0(l_4, m_4, n_4, t);
            ;
            LocalPopChoice(b_28);
          }
        else
          {
            t = a_28;
            {
              ATerm o_4 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--impl", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm p_4 (ATerm t)
              {
                ATerm k_16 = NULL;
                k_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_q_24, k_16);
                t = extend_config_0_0(t);
                t = k_16;
                return(t);
              }
              ATerm q_4 (ATerm t)
              {
                t = term_d_28;
                return(t);
              }
              t = ArgOption_3_0(o_4, p_4, q_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_16 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_22;
  t = whoami_0_0(t);
  m_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), m_16));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_23 = NULL;
        t = eval_config_0_0(t);
        v_23 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_23);
        t = v_23;
        ;
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm h_76 (ATerm), ATerm i_76 (ATerm), ATerm t)
{
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_76(t);
      ;
      LocalPopChoice(h_28);
    }
  else
    {
      t = g_28;
      {
        ATerm p_16 = NULL,q_16 = NULL,t_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_16 = ATgetFirst((ATermList) t);
            q_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_16;
        t = foldr_2_0(h_76, i_76, t);
        t_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_16, t_16);
        t = i_76(t);
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
  ATerm w_16 = NULL,w_23 = NULL,x_23 = NULL;
  t = times_0_0(t);
  w_23 = t;
  t = SSL_explode_term(w_23);
  if(match_cons(t, sym__2))
    {
      ATerm i_28 = ATgetArgument(t, 0);
      x_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_23;
  {
    ATerm r_4 (ATerm t)
    {
      t = term_x_26;
      return(t);
    }
    ATerm s_4 (ATerm t)
    {
      ATerm a_24 = NULL,b_24 = NULL;
      if(match_cons(t, sym__2))
        {
          a_24 = ATgetArgument(t, 0);
          b_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm j_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(a_24, b_24);
            ;
            LocalPopChoice(k_28);
          }
        else
          {
            t = j_28;
            t = SSL_addr(a_24, b_24);
          }
      }
      return(t);
    }
    t = foldr_2_0(r_4, s_4, t);
    w_16 = t;
    t = SSL_TicksToSeconds(w_16);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL;
  h_17 = t;
  if(match_cons(t, sym__2))
    {
      i_17 = ATgetArgument(t, 0);
      j_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_17;
        if((i_17 != t))
          {
            _fail(t);
          }
        t = h_17;
        ;
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        t = h_17;
        {
          ATerm n_28 = t;
          int o_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_17, j_17);
              ;
              LocalPopChoice(o_28);
            }
          else
            {
              t = n_28;
              t = SSL_gtr(i_17, j_17);
            }
          t = (ATerm) ATmakeAppl(sym__2, i_17, j_17);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_81 (ATerm), ATerm t)
{
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_17 = NULL,o_17 = NULL;
      m_17 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm r_28 = t;
        int s_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_24 = NULL;
            t = eval_config_0_0(t);
            l_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), l_24);
            t = l_24;
            ;
            LocalPopChoice(s_28);
          }
        else
          {
            t = r_28;
          }
        o_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_17, term_m_8);
        t = geq_0_0(t);
        t = m_17;
        t = f_81(t);
      }
      ;
      LocalPopChoice(q_28);
    }
  else
    {
      t = p_28;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm q_17 = NULL,r_17 = NULL;
    t = run_time_0_0(t);
    q_17 = t;
    t = term_n_22;
    t = whoami_0_0(t);
    r_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), q_17), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), r_17));
    t = (ATerm) ATmakeAppl(sym__2, term_s_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_28), q_17), term_z_7), r_17));
    return(t);
  }
  t = if_verbose1_1_0(u_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm l_85 (ATerm), ATerm t)
{
  ATerm u_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm w_28 = t;
        int x_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_24 = NULL;
            t = eval_config_0_0(t);
            p_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), p_24);
            t = p_24;
            ;
            LocalPopChoice(x_28);
          }
        else
          {
            t = w_28;
          }
      }
      ;
      LocalPopChoice(v_28);
    }
  else
    {
      t = u_28;
      {
        ATerm x_4 (ATerm t)
        {
          ATerm y_28 = t;
          int z_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(z_28);
            }
          else
            {
              t = y_28;
              {
                ATerm a_29 = t;
                int b_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(b_29);
                  }
                else
                  {
                    t = a_29;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(x_4, t);
      }
    }
  t = l_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_17 = ATgetFirst((ATermList) t);
      u_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_17 = NULL,z_17 = NULL;
        t = u_17;
        t = h_0(t);
        y_17 = t;
        t = t_17;
        t = g_0(t);
        z_17 = t;
        t = u_17;
        {
          ATerm y_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(y_17), z_17);
            return(t);
          }
          t = reverse_acc_2_0(g_0, y_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_22;
      t = h_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm i_62 (ATerm), ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL;
  d_18 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_18);
  a_18 = t;
  t = b_18;
  t = i_62(t);
  c_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, c_18), a_18);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_18 = NULL;
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm e_29 = t;
        int f_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_24 = NULL;
            t = eval_config_0_0(t);
            t_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), t_24);
            t = t_24;
            ;
            LocalPopChoice(f_29);
          }
        else
          {
            t = e_29;
          }
        h_18 = t;
      }
      ;
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      {
        ATerm z_4 (ATerm t)
        {
          ATerm a_5 (ATerm t)
          {
            if(((h_18 != NULL) && (h_18 != t)))
              _fail(t);
            else
              h_18 = t;
            return(t);
          }
          t = Program_1_0(a_5, t);
          return(t);
        }
        t = fetch_1_0(z_4, t);
      }
    }
  {
    ATerm g_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_29), not_null(h_18)), term_i_29);
        t = echo_0_0(t);
        ;
        LocalPopChoice(h_29);
      }
    else
      {
        t = g_29;
      }
    t = term_k_29;
    t = echo_0_0(t);
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
    {
      ATerm c_5 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = reverse_acc_2_0(_id, c_5, t);
      {
        ATerm d_5 (ATerm t)
        {
          ATerm i_18 = NULL;
          i_18 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, i_18), term_l_29);
          t = echo_0_0(t);
          return(t);
        }
        t = map_1_0(d_5, t);
        {
          ATerm m_29 = t;
          int n_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_29), term_q_29), term_p_29), term_o_29);
              t = echo_0_0(t);
              ;
              LocalPopChoice(n_29);
            }
          else
            {
              t = m_29;
            }
        }
      }
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm j_62 (ATerm), ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL;
  m_18 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      k_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_18);
  j_18 = t;
  t = k_18;
  t = j_62(t);
  l_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, l_18), j_18);
  return(t);
}
ATerm fetch_1_0 (ATerm b_70 (ATerm), ATerm t)
{
  ATerm p_18 (ATerm t)
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(b_70, _id, t);
        ;
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
        t = Cons_2_0(_id, p_18, t);
      }
    return(t);
  }
  t = p_18(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL;
  r_18 = t;
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_18;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_29 = ATgetFirst((ATermList) t);
                ATerm x_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_18;
          }
        ;
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        t = (ATerm) ATinsert(ATempty, r_18);
      }
    s_18 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), s_18);
    t = r_18;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_24 = NULL;
        t = eval_config_0_0(t);
        x_24 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_24);
        t = x_24;
        ;
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_30 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(b_30);
    }
  else
    {
      t = a_30;
      {
        ATerm y_18 = NULL,b_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_18 = ATgetFirst((ATermList) t);
            b_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_18;
        {
          ATerm f_5 (ATerm t)
          {
            t = b_19;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(f_5, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm h_70 (ATerm), ATerm t)
{
  ATerm l_19 (ATerm t)
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, l_19, t);
        ;
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_70(t);
      }
    return(t);
  }
  t = l_19(t);
  return(t);
}
ATerm _2_0 (ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
  r_19 = t;
  if(match_cons(t, sym__2))
    {
      n_19 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_19);
  m_19 = t;
  t = n_19;
  t = t_55(t);
  p_19 = t;
  t = o_19;
  t = u_55(t);
  q_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, p_19, q_19), m_19);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm v_19 = NULL;
  ATerm g_5 (ATerm t)
  {
    ATerm x_19 = NULL;
    x_19 = t;
    t = SSL_explode_string(x_19);
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    ATerm y_19 = NULL;
    y_19 = t;
    t = SSL_explode_string(y_19);
    return(t);
  }
  t = _2_0(g_5, k_5, t);
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_20 = NULL,b_20 = NULL;
        if(match_cons(t, sym__2))
          {
            a_20 = ATgetArgument(t, 0);
            b_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_20;
        {
          ATerm l_5 (ATerm t)
          {
            t = b_20;
            return(t);
          }
          t = at_end_1_0(l_5, t);
        }
        ;
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
        {
          ATerm a_25 = NULL,b_25 = NULL;
          a_25 = t;
          t = SSL_explode_term(a_25);
          if(match_cons(t, sym__2))
            {
              ATerm g_30 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_30) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              b_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_25;
          t = concat_0_0(t);
        }
      }
    v_19 = t;
    t = SSL_implode_string(v_19);
  }
  return(t);
}
ATerm map_1_0 (ATerm q_69 (ATerm), ATerm t)
{
  ATerm g_20 (ATerm t)
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(i_30);
      }
    else
      {
        t = h_30;
        t = Cons_2_0(q_69, g_20, t);
      }
    return(t);
  }
  t = g_20(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm j_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_20 = NULL;
      m_20 = t;
      t = SSL_is_string(m_20);
      ;
      LocalPopChoice(k_30);
    }
  else
    {
      t = j_30;
      {
        ATerm l_30 = t;
        int m_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_5 (ATerm t)
            {
              ATerm n_30 = t;
              int o_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(o_30);
                }
              else
                {
                  t = n_30;
                }
              return(t);
            }
            t = map_1_0(n_5, t);
            ;
            LocalPopChoice(m_30);
          }
        else
          {
            t = l_30;
            {
              ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
              q_20 = t;
              if(match_cons(t, sym_Path_1))
                {
                  r_20 = ATgetArgument(t, 0);
                  t = r_20;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      r_20 = ATgetArgument(t, 0);
                      t = r_20;
                      {
                        ATerm p_30 = t;
                        int q_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), r_20);
                            {
                              ATerm r_30 = t;
                              int s_30 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm r_25 = NULL;
                                  t = eval_config_0_0(t);
                                  r_25 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), r_20, r_25);
                                  t = r_25;
                                  ;
                                  LocalPopChoice(s_30);
                                }
                              else
                                {
                                  t = r_30;
                                }
                            }
                            ;
                            LocalPopChoice(q_30);
                          }
                        else
                          {
                            t = p_30;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_20), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = r_20;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm w_20 = NULL,x_20 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          r_20 = ATgetArgument(t, 0);
                          s_20 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = r_20;
                      t = eval_config_0_0(t);
                      w_20 = t;
                      t = s_20;
                      t = eval_config_0_0(t);
                      x_20 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_20, x_20);
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
  ATerm t_30 = t;
  int u_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_5 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm q_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_w_30;
        return(t);
      }
      ATerm r_5 (ATerm t)
      {
        t = term_x_30;
        return(t);
      }
      t = Option_3_0(p_5, q_5, r_5, t);
      ;
      LocalPopChoice(u_30);
    }
  else
    {
      t = t_30;
      {
        ATerm s_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm t_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_y_30;
          return(t);
        }
        ATerm u_5 (ATerm t)
        {
          t = term_z_30;
          return(t);
        }
        t = Option_3_0(s_5, t_5, u_5, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL;
  i_21 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_21 = ATgetFirst((ATermList) t);
      f_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_21);
  d_21 = t;
  t = e_21;
  t = c_57(t);
  g_21 = t;
  t = f_21;
  t = d_57(t);
  h_21 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(h_21), g_21), d_21);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_87 (ATerm), ATerm t)
{
  ATerm m_21 = NULL;
  m_21 = t;
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_31;
        t = j_87(t);
        ;
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
      }
    t = m_21;
    {
      ATerm v_5 (ATerm t)
      {
        ATerm n_21 = NULL;
        n_21 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_21);
        t = (ATerm) ATmakeAppl(sym_Program_1, n_21);
        return(t);
      }
      ATerm z_5 (ATerm t)
      {
        ATerm d_31 = t;
        int e_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_31 = t;
            int g_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(g_31);
              }
            else
              {
                t = f_31;
                t = j_87(t);
                t = Cons_2_0(_id, z_5, t);
              }
            ;
            LocalPopChoice(e_31);
          }
        else
          {
            t = d_31;
            {
              ATerm p_21 = NULL,q_21 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_21 = ATgetFirst((ATermList) t);
                  q_21 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_21), (ATerm) ATmakeAppl(sym_Undefined_1, p_21));
            }
          }
        return(t);
      }
      t = Cons_2_0(v_5, z_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm i_87 (ATerm), ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
  x_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = x_21;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm h_31 = t;
      int i_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_87(t);
          ;
          LocalPopChoice(i_31);
        }
      else
        {
          t = h_31;
          {
            ATerm j_31 = t;
            int k_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_6 (ATerm t)
                {
                  ATerm a_22 = NULL;
                  a_22 = t;
                  if(match_string(t, "--help"))
                    {
                      t = a_22;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = a_22;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = a_22;
                        }
                    }
                  return(t);
                }
                ATerm i_6 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_l_31;
                  return(t);
                }
                ATerm k_6 (ATerm t)
                {
                  t = term_m_31;
                  return(t);
                }
                t = Option_3_0(h_6, i_6, k_6, t);
                ;
                LocalPopChoice(k_31);
              }
            else
              {
                t = j_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_6, t);
    {
      ATerm n_31 = t;
      int o_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_22 = NULL;
          f_22 = t;
          {
            ATerm p_31 = t;
            int q_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = f_22;
                {
                  ATerm r_31 = t;
                  int s_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm t_31 = t;
                        int u_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm i_26 = NULL;
                            t = eval_config_0_0(t);
                            i_26 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), i_26);
                            t = i_26;
                            ;
                            LocalPopChoice(u_31);
                          }
                        else
                          {
                            t = t_31;
                          }
                      }
                      ;
                      LocalPopChoice(s_31);
                    }
                  else
                    {
                      t = r_31;
                      {
                        ATerm r_6 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(r_6, t);
                      }
                    }
                  t = f_22;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(q_31);
              }
            else
              {
                t = p_31;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm v_31 = t;
                  int w_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_26 = NULL;
                      t = eval_config_0_0(t);
                      o_26 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), o_26);
                      t = o_26;
                      ;
                      LocalPopChoice(w_31);
                    }
                  else
                    {
                      t = v_31;
                    }
                  t = f_22;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(o_31);
        }
      else
        {
          t = n_31;
          {
            ATerm x_31 = t;
            int y_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_6 (ATerm t)
                {
                  ATerm t_6 (ATerm t)
                  {
                    if(((y_21 != NULL) && (y_21 != t)))
                      _fail(t);
                    else
                      y_21 = t;
                    return(t);
                  }
                  t = Undefined_1_0(t_6, t);
                  return(t);
                }
                t = fetch_1_0(s_6, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(y_21)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_s_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_21)), term_z_31));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(y_31);
              }
            else
              {
                t = x_31;
              }
          }
        }
      z_21 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = z_21;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm t)
{
  ATerm i_22 = NULL;
  t = parse_options_1_0(n_85, t);
  i_22 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), i_22);
  t = i_22;
  t = p_85(t);
  {
    ATerm a_32 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_85, t);
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
              t = q_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(d_32);
            }
          else
            {
              t = c_32;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    ATerm e_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sglri_options_0_0(t);
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
              t = input_option_0_0(t);
              ;
              LocalPopChoice(h_32);
            }
          else
            {
              t = g_32;
              {
                ATerm i_32 = t;
                int j_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(j_32);
                  }
                else
                  {
                    t = i_32;
                    {
                      ATerm k_32 = t;
                      int l_32 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm x_6 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm y_6 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_m_32;
                            return(t);
                          }
                          ATerm b_7 (ATerm t)
                          {
                            t = term_n_32;
                            return(t);
                          }
                          t = Option_3_0(x_6, y_6, b_7, t);
                          ;
                          LocalPopChoice(l_32);
                        }
                      else
                        {
                          t = k_32;
                          {
                            ATerm o_32 = t;
                            int p_32 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(p_32);
                              }
                            else
                              {
                                t = o_32;
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
  ATerm v_6 (ATerm t)
  {
    t = xtc_io_1_0(parse_and_implode_0_0, t);
    return(t);
  }
  t = option_wrap_4_0(u_6, default_usage_0_0, _id, v_6, t);
  return(t);
}
