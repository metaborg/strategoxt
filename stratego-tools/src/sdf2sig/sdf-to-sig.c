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
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_b_29;
ATerm term_w_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_j_28;
ATerm term_w_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_z_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_m_25;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_j_24;
ATerm term_w_23;
ATerm term_l_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_k_21;
ATerm term_p_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_l_18;
ATerm term_f_16;
ATerm term_c_16;
ATerm term_h_15;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_c_14;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_b_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_n_10;
ATerm term_f_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_q_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_y_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_i_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_b_8;
ATerm term_y_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_q_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_e_6;
void init_constant_terms (void)
{
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_6, term_t_6, term_u_6);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_6, term_x_6, term_y_6);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_7, term_b_7, term_e_7);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_7, term_l_7, term_m_7);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_7, term_q_7, term_s_7);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_7, term_v_7, term_w_7);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_8, term_d_8, term_e_8);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_8, term_k_8, term_l_8);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_8, term_w_8, term_y_8);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_9, term_g_9, term_h_9);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_9, term_k_9, term_m_9);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_9, term_v_9, term_w_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_9, term_f_10, term_n_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_10, term_z_10, term_b_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_11, term_h_11, term_j_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_p_11, term_q_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_t_11, term_b_12);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_12, term_h_12, term_i_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_12, term_n_12, term_o_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_r_12, term_s_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_w_12, term_x_12);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_e_13, term_h_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_13, term_k_13, term_m_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_s_13, term_t_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_c_14, term_g_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_l_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_o_14, term_r_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_14, term_v_14, term_x_14);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_24);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym__3, term_n_26, term_o_26, term_u_21);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.tbl", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2sig", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("dummy.pp", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("unpack", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
}
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm x_69 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm g_64 (ATerm), ATerm);
ATerm if_verbose5_1_0 (ATerm d_81 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm c_81 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm e_81 (ATerm), ATerm);
ATerm union_1_0 (ATerm o_73 (ATerm), ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm n_81 (ATerm), ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm e_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm y_78 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm r_65 (ATerm), ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm);
ATerm assert_1_0 (ATerm c_80 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm b_62 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm b_70 (ATerm), ATerm);
ATerm _2_0 (ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm z_79 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm y_79 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm d_83 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_80 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm f_85 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_69 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm i_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm j_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm v_69 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm d_87 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm c_87 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm);
ATerm sdf_to_sig_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm b_0 = NULL;
  ATerm m_0 (ATerm t)
  {
    ATerm f_0 = NULL;
    f_0 = t;
    t = SSL_explode_string(f_0);
    return(t);
  }
  t = map_1_0(m_0, t);
  t = concat_0_0(t);
  b_0 = t;
  t = SSL_implode_string(b_0);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,f_2 = NULL,g_2 = NULL;
  b_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      c_2 = ATgetArgument(t, 0);
      {
        ATerm q_0 = NULL;
        t = SSL_int_to_string(c_2);
        q_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_6), q_0), term_e_6);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm b_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          c_2 = ATgetArgument(t, 0);
          f_2 = ATgetArgument(t, 1);
          g_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(f_2);
      b_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_2), term_p_6), b_1), term_o_6), c_2);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  ATerm j_2 = NULL;
  ATerm n_0 (ATerm t)
  {
    t = x_69(t);
    if(((j_2 != NULL) && (j_2 != t)))
      _fail(t);
    else
      j_2 = t;
    return(t);
  }
  t = fetch_1_0(n_0, t);
  t = not_null(j_2);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm k_2 = NULL;
  k_2 = t;
  {
    ATerm q_6 = t;
    int r_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_15), term_s_14), term_m_14), term_h_14), term_u_13), term_q_13), term_i_13), term_b_13), term_t_12), term_p_12), term_l_12), term_c_12), term_r_11), term_k_11), term_f_11), term_w_10), term_x_9), term_n_9), term_i_9), term_d_9), term_u_8), term_f_8), term_y_7), term_t_7), term_n_7), term_f_7), term_z_6), term_v_6);
        {
          ATerm o_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm i_15 = ATgetArgument(t, 0);
                if((k_2 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm n_15 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(o_0, t);
        }
        ;
        LocalPopChoice(r_6);
      }
    else
      {
        t = q_6;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, k_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm p_2 = NULL;
  p_2 = t;
  {
    ATerm t_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_2 = NULL,e_1 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm v_15 = ATgetArgument(t, 0);
            z_2 = ATgetArgument(t, 1);
            {
              ATerm x_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = z_2;
        {
          ATerm b_16 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_16;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          e_1 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_1), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_c_16, (ATerm) ATinsert(ATinsert(ATempty, e_1), term_f_16));
        }
        ;
        LocalPopChoice(u_15);
      }
    else
      {
        t = t_15;
      }
    t = p_2;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm g_64 (ATerm), ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL;
  f_3 = t;
  t = fork_0_0(t);
  g_3 = t;
  {
    ATerm g_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = f_3;
        t = g_64(t);
        ;
        LocalPopChoice(i_16);
      }
    else
      {
        t = g_16;
        t = SSL_waitpid(g_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm j_16 = ATgetArgument(t, 0);
            if(((ATgetType(j_16) != AT_INT) || (ATgetInt((ATermInt) j_16) != 0)))
              _fail(t);
            {
              ATerm k_16 = ATgetArgument(t, 1);
            }
            {
              ATerm m_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = f_3;
      }
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm n_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_7 = NULL,r_7 = NULL;
      p_7 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm p_16 = t;
        int q_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_5 = NULL;
            t = eval_config_0_0(t);
            c_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), c_5);
            t = c_5;
            ;
            LocalPopChoice(q_16);
          }
        else
          {
            t = p_16;
          }
        r_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_7, term_c_14);
        t = geq_0_0(t);
        t = p_7;
        t = d_81(t);
      }
      ;
      LocalPopChoice(o_16);
    }
  else
    {
      t = n_16;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm c_81 (ATerm), ATerm t)
{
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_7 = NULL,z_7 = NULL;
      x_7 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm t_16 = t;
        int u_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_5 = NULL;
            t = eval_config_0_0(t);
            i_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), i_5);
            t = i_5;
            ;
            LocalPopChoice(u_16);
          }
        else
          {
            t = t_16;
          }
        z_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_7, term_v_9);
        t = geq_0_0(t);
        t = x_7;
        t = c_81(t);
      }
      ;
      LocalPopChoice(s_16);
    }
  else
    {
      t = r_16;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm e_81 (ATerm), ATerm t)
{
  ATerm v_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_8 = NULL,c_8 = NULL;
      a_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm a_17 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 = NULL;
            t = eval_config_0_0(t);
            s_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), s_5);
            t = s_5;
            ;
            LocalPopChoice(c_17);
          }
        else
          {
            t = a_17;
          }
        c_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_8, term_l_7);
        t = geq_0_0(t);
        t = a_8;
        t = e_81(t);
      }
      ;
      LocalPopChoice(z_16);
    }
  else
    {
      t = v_16;
    }
  return(t);
}
ATerm union_1_0 (ATerm o_73 (ATerm), ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL;
  if(match_cons(t, sym__2))
    {
      h_8 = ATgetArgument(t, 0);
      g_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_8;
  {
    ATerm j_8 (ATerm t)
    {
      ATerm e_17 = t;
      int f_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = g_8;
          ;
          LocalPopChoice(f_17);
        }
      else
        {
          t = e_17;
          {
            ATerm j_17 = t;
            int m_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_5 = NULL,h_6 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    z_5 = ATgetFirst((ATermList) t);
                    h_6 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = g_8;
                {
                  ATerm p_0 (ATerm t)
                  {
                    ATerm i_6 = NULL;
                    i_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, z_5, i_6);
                    t = o_73(t);
                    return(t);
                  }
                  t = fetch_1_0(p_0, t);
                  t = h_6;
                  t = j_8(t);
                }
                ;
                LocalPopChoice(m_17);
              }
            else
              {
                t = j_17;
                t = Cons_2_0(_id, j_8, t);
              }
          }
        }
      return(t);
    }
    t = j_8(t);
  }
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL;
  if(match_cons(t, sym__3))
    {
      p_8 = ATgetArgument(t, 0);
      q_8 = ATgetArgument(t, 1);
      r_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_8, q_8);
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_17 = ATgetArgument(t, 0);
            ATerm w_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(p_8, q_8);
        ;
        LocalPopChoice(o_17);
      }
    else
      {
        t = n_17;
        t = (ATerm) ATempty;
      }
    s_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_8, r_8);
    {
      ATerm r_0 (ATerm t)
      {
        ATerm x_8 = NULL;
        if(match_cons(t, sym__2))
          {
            x_8 = ATgetArgument(t, 0);
            if((x_8 != ATgetArgument(t, 1)))
              {
                _fail(ATgetArgument(t, 1));
              }
          }
        else
          _fail(t);
        return(t);
      }
      t = union_1_0(r_0, t);
      t_8 = t;
      t = SSL_table_put(p_8, q_8, t_8);
      t = (ATerm) ATmakeAppl(sym__3, p_8, q_8, r_8);
    }
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm n_81 (ATerm), ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL;
  if(match_cons(t, sym__2))
    {
      a_9 = ATgetArgument(t, 0);
      z_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_8;
  {
    ATerm s_0 (ATerm t)
    {
      ATerm b_9 = NULL,c_9 = NULL;
      if(match_cons(t, sym__2))
        {
          b_9 = ATgetArgument(t, 0);
          c_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, a_9, b_9, c_9);
      t = n_81(t);
      return(t);
    }
    t = map_1_0(s_0, t);
  }
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm c_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_10 = NULL;
      o_10 = t;
      t = SSL_access(o_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(d_18);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = c_18;
      {
        ATerm f_18 = t;
        int i_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_9 = NULL;
            ATerm j_18 = t;
            if((PushChoice() == 0))
              {
                ATerm p_10 = NULL;
                p_10 = t;
                t = SSL_access(p_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_18;
              }
            f_9 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_9), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = f_9;
            ;
            LocalPopChoice(i_18);
          }
        else
          {
            t = f_18;
            {
              ATerm y_9 = NULL;
              y_9 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_9), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = y_9;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL;
  q_10 = t;
  {
    ATerm t_0 (ATerm t)
    {
      ATerm x_10 = NULL;
      x_10 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_10), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
      t = x_10;
      return(t);
    }
    t = if_verbose5_1_0(t_0, t);
    {
      ATerm k_18 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, q_10));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = k_18;
        }
      r_10 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, q_10));
      t = r_10;
      {
        ATerm u_0 (ATerm t)
        {
          ATerm l_11 = NULL;
          l_11 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_11), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
          t = l_11;
          return(t);
        }
        t = if_verbose4_1_0(u_0, t);
        t = read_repository_file_0_0(t);
        {
          ATerm v_0 (ATerm t)
          {
            ATerm t_10 = NULL;
            t_10 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
            t = t_10;
            return(t);
          }
          t = if_verbose6_1_0(v_0, t);
          s_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_18, s_10);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm w_0 (ATerm t)
            {
              ATerm u_10 = NULL;
              u_10 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
              t = u_10;
              return(t);
            }
            t = if_verbose6_1_0(w_0, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, q_10), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_l_18, (ATerm)ATmakeAppl(sym_Imported_1, q_10), (ATerm) ATempty);
            {
              ATerm x_0 (ATerm t)
              {
                ATerm v_10 = NULL;
                v_10 = t;
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
                t = v_10;
                return(t);
              }
              t = if_verbose4_1_0(x_0, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm filter_1_0 (ATerm e_77 (ATerm), ATerm t)
{
  ATerm m_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(r_18);
    }
  else
    {
      t = m_18;
      {
        ATerm s_18 = t;
        int t_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              t = filter_1_0(e_77, t);
              return(t);
            }
            t = Cons_2_0(e_77, y_0, t);
            ;
            LocalPopChoice(t_18);
          }
        else
          {
            t = s_18;
            {
              ATerm a_11 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm u_18 = ATgetFirst((ATermList) t);
                  a_11 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = a_11;
              t = filter_1_0(e_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm y_78 (ATerm), ATerm t)
{
  ATerm c_11 (ATerm t)
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_78(t);
        t = c_11(t);
        ;
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
      }
    return(t);
  }
  t = c_11(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm x_18 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm c_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_13 = NULL;
            t = eval_config_0_0(t);
            c_13 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), c_13);
            t = c_13;
            ;
            LocalPopChoice(k_19);
          }
        else
          {
            t = c_19;
          }
      }
      ;
      LocalPopChoice(b_19);
    }
  else
    {
      t = x_18;
      {
        ATerm l_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(m_19);
          }
        else
          {
            t = l_19;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm d_11 = NULL;
  ATerm z_0 (ATerm t)
  {
    ATerm l_13 = NULL;
    l_13 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_13), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
    t = l_13;
    return(t);
  }
  t = if_verbose5_1_0(z_0, t);
  d_11 = t;
  {
    ATerm p_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(s_19);
      }
    else
      {
        t = p_19;
        {
          ATerm e_11 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          e_11 = t;
          {
            ATerm a_1 (ATerm t)
            {
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
              t = filter_1_0(xtc_read_0_0, t);
              {
                ATerm t_19 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_19;
                  }
              }
              return(t);
            }
            t = repeat_1_0(a_1, t);
            t = e_11;
          }
        }
      }
    t = d_11;
    {
      ATerm c_1 (ATerm t)
      {
        ATerm b_14 = NULL;
        b_14 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_14), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
        t = b_14;
        return(t);
      }
      t = if_verbose5_1_0(c_1, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_1 (ATerm t)
      {
        ATerm i_14 = NULL;
        i_14 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_14), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
        t = i_14;
        return(t);
      }
      t = if_verbose5_1_0(d_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm w_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_14 = NULL,a_15 = NULL,e_15 = NULL;
            if(match_cons(t, sym__2))
              {
                t_14 = ATgetArgument(t, 0);
                a_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, t_14));
            {
              ATerm f_1 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((a_15 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((e_15 != NULL) && (e_15 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      e_15 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(f_1, t);
              t = not_null(e_15);
            }
            ;
            LocalPopChoice(x_19);
          }
        else
          {
            t = w_19;
            {
              ATerm j_15 = NULL,l_15 = NULL;
              j_15 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, j_15));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm y_19 = ATgetFirst((ATermList) t);
                  if(match_cons(y_19, sym__2))
                    {
                      ATerm e_20 = ATgetArgument(y_19, 0);
                      l_15 = ATgetArgument(y_19, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm d_20 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = l_15;
            }
          }
        {
          ATerm g_1 (ATerm t)
          {
            ATerm m_15 = NULL;
            m_15 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_15), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
            t = m_15;
            return(t);
          }
          t = if_verbose5_1_0(g_1, t);
        }
      }
      ;
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      {
        ATerm i_11 = NULL;
        i_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), i_11), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_20), i_11), term_f_20);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm x_20 = NULL;
            t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
            {
              ATerm i_1 (ATerm t)
              {
                ATerm v_20 = NULL,w_20 = NULL;
                v_20 = t;
                t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), v_20);
                w_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_20, w_20);
                return(t);
              }
              t = map_1_0(i_1, t);
              x_20 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_20), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
              t = x_20;
            }
            return(t);
          }
          t = if_verbose5_1_0(h_1, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_10 = NULL;
      m_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_10, term_p_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
      {
        ATerm o_8 = NULL;
        o_8 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_8), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = o_8;
        _fail(t);
      }
    }
  j_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(l_10);
  k_10 = t;
  t = j_10;
  t = fclose_0_0(t);
  t = k_10;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL;
  x_3 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = x_3;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          y_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(y_3, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_9 (ATerm l_9, ATerm t)
  {
    t = SSL_fclose(l_9);
    return(t);
  }
  ATerm o_9 = NULL,p_9 = NULL;
  p_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_9 = ATgetArgument(t, 0);
      {
        ATerm s_20 = t;
        int y_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_9);
            ;
            LocalPopChoice(y_20);
          }
        else
          {
            t = s_20;
            t = r_9(p_9, t);
          }
      }
    }
  else
    {
      t = r_9(p_9, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_9 = NULL;
  t = SSL_stdin_stream();
  s_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_9);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_9 = NULL;
  t = SSL_stdout_stream();
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_9);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_9 = NULL;
  t = SSL_stderr_stream();
  u_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_9);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_20 = ATgetArgument(t, 0);
      ATerm a_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_8 = NULL,n_8 = NULL;
        m_8 = t;
        t = SSL_explode_term(m_8);
        if(match_cons(t, sym__2))
          {
            ATerm f_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_21 = ATgetArgument(t, 1);
              if(((ATgetType(g_21) == AT_LIST) && !(ATisEmpty(g_21))))
                {
                  n_8 = ATgetFirst((ATermList) g_21);
                  {
                    ATerm h_21 = (ATerm) ATgetNext((ATermList) g_21);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = n_8;
        if(match_cons(t, sym_stderr_0))
          {
            t = n_8;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = n_8;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = n_8;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(e_21);
      }
    else
      {
        t = b_21;
        {
          ATerm i_21 = t;
          int j_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL;
              ATerm j_1 (ATerm t)
              {
                ATerm d_10 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    d_10 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = d_10;
                return(t);
              }
              t = _2_0(j_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  a_10 = ATgetArgument(t, 0);
                  b_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(a_10, b_10);
              c_10 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, c_10);
              ;
              LocalPopChoice(j_21);
            }
          else
            {
              t = i_21;
              {
                ATerm e_10 = NULL,g_10 = NULL,h_10 = NULL;
                ATerm k_1 (ATerm t)
                {
                  ATerm i_10 = NULL;
                  i_10 = t;
                  t = SSL_is_string(i_10);
                  return(t);
                }
                t = _2_0(k_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    e_10 = ATgetArgument(t, 0);
                    g_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(e_10, g_10);
                h_10 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, h_10);
              }
            }
        }
      }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm r_65 (ATerm), ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL;
  if(match_cons(t, sym__2))
    {
      b_4 = ATgetArgument(t, 0);
      c_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_4, term_k_21);
  t = open_stream_0_0(t);
  d_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_4, c_4);
  t = r_65(t);
  t = fclose_0_0(t);
  t = c_4;
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL;
  g_4 = t;
  t = xtc_new_file_0_0(t);
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_4, g_4);
  {
    ATerm l_1 (ATerm t)
    {
      ATerm i_4 = NULL,k_4 = NULL,l_4 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm l_21 = ATgetArgument(t, 0);
          if(match_cons(l_21, sym_Stream_1))
            {
              i_4 = ATgetArgument(l_21, 0);
            }
          else
            _fail(t);
          k_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_write_term_to_stream_baf(i_4, k_4);
      l_4 = t;
      t = (ATerm) ATmakeAppl(sym_Stream_1, l_4);
      return(t);
    }
    t = WriteToFile_1_0(l_1, t);
    t = SSL_close_file(h_4);
    t = (ATerm) ATmakeAppl(sym_FILE_1, h_4);
  }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(a_84, b_84, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm assert_1_0 (ATerm c_80 (ATerm), ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL,s_4 = NULL,e_5 = NULL,f_5 = NULL;
  if(match_cons(t, sym__2))
    {
      o_4 = ATgetArgument(t, 0);
      p_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_80(t);
  s_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_4, o_4, p_4);
  t = table_push_0_0(t);
  {
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(s_4, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(n_21);
      }
    else
      {
        t = m_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_5 = ATgetFirst((ATermList) t);
        f_5 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(s_4, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(f_5), (ATerm) ATinsert(CheckATermList(e_5), o_4)));
    t = (ATerm) ATmakeAppl(sym__2, o_4, p_4);
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm x_5 (ATerm l_5, ATerm t)
  {
    t = l_5;
    {
      ATerm o_21 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm p_21 = ATgetArgument(t, 0);
              ATerm q_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = o_21;
        }
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
      t = (ATerm) ATmakeAppl(sym__2, l_5, term_k_21);
      t = open_file_0_0(t);
    }
    return(t);
  }
  ATerm y_5 (ATerm n_5, ATerm o_5, ATerm p_5, ATerm t)
  {
    t = SSL_open_file(n_5, o_5);
    return(t);
  }
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
  u_5 = t;
  if(match_cons(t, sym__2))
    {
      v_5 = ATgetArgument(t, 0);
      w_5 = ATgetArgument(t, 1);
      {
        ATerm r_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_5(u_5, t);
            ;
            LocalPopChoice(s_21);
          }
        else
          {
            t = r_21;
            t = y_5(v_5, w_5, u_5, t);
          }
      }
    }
  else
    {
      t = x_5(u_5, t);
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
  ATerm a_6 = NULL;
  t = term_u_21;
  t = new_0_0(t);
  a_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_6, term_v_21);
  t = conc_strings_0_0(t);
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_6 = NULL;
        d_6 = t;
        t = SSL_access(d_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
      }
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm g_6 = NULL;
  t = new_file_0_0(t);
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_6, term_k_21);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, g_6, term_u_21);
  {
    ATerm m_1 (ATerm t)
    {
      t = term_z_21;
      return(t);
    }
    t = assert_1_0(m_1, t);
    t = g_6;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL;
  c_7 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm b_3 = NULL,d_3 = NULL,s_3 = NULL,t_3 = NULL;
      t = c_7;
      t = xtc_new_file_0_0(t);
      b_3 = t;
      t = l_0(t);
      d_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_3, (ATerm) ATinsert(ATinsert(ATempty, b_3), term_a_22));
      {
        ATerm b_22 = t;
        int c_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm d_22 = ATgetArgument(t, 0);
                ATerm h_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = d_3;
            {
              ATerm n_1 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, b_3), term_a_22);
                return(t);
              }
              t = at_end_1_0(n_1, t);
            }
            ;
            LocalPopChoice(c_22);
          }
        else
          {
            t = b_22;
            {
              ATerm p_3 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, d_3, (ATerm) ATinsert(ATinsert(ATempty, b_3), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm i_22 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) i_22) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  p_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = p_3;
              t = concat_0_0(t);
            }
          }
        s_3 = t;
        t = k_0(t);
        t = xtc_find_0_0(t);
        t_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_3, s_3);
        {
          ATerm o_1 (ATerm t)
          {
            t = SSL_execvp(t_3, s_3);
            return(t);
          }
          t = fork_and_wait_1_0(o_1, t);
          t = SSL_close_file(b_3);
          t = (ATerm) ATmakeAppl(sym_FILE_1, b_3);
        }
      }
    }
  else
    {
      ATerm f_4 = NULL,j_4 = NULL,w_4 = NULL,x_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          d_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_7;
      t = xtc_new_file_0_0(t);
      f_4 = t;
      t = l_0(t);
      j_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_4), term_a_22), d_7), term_l_22));
      {
        ATerm m_22 = t;
        int n_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm o_22 = ATgetArgument(t, 0);
                ATerm p_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = j_4;
            {
              ATerm p_1 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_4), term_a_22), d_7), term_l_22);
                return(t);
              }
              t = at_end_1_0(p_1, t);
            }
            ;
            LocalPopChoice(n_22);
          }
        else
          {
            t = m_22;
            {
              ATerm v_4 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, j_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_4), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), d_7), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm q_22 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) q_22) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  v_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = v_4;
              t = concat_0_0(t);
            }
          }
        w_4 = t;
        t = k_0(t);
        t = xtc_find_0_0(t);
        x_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_4, w_4);
        {
          ATerm q_1 (ATerm t)
          {
            t = SSL_execvp(x_4, w_4);
            return(t);
          }
          t = fork_and_wait_1_0(q_1, t);
          t = SSL_close_file(f_4);
          t = (ATerm) ATmakeAppl(sym_FILE_1, f_4);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm b_62 (ATerm), ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL;
  j_7 = t;
  if(match_cons(t, sym_FILE_1))
    {
      h_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_7);
  g_7 = t;
  t = h_7;
  t = b_62(t);
  i_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, i_7), g_7);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
      {
        ATerm n_11 = NULL,o_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_11 = ATgetFirst((ATermList) t);
            o_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_11;
        {
          ATerm r_1 (ATerm t)
          {
            t = o_11;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(r_1, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm b_70 (ATerm), ATerm t)
{
  ATerm u_11 (ATerm t)
  {
    ATerm t_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, u_11, t);
        ;
        LocalPopChoice(v_22);
      }
    else
      {
        t = t_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_70(t);
      }
    return(t);
  }
  t = u_11(t);
  return(t);
}
ATerm _2_0 (ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL;
  a_12 = t;
  if(match_cons(t, sym__2))
    {
      w_11 = ATgetArgument(t, 0);
      x_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_12);
  v_11 = t;
  t = w_11;
  t = t_55(t);
  y_11 = t;
  t = x_11;
  t = u_55(t);
  z_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, y_11, z_11), v_11);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm e_12 = NULL;
  ATerm s_1 (ATerm t)
  {
    ATerm f_12 = NULL;
    f_12 = t;
    t = SSL_explode_string(f_12);
    return(t);
  }
  ATerm t_1 (ATerm t)
  {
    ATerm g_12 = NULL;
    g_12 = t;
    t = SSL_explode_string(g_12);
    return(t);
  }
  t = _2_0(s_1, t_1, t);
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_12 = NULL,k_12 = NULL;
        if(match_cons(t, sym__2))
          {
            j_12 = ATgetArgument(t, 0);
            k_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_12;
        {
          ATerm u_1 (ATerm t)
          {
            t = k_12;
            return(t);
          }
          t = at_end_1_0(u_1, t);
        }
        ;
        LocalPopChoice(x_22);
      }
    else
      {
        t = w_22;
        {
          ATerm c_21 = NULL,d_21 = NULL;
          c_21 = t;
          t = SSL_explode_term(c_21);
          if(match_cons(t, sym__2))
            {
              ATerm z_22 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) z_22) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              d_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_21;
          t = concat_0_0(t);
        }
      }
    e_12 = t;
    t = SSL_implode_string(e_12);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_12 = NULL;
      u_12 = t;
      t = SSL_is_string(u_12);
      ;
      LocalPopChoice(b_23);
    }
  else
    {
      t = a_23;
      {
        ATerm d_23 = t;
        int e_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_1 (ATerm t)
            {
              ATerm f_23 = t;
              int h_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(h_23);
                }
              else
                {
                  t = f_23;
                }
              return(t);
            }
            t = map_1_0(v_1, t);
            ;
            LocalPopChoice(e_23);
          }
        else
          {
            t = d_23;
            {
              ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
              y_12 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_12 = ATgetArgument(t, 0);
                  t = z_12;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_12 = ATgetArgument(t, 0);
                      t = z_12;
                      {
                        ATerm i_23 = t;
                        int j_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), z_12);
                            {
                              ATerm k_23 = t;
                              int l_23 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm t_21 = NULL;
                                  t = eval_config_0_0(t);
                                  t_21 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), z_12, t_21);
                                  t = t_21;
                                  ;
                                  LocalPopChoice(l_23);
                                }
                              else
                                {
                                  t = k_23;
                                }
                            }
                            ;
                            LocalPopChoice(j_23);
                          }
                        else
                          {
                            t = i_23;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_12), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = z_12;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm f_13 = NULL,g_13 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_12 = ATgetArgument(t, 0);
                          a_13 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_12;
                      t = eval_config_0_0(t);
                      f_13 = t;
                      t = a_13;
                      t = eval_config_0_0(t);
                      g_13 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_13, g_13);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
  if(match_cons(t, sym__2))
    {
      n_13 = ATgetArgument(t, 0);
      o_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_21 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm o_23 = ATgetArgument(t, 0);
            ATerm p_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_13, o_13);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_23 = ATgetFirst((ATermList) t);
            y_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_21;
        ;
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        t = (ATerm) ATempty;
      }
    p_13 = t;
    t = SSL_table_put(n_13, o_13, p_13);
    t = (ATerm) ATmakeAppl(sym__2, n_13, o_13);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm z_79 (ATerm), ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL;
  w_13 = t;
  t = z_79(t);
  x_13 = t;
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(x_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_13 = ATgetFirst((ATermList) t);
        y_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(x_13, (ATerm)ATmakeAppl(sym_Scopes_0), y_13);
    t = z_13;
    {
      ATerm w_1 (ATerm t)
      {
        ATerm a_14 = NULL;
        a_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_13, a_14);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(w_1, t);
      t = w_13;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm t)
{
  ATerm t_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_80(t);
      t = v_80(t);
      ;
      LocalPopChoice(v_23);
    }
  else
    {
      t = t_23;
      t = v_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm y_79 (ATerm), ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL;
  d_14 = t;
  t = y_79(t);
  e_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_14, term_w_23);
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_23 = ATgetArgument(t, 0);
            ATerm b_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
        t = (ATerm) ATempty;
      }
    f_14 = t;
    t = SSL_table_put(e_14, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(f_14), (ATerm) ATempty));
    t = d_14;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  ATerm p_14 = NULL;
  ATerm x_1 (ATerm t)
  {
    t = term_z_21;
    return(t);
  }
  t = begin_scope_1_0(x_1, t);
  {
    ATerm y_1 (ATerm t)
    {
      ATerm q_14 = NULL;
      q_14 = t;
      {
        ATerm c_24 = t;
        int d_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(d_24);
          }
        else
          {
            t = c_24;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((p_14 != NULL) && (p_14 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              p_14 = ATgetFirst((ATermList) t);
            {
              ATerm f_24 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(p_14);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm h_24 = t;
            int i_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_14 = NULL;
                w_14 = t;
                t = SSL_remove(w_14);
                ;
                LocalPopChoice(i_24);
              }
            else
              {
                t = h_24;
              }
            return(t);
          }
          t = map_1_0(z_1, t);
          t = q_14;
          {
            ATerm a_2 (ATerm t)
            {
              t = term_z_21;
              return(t);
            }
            t = end_scope_1_0(a_2, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(d_83, y_1, t);
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL;
  y_14 = t;
  t = term_u_21;
  t = whoami_0_0(t);
  z_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), z_14), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = y_14;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm b_15 = NULL;
    b_15 = t;
    if(match_string(t, "-k"))
      {
        t = b_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = b_15;
      }
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    ATerm c_15 = NULL,d_15 = NULL;
    c_15 = t;
    t = SSL_string_to_int(c_15);
    d_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), d_15);
    t = c_15;
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    t = term_j_24;
    return(t);
  }
  t = ArgOption_3_0(d_2, e_2, h_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 (ATerm t)
      {
        ATerm f_15 = NULL;
        f_15 = t;
        if(match_string(t, "-S"))
          {
            t = f_15;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = f_15;
          }
        return(t);
      }
      ATerm l_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_n_24;
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        t = term_o_24;
        return(t);
      }
      t = Option_3_0(i_2, l_2, m_2, t);
      ;
      LocalPopChoice(l_24);
    }
  else
    {
      t = k_24;
      {
        ATerm p_24 = t;
        int q_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm o_2 (ATerm t)
            {
              ATerm g_15 = NULL,k_15 = NULL;
              g_15 = t;
              t = SSL_string_to_int(g_15);
              k_15 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_15);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, g_15);
              return(t);
            }
            ATerm q_2 (ATerm t)
            {
              t = term_r_24;
              return(t);
            }
            t = ArgOption_3_0(n_2, o_2, q_2, t);
            ;
            LocalPopChoice(q_24);
          }
        else
          {
            t = p_24;
            {
              ATerm r_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm s_2 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_s_24;
                return(t);
              }
              ATerm t_2 (ATerm t)
              {
                t = term_t_24;
                return(t);
              }
              t = Option_3_0(r_2, s_2, t_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_15 = NULL;
      t = term_u_21;
      t = j_0(t);
      s_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_24, term_v_24, s_15);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm w_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_15 = ATgetFirst((ATermList) t);
          p_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_15;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_15 = ATgetFirst((ATermList) t);
          r_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_15;
      t = h_0(t);
      t = q_15;
      t = i_0(t);
      w_15 = t;
      t = (ATerm) ATinsert(CheckATermList(r_15), w_15);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm y_15 = NULL;
    y_15 = t;
    if(match_string(t, "-i"))
      {
        t = y_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = y_15;
      }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm z_15 = NULL;
    z_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), z_15);
    t = (ATerm) ATmakeAppl(sym_Input_1, z_15);
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_w_24;
    return(t);
  }
  t = ArgOption_3_0(u_2, v_2, w_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_16 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_21;
  t = whoami_0_0(t);
  a_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), a_16));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm x_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_22 = NULL;
        t = eval_config_0_0(t);
        e_22 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_22);
        t = e_22;
        ;
        LocalPopChoice(y_24);
      }
    else
      {
        t = x_24;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm t)
{
  ATerm z_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_76(t);
      ;
      LocalPopChoice(a_25);
    }
  else
    {
      t = z_24;
      {
        ATerm d_16 = NULL,e_16 = NULL,h_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_16 = ATgetFirst((ATermList) t);
            e_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_16;
        t = foldr_2_0(b_76, c_76, t);
        h_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_16, h_16);
        t = c_76(t);
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
  ATerm l_16 = NULL,f_22 = NULL,g_22 = NULL;
  t = times_0_0(t);
  f_22 = t;
  t = SSL_explode_term(f_22);
  if(match_cons(t, sym__2))
    {
      ATerm b_25 = ATgetArgument(t, 0);
      g_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_22;
  {
    ATerm x_2 (ATerm t)
    {
      t = term_m_24;
      return(t);
    }
    ATerm y_2 (ATerm t)
    {
      ATerm j_22 = NULL,k_22 = NULL;
      if(match_cons(t, sym__2))
        {
          j_22 = ATgetArgument(t, 0);
          k_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm c_25 = t;
        int d_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(j_22, k_22);
            ;
            LocalPopChoice(d_25);
          }
        else
          {
            t = c_25;
            t = SSL_addr(j_22, k_22);
          }
      }
      return(t);
    }
    t = foldr_2_0(x_2, y_2, t);
    l_16 = t;
    t = SSL_TicksToSeconds(l_16);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
  w_16 = t;
  if(match_cons(t, sym__2))
    {
      x_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_16;
        if((x_16 != t))
          {
            _fail(t);
          }
        t = w_16;
        ;
        LocalPopChoice(f_25);
      }
    else
      {
        t = e_25;
        t = w_16;
        {
          ATerm g_25 = t;
          int h_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_16, y_16);
              ;
              LocalPopChoice(h_25);
            }
          else
            {
              t = g_25;
              t = SSL_gtr(x_16, y_16);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_16, y_16);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  ATerm i_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_17 = NULL,d_17 = NULL;
      b_17 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm k_25 = t;
        int l_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_22 = NULL;
            t = eval_config_0_0(t);
            u_22 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), u_22);
            t = u_22;
            ;
            LocalPopChoice(l_25);
          }
        else
          {
            t = k_25;
          }
        d_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_17, term_t_6);
        t = geq_0_0(t);
        t = b_17;
        t = z_80(t);
      }
      ;
      LocalPopChoice(j_25);
    }
  else
    {
      t = i_25;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm g_17 = NULL,h_17 = NULL;
    t = run_time_0_0(t);
    g_17 = t;
    t = term_u_21;
    t = whoami_0_0(t);
    h_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), g_17), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), h_17));
    t = (ATerm) ATmakeAppl(sym__2, term_c_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_25), g_17), term_o_6), h_17));
    return(t);
  }
  t = if_verbose1_1_0(a_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm f_85 (ATerm), ATerm t)
{
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm p_25 = t;
        int q_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_22 = NULL;
            t = eval_config_0_0(t);
            y_22 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), y_22);
            t = y_22;
            ;
            LocalPopChoice(q_25);
          }
        else
          {
            t = p_25;
          }
      }
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      {
        ATerm c_3 (ATerm t)
        {
          ATerm r_25 = t;
          int s_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(s_25);
            }
          else
            {
              t = r_25;
              {
                ATerm t_25 = t;
                int u_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(u_25);
                  }
                else
                  {
                    t = t_25;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(c_3, t);
      }
    }
  t = f_85(t);
  return(t);
}
ATerm map_1_0 (ATerm k_69 (ATerm), ATerm t)
{
  ATerm i_17 (ATerm t)
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
        t = Cons_2_0(k_69, i_17, t);
      }
    return(t);
  }
  t = i_17(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_17 = ATgetFirst((ATermList) t);
      l_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_17 = NULL,q_17 = NULL;
        t = l_17;
        t = g_0(t);
        p_17 = t;
        t = k_17;
        t = e_0(t);
        q_17 = t;
        t = l_17;
        {
          ATerm e_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(p_17), q_17);
            return(t);
          }
          t = reverse_acc_2_0(e_0, e_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_21;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm i_62 (ATerm), ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
  u_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_17);
  r_17 = t;
  t = s_17;
  t = i_62(t);
  t_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, t_17), r_17);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_23 = NULL;
            t = eval_config_0_0(t);
            c_23 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_23);
            t = c_23;
            ;
            LocalPopChoice(a_26);
          }
        else
          {
            t = z_25;
          }
      }
      ;
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      {
        ATerm h_3 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(h_3, t);
      }
    }
  t = term_b_26;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm i_3 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, i_3, t);
    {
      ATerm j_3 (ATerm t)
      {
        ATerm x_17 = NULL;
        x_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, x_17), term_c_26);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(j_3, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm j_62 (ATerm), ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
  b_18 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      z_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_18);
  y_17 = t;
  t = z_17;
  t = j_62(t);
  a_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, a_18), y_17);
  return(t);
}
ATerm fetch_1_0 (ATerm v_69 (ATerm), ATerm t)
{
  ATerm e_18 (ATerm t)
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(v_69, _id, t);
        ;
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = Cons_2_0(_id, e_18, t);
      }
    return(t);
  }
  t = e_18(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL;
  g_18 = t;
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_18;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_26 = ATgetFirst((ATermList) t);
                ATerm i_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_18;
          }
        ;
        LocalPopChoice(g_26);
      }
    else
      {
        t = f_26;
        t = (ATerm) ATinsert(ATempty, g_18);
      }
    h_18 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), h_18);
    t = g_18;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm j_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_23 = NULL;
        t = eval_config_0_0(t);
        g_23 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_23);
        t = g_23;
        ;
        LocalPopChoice(k_26);
      }
    else
      {
        t = j_26;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_3 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm l_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_p_26;
        return(t);
      }
      ATerm m_3 (ATerm t)
      {
        t = term_q_26;
        return(t);
      }
      t = Option_3_0(k_3, l_3, m_3, t);
      ;
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      {
        ATerm n_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm o_3 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_r_26;
          return(t);
        }
        ATerm q_3 (ATerm t)
        {
          t = term_s_26;
          return(t);
        }
        t = Option_3_0(n_3, o_3, q_3, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  if(match_cons(t, sym__3))
    {
      n_18 = ATgetArgument(t, 0);
      o_18 = ATgetArgument(t, 1);
      p_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_18, o_18);
  {
    ATerm t_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_26 = ATgetArgument(t, 0);
            ATerm w_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_18, o_18);
        ;
        LocalPopChoice(u_26);
      }
    else
      {
        t = t_26;
        t = (ATerm) ATempty;
      }
    q_18 = t;
    t = SSL_table_put(n_18, o_18, (ATerm) ATinsert(CheckATermList(q_18), p_18));
    t = (ATerm) ATmakeAppl(sym__3, n_18, o_18, p_18);
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_19 = NULL;
      t = term_u_21;
      t = d_0(t);
      a_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_24, term_v_24, a_19);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm d_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_18 = ATgetFirst((ATermList) t);
          z_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_18;
      t = a_0(t);
      t = term_u_21;
      t = c_0(t);
      d_19 = t;
      t = (ATerm) ATinsert(CheckATermList(z_18), d_19);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
  j_19 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_19 = ATgetFirst((ATermList) t);
      g_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_19);
  e_19 = t;
  t = f_19;
  t = c_57(t);
  h_19 = t;
  t = g_19;
  t = d_57(t);
  i_19 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(i_19), h_19), e_19);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_87 (ATerm), ATerm t)
{
  ATerm n_19 = NULL;
  n_19 = t;
  {
    ATerm x_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_26;
        t = d_87(t);
        ;
        LocalPopChoice(y_26);
      }
    else
      {
        t = x_26;
      }
    t = n_19;
    {
      ATerm r_3 (ATerm t)
      {
        ATerm o_19 = NULL;
        o_19 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_19);
        t = (ATerm) ATmakeAppl(sym_Program_1, o_19);
        return(t);
      }
      ATerm u_3 (ATerm t)
      {
        ATerm a_27 = t;
        int b_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_27 = t;
            int d_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(d_27);
              }
            else
              {
                t = c_27;
                t = d_87(t);
                t = Cons_2_0(_id, u_3, t);
              }
            ;
            LocalPopChoice(b_27);
          }
        else
          {
            t = a_27;
            {
              ATerm q_19 = NULL,r_19 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_19 = ATgetFirst((ATermList) t);
                  r_19 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_19), (ATerm) ATmakeAppl(sym_Undefined_1, q_19));
            }
          }
        return(t);
      }
      t = Cons_2_0(r_3, u_3, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm c_87 (ATerm), ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
  z_19 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = z_19;
  {
    ATerm v_3 (ATerm t)
    {
      ATerm e_27 = t;
      int f_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_87(t);
          ;
          LocalPopChoice(f_27);
        }
      else
        {
          t = e_27;
          {
            ATerm g_27 = t;
            int h_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_3 (ATerm t)
                {
                  ATerm c_20 = NULL;
                  c_20 = t;
                  if(match_string(t, "--help"))
                    {
                      t = c_20;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = c_20;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = c_20;
                        }
                    }
                  return(t);
                }
                ATerm z_3 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_i_27;
                  return(t);
                }
                ATerm a_4 (ATerm t)
                {
                  t = term_j_27;
                  return(t);
                }
                t = Option_3_0(w_3, z_3, a_4, t);
                ;
                LocalPopChoice(h_27);
              }
            else
              {
                t = g_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_3, t);
    {
      ATerm k_27 = t;
      int l_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_20 = NULL;
          h_20 = t;
          {
            ATerm m_27 = t;
            int n_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = h_20;
                {
                  ATerm o_27 = t;
                  int p_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm q_27 = t;
                        int r_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm u_23 = NULL;
                            t = eval_config_0_0(t);
                            u_23 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), u_23);
                            t = u_23;
                            ;
                            LocalPopChoice(r_27);
                          }
                        else
                          {
                            t = q_27;
                          }
                      }
                      ;
                      LocalPopChoice(p_27);
                    }
                  else
                    {
                      t = o_27;
                      {
                        ATerm e_4 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(e_4, t);
                      }
                    }
                  t = h_20;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(n_27);
              }
            else
              {
                t = m_27;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm s_27 = t;
                  int t_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_24 = NULL;
                      t = eval_config_0_0(t);
                      a_24 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), a_24);
                      t = a_24;
                      ;
                      LocalPopChoice(t_27);
                    }
                  else
                    {
                      t = s_27;
                    }
                  t = h_20;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(l_27);
        }
      else
        {
          t = k_27;
          {
            ATerm u_27 = t;
            int v_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_4 (ATerm t)
                {
                  ATerm n_4 (ATerm t)
                  {
                    if(((a_20 != NULL) && (a_20 != t)))
                      _fail(t);
                    else
                      a_20 = t;
                    return(t);
                  }
                  t = Undefined_1_0(n_4, t);
                  return(t);
                }
                t = fetch_1_0(m_4, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(a_20)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_c_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_20)), term_w_27));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(v_27);
              }
            else
              {
                t = u_27;
              }
          }
        }
      b_20 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = b_20;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm t)
{
  ATerm k_20 = NULL;
  t = parse_options_1_0(h_85, t);
  k_20 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), k_20);
  t = k_20;
  t = j_85(t);
  {
    ATerm x_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_85, t);
        ;
        LocalPopChoice(y_27);
      }
    else
      {
        t = x_27;
        {
          ATerm z_27 = t;
          int a_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(a_28);
            }
          else
            {
              t = z_27;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm sdf_to_sig_0_0 (ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    ATerm b_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = input_option_0_0(t);
        ;
        LocalPopChoice(c_28);
      }
    else
      {
        t = b_28;
        {
          ATerm d_28 = t;
          int e_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = verbose_option_0_0(t);
              ;
              LocalPopChoice(e_28);
            }
          else
            {
              t = d_28;
              t = keep_option_0_0(t);
            }
        }
      }
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    ATerm t_4 (ATerm t)
    {
      ATerm l_20 = NULL,g_24 = NULL;
      ATerm f_28 = t;
      int g_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_20 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
          {
            ATerm h_28 = t;
            int i_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_24 = NULL;
                t = eval_config_0_0(t);
                e_24 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), e_24);
                t = e_24;
                ;
                LocalPopChoice(i_28);
              }
            else
              {
                t = h_28;
              }
            m_20 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, m_20);
          }
          ;
          LocalPopChoice(g_28);
        }
      else
        {
          t = f_28;
          t = term_j_28;
        }
      {
        ATerm k_28 = t;
        int l_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_28 = t;
            int n_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(n_28);
              }
            else
              {
                t = m_28;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(l_28);
            {
              ATerm u_4 (ATerm t)
              {
                t = term_o_28;
                return(t);
              }
              ATerm y_4 (ATerm t)
              {
                ATerm n_20 = NULL;
                t = term_p_28;
                t = xtc_find_0_0(t);
                n_20 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_20), term_r_28), term_q_28);
                return(t);
              }
              t = xtc_transform_file_2_0(u_4, y_4, t);
            }
          }
        else
          {
            t = k_28;
            {
              ATerm z_4 (ATerm t)
              {
                t = term_o_28;
                return(t);
              }
              ATerm a_5 (ATerm t)
              {
                ATerm o_20 = NULL;
                t = term_p_28;
                t = xtc_find_0_0(t);
                o_20 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_20), term_r_28), term_q_28);
                return(t);
              }
              t = xtc_transform_term_2_0(z_4, a_5, t);
            }
          }
        {
          ATerm s_28 = t;
          int t_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_28 = t;
              int v_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FILE_1_0(_id, t);
                  ;
                  LocalPopChoice(v_28);
                }
              else
                {
                  t = u_28;
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                }
              LocalPopChoice(t_28);
              {
                ATerm b_5 (ATerm t)
                {
                  t = term_w_28;
                  return(t);
                }
                ATerm d_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = xtc_transform_file_2_0(b_5, d_5, t);
              }
            }
          else
            {
              t = s_28;
              {
                ATerm g_5 (ATerm t)
                {
                  t = term_w_28;
                  return(t);
                }
                ATerm h_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = xtc_transform_term_2_0(g_5, h_5, t);
              }
            }
          {
            ATerm x_28 = t;
            int y_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_28 = t;
                int a_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = FILE_1_0(_id, t);
                    ;
                    LocalPopChoice(a_29);
                  }
                else
                  {
                    t = z_28;
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                  }
                LocalPopChoice(y_28);
                {
                  ATerm j_5 (ATerm t)
                  {
                    t = term_b_29;
                    return(t);
                  }
                  ATerm k_5 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = xtc_transform_file_2_0(j_5, k_5, t);
                }
              }
            else
              {
                t = x_28;
                {
                  ATerm m_5 (ATerm t)
                  {
                    t = term_b_29;
                    return(t);
                  }
                  ATerm q_5 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = xtc_transform_term_2_0(m_5, q_5, t);
                }
              }
            {
              ATerm c_29 = t;
              int d_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_29 = t;
                  int f_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = FILE_1_0(_id, t);
                      ;
                      LocalPopChoice(f_29);
                    }
                  else
                    {
                      t = e_29;
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                    }
                  LocalPopChoice(d_29);
                  {
                    ATerm r_5 (ATerm t)
                    {
                      t = term_g_29;
                      return(t);
                    }
                    ATerm t_5 (ATerm t)
                    {
                      ATerm q_20 = NULL,r_20 = NULL;
                      t = term_h_29;
                      t = xtc_find_0_0(t);
                      q_20 = t;
                      t = term_i_29;
                      t = xtc_find_0_0(t);
                      r_20 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_20), term_r_28), q_20), term_r_28);
                      return(t);
                    }
                    t = xtc_transform_file_2_0(r_5, t_5, t);
                  }
                }
              else
                {
                  t = c_29;
                  {
                    ATerm b_6 (ATerm t)
                    {
                      t = term_g_29;
                      return(t);
                    }
                    ATerm c_6 (ATerm t)
                    {
                      ATerm t_20 = NULL,u_20 = NULL;
                      t = term_h_29;
                      t = xtc_find_0_0(t);
                      t_20 = t;
                      t = term_i_29;
                      t = xtc_find_0_0(t);
                      u_20 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_20), term_r_28), t_20), term_r_28);
                      return(t);
                    }
                    t = xtc_transform_term_2_0(b_6, c_6, t);
                  }
                }
              {
                ATerm j_29 = t;
                int k_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_29 = t;
                    int m_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FILE_1_0(_id, t);
                        ;
                        LocalPopChoice(m_29);
                      }
                    else
                      {
                        t = l_29;
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                      }
                    LocalPopChoice(k_29);
                    {
                      ATerm f_6 (ATerm t)
                      {
                        t = term_n_29;
                        return(t);
                      }
                      ATerm j_6 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = xtc_transform_file_2_0(f_6, j_6, t);
                    }
                  }
                else
                  {
                    t = j_29;
                    {
                      ATerm k_6 (ATerm t)
                      {
                        t = term_n_29;
                        return(t);
                      }
                      ATerm l_6 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = xtc_transform_term_2_0(k_6, l_6, t);
                    }
                  }
                if(match_cons(t, sym_FILE_1))
                  {
                    l_20 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = term_o_29;
                t = xtc_find_0_0(t);
                g_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, g_24, (ATerm) ATinsert(ATinsert(ATempty, term_p_29), l_20));
                {
                  ATerm m_6 (ATerm t)
                  {
                    t = SSL_execvp(g_24, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue))), l_20));
                    return(t);
                  }
                  t = fork_and_wait_1_0(m_6, t);
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_29), l_20);
                }
              }
            }
          }
        }
      }
      return(t);
    }
    t = xtc_temp_files_1_0(t_4, t);
    return(t);
  }
  t = option_wrap_4_0(q_4, default_usage_0_0, _id, r_4, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = sdf_to_sig_0_0(t);
  return(t);
}
