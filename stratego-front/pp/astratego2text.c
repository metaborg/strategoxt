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
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_q_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_t_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_h_26;
ATerm term_b_26;
ATerm term_r_25;
ATerm term_a_25;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_y_23;
ATerm term_h_23;
ATerm term_e_22;
ATerm term_c_22;
ATerm term_t_20;
ATerm term_i_20;
ATerm term_d_17;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_p_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_k_13;
ATerm term_g_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_r_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_t_10;
ATerm term_l_10;
ATerm term_f_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_p_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_e_9;
ATerm term_b_9;
ATerm term_w_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_q_8;
ATerm term_l_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_c_8;
ATerm term_z_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_p_7;
ATerm term_n_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_e_6;
ATerm term_c_6;
ATerm term_y_5;
ATerm term_x_5;
void init_constant_terms (void)
{
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_6, term_m_6, term_n_6);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_6, term_q_6, term_r_6);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_6, term_u_6, term_v_6);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_6, term_y_6, term_b_7);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_7, term_i_7, term_j_7);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_7, term_n_7, term_p_7);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_7, term_t_7, term_u_7);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_7, term_x_7, term_z_7);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_8, term_f_8, term_g_8);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_8, term_s_8, term_t_8);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_8, term_b_9, term_e_9);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_9, term_i_9, term_k_9);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_9, term_u_9, term_v_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_9, term_f_10, term_l_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_10, term_w_10, term_x_10);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_11, term_e_11, term_f_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_11, term_j_11, term_k_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_n_11, term_o_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_r_11, term_s_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_11, term_x_11, term_y_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_12, term_f_12, term_g_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_12, term_j_12, term_r_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_x_12, term_y_12);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_e_13, term_g_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_q_13, term_r_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_z_13, term_b_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_h_14, term_k_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_t_14, term_u_14);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_24);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym__3, term_j_27, term_k_27, term_h_16);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm read_from_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm c_72 (ATerm), ATerm);
ATerm c_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm);
ATerm e_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm r_70 (ATerm), ATerm);
ATerm assert_1_0 (ATerm n_86 (ATerm), ATerm);
ATerm k_5 (ATerm v_4, ATerm);
ATerm l_5 (ATerm x_4, ATerm y_4, ATerm z_4, ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm p_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm m_68 (ATerm), ATerm);
ATerm if_verbose5_1_0 (ATerm v_87 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm u_87 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm w_87 (ATerm), ATerm);
ATerm union_1_0 (ATerm a_80 (ATerm), ATerm);
ATerm v_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm q_9 (ATerm j_9, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm a_1 (ATerm);
ATerm d_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm p_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm j_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm m_1 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm w_1 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm k_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm j_86 (ATerm), ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm o_89 (ATerm), ATerm);
ATerm i_2 (ATerm);
ATerm xtc_io_1_0 (ATerm p_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm v_2 (ATerm);
ATerm x_2 (ATerm);
ATerm z_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm f_3 (ATerm);
ATerm i_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_87 (ATerm), ATerm);
ATerm j_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm k_3 (ATerm);
ATerm need_help_1_0 (ATerm q_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm t_68 (ATerm), ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm u_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm _2_0 (ATerm y_58 (ATerm), ATerm z_58 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm v_75 (ATerm), ATerm);
ATerm v_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm e_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm o_93 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm parse_options_1_0 (ATerm n_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm);
ATerm w_4 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm m_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm w_5 (ATerm);
ATerm astratego2text_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL;
  b_1 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_x_5;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          c_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(c_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm c_72 (ATerm), ATerm t)
{
  ATerm e_1 = NULL,n_1 = NULL,o_1 = NULL;
  if(match_cons(t, sym__2))
    {
      e_1 = ATgetArgument(t, 0);
      n_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_1, term_y_5);
  t = open_stream_0_0(t);
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_1, n_1);
  t = c_72(t);
  t = fclose_0_0(t);
  t = n_1;
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm v_1 = NULL,x_1 = NULL,y_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_5 = ATgetArgument(t, 0);
      if(match_cons(z_5, sym_Stream_1))
        {
          v_1 = ATgetArgument(z_5, 0);
        }
      else
        _fail(t);
      x_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(v_1, x_1);
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_1);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm p_1 = NULL,u_1 = NULL;
  p_1 = t;
  t = xtc_new_file_0_0(t);
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_1, p_1);
  t = WriteToFile_1_0(c_0, t);
  t = SSL_close_file(u_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, u_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(l_90, m_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm e_0 (ATerm t)
{
  ATerm a_2 = NULL;
  a_2 = t;
  t = SSL_explode_string(a_2);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm z_1 = NULL;
  t = map_1_0(e_0, t);
  t = concat_0_0(t);
  z_1 = t;
  t = SSL_implode_string(z_1);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_2 = NULL,y_2 = NULL,a_3 = NULL,c_3 = NULL;
  w_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      y_2 = ATgetArgument(t, 0);
      {
        ATerm w_0 = NULL;
        t = SSL_int_to_string(y_2);
        w_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_6), w_0), term_c_6);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm l_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          y_2 = ATgetArgument(t, 0);
          a_3 = ATgetArgument(t, 1);
          c_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(a_3);
      l_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_3), term_i_6), l_1), term_h_6), y_2);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm g_3 = NULL;
  ATerm n_0 (ATerm t)
  {
    t = i_76(t);
    if(((g_3 != NULL) && (g_3 != t)))
      _fail(t);
    else
      g_3 = t;
    return(t);
  }
  t = fetch_1_0(n_0, t);
  t = not_null(g_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm h_3 = NULL;
  h_3 = t;
  {
    ATerm j_6 = t;
    int k_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_14), term_l_14), term_e_14), term_w_13), term_k_13), term_z_12), term_v_12), term_h_12), term_z_11), term_t_11), term_p_11), term_l_11), term_h_11), term_z_10), term_t_10), term_w_9), term_l_9), term_g_9), term_u_8), term_l_8), term_c_8), term_v_7), term_r_7), term_k_7), term_c_7), term_w_6), term_s_6), term_o_6);
        {
          ATerm o_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm w_14 = ATgetArgument(t, 0);
                if((h_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm x_14 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(o_0, t);
        }
        ;
        LocalPopChoice(k_6);
      }
    else
      {
        t = j_6;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, h_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm m_3 = NULL;
  m_3 = t;
  {
    ATerm y_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_3 = NULL,b_2 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm b_15 = ATgetArgument(t, 0);
            u_3 = ATgetArgument(t, 1);
            {
              ATerm e_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = u_3;
        {
          ATerm j_15 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_15;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          b_2 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_2), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_k_15, (ATerm) ATinsert(ATinsert(ATempty, b_2), term_l_15));
        }
        ;
        LocalPopChoice(a_15);
      }
    else
      {
        t = y_14;
      }
    t = m_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm r_70 (ATerm), ATerm t)
{
  ATerm z_3 = NULL,c_4 = NULL;
  z_3 = t;
  t = fork_0_0(t);
  c_4 = t;
  {
    ATerm n_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = z_3;
        t = r_70(t);
        ;
        LocalPopChoice(o_15);
      }
    else
      {
        t = n_15;
        t = SSL_waitpid(c_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm p_15 = ATgetArgument(t, 0);
            if(((ATgetType(p_15) != AT_INT) || (ATgetInt((ATermInt) p_15) != 0)))
              _fail(t);
            {
              ATerm t_15 = ATgetArgument(t, 1);
            }
            {
              ATerm u_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = z_3;
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm n_86 (ATerm), ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL;
  if(match_cons(t, sym__2))
    {
      h_4 = ATgetArgument(t, 0);
      i_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_86(t);
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_4, h_4, i_4);
  t = table_push_0_0(t);
  {
    ATerm x_15 = t;
    int y_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(n_4, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(y_15);
      }
    else
      {
        t = x_15;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_4 = ATgetFirst((ATermList) t);
        p_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(n_4, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(p_4), (ATerm) ATinsert(CheckATermList(o_4), h_4)));
    t = (ATerm) ATmakeAppl(sym__2, h_4, i_4);
  }
  return(t);
}
ATerm k_5 (ATerm v_4, ATerm t)
{
  t = v_4;
  {
    ATerm a_16 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_16 = ATgetArgument(t, 0);
            ATerm d_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_16;
      }
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
    t = (ATerm) ATmakeAppl(sym__2, v_4, term_y_5);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm l_5 (ATerm x_4, ATerm y_4, ATerm z_4, ATerm t)
{
  t = SSL_open_file(x_4, y_4);
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm e_5 = NULL,g_5 = NULL,h_5 = NULL;
  e_5 = t;
  if(match_cons(t, sym__2))
    {
      g_5 = ATgetArgument(t, 0);
      h_5 = ATgetArgument(t, 1);
      {
        ATerm e_16 = t;
        int f_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_5(e_5, t);
            ;
            LocalPopChoice(f_16);
          }
        else
          {
            t = e_16;
            t = l_5(g_5, h_5, e_5, t);
          }
      }
    }
  else
    {
      t = k_5(e_5, t);
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
  ATerm v_5 = NULL;
  t = term_h_16;
  t = new_0_0(t);
  v_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_5, term_i_16);
  t = conc_strings_0_0(t);
  {
    ATerm j_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_6 = NULL;
        a_6 = t;
        t = SSL_access(a_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(k_16);
      }
    else
      {
        t = j_16;
      }
  }
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = term_l_16;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm f_6 = NULL;
  t = new_file_0_0(t);
  f_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_6, term_y_5);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, f_6, term_h_16);
  t = assert_1_0(p_0, t);
  t = f_6;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL;
  z_6 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm d_4 = NULL,j_4 = NULL,a_5 = NULL,b_5 = NULL;
      t = z_6;
      t = xtc_new_file_0_0(t);
      d_4 = t;
      t = m_0(t);
      j_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_4, (ATerm) ATinsert(ATinsert(ATempty, d_4), term_m_16));
      {
        ATerm q_16 = t;
        int r_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm t_16 = ATgetArgument(t, 0);
                ATerm v_16 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = j_4;
            {
              ATerm q_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, d_4), term_m_16);
                return(t);
              }
              t = at_end_1_0(q_0, t);
            }
            ;
            LocalPopChoice(r_16);
          }
        else
          {
            t = q_16;
            {
              ATerm u_4 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, j_4, (ATerm) ATinsert(ATinsert(ATempty, d_4), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm c_17 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) c_17) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  u_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_4;
              t = concat_0_0(t);
            }
          }
        a_5 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        b_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_5, a_5);
        {
          ATerm r_0 (ATerm t)
          {
            t = SSL_execvp(b_5, a_5);
            return(t);
          }
          t = fork_and_wait_1_0(r_0, t);
          t = SSL_close_file(d_4);
          t = (ATerm) ATmakeAppl(sym_FILE_1, d_4);
        }
      }
    }
  else
    {
      ATerm n_5 = NULL,o_5 = NULL,d_6 = NULL,g_6 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_7;
      t = xtc_new_file_0_0(t);
      n_5 = t;
      t = m_0(t);
      o_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_5), term_m_16), a_7), term_d_17));
      {
        ATerm e_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm m_17 = ATgetArgument(t, 0);
                ATerm s_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_5;
            {
              ATerm s_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_5), term_m_16), a_7), term_d_17);
                return(t);
              }
              t = at_end_1_0(s_0, t);
            }
            ;
            LocalPopChoice(l_17);
          }
        else
          {
            t = e_17;
            {
              ATerm b_6 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, o_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_5), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), a_7), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm t_17 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) t_17) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  b_6 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_6;
              t = concat_0_0(t);
            }
          }
        d_6 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        g_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_6, d_6);
        {
          ATerm t_0 (ATerm t)
          {
            t = SSL_execvp(g_6, d_6);
            return(t);
          }
          t = fork_and_wait_1_0(t_0, t);
          t = SSL_close_file(n_5);
          t = (ATerm) ATmakeAppl(sym_FILE_1, n_5);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm m_68 (ATerm), ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
  g_7 = t;
  if(match_cons(t, sym_FILE_1))
    {
      e_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_7);
  d_7 = t;
  t = e_7;
  t = m_68(t);
  f_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, f_7), d_7);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  ATerm v_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_7 = NULL,o_7 = NULL;
      m_7 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm z_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_7 = NULL;
            t = eval_config_0_0(t);
            q_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), q_7);
            t = q_7;
            ;
            LocalPopChoice(a_18);
          }
        else
          {
            t = z_17;
          }
        o_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_7, term_q_13);
        t = geq_0_0(t);
        t = m_7;
        t = v_87(t);
      }
      ;
      LocalPopChoice(y_17);
    }
  else
    {
      t = v_17;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_87 (ATerm), ATerm t)
{
  ATerm b_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_7 = NULL,a_8 = NULL;
      y_7 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm f_18 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_8 = NULL;
            t = eval_config_0_0(t);
            k_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_8);
            t = k_8;
            ;
            LocalPopChoice(g_18);
          }
        else
          {
            t = f_18;
          }
        a_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_8, term_i_9);
        t = geq_0_0(t);
        t = y_7;
        t = u_87(t);
      }
      ;
      LocalPopChoice(c_18);
    }
  else
    {
      t = b_18;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_8 = NULL,d_8 = NULL;
      b_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm j_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_9 = NULL;
            t = eval_config_0_0(t);
            c_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), c_9);
            t = c_9;
            ;
            LocalPopChoice(s_18);
          }
        else
          {
            t = j_18;
          }
        d_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_8, term_y_6);
        t = geq_0_0(t);
        t = b_8;
        t = w_87(t);
      }
      ;
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
    }
  return(t);
}
ATerm union_1_0 (ATerm a_80 (ATerm), ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL;
  if(match_cons(t, sym__2))
    {
      h_8 = ATgetArgument(t, 0);
      i_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_8;
  {
    ATerm j_8 (ATerm t)
    {
      ATerm t_18 = t;
      int y_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = i_8;
          ;
          LocalPopChoice(y_18);
        }
      else
        {
          t = t_18;
          {
            ATerm b_19 = t;
            int c_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_9 = NULL,f_9 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    d_9 = ATgetFirst((ATermList) t);
                    f_9 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = i_8;
                {
                  ATerm u_0 (ATerm t)
                  {
                    ATerm n_9 = NULL;
                    n_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, d_9, n_9);
                    t = a_80(t);
                    return(t);
                  }
                  t = fetch_1_0(u_0, t);
                  t = f_9;
                  t = j_8(t);
                }
                ;
                LocalPopChoice(c_19);
              }
            else
              {
                t = b_19;
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
ATerm v_0 (ATerm t)
{
  ATerm v_8 = NULL;
  if(match_cons(t, sym__2))
    {
      v_8 = ATgetArgument(t, 0);
      if((v_8 != ATgetArgument(t, 1)))
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
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL,r_8 = NULL;
  if(match_cons(t, sym__3))
    {
      m_8 = ATgetArgument(t, 0);
      n_8 = ATgetArgument(t, 1);
      o_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_8, n_8);
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_19 = ATgetArgument(t, 0);
            ATerm i_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(m_8, n_8);
        ;
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = (ATerm) ATempty;
      }
    p_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_8, o_8);
    t = union_1_0(v_0, t);
    r_8 = t;
    t = SSL_table_put(m_8, n_8, r_8);
    t = (ATerm) ATmakeAppl(sym__3, m_8, n_8, o_8);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL;
  if(match_cons(t, sym__2))
    {
      y_8 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_8;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm z_8 = NULL,a_9 = NULL;
      if(match_cons(t, sym__2))
        {
          z_8 = ATgetArgument(t, 0);
          a_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, y_8, z_8, a_9);
      t = y_87(t);
      return(t);
    }
    t = map_1_0(x_0, t);
  }
  return(t);
}
ATerm q_9 (ATerm j_9, ATerm t)
{
  t = SSL_fclose(j_9);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_9 = NULL,o_9 = NULL;
  o_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_9 = ATgetArgument(t, 0);
      {
        ATerm j_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_9);
            ;
            LocalPopChoice(k_19);
          }
        else
          {
            t = j_19;
            t = q_9(o_9, t);
          }
      }
    }
  else
    {
      t = q_9(o_9, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_9 = NULL;
  t = SSL_stdin_stream();
  r_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_9);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_9 = NULL;
  t = SSL_stdout_stream();
  s_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_9);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_9 = NULL;
  t = SSL_stderr_stream();
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_9);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm b_10 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      b_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_10;
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm g_10 = NULL;
  g_10 = t;
  t = SSL_is_string(g_10);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_19 = ATgetArgument(t, 0);
      ATerm n_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_12 = NULL,k_12 = NULL;
        b_12 = t;
        t = SSL_explode_term(b_12);
        if(match_cons(t, sym__2))
          {
            ATerm t_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_19) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm u_19 = ATgetArgument(t, 1);
              if(((ATgetType(u_19) == AT_LIST) && !(ATisEmpty(u_19))))
                {
                  k_12 = ATgetFirst((ATermList) u_19);
                  {
                    ATerm x_19 = (ATerm) ATgetNext((ATermList) u_19);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = k_12;
        if(match_cons(t, sym_stderr_0))
          {
            t = k_12;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = k_12;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = k_12;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(s_19);
      }
    else
      {
        t = o_19;
        {
          ATerm y_19 = t;
          int z_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL;
              t = _2_0(y_0, _id, t);
              if(match_cons(t, sym__2))
                {
                  y_9 = ATgetArgument(t, 0);
                  z_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(y_9, z_9);
              a_10 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, a_10);
              ;
              LocalPopChoice(z_19);
            }
          else
            {
              t = y_19;
              {
                ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL;
                t = _2_0(z_0, _id, t);
                if(match_cons(t, sym__2))
                  {
                    c_10 = ATgetArgument(t, 0);
                    d_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(c_10, d_10);
                e_10 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, e_10);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_10 = NULL;
      k_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_10, term_i_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(b_20);
    }
  else
    {
      t = a_20;
      {
        ATerm q_12 = NULL;
        q_12 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_12), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = q_12;
        _fail(t);
      }
    }
  h_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(j_10);
  i_10 = t;
  t = h_10;
  t = fclose_0_0(t);
  t = i_10;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_10 = NULL;
      m_10 = t;
      t = SSL_access(m_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(k_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = j_20;
      {
        ATerm n_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_13 = NULL;
            ATerm r_20 = t;
            if((PushChoice() == 0))
              {
                ATerm n_10 = NULL;
                n_10 = t;
                t = SSL_access(n_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_20;
              }
            c_13 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_13), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = c_13;
            ;
            LocalPopChoice(q_20);
          }
        else
          {
            t = n_20;
            {
              ATerm p_13 = NULL;
              p_13 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_13), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = p_13;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm u_13 = NULL;
  u_13 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_13), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
  t = u_13;
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm a_14 = NULL;
  a_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, a_14), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
  t = a_14;
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm r_10 = NULL;
  r_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = r_10;
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm s_10 = NULL;
  s_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
  t = s_10;
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm u_10 = NULL;
  u_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = u_10;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
  o_10 = t;
  t = if_verbose5_1_0(a_1, t);
  {
    ATerm s_20 = t;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, o_10));
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_20;
      }
    p_10 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, o_10));
    t = p_10;
    t = if_verbose4_1_0(d_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(f_1, t);
    q_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_20, q_10);
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(g_1, t);
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, o_10), (ATerm) ATempty);
    t = (ATerm) ATmakeAppl(sym__3, term_t_20, (ATerm)ATmakeAppl(sym_Imported_1, o_10), (ATerm) ATempty);
    t = if_verbose4_1_0(h_1, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm p_83 (ATerm), ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
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
            ATerm i_1 (ATerm t)
            {
              t = filter_1_0(p_83, t);
              return(t);
            }
            t = Cons_2_0(p_83, i_1, t);
            ;
            LocalPopChoice(b_21);
          }
        else
          {
            t = a_21;
            {
              ATerm y_10 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm c_21 = ATgetFirst((ATermList) t);
                  y_10 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = y_10;
              t = filter_1_0(p_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm j_85 (ATerm), ATerm t)
{
  ATerm a_11 (ATerm t)
  {
    ATerm d_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_85(t);
        t = a_11(t);
        ;
        LocalPopChoice(f_21);
      }
    else
      {
        t = d_21;
      }
    return(t);
  }
  t = a_11(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm g_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm l_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_14 = NULL;
            t = eval_config_0_0(t);
            q_14 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), q_14);
            t = q_14;
            ;
            LocalPopChoice(m_21);
          }
        else
          {
            t = l_21;
          }
      }
      ;
      LocalPopChoice(k_21);
    }
  else
    {
      t = g_21;
      {
        ATerm n_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(o_21);
          }
        else
          {
            t = n_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm r_14 = NULL;
  r_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_14), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
  t = r_14;
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm p_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_21;
      }
  }
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm z_14 = NULL;
  z_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_14), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
  t = z_14;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm b_11 = NULL;
  t = if_verbose5_1_0(j_1, t);
  b_11 = t;
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        {
          ATerm c_11 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          c_11 = t;
          t = repeat_1_0(k_1, t);
          t = c_11;
        }
      }
    t = b_11;
    t = if_verbose5_1_0(m_1, t);
  }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm f_15 = NULL;
  f_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_15), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = f_15;
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm g_19 = NULL;
  g_19 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_19), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = g_19;
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm x_21 = NULL;
  t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
  t = map_1_0(w_1, t);
  x_21 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_21), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
  t = x_21;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL;
  v_21 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), v_21);
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_21, w_21);
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(q_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm u_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_16 = NULL,y_16 = NULL,b_17 = NULL;
            if(match_cons(t, sym__2))
              {
                g_16 = ATgetArgument(t, 0);
                y_16 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, g_16));
            {
              ATerm r_1 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((y_16 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((b_17 != NULL) && (b_17 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      b_17 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(r_1, t);
              t = not_null(b_17);
            }
            ;
            LocalPopChoice(y_21);
          }
        else
          {
            t = u_21;
            {
              ATerm o_18 = NULL,u_18 = NULL;
              o_18 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, o_18));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm z_21 = ATgetFirst((ATermList) t);
                  if(match_cons(z_21, sym__2))
                    {
                      ATerm b_22 = ATgetArgument(z_21, 0);
                      u_18 = ATgetArgument(z_21, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm a_22 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = u_18;
            }
          }
        t = if_verbose5_1_0(s_1, t);
      }
      ;
      LocalPopChoice(t_21);
    }
  else
    {
      t = s_21;
      {
        ATerm g_11 = NULL;
        g_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), g_11), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_22), g_11), term_c_22);
        t = if_verbose5_1_0(t_1, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL;
  v_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      w_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_22 = NULL;
        t = v_11;
        t = k_0(t);
        d_22 = t;
        {
          ATerm h_22 = t;
          int i_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(i_22);
            }
          else
            {
              t = h_22;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(w_11, d_22);
          t = (ATerm) ATmakeAppl(sym_FILE_1, w_11);
        }
        ;
        LocalPopChoice(g_22);
      }
    else
      {
        t = f_22;
        {
          ATerm l_22 = t;
          int m_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_22 = NULL;
              t = v_11;
              t = k_0(t);
              j_22 = t;
              {
                ATerm n_22 = t;
                if((PushChoice() == 0))
                  {
                    ATerm p_22 = t;
                    int q_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(q_22);
                      }
                    else
                      {
                        t = p_22;
                        {
                          ATerm r_22 = t;
                          int s_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(s_22);
                            }
                          else
                            {
                              t = r_22;
                              {
                                ATerm k_22 = NULL;
                                k_22 = t;
                                if((w_11 != t))
                                  {
                                    _fail(t);
                                  }
                                t = k_22;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_22;
                  }
                t = SSL_copy(w_11, j_22);
                t = (ATerm) ATmakeAppl(sym_FILE_1, w_11);
              }
              ;
              LocalPopChoice(m_22);
            }
          else
            {
              t = l_22;
              t = v_11;
              t = k_0(t);
              if((w_11 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_11);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
  if(match_cons(t, sym__2))
    {
      c_12 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_12, d_12);
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_22 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_22 = ATgetArgument(t, 0);
            ATerm x_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(c_12, d_12);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_22 = ATgetFirst((ATermList) t);
            o_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_22;
        ;
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
        t = (ATerm) ATempty;
      }
    e_12 = t;
    t = SSL_table_put(c_12, d_12, e_12);
    t = (ATerm) ATmakeAppl(sym__2, c_12, d_12);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm k_86 (ATerm), ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL;
  l_12 = t;
  t = k_86(t);
  m_12 = t;
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(m_12, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_12 = ATgetFirst((ATermList) t);
        n_12 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(m_12, (ATerm)ATmakeAppl(sym_Scopes_0), n_12);
    t = o_12;
    {
      ATerm c_2 (ATerm t)
      {
        ATerm p_12 = NULL;
        p_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_12, p_12);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(c_2, t);
      t = l_12;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm t)
{
  ATerm c_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_87(t);
      t = g_87(t);
      ;
      LocalPopChoice(g_23);
    }
  else
    {
      t = c_23;
      t = g_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_86 (ATerm), ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
  s_12 = t;
  t = j_86(t);
  t_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_12, term_h_23);
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_23 = ATgetArgument(t, 0);
            ATerm n_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(t_12, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        t = (ATerm) ATempty;
      }
    u_12 = t;
    t = SSL_table_put(t_12, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(u_12), (ATerm) ATempty));
    t = s_12;
  }
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_l_16;
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm o_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_13 = NULL;
      f_13 = t;
      t = SSL_remove(f_13);
      ;
      LocalPopChoice(p_23);
    }
  else
    {
      t = o_23;
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_l_16;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm o_89 (ATerm), ATerm t)
{
  ATerm a_13 = NULL;
  t = begin_scope_1_0(d_2, t);
  {
    ATerm e_2 (ATerm t)
    {
      ATerm b_13 = NULL;
      b_13 = t;
      {
        ATerm q_23 = t;
        int r_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(r_23);
          }
        else
          {
            t = q_23;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((a_13 != NULL) && (a_13 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              a_13 = ATgetFirst((ATermList) t);
            {
              ATerm s_23 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(a_13);
        t = map_1_0(f_2, t);
        t = b_13;
        t = end_scope_1_0(g_2, t);
      }
      return(t);
    }
    t = restore_always_2_0(o_89, e_2, t);
  }
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
      {
        ATerm v_23 = t;
        int x_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_22 = NULL;
            t = eval_config_0_0(t);
            z_22 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), z_22);
            t = z_22;
            ;
            LocalPopChoice(x_23);
          }
        else
          {
            t = v_23;
          }
      }
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      t = term_y_23;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm p_89 (ATerm), ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm z_23 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_13 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm c_24 = t;
          int d_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_22 = NULL;
              t = eval_config_0_0(t);
              v_22 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), v_22);
              t = v_22;
              ;
              LocalPopChoice(d_24);
            }
          else
            {
              t = c_24;
            }
          h_13 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, h_13);
        }
        ;
        LocalPopChoice(b_24);
      }
    else
      {
        t = z_23;
        t = term_x_5;
      }
    t = p_89(t);
    t = copy_to_1_0(i_2, t);
    return(t);
  }
  t = xtc_temp_files_1_0(h_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL;
  i_13 = t;
  t = term_h_16;
  t = whoami_0_0(t);
  j_13 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), j_13), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = i_13;
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm l_13 = NULL;
  l_13 = t;
  if(match_string(t, "-k"))
    {
      t = l_13;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_13;
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL;
  m_13 = t;
  t = SSL_string_to_int(m_13);
  n_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), n_13);
  t = m_13;
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_f_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_2, k_2, l_2, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm s_13 = NULL;
  s_13 = t;
  if(match_string(t, "-S"))
    {
      t = s_13;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_13;
    }
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_h_24;
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_j_24;
  return(t);
}
ATerm p_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm t_13 = NULL,v_13 = NULL;
  t_13 = t;
  t = SSL_string_to_int(t_13);
  v_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), v_13);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_13);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_k_24;
  return(t);
}
ATerm s_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_n_24;
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_o_24;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_2, n_2, o_2, t);
      ;
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
      {
        ATerm r_24 = t;
        int s_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_2, q_2, r_2, t);
            ;
            LocalPopChoice(s_24);
          }
        else
          {
            t = r_24;
            t = Option_3_0(s_2, t_2, u_2, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm y_13 = NULL,c_14 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_14 = NULL;
      t = term_h_16;
      t = d_0(t);
      d_14 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_24, term_u_24, d_14);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm g_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_13 = ATgetFirst((ATermList) t);
          c_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_13;
      t = a_0(t);
      t = term_h_16;
      t = b_0(t);
      g_14 = t;
      t = (ATerm) ATinsert(CheckATermList(c_14), g_14);
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm i_14 = NULL;
  i_14 = t;
  if(match_string(t, "-o"))
    {
      t = i_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_14;
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm j_14 = NULL;
  j_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), j_14);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_14);
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_v_24;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_2, x_2, z_2, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,s_14 = NULL;
  if(match_cons(t, sym__3))
    {
      m_14 = ATgetArgument(t, 0);
      n_14 = ATgetArgument(t, 1);
      o_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_14, n_14);
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_24 = ATgetArgument(t, 0);
            ATerm z_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(m_14, n_14);
        ;
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        t = (ATerm) ATempty;
      }
    s_14 = t;
    t = SSL_table_put(m_14, n_14, (ATerm) ATinsert(CheckATermList(s_14), o_14));
    t = (ATerm) ATmakeAppl(sym__3, m_14, n_14, o_14);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,g_15 = NULL,h_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_15 = NULL;
      t = term_h_16;
      t = j_0(t);
      i_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_24, term_u_24, i_15);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm m_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_15 = ATgetFirst((ATermList) t);
          d_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_15;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_15 = ATgetFirst((ATermList) t);
          h_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_15;
      t = h_0(t);
      t = g_15;
      t = i_0(t);
      m_15 = t;
      t = (ATerm) ATinsert(CheckATermList(h_15), m_15);
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm q_15 = NULL;
  q_15 = t;
  if(match_string(t, "-i"))
    {
      t = q_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_15;
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm r_15 = NULL;
  r_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), r_15);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_15);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_3, d_3, e_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_16;
  t = whoami_0_0(t);
  s_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), s_15));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_23 = NULL;
        t = eval_config_0_0(t);
        d_23 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_23);
        t = d_23;
        ;
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_82(t);
      ;
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      {
        ATerm v_15 = NULL,w_15 = NULL,z_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_15 = ATgetFirst((ATermList) t);
            w_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_15;
        t = foldr_2_0(m_82, n_82, t);
        z_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_15, z_15);
        t = n_82(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_g_24;
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL;
  if(match_cons(t, sym__2))
    {
      i_23 = ATgetArgument(t, 0);
      j_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(i_23, j_23);
        ;
        LocalPopChoice(h_25);
      }
    else
      {
        t = g_25;
        t = SSL_addr(i_23, j_23);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_16 = NULL,e_23 = NULL,f_23 = NULL;
  t = times_0_0(t);
  e_23 = t;
  t = SSL_explode_term(e_23);
  if(match_cons(t, sym__2))
    {
      ATerm i_25 = ATgetArgument(t, 0);
      f_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_23;
  t = foldr_2_0(f_3, i_3, t);
  c_16 = t;
  t = SSL_TicksToSeconds(c_16);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL;
  n_16 = t;
  if(match_cons(t, sym__2))
    {
      o_16 = ATgetArgument(t, 0);
      p_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_16;
        if((o_16 != t))
          {
            _fail(t);
          }
        t = n_16;
        ;
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        t = n_16;
        {
          ATerm l_25 = t;
          int m_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_16, p_16);
              ;
              LocalPopChoice(m_25);
            }
          else
            {
              t = l_25;
              t = SSL_gtr(o_16, p_16);
            }
          t = (ATerm) ATmakeAppl(sym__2, o_16, p_16);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_16 = NULL,u_16 = NULL;
      s_16 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm p_25 = t;
        int q_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_23 = NULL;
            t = eval_config_0_0(t);
            w_23 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), w_23);
            t = w_23;
            ;
            LocalPopChoice(q_25);
          }
        else
          {
            t = p_25;
          }
        u_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_16, term_m_6);
        t = geq_0_0(t);
        t = s_16;
        t = r_87(t);
      }
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL;
  t = run_time_0_0(t);
  w_16 = t;
  t = term_h_16;
  t = whoami_0_0(t);
  x_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), w_16), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), x_16));
  t = (ATerm) ATmakeAppl(sym__2, term_k_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_25), w_16), term_h_6), x_16));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
      {
        ATerm u_25 = t;
        int v_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(v_25);
          }
        else
          {
            t = u_25;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_91 (ATerm), ATerm t)
{
  ATerm w_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_24 = NULL;
            t = eval_config_0_0(t);
            a_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), a_24);
            t = a_24;
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
      t = w_25;
      t = fetch_1_0(k_3, t);
    }
  t = q_91(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_16 = ATgetFirst((ATermList) t);
      a_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_17 = NULL,g_17 = NULL;
        t = a_17;
        t = g_0(t);
        f_17 = t;
        t = z_16;
        t = f_0(t);
        g_17 = t;
        t = a_17;
        {
          ATerm l_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(f_17), g_17);
            return(t);
          }
          t = reverse_acc_2_0(f_0, l_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_16;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm t_68 (ATerm), ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL;
  k_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_17);
  h_17 = t;
  t = i_17;
  t = t_68(t);
  j_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, j_17), h_17);
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm n_17 = NULL;
  n_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_17), term_b_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm f_26 = t;
        int g_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_24 = NULL;
            t = eval_config_0_0(t);
            e_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_24);
            t = e_24;
            ;
            LocalPopChoice(g_26);
          }
        else
          {
            t = f_26;
          }
      }
      ;
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      t = fetch_1_0(n_3, t);
    }
  t = term_h_26;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, o_3, t);
  t = map_1_0(p_3, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm u_68 (ATerm), ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL;
  r_17 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      p_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_17);
  o_17 = t;
  t = p_17;
  t = u_68(t);
  q_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, q_17), o_17);
  return(t);
}
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm u_17 (ATerm t)
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_76, _id, t);
        ;
        LocalPopChoice(j_26);
      }
    else
      {
        t = i_26;
        t = Cons_2_0(_id, u_17, t);
      }
    return(t);
  }
  t = u_17(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL;
  w_17 = t;
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_17;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_26 = ATgetFirst((ATermList) t);
                ATerm n_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_17;
          }
        ;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        t = (ATerm) ATinsert(ATempty, w_17);
      }
    x_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), x_17);
    t = w_17;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_24 = NULL;
        t = eval_config_0_0(t);
        i_24 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_24);
        t = i_24;
        ;
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
      {
        ATerm d_18 = NULL,e_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_18 = ATgetFirst((ATermList) t);
            e_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_18;
        {
          ATerm q_3 (ATerm t)
          {
            t = e_18;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(q_3, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm k_18 (ATerm t)
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, k_18, t);
        ;
        LocalPopChoice(t_26);
      }
    else
      {
        t = s_26;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_76(t);
      }
    return(t);
  }
  t = k_18(t);
  return(t);
}
ATerm _2_0 (ATerm y_58 (ATerm), ATerm z_58 (ATerm), ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
  r_18 = t;
  if(match_cons(t, sym__2))
    {
      m_18 = ATgetArgument(t, 0);
      n_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_18);
  l_18 = t;
  t = m_18;
  t = y_58(t);
  p_18 = t;
  t = n_18;
  t = z_58(t);
  q_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, p_18, q_18), l_18);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm w_18 = NULL;
  w_18 = t;
  t = SSL_explode_string(w_18);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm x_18 = NULL;
  x_18 = t;
  t = SSL_explode_string(x_18);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm v_18 = NULL;
  t = _2_0(r_3, s_3, t);
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_18 = NULL,a_19 = NULL;
        if(match_cons(t, sym__2))
          {
            z_18 = ATgetArgument(t, 0);
            a_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_18;
        {
          ATerm t_3 (ATerm t)
          {
            t = a_19;
            return(t);
          }
          t = at_end_1_0(t_3, t);
        }
        ;
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        {
          ATerm l_24 = NULL,m_24 = NULL;
          l_24 = t;
          t = SSL_explode_term(l_24);
          if(match_cons(t, sym__2))
            {
              ATerm w_26 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_26) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              m_24 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_24;
          t = concat_0_0(t);
        }
      }
    v_18 = t;
    t = SSL_implode_string(v_18);
  }
  return(t);
}
ATerm map_1_0 (ATerm v_75 (ATerm), ATerm t)
{
  ATerm f_19 (ATerm t)
  {
    ATerm x_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(y_26);
      }
    else
      {
        t = x_26;
        t = Cons_2_0(v_75, f_19, t);
      }
    return(t);
  }
  t = f_19(t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_27 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_19 = NULL;
      l_19 = t;
      t = SSL_is_string(l_19);
      ;
      LocalPopChoice(c_27);
    }
  else
    {
      t = b_27;
      {
        ATerm d_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(v_3, t);
            ;
            LocalPopChoice(e_27);
          }
        else
          {
            t = d_27;
            {
              ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
              p_19 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_19 = ATgetArgument(t, 0);
                  t = q_19;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_19 = ATgetArgument(t, 0);
                      t = q_19;
                      {
                        ATerm f_27 = t;
                        int g_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), q_19);
                            {
                              ATerm h_27 = t;
                              int i_27 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm f_25 = NULL;
                                  t = eval_config_0_0(t);
                                  f_25 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), q_19, f_25);
                                  t = f_25;
                                  ;
                                  LocalPopChoice(i_27);
                                }
                              else
                                {
                                  t = h_27;
                                }
                            }
                            ;
                            LocalPopChoice(g_27);
                          }
                        else
                          {
                            t = f_27;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_19), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = q_19;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_19 = NULL,w_19 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_19 = ATgetArgument(t, 0);
                          r_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_19;
                      t = eval_config_0_0(t);
                      v_19 = t;
                      t = r_19;
                      t = eval_config_0_0(t);
                      w_19 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_19, w_19);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_l_27;
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_m_27;
  return(t);
}
ATerm a_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_n_27;
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_o_27;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_27 = t;
  int q_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_3, x_3, y_3, t);
      ;
      LocalPopChoice(q_27);
    }
  else
    {
      t = p_27;
      t = Option_3_0(a_4, b_4, e_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  h_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_20 = ATgetFirst((ATermList) t);
      e_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_20);
  c_20 = t;
  t = d_20;
  t = n_63(t);
  f_20 = t;
  t = e_20;
  t = o_63(t);
  g_20 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(g_20), f_20), c_20);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm m_20 = NULL;
  m_20 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), m_20);
  t = (ATerm) ATmakeAppl(sym_Program_1, m_20);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_93 (ATerm), ATerm t)
{
  ATerm l_20 = NULL;
  l_20 = t;
  {
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_27;
        t = o_93(t);
        ;
        LocalPopChoice(s_27);
      }
    else
      {
        t = r_27;
      }
    t = l_20;
    {
      ATerm g_4 (ATerm t)
      {
        ATerm u_27 = t;
        int v_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_27 = t;
            int x_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(x_27);
              }
            else
              {
                t = w_27;
                t = o_93(t);
                t = Cons_2_0(_id, g_4, t);
              }
            ;
            LocalPopChoice(v_27);
          }
        else
          {
            t = u_27;
            {
              ATerm o_20 = NULL,p_20 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_20 = ATgetFirst((ATermList) t);
                  p_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_20), (ATerm) ATmakeAppl(sym_Undefined_1, o_20));
            }
          }
        return(t);
      }
      t = Cons_2_0(f_4, g_4, t);
    }
  }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm z_20 = NULL;
  z_20 = t;
  if(match_string(t, "--help"))
    {
      t = z_20;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_20;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_20;
        }
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_y_27;
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_z_27;
  return(t);
}
ATerm r_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_93 (ATerm), ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
  w_20 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = w_20;
  {
    ATerm k_4 (ATerm t)
    {
      ATerm a_28 = t;
      int b_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_93(t);
          ;
          LocalPopChoice(b_28);
        }
      else
        {
          t = a_28;
          {
            ATerm c_28 = t;
            int d_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_4, m_4, q_4, t);
                ;
                LocalPopChoice(d_28);
              }
            else
              {
                t = c_28;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_4, t);
    {
      ATerm e_28 = t;
      int f_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_21 = NULL;
          e_21 = t;
          {
            ATerm g_28 = t;
            int h_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = e_21;
                {
                  ATerm i_28 = t;
                  int j_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm k_28 = t;
                        int l_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm x_25 = NULL;
                            t = eval_config_0_0(t);
                            x_25 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), x_25);
                            t = x_25;
                            ;
                            LocalPopChoice(l_28);
                          }
                        else
                          {
                            t = k_28;
                          }
                      }
                      ;
                      LocalPopChoice(j_28);
                    }
                  else
                    {
                      t = i_28;
                      t = fetch_1_0(r_4, t);
                    }
                  t = e_21;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(h_28);
              }
            else
              {
                t = g_28;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm m_28 = t;
                  int n_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_26 = NULL;
                      t = eval_config_0_0(t);
                      e_26 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), e_26);
                      t = e_26;
                      ;
                      LocalPopChoice(n_28);
                    }
                  else
                    {
                      t = m_28;
                    }
                  t = e_21;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(f_28);
        }
      else
        {
          t = e_28;
          {
            ATerm o_28 = t;
            int p_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_4 (ATerm t)
                {
                  ATerm t_4 (ATerm t)
                  {
                    if(((x_20 != NULL) && (x_20 != t)))
                      _fail(t);
                    else
                      x_20 = t;
                    return(t);
                  }
                  t = Undefined_1_0(t_4, t);
                  return(t);
                }
                t = fetch_1_0(s_4, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(x_20)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_k_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_20)), term_q_28));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(p_28);
              }
            else
              {
                t = o_28;
              }
          }
        }
      y_20 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = y_20;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm t)
{
  ATerm h_21 = NULL;
  t = parse_options_1_0(s_91, t);
  h_21 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), h_21);
  t = h_21;
  t = u_91(t);
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_91, t);
        ;
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
        {
          ATerm t_28 = t;
          int u_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_91(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(u_28);
            }
          else
            {
              t = t_28;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm v_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(w_28);
    }
  else
    {
      t = v_28;
      {
        ATerm x_28 = t;
        int y_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(y_28);
          }
        else
          {
            t = x_28;
            {
              ATerm z_28 = t;
              int a_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(d_5, f_5, i_5, t);
                  ;
                  LocalPopChoice(a_29);
                }
              else
                {
                  t = z_28;
                  {
                    ATerm b_29 = t;
                    int c_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(c_29);
                      }
                    else
                      {
                        t = b_29;
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
ATerm c_5 (ATerm t)
{
  t = xtc_io_1_0(j_5, t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_d_29;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_e_29;
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_29 = t;
      int i_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(i_29);
        }
      else
        {
          t = h_29;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(g_29);
      t = xtc_transform_file_2_0(m_5, p_5, t);
    }
  else
    {
      t = f_29;
      t = xtc_transform_term_2_0(q_5, r_5, t);
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
        t = xtc_transform_file_2_0(s_5, t_5, t);
      }
    else
      {
        t = j_29;
        t = xtc_transform_term_2_0(u_5, w_5, t);
      }
  }
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_n_29;
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm i_21 = NULL;
  t = term_o_29;
  t = xtc_find_0_0(t);
  i_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_21), term_p_29);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_n_29;
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm j_21 = NULL;
  t = term_o_29;
  t = xtc_find_0_0(t);
  j_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_21), term_p_29);
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_q_29;
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_q_29;
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm astratego2text_0_0 (ATerm t)
{
  t = option_wrap_4_0(w_4, default_usage_0_0, _id, c_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = astratego2text_0_0(t);
  return(t);
}
