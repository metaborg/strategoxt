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
ATerm term_c_32;
ATerm term_x_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_x_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_a_30;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_a_28;
ATerm term_k_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_u_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_k_26;
ATerm term_v_25;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_n_23;
ATerm term_w_22;
ATerm term_k_20;
ATerm term_i_20;
ATerm term_k_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_d_16;
ATerm term_z_15;
ATerm term_w_15;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_z_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
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
ATerm term_l_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_o_12;
ATerm term_g_12;
ATerm term_a_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_s_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_f_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_o_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_k_9;
ATerm term_h_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_q_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_j_8;
ATerm term_h_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_b_8;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_c_7;
ATerm term_z_6;
ATerm term_o_6;
void init_constant_terms (void)
{
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_7, term_z_6, term_l_7);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_7, term_u_7, term_v_7);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_8, term_e_8, term_f_8);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_8, term_l_8, term_m_8);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_8, term_t_8, term_v_8);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_8, term_z_8, term_a_9);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_9, term_d_9, term_h_9);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_9, term_q_9, term_r_9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_9, term_x_9, term_y_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_10, term_c_10, term_e_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_10, term_j_10, term_k_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_10, term_w_10, term_x_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_11, term_f_11, term_h_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_11, term_k_11, term_l_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_11, term_p_11, term_s_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_a_12, term_g_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_y_12, term_z_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_g_13, term_h_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_l_13, term_o_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_13, term_r_13, term_s_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_v_13, term_w_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_b_14, term_c_14);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_14, term_h_14, term_l_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_o_14, term_p_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_s_14, term_t_14);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_f_15, term_i_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_l_15, term_q_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_w_15, term_z_15);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_26);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym__3, term_s_29, term_t_29, term_v_17);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp.af", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm v_65 (ATerm), ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm b_70 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm k_64 (ATerm), ATerm);
ATerm assert_1_0 (ATerm c_78 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm f_62 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm separate_by_0_0 (ATerm);
ATerm at_last_1_0 (ATerm q_70 (ATerm), ATerm);
ATerm at_suffix_1_0 (ATerm j_70 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm c_70 (ATerm), ATerm);
ATerm list_tokenize_1_0 (ATerm c_93 (ATerm), ATerm);
ATerm string_tokenize_0_0 (ATerm);
ATerm remove_extension_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm d_79 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm c_79 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm e_79 (ATerm), ATerm);
ATerm union_1_0 (ATerm s_73 (ATerm), ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm n_79 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm i_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm j_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm z_77 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm y_77 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm d_81 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm e_81 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_78 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm f_83 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm m_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm n_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm z_69 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm f_70 (ATerm), ATerm);
ATerm _2_0 (ATerm x_55 (ATerm), ATerm y_55 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm o_69 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm g_57 (ATerm), ATerm h_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm d_85 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm c_85 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm);
ATerm io_pp_c_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,p_0 = NULL;
  t = term_o_6;
  {
    ATerm v_6 = t;
    int w_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
        {
          ATerm x_6 = t;
          int y_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_0 = NULL;
              t = eval_config_0_0(t);
              s_0 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), s_0);
              t = s_0;
              ;
              LocalPopChoice(y_6);
            }
          else
            {
              t = x_6;
            }
        }
        ;
        LocalPopChoice(w_6);
      }
    else
      {
        t = v_6;
        t = term_z_6;
      }
    b_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_z_6);
    {
      ATerm a_7 = t;
      int b_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(b_0, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(b_7);
        }
      else
        {
          t = a_7;
          t = SSL_subtr(b_0, (ATerm) ATmakeInt(1));
        }
      p_0 = t;
      t = SSL_int_to_string(p_0);
      f_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, f_0), term_o_6);
    }
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
ATerm WriteToFile_1_0 (ATerm v_65 (ATerm), ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL;
  if(match_cons(t, sym__2))
    {
      w_1 = ATgetArgument(t, 0);
      x_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_1, term_c_7);
  t = open_stream_0_0(t);
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_1, x_1);
  t = v_65(t);
  t = fclose_0_0(t);
  t = x_1;
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL;
  d_2 = t;
  t = xtc_new_file_0_0(t);
  e_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_2, d_2);
  {
    ATerm n_0 (ATerm t)
    {
      ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm d_7 = ATgetArgument(t, 0);
          if(match_cons(d_7, sym_Stream_1))
            {
              g_2 = ATgetArgument(d_7, 0);
            }
          else
            _fail(t);
          h_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_write_term_to_stream_baf(g_2, h_2);
      i_2 = t;
      t = (ATerm) ATmakeAppl(sym_Stream_1, i_2);
      return(t);
    }
    t = WriteToFile_1_0(n_0, t);
    t = SSL_close_file(e_2);
    t = (ATerm) ATmakeAppl(sym_FILE_1, e_2);
  }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(a_82, b_82, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm g_3 = NULL,i_3 = NULL,j_3 = NULL,l_3 = NULL;
  g_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      i_3 = ATgetArgument(t, 0);
      {
        ATerm z_0 = NULL;
        t = SSL_int_to_string(i_3);
        z_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_7), z_0), term_e_7);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm j_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          i_3 = ATgetArgument(t, 0);
          j_3 = ATgetArgument(t, 1);
          l_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(j_3);
      j_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_3), term_h_7), j_1), term_g_7), i_3);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm b_70 (ATerm), ATerm t)
{
  ATerm p_3 = NULL;
  ATerm o_0 (ATerm t)
  {
    t = b_70(t);
    if(((p_3 != NULL) && (p_3 != t)))
      _fail(t);
    else
      p_3 = t;
    return(t);
  }
  t = fetch_1_0(o_0, t);
  t = not_null(p_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm q_3 = NULL;
  q_3 = t;
  {
    ATerm i_7 = t;
    int j_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_16), term_r_15), term_j_15), term_z_14), term_q_14), term_m_14), term_d_14), term_x_13), term_t_13), term_p_13), term_i_13), term_b_13), term_o_12), term_x_11), term_m_11), term_i_11), term_y_10), term_o_10), term_g_10), term_z_9), term_t_9), term_k_9), term_b_9), term_w_8), term_q_8), term_h_8), term_b_8), term_o_7);
        {
          ATerm q_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm e_16 = ATgetArgument(t, 0);
                if((q_3 != ATgetArgument(t, 1)))
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
          t = fetch_elem_1_0(q_0, t);
        }
        ;
        LocalPopChoice(j_7);
      }
    else
      {
        t = i_7;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, q_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm v_3 = NULL;
  v_3 = t;
  {
    ATerm j_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_4 = NULL,q_1 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm o_16 = ATgetArgument(t, 0);
            d_4 = ATgetArgument(t, 1);
            {
              ATerm p_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = d_4;
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
          q_1 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_1), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_u_16, (ATerm) ATinsert(ATinsert(ATempty, q_1), term_v_16));
        }
        ;
        LocalPopChoice(k_16);
      }
    else
      {
        t = j_16;
      }
    t = v_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm k_64 (ATerm), ATerm t)
{
  ATerm k_4 = NULL,p_4 = NULL;
  k_4 = t;
  t = fork_0_0(t);
  p_4 = t;
  {
    ATerm a_17 = t;
    int b_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = k_4;
        t = k_64(t);
        ;
        LocalPopChoice(b_17);
      }
    else
      {
        t = a_17;
        t = SSL_waitpid(p_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm c_17 = ATgetArgument(t, 0);
            if(((ATgetType(c_17) != AT_INT) || (ATgetInt((ATermInt) c_17) != 0)))
              _fail(t);
            {
              ATerm d_17 = ATgetArgument(t, 1);
            }
            {
              ATerm e_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = k_4;
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm c_78 (ATerm), ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL,z_4 = NULL,a_5 = NULL;
  if(match_cons(t, sym__2))
    {
      u_4 = ATgetArgument(t, 0);
      v_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_78(t);
  w_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_4, u_4, v_4);
  t = table_push_0_0(t);
  {
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(w_4, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(g_17);
      }
    else
      {
        t = f_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_4 = ATgetFirst((ATermList) t);
        a_5 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(w_4, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(a_5), (ATerm) ATinsert(CheckATermList(z_4), u_4)));
    t = (ATerm) ATmakeAppl(sym__2, u_4, v_4);
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm d_6 (ATerm h_5, ATerm t)
  {
    t = h_5;
    {
      ATerm m_17 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm n_17 = ATgetArgument(t, 0);
              ATerm o_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_17;
        }
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
      t = (ATerm) ATmakeAppl(sym__2, h_5, term_c_7);
      t = open_file_0_0(t);
    }
    return(t);
  }
  ATerm f_6 (ATerm l_5, ATerm t_5, ATerm u_5, ATerm t)
  {
    t = SSL_open_file(l_5, t_5);
    return(t);
  }
  ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
  a_6 = t;
  if(match_cons(t, sym__2))
    {
      b_6 = ATgetArgument(t, 0);
      c_6 = ATgetArgument(t, 1);
      {
        ATerm q_17 = t;
        int s_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_6(a_6, t);
            ;
            LocalPopChoice(s_17);
          }
        else
          {
            t = q_17;
            t = f_6(b_6, c_6, a_6, t);
          }
      }
    }
  else
    {
      t = d_6(a_6, t);
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
  ATerm j_6 = NULL;
  t = term_v_17;
  t = new_0_0(t);
  j_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_6, term_w_17);
  t = conc_strings_0_0(t);
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_6 = NULL;
        n_6 = t;
        t = SSL_access(n_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
      }
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm q_6 = NULL;
  t = new_file_0_0(t);
  q_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_6, term_c_7);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, q_6, term_v_17);
  {
    ATerm r_0 (ATerm t)
    {
      t = term_c_18;
      return(t);
    }
    t = assert_1_0(r_0, t);
    t = q_6;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL;
  m_7 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm f_3 = NULL,h_3 = NULL,c_4 = NULL,e_4 = NULL;
      t = m_7;
      t = xtc_new_file_0_0(t);
      f_3 = t;
      t = m_0(t);
      h_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_3, (ATerm) ATinsert(ATinsert(ATempty, f_3), term_d_18));
      {
        ATerm f_18 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm h_18 = ATgetArgument(t, 0);
                ATerm i_18 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = h_3;
            {
              ATerm t_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, f_3), term_d_18);
                return(t);
              }
              t = at_end_1_0(t_0, t);
            }
            ;
            LocalPopChoice(g_18);
          }
        else
          {
            t = f_18;
            {
              ATerm x_3 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, h_3, (ATerm) ATinsert(ATinsert(ATempty, f_3), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm j_18 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) j_18) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  x_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_3;
              t = concat_0_0(t);
            }
          }
        c_4 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        e_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_4, c_4);
        {
          ATerm u_0 (ATerm t)
          {
            t = SSL_execvp(e_4, c_4);
            return(t);
          }
          t = fork_and_wait_1_0(u_0, t);
          t = SSL_close_file(f_3);
          t = (ATerm) ATmakeAppl(sym_FILE_1, f_3);
        }
      }
    }
  else
    {
      ATerm m_4 = NULL,n_4 = NULL,e_5 = NULL,f_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_7;
      t = xtc_new_file_0_0(t);
      m_4 = t;
      t = m_0(t);
      n_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_4), term_d_18), n_7), term_k_18));
      {
        ATerm l_18 = t;
        int m_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm n_18 = ATgetArgument(t, 0);
                ATerm o_18 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_4;
            {
              ATerm v_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_4), term_d_18), n_7), term_k_18);
                return(t);
              }
              t = at_end_1_0(v_0, t);
            }
            ;
            LocalPopChoice(m_18);
          }
        else
          {
            t = l_18;
            {
              ATerm d_5 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, n_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_4), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), n_7), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm s_18 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) s_18) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  d_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_5;
              t = concat_0_0(t);
            }
          }
        e_5 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        f_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_5, e_5);
        {
          ATerm w_0 (ATerm t)
          {
            t = SSL_execvp(f_5, e_5);
            return(t);
          }
          t = fork_and_wait_1_0(w_0, t);
          t = SSL_close_file(m_4);
          t = (ATerm) ATmakeAppl(sym_FILE_1, m_4);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm f_62 (ATerm), ATerm t)
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
  t = f_62(t);
  s_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, s_7), q_7);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm w_7 = NULL;
  ATerm x_0 (ATerm t)
  {
    ATerm x_7 = NULL;
    x_7 = t;
    t = SSL_explode_string(x_7);
    return(t);
  }
  t = map_1_0(x_0, t);
  t = concat_0_0(t);
  w_7 = t;
  t = SSL_implode_string(w_7);
  return(t);
}
ATerm separate_by_0_0 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL;
  if(match_cons(t, sym__2))
    {
      y_7 = ATgetArgument(t, 0);
      z_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_7;
  {
    ATerm t_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(v_18);
      }
    else
      {
        t = t_18;
        {
          ATerm y_0 (ATerm t)
          {
            ATerm x_18 = t;
            int y_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(y_18);
              }
            else
              {
                t = x_18;
                {
                  ATerm a_8 = NULL;
                  t = Cons_2_0(_id, y_0, t);
                  a_8 = t;
                  t = (ATerm) ATinsert(CheckATermList(a_8), y_7);
                }
              }
            return(t);
          }
          t = Cons_2_0(_id, y_0, t);
        }
      }
  }
  return(t);
}
ATerm at_last_1_0 (ATerm q_70 (ATerm), ATerm t)
{
  ATerm c_8 (ATerm t)
  {
    ATerm e_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_1 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, a_1, t);
        t = q_70(t);
        ;
        LocalPopChoice(f_19);
      }
    else
      {
        t = e_19;
        t = Cons_2_0(_id, c_8, t);
      }
    return(t);
  }
  t = c_8(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm j_70 (ATerm), ATerm t)
{
  ATerm g_8 (ATerm t)
  {
    ATerm g_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_70(t);
        ;
        LocalPopChoice(n_19);
      }
    else
      {
        t = g_19;
        t = Cons_2_0(_id, g_8, t);
      }
    return(t);
  }
  t = g_8(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm c_70 (ATerm), ATerm t)
{
  ATerm i_8 = NULL,k_8 = NULL;
  ATerm b_1 (ATerm t)
  {
    t = Cons_2_0(c_70, _id, t);
    {
      ATerm c_1 (ATerm t)
      {
        if(((i_8 != NULL) && (i_8 != t)))
          _fail(t);
        else
          i_8 = t;
        return(t);
      }
      t = Cons_2_0(_id, c_1, t);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1_0(b_1, t);
  k_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_8, not_null(i_8));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm c_93 (ATerm), ATerm t)
{
  ATerm u_8 = NULL,x_8 = NULL;
  ATerm o_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(c_93, t);
      ;
      LocalPopChoice(u_19);
    }
  else
    {
      t = o_19;
      {
        ATerm r_8 = NULL;
        r_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_8, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      u_8 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_8;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm v_19 = ATgetFirst((ATermList) t);
              ATerm b_20 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = x_8;
          t = list_tokenize_1_0(c_93, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm c_20 = ATgetFirst((ATermList) t);
          ATerm d_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_8;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, u_8);
        }
      else
        {
          ATerm e_9 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm e_20 = ATgetFirst((ATermList) t);
              ATerm f_20 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = x_8;
          t = list_tokenize_1_0(c_93, t);
          e_9 = t;
          t = (ATerm) ATinsert(CheckATermList(e_9), u_8);
        }
    }
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL;
  ATerm d_1 (ATerm t)
  {
    ATerm i_9 = NULL;
    i_9 = t;
    t = SSL_explode_string(i_9);
    return(t);
  }
  t = _2_0(_id, d_1, t);
  if(match_cons(t, sym__2))
    {
      f_9 = ATgetArgument(t, 0);
      g_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9;
  {
    ATerm e_1 (ATerm t)
    {
      ATerm j_9 = NULL;
      j_9 = t;
      t = f_9;
      {
        ATerm f_1 (ATerm t)
        {
          ATerm m_5 = NULL;
          m_5 = t;
          if((j_9 != t))
            {
              _fail(t);
            }
          t = m_5;
          return(t);
        }
        t = SRTS_one(f_1, t);
      }
      return(t);
    }
    t = list_tokenize_1_0(e_1, t);
    {
      ATerm g_1 (ATerm t)
      {
        ATerm l_9 = NULL;
        l_9 = t;
        t = SSL_implode_string(l_9);
        return(t);
      }
      t = map_1_0(g_1, t);
    }
  }
  return(t);
}
ATerm remove_extension_0_0 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL;
  m_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_i_20), m_9);
  t = string_tokenize_0_0(t);
  {
    ATerm h_1 (ATerm t)
    {
      ATerm o_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm j_20 = ATgetFirst((ATermList) t);
          o_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_9;
      return(t);
    }
    t = at_last_1_0(h_1, t);
    n_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_k_20, n_9);
    t = separate_by_0_0(t);
    t = concat_strings_0_0(t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm d_79 (ATerm), ATerm t)
{
  ATerm l_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_9 = NULL,u_9 = NULL;
      s_9 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm n_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 = NULL;
            t = eval_config_0_0(t);
            s_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), s_5);
            t = s_5;
            ;
            LocalPopChoice(v_20);
          }
        else
          {
            t = n_20;
          }
        u_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_9, term_s_14);
        t = geq_0_0(t);
        t = s_9;
        t = d_79(t);
      }
      ;
      LocalPopChoice(m_20);
    }
  else
    {
      t = l_20;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm c_79 (ATerm), ATerm t)
{
  ATerm w_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_10 = NULL,d_10 = NULL;
      b_10 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm b_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_6 = NULL;
            t = eval_config_0_0(t);
            e_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_6);
            t = e_6;
            ;
            LocalPopChoice(e_21);
          }
        else
          {
            t = b_21;
          }
        d_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_10, term_w_10);
        t = geq_0_0(t);
        t = b_10;
        t = c_79(t);
      }
      ;
      LocalPopChoice(x_20);
    }
  else
    {
      t = w_20;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm e_79 (ATerm), ATerm t)
{
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_10 = NULL,h_10 = NULL;
      f_10 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm h_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_6 = NULL;
            t = eval_config_0_0(t);
            k_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_6);
            t = k_6;
            ;
            LocalPopChoice(j_21);
          }
        else
          {
            t = h_21;
          }
        h_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_10, term_l_8);
        t = geq_0_0(t);
        t = f_10;
        t = e_79(t);
      }
      ;
      LocalPopChoice(g_21);
    }
  else
    {
      t = f_21;
    }
  return(t);
}
ATerm union_1_0 (ATerm s_73 (ATerm), ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL;
  if(match_cons(t, sym__2))
    {
      m_10 = ATgetArgument(t, 0);
      l_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_10;
  {
    ATerm n_10 (ATerm t)
    {
      ATerm k_21 = t;
      int m_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = l_10;
          ;
          LocalPopChoice(m_21);
        }
      else
        {
          t = k_21;
          {
            ATerm n_21 = t;
            int p_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_6 = NULL,s_6 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    r_6 = ATgetFirst((ATermList) t);
                    s_6 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = l_10;
                {
                  ATerm i_1 (ATerm t)
                  {
                    ATerm t_6 = NULL;
                    t_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, r_6, t_6);
                    t = s_73(t);
                    return(t);
                  }
                  t = fetch_1_0(i_1, t);
                  t = s_6;
                  t = n_10(t);
                }
                ;
                LocalPopChoice(p_21);
              }
            else
              {
                t = n_21;
                t = Cons_2_0(_id, n_10, t);
              }
          }
        }
      return(t);
    }
    t = n_10(t);
  }
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
  if(match_cons(t, sym__3))
    {
      q_10 = ATgetArgument(t, 0);
      r_10 = ATgetArgument(t, 1);
      s_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_10, r_10);
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_21 = ATgetArgument(t, 0);
            ATerm w_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(q_10, r_10);
        ;
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        t = (ATerm) ATempty;
      }
    t_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_10, s_10);
    {
      ATerm k_1 (ATerm t)
      {
        ATerm z_10 = NULL;
        if(match_cons(t, sym__2))
          {
            z_10 = ATgetArgument(t, 0);
            if((z_10 != ATgetArgument(t, 1)))
              {
                _fail(ATgetArgument(t, 1));
              }
          }
        else
          _fail(t);
        return(t);
      }
      t = union_1_0(k_1, t);
      u_10 = t;
      t = SSL_table_put(q_10, r_10, u_10);
      t = (ATerm) ATmakeAppl(sym__3, q_10, r_10, s_10);
    }
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm n_79 (ATerm), ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL;
  if(match_cons(t, sym__2))
    {
      c_11 = ATgetArgument(t, 0);
      b_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_11;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm d_11 = NULL,e_11 = NULL;
      if(match_cons(t, sym__2))
        {
          d_11 = ATgetArgument(t, 0);
          e_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, c_11, d_11, e_11);
      t = n_79(t);
      return(t);
    }
    t = map_1_0(l_1, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_11 (ATerm n_11, ATerm t)
  {
    t = SSL_fclose(n_11);
    return(t);
  }
  ATerm q_11 = NULL,r_11 = NULL;
  r_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_11 = ATgetArgument(t, 0);
      {
        ATerm x_21 = t;
        int a_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_11);
            ;
            LocalPopChoice(a_22);
          }
        else
          {
            t = x_21;
            t = t_11(r_11, t);
          }
      }
    }
  else
    {
      t = t_11(r_11, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_11 = NULL;
  t = SSL_stdin_stream();
  u_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_11);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_11 = NULL;
  t = SSL_stdout_stream();
  v_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_11);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_11 = NULL;
  t = SSL_stderr_stream();
  w_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_11);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_22 = ATgetArgument(t, 0);
      ATerm c_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_8 = NULL,o_8 = NULL;
        n_8 = t;
        t = SSL_explode_term(n_8);
        if(match_cons(t, sym__2))
          {
            ATerm l_22 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_22) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm m_22 = ATgetArgument(t, 1);
              if(((ATgetType(m_22) == AT_LIST) && !(ATisEmpty(m_22))))
                {
                  o_8 = ATgetFirst((ATermList) m_22);
                  {
                    ATerm p_22 = (ATerm) ATgetNext((ATermList) m_22);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = o_8;
        if(match_cons(t, sym_stderr_0))
          {
            t = o_8;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = o_8;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = o_8;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(k_22);
      }
    else
      {
        t = d_22;
        {
          ATerm s_22 = t;
          int t_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
              ATerm o_1 (ATerm t)
              {
                ATerm e_12 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    e_12 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = e_12;
                return(t);
              }
              t = _2_0(o_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  b_12 = ATgetArgument(t, 0);
                  c_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(b_12, c_12);
              d_12 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, d_12);
              ;
              LocalPopChoice(t_22);
            }
          else
            {
              t = s_22;
              {
                ATerm f_12 = NULL,h_12 = NULL,i_12 = NULL;
                ATerm p_1 (ATerm t)
                {
                  ATerm j_12 = NULL;
                  j_12 = t;
                  t = SSL_is_string(j_12);
                  return(t);
                }
                t = _2_0(p_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    f_12 = ATgetArgument(t, 0);
                    h_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(f_12, h_12);
                i_12 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, i_12);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_12 = NULL;
      n_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_12, term_w_22);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      {
        ATerm p_8 = NULL;
        p_8 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_8), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = p_8;
        _fail(t);
      }
    }
  k_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(m_12);
  l_12 = t;
  t = k_12;
  t = fclose_0_0(t);
  t = l_12;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_12 = NULL;
      p_12 = t;
      t = SSL_access(p_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(d_23);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = c_23;
      {
        ATerm e_23 = t;
        int f_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_9 = NULL;
            ATerm h_23 = t;
            if((PushChoice() == 0))
              {
                ATerm q_12 = NULL;
                q_12 = t;
                t = SSL_access(q_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = h_23;
              }
            w_9 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_9), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = w_9;
            ;
            LocalPopChoice(f_23);
          }
        else
          {
            t = e_23;
            {
              ATerm p_10 = NULL;
              p_10 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_10), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = p_10;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
  r_12 = t;
  {
    ATerm r_1 (ATerm t)
    {
      ATerm g_11 = NULL;
      g_11 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_11), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
      t = g_11;
      return(t);
    }
    t = if_verbose5_1_0(r_1, t);
    {
      ATerm i_23 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, r_12));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = i_23;
        }
      s_12 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, r_12));
      t = s_12;
      {
        ATerm s_1 (ATerm t)
        {
          ATerm z_11 = NULL;
          z_11 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_11), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
          t = z_11;
          return(t);
        }
        t = if_verbose4_1_0(s_1, t);
        t = read_repository_file_0_0(t);
        {
          ATerm t_1 (ATerm t)
          {
            ATerm u_12 = NULL;
            u_12 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
            t = u_12;
            return(t);
          }
          t = if_verbose6_1_0(t_1, t);
          t_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_23, t_12);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm u_1 (ATerm t)
            {
              ATerm v_12 = NULL;
              v_12 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
              t = v_12;
              return(t);
            }
            t = if_verbose6_1_0(u_1, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, r_12), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_n_23, (ATerm)ATmakeAppl(sym_Imported_1, r_12), (ATerm) ATempty);
            {
              ATerm v_1 (ATerm t)
              {
                ATerm w_12 = NULL;
                w_12 = t;
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
                t = w_12;
                return(t);
              }
              t = if_verbose4_1_0(v_1, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm filter_1_0 (ATerm i_77 (ATerm), ATerm t)
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      {
        ATerm r_23 = t;
        int s_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_1 (ATerm t)
            {
              t = filter_1_0(i_77, t);
              return(t);
            }
            t = Cons_2_0(i_77, z_1, t);
            ;
            LocalPopChoice(s_23);
          }
        else
          {
            t = r_23;
            {
              ATerm a_13 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm t_23 = ATgetFirst((ATermList) t);
                  a_13 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = a_13;
              t = filter_1_0(i_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm j_85 (ATerm), ATerm t)
{
  ATerm d_13 (ATerm t)
  {
    ATerm v_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_85(t);
        t = d_13(t);
        ;
        LocalPopChoice(w_23);
      }
    else
      {
        t = v_23;
      }
    return(t);
  }
  t = d_13(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm x_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm a_24 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_13 = NULL;
            t = eval_config_0_0(t);
            m_13 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), m_13);
            t = m_13;
            ;
            LocalPopChoice(b_24);
          }
        else
          {
            t = a_24;
          }
      }
      ;
      LocalPopChoice(z_23);
    }
  else
    {
      t = x_23;
      {
        ATerm f_24 = t;
        int g_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(g_24);
          }
        else
          {
            t = f_24;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm e_13 = NULL;
  ATerm a_2 (ATerm t)
  {
    ATerm n_13 = NULL;
    n_13 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_13), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
    t = n_13;
    return(t);
  }
  t = if_verbose5_1_0(a_2, t);
  e_13 = t;
  {
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(k_24);
      }
    else
      {
        t = j_24;
        {
          ATerm f_13 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          f_13 = t;
          {
            ATerm b_2 (ATerm t)
            {
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
              t = filter_1_0(xtc_read_0_0, t);
              {
                ATerm l_24 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_24;
                  }
              }
              return(t);
            }
            t = repeat_1_0(b_2, t);
            t = f_13;
          }
        }
      }
    t = e_13;
    {
      ATerm c_2 (ATerm t)
      {
        ATerm e_14 = NULL;
        e_14 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_14), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
        t = e_14;
        return(t);
      }
      t = if_verbose5_1_0(c_2, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_2 (ATerm t)
      {
        ATerm i_14 = NULL;
        i_14 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_14), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
        t = i_14;
        return(t);
      }
      t = if_verbose5_1_0(f_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm o_24 = t;
        int p_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_15 = NULL,g_15 = NULL,h_15 = NULL;
            if(match_cons(t, sym__2))
              {
                a_15 = ATgetArgument(t, 0);
                g_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, a_15));
            {
              ATerm j_2 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((g_15 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((h_15 != NULL) && (h_15 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      h_15 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(j_2, t);
              t = not_null(h_15);
            }
            ;
            LocalPopChoice(p_24);
          }
        else
          {
            t = o_24;
            {
              ATerm n_15 = NULL,p_15 = NULL;
              n_15 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, n_15));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm q_24 = ATgetFirst((ATermList) t);
                  if(match_cons(q_24, sym__2))
                    {
                      ATerm t_24 = ATgetArgument(q_24, 0);
                      p_15 = ATgetArgument(q_24, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm r_24 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = p_15;
            }
          }
        {
          ATerm k_2 (ATerm t)
          {
            ATerm v_15 = NULL;
            v_15 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_15), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
            t = v_15;
            return(t);
          }
          t = if_verbose5_1_0(k_2, t);
        }
      }
      ;
      LocalPopChoice(n_24);
    }
  else
    {
      t = m_24;
      {
        ATerm j_13 = NULL;
        j_13 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), j_13), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_24), j_13), term_u_24);
        {
          ATerm l_2 (ATerm t)
          {
            ATerm y_19 = NULL;
            t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
            {
              ATerm m_2 (ATerm t)
              {
                ATerm b_19 = NULL,x_19 = NULL;
                b_19 = t;
                t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), b_19);
                x_19 = t;
                t = (ATerm) ATmakeAppl(sym__2, b_19, x_19);
                return(t);
              }
              t = map_1_0(m_2, t);
              y_19 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_19), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
              t = y_19;
            }
            return(t);
          }
          t = if_verbose5_1_0(l_2, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL;
  y_13 = t;
  if(match_cons(t, sym_FILE_1))
    {
      z_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_21 = NULL;
        t = y_13;
        t = k_0(t);
        l_21 = t;
        {
          ATerm z_24 = t;
          int b_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(b_25);
            }
          else
            {
              t = z_24;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(z_13, l_21);
          t = (ATerm) ATmakeAppl(sym_FILE_1, z_13);
        }
        ;
        LocalPopChoice(y_24);
      }
    else
      {
        t = x_24;
        {
          ATerm c_25 = t;
          int d_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_22 = NULL;
              t = y_13;
              t = k_0(t);
              x_22 = t;
              {
                ATerm f_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_25 = t;
                    int j_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(j_25);
                      }
                    else
                      {
                        t = g_25;
                        {
                          ATerm k_25 = t;
                          int l_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(l_25);
                            }
                          else
                            {
                              t = k_25;
                              {
                                ATerm m_23 = NULL;
                                m_23 = t;
                                if((z_13 != t))
                                  {
                                    _fail(t);
                                  }
                                t = m_23;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_25;
                  }
                t = SSL_copy(z_13, x_22);
                t = (ATerm) ATmakeAppl(sym_FILE_1, z_13);
              }
              ;
              LocalPopChoice(d_25);
            }
          else
            {
              t = c_25;
              t = y_13;
              t = k_0(t);
              if((z_13 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_13);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm f_14 = NULL,j_14 = NULL,k_14 = NULL;
  if(match_cons(t, sym__2))
    {
      f_14 = ATgetArgument(t, 0);
      j_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_23 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm o_25 = ATgetArgument(t, 0);
            ATerm p_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(f_14, j_14);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_25 = ATgetFirst((ATermList) t);
            o_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_23;
        ;
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
        t = (ATerm) ATempty;
      }
    k_14 = t;
    t = SSL_table_put(f_14, j_14, k_14);
    t = (ATerm) ATmakeAppl(sym__2, f_14, j_14);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm z_77 (ATerm), ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL;
  u_14 = t;
  t = z_77(t);
  v_14 = t;
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(v_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_14 = ATgetFirst((ATermList) t);
        w_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(v_14, (ATerm)ATmakeAppl(sym_Scopes_0), w_14);
    t = x_14;
    {
      ATerm n_2 (ATerm t)
      {
        ATerm y_14 = NULL;
        y_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_14, y_14);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(n_2, t);
      t = u_14;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm t)
{
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_78(t);
      t = v_78(t);
      ;
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      t = v_78(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm y_77 (ATerm), ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
  b_15 = t;
  t = y_77(t);
  c_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_15, term_v_25);
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_25 = ATgetArgument(t, 0);
            ATerm a_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(c_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        t = (ATerm) ATempty;
      }
    d_15 = t;
    t = SSL_table_put(c_15, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(d_15), (ATerm) ATempty));
    t = b_15;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm m_15 = NULL;
  ATerm o_2 (ATerm t)
  {
    t = term_c_18;
    return(t);
  }
  t = begin_scope_1_0(o_2, t);
  {
    ATerm p_2 (ATerm t)
    {
      ATerm o_15 = NULL;
      o_15 = t;
      {
        ATerm b_26 = t;
        int c_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(c_26);
          }
        else
          {
            t = b_26;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((m_15 != NULL) && (m_15 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              m_15 = ATgetFirst((ATermList) t);
            {
              ATerm d_26 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(m_15);
        {
          ATerm q_2 (ATerm t)
          {
            ATerm e_26 = t;
            int f_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_15 = NULL;
                s_15 = t;
                t = SSL_remove(s_15);
                ;
                LocalPopChoice(f_26);
              }
            else
              {
                t = e_26;
              }
            return(t);
          }
          t = map_1_0(q_2, t);
          t = o_15;
          {
            ATerm r_2 (ATerm t)
            {
              t = term_c_18;
              return(t);
            }
            t = end_scope_1_0(r_2, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(d_81, p_2, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm e_81 (ATerm), ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_15 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm i_26 = t;
          int j_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_23 = NULL;
              t = eval_config_0_0(t);
              u_23 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), u_23);
              t = u_23;
              ;
              LocalPopChoice(j_26);
            }
          else
            {
              t = i_26;
            }
          u_15 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, u_15);
        }
        ;
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        t = term_k_26;
      }
    t = e_81(t);
    {
      ATerm t_2 (ATerm t)
      {
        ATerm l_26 = t;
        int m_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
            {
              ATerm n_26 = t;
              int o_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_23 = NULL;
                  t = eval_config_0_0(t);
                  y_23 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), y_23);
                  t = y_23;
                  ;
                  LocalPopChoice(o_26);
                }
              else
                {
                  t = n_26;
                }
            }
            ;
            LocalPopChoice(m_26);
          }
        else
          {
            t = l_26;
            t = term_q_26;
          }
        return(t);
      }
      t = copy_to_1_0(t_2, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(s_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL;
  x_15 = t;
  t = term_v_17;
  t = whoami_0_0(t);
  y_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), y_15), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = x_15;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm a_16 = NULL;
    a_16 = t;
    if(match_string(t, "-k"))
      {
        t = a_16;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = a_16;
      }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm b_16 = NULL,c_16 = NULL;
    b_16 = t;
    t = SSL_string_to_int(b_16);
    c_16 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), c_16);
    t = b_16;
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_r_26;
    return(t);
  }
  t = ArgOption_3_0(u_2, v_2, w_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_2 (ATerm t)
      {
        ATerm g_16 = NULL;
        g_16 = t;
        if(match_string(t, "-S"))
          {
            t = g_16;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = g_16;
          }
        return(t);
      }
      ATerm y_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_w_26;
        return(t);
      }
      ATerm z_2 (ATerm t)
      {
        t = term_x_26;
        return(t);
      }
      t = Option_3_0(x_2, y_2, z_2, t);
      ;
      LocalPopChoice(t_26);
    }
  else
    {
      t = s_26;
      {
        ATerm y_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_3 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm b_3 (ATerm t)
            {
              ATerm h_16 = NULL,i_16 = NULL;
              h_16 = t;
              t = SSL_string_to_int(h_16);
              i_16 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), i_16);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, h_16);
              return(t);
            }
            ATerm c_3 (ATerm t)
            {
              t = term_a_27;
              return(t);
            }
            t = ArgOption_3_0(a_3, b_3, c_3, t);
            ;
            LocalPopChoice(z_26);
          }
        else
          {
            t = y_26;
            {
              ATerm d_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm e_3 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_b_27;
                return(t);
              }
              ATerm k_3 (ATerm t)
              {
                t = term_c_27;
                return(t);
              }
              t = Option_3_0(d_3, e_3, k_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_16 = NULL;
      t = term_v_17;
      t = d_0(t);
      n_16 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_27, term_e_27, n_16);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm q_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_16 = ATgetFirst((ATermList) t);
          m_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_16;
      t = a_0(t);
      t = term_v_17;
      t = c_0(t);
      q_16 = t;
      t = (ATerm) ATinsert(CheckATermList(m_16), q_16);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm s_16 = NULL;
    s_16 = t;
    if(match_string(t, "-o"))
      {
        t = s_16;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = s_16;
      }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    ATerm t_16 = NULL;
    t_16 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), t_16);
    t = (ATerm) ATmakeAppl(sym_Output_1, t_16);
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    t = term_f_27;
    return(t);
  }
  t = ArgOption_3_0(m_3, n_3, o_3, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL;
  if(match_cons(t, sym__3))
    {
      w_16 = ATgetArgument(t, 0);
      x_16 = ATgetArgument(t, 1);
      y_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_16, x_16);
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_27 = ATgetArgument(t, 0);
            ATerm j_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(w_16, x_16);
        ;
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
        t = (ATerm) ATempty;
      }
    z_16 = t;
    t = SSL_table_put(w_16, x_16, (ATerm) ATinsert(CheckATermList(z_16), y_16));
    t = (ATerm) ATmakeAppl(sym__3, w_16, x_16, y_16);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_17 = NULL;
      t = term_v_17;
      t = j_0(t);
      l_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_27, term_e_27, l_17);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm p_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_17 = ATgetFirst((ATermList) t);
          i_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_17;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_17 = ATgetFirst((ATermList) t);
          k_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_17;
      t = h_0(t);
      t = j_17;
      t = i_0(t);
      p_17 = t;
      t = (ATerm) ATinsert(CheckATermList(k_17), p_17);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm r_17 = NULL;
    r_17 = t;
    if(match_string(t, "-i"))
      {
        t = r_17;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = r_17;
      }
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    ATerm t_17 = NULL;
    t_17 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), t_17);
    t = (ATerm) ATmakeAppl(sym_Input_1, t_17);
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    t = term_k_27;
    return(t);
  }
  t = ArgOption_3_0(r_3, s_3, t_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_17 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_17;
  t = whoami_0_0(t);
  u_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), u_17));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_24 = NULL;
        t = eval_config_0_0(t);
        c_24 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_24);
        t = c_24;
        ;
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm t)
{
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_76(t);
      ;
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
      {
        ATerm x_17 = NULL,y_17 = NULL,b_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_17 = ATgetFirst((ATermList) t);
            y_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_17;
        t = foldr_2_0(f_76, g_76, t);
        b_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_17, b_18);
        t = g_76(t);
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
  ATerm e_18 = NULL,d_24 = NULL,e_24 = NULL;
  t = times_0_0(t);
  d_24 = t;
  t = SSL_explode_term(d_24);
  if(match_cons(t, sym__2))
    {
      ATerm p_27 = ATgetArgument(t, 0);
      e_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_24;
  {
    ATerm u_3 (ATerm t)
    {
      t = term_u_26;
      return(t);
    }
    ATerm w_3 (ATerm t)
    {
      ATerm h_24 = NULL,i_24 = NULL;
      if(match_cons(t, sym__2))
        {
          h_24 = ATgetArgument(t, 0);
          i_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm q_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(h_24, i_24);
            ;
            LocalPopChoice(r_27);
          }
        else
          {
            t = q_27;
            t = SSL_addr(h_24, i_24);
          }
      }
      return(t);
    }
    t = foldr_2_0(u_3, w_3, t);
    e_18 = t;
    t = SSL_TicksToSeconds(e_18);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
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
  {
    ATerm s_27 = t;
    int t_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_18;
        if((q_18 != t))
          {
            _fail(t);
          }
        t = p_18;
        ;
        LocalPopChoice(t_27);
      }
    else
      {
        t = s_27;
        t = p_18;
        {
          ATerm u_27 = t;
          int v_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_18, r_18);
              ;
              LocalPopChoice(v_27);
            }
          else
            {
              t = u_27;
              t = SSL_gtr(q_18, r_18);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_18, r_18);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_78 (ATerm), ATerm t)
{
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_18 = NULL,w_18 = NULL;
      u_18 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm y_27 = t;
        int z_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_24 = NULL;
            t = eval_config_0_0(t);
            s_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), s_24);
            t = s_24;
            ;
            LocalPopChoice(z_27);
          }
        else
          {
            t = y_27;
          }
        w_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_18, term_z_6);
        t = geq_0_0(t);
        t = u_18;
        t = z_78(t);
      }
      ;
      LocalPopChoice(x_27);
    }
  else
    {
      t = w_27;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm z_18 = NULL,a_19 = NULL;
    t = run_time_0_0(t);
    z_18 = t;
    t = term_v_17;
    t = whoami_0_0(t);
    a_19 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), z_18), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), a_19));
    t = (ATerm) ATmakeAppl(sym__2, term_u_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_28), z_18), term_g_7), a_19));
    return(t);
  }
  t = if_verbose1_1_0(y_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm f_83 (ATerm), ATerm t)
{
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm d_28 = t;
        int e_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_24 = NULL;
            t = eval_config_0_0(t);
            w_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), w_24);
            t = w_24;
            ;
            LocalPopChoice(e_28);
          }
        else
          {
            t = d_28;
          }
      }
      ;
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
      {
        ATerm z_3 (ATerm t)
        {
          ATerm f_28 = t;
          int g_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
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
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(i_28);
                  }
                else
                  {
                    t = h_28;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(z_3, t);
      }
    }
  t = f_83(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_19 = ATgetFirst((ATermList) t);
      d_19 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_19 = NULL,i_19 = NULL;
        t = d_19;
        t = g_0(t);
        h_19 = t;
        t = c_19;
        t = e_0(t);
        i_19 = t;
        t = d_19;
        {
          ATerm a_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(h_19), i_19);
            return(t);
          }
          t = reverse_acc_2_0(e_0, a_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_17;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm m_62 (ATerm), ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL;
  m_19 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_19);
  j_19 = t;
  t = k_19;
  t = m_62(t);
  l_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, l_19), j_19);
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
            ATerm a_25 = NULL;
            t = eval_config_0_0(t);
            a_25 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), a_25);
            t = a_25;
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
        ATerm b_4 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(b_4, t);
      }
    }
  t = term_n_28;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm f_4 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, f_4, t);
    {
      ATerm g_4 (ATerm t)
      {
        ATerm p_19 = NULL;
        p_19 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, p_19), term_o_28);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(g_4, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm n_62 (ATerm), ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
  t_19 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      r_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_19);
  q_19 = t;
  t = r_19;
  t = n_62(t);
  s_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, s_19), q_19);
  return(t);
}
ATerm fetch_1_0 (ATerm z_69 (ATerm), ATerm t)
{
  ATerm w_19 (ATerm t)
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(z_69, _id, t);
        ;
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
        t = Cons_2_0(_id, w_19, t);
      }
    return(t);
  }
  t = w_19(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL;
  z_19 = t;
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_19;
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
            t = z_19;
          }
        ;
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
        t = (ATerm) ATinsert(ATempty, z_19);
      }
    a_20 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), a_20);
    t = z_19;
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
        ATerm e_25 = NULL;
        t = eval_config_0_0(t);
        e_25 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_25);
        t = e_25;
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
ATerm concat_0_0 (ATerm t)
{
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_28);
    }
  else
    {
      t = x_28;
      {
        ATerm g_20 = NULL,h_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_20 = ATgetFirst((ATermList) t);
            h_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_20;
        {
          ATerm h_4 (ATerm t)
          {
            t = h_20;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(h_4, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm f_70 (ATerm), ATerm t)
{
  ATerm o_20 (ATerm t)
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, o_20, t);
        ;
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_70(t);
      }
    return(t);
  }
  t = o_20(t);
  return(t);
}
ATerm _2_0 (ATerm x_55 (ATerm), ATerm y_55 (ATerm), ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL;
  u_20 = t;
  if(match_cons(t, sym__2))
    {
      q_20 = ATgetArgument(t, 0);
      r_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_20);
  p_20 = t;
  t = q_20;
  t = x_55(t);
  s_20 = t;
  t = r_20;
  t = y_55(t);
  t_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, s_20, t_20), p_20);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm y_20 = NULL;
  ATerm i_4 (ATerm t)
  {
    ATerm z_20 = NULL;
    z_20 = t;
    t = SSL_explode_string(z_20);
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    ATerm a_21 = NULL;
    a_21 = t;
    t = SSL_explode_string(a_21);
    return(t);
  }
  t = _2_0(i_4, j_4, t);
  {
    ATerm b_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_21 = NULL,d_21 = NULL;
        if(match_cons(t, sym__2))
          {
            c_21 = ATgetArgument(t, 0);
            d_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_21;
        {
          ATerm l_4 (ATerm t)
          {
            t = d_21;
            return(t);
          }
          t = at_end_1_0(l_4, t);
        }
        ;
        LocalPopChoice(c_29);
      }
    else
      {
        t = b_29;
        {
          ATerm h_25 = NULL,i_25 = NULL;
          h_25 = t;
          t = SSL_explode_term(h_25);
          if(match_cons(t, sym__2))
            {
              ATerm d_29 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_29) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              i_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_25;
          t = concat_0_0(t);
        }
      }
    y_20 = t;
    t = SSL_implode_string(y_20);
  }
  return(t);
}
ATerm map_1_0 (ATerm o_69 (ATerm), ATerm t)
{
  ATerm i_21 (ATerm t)
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
        t = Cons_2_0(o_69, i_21, t);
      }
    return(t);
  }
  t = i_21(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_21 = NULL;
      o_21 = t;
      t = SSL_is_string(o_21);
      ;
      LocalPopChoice(h_29);
    }
  else
    {
      t = g_29;
      {
        ATerm i_29 = t;
        int j_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_4 (ATerm t)
            {
              ATerm k_29 = t;
              int l_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(l_29);
                }
              else
                {
                  t = k_29;
                }
              return(t);
            }
            t = map_1_0(o_4, t);
            ;
            LocalPopChoice(j_29);
          }
        else
          {
            t = i_29;
            {
              ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
              s_21 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_21 = ATgetArgument(t, 0);
                  t = t_21;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_21 = ATgetArgument(t, 0);
                      t = t_21;
                      {
                        ATerm m_29 = t;
                        int n_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), t_21);
                            {
                              ATerm o_29 = t;
                              int p_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm y_25 = NULL;
                                  t = eval_config_0_0(t);
                                  y_25 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), t_21, y_25);
                                  t = y_25;
                                  ;
                                  LocalPopChoice(p_29);
                                }
                              else
                                {
                                  t = o_29;
                                }
                            }
                            ;
                            LocalPopChoice(n_29);
                          }
                        else
                          {
                            t = m_29;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_21), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = t_21;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_21 = NULL,z_21 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_21 = ATgetArgument(t, 0);
                          u_21 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_21;
                      t = eval_config_0_0(t);
                      y_21 = t;
                      t = u_21;
                      t = eval_config_0_0(t);
                      z_21 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_21, z_21);
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
  ATerm q_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm r_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_u_29;
        return(t);
      }
      ATerm s_4 (ATerm t)
      {
        t = term_v_29;
        return(t);
      }
      t = Option_3_0(q_4, r_4, s_4, t);
      ;
      LocalPopChoice(r_29);
    }
  else
    {
      t = q_29;
      {
        ATerm t_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm x_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_w_29;
          return(t);
        }
        ATerm y_4 (ATerm t)
        {
          t = term_x_29;
          return(t);
        }
        t = Option_3_0(t_4, x_4, y_4, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm g_57 (ATerm), ATerm h_57 (ATerm), ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL;
  j_22 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_22 = ATgetFirst((ATermList) t);
      g_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_22);
  e_22 = t;
  t = f_22;
  t = g_57(t);
  h_22 = t;
  t = g_22;
  t = h_57(t);
  i_22 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(i_22), h_22), e_22);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_85 (ATerm), ATerm t)
{
  ATerm n_22 = NULL;
  n_22 = t;
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_30;
        t = d_85(t);
        ;
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
      }
    t = n_22;
    {
      ATerm b_5 (ATerm t)
      {
        ATerm o_22 = NULL;
        o_22 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_22);
        t = (ATerm) ATmakeAppl(sym_Program_1, o_22);
        return(t);
      }
      ATerm c_5 (ATerm t)
      {
        ATerm b_30 = t;
        int c_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_30 = t;
            int e_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(e_30);
              }
            else
              {
                t = d_30;
                t = d_85(t);
                t = Cons_2_0(_id, c_5, t);
              }
            ;
            LocalPopChoice(c_30);
          }
        else
          {
            t = b_30;
            {
              ATerm q_22 = NULL,r_22 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_22 = ATgetFirst((ATermList) t);
                  r_22 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_22), (ATerm) ATmakeAppl(sym_Undefined_1, q_22));
            }
          }
        return(t);
      }
      t = Cons_2_0(b_5, c_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm c_85 (ATerm), ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
  y_22 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = y_22;
  {
    ATerm g_5 (ATerm t)
    {
      ATerm f_30 = t;
      int g_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_85(t);
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
                ATerm i_5 (ATerm t)
                {
                  ATerm b_23 = NULL;
                  b_23 = t;
                  if(match_string(t, "--help"))
                    {
                      t = b_23;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = b_23;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = b_23;
                        }
                    }
                  return(t);
                }
                ATerm j_5 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_j_30;
                  return(t);
                }
                ATerm k_5 (ATerm t)
                {
                  t = term_k_30;
                  return(t);
                }
                t = Option_3_0(i_5, j_5, k_5, t);
                ;
                LocalPopChoice(i_30);
              }
            else
              {
                t = h_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_5, t);
    {
      ATerm l_30 = t;
      int m_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_23 = NULL;
          g_23 = t;
          {
            ATerm n_30 = t;
            int o_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = g_23;
                {
                  ATerm p_30 = t;
                  int q_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm r_30 = t;
                        int s_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm p_26 = NULL;
                            t = eval_config_0_0(t);
                            p_26 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), p_26);
                            t = p_26;
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
                      {
                        ATerm n_5 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(n_5, t);
                      }
                    }
                  t = g_23;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(o_30);
              }
            else
              {
                t = n_30;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm t_30 = t;
                  int u_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_26 = NULL;
                      t = eval_config_0_0(t);
                      v_26 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), v_26);
                      t = v_26;
                      ;
                      LocalPopChoice(u_30);
                    }
                  else
                    {
                      t = t_30;
                    }
                  t = g_23;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(m_30);
        }
      else
        {
          t = l_30;
          {
            ATerm v_30 = t;
            int w_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_5 (ATerm t)
                {
                  ATerm p_5 (ATerm t)
                  {
                    if(((z_22 != NULL) && (z_22 != t)))
                      _fail(t);
                    else
                      z_22 = t;
                    return(t);
                  }
                  t = Undefined_1_0(p_5, t);
                  return(t);
                }
                t = fetch_1_0(o_5, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(z_22)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_u_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_22)), term_x_30));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(w_30);
              }
            else
              {
                t = v_30;
              }
          }
        }
      a_23 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = a_23;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t)
{
  ATerm j_23 = NULL;
  t = parse_options_1_0(h_83, t);
  j_23 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), j_23);
  t = j_23;
  t = j_83(t);
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_83, t);
        ;
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
        {
          ATerm a_31 = t;
          int b_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_83(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(b_31);
            }
          else
            {
              t = a_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm io_pp_c_0_0 (ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm c_31 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = input_option_0_0(t);
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
              t = output_option_0_0(t);
              ;
              LocalPopChoice(f_31);
            }
          else
            {
              t = e_31;
              {
                ATerm g_31 = t;
                int h_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_5 (ATerm t)
                    {
                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                        _fail(t);
                      return(t);
                    }
                    ATerm w_5 (ATerm t)
                    {
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                      t = term_i_31;
                      return(t);
                    }
                    ATerm x_5 (ATerm t)
                    {
                      t = term_j_31;
                      return(t);
                    }
                    t = Option_3_0(v_5, w_5, x_5, t);
                    ;
                    LocalPopChoice(h_31);
                  }
                else
                  {
                    t = g_31;
                    {
                      ATerm k_31 = t;
                      int l_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = verbose_option_0_0(t);
                          ;
                          LocalPopChoice(l_31);
                        }
                      else
                        {
                          t = k_31;
                          t = keep_option_0_0(t);
                        }
                    }
                  }
              }
            }
        }
      }
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    ATerm y_5 (ATerm t)
    {
      ATerm m_31 = t;
      int n_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_31 = t;
          int p_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(p_31);
            }
          else
            {
              t = o_31;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(n_31);
          {
            ATerm z_5 (ATerm t)
            {
              t = term_q_31;
              return(t);
            }
            ATerm g_6 (ATerm t)
            {
              ATerm k_23 = NULL;
              t = term_r_31;
              t = xtc_find_0_0(t);
              t = remove_extension_0_0(t);
              k_23 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, k_23), term_s_31);
              return(t);
            }
            t = xtc_transform_file_2_0(z_5, g_6, t);
          }
        }
      else
        {
          t = m_31;
          {
            ATerm h_6 (ATerm t)
            {
              t = term_q_31;
              return(t);
            }
            ATerm i_6 (ATerm t)
            {
              ATerm l_23 = NULL;
              t = term_r_31;
              t = xtc_find_0_0(t);
              t = remove_extension_0_0(t);
              l_23 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, l_23), term_s_31);
              return(t);
            }
            t = xtc_transform_term_2_0(h_6, i_6, t);
          }
        }
      {
        ATerm t_31 = t;
        int u_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_31 = t;
            int w_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(w_31);
              }
            else
              {
                t = v_31;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(u_31);
            {
              ATerm l_6 (ATerm t)
              {
                t = term_x_31;
                return(t);
              }
              t = xtc_transform_file_2_0(l_6, pass_verbose_0_0, t);
            }
          }
        else
          {
            t = t_31;
            {
              ATerm m_6 (ATerm t)
              {
                t = term_x_31;
                return(t);
              }
              t = xtc_transform_term_2_0(m_6, pass_verbose_0_0, t);
            }
          }
        {
          ATerm y_31 = t;
          int z_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_32 = t;
              int b_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FILE_1_0(_id, t);
                  ;
                  LocalPopChoice(b_32);
                }
              else
                {
                  t = a_32;
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                }
              LocalPopChoice(z_31);
              {
                ATerm p_6 (ATerm t)
                {
                  t = term_c_32;
                  return(t);
                }
                t = xtc_transform_file_2_0(p_6, pass_verbose_0_0, t);
              }
            }
          else
            {
              t = y_31;
              {
                ATerm u_6 (ATerm t)
                {
                  t = term_c_32;
                  return(t);
                }
                t = xtc_transform_term_2_0(u_6, pass_verbose_0_0, t);
              }
            }
        }
      }
      return(t);
    }
    t = xtc_io_1_0(y_5, t);
    return(t);
  }
  t = option_wrap_4_0(q_5, default_usage_0_0, _id, r_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_c_0_0(t);
  return(t);
}
