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
ATerm term_d_32;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_r_31;
ATerm term_i_31;
ATerm term_d_31;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_e_30;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_h_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_y_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_e_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_g_26;
ATerm term_p_25;
ATerm term_t_23;
ATerm term_r_23;
ATerm term_n_22;
ATerm term_b_22;
ATerm term_x_18;
ATerm term_p_18;
ATerm term_m_18;
ATerm term_f_18;
ATerm term_d_18;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_i_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_z_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_i_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_q_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_h_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_t_10;
ATerm term_g_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_f_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_l_8;
ATerm term_i_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_a_8;
ATerm term_y_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_k_7;
ATerm term_h_7;
ATerm term_h_6;
void init_constant_terms (void)
{
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_7, term_h_7, term_a_8);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_8, term_e_8, term_f_8);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_8, term_l_8, term_n_8);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_8, term_b_9, term_c_9);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_9, term_k_9, term_l_9);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_9, term_p_9, term_q_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_9, term_u_9, term_v_9);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_10, term_e_10, term_g_10);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_11, term_d_11, term_e_11);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_11, term_l_11, term_n_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_s_11, term_t_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_y_11, term_z_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_h_12, term_k_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_12, term_q_12, term_t_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_w_12, term_x_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_c_13, term_e_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_13, term_i_13, term_j_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_n_13, term_r_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_u_13, term_x_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_b_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_f_14, term_g_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_j_14, term_k_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_n_14, term_q_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_v_14, term_z_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_d_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_q_15, term_r_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_15, term_x_15, term_z_15);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_16, term_i_16, term_m_16);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_26);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-a | --abstract  source is abstract syntax", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations    print annotations on abstract syntax", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym__3, term_z_28, term_a_29, term_d_18);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("annos-to-term", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm r_65 (ATerm), ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm x_69 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm g_64 (ATerm), ATerm);
ATerm assert_1_0 (ATerm c_80 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm b_62 (ATerm), ATerm);
ATerm if_verbose5_1_0 (ATerm d_81 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm c_81 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm e_81 (ATerm), ATerm);
ATerm union_1_0 (ATerm o_73 (ATerm), ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm n_81 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm e_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm y_78 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm b_70 (ATerm), ATerm);
ATerm _2_0 (ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm z_79 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm y_79 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm d_83 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm e_83 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm pp_stratego_options_0_0 (ATerm);
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
ATerm Cons_2_0 (ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm d_87 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm c_87 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm);
ATerm pp_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,n_0 = NULL;
  t = term_h_6;
  {
    ATerm d_7 = t;
    int e_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
        {
          ATerm f_7 = t;
          int g_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_0 = NULL;
              t = eval_config_0_0(t);
              r_0 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_0);
              t = r_0;
              ;
              LocalPopChoice(g_7);
            }
          else
            {
              t = f_7;
            }
        }
        ;
        LocalPopChoice(e_7);
      }
    else
      {
        t = d_7;
        t = term_h_7;
      }
    b_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_h_7);
    {
      ATerm i_7 = t;
      int j_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(b_0, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(j_7);
        }
      else
        {
          t = i_7;
          t = SSL_subtr(b_0, (ATerm) ATmakeInt(1));
        }
      n_0 = t;
      t = SSL_int_to_string(n_0);
      f_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, f_0), term_h_6);
    }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL;
  y_0 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = y_0;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          z_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(z_0, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm r_65 (ATerm), ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      c_1 = ATgetArgument(t, 0);
      d_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_1, term_k_7);
  t = open_stream_0_0(t);
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_1, d_1);
  t = r_65(t);
  t = fclose_0_0(t);
  t = d_1;
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL;
  g_1 = t;
  t = xtc_new_file_0_0(t);
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_1, g_1);
  {
    ATerm o_0 (ATerm t)
    {
      ATerm i_1 = NULL,m_1 = NULL,n_1 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm l_7 = ATgetArgument(t, 0);
          if(match_cons(l_7, sym_Stream_1))
            {
              i_1 = ATgetArgument(l_7, 0);
            }
          else
            _fail(t);
          m_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_write_term_to_stream_baf(i_1, m_1);
      n_1 = t;
      t = (ATerm) ATmakeAppl(sym_Stream_1, n_1);
      return(t);
    }
    t = WriteToFile_1_0(o_0, t);
    t = SSL_close_file(h_1);
    t = (ATerm) ATmakeAppl(sym_FILE_1, h_1);
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
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm o_1 = NULL;
  ATerm p_0 (ATerm t)
  {
    ATerm x_1 = NULL;
    x_1 = t;
    t = SSL_explode_string(x_1);
    return(t);
  }
  t = map_1_0(p_0, t);
  t = concat_0_0(t);
  o_1 = t;
  t = SSL_implode_string(o_1);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm d_3 = NULL,f_3 = NULL,h_3 = NULL,i_3 = NULL;
  d_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      f_3 = ATgetArgument(t, 0);
      {
        ATerm k_1 = NULL;
        t = SSL_int_to_string(f_3);
        k_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_7), k_1), term_o_7);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm v_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          f_3 = ATgetArgument(t, 0);
          h_3 = ATgetArgument(t, 1);
          i_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(h_3);
      v_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_3), term_v_7), v_1), term_u_7), f_3);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  ATerm m_3 = NULL;
  ATerm q_0 (ATerm t)
  {
    t = x_69(t);
    if(((m_3 != NULL) && (m_3 != t)))
      _fail(t);
    else
      m_3 = t;
    return(t);
  }
  t = fetch_1_0(q_0, t);
  t = not_null(m_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm o_3 = NULL;
  o_3 = t;
  {
    ATerm w_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_16), term_d_16), term_s_15), term_i_15), term_a_15), term_r_14), term_l_14), term_h_14), term_c_14), term_y_13), term_s_13), term_l_13), term_f_13), term_y_12), term_u_12), term_l_12), term_a_12), term_u_11), term_p_11), term_g_11), term_t_10), term_y_9), term_s_9), term_n_9), term_d_9), term_o_8), term_g_8), term_c_8);
        {
          ATerm s_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm r_16 = ATgetArgument(t, 0);
                if((o_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm s_16 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(s_0, t);
        }
        ;
        LocalPopChoice(x_7);
      }
    else
      {
        t = w_7;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, o_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm s_3 = NULL;
  s_3 = t;
  {
    ATerm u_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_4 = NULL,z_1 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm y_16 = ATgetArgument(t, 0);
            c_4 = ATgetArgument(t, 1);
            {
              ATerm z_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = c_4;
        {
          ATerm e_17 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = e_17;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          z_1 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_1), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_f_17, (ATerm) ATinsert(ATinsert(ATempty, z_1), term_g_17));
        }
        ;
        LocalPopChoice(x_16);
      }
    else
      {
        t = u_16;
      }
    t = s_3;
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
  ATerm k_4 = NULL,l_4 = NULL;
  k_4 = t;
  t = fork_0_0(t);
  l_4 = t;
  {
    ATerm h_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = k_4;
        t = g_64(t);
        ;
        LocalPopChoice(i_17);
      }
    else
      {
        t = h_17;
        t = SSL_waitpid(l_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm j_17 = ATgetArgument(t, 0);
            if(((ATgetType(j_17) != AT_INT) || (ATgetInt((ATermInt) j_17) != 0)))
              _fail(t);
            {
              ATerm k_17 = ATgetArgument(t, 1);
            }
            {
              ATerm q_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = k_4;
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm c_80 (ATerm), ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL,w_4 = NULL,x_4 = NULL,a_5 = NULL;
  if(match_cons(t, sym__2))
    {
      t_4 = ATgetArgument(t, 0);
      u_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_80(t);
  w_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_4, t_4, u_4);
  t = table_push_0_0(t);
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(w_4, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(s_17);
      }
    else
      {
        t = r_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_4 = ATgetFirst((ATermList) t);
        a_5 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(w_4, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(a_5), (ATerm) ATinsert(CheckATermList(x_4), t_4)));
    t = (ATerm) ATmakeAppl(sym__2, t_4, u_4);
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm a_6 (ATerm o_5, ATerm t)
  {
    t = o_5;
    {
      ATerm u_17 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm x_17 = ATgetArgument(t, 0);
              ATerm y_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = u_17;
        }
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
      t = (ATerm) ATmakeAppl(sym__2, o_5, term_k_7);
      t = open_file_0_0(t);
    }
    return(t);
  }
  ATerm b_6 (ATerm s_5, ATerm t_5, ATerm u_5, ATerm t)
  {
    t = SSL_open_file(s_5, t_5);
    return(t);
  }
  ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL;
  x_5 = t;
  if(match_cons(t, sym__2))
    {
      y_5 = ATgetArgument(t, 0);
      z_5 = ATgetArgument(t, 1);
      {
        ATerm z_17 = t;
        int c_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_6(x_5, t);
            ;
            LocalPopChoice(c_18);
          }
        else
          {
            t = z_17;
            t = b_6(y_5, z_5, x_5, t);
          }
      }
    }
  else
    {
      t = a_6(x_5, t);
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
  ATerm d_6 = NULL;
  t = term_d_18;
  t = new_0_0(t);
  d_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_6, term_f_18);
  t = conc_strings_0_0(t);
  {
    ATerm i_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_6 = NULL;
        g_6 = t;
        t = SSL_access(g_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(l_18);
      }
    else
      {
        t = i_18;
      }
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm j_6 = NULL;
  t = new_file_0_0(t);
  j_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_6, term_k_7);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, j_6, term_d_18);
  {
    ATerm t_0 (ATerm t)
    {
      t = term_m_18;
      return(t);
    }
    t = assert_1_0(t_0, t);
    t = j_6;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL;
  m_7 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm n_3 = NULL,p_3 = NULL,f_4 = NULL,g_4 = NULL;
      t = m_7;
      t = xtc_new_file_0_0(t);
      n_3 = t;
      t = m_0(t);
      p_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_3, (ATerm) ATinsert(ATinsert(ATempty, n_3), term_p_18));
      {
        ATerm q_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm t_18 = ATgetArgument(t, 0);
                ATerm v_18 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = p_3;
            {
              ATerm u_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, n_3), term_p_18);
                return(t);
              }
              t = at_end_1_0(u_0, t);
            }
            ;
            LocalPopChoice(s_18);
          }
        else
          {
            t = q_18;
            {
              ATerm d_4 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, p_3, (ATerm) ATinsert(ATinsert(ATempty, n_3), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm w_18 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) w_18) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  d_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_4;
              t = concat_0_0(t);
            }
          }
        f_4 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        g_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_4, f_4);
        {
          ATerm v_0 (ATerm t)
          {
            t = SSL_execvp(g_4, f_4);
            return(t);
          }
          t = fork_and_wait_1_0(v_0, t);
          t = SSL_close_file(n_3);
          t = (ATerm) ATmakeAppl(sym_FILE_1, n_3);
        }
      }
    }
  else
    {
      ATerm o_4 = NULL,p_4 = NULL,f_5 = NULL,g_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_7;
      t = xtc_new_file_0_0(t);
      o_4 = t;
      t = m_0(t);
      p_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_4), term_p_18), n_7), term_x_18));
      {
        ATerm y_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm a_19 = ATgetArgument(t, 0);
                ATerm b_19 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = p_4;
            {
              ATerm w_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_4), term_p_18), n_7), term_x_18);
                return(t);
              }
              t = at_end_1_0(w_0, t);
            }
            ;
            LocalPopChoice(z_18);
          }
        else
          {
            t = y_18;
            {
              ATerm e_5 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, p_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_4), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), n_7), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm c_19 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) c_19) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  e_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = e_5;
              t = concat_0_0(t);
            }
          }
        f_5 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        g_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_5, f_5);
        {
          ATerm x_0 (ATerm t)
          {
            t = SSL_execvp(g_5, f_5);
            return(t);
          }
          t = fork_and_wait_1_0(x_0, t);
          t = SSL_close_file(o_4);
          t = (ATerm) ATmakeAppl(sym_FILE_1, o_4);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm b_62 (ATerm), ATerm t)
{
  ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL;
  t_7 = t;
  if(match_cons(t, sym_FILE_1))
    {
      r_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_7);
  q_7 = t;
  t = r_7;
  t = b_62(t);
  s_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, s_7), q_7);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_7 = NULL,b_8 = NULL;
      z_7 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm j_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_5 = NULL;
            t = eval_config_0_0(t);
            l_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), l_5);
            t = l_5;
            ;
            LocalPopChoice(l_19);
          }
        else
          {
            t = j_19;
          }
        b_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_8, term_c_15);
        t = geq_0_0(t);
        t = z_7;
        t = d_81(t);
      }
      ;
      LocalPopChoice(h_19);
    }
  else
    {
      t = g_19;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm c_81 (ATerm), ATerm t)
{
  ATerm p_19 = t;
  int s_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_8 = NULL,j_8 = NULL;
      h_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm t_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_5 = NULL;
            t = eval_config_0_0(t);
            q_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), q_5);
            t = q_5;
            ;
            LocalPopChoice(u_19);
          }
        else
          {
            t = t_19;
          }
        j_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_8, term_y_11);
        t = geq_0_0(t);
        t = h_8;
        t = c_81(t);
      }
      ;
      LocalPopChoice(s_19);
    }
  else
    {
      t = p_19;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm e_81 (ATerm), ATerm t)
{
  ATerm v_19 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_8 = NULL,m_8 = NULL;
      k_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm e_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_6 = NULL;
            t = eval_config_0_0(t);
            m_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), m_6);
            t = m_6;
            ;
            LocalPopChoice(k_20);
          }
        else
          {
            t = e_20;
          }
        m_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_8, term_b_9);
        t = geq_0_0(t);
        t = k_8;
        t = e_81(t);
      }
      ;
      LocalPopChoice(d_20);
    }
  else
    {
      t = v_19;
    }
  return(t);
}
ATerm union_1_0 (ATerm o_73 (ATerm), ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL;
  if(match_cons(t, sym__2))
    {
      r_8 = ATgetArgument(t, 0);
      q_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8;
  {
    ATerm s_8 (ATerm t)
    {
      ATerm l_20 = t;
      int q_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = q_8;
          ;
          LocalPopChoice(q_20);
        }
      else
        {
          t = l_20;
          {
            ATerm r_20 = t;
            int s_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_6 = NULL,o_6 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    n_6 = ATgetFirst((ATermList) t);
                    o_6 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = q_8;
                {
                  ATerm a_1 (ATerm t)
                  {
                    ATerm p_6 = NULL;
                    p_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, n_6, p_6);
                    t = o_73(t);
                    return(t);
                  }
                  t = fetch_1_0(a_1, t);
                  t = o_6;
                  t = s_8(t);
                }
                ;
                LocalPopChoice(s_20);
              }
            else
              {
                t = r_20;
                t = Cons_2_0(_id, s_8, t);
              }
          }
        }
      return(t);
    }
    t = s_8(t);
  }
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL;
  if(match_cons(t, sym__3))
    {
      w_8 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
      y_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_8, x_8);
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_21 = ATgetArgument(t, 0);
            ATerm e_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(w_8, x_8);
        ;
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
        t = (ATerm) ATempty;
      }
    z_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_8, y_8);
    {
      ATerm b_1 (ATerm t)
      {
        ATerm e_9 = NULL;
        if(match_cons(t, sym__2))
          {
            e_9 = ATgetArgument(t, 0);
            if((e_9 != ATgetArgument(t, 1)))
              {
                _fail(ATgetArgument(t, 1));
              }
          }
        else
          _fail(t);
        return(t);
      }
      t = union_1_0(b_1, t);
      a_9 = t;
      t = SSL_table_put(w_8, x_8, a_9);
      t = (ATerm) ATmakeAppl(sym__3, w_8, x_8, y_8);
    }
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm n_81 (ATerm), ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL;
  if(match_cons(t, sym__2))
    {
      h_9 = ATgetArgument(t, 0);
      g_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm i_9 = NULL,j_9 = NULL;
      if(match_cons(t, sym__2))
        {
          i_9 = ATgetArgument(t, 0);
          j_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, h_9, i_9, j_9);
      t = n_81(t);
      return(t);
    }
    t = map_1_0(f_1, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_9 (ATerm r_9, ATerm t)
  {
    t = SSL_fclose(r_9);
    return(t);
  }
  ATerm w_9 = NULL,x_9 = NULL;
  x_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_9 = ATgetArgument(t, 0);
      {
        ATerm h_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_9);
            ;
            LocalPopChoice(i_21);
          }
        else
          {
            t = h_21;
            t = z_9(x_9, t);
          }
      }
    }
  else
    {
      t = z_9(x_9, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_10 = NULL;
  t = SSL_stdin_stream();
  a_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_10 = NULL;
  t = SSL_stdout_stream();
  b_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_10 = NULL;
  t = SSL_stderr_stream();
  c_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_10);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_21 = ATgetArgument(t, 0);
      ATerm k_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_8 = NULL,u_8 = NULL;
        t_8 = t;
        t = SSL_explode_term(t_8);
        if(match_cons(t, sym__2))
          {
            ATerm r_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm s_21 = ATgetArgument(t, 1);
              if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
                {
                  u_8 = ATgetFirst((ATermList) s_21);
                  {
                    ATerm t_21 = (ATerm) ATgetNext((ATermList) s_21);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = u_8;
        if(match_cons(t, sym_stderr_0))
          {
            t = u_8;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = u_8;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = u_8;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        {
          ATerm u_21 = t;
          int v_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
              ATerm j_1 (ATerm t)
              {
                ATerm k_10 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    k_10 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = k_10;
                return(t);
              }
              t = _2_0(j_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  h_10 = ATgetArgument(t, 0);
                  i_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(h_10, i_10);
              j_10 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, j_10);
              ;
              LocalPopChoice(v_21);
            }
          else
            {
              t = u_21;
              {
                ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
                ATerm l_1 (ATerm t)
                {
                  ATerm o_10 = NULL;
                  o_10 = t;
                  t = SSL_is_string(o_10);
                  return(t);
                }
                t = _2_0(l_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    l_10 = ATgetArgument(t, 0);
                    m_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(l_10, m_10);
                n_10 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, n_10);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_10 = NULL;
      s_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_10, term_b_22);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
      {
        ATerm v_8 = NULL;
        v_8 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_8), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = v_8;
        _fail(t);
      }
    }
  p_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(r_10);
  q_10 = t;
  t = p_10;
  t = fclose_0_0(t);
  t = q_10;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_10 = NULL;
      u_10 = t;
      t = SSL_access(u_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(e_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = d_22;
      {
        ATerm h_22 = t;
        int k_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_9 = NULL;
            ATerm l_22 = t;
            if((PushChoice() == 0))
              {
                ATerm v_10 = NULL;
                v_10 = t;
                t = SSL_access(v_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_22;
              }
            m_9 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_9), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = m_9;
            ;
            LocalPopChoice(k_22);
          }
        else
          {
            t = h_22;
            {
              ATerm f_10 = NULL;
              f_10 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_10), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = f_10;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
  w_10 = t;
  {
    ATerm p_1 (ATerm t)
    {
      ATerm j_11 = NULL;
      j_11 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, j_11), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
      t = j_11;
      return(t);
    }
    t = if_verbose5_1_0(p_1, t);
    {
      ATerm m_22 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, w_10));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_22;
        }
      x_10 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, w_10));
      t = x_10;
      {
        ATerm q_1 (ATerm t)
        {
          ATerm o_11 = NULL;
          o_11 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_11), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
          t = o_11;
          return(t);
        }
        t = if_verbose4_1_0(q_1, t);
        t = read_repository_file_0_0(t);
        {
          ATerm r_1 (ATerm t)
          {
            ATerm z_10 = NULL;
            z_10 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
            t = z_10;
            return(t);
          }
          t = if_verbose6_1_0(r_1, t);
          y_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_22, y_10);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm s_1 (ATerm t)
            {
              ATerm a_11 = NULL;
              a_11 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
              t = a_11;
              return(t);
            }
            t = if_verbose6_1_0(s_1, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, w_10), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_n_22, (ATerm)ATmakeAppl(sym_Imported_1, w_10), (ATerm) ATempty);
            {
              ATerm t_1 (ATerm t)
              {
                ATerm b_11 = NULL;
                b_11 = t;
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
                t = b_11;
                return(t);
              }
              t = if_verbose4_1_0(t_1, t);
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
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(p_22);
    }
  else
    {
      t = o_22;
      {
        ATerm q_22 = t;
        int r_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_1 (ATerm t)
            {
              t = filter_1_0(e_77, t);
              return(t);
            }
            t = Cons_2_0(e_77, u_1, t);
            ;
            LocalPopChoice(r_22);
          }
        else
          {
            t = q_22;
            {
              ATerm f_11 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm s_22 = ATgetFirst((ATermList) t);
                  f_11 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = f_11;
              t = filter_1_0(e_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm y_78 (ATerm), ATerm t)
{
  ATerm i_11 (ATerm t)
  {
    ATerm t_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_78(t);
        t = i_11(t);
        ;
        LocalPopChoice(v_22);
      }
    else
      {
        t = t_22;
      }
    return(t);
  }
  t = i_11(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm y_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_12 = NULL;
            t = eval_config_0_0(t);
            z_12 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), z_12);
            t = z_12;
            ;
            LocalPopChoice(z_22);
          }
        else
          {
            t = y_22;
          }
      }
      ;
      LocalPopChoice(x_22);
    }
  else
    {
      t = w_22;
      {
        ATerm a_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(c_23);
          }
        else
          {
            t = a_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm k_11 = NULL;
  ATerm w_1 (ATerm t)
  {
    ATerm a_13 = NULL;
    a_13 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, a_13), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
    t = a_13;
    return(t);
  }
  t = if_verbose5_1_0(w_1, t);
  k_11 = t;
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        {
          ATerm m_11 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          m_11 = t;
          {
            ATerm y_1 (ATerm t)
            {
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
              t = filter_1_0(xtc_read_0_0, t);
              {
                ATerm h_23 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_23;
                  }
              }
              return(t);
            }
            t = repeat_1_0(y_1, t);
            t = m_11;
          }
        }
      }
    t = k_11;
    {
      ATerm a_2 (ATerm t)
      {
        ATerm d_13 = NULL;
        d_13 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, d_13), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
        t = d_13;
        return(t);
      }
      t = if_verbose5_1_0(a_2, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_2 (ATerm t)
      {
        ATerm k_13 = NULL;
        k_13 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_13), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
        t = k_13;
        return(t);
      }
      t = if_verbose5_1_0(b_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm l_23 = t;
        int m_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_14 = NULL,t_14 = NULL,u_14 = NULL;
            if(match_cons(t, sym__2))
              {
                e_14 = ATgetArgument(t, 0);
                t_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, e_14));
            {
              ATerm c_2 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((t_14 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((u_14 != NULL) && (u_14 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      u_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(c_2, t);
              t = not_null(u_14);
            }
            ;
            LocalPopChoice(m_23);
          }
        else
          {
            t = l_23;
            {
              ATerm k_15 = NULL,l_15 = NULL;
              k_15 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, k_15));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm n_23 = ATgetFirst((ATermList) t);
                  if(match_cons(n_23, sym__2))
                    {
                      ATerm q_23 = ATgetArgument(n_23, 0);
                      l_15 = ATgetArgument(n_23, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm p_23 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = l_15;
            }
          }
        {
          ATerm d_2 (ATerm t)
          {
            ATerm t_15 = NULL;
            t_15 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_15), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
            t = t_15;
            return(t);
          }
          t = if_verbose5_1_0(d_2, t);
        }
      }
      ;
      LocalPopChoice(k_23);
    }
  else
    {
      t = j_23;
      {
        ATerm r_11 = NULL;
        r_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), r_11), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_23), r_11), term_r_23);
        {
          ATerm e_2 (ATerm t)
          {
            ATerm u_18 = NULL;
            t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
            {
              ATerm f_2 (ATerm t)
              {
                ATerm h_18 = NULL,n_18 = NULL;
                h_18 = t;
                t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), h_18);
                n_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_18, n_18);
                return(t);
              }
              t = map_1_0(f_2, t);
              u_18 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_18), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
              t = u_18;
            }
            return(t);
          }
          t = if_verbose5_1_0(e_2, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_23);
    }
  else
    {
      t = u_23;
      {
        ATerm v_11 = NULL,w_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_11 = ATgetFirst((ATermList) t);
            w_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_11;
        {
          ATerm g_2 (ATerm t)
          {
            t = w_11;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(g_2, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm b_70 (ATerm), ATerm t)
{
  ATerm c_12 (ATerm t)
  {
    ATerm z_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, c_12, t);
        ;
        LocalPopChoice(a_24);
      }
    else
      {
        t = z_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_70(t);
      }
    return(t);
  }
  t = c_12(t);
  return(t);
}
ATerm _2_0 (ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,i_12 = NULL,j_12 = NULL;
  j_12 = t;
  if(match_cons(t, sym__2))
    {
      e_12 = ATgetArgument(t, 0);
      f_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_12);
  d_12 = t;
  t = e_12;
  t = t_55(t);
  g_12 = t;
  t = f_12;
  t = u_55(t);
  i_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, g_12, i_12), d_12);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm n_12 = NULL;
  ATerm h_2 (ATerm t)
  {
    ATerm o_12 = NULL;
    o_12 = t;
    t = SSL_explode_string(o_12);
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm p_12 = NULL;
    p_12 = t;
    t = SSL_explode_string(p_12);
    return(t);
  }
  t = _2_0(h_2, i_2, t);
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_12 = NULL,s_12 = NULL;
        if(match_cons(t, sym__2))
          {
            r_12 = ATgetArgument(t, 0);
            s_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_12;
        {
          ATerm j_2 (ATerm t)
          {
            t = s_12;
            return(t);
          }
          t = at_end_1_0(j_2, t);
        }
        ;
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        {
          ATerm w_19 = NULL,n_20 = NULL;
          w_19 = t;
          t = SSL_explode_term(w_19);
          if(match_cons(t, sym__2))
            {
              ATerm f_24 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_24) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              n_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_20;
          t = concat_0_0(t);
        }
      }
    n_12 = t;
    t = SSL_implode_string(n_12);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_13 = NULL;
      g_13 = t;
      t = SSL_is_string(g_13);
      ;
      LocalPopChoice(h_24);
    }
  else
    {
      t = g_24;
      {
        ATerm i_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_2 (ATerm t)
            {
              ATerm k_24 = t;
              int l_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(l_24);
                }
              else
                {
                  t = k_24;
                }
              return(t);
            }
            t = map_1_0(k_2, t);
            ;
            LocalPopChoice(j_24);
          }
        else
          {
            t = i_24;
            {
              ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
              o_13 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_13 = ATgetArgument(t, 0);
                  t = p_13;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_13 = ATgetArgument(t, 0);
                      t = p_13;
                      {
                        ATerm n_24 = t;
                        int o_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_13);
                            {
                              ATerm p_24 = t;
                              int r_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm u_22 = NULL;
                                  t = eval_config_0_0(t);
                                  u_22 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_13, u_22);
                                  t = u_22;
                                  ;
                                  LocalPopChoice(r_24);
                                }
                              else
                                {
                                  t = p_24;
                                }
                            }
                            ;
                            LocalPopChoice(o_24);
                          }
                        else
                          {
                            t = n_24;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_13), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = p_13;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_13 = NULL,w_13 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_13 = ATgetArgument(t, 0);
                          q_13 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_13;
                      t = eval_config_0_0(t);
                      v_13 = t;
                      t = q_13;
                      t = eval_config_0_0(t);
                      w_13 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_13, w_13);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL;
  o_14 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_23 = NULL;
        t = o_14;
        t = k_0(t);
        b_23 = t;
        {
          ATerm v_24 = t;
          int w_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(w_24);
            }
          else
            {
              t = v_24;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(p_14, b_23);
          t = (ATerm) ATmakeAppl(sym_FILE_1, p_14);
        }
        ;
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
        {
          ATerm x_24 = t;
          int z_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_23 = NULL;
              t = o_14;
              t = k_0(t);
              f_23 = t;
              {
                ATerm a_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm b_25 = t;
                    int c_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(c_25);
                      }
                    else
                      {
                        t = b_25;
                        {
                          ATerm d_25 = t;
                          int e_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(e_25);
                            }
                          else
                            {
                              t = d_25;
                              {
                                ATerm g_23 = NULL;
                                g_23 = t;
                                if((p_14 != t))
                                  {
                                    _fail(t);
                                  }
                                t = g_23;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_25;
                  }
                t = SSL_copy(p_14, f_23);
                t = (ATerm) ATmakeAppl(sym_FILE_1, p_14);
              }
              ;
              LocalPopChoice(z_24);
            }
          else
            {
              t = x_24;
              t = o_14;
              t = k_0(t);
              if((p_14 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_14);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  if(match_cons(t, sym__2))
    {
      w_14 = ATgetArgument(t, 0);
      x_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_23 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm h_25 = ATgetArgument(t, 0);
            ATerm i_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(w_14, x_14);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_25 = ATgetFirst((ATermList) t);
            i_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_23;
        ;
        LocalPopChoice(g_25);
      }
    else
      {
        t = f_25;
        t = (ATerm) ATempty;
      }
    y_14 = t;
    t = SSL_table_put(w_14, x_14, y_14);
    t = (ATerm) ATmakeAppl(sym__2, w_14, x_14);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm z_79 (ATerm), ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
  e_15 = t;
  t = z_79(t);
  f_15 = t;
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(f_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(l_25);
      }
    else
      {
        t = k_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_15 = ATgetFirst((ATermList) t);
        g_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(f_15, (ATerm)ATmakeAppl(sym_Scopes_0), g_15);
    t = h_15;
    {
      ATerm l_2 (ATerm t)
      {
        ATerm j_15 = NULL;
        j_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_15, j_15);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(l_2, t);
      t = e_15;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm t)
{
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_80(t);
      t = v_80(t);
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      t = v_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm y_79 (ATerm), ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL;
  m_15 = t;
  t = y_79(t);
  n_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_15, term_p_25);
  {
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_25 = ATgetArgument(t, 0);
            ATerm u_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(r_25);
      }
    else
      {
        t = q_25;
        t = (ATerm) ATempty;
      }
    o_15 = t;
    t = SSL_table_put(n_15, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(o_15), (ATerm) ATempty));
    t = m_15;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  ATerm u_15 = NULL;
  ATerm m_2 (ATerm t)
  {
    t = term_m_18;
    return(t);
  }
  t = begin_scope_1_0(m_2, t);
  {
    ATerm n_2 (ATerm t)
    {
      ATerm v_15 = NULL;
      v_15 = t;
      {
        ATerm v_25 = t;
        int x_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(x_25);
          }
        else
          {
            t = v_25;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((u_15 != NULL) && (u_15 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              u_15 = ATgetFirst((ATermList) t);
            {
              ATerm y_25 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(u_15);
        {
          ATerm o_2 (ATerm t)
          {
            ATerm z_25 = t;
            int b_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_15 = NULL;
                y_15 = t;
                t = SSL_remove(y_15);
                ;
                LocalPopChoice(b_26);
              }
            else
              {
                t = z_25;
              }
            return(t);
          }
          t = map_1_0(o_2, t);
          t = v_15;
          {
            ATerm p_2 (ATerm t)
            {
              t = term_m_18;
              return(t);
            }
            t = end_scope_1_0(p_2, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(d_83, n_2, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm e_83 (ATerm), ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_16 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm e_26 = t;
          int f_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_23 = NULL;
              t = eval_config_0_0(t);
              o_23 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), o_23);
              t = o_23;
              ;
              LocalPopChoice(f_26);
            }
          else
            {
              t = e_26;
            }
          a_16 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, a_16);
        }
        ;
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        t = term_g_26;
      }
    t = e_83(t);
    {
      ATerm r_2 (ATerm t)
      {
        ATerm h_26 = t;
        int i_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
            {
              ATerm j_26 = t;
              int k_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_23 = NULL;
                  t = eval_config_0_0(t);
                  s_23 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), s_23);
                  t = s_23;
                  ;
                  LocalPopChoice(k_26);
                }
              else
                {
                  t = j_26;
                }
            }
            ;
            LocalPopChoice(i_26);
          }
        else
          {
            t = h_26;
            t = term_l_26;
          }
        return(t);
      }
      t = copy_to_1_0(r_2, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(q_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL;
  b_16 = t;
  t = term_d_18;
  t = whoami_0_0(t);
  c_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), c_16), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = b_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm f_16 = NULL;
    f_16 = t;
    if(match_string(t, "-k"))
      {
        t = f_16;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = f_16;
      }
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    ATerm g_16 = NULL,h_16 = NULL;
    g_16 = t;
    t = SSL_string_to_int(g_16);
    h_16 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), h_16);
    t = g_16;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_m_26;
    return(t);
  }
  t = ArgOption_3_0(s_2, t_2, u_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_2 (ATerm t)
      {
        ATerm j_16 = NULL;
        j_16 = t;
        if(match_string(t, "-S"))
          {
            t = j_16;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = j_16;
          }
        return(t);
      }
      ATerm w_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_q_26;
        return(t);
      }
      ATerm x_2 (ATerm t)
      {
        t = term_r_26;
        return(t);
      }
      t = Option_3_0(v_2, w_2, x_2, t);
      ;
      LocalPopChoice(o_26);
    }
  else
    {
      t = n_26;
      {
        ATerm s_26 = t;
        int t_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm z_2 (ATerm t)
            {
              ATerm k_16 = NULL,l_16 = NULL;
              k_16 = t;
              t = SSL_string_to_int(k_16);
              l_16 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), l_16);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, k_16);
              return(t);
            }
            ATerm a_3 (ATerm t)
            {
              t = term_u_26;
              return(t);
            }
            t = ArgOption_3_0(y_2, z_2, a_3, t);
            ;
            LocalPopChoice(t_26);
          }
        else
          {
            t = s_26;
            {
              ATerm b_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm c_3 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_v_26;
                return(t);
              }
              ATerm e_3 (ATerm t)
              {
                t = term_w_26;
                return(t);
              }
              t = Option_3_0(b_3, c_3, e_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_16 = NULL;
      t = term_d_18;
      t = d_0(t);
      q_16 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_26, term_y_26, q_16);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm t_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_16 = ATgetFirst((ATermList) t);
          p_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_16;
      t = a_0(t);
      t = term_d_18;
      t = c_0(t);
      t_16 = t;
      t = (ATerm) ATinsert(CheckATermList(p_16), t_16);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm v_16 = NULL;
    v_16 = t;
    if(match_string(t, "-o"))
      {
        t = v_16;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = v_16;
      }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    ATerm w_16 = NULL;
    w_16 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), w_16);
    t = (ATerm) ATmakeAppl(sym_Output_1, w_16);
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = term_z_26;
    return(t);
  }
  t = ArgOption_3_0(g_3, j_3, k_3, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
  if(match_cons(t, sym__3))
    {
      a_17 = ATgetArgument(t, 0);
      b_17 = ATgetArgument(t, 1);
      c_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_17, b_17);
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_27 = ATgetArgument(t, 0);
            ATerm d_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(a_17, b_17);
        ;
        LocalPopChoice(b_27);
      }
    else
      {
        t = a_27;
        t = (ATerm) ATempty;
      }
    d_17 = t;
    t = SSL_table_put(a_17, b_17, (ATerm) ATinsert(CheckATermList(d_17), c_17));
    t = (ATerm) ATmakeAppl(sym__3, a_17, b_17, c_17);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_17 = NULL;
      t = term_d_18;
      t = j_0(t);
      p_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_26, term_y_26, p_17);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm t_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_17 = ATgetFirst((ATermList) t);
          m_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_17;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_17 = ATgetFirst((ATermList) t);
          o_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_17;
      t = h_0(t);
      t = n_17;
      t = i_0(t);
      t_17 = t;
      t = (ATerm) ATinsert(CheckATermList(o_17), t_17);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm v_17 = NULL;
    v_17 = t;
    if(match_string(t, "-i"))
      {
        t = v_17;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = v_17;
      }
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    ATerm w_17 = NULL;
    w_17 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), w_17);
    t = (ATerm) ATmakeAppl(sym_Input_1, w_17);
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    t = term_e_27;
    return(t);
  }
  t = ArgOption_3_0(l_3, q_3, r_3, t);
  return(t);
}
ATerm pp_stratego_options_0_0 (ATerm t)
{
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_3 (ATerm t)
      {
        ATerm a_18 = NULL;
        a_18 = t;
        if(match_string(t, "-a"))
          {
            t = a_18;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--abstract", 0, ATtrue)))
              _fail(t);
            t = a_18;
          }
        return(t);
      }
      ATerm u_3 (ATerm t)
      {
        ATerm b_18 = NULL;
        b_18 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = b_18;
        return(t);
      }
      ATerm v_3 (ATerm t)
      {
        t = term_h_27;
        return(t);
      }
      t = Option_3_0(t_3, u_3, v_3, t);
      ;
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
      {
        ATerm w_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--annotations", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm x_3 (ATerm t)
        {
          ATerm e_18 = NULL;
          e_18 = t;
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = e_18;
          return(t);
        }
        ATerm y_3 (ATerm t)
        {
          t = term_i_27;
          return(t);
        }
        t = Option_3_0(w_3, x_3, y_3, t);
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_18 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_18;
  t = whoami_0_0(t);
  g_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), g_18));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm j_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_23 = NULL;
        t = eval_config_0_0(t);
        w_23 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_23);
        t = w_23;
        ;
        LocalPopChoice(k_27);
      }
    else
      {
        t = j_27;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_76(t);
      ;
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      {
        ATerm j_18 = NULL,k_18 = NULL,o_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_18 = ATgetFirst((ATermList) t);
            k_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_18;
        t = foldr_2_0(b_76, c_76, t);
        o_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_18, o_18);
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
  ATerm r_18 = NULL,x_23 = NULL,y_23 = NULL;
  t = times_0_0(t);
  x_23 = t;
  t = SSL_explode_term(x_23);
  if(match_cons(t, sym__2))
    {
      ATerm n_27 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_23;
  {
    ATerm z_3 (ATerm t)
    {
      t = term_p_26;
      return(t);
    }
    ATerm a_4 (ATerm t)
    {
      ATerm b_24 = NULL,c_24 = NULL;
      if(match_cons(t, sym__2))
        {
          b_24 = ATgetArgument(t, 0);
          c_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm o_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(b_24, c_24);
            ;
            LocalPopChoice(p_27);
          }
        else
          {
            t = o_27;
            t = SSL_addr(b_24, c_24);
          }
      }
      return(t);
    }
    t = foldr_2_0(z_3, a_4, t);
    r_18 = t;
    t = SSL_TicksToSeconds(r_18);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL;
  d_19 = t;
  if(match_cons(t, sym__2))
    {
      e_19 = ATgetArgument(t, 0);
      f_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_19;
        if((e_19 != t))
          {
            _fail(t);
          }
        t = d_19;
        ;
        LocalPopChoice(r_27);
      }
    else
      {
        t = q_27;
        t = d_19;
        {
          ATerm s_27 = t;
          int t_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_19, f_19);
              ;
              LocalPopChoice(t_27);
            }
          else
            {
              t = s_27;
              t = SSL_gtr(e_19, f_19);
            }
          t = (ATerm) ATmakeAppl(sym__2, e_19, f_19);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  ATerm u_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_19 = NULL,k_19 = NULL;
      i_19 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm w_27 = t;
        int x_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_24 = NULL;
            t = eval_config_0_0(t);
            m_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), m_24);
            t = m_24;
            ;
            LocalPopChoice(x_27);
          }
        else
          {
            t = w_27;
          }
        k_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_19, term_h_7);
        t = geq_0_0(t);
        t = i_19;
        t = z_80(t);
      }
      ;
      LocalPopChoice(v_27);
    }
  else
    {
      t = u_27;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm m_19 = NULL,n_19 = NULL;
    t = run_time_0_0(t);
    m_19 = t;
    t = term_d_18;
    t = whoami_0_0(t);
    n_19 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), m_19), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), n_19));
    t = (ATerm) ATmakeAppl(sym__2, term_f_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_27), m_19), term_u_7), n_19));
    return(t);
  }
  t = if_verbose1_1_0(b_4, t);
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
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm b_28 = t;
        int c_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_24 = NULL;
            t = eval_config_0_0(t);
            q_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), q_24);
            t = q_24;
            ;
            LocalPopChoice(c_28);
          }
        else
          {
            t = b_28;
          }
      }
      ;
      LocalPopChoice(a_28);
    }
  else
    {
      t = z_27;
      {
        ATerm e_4 (ATerm t)
        {
          ATerm d_28 = t;
          int e_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(e_28);
            }
          else
            {
              t = d_28;
              {
                ATerm f_28 = t;
                int g_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(g_28);
                  }
                else
                  {
                    t = f_28;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(e_4, t);
      }
    }
  t = f_85(t);
  return(t);
}
ATerm map_1_0 (ATerm k_69 (ATerm), ATerm t)
{
  ATerm o_19 (ATerm t)
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        t = Cons_2_0(k_69, o_19, t);
      }
    return(t);
  }
  t = o_19(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_19 = ATgetFirst((ATermList) t);
      r_19 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_19 = NULL,y_19 = NULL;
        t = r_19;
        t = g_0(t);
        x_19 = t;
        t = q_19;
        t = e_0(t);
        y_19 = t;
        t = r_19;
        {
          ATerm h_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(x_19), y_19);
            return(t);
          }
          t = reverse_acc_2_0(e_0, h_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_18;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm i_62 (ATerm), ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL;
  c_20 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_20);
  z_19 = t;
  t = a_20;
  t = i_62(t);
  b_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, b_20), z_19);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm l_28 = t;
        int m_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_24 = NULL;
            t = eval_config_0_0(t);
            u_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), u_24);
            t = u_24;
            ;
            LocalPopChoice(m_28);
          }
        else
          {
            t = l_28;
          }
      }
      ;
      LocalPopChoice(k_28);
    }
  else
    {
      t = j_28;
      {
        ATerm i_4 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(i_4, t);
      }
    }
  t = term_n_28;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm j_4 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, j_4, t);
    {
      ATerm m_4 (ATerm t)
      {
        ATerm f_20 = NULL;
        f_20 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, f_20), term_o_28);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(m_4, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm j_62 (ATerm), ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
  j_20 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      h_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_20);
  g_20 = t;
  t = h_20;
  t = j_62(t);
  i_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, i_20), g_20);
  return(t);
}
ATerm fetch_1_0 (ATerm v_69 (ATerm), ATerm t)
{
  ATerm m_20 (ATerm t)
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(v_69, _id, t);
        ;
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
        t = Cons_2_0(_id, m_20, t);
      }
    return(t);
  }
  t = m_20(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL;
  o_20 = t;
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_20;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_28 = ATgetFirst((ATermList) t);
                ATerm u_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_20;
          }
        ;
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
        t = (ATerm) ATinsert(ATempty, o_20);
      }
    p_20 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), p_20);
    t = o_20;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm v_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_24 = NULL;
        t = eval_config_0_0(t);
        y_24 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), y_24);
        t = y_24;
        ;
        LocalPopChoice(w_28);
      }
    else
      {
        t = v_28;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm q_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_b_29;
        return(t);
      }
      ATerm r_4 (ATerm t)
      {
        t = term_c_29;
        return(t);
      }
      t = Option_3_0(n_4, q_4, r_4, t);
      ;
      LocalPopChoice(y_28);
    }
  else
    {
      t = x_28;
      {
        ATerm s_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm v_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_d_29;
          return(t);
        }
        ATerm y_4 (ATerm t)
        {
          t = term_e_29;
          return(t);
        }
        t = Option_3_0(s_4, v_4, y_4, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL;
  y_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_20 = ATgetFirst((ATermList) t);
      v_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_20);
  t_20 = t;
  t = u_20;
  t = c_57(t);
  w_20 = t;
  t = v_20;
  t = d_57(t);
  x_20 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(x_20), w_20), t_20);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_87 (ATerm), ATerm t)
{
  ATerm c_21 = NULL;
  c_21 = t;
  {
    ATerm f_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_29;
        t = d_87(t);
        ;
        LocalPopChoice(g_29);
      }
    else
      {
        t = f_29;
      }
    t = c_21;
    {
      ATerm z_4 (ATerm t)
      {
        ATerm d_21 = NULL;
        d_21 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_21);
        t = (ATerm) ATmakeAppl(sym_Program_1, d_21);
        return(t);
      }
      ATerm b_5 (ATerm t)
      {
        ATerm i_29 = t;
        int j_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_29 = t;
            int l_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(l_29);
              }
            else
              {
                t = k_29;
                t = d_87(t);
                t = Cons_2_0(_id, b_5, t);
              }
            ;
            LocalPopChoice(j_29);
          }
        else
          {
            t = i_29;
            {
              ATerm f_21 = NULL,g_21 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_21 = ATgetFirst((ATermList) t);
                  g_21 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(g_21), (ATerm) ATmakeAppl(sym_Undefined_1, f_21));
            }
          }
        return(t);
      }
      t = Cons_2_0(z_4, b_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm c_87 (ATerm), ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
  n_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = n_21;
  {
    ATerm c_5 (ATerm t)
    {
      ATerm m_29 = t;
      int n_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_87(t);
          ;
          LocalPopChoice(n_29);
        }
      else
        {
          t = m_29;
          {
            ATerm o_29 = t;
            int p_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_5 (ATerm t)
                {
                  ATerm q_21 = NULL;
                  q_21 = t;
                  if(match_string(t, "--help"))
                    {
                      t = q_21;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = q_21;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = q_21;
                        }
                    }
                  return(t);
                }
                ATerm h_5 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_q_29;
                  return(t);
                }
                ATerm i_5 (ATerm t)
                {
                  t = term_r_29;
                  return(t);
                }
                t = Option_3_0(d_5, h_5, i_5, t);
                ;
                LocalPopChoice(p_29);
              }
            else
              {
                t = o_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_5, t);
    {
      ATerm s_29 = t;
      int t_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_21 = NULL;
          w_21 = t;
          {
            ATerm u_29 = t;
            int v_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = w_21;
                {
                  ATerm w_29 = t;
                  int x_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm y_29 = t;
                        int z_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm m_25 = NULL;
                            t = eval_config_0_0(t);
                            m_25 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), m_25);
                            t = m_25;
                            ;
                            LocalPopChoice(z_29);
                          }
                        else
                          {
                            t = y_29;
                          }
                      }
                      ;
                      LocalPopChoice(x_29);
                    }
                  else
                    {
                      t = w_29;
                      {
                        ATerm j_5 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(j_5, t);
                      }
                    }
                  t = w_21;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(v_29);
              }
            else
              {
                t = u_29;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm a_30 = t;
                  int b_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_25 = NULL;
                      t = eval_config_0_0(t);
                      s_25 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), s_25);
                      t = s_25;
                      ;
                      LocalPopChoice(b_30);
                    }
                  else
                    {
                      t = a_30;
                    }
                  t = w_21;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(t_29);
        }
      else
        {
          t = s_29;
          {
            ATerm c_30 = t;
            int d_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_5 (ATerm t)
                {
                  ATerm m_5 (ATerm t)
                  {
                    if(((o_21 != NULL) && (o_21 != t)))
                      _fail(t);
                    else
                      o_21 = t;
                    return(t);
                  }
                  t = Undefined_1_0(m_5, t);
                  return(t);
                }
                t = fetch_1_0(k_5, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(o_21)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_f_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_21)), term_e_30));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(d_30);
              }
            else
              {
                t = c_30;
              }
          }
        }
      p_21 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = p_21;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm t)
{
  ATerm z_21 = NULL;
  t = parse_options_1_0(h_85, t);
  z_21 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), z_21);
  t = z_21;
  t = j_85(t);
  {
    ATerm f_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_85, t);
        ;
        LocalPopChoice(g_30);
      }
    else
      {
        t = f_30;
        {
          ATerm h_30 = t;
          int i_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_30);
            }
          else
            {
              t = h_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm pp_stratego_0_0 (ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    ATerm j_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_stratego_options_0_0(t);
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
              t = input_option_0_0(t);
              ;
              LocalPopChoice(m_30);
            }
          else
            {
              t = l_30;
              {
                ATerm n_30 = t;
                int o_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(o_30);
                  }
                else
                  {
                    t = n_30;
                    {
                      ATerm p_30 = t;
                      int q_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm r_5 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm v_5 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_r_30;
                            return(t);
                          }
                          ATerm w_5 (ATerm t)
                          {
                            t = term_s_30;
                            return(t);
                          }
                          t = Option_3_0(r_5, v_5, w_5, t);
                          ;
                          LocalPopChoice(q_30);
                        }
                      else
                        {
                          t = p_30;
                          {
                            ATerm t_30 = t;
                            int u_30 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(u_30);
                              }
                            else
                              {
                                t = t_30;
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
  ATerm p_5 (ATerm t)
  {
    ATerm c_6 (ATerm t)
    {
      ATerm v_30 = t;
      int w_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_22 = NULL;
          a_22 = t;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue)));
          {
            ATerm x_30 = t;
            int y_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_25 = NULL;
                t = eval_config_0_0(t);
                w_25 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue)), w_25);
                t = w_25;
                ;
                LocalPopChoice(y_30);
              }
            else
              {
                t = x_30;
              }
            t = a_22;
          }
          ;
          LocalPopChoice(w_30);
        }
      else
        {
          t = v_30;
          {
            ATerm z_30 = t;
            int a_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_31 = t;
                int c_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = FILE_1_0(_id, t);
                    ;
                    LocalPopChoice(c_31);
                  }
                else
                  {
                    t = b_31;
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                  }
                LocalPopChoice(a_31);
                {
                  ATerm e_6 (ATerm t)
                  {
                    t = term_d_31;
                    return(t);
                  }
                  ATerm f_6 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = xtc_transform_file_2_0(e_6, f_6, t);
                }
              }
            else
              {
                t = z_30;
                {
                  ATerm i_6 (ATerm t)
                  {
                    t = term_d_31;
                    return(t);
                  }
                  ATerm k_6 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = xtc_transform_term_2_0(i_6, k_6, t);
                }
              }
          }
        }
      {
        ATerm e_31 = t;
        int f_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_31 = t;
            int h_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(h_31);
              }
            else
              {
                t = g_31;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(f_31);
            {
              ATerm l_6 (ATerm t)
              {
                t = term_i_31;
                return(t);
              }
              ATerm q_6 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = xtc_transform_file_2_0(l_6, q_6, t);
            }
          }
        else
          {
            t = e_31;
            {
              ATerm r_6 (ATerm t)
              {
                t = term_i_31;
                return(t);
              }
              ATerm s_6 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = xtc_transform_term_2_0(r_6, s_6, t);
            }
          }
        {
          ATerm j_31 = t;
          int k_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_22 = NULL;
              c_22 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue)));
              {
                ATerm l_31 = t;
                int m_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_26 = NULL;
                    t = eval_config_0_0(t);
                    a_26 = t;
                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue)), a_26);
                    t = a_26;
                    ;
                    LocalPopChoice(m_31);
                  }
                else
                  {
                    t = l_31;
                  }
                t = c_22;
              }
              ;
              LocalPopChoice(k_31);
            }
          else
            {
              t = j_31;
              {
                ATerm n_31 = t;
                int o_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_31 = t;
                    int q_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FILE_1_0(_id, t);
                        ;
                        LocalPopChoice(q_31);
                      }
                    else
                      {
                        t = p_31;
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                      }
                    LocalPopChoice(o_31);
                    {
                      ATerm t_6 (ATerm t)
                      {
                        t = term_r_31;
                        return(t);
                      }
                      ATerm u_6 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = xtc_transform_file_2_0(t_6, u_6, t);
                    }
                  }
                else
                  {
                    t = n_31;
                    {
                      ATerm v_6 (ATerm t)
                      {
                        t = term_r_31;
                        return(t);
                      }
                      ATerm w_6 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = xtc_transform_term_2_0(v_6, w_6, t);
                    }
                  }
              }
            }
          {
            ATerm s_31 = t;
            int t_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_31 = t;
                int v_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = FILE_1_0(_id, t);
                    ;
                    LocalPopChoice(v_31);
                  }
                else
                  {
                    t = u_31;
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                  }
                LocalPopChoice(t_31);
                {
                  ATerm x_6 (ATerm t)
                  {
                    t = term_w_31;
                    return(t);
                  }
                  ATerm y_6 (ATerm t)
                  {
                    ATerm f_22 = NULL,g_22 = NULL;
                    t = pass_verbose_0_0(t);
                    f_22 = t;
                    t = term_x_31;
                    t = xtc_find_0_0(t);
                    g_22 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(f_22), g_22), term_y_31);
                    return(t);
                  }
                  t = xtc_transform_file_2_0(x_6, y_6, t);
                }
              }
            else
              {
                t = s_31;
                {
                  ATerm z_6 (ATerm t)
                  {
                    t = term_w_31;
                    return(t);
                  }
                  ATerm a_7 (ATerm t)
                  {
                    ATerm i_22 = NULL,j_22 = NULL;
                    t = pass_verbose_0_0(t);
                    i_22 = t;
                    t = term_x_31;
                    t = xtc_find_0_0(t);
                    j_22 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(i_22), j_22), term_y_31);
                    return(t);
                  }
                  t = xtc_transform_term_2_0(z_6, a_7, t);
                }
              }
            {
              ATerm z_31 = t;
              int a_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_32 = t;
                  int c_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = FILE_1_0(_id, t);
                      ;
                      LocalPopChoice(c_32);
                    }
                  else
                    {
                      t = b_32;
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                    }
                  LocalPopChoice(a_32);
                  {
                    ATerm b_7 (ATerm t)
                    {
                      t = term_d_32;
                      return(t);
                    }
                    t = xtc_transform_file_2_0(b_7, pass_verbose_0_0, t);
                  }
                }
              else
                {
                  t = z_31;
                  {
                    ATerm c_7 (ATerm t)
                    {
                      t = term_d_32;
                      return(t);
                    }
                    t = xtc_transform_term_2_0(c_7, pass_verbose_0_0, t);
                  }
                }
            }
          }
        }
      }
      return(t);
    }
    t = xtc_io_1_0(c_6, t);
    return(t);
  }
  t = option_wrap_4_0(n_5, default_usage_0_0, _id, p_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pp_stratego_0_0(t);
  return(t);
}
