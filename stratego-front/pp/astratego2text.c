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
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
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
ATerm term_d_24;
ATerm term_x_23;
ATerm term_g_23;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_s_20;
ATerm term_h_20;
ATerm term_b_17;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_k_15;
ATerm term_e_15;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_u_13;
ATerm term_q_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_d_13;
ATerm term_c_13;
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
ATerm term_w_11;
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
ATerm term_b_11;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_l_10;
ATerm term_f_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_o_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_z_8;
ATerm term_w_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_l_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_c_8;
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
ATerm term_i_7;
ATerm term_g_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
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
ATerm term_k_6;
ATerm term_h_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_a_6;
ATerm term_r_5;
void init_constant_terms (void)
{
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_6, term_l_6, term_m_6);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_6, term_p_6, term_q_6);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_6, term_t_6, term_u_6);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_6, term_x_6, term_a_7);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_7, term_g_7, term_i_7);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_7, term_m_7, term_n_7);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_7, term_s_7, term_t_7);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_7, term_w_7, term_y_7);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_8, term_e_8, term_f_8);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_8, term_r_8, term_s_8);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_8, term_w_8, term_z_8);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_9, term_h_9, term_i_9);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_9, term_o_9, term_u_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_9, term_x_9, term_f_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_10, term_v_10, term_w_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_11, term_d_11, term_e_11);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_11, term_i_11, term_j_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_11, term_m_11, term_n_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_11, term_q_11, term_r_11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_11, term_w_11, term_x_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_11, term_a_12, term_f_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_12, term_i_12, term_j_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_w_12, term_x_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_c_13, term_d_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_13, term_j_13, term_l_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_13, term_u_13, term_z_13);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_d_14, term_g_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_k_14, term_p_14);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_stdin_0);
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
  term_l_27 = (ATerm) ATmakeAppl(sym__3, term_j_27, term_k_27, term_f_16);
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
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm read_from_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm d_72 (ATerm), ATerm);
ATerm c_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm);
ATerm e_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm j_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm s_70 (ATerm), ATerm);
ATerm assert_1_0 (ATerm o_86 (ATerm), ATerm);
ATerm v_5 (ATerm a_5, ATerm);
ATerm w_5 (ATerm k_5, ATerm l_5, ATerm o_5, ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm p_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm n_68 (ATerm), ATerm);
ATerm if_verbose5_1_0 (ATerm p_87 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm o_87 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm q_87 (ATerm), ATerm);
ATerm union_1_0 (ATerm a_80 (ATerm), ATerm);
ATerm v_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm z_87 (ATerm), ATerm);
ATerm p_9 (ATerm j_9, ATerm);
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
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm q_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm k_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm o_1 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm p_1 (ATerm);
ATerm r_1 (ATerm);
ATerm y_1 (ATerm);
ATerm u_1 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm l_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm k_86 (ATerm), ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm p_89 (ATerm), ATerm);
ATerm i_2 (ATerm);
ATerm xtc_io_1_0 (ATerm q_89 (ATerm), ATerm);
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
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm z_2 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm n_82 (ATerm), ATerm o_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm l_87 (ATerm), ATerm);
ATerm j_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm r_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm u_68 (ATerm), ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm v_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm h_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm n_76 (ATerm), ATerm);
ATerm _2_0 (ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm);
ATerm u_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm d_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm);
ATerm e_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm p_93 (ATerm), ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm parse_options_1_0 (ATerm o_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm b_5 (ATerm);
ATerm e_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm x_4 (ATerm);
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
      t = b_1;
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
ATerm WriteToFile_1_0 (ATerm d_72 (ATerm), ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL,n_1 = NULL;
  if(match_cons(t, sym__2))
    {
      l_1 = ATgetArgument(t, 0);
      m_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_1, term_r_5);
  t = open_stream_0_0(t);
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_1, m_1);
  t = d_72(t);
  t = fclose_0_0(t);
  t = m_1;
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_5 = ATgetArgument(t, 0);
      if(match_cons(z_5, sym_Stream_1))
        {
          v_1 = ATgetArgument(z_5, 0);
        }
      else
        _fail(t);
      w_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(v_1, w_1);
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_1);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL;
  s_1 = t;
  t = xtc_new_file_0_0(t);
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_1, s_1);
  t = WriteToFile_1_0(c_0, t);
  t = SSL_close_file(t_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, t_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(m_90, n_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm e_0 (ATerm t)
{
  ATerm c_2 = NULL;
  c_2 = t;
  t = SSL_explode_string(c_2);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm b_2 = NULL;
  t = map_1_0(e_0, t);
  t = concat_0_0(t);
  b_2 = t;
  t = SSL_implode_string(b_2);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm y_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL;
  y_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      a_3 = ATgetArgument(t, 0);
      {
        ATerm w_0 = NULL;
        t = SSL_int_to_string(a_3);
        w_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_6), w_0), term_a_6);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm k_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          a_3 = ATgetArgument(t, 0);
          b_3 = ATgetArgument(t, 1);
          c_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(b_3);
      k_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_3), term_h_6), k_1), term_d_6), a_3);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm j_76 (ATerm), ATerm t)
{
  ATerm h_3 = NULL;
  ATerm n_0 (ATerm t)
  {
    t = j_76(t);
    if(((h_3 != NULL) && (h_3 != t)))
      _fail(t);
    else
      h_3 = t;
    return(t);
  }
  t = fetch_1_0(n_0, t);
  t = not_null(h_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm i_3 = NULL;
  i_3 = t;
  {
    ATerm i_6 = t;
    int j_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_14), term_h_14), term_b_14), term_m_13), term_f_13), term_y_12), term_r_12), term_g_12), term_y_11), term_s_11), term_o_11), term_k_11), term_f_11), term_y_10), term_l_10), term_v_9), term_k_9), term_f_9), term_t_8), term_g_8), term_b_8), term_u_7), term_o_7), term_k_7), term_b_7), term_v_6), term_r_6), term_n_6);
        {
          ATerm o_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm w_14 = ATgetArgument(t, 0);
                if((i_3 != ATgetArgument(t, 1)))
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
        LocalPopChoice(j_6);
      }
    else
      {
        t = i_6;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, i_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm n_3 = NULL;
  n_3 = t;
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_3 = NULL,z_1 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm a_15 = ATgetArgument(t, 0);
            x_3 = ATgetArgument(t, 1);
            {
              ATerm b_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = x_3;
        {
          ATerm d_15 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_15;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          z_1 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_1), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_e_15, (ATerm) ATinsert(ATinsert(ATempty, z_1), term_k_15));
        }
        ;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
      }
    t = n_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm s_70 (ATerm), ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL;
  f_4 = t;
  t = fork_0_0(t);
  g_4 = t;
  {
    ATerm l_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = f_4;
        t = s_70(t);
        ;
        LocalPopChoice(m_15);
      }
    else
      {
        t = l_15;
        t = SSL_waitpid(g_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm o_15 = ATgetArgument(t, 0);
            if(((ATgetType(o_15) != AT_INT) || (ATgetInt((ATermInt) o_15) != 0)))
              _fail(t);
            {
              ATerm s_15 = ATgetArgument(t, 1);
            }
            {
              ATerm t_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = f_4;
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm o_86 (ATerm), ATerm t)
{
  ATerm l_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,s_4 = NULL;
  if(match_cons(t, sym__2))
    {
      l_4 = ATgetArgument(t, 0);
      o_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_86(t);
  p_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_4, l_4, o_4);
  t = table_push_0_0(t);
  {
    ATerm w_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(p_4, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(x_15);
      }
    else
      {
        t = w_15;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_4 = ATgetFirst((ATermList) t);
        s_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(p_4, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(s_4), (ATerm) ATinsert(CheckATermList(q_4), l_4)));
    t = (ATerm) ATmakeAppl(sym__2, l_4, o_4);
  }
  return(t);
}
ATerm v_5 (ATerm a_5, ATerm t)
{
  t = a_5;
  {
    ATerm z_15 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_16 = ATgetArgument(t, 0);
            ATerm c_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_15;
      }
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
    t = (ATerm) ATmakeAppl(sym__2, a_5, term_r_5);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm w_5 (ATerm k_5, ATerm l_5, ATerm o_5, ATerm t)
{
  t = SSL_open_file(k_5, l_5);
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL;
  s_5 = t;
  if(match_cons(t, sym__2))
    {
      t_5 = ATgetArgument(t, 0);
      u_5 = ATgetArgument(t, 1);
      {
        ATerm d_16 = t;
        int e_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_5(s_5, t);
            ;
            LocalPopChoice(e_16);
          }
        else
          {
            t = d_16;
            t = w_5(t_5, u_5, s_5, t);
          }
      }
    }
  else
    {
      t = v_5(s_5, t);
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
  ATerm y_5 = NULL;
  t = term_f_16;
  t = new_0_0(t);
  y_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_5, term_g_16);
  t = conc_strings_0_0(t);
  {
    ATerm h_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_6 = NULL;
        b_6 = t;
        t = SSL_access(b_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(i_16);
      }
    else
      {
        t = h_16;
      }
  }
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = term_j_16;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm e_6 = NULL;
  t = new_file_0_0(t);
  e_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_6, term_r_5);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, e_6, term_f_16);
  t = assert_1_0(p_0, t);
  t = e_6;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL;
  y_6 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm b_4 = NULL,c_4 = NULL,v_4 = NULL,w_4 = NULL;
      t = y_6;
      t = xtc_new_file_0_0(t);
      b_4 = t;
      t = m_0(t);
      c_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_4, (ATerm) ATinsert(ATinsert(ATempty, b_4), term_k_16));
      {
        ATerm l_16 = t;
        int q_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm r_16 = ATgetArgument(t, 0);
                ATerm t_16 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = c_4;
            {
              ATerm q_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, b_4), term_k_16);
                return(t);
              }
              t = at_end_1_0(q_0, t);
            }
            ;
            LocalPopChoice(q_16);
          }
        else
          {
            t = l_16;
            {
              ATerm u_4 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, c_4, (ATerm) ATinsert(ATinsert(ATempty, b_4), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm v_16 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) v_16) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  u_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_4;
              t = concat_0_0(t);
            }
          }
        v_4 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        w_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_4, v_4);
        {
          ATerm r_0 (ATerm t)
          {
            t = SSL_execvp(w_4, v_4);
            return(t);
          }
          t = fork_and_wait_1_0(r_0, t);
          t = SSL_close_file(b_4);
          t = (ATerm) ATmakeAppl(sym_FILE_1, b_4);
        }
      }
    }
  else
    {
      ATerm c_5 = NULL,d_5 = NULL,f_6 = NULL,g_6 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          z_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_6;
      t = xtc_new_file_0_0(t);
      c_5 = t;
      t = m_0(t);
      d_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_5), term_k_16), z_6), term_b_17));
      {
        ATerm c_17 = t;
        int d_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm k_17 = ATgetArgument(t, 0);
                ATerm l_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = d_5;
            {
              ATerm s_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_5), term_k_16), z_6), term_b_17);
                return(t);
              }
              t = at_end_1_0(s_0, t);
            }
            ;
            LocalPopChoice(d_17);
          }
        else
          {
            t = c_17;
            {
              ATerm x_5 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, d_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_5), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), z_6), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm r_17 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) r_17) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  x_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_5;
              t = concat_0_0(t);
            }
          }
        f_6 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        g_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_6, f_6);
        {
          ATerm t_0 (ATerm t)
          {
            t = SSL_execvp(g_6, f_6);
            return(t);
          }
          t = fork_and_wait_1_0(t_0, t);
          t = SSL_close_file(c_5);
          t = (ATerm) ATmakeAppl(sym_FILE_1, c_5);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm n_68 (ATerm), ATerm t)
{
  ATerm d_7 = NULL,f_7 = NULL,h_7 = NULL,j_7 = NULL;
  j_7 = t;
  if(match_cons(t, sym_FILE_1))
    {
      f_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_7);
  d_7 = t;
  t = f_7;
  t = n_68(t);
  h_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, h_7), d_7);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm p_87 (ATerm), ATerm t)
{
  ATerm t_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_7 = NULL,r_7 = NULL;
      p_7 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm y_17 = t;
        int z_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_7 = NULL;
            t = eval_config_0_0(t);
            e_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_7);
            t = e_7;
            ;
            LocalPopChoice(z_17);
          }
        else
          {
            t = y_17;
          }
        r_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_7, term_j_13);
        t = geq_0_0(t);
        t = p_7;
        t = p_87(t);
      }
      ;
      LocalPopChoice(v_17);
    }
  else
    {
      t = t_17;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm o_87 (ATerm), ATerm t)
{
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_7 = NULL,z_7 = NULL;
      x_7 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm c_18 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_8 = NULL;
            t = eval_config_0_0(t);
            k_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_8);
            t = k_8;
            ;
            LocalPopChoice(f_18);
          }
        else
          {
            t = c_18;
          }
        z_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_7, term_h_9);
        t = geq_0_0(t);
        t = x_7;
        t = o_87(t);
      }
      ;
      LocalPopChoice(b_18);
    }
  else
    {
      t = a_18;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_8 = NULL,d_8 = NULL;
      a_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm i_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_9 = NULL;
            t = eval_config_0_0(t);
            c_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), c_9);
            t = c_9;
            ;
            LocalPopChoice(j_18);
          }
        else
          {
            t = i_18;
          }
        d_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_8, term_x_6);
        t = geq_0_0(t);
        t = a_8;
        t = q_87(t);
      }
      ;
      LocalPopChoice(h_18);
    }
  else
    {
      t = g_18;
    }
  return(t);
}
ATerm union_1_0 (ATerm a_80 (ATerm), ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL;
  if(match_cons(t, sym__2))
    {
      i_8 = ATgetArgument(t, 0);
      h_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_8;
  {
    ATerm j_8 (ATerm t)
    {
      ATerm r_18 = t;
      int s_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_8;
          ;
          LocalPopChoice(s_18);
        }
      else
        {
          t = r_18;
          {
            ATerm x_18 = t;
            int a_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_9 = NULL,e_9 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    d_9 = ATgetFirst((ATermList) t);
                    e_9 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = h_8;
                {
                  ATerm u_0 (ATerm t)
                  {
                    ATerm r_9 = NULL;
                    r_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, d_9, r_9);
                    t = a_80(t);
                    return(t);
                  }
                  t = fetch_1_0(u_0, t);
                  t = e_9;
                  t = j_8(t);
                }
                ;
                LocalPopChoice(a_19);
              }
            else
              {
                t = x_18;
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
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL;
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
    ATerm b_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_19 = ATgetArgument(t, 0);
            ATerm h_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(m_8, n_8);
        ;
        LocalPopChoice(c_19);
      }
    else
      {
        t = b_19;
        t = (ATerm) ATempty;
      }
    p_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_8, o_8);
    t = union_1_0(v_0, t);
    q_8 = t;
    t = SSL_table_put(m_8, n_8, q_8);
    t = (ATerm) ATmakeAppl(sym__3, m_8, n_8, o_8);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm z_87 (ATerm), ATerm t)
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
      ATerm a_9 = NULL,b_9 = NULL;
      if(match_cons(t, sym__2))
        {
          a_9 = ATgetArgument(t, 0);
          b_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, y_8, a_9, b_9);
      t = z_87(t);
      return(t);
    }
    t = map_1_0(x_0, t);
  }
  return(t);
}
ATerm p_9 (ATerm j_9, ATerm t)
{
  t = SSL_fclose(j_9);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL;
  n_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_9 = ATgetArgument(t, 0);
      {
        ATerm i_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_9);
            ;
            LocalPopChoice(j_19);
          }
        else
          {
            t = i_19;
            t = p_9(n_9, t);
          }
      }
    }
  else
    {
      t = p_9(n_9, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_9 = NULL;
  t = SSL_stdin_stream();
  q_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_9);
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
      ATerm k_19 = ATgetArgument(t, 0);
      ATerm m_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_12 = NULL,o_12 = NULL;
        b_12 = t;
        t = SSL_explode_term(b_12);
        if(match_cons(t, sym__2))
          {
            ATerm s_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_19) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm t_19 = ATgetArgument(t, 1);
              if(((ATgetType(t_19) == AT_LIST) && !(ATisEmpty(t_19))))
                {
                  o_12 = ATgetFirst((ATermList) t_19);
                  {
                    ATerm u_19 = (ATerm) ATgetNext((ATermList) t_19);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = o_12;
        if(match_cons(t, sym_stderr_0))
          {
            t = o_12;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = o_12;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = o_12;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        {
          ATerm x_19 = t;
          int y_19 = stack_ptr;
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
              LocalPopChoice(y_19);
            }
          else
            {
              t = x_19;
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
  ATerm z_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_10 = NULL;
      k_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_10, term_h_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(a_20);
    }
  else
    {
      t = z_19;
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
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_10 = NULL;
      m_10 = t;
      t = SSL_access(m_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(j_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = i_20;
      {
        ATerm m_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_13 = NULL;
            ATerm q_20 = t;
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
                t = q_20;
              }
            b_13 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_13), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = b_13;
            ;
            LocalPopChoice(p_20);
          }
        else
          {
            t = m_20;
            {
              ATerm g_13 = NULL;
              g_13 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_13), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = g_13;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm n_13 = NULL;
  n_13 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_13), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
  t = n_13;
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm y_13 = NULL;
  y_13 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_13), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
  t = y_13;
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm r_10 = NULL;
  r_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = r_10;
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm s_10 = NULL;
  s_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
  t = s_10;
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm t_10 = NULL;
  t_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = t_10;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
  o_10 = t;
  t = if_verbose5_1_0(a_1, t);
  {
    ATerm r_20 = t;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, o_10));
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_20;
      }
    p_10 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, o_10));
    t = p_10;
    t = if_verbose4_1_0(d_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(e_1, t);
    q_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_s_20, q_10);
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(f_1, t);
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, o_10), (ATerm) ATempty);
    t = (ATerm) ATmakeAppl(sym__3, term_s_20, (ATerm)ATmakeAppl(sym_Imported_1, o_10), (ATerm) ATempty);
    t = if_verbose4_1_0(g_1, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm q_83 (ATerm), ATerm t)
{
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(u_20);
    }
  else
    {
      t = t_20;
      {
        ATerm z_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              t = filter_1_0(q_83, t);
              return(t);
            }
            t = Cons_2_0(q_83, h_1, t);
            ;
            LocalPopChoice(a_21);
          }
        else
          {
            t = z_20;
            {
              ATerm x_10 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm b_21 = ATgetFirst((ATermList) t);
                  x_10 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = x_10;
              t = filter_1_0(q_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm k_85 (ATerm), ATerm t)
{
  ATerm z_10 (ATerm t)
  {
    ATerm c_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_85(t);
        t = z_10(t);
        ;
        LocalPopChoice(e_21);
      }
    else
      {
        t = c_21;
      }
    return(t);
  }
  t = z_10(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm f_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm k_21 = t;
        int l_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_14 = NULL;
            t = eval_config_0_0(t);
            l_14 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), l_14);
            t = l_14;
            ;
            LocalPopChoice(l_21);
          }
        else
          {
            t = k_21;
          }
      }
      ;
      LocalPopChoice(j_21);
    }
  else
    {
      t = f_21;
      {
        ATerm m_21 = t;
        int n_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(n_21);
          }
        else
          {
            t = m_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm o_14 = NULL;
  o_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_14), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
  t = o_14;
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm o_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_21;
      }
  }
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm r_14 = NULL;
  r_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_14), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
  t = r_14;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm a_11 = NULL;
  t = if_verbose5_1_0(i_1, t);
  a_11 = t;
  {
    ATerm p_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(q_21);
      }
    else
      {
        t = p_21;
        {
          ATerm c_11 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          c_11 = t;
          t = repeat_1_0(j_1, t);
          t = c_11;
        }
      }
    t = a_11;
    t = if_verbose5_1_0(o_1, t);
  }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm c_15 = NULL;
  c_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_15), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = c_15;
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm g_19 = NULL;
  g_19 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_19), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = g_19;
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL;
  v_21 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), v_21);
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_21, w_21);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm x_21 = NULL;
  t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
  t = map_1_0(y_1, t);
  x_21 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_21), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
  t = x_21;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(p_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm t_21 = t;
        int u_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_16 = NULL,y_16 = NULL,s_17 = NULL;
            if(match_cons(t, sym__2))
              {
                n_16 = ATgetArgument(t, 0);
                y_16 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, n_16));
            {
              ATerm q_1 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((y_16 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((s_17 != NULL) && (s_17 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      s_17 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(q_1, t);
              t = not_null(s_17);
            }
            ;
            LocalPopChoice(u_21);
          }
        else
          {
            t = t_21;
            {
              ATerm t_18 = NULL,f_19 = NULL;
              t_18 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, t_18));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm y_21 = ATgetFirst((ATermList) t);
                  if(match_cons(y_21, sym__2))
                    {
                      ATerm a_22 = ATgetArgument(y_21, 0);
                      f_19 = ATgetArgument(y_21, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm z_21 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = f_19;
            }
          }
        t = if_verbose5_1_0(r_1, t);
      }
      ;
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
      {
        ATerm g_11 = NULL;
        g_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), g_11), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_22), g_11), term_b_22);
        t = if_verbose5_1_0(u_1, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL;
  u_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      v_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_22 = NULL;
        t = u_11;
        t = k_0(t);
        d_22 = t;
        {
          ATerm g_22 = t;
          int h_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(h_22);
            }
          else
            {
              t = g_22;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(v_11, d_22);
          t = (ATerm) ATmakeAppl(sym_FILE_1, v_11);
        }
        ;
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
        {
          ATerm i_22 = t;
          int l_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_22 = NULL;
              t = u_11;
              t = k_0(t);
              j_22 = t;
              {
                ATerm m_22 = t;
                if((PushChoice() == 0))
                  {
                    ATerm n_22 = t;
                    int p_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(p_22);
                      }
                    else
                      {
                        t = n_22;
                        {
                          ATerm q_22 = t;
                          int r_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(r_22);
                            }
                          else
                            {
                              t = q_22;
                              {
                                ATerm k_22 = NULL;
                                k_22 = t;
                                if((v_11 != t))
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
                    t = m_22;
                  }
                t = SSL_copy(v_11, j_22);
                t = (ATerm) ATmakeAppl(sym_FILE_1, v_11);
              }
              ;
              LocalPopChoice(l_22);
            }
          else
            {
              t = i_22;
              t = u_11;
              t = k_0(t);
              if((v_11 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_11);
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
  {
    ATerm s_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_22 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_22 = ATgetArgument(t, 0);
            ATerm w_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(c_12, d_12);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm x_22 = ATgetFirst((ATermList) t);
            o_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_22;
        ;
        LocalPopChoice(t_22);
      }
    else
      {
        t = s_22;
        t = (ATerm) ATempty;
      }
    e_12 = t;
    t = SSL_table_put(c_12, d_12, e_12);
    t = (ATerm) ATmakeAppl(sym__2, c_12, d_12);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm l_86 (ATerm), ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL;
  k_12 = t;
  t = l_86(t);
  l_12 = t;
  {
    ATerm y_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(l_12, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(a_23);
      }
    else
      {
        t = y_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_12 = ATgetFirst((ATermList) t);
        m_12 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(l_12, (ATerm)ATmakeAppl(sym_Scopes_0), m_12);
    t = n_12;
    {
      ATerm a_2 (ATerm t)
      {
        ATerm p_12 = NULL;
        p_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_12, p_12);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(a_2, t);
      t = k_12;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm t)
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_87(t);
      t = h_87(t);
      ;
      LocalPopChoice(c_23);
    }
  else
    {
      t = b_23;
      t = h_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_86 (ATerm), ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
  s_12 = t;
  t = k_86(t);
  t_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_12, term_g_23);
  {
    ATerm h_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_23 = ATgetArgument(t, 0);
            ATerm m_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(t_12, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(k_23);
      }
    else
      {
        t = h_23;
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
  t = term_j_16;
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_13 = NULL;
      i_13 = t;
      t = SSL_remove(i_13);
      ;
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_j_16;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm p_89 (ATerm), ATerm t)
{
  ATerm a_13 = NULL;
  t = begin_scope_1_0(d_2, t);
  {
    ATerm e_2 (ATerm t)
    {
      ATerm e_13 = NULL;
      e_13 = t;
      {
        ATerm p_23 = t;
        int q_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(q_23);
          }
        else
          {
            t = p_23;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((a_13 != NULL) && (a_13 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              a_13 = ATgetFirst((ATermList) t);
            {
              ATerm r_23 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(a_13);
        t = map_1_0(f_2, t);
        t = e_13;
        t = end_scope_1_0(g_2, t);
      }
      return(t);
    }
    t = restore_always_2_0(p_89, e_2, t);
  }
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
      {
        ATerm u_23 = t;
        int v_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_22 = NULL;
            t = eval_config_0_0(t);
            z_22 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), z_22);
            t = z_22;
            ;
            LocalPopChoice(v_23);
          }
        else
          {
            t = u_23;
          }
      }
      ;
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      t = term_x_23;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm q_89 (ATerm), ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_13 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm b_24 = t;
          int c_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_22 = NULL;
              t = eval_config_0_0(t);
              v_22 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), v_22);
              t = v_22;
              ;
              LocalPopChoice(c_24);
            }
          else
            {
              t = b_24;
            }
          k_13 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, k_13);
        }
        ;
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        t = term_d_24;
      }
    t = q_89(t);
    t = copy_to_1_0(i_2, t);
    return(t);
  }
  t = xtc_temp_files_1_0(h_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL;
  o_13 = t;
  t = term_f_16;
  t = whoami_0_0(t);
  p_13 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), p_13), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = o_13;
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm r_13 = NULL;
  r_13 = t;
  if(match_string(t, "-k"))
    {
      t = r_13;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_13;
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL;
  s_13 = t;
  t = SSL_string_to_int(s_13);
  t_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), t_13);
  t = s_13;
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
  ATerm v_13 = NULL;
  v_13 = t;
  if(match_string(t, "-S"))
    {
      t = v_13;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_13;
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
  ATerm w_13 = NULL,x_13 = NULL;
  w_13 = t;
  t = SSL_string_to_int(w_13);
  x_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), x_13);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_13);
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
  ATerm a_14 = NULL,e_14 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_14 = NULL;
      t = term_f_16;
      t = d_0(t);
      f_14 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_24, term_u_24, f_14);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm j_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_14 = ATgetFirst((ATermList) t);
          e_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_14;
      t = a_0(t);
      t = term_f_16;
      t = b_0(t);
      j_14 = t;
      t = (ATerm) ATinsert(CheckATermList(e_14), j_14);
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm m_14 = NULL;
  m_14 = t;
  if(match_string(t, "-o"))
    {
      t = m_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_14;
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm n_14 = NULL;
  n_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), n_14);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_14);
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_v_24;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_2, w_2, x_2, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL;
  if(match_cons(t, sym__3))
    {
      s_14 = ATgetArgument(t, 0);
      t_14 = ATgetArgument(t, 1);
      u_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_14, t_14);
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
        t = SSL_table_get(s_14, t_14);
        ;
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        t = (ATerm) ATempty;
      }
    v_14 = t;
    t = SSL_table_put(s_14, t_14, (ATerm) ATinsert(CheckATermList(v_14), u_14));
    t = (ATerm) ATmakeAppl(sym__3, s_14, t_14, u_14);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_15 = NULL;
      t = term_f_16;
      t = j_0(t);
      j_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_24, term_u_24, j_15);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm n_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_15 = ATgetFirst((ATermList) t);
          g_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_15;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_15 = ATgetFirst((ATermList) t);
          i_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_15;
      t = h_0(t);
      t = h_15;
      t = i_0(t);
      n_15 = t;
      t = (ATerm) ATinsert(CheckATermList(i_15), n_15);
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm p_15 = NULL;
  p_15 = t;
  if(match_string(t, "-i"))
    {
      t = p_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_15;
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm q_15 = NULL;
  q_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), q_15);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_15);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_2, d_3, e_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_16;
  t = whoami_0_0(t);
  r_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), r_15));
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
ATerm foldr_2_0 (ATerm n_82 (ATerm), ATerm o_82 (ATerm), ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_82(t);
      ;
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      {
        ATerm u_15 = NULL,v_15 = NULL,y_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_15 = ATgetFirst((ATermList) t);
            v_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_15;
        t = foldr_2_0(n_82, o_82, t);
        y_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_15, y_15);
        t = o_82(t);
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
ATerm g_3 (ATerm t)
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
  ATerm b_16 = NULL,e_23 = NULL,f_23 = NULL;
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
  t = foldr_2_0(f_3, g_3, t);
  b_16 = t;
  t = SSL_TicksToSeconds(b_16);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_16 = NULL,o_16 = NULL,p_16 = NULL;
  m_16 = t;
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
        t = m_16;
        ;
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        t = m_16;
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
ATerm if_verbose1_1_0 (ATerm l_87 (ATerm), ATerm t)
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
        t = (ATerm) ATmakeAppl(sym__2, u_16, term_l_6);
        t = geq_0_0(t);
        t = s_16;
        t = l_87(t);
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
  t = term_f_16;
  t = whoami_0_0(t);
  x_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), w_16), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), x_16));
  t = (ATerm) ATmakeAppl(sym__2, term_e_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_25), w_16), term_d_6), x_16));
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
ATerm need_help_1_0 (ATerm r_91 (ATerm), ATerm t)
{
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm u_25 = t;
        int v_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_24 = NULL;
            t = eval_config_0_0(t);
            a_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), a_24);
            t = a_24;
            ;
            LocalPopChoice(v_25);
          }
        else
          {
            t = u_25;
          }
      }
      ;
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
      {
        ATerm k_3 (ATerm t)
        {
          ATerm w_25 = t;
          int y_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(y_25);
            }
          else
            {
              t = w_25;
              {
                ATerm z_25 = t;
                int a_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(a_26);
                  }
                else
                  {
                    t = z_25;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(k_3, t);
      }
    }
  t = r_91(t);
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
        ATerm e_17 = NULL,f_17 = NULL;
        t = a_17;
        t = g_0(t);
        e_17 = t;
        t = z_16;
        t = f_0(t);
        f_17 = t;
        t = a_17;
        {
          ATerm l_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(e_17), f_17);
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
      t = term_f_16;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm u_68 (ATerm), ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL;
  j_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_17);
  g_17 = t;
  t = h_17;
  t = u_68(t);
  i_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, i_17), g_17);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm m_17 = NULL;
  m_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_17), term_b_26);
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
      {
        ATerm m_3 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(m_3, t);
      }
    }
  t = term_h_26;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, o_3, t);
  t = map_1_0(p_3, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm v_68 (ATerm), ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL;
  q_17 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      o_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_17);
  n_17 = t;
  t = o_17;
  t = v_68(t);
  p_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, p_17), n_17);
  return(t);
}
ATerm fetch_1_0 (ATerm h_76 (ATerm), ATerm t)
{
  ATerm u_17 (ATerm t)
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(h_76, _id, t);
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
ATerm at_end_1_0 (ATerm n_76 (ATerm), ATerm t)
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
        t = n_76(t);
      }
    return(t);
  }
  t = k_18(t);
  return(t);
}
ATerm _2_0 (ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  q_18 = t;
  if(match_cons(t, sym__2))
    {
      m_18 = ATgetArgument(t, 0);
      n_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_18);
  l_18 = t;
  t = m_18;
  t = z_58(t);
  o_18 = t;
  t = n_18;
  t = a_59(t);
  p_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, o_18, p_18), l_18);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm v_18 = NULL;
  v_18 = t;
  t = SSL_explode_string(v_18);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm w_18 = NULL;
  w_18 = t;
  t = SSL_explode_string(w_18);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm u_18 = NULL;
  t = _2_0(r_3, s_3, t);
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_18 = NULL,z_18 = NULL;
        if(match_cons(t, sym__2))
          {
            y_18 = ATgetArgument(t, 0);
            z_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_18;
        {
          ATerm t_3 (ATerm t)
          {
            t = z_18;
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
    u_18 = t;
    t = SSL_implode_string(u_18);
  }
  return(t);
}
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  ATerm e_19 (ATerm t)
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
        t = Cons_2_0(w_75, e_19, t);
      }
    return(t);
  }
  t = e_19(t);
  return(t);
}
ATerm u_3 (ATerm t)
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
            t = map_1_0(u_3, t);
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
ATerm v_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_3 (ATerm t)
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
ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_n_27;
  return(t);
}
ATerm d_4 (ATerm t)
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
      t = Option_3_0(v_3, w_3, y_3, t);
      ;
      LocalPopChoice(q_27);
    }
  else
    {
      t = p_27;
      t = Option_3_0(z_3, a_4, d_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL;
  g_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_20 = ATgetFirst((ATermList) t);
      d_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_20);
  b_20 = t;
  t = c_20;
  t = o_63(t);
  e_20 = t;
  t = d_20;
  t = p_63(t);
  f_20 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(f_20), e_20), b_20);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm l_20 = NULL;
  l_20 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_20);
  t = (ATerm) ATmakeAppl(sym_Program_1, l_20);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_93 (ATerm), ATerm t)
{
  ATerm k_20 = NULL;
  k_20 = t;
  {
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_27;
        t = p_93(t);
        ;
        LocalPopChoice(s_27);
      }
    else
      {
        t = r_27;
      }
    t = k_20;
    {
      ATerm h_4 (ATerm t)
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
                t = p_93(t);
                t = Cons_2_0(_id, h_4, t);
              }
            ;
            LocalPopChoice(v_27);
          }
        else
          {
            t = u_27;
            {
              ATerm n_20 = NULL,o_20 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_20 = ATgetFirst((ATermList) t);
                  o_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_20), (ATerm) ATmakeAppl(sym_Undefined_1, n_20));
            }
          }
        return(t);
      }
      t = Cons_2_0(e_4, h_4, t);
    }
  }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm y_20 = NULL;
  y_20 = t;
  if(match_string(t, "--help"))
    {
      t = y_20;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_20;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_20;
        }
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_y_27;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_z_27;
  return(t);
}
ATerm n_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_93 (ATerm), ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
  v_20 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = v_20;
  {
    ATerm i_4 (ATerm t)
    {
      ATerm a_28 = t;
      int b_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_93(t);
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
                t = Option_3_0(j_4, k_4, m_4, t);
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
    t = parse_options_p__1_0(i_4, t);
    {
      ATerm e_28 = t;
      int f_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_21 = NULL;
          d_21 = t;
          {
            ATerm g_28 = t;
            int h_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = d_21;
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
                      t = fetch_1_0(n_4, t);
                    }
                  t = d_21;
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
                  t = d_21;
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
                ATerm r_4 (ATerm t)
                {
                  ATerm t_4 (ATerm t)
                  {
                    if(((w_20 != NULL) && (w_20 != t)))
                      _fail(t);
                    else
                      w_20 = t;
                    return(t);
                  }
                  t = Undefined_1_0(t_4, t);
                  return(t);
                }
                t = fetch_1_0(r_4, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(w_20)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_e_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_20)), term_q_28));
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
      x_20 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = x_20;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm t)
{
  ATerm g_21 = NULL;
  t = parse_options_1_0(t_91, t);
  g_21 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), g_21);
  t = g_21;
  t = v_91(t);
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_91, t);
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
              t = w_91(t);
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
ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_v_28;
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_w_28;
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_x_28;
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm h_21 = NULL;
  t = term_y_28;
  t = xtc_find_0_0(t);
  h_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_21), term_z_28);
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_x_28;
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm i_21 = NULL;
  t = term_y_28;
  t = xtc_find_0_0(t);
  i_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_21), term_z_28);
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_a_29;
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_a_29;
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm b_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(c_29);
    }
  else
    {
      t = b_29;
      {
        ATerm d_29 = t;
        int e_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(e_29);
          }
        else
          {
            t = d_29;
            {
              ATerm f_29 = t;
              int g_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(z_4, b_5, e_5, t);
                  ;
                  LocalPopChoice(g_29);
                }
              else
                {
                  t = f_29;
                  {
                    ATerm h_29 = t;
                    int i_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(i_29);
                      }
                    else
                      {
                        t = h_29;
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
ATerm astratego2text_0_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm f_5 (ATerm t)
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
          t = xtc_transform_file_2_0(g_5, h_5, t);
        }
      else
        {
          t = j_29;
          t = xtc_transform_term_2_0(i_5, j_5, t);
        }
      {
        ATerm n_29 = t;
        int o_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_29 = t;
            int q_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(q_29);
              }
            else
              {
                t = p_29;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(o_29);
            t = xtc_transform_file_2_0(m_5, n_5, t);
          }
        else
          {
            t = n_29;
            t = xtc_transform_term_2_0(p_5, q_5, t);
          }
      }
      return(t);
    }
    t = xtc_io_1_0(f_5, t);
    return(t);
  }
  t = option_wrap_4_0(x_4, default_usage_0_0, _id, y_4, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = astratego2text_0_0(t);
  return(t);
}
