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
ATerm term_e_28;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_w_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_s_25;
ATerm term_p_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_f_24;
ATerm term_v_23;
ATerm term_a_23;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_o_22;
ATerm term_k_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_z_21;
ATerm term_w_21;
ATerm term_t_21;
ATerm term_q_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_c_16;
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
ATerm term_g_15;
ATerm term_f_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_p_14;
ATerm term_l_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_r_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_i_12;
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
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_v_10;
ATerm term_t_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_v_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_e_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_l_8;
ATerm term_j_8;
ATerm term_g_8;
ATerm term_b_8;
ATerm term_x_7;
void init_constant_terms (void)
{
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_8, term_b_8, term_x_8);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_9, term_b_9, term_e_9);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_9, term_v_9, term_e_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_10, term_i_10, term_m_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_10, term_v_10, term_x_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_a_11, term_b_11);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_11, term_e_11, term_f_11);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_11, term_k_11, term_l_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_t_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_y_11, term_z_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_c_12, term_d_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_12, term_g_12, term_h_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_12, term_m_12, term_n_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_12, term_t_12, term_u_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_x_12, term_c_13);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_13, term_j_13, term_k_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_r_13, term_y_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_b_14, term_c_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_g_14, term_h_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_s_14, term_v_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_f_15, term_g_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_p_15, term_q_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_t_15, term_u_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_15, term_x_15, term_a_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_g_16, term_j_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_o_16, term_p_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_y_16, term_e_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_17, term_i_17, term_j_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-text", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_stdout_0);
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
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym__3, term_b_27, term_c_27, term_r_22);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm pass_verbose_0_0 (ATerm);
ATerm pass_width_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm k_65 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm p_69 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm x_63 (ATerm), ATerm y_63 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm z_63 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm v_80 (ATerm), ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm w_76 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm q_78 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm say_1_0 (ATerm a_65 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm u_80 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm w_80 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm);
ATerm union_1_0 (ATerm g_73 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm f_81 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm j_83 (ATerm), ATerm);
ATerm assert_1_0 (ATerm u_79 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm d_65 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm u_61 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm);
ATerm abox2text_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm r_79 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm q_79 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm v_82 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm w_82 (ATerm), ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm abox2text_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm);
ATerm crush_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_80 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm x_84 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm b_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm c_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm n_69 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm s_85 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm t_69 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm m_55 (ATerm), ATerm n_55 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm w_64 (ATerm), ATerm);
ATerm map_1_0 (ATerm d_69 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm try_1_0 (ATerm x_79 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm x_86 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_56 (ATerm), ATerm w_56 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm v_86 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm u_86 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm);
ATerm io_abox2text_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL,e_1 = NULL;
  t = term_x_7;
  {
    ATerm y_7 = t;
    int a_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(a_8);
      }
    else
      {
        t = y_7;
        t = term_b_8;
      }
    c_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_1, term_b_8);
    {
      ATerm c_8 = t;
      int d_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(c_1, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(d_8);
        }
      else
        {
          t = c_8;
          t = SSL_subtr(c_1, (ATerm) ATmakeInt(1));
        }
      e_1 = t;
      t = SSL_int_to_string(e_1);
      d_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, d_1), term_x_7);
    }
  }
  return(t);
}
ATerm pass_width_0_0 (ATerm t)
{
  ATerm e_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_8;
      t = get_config_0_0(t);
      LocalPopChoice(f_8);
      {
        ATerm h_1 = NULL;
        h_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, h_1), term_g_8);
      }
    }
  else
    {
      t = e_8;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL;
  m_1 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = m_1;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          n_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(n_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm k_65 (ATerm), ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL,v_1 = NULL;
  if(match_cons(t, sym__2))
    {
      p_1 = ATgetArgument(t, 0);
      q_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_1, term_j_8);
  t = open_stream_0_0(t);
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_1, q_1);
  t = k_65(t);
  t = fclose_0_0(t);
  t = q_1;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    ATerm e_2 = NULL,f_2 = NULL,g_2 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm k_8 = ATgetArgument(t, 0);
        if(match_cons(k_8, sym_Stream_1))
          {
            e_2 = ATgetArgument(k_8, 0);
          }
        else
          _fail(t);
        f_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(e_2, f_2);
    g_2 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, g_2);
    return(t);
  }
  t = WriteToFile_1_0(c_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL;
  j_2 = t;
  t = xtc_new_file_0_0(t);
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_2, j_2);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(k_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, k_2);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(s_83, t_83, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm l_2 = NULL;
  ATerm e_0 (ATerm t)
  {
    ATerm m_2 = NULL;
    m_2 = t;
    t = SSL_explode_string(m_2);
    return(t);
  }
  t = map_1_0(e_0, t);
  t = concat_0_0(t);
  l_2 = t;
  t = SSL_implode_string(l_2);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,l_3 = NULL,m_3 = NULL;
  i_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      j_3 = ATgetArgument(t, 0);
      {
        ATerm r_0 = NULL;
        t = SSL_int_to_string(j_3);
        r_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), r_0), term_l_8);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm z_0 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          j_3 = ATgetArgument(t, 0);
          l_3 = ATgetArgument(t, 1);
          m_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(l_3);
      z_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_3), term_r_8), z_0), term_q_8), j_3);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm p_69 (ATerm), ATerm t)
{
  ATerm r_3 = NULL;
  ATerm n_0 (ATerm t)
  {
    t = p_69(t);
    r_3 = t;
    return(t);
  }
  t = fetch_1_0(n_0, t);
  t = not_null(r_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm t_3 = NULL;
  t_3 = t;
  {
    ATerm t_8 = t;
    int u_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_17), term_f_17), term_w_16), term_k_16), term_c_16), term_v_15), term_r_15), term_n_15), term_b_15), term_l_14), term_d_14), term_z_13), term_l_13), term_e_13), term_v_12), term_o_12), term_i_12), term_e_12), term_a_12), term_u_11), term_q_11), term_g_11), term_c_11), term_y_10), term_n_10), term_f_10), term_o_9), term_z_8);
        {
          ATerm o_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm n_17 = ATgetArgument(t, 0);
                if((t_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm o_17 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(o_0, t);
        }
        ;
        LocalPopChoice(u_8);
      }
    else
      {
        t = t_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, t_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm u_3 = NULL;
  u_3 = t;
  {
    ATerm p_0 (ATerm t)
    {
      ATerm v_3 = NULL,w_3 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm p_17 = ATgetArgument(t, 0);
          v_3 = ATgetArgument(t, 1);
          {
            ATerm q_17 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = v_3;
      {
        ATerm r_17 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_17;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        w_3 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_3), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATinsert(ATinsert(ATempty, w_3), term_v_17));
      }
      return(t);
    }
    t = try_1_0(p_0, t);
    t = u_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm x_63 (ATerm), ATerm y_63 (ATerm), ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL;
  b_4 = t;
  t = fork_0_0(t);
  c_4 = t;
  {
    ATerm w_17 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = b_4;
        t = x_63(t);
        ;
        LocalPopChoice(i_18);
      }
    else
      {
        t = w_17;
        t = (ATerm) ATmakeAppl(sym__2, c_4, b_4);
        t = y_63(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm z_63 (ATerm), ATerm t)
{
  ATerm e_4 = NULL;
  ATerm q_0 (ATerm t)
  {
    ATerm f_4 = NULL;
    if(match_cons(t, sym__2))
      {
        f_4 = ATgetArgument(t, 0);
        e_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(f_4);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm j_18 = ATgetArgument(t, 0);
        if(((ATgetType(j_18) != AT_INT) || (ATgetInt((ATermInt) j_18) != 0)))
          _fail(t);
        {
          ATerm k_18 = ATgetArgument(t, 1);
        }
        {
          ATerm r_18 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = e_4;
    return(t);
  }
  t = fork_2_0(z_63, q_0, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm h_4 = NULL,k_4 = NULL;
  if(match_cons(t, sym__2))
    {
      h_4 = ATgetArgument(t, 0);
      k_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_0 (ATerm t)
    {
      t = SSL_execvp(h_4, k_4);
      return(t);
    }
    t = fork_and_wait_1_0(s_0, t);
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm l_4 = NULL;
  l_4 = t;
  t = SSL_table_keys(l_4);
  {
    ATerm t_0 (ATerm t)
    {
      ATerm m_4 = NULL,o_4 = NULL;
      m_4 = t;
      t = SSL_table_get(l_4, m_4);
      o_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_4, o_4);
      return(t);
    }
    t = map_1_0(t_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_80 (ATerm), ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    ATerm p_4 = NULL,q_4 = NULL;
    p_4 = t;
    t = term_x_7;
    t = get_config_0_0(t);
    q_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_4, term_g_16);
    t = geq_0_0(t);
    t = p_4;
    t = v_80(t);
    return(t);
  }
  t = try_1_0(u_0, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL;
  if(match_cons(t, sym__2))
    {
      v_4 = ATgetArgument(t, 0);
      w_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, v_4));
  {
    ATerm v_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((w_4 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          x_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(v_0, t);
    t = not_null(x_4);
  }
  return(t);
}
ATerm filter_1_0 (ATerm w_76 (ATerm), ATerm t)
{
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
      {
        ATerm u_18 = t;
        int v_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_0 (ATerm t)
            {
              t = filter_1_0(w_76, t);
              return(t);
            }
            t = Cons_2_0(w_76, w_0, t);
            ;
            LocalPopChoice(v_18);
          }
        else
          {
            t = u_18;
            {
              ATerm d_5 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm x_18 = ATgetFirst((ATermList) t);
                  d_5 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = d_5;
              t = filter_1_0(w_76, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm q_78 (ATerm), ATerm t)
{
  ATerm m_5 (ATerm t)
  {
    ATerm x_0 (ATerm t)
    {
      t = q_78(t);
      t = m_5(t);
      return(t);
    }
    t = try_1_0(x_0, t);
    return(t);
  }
  t = m_5(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm w_5 = NULL;
  w_5 = t;
  {
    ATerm y_0 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm y_18 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = y_18;
          }
      }
      return(t);
    }
    t = repeat_1_0(y_0, t);
    t = w_5;
  }
  return(t);
}
ATerm say_1_0 (ATerm a_65 (ATerm), ATerm t)
{
  ATerm e_6 = NULL,b_1 = NULL;
  e_6 = t;
  t = a_65(t);
  b_1 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, b_1));
  t = e_6;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_80 (ATerm), ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    ATerm g_6 = NULL,k_6 = NULL;
    g_6 = t;
    t = term_x_7;
    t = get_config_0_0(t);
    k_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_6, term_g_12);
    t = geq_0_0(t);
    t = g_6;
    t = u_80(t);
    return(t);
  }
  t = try_1_0(a_1, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm l_6 = NULL,m_6 = NULL;
    l_6 = t;
    t = term_x_7;
    t = get_config_0_0(t);
    m_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_6, term_i_10);
    t = geq_0_0(t);
    t = l_6;
    t = w_80(t);
    return(t);
  }
  t = try_1_0(f_1, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_6 = ATgetFirst((ATermList) t);
      y_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_73(t);
  {
    ATerm g_1 (ATerm t)
    {
      ATerm c_7 = NULL;
      c_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_6, c_7);
      t = k_73(t);
      return(t);
    }
    t = fetch_1_0(g_1, t);
    t = y_6;
  }
  return(t);
}
ATerm union_1_0 (ATerm g_73 (ATerm), ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL;
  if(match_cons(t, sym__2))
    {
      e_7 = ATgetArgument(t, 0);
      d_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7;
  {
    ATerm f_7 (ATerm t)
    {
      ATerm z_18 = t;
      int d_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = d_7;
          ;
          LocalPopChoice(d_19);
        }
      else
        {
          t = z_18;
          {
            ATerm e_19 = t;
            int f_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_1 (ATerm t)
                {
                  t = d_7;
                  return(t);
                }
                t = HdMember_p__2_0(g_73, i_1, t);
                t = f_7(t);
                ;
                LocalPopChoice(f_19);
              }
            else
              {
                t = e_19;
                t = Cons_2_0(_id, f_7, t);
              }
          }
        }
      return(t);
    }
    t = f_7(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm g_7 = NULL;
    if(match_cons(t, sym__2))
      {
        g_7 = ATgetArgument(t, 0);
        if((g_7 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(j_1, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL;
  if(match_cons(t, sym__3))
    {
      j_7 = ATgetArgument(t, 0);
      k_7 = ATgetArgument(t, 1);
      l_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_7, k_7);
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_19 = ATgetArgument(t, 0);
            ATerm n_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_7, k_7);
        ;
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        t = (ATerm) ATempty;
      }
    m_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_7, l_7);
    t = union_0_0(t);
    n_7 = t;
    t = SSL_table_put(j_7, k_7, n_7);
    t = (ATerm) ATmakeAppl(sym__3, j_7, k_7, l_7);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm f_81 (ATerm), ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL;
  if(match_cons(t, sym__2))
    {
      p_7 = ATgetArgument(t, 0);
      o_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_7;
  {
    ATerm k_1 (ATerm t)
    {
      ATerm q_7 = NULL,r_7 = NULL;
      if(match_cons(t, sym__2))
        {
          q_7 = ATgetArgument(t, 0);
          r_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, p_7, q_7, r_7);
      t = f_81(t);
      return(t);
    }
    t = map_1_0(k_1, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_8 (ATerm z_7, ATerm t)
  {
    t = SSL_fclose(z_7);
    return(t);
  }
  ATerm h_8 = NULL,i_8 = NULL;
  i_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_8 = ATgetArgument(t, 0);
      {
        ATerm s_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_8);
            ;
            LocalPopChoice(t_19);
          }
        else
          {
            t = s_19;
            t = m_8(i_8, t);
          }
      }
    }
  else
    {
      t = m_8(i_8, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_8 = NULL;
  t = SSL_stdin_stream();
  n_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_8 = NULL;
  t = SSL_stdout_stream();
  o_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_8 = NULL;
  t = SSL_stderr_stream();
  s_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_8);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm v_8 = NULL;
  v_8 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_8;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_8;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_8;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_19 = ATgetArgument(t, 0);
      ATerm v_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_2 = NULL,i_2 = NULL;
        h_2 = t;
        t = SSL_explode_term(h_2);
        if(match_cons(t, sym__2))
          {
            ATerm c_20 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_20) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm d_20 = ATgetArgument(t, 1);
              if(((ATgetType(d_20) == AT_LIST) && !(ATisEmpty(d_20))))
                {
                  i_2 = ATgetFirst((ATermList) d_20);
                  {
                    ATerm f_20 = (ATerm) ATgetNext((ATermList) d_20);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_2;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(y_19);
      }
    else
      {
        t = w_19;
        {
          ATerm n_20 = t;
          int o_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_8 = NULL,c_9 = NULL,d_9 = NULL;
              ATerm l_1 (ATerm t)
              {
                ATerm f_9 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    f_9 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = f_9;
                return(t);
              }
              t = _2_0(l_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  y_8 = ATgetArgument(t, 0);
                  c_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(y_8, c_9);
              d_9 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, d_9);
              ;
              LocalPopChoice(o_20);
            }
          else
            {
              t = n_20;
              {
                ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL;
                ATerm o_1 (ATerm t)
                {
                  ATerm j_9 = NULL;
                  j_9 = t;
                  t = SSL_is_string(j_9);
                  return(t);
                }
                t = _2_0(o_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    g_9 = ATgetArgument(t, 0);
                    h_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(g_9, h_9);
                i_9 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, i_9);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
  ATerm p_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_9 = NULL;
      n_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_9, term_r_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(q_20);
    }
  else
    {
      t = p_20;
      {
        ATerm r_1 (ATerm t)
        {
          t = term_s_20;
          return(t);
        }
        t = debug_1_0(r_1, t);
        _fail(t);
      }
    }
  k_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(m_9);
  l_9 = t;
  t = k_9;
  t = fclose_0_0(t);
  t = l_9;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_2 = NULL;
      o_2 = t;
      t = SSL_access(o_2, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(w_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = v_20;
      {
        ATerm x_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_21 = t;
            if((PushChoice() == 0))
              {
                ATerm q_2 = NULL;
                q_2 = t;
                t = SSL_access(q_2, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = b_21;
              }
            {
              ATerm s_1 (ATerm t)
              {
                t = term_c_21;
                return(t);
              }
              t = debug_1_0(s_1, t);
            }
            ;
            LocalPopChoice(a_21);
          }
        else
          {
            t = x_20;
            {
              ATerm t_1 (ATerm t)
              {
                t = term_d_21;
                return(t);
              }
              t = debug_1_0(t_1, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL;
  q_9 = t;
  {
    ATerm u_1 (ATerm t)
    {
      ATerm w_1 (ATerm t)
      {
        t = term_e_21;
        return(t);
      }
      t = debug_1_0(w_1, t);
      return(t);
    }
    t = if_verbose5_1_0(u_1, t);
    {
      ATerm f_21 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, q_9));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_21;
        }
      r_9 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, q_9));
      t = r_9;
      {
        ATerm x_1 (ATerm t)
        {
          ATerm y_1 (ATerm t)
          {
            t = term_g_21;
            return(t);
          }
          t = debug_1_0(y_1, t);
          return(t);
        }
        t = if_verbose4_1_0(x_1, t);
        t = read_repository_file_0_0(t);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm a_2 (ATerm t)
            {
              t = term_h_21;
              return(t);
            }
            t = say_1_0(a_2, t);
            return(t);
          }
          t = if_verbose6_1_0(z_1, t);
          s_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_21, s_9);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm b_2 (ATerm t)
            {
              ATerm c_2 (ATerm t)
              {
                t = term_m_21;
                return(t);
              }
              t = say_1_0(c_2, t);
              return(t);
            }
            t = if_verbose6_1_0(b_2, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, q_9), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_l_21, (ATerm)ATmakeAppl(sym_Imported_1, q_9), (ATerm) ATempty);
            {
              ATerm d_2 (ATerm t)
              {
                ATerm n_2 (ATerm t)
                {
                  t = term_h_21;
                  return(t);
                }
                t = say_1_0(n_2, t);
                return(t);
              }
              t = if_verbose4_1_0(d_2, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_21);
    }
  else
    {
      t = n_21;
      {
        ATerm r_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(s_21);
          }
        else
          {
            t = r_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm t_9 = NULL;
  ATerm p_2 (ATerm t)
  {
    ATerm r_2 (ATerm t)
    {
      t = term_t_21;
      return(t);
    }
    t = debug_1_0(r_2, t);
    return(t);
  }
  t = if_verbose5_1_0(p_2, t);
  t_9 = t;
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = t_9;
    {
      ATerm s_2 (ATerm t)
      {
        ATerm t_2 (ATerm t)
        {
          t = term_w_21;
          return(t);
        }
        t = debug_1_0(t_2, t);
        return(t);
      }
      t = if_verbose5_1_0(s_2, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_2 (ATerm t)
      {
        ATerm v_2 (ATerm t)
        {
          t = term_z_21;
          return(t);
        }
        t = debug_1_0(v_2, t);
        return(t);
      }
      t = if_verbose5_1_0(u_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm a_22 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(b_22);
          }
        else
          {
            t = a_22;
            {
              ATerm z_2 = NULL,d_3 = NULL;
              z_2 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, z_2));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm c_22 = ATgetFirst((ATermList) t);
                  if(match_cons(c_22, sym__2))
                    {
                      ATerm e_22 = ATgetArgument(c_22, 0);
                      d_3 = ATgetArgument(c_22, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm d_22 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = d_3;
            }
          }
        {
          ATerm w_2 (ATerm t)
          {
            ATerm x_2 (ATerm t)
            {
              t = term_z_21;
              return(t);
            }
            t = debug_1_0(x_2, t);
            return(t);
          }
          t = if_verbose5_1_0(w_2, t);
        }
      }
      ;
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
      {
        ATerm u_9 = NULL;
        u_9 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), u_9), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_22), u_9), term_f_22);
        {
          ATerm y_2 (ATerm t)
          {
            t = term_l_21;
            t = table_getlist_0_0(t);
            {
              ATerm a_3 (ATerm t)
              {
                t = term_h_22;
                return(t);
              }
              t = debug_1_0(a_3, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(y_2, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm j_83 (ATerm), ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL;
  w_9 = t;
  t = j_83(t);
  t = xtc_find_warning_0_0(t);
  x_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_9, w_9);
  t = call_0_0(t);
  t = w_9;
  return(t);
}
ATerm assert_1_0 (ATerm u_79 (ATerm), ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL;
  if(match_cons(t, sym__2))
    {
      y_9 = ATgetArgument(t, 0);
      z_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_79(t);
  a_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_10, y_9, z_9);
  t = table_push_0_0(t);
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(a_10, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_10 = ATgetFirst((ATermList) t);
        c_10 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(a_10, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(c_10), (ATerm) ATinsert(CheckATermList(b_10), y_9)));
    t = (ATerm) ATmakeAppl(sym__2, y_9, z_9);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm d_65 (ATerm), ATerm t)
{
  ATerm d_10 = NULL;
  d_10 = t;
  t = d_65(t);
  {
    ATerm b_3 (ATerm t)
    {
      t = term_k_22;
      return(t);
    }
    t = debug_1_0(b_3, t);
    t = d_10;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm r_10 (ATerm h_10, ATerm t)
  {
    t = h_10;
    {
      ATerm l_22 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm m_22 = ATgetArgument(t, 0);
              ATerm n_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = l_22;
        }
      {
        ATerm c_3 (ATerm t)
        {
          t = term_o_22;
          return(t);
        }
        t = obsolete_1_0(c_3, t);
        t = (ATerm) ATmakeAppl(sym__2, h_10, term_j_8);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm s_10 (ATerm j_10, ATerm k_10, ATerm l_10, ATerm t)
  {
    t = SSL_open_file(j_10, k_10);
    return(t);
  }
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
  o_10 = t;
  if(match_cons(t, sym__2))
    {
      p_10 = ATgetArgument(t, 0);
      q_10 = ATgetArgument(t, 1);
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_10(o_10, t);
            ;
            LocalPopChoice(q_22);
          }
        else
          {
            t = p_22;
            t = s_10(p_10, q_10, o_10, t);
          }
      }
    }
  else
    {
      t = r_10(o_10, t);
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
  ATerm u_10 = NULL;
  t = term_r_22;
  t = new_0_0(t);
  u_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_10, term_s_22);
  t = conc_strings_0_0(t);
  {
    ATerm e_3 (ATerm t)
    {
      ATerm q_3 = NULL;
      q_3 = t;
      t = SSL_access(q_3, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(e_3, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm w_10 = NULL;
  t = new_file_0_0(t);
  w_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_10, term_j_8);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, w_10, term_r_22);
  {
    ATerm f_3 (ATerm t)
    {
      t = term_t_22;
      return(t);
    }
    t = assert_1_0(f_3, t);
    t = w_10;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL;
  i_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm x_3 = NULL,y_3 = NULL;
      t = i_11;
      t = xtc_new_file_0_0(t);
      x_3 = t;
      t = m_0(t);
      y_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_3, (ATerm) ATinsert(ATinsert(ATempty, x_3), term_u_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(x_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_3);
    }
  else
    {
      ATerm i_4 = NULL,j_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          j_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_11;
      t = xtc_new_file_0_0(t);
      i_4 = t;
      t = m_0(t);
      j_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_4), term_u_22), j_11), term_v_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(i_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, i_4);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm u_61 (ATerm), ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL;
  p_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      n_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_11);
  m_11 = t;
  t = n_11;
  t = u_61(t);
  o_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, o_11), m_11);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm t)
{
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_22 = t;
      int z_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(z_22);
        }
      else
        {
          t = y_22;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(x_22);
      t = xtc_transform_file_2_0(l_83, m_83, t);
    }
  else
    {
      t = w_22;
      t = xtc_transform_term_2_0(l_83, m_83, t);
    }
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    t = term_a_23;
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    ATerm v_11 = NULL,w_11 = NULL;
    t = term_r_22;
    t = pass_width_0_0(t);
    v_11 = t;
    t = term_r_22;
    t = pass_verbose_0_0(t);
    w_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_11, w_11);
    t = conc_0_0(t);
    return(t);
  }
  t = xtc_transform_2_0(g_3, h_3, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL;
  j_12 = t;
  if(match_cons(t, sym_FILE_1))
    {
      k_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_5 = NULL;
        t = j_12;
        t = k_0(t);
        a_5 = t;
        {
          ATerm d_23 = t;
          int e_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(e_23);
            }
          else
            {
              t = d_23;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(k_12, a_5);
          t = (ATerm) ATmakeAppl(sym_FILE_1, k_12);
        }
        ;
        LocalPopChoice(c_23);
      }
    else
      {
        t = b_23;
        {
          ATerm f_23 = t;
          int g_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_5 = NULL;
              t = j_12;
              t = k_0(t);
              g_5 = t;
              {
                ATerm h_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm i_23 = t;
                    int j_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(j_23);
                      }
                    else
                      {
                        t = i_23;
                        {
                          ATerm k_23 = t;
                          int l_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(l_23);
                            }
                          else
                            {
                              t = k_23;
                              {
                                ATerm h_5 = NULL;
                                h_5 = t;
                                if((k_12 != t))
                                  {
                                    _fail(t);
                                  }
                                t = h_5;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_23;
                  }
                t = SSL_copy(k_12, g_5);
                t = (ATerm) ATmakeAppl(sym_FILE_1, k_12);
              }
              ;
              LocalPopChoice(g_23);
            }
          else
            {
              t = f_23;
              t = j_12;
              t = k_0(t);
              if((k_12 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_12);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
  if(match_cons(t, sym__2))
    {
      q_12 = ATgetArgument(t, 0);
      r_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_5 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm o_23 = ATgetArgument(t, 0);
            ATerm p_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(q_12, r_12);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_23 = ATgetFirst((ATermList) t);
            j_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_5;
        ;
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        t = (ATerm) ATempty;
      }
    s_12 = t;
    t = SSL_table_put(q_12, r_12, s_12);
    t = (ATerm) ATmakeAppl(sym__2, q_12, r_12);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_79 (ATerm), ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
  y_12 = t;
  t = r_79(t);
  z_12 = t;
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(z_12, (ATerm) ATmakeAppl(sym_Scopes_0));
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
        b_13 = ATgetFirst((ATermList) t);
        a_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(z_12, (ATerm)ATmakeAppl(sym_Scopes_0), a_13);
    t = b_13;
    {
      ATerm k_3 (ATerm t)
      {
        ATerm d_13 = NULL;
        d_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_12, d_13);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(k_3, t);
      t = y_12;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_80(t);
      t = n_80(t);
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      t = n_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_79 (ATerm), ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
  g_13 = t;
  t = q_79(t);
  h_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_13, term_v_23);
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_23 = ATgetArgument(t, 0);
            ATerm z_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(h_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
        t = (ATerm) ATempty;
      }
    i_13 = t;
    t = SSL_table_put(h_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(i_13), (ATerm) ATempty));
    t = g_13;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm v_82 (ATerm), ATerm t)
{
  ATerm n_13 = NULL;
  ATerm n_3 (ATerm t)
  {
    t = term_t_22;
    return(t);
  }
  t = begin_scope_1_0(n_3, t);
  {
    ATerm o_3 (ATerm t)
    {
      ATerm o_13 = NULL;
      o_13 = t;
      {
        ATerm a_24 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(b_24);
          }
        else
          {
            t = a_24;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_13 = ATgetFirst((ATermList) t);
            {
              ATerm c_24 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = n_13;
        {
          ATerm p_3 (ATerm t)
          {
            ATerm s_3 (ATerm t)
            {
              ATerm p_13 = NULL;
              p_13 = t;
              t = SSL_remove(p_13);
              return(t);
            }
            t = try_1_0(s_3, t);
            return(t);
          }
          t = map_1_0(p_3, t);
          t = o_13;
          {
            ATerm z_3 (ATerm t)
            {
              t = term_t_22;
              return(t);
            }
            t = end_scope_1_0(z_3, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(v_82, o_3, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_13 = NULL;
        t = term_v_22;
        t = get_config_0_0(t);
        q_13 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, q_13);
        ;
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        t = term_f_24;
      }
    t = w_82(t);
    {
      ATerm d_4 (ATerm t)
      {
        ATerm g_24 = t;
        int h_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_u_22;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(h_24);
          }
        else
          {
            t = g_24;
            t = term_i_24;
          }
        return(t);
      }
      t = copy_to_1_0(d_4, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(a_4, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL;
  t_13 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = t_13;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm e_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_13 = ATgetFirst((ATermList) t);
          v_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_13;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_13 = ATgetFirst((ATermList) t);
          x_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_13;
      t = h_0(t);
      t = w_13;
      t = i_0(t);
      e_14 = t;
      t = (ATerm) ATinsert(CheckATermList(x_13), e_14);
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm i_14 = NULL;
    i_14 = t;
    if(match_string(t, "-k"))
      {
        t = i_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = i_14;
      }
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    ATerm j_14 = NULL,k_14 = NULL;
    j_14 = t;
    t = SSL_string_to_int(j_14);
    k_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), k_14);
    t = j_14;
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    t = term_j_24;
    return(t);
  }
  t = ArgOption_3_0(g_4, n_4, r_4, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_4 (ATerm t)
      {
        ATerm m_14 = NULL;
        m_14 = t;
        if(match_string(t, "-S"))
          {
            t = m_14;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = m_14;
          }
        return(t);
      }
      ATerm t_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_n_24;
        return(t);
      }
      ATerm u_4 (ATerm t)
      {
        t = term_o_24;
        return(t);
      }
      t = Option_3_0(s_4, t_4, u_4, t);
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
            ATerm y_4 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm z_4 (ATerm t)
            {
              ATerm n_14 = NULL,o_14 = NULL;
              n_14 = t;
              t = SSL_string_to_int(n_14);
              o_14 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), o_14);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, n_14);
              return(t);
            }
            ATerm b_5 (ATerm t)
            {
              t = term_r_24;
              return(t);
            }
            t = ArgOption_3_0(y_4, z_4, b_5, t);
            ;
            LocalPopChoice(q_24);
          }
        else
          {
            t = p_24;
            {
              ATerm c_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm e_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_s_24;
                return(t);
              }
              ATerm f_5 (ATerm t)
              {
                t = term_t_24;
                return(t);
              }
              t = Option_3_0(c_5, e_5, f_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm u_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(v_24);
    }
  else
    {
      t = u_24;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    ATerm q_14 = NULL;
    q_14 = t;
    if(match_string(t, "-o"))
      {
        t = q_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = q_14;
      }
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    ATerm r_14 = NULL;
    r_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), r_14);
    t = (ATerm) ATmakeAppl(sym_Output_1, r_14);
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = term_w_24;
    return(t);
  }
  t = ArgOption_3_0(i_5, k_5, l_5, t);
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    ATerm t_14 = NULL;
    t_14 = t;
    if(match_string(t, "-i"))
      {
        t = t_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = t_14;
      }
    return(t);
  }
  ATerm o_5 (ATerm t)
  {
    ATerm u_14 = NULL;
    u_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), u_14);
    t = (ATerm) ATmakeAppl(sym_Input_1, u_14);
    return(t);
  }
  ATerm p_5 (ATerm t)
  {
    t = term_x_24;
    return(t);
  }
  t = ArgOption_3_0(n_5, o_5, p_5, t);
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(z_24);
    }
  else
    {
      t = y_24;
      {
        ATerm a_25 = t;
        int b_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(b_25);
          }
        else
          {
            t = a_25;
            {
              ATerm c_25 = t;
              int d_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = general_options_0_0(t);
                  ;
                  LocalPopChoice(d_25);
                }
              else
                {
                  t = c_25;
                  {
                    ATerm q_5 (ATerm t)
                    {
                      ATerm w_14 = NULL;
                      w_14 = t;
                      if(match_string(t, "-w"))
                        {
                          t = w_14;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
                            _fail(t);
                          t = w_14;
                        }
                      return(t);
                    }
                    ATerm r_5 (ATerm t)
                    {
                      ATerm x_14 = NULL;
                      x_14 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue)), x_14);
                      t = x_14;
                      return(t);
                    }
                    ATerm s_5 (ATerm t)
                    {
                      t = term_e_25;
                      return(t);
                    }
                    t = ArgOption_3_0(q_5, r_5, s_5, t);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL;
  y_14 = t;
  t = term_r_22;
  t = whoami_0_0(t);
  z_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), z_14), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = y_14;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_22;
  t = whoami_0_0(t);
  a_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), a_15));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_f_25;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm t)
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_75(t);
      ;
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      {
        ATerm d_15 = NULL,e_15 = NULL,h_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_15 = ATgetFirst((ATermList) t);
            e_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_15;
        t = foldr_2_0(t_75, u_75, t);
        h_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_15, h_15);
        t = u_75(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL;
  i_15 = t;
  t = SSL_explode_term(i_15);
  if(match_cons(t, sym__2))
    {
      ATerm i_25 = ATgetArgument(t, 0);
      j_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_15;
  t = foldr_2_0(r_73, s_73, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_15 = NULL;
  t = times_0_0(t);
  {
    ATerm t_5 (ATerm t)
    {
      t = term_m_24;
      return(t);
    }
    ATerm u_5 (ATerm t)
    {
      ATerm l_15 = NULL,m_15 = NULL;
      if(match_cons(t, sym__2))
        {
          l_15 = ATgetArgument(t, 0);
          m_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm j_25 = t;
        int k_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(l_15, m_15);
            ;
            LocalPopChoice(k_25);
          }
        else
          {
            t = j_25;
            t = SSL_addr(l_15, m_15);
          }
      }
      return(t);
    }
    t = crush_2_0(t_5, u_5, t);
    k_15 = t;
    t = SSL_TicksToSeconds(k_15);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,b_16 = NULL;
  y_15 = t;
  if(match_cons(t, sym__2))
    {
      z_15 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_16;
        if((z_15 != t))
          {
            _fail(t);
          }
        t = y_15;
        ;
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        t = y_15;
        {
          ATerm n_25 = t;
          int o_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_15, b_16);
              ;
              LocalPopChoice(o_25);
            }
          else
            {
              t = n_25;
              t = SSL_gtr(z_15, b_16);
            }
          t = (ATerm) ATmakeAppl(sym__2, z_15, b_16);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_80 (ATerm), ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    ATerm e_16 = NULL,f_16 = NULL;
    e_16 = t;
    t = term_x_7;
    t = get_config_0_0(t);
    f_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_16, term_b_8);
    t = geq_0_0(t);
    t = e_16;
    t = r_80(t);
    return(t);
  }
  t = try_1_0(v_5, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm h_16 = NULL,i_16 = NULL;
    t = run_time_0_0(t);
    h_16 = t;
    t = term_r_22;
    t = whoami_0_0(t);
    i_16 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), h_16), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), i_16));
    t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_25), h_16), term_q_8), i_16));
    return(t);
  }
  t = if_verbose1_1_0(x_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm x_84 (ATerm), ATerm t)
{
  ATerm q_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_25);
    }
  else
    {
      t = q_25;
      {
        ATerm y_5 (ATerm t)
        {
          ATerm t_25 = t;
          int u_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(u_25);
            }
          else
            {
              t = t_25;
              {
                ATerm v_25 = t;
                int w_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(w_25);
                  }
                else
                  {
                    t = v_25;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(y_5, t);
      }
    }
  t = x_84(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_16 = ATgetFirst((ATermList) t);
      m_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_16 = NULL,r_16 = NULL;
        t = m_16;
        t = g_0(t);
        q_16 = t;
        t = l_16;
        t = f_0(t);
        r_16 = t;
        t = m_16;
        {
          ATerm z_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(q_16), r_16);
            return(t);
          }
          t = reverse_acc_2_0(f_0, z_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_22;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, a_6, t);
  return(t);
}
ATerm Program_1_0 (ATerm b_62 (ATerm), ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL;
  v_16 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_16);
  s_16 = t;
  t = t_16;
  t = b_62(t);
  u_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, u_16), s_16);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      {
        ATerm b_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(b_6, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_z_25;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm c_6 (ATerm t)
    {
      ATerm z_16 = NULL;
      z_16 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, z_16), term_a_26);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(c_6, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm c_62 (ATerm), ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
  d_17 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      b_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_17);
  a_17 = t;
  t = b_17;
  t = c_62(t);
  c_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, c_17), a_17);
  return(t);
}
ATerm fetch_1_0 (ATerm n_69 (ATerm), ATerm t)
{
  ATerm h_17 (ATerm t)
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(n_69, _id, t);
        ;
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        t = Cons_2_0(_id, h_17, t);
      }
    return(t);
  }
  t = h_17(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm s_85 (ATerm), ATerm t)
{
  t = fetch_1_0(s_85, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL;
  l_17 = t;
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_17;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_26 = ATgetFirst((ATermList) t);
                ATerm g_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_17;
          }
        ;
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = (ATerm) ATinsert(ATempty, l_17);
      }
    m_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), m_17);
    t = l_17;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_f_25;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      {
        ATerm s_17 = NULL,t_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_17 = ATgetFirst((ATermList) t);
            t_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_17;
        {
          ATerm d_6 (ATerm t)
          {
            t = t_17;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(d_6, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL;
  x_17 = t;
  t = SSL_explode_term(x_17);
  if(match_cons(t, sym__2))
    {
      ATerm j_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_17;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm t_69 (ATerm), ATerm t)
{
  ATerm z_17 (ATerm t)
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, z_17, t);
        ;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_69(t);
      }
    return(t);
  }
  t = z_17(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL;
  if(match_cons(t, sym__2))
    {
      b_18 = ATgetArgument(t, 0);
      a_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_18;
  {
    ATerm f_6 (ATerm t)
    {
      t = a_18;
      return(t);
    }
    t = at_end_1_0(f_6, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(n_26);
    }
  else
    {
      t = m_26;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm m_55 (ATerm), ATerm n_55 (ATerm), ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL;
  h_18 = t;
  if(match_cons(t, sym__2))
    {
      d_18 = ATgetArgument(t, 0);
      e_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_18);
  c_18 = t;
  t = d_18;
  t = m_55(t);
  f_18 = t;
  t = e_18;
  t = n_55(t);
  g_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, f_18, g_18), c_18);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm l_18 = NULL;
  ATerm h_6 (ATerm t)
  {
    ATerm m_18 = NULL;
    m_18 = t;
    t = SSL_explode_string(m_18);
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    ATerm n_18 = NULL;
    n_18 = t;
    t = SSL_explode_string(n_18);
    return(t);
  }
  t = _2_0(h_6, i_6, t);
  t = conc_0_0(t);
  l_18 = t;
  t = SSL_implode_string(l_18);
  return(t);
}
ATerm debug_1_0 (ATerm w_64 (ATerm), ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL;
  o_18 = t;
  t = w_64(t);
  p_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_18), p_18));
  t = o_18;
  return(t);
}
ATerm map_1_0 (ATerm d_69 (ATerm), ATerm t)
{
  ATerm q_18 (ATerm t)
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        t = Cons_2_0(d_69, q_18, t);
      }
    return(t);
  }
  t = q_18(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_18 = NULL;
      w_18 = t;
      t = SSL_is_string(w_18);
      ;
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
      {
        ATerm s_26 = t;
        int t_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_6 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(j_6, t);
            ;
            LocalPopChoice(t_26);
          }
        else
          {
            t = s_26;
            {
              ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
              a_19 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_19 = ATgetArgument(t, 0);
                  t = b_19;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_19 = ATgetArgument(t, 0);
                      t = b_19;
                      {
                        ATerm u_26 = t;
                        int v_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(v_26);
                          }
                        else
                          {
                            t = u_26;
                            {
                              ATerm n_6 (ATerm t)
                              {
                                t = term_w_26;
                                return(t);
                              }
                              t = debug_1_0(n_6, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm g_19 = NULL,h_19 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_19 = ATgetArgument(t, 0);
                          c_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_19;
                      t = eval_config_0_0(t);
                      g_19 = t;
                      t = c_19;
                      t = eval_config_0_0(t);
                      h_19 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_19, h_19);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm k_19 = NULL;
  k_19 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_19);
  {
    ATerm o_6 (ATerm t)
    {
      ATerm l_19 = NULL;
      t = eval_config_0_0(t);
      l_19 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_19, l_19);
      t = l_19;
      return(t);
    }
    t = try_1_0(o_6, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm x_79 (ATerm), ATerm t)
{
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_79(t);
      ;
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_6 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm q_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_d_27;
        return(t);
      }
      ATerm r_6 (ATerm t)
      {
        t = term_e_27;
        return(t);
      }
      t = Option_3_0(p_6, q_6, r_6, t);
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      {
        ATerm s_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm t_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_f_27;
          return(t);
        }
        ATerm u_6 (ATerm t)
        {
          t = term_g_27;
          return(t);
        }
        t = Option_3_0(s_6, t_6, u_6, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
  if(match_cons(t, sym__3))
    {
      o_19 = ATgetArgument(t, 0);
      p_19 = ATgetArgument(t, 1);
      q_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_19, p_19);
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_27 = ATgetArgument(t, 0);
            ATerm k_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(o_19, p_19);
        ;
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        t = (ATerm) ATempty;
      }
    r_19 = t;
    t = SSL_table_put(o_19, p_19, (ATerm) ATinsert(CheckATermList(r_19), q_19));
    t = (ATerm) ATmakeAppl(sym__3, o_19, p_19, q_19);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm x_19 = NULL;
  t = term_r_22;
  t = x_86(t);
  x_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_27, term_m_27, x_19);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
  z_19 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = z_19;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm e_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_20 = ATgetFirst((ATermList) t);
          b_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_20;
      t = a_0(t);
      t = term_r_22;
      t = b_0(t);
      e_20 = t;
      t = (ATerm) ATinsert(CheckATermList(b_20), e_20);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm v_6 (ATerm t)
  {
    ATerm g_20 = NULL;
    g_20 = t;
    if(match_string(t, "--help"))
      {
        t = g_20;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = g_20;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = g_20;
          }
      }
    return(t);
  }
  ATerm w_6 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_n_27;
    return(t);
  }
  ATerm z_6 (ATerm t)
  {
    t = term_o_27;
    return(t);
  }
  t = Option_3_0(v_6, w_6, z_6, t);
  return(t);
}
ATerm Cons_2_0 (ATerm v_56 (ATerm), ATerm w_56 (ATerm), ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
  m_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_20 = ATgetFirst((ATermList) t);
      j_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_20);
  h_20 = t;
  t = i_20;
  t = v_56(t);
  k_20 = t;
  t = j_20;
  t = w_56(t);
  l_20 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(l_20), k_20), h_20);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm t_20 = NULL;
  t_20 = t;
  {
    ATerm a_7 (ATerm t)
    {
      t = term_p_27;
      t = v_86(t);
      return(t);
    }
    t = try_1_0(a_7, t);
    t = t_20;
    {
      ATerm b_7 (ATerm t)
      {
        ATerm u_20 = NULL;
        u_20 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), u_20);
        t = (ATerm) ATmakeAppl(sym_Program_1, u_20);
        return(t);
      }
      ATerm h_7 (ATerm t)
      {
        ATerm q_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_27 = t;
            int t_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(t_27);
              }
            else
              {
                t = s_27;
                t = v_86(t);
                t = Cons_2_0(_id, h_7, t);
              }
            ;
            LocalPopChoice(r_27);
          }
        else
          {
            t = q_27;
            {
              ATerm y_20 = NULL,z_20 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_20 = ATgetFirst((ATermList) t);
                  z_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(z_20), (ATerm) ATmakeAppl(sym_Undefined_1, y_20));
            }
          }
        return(t);
      }
      t = Cons_2_0(b_7, h_7, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm u_86 (ATerm), ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
  i_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = i_21;
  {
    ATerm i_7 (ATerm t)
    {
      ATerm u_27 = t;
      int v_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_86(t);
          ;
          LocalPopChoice(v_27);
        }
      else
        {
          t = u_27;
          {
            ATerm w_27 = t;
            int x_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(x_27);
              }
            else
              {
                t = w_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_7, t);
    {
      ATerm s_7 (ATerm t)
      {
        ATerm y_27 = t;
        int z_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_21 = NULL;
            p_21 = t;
            {
              ATerm a_28 = t;
              int b_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_21;
                  {
                    ATerm c_28 = t;
                    int d_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_s_25;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(d_28);
                      }
                    else
                      {
                        t = c_28;
                        {
                          ATerm t_7 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(t_7, t);
                        }
                      }
                    t = p_21;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(b_28);
                }
              else
                {
                  t = a_28;
                  t = term_c_27;
                  t = get_config_0_0(t);
                  t = p_21;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(z_27);
          }
        else
          {
            t = y_27;
            {
              ATerm u_7 (ATerm t)
              {
                ATerm v_7 (ATerm t)
                {
                  j_21 = t;
                  return(t);
                }
                t = Undefined_1_0(v_7, t);
                return(t);
              }
              t = option_defined_1_0(u_7, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(j_21)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_21)), term_e_28));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(s_7, t);
      k_21 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = k_21;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm t)
{
  ATerm s_13 = NULL;
  t = parse_options_1_0(z_84, t);
  s_13 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), s_13);
  t = s_13;
  t = b_85(t);
  {
    ATerm f_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_85, t);
        ;
        LocalPopChoice(g_28);
      }
    else
      {
        t = f_28;
        {
          ATerm h_28 = t;
          int i_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_28);
            }
          else
            {
              t = h_28;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm t)
{
  t = option_wrap_4_0(d_85, default_usage_0_0, _id, e_85, t);
  return(t);
}
ATerm io_abox2text_0_0 (ATerm t)
{
  ATerm w_7 (ATerm t)
  {
    t = xtc_io_1_0(abox2text_0_0, t);
    return(t);
  }
  t = option_wrap_2_0(abox2text_options_0_0, w_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_abox2text_0_0(t);
  return(t);
}
