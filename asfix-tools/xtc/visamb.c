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
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_v_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_y_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_m_26;
ATerm term_h_26;
ATerm term_w_25;
ATerm term_f_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_l_24;
ATerm term_e_24;
ATerm term_o_23;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_x_20;
ATerm term_m_20;
ATerm term_h_17;
ATerm term_u_16;
ATerm term_q_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_p_15;
ATerm term_j_15;
ATerm term_w_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_g_14;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_d_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_t_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_s_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_b_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_i_8;
ATerm term_d_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_v_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_f_7;
ATerm term_c_7;
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
ATerm term_r_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_c_6;
ATerm term_z_5;
void init_constant_terms (void)
{
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_6, term_o_6, term_p_6);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_6, term_t_6, term_u_6);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_6, term_x_6, term_y_6);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_7, term_b_7, term_c_7);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_7, term_i_7, term_n_7);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_7, term_q_7, term_r_7);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_7, term_v_7, term_x_7);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_7, term_a_8, term_b_8);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_8, term_k_8, term_l_8);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_8, term_y_8, term_z_8);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_9, term_h_9, term_i_9);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_9, term_l_9, term_m_9);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_9, term_s_9, term_u_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_9, term_a_10, term_b_10);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_10, term_e_10, term_r_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_11, term_c_11, term_d_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_n_11, term_o_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_t_11, term_u_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_11, term_a_12, term_c_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_f_12, term_g_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_12, term_j_12, term_k_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_12, term_p_12, term_q_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_x_12, term_y_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_13, term_b_13, term_d_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_13, term_n_13, term_o_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_13, term_r_13, term_v_13);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_13, term_g_14, term_k_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_t_14);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("visamb.pp.af", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.pp.af", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_24);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym__3, term_o_27, term_p_27, term_m_16);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Vis-amb", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
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
ATerm j_5 (ATerm w_4, ATerm);
ATerm m_5 (ATerm y_4, ATerm z_4, ATerm a_5, ATerm);
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
ATerm y_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm t_9 (ATerm n_9, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm b_1 (ATerm);
ATerm d_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm f_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm p_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm j_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm m_1 (ATerm);
ATerm t_1 (ATerm);
ATerm v_1 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm w_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm build_pp_tables_0_0 (ATerm);
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
ATerm g_3 (ATerm);
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
ATerm u_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm a_4 (ATerm);
ATerm c_4 (ATerm);
ATerm e_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm);
ATerm g_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm o_93 (ATerm), ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm r_4 (ATerm);
ATerm parse_options_1_0 (ATerm n_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm h_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm t_0 = NULL,u_0 = NULL;
  t_0 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_z_5;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          u_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(u_0, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm c_72 (ATerm), ATerm t)
{
  ATerm w_0 = NULL,z_0 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      w_0 = ATgetArgument(t, 0);
      z_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_0, term_c_6);
  t = open_stream_0_0(t);
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_1, z_0);
  t = c_72(t);
  t = fclose_0_0(t);
  t = z_0;
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_6 = ATgetArgument(t, 0);
      if(match_cons(d_6, sym_Stream_1))
        {
          o_1 = ATgetArgument(d_6, 0);
        }
      else
        _fail(t);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(o_1, p_1);
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_1);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm g_1 = NULL,n_1 = NULL;
  g_1 = t;
  t = xtc_new_file_0_0(t);
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_1, g_1);
  t = WriteToFile_1_0(c_0, t);
  t = SSL_close_file(n_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, n_1);
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
  ATerm s_1 = NULL;
  s_1 = t;
  t = SSL_explode_string(s_1);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm r_1 = NULL;
  t = map_1_0(e_0, t);
  t = concat_0_0(t);
  r_1 = t;
  t = SSL_implode_string(r_1);
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
        ATerm c_1 = NULL;
        t = SSL_int_to_string(y_2);
        c_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_6), c_1), term_h_6);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm u_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          y_2 = ATgetArgument(t, 0);
          a_3 = ATgetArgument(t, 1);
          c_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(a_3);
      u_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_3), term_k_6), u_1), term_j_6), y_2);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm h_3 = NULL;
  ATerm n_0 (ATerm t)
  {
    t = i_76(t);
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
    ATerm l_6 = t;
    int m_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_14), term_l_14), term_w_13), term_p_13), term_i_13), term_z_12), term_r_12), term_l_12), term_h_12), term_d_12), term_v_11), term_p_11), term_f_11), term_u_10), term_c_10), term_w_9), term_o_9), term_j_9), term_b_9), term_m_8), term_d_8), term_y_7), term_s_7), term_o_7), term_f_7), term_z_6), term_v_6), term_r_6);
        {
          ATerm o_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm c_15 = ATgetArgument(t, 0);
                if((i_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm d_15 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(o_0, t);
        }
        ;
        LocalPopChoice(m_6);
      }
    else
      {
        t = l_6;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, i_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm m_3 = NULL;
  m_3 = t;
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_3 = NULL,b_2 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_15 = ATgetArgument(t, 0);
            v_3 = ATgetArgument(t, 1);
            {
              ATerm h_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = v_3;
        {
          ATerm i_15 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_15;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          b_2 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_2), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_j_15, (ATerm) ATinsert(ATinsert(ATempty, b_2), term_p_15));
        }
        ;
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
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
  ATerm z_3 = NULL,b_4 = NULL;
  z_3 = t;
  t = fork_0_0(t);
  b_4 = t;
  {
    ATerm q_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = z_3;
        t = r_70(t);
        ;
        LocalPopChoice(r_15);
      }
    else
      {
        t = q_15;
        t = SSL_waitpid(b_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm t_15 = ATgetArgument(t, 0);
            if(((ATgetType(t_15) != AT_INT) || (ATgetInt((ATermInt) t_15) != 0)))
              _fail(t);
            {
              ATerm x_15 = ATgetArgument(t, 1);
            }
            {
              ATerm y_15 = ATgetArgument(t, 2);
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
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL,p_4 = NULL,q_4 = NULL;
  if(match_cons(t, sym__2))
    {
      i_4 = ATgetArgument(t, 0);
      j_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_86(t);
  k_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_4, i_4, j_4);
  t = table_push_0_0(t);
  {
    ATerm b_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(k_4, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(c_16);
      }
    else
      {
        t = b_16;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_4 = ATgetFirst((ATermList) t);
        q_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(k_4, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(q_4), (ATerm) ATinsert(CheckATermList(p_4), i_4)));
    t = (ATerm) ATmakeAppl(sym__2, i_4, j_4);
  }
  return(t);
}
ATerm j_5 (ATerm w_4, ATerm t)
{
  t = w_4;
  {
    ATerm e_16 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_16 = ATgetArgument(t, 0);
            ATerm h_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_16;
      }
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
    t = (ATerm) ATmakeAppl(sym__2, w_4, term_c_6);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm m_5 (ATerm y_4, ATerm z_4, ATerm a_5, ATerm t)
{
  t = SSL_open_file(y_4, z_4);
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm f_5 = NULL,g_5 = NULL,i_5 = NULL;
  f_5 = t;
  if(match_cons(t, sym__2))
    {
      g_5 = ATgetArgument(t, 0);
      i_5 = ATgetArgument(t, 1);
      {
        ATerm i_16 = t;
        int l_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_5(f_5, t);
            ;
            LocalPopChoice(l_16);
          }
        else
          {
            t = i_16;
            t = m_5(g_5, i_5, f_5, t);
          }
      }
    }
  else
    {
      t = j_5(f_5, t);
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
  ATerm o_5 = NULL;
  t = term_m_16;
  t = new_0_0(t);
  o_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_5, term_n_16);
  t = conc_strings_0_0(t);
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_6 = NULL;
        b_6 = t;
        t = SSL_access(b_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
      }
  }
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = term_q_16;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm e_6 = NULL;
  t = new_file_0_0(t);
  e_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_6, term_c_6);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, e_6, term_m_16);
  t = assert_1_0(p_0, t);
  t = e_6;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm d_7 = NULL,g_7 = NULL;
  d_7 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm d_4 = NULL,f_4 = NULL,v_4 = NULL,c_5 = NULL;
      t = d_7;
      t = xtc_new_file_0_0(t);
      d_4 = t;
      t = m_0(t);
      f_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_4, (ATerm) ATinsert(ATinsert(ATempty, d_4), term_u_16));
      {
        ATerm v_16 = t;
        int x_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm z_16 = ATgetArgument(t, 0);
                ATerm d_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_4;
            {
              ATerm q_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, d_4), term_u_16);
                return(t);
              }
              t = at_end_1_0(q_0, t);
            }
            ;
            LocalPopChoice(x_16);
          }
        else
          {
            t = v_16;
            {
              ATerm u_4 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, f_4, (ATerm) ATinsert(ATinsert(ATempty, d_4), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm g_17 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) g_17) != ATmakeSymbol("", 0, ATtrue)))
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
        c_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_5, v_4);
        {
          ATerm r_0 (ATerm t)
          {
            t = SSL_execvp(c_5, v_4);
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
      ATerm n_5 = NULL,p_5 = NULL,f_6 = NULL,g_6 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          g_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_7;
      t = xtc_new_file_0_0(t);
      n_5 = t;
      t = m_0(t);
      p_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_5), term_u_16), g_7), term_h_17));
      {
        ATerm i_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm q_17 = ATgetArgument(t, 0);
                ATerm w_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = p_5;
            {
              ATerm s_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_5), term_u_16), g_7), term_h_17);
                return(t);
              }
              t = at_end_1_0(s_0, t);
            }
            ;
            LocalPopChoice(p_17);
          }
        else
          {
            t = i_17;
            {
              ATerm a_6 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, p_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_5), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), g_7), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm x_17 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) x_17) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  a_6 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = a_6;
              t = concat_0_0(t);
            }
          }
        f_6 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        g_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_6, f_6);
        {
          ATerm v_0 (ATerm t)
          {
            t = SSL_execvp(g_6, f_6);
            return(t);
          }
          t = fork_and_wait_1_0(v_0, t);
          t = SSL_close_file(n_5);
          t = (ATerm) ATmakeAppl(sym_FILE_1, n_5);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm m_68 (ATerm), ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL;
  m_7 = t;
  if(match_cons(t, sym_FILE_1))
    {
      k_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_7);
  j_7 = t;
  t = k_7;
  t = m_68(t);
  l_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, l_7), j_7);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  ATerm z_17 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_7 = NULL,w_7 = NULL;
      u_7 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm d_18 = t;
        int e_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_6 = NULL;
            t = eval_config_0_0(t);
            q_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), q_6);
            t = q_6;
            ;
            LocalPopChoice(e_18);
          }
        else
          {
            t = d_18;
          }
        w_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_7, term_n_13);
        t = geq_0_0(t);
        t = u_7;
        t = v_87(t);
      }
      ;
      LocalPopChoice(c_18);
    }
  else
    {
      t = z_17;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_87 (ATerm), ATerm t)
{
  ATerm g_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_8 = NULL,e_8 = NULL;
      c_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm k_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_7 = NULL;
            t = eval_config_0_0(t);
            e_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_7);
            t = e_7;
            ;
            LocalPopChoice(l_18);
          }
        else
          {
            t = k_18;
          }
        e_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_8, term_l_9);
        t = geq_0_0(t);
        t = c_8;
        t = u_87(t);
      }
      ;
      LocalPopChoice(j_18);
    }
  else
    {
      t = g_18;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm m_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_8 = NULL,j_8 = NULL;
      g_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm w_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_8 = NULL;
            t = eval_config_0_0(t);
            f_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), f_8);
            t = f_8;
            ;
            LocalPopChoice(x_18);
          }
        else
          {
            t = w_18;
          }
        j_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_8, term_b_7);
        t = geq_0_0(t);
        t = g_8;
        t = w_87(t);
      }
      ;
      LocalPopChoice(n_18);
    }
  else
    {
      t = m_18;
    }
  return(t);
}
ATerm union_1_0 (ATerm a_80 (ATerm), ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL;
  if(match_cons(t, sym__2))
    {
      n_8 = ATgetArgument(t, 0);
      o_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_8;
  {
    ATerm p_8 (ATerm t)
    {
      ATerm c_19 = t;
      int f_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = o_8;
          ;
          LocalPopChoice(f_19);
        }
      else
        {
          t = c_19;
          {
            ATerm g_19 = t;
            int h_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_8 = NULL,q_8 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    h_8 = ATgetFirst((ATermList) t);
                    q_8 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = o_8;
                {
                  ATerm x_0 (ATerm t)
                  {
                    ATerm r_8 = NULL;
                    r_8 = t;
                    t = (ATerm) ATmakeAppl(sym__2, h_8, r_8);
                    t = a_80(t);
                    return(t);
                  }
                  t = fetch_1_0(x_0, t);
                  t = q_8;
                  t = p_8(t);
                }
                ;
                LocalPopChoice(h_19);
              }
            else
              {
                t = g_19;
                t = Cons_2_0(_id, p_8, t);
              }
          }
        }
      return(t);
    }
    t = p_8(t);
  }
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm a_9 = NULL;
  if(match_cons(t, sym__2))
    {
      a_9 = ATgetArgument(t, 0);
      if((a_9 != ATgetArgument(t, 1)))
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
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL;
  if(match_cons(t, sym__3))
    {
      s_8 = ATgetArgument(t, 0);
      t_8 = ATgetArgument(t, 1);
      u_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_8, t_8);
  {
    ATerm i_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_19 = ATgetArgument(t, 0);
            ATerm m_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(s_8, t_8);
        ;
        LocalPopChoice(k_19);
      }
    else
      {
        t = i_19;
        t = (ATerm) ATempty;
      }
    v_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_8, u_8);
    t = union_1_0(y_0, t);
    w_8 = t;
    t = SSL_table_put(s_8, t_8, w_8);
    t = (ATerm) ATmakeAppl(sym__3, s_8, t_8, u_8);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL;
  if(match_cons(t, sym__2))
    {
      d_9 = ATgetArgument(t, 0);
      c_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_9;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm e_9 = NULL,f_9 = NULL;
      if(match_cons(t, sym__2))
        {
          e_9 = ATgetArgument(t, 0);
          f_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, d_9, e_9, f_9);
      t = y_87(t);
      return(t);
    }
    t = map_1_0(a_1, t);
  }
  return(t);
}
ATerm t_9 (ATerm n_9, ATerm t)
{
  t = SSL_fclose(n_9);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL;
  r_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_9 = ATgetArgument(t, 0);
      {
        ATerm n_19 = t;
        int o_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_9);
            ;
            LocalPopChoice(o_19);
          }
        else
          {
            t = n_19;
            t = t_9(r_9, t);
          }
      }
    }
  else
    {
      t = t_9(r_9, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_9 = NULL;
  t = SSL_stdin_stream();
  v_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_9);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_9 = NULL;
  t = SSL_stdout_stream();
  x_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_9);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_9 = NULL;
  t = SSL_stderr_stream();
  z_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_9);
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm i_10 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      i_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_10;
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm m_10 = NULL;
  m_10 = t;
  t = SSL_is_string(m_10);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_19 = ATgetArgument(t, 0);
      ATerm r_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_11 = NULL,i_11 = NULL;
        h_11 = t;
        t = SSL_explode_term(h_11);
        if(match_cons(t, sym__2))
          {
            ATerm x_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) x_19) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm y_19 = ATgetArgument(t, 1);
              if(((ATgetType(y_19) == AT_LIST) && !(ATisEmpty(y_19))))
                {
                  i_11 = ATgetFirst((ATermList) y_19);
                  {
                    ATerm b_20 = (ATerm) ATgetNext((ATermList) y_19);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_11;
        if(match_cons(t, sym_stderr_0))
          {
            t = i_11;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = i_11;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = i_11;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(w_19);
      }
    else
      {
        t = s_19;
        {
          ATerm c_20 = t;
          int d_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL;
              t = _2_0(b_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  f_10 = ATgetArgument(t, 0);
                  g_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(f_10, g_10);
              h_10 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, h_10);
              ;
              LocalPopChoice(d_20);
            }
          else
            {
              t = c_20;
              {
                ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
                t = _2_0(d_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    j_10 = ATgetArgument(t, 0);
                    k_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(j_10, k_10);
                l_10 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, l_10);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL;
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_10 = NULL;
      q_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_10, term_m_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_20);
    }
  else
    {
      t = e_20;
      {
        ATerm j_11 = NULL;
        j_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, j_11), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = j_11;
        _fail(t);
      }
    }
  n_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(p_10);
  o_10 = t;
  t = n_10;
  t = fclose_0_0(t);
  t = o_10;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_10 = NULL;
      s_10 = t;
      t = SSL_access(s_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(o_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = n_20;
      {
        ATerm r_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_11 = NULL;
            ATerm v_20 = t;
            if((PushChoice() == 0))
              {
                ATerm t_10 = NULL;
                t_10 = t;
                t = SSL_access(t_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_20;
              }
            r_11 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_11), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = r_11;
            ;
            LocalPopChoice(u_20);
          }
        else
          {
            t = r_20;
            {
              ATerm w_11 = NULL;
              w_11 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_11), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = w_11;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm b_12 = NULL;
  b_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_12), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
  t = b_12;
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm s_12 = NULL;
  s_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_12), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
  t = s_12;
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm y_10 = NULL;
  y_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = y_10;
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm z_10 = NULL;
  z_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
  t = z_10;
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm a_11 = NULL;
  a_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = a_11;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
  v_10 = t;
  t = if_verbose5_1_0(f_1, t);
  {
    ATerm w_20 = t;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, v_10));
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_20;
      }
    w_10 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, v_10));
    t = w_10;
    t = if_verbose4_1_0(h_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(i_1, t);
    x_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_20, x_10);
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(j_1, t);
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, v_10), (ATerm) ATempty);
    t = (ATerm) ATmakeAppl(sym__3, term_x_20, (ATerm)ATmakeAppl(sym_Imported_1, v_10), (ATerm) ATempty);
    t = if_verbose4_1_0(k_1, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm p_83 (ATerm), ATerm t)
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      {
        ATerm e_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 (ATerm t)
            {
              t = filter_1_0(p_83, t);
              return(t);
            }
            t = Cons_2_0(p_83, l_1, t);
            ;
            LocalPopChoice(f_21);
          }
        else
          {
            t = e_21;
            {
              ATerm e_11 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm g_21 = ATgetFirst((ATermList) t);
                  e_11 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = e_11;
              t = filter_1_0(p_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm j_85 (ATerm), ATerm t)
{
  ATerm g_11 (ATerm t)
  {
    ATerm h_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_85(t);
        t = g_11(t);
        ;
        LocalPopChoice(j_21);
      }
    else
      {
        t = h_21;
      }
    return(t);
  }
  t = g_11(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm k_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm n_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_13 = NULL;
            t = eval_config_0_0(t);
            s_13 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), s_13);
            t = s_13;
            ;
            LocalPopChoice(o_21);
          }
        else
          {
            t = n_21;
          }
      }
      ;
      LocalPopChoice(m_21);
    }
  else
    {
      t = k_21;
      {
        ATerm p_21 = t;
        int q_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(q_21);
          }
        else
          {
            t = p_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm c_14 = NULL;
  c_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_14), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
  t = c_14;
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm r_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_21;
      }
  }
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm n_14 = NULL;
  n_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_14), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
  t = n_14;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm k_11 = NULL;
  t = if_verbose5_1_0(m_1, t);
  k_11 = t;
  {
    ATerm s_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(t_21);
      }
    else
      {
        t = s_21;
        {
          ATerm l_11 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          l_11 = t;
          t = repeat_1_0(t_1, t);
          t = l_11;
        }
      }
    t = k_11;
    t = if_verbose5_1_0(v_1, t);
  }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm x_14 = NULL;
  x_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_14), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = x_14;
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm y_18 = NULL;
  y_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_18), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = y_18;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm y_21 = NULL;
  t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
  t = map_1_0(a_2, t);
  y_21 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_21), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
  t = y_21;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL;
  w_21 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), w_21);
  x_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_21, x_21);
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(w_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm z_21 = t;
        int a_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_16 = NULL,k_16 = NULL,c_17 = NULL;
            if(match_cons(t, sym__2))
              {
                j_16 = ATgetArgument(t, 0);
                k_16 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, j_16));
            {
              ATerm x_1 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((k_16 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((c_17 != NULL) && (c_17 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      c_17 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(x_1, t);
              t = not_null(c_17);
            }
            ;
            LocalPopChoice(a_22);
          }
        else
          {
            t = z_21;
            {
              ATerm f_18 = NULL,p_18 = NULL;
              f_18 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, f_18));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm b_22 = ATgetFirst((ATermList) t);
                  if(match_cons(b_22, sym__2))
                    {
                      ATerm d_22 = ATgetArgument(b_22, 0);
                      p_18 = ATgetArgument(b_22, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm c_22 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = p_18;
            }
          }
        t = if_verbose5_1_0(y_1, t);
      }
      ;
      LocalPopChoice(v_21);
    }
  else
    {
      t = u_21;
      {
        ATerm q_11 = NULL;
        q_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), q_11), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_22), q_11), term_f_22);
        t = if_verbose5_1_0(z_1, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm build_pp_tables_0_0 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL;
  t = term_h_22;
  t = xtc_find_0_0(t);
  x_11 = t;
  t = term_i_22;
  t = xtc_find_0_0(t);
  y_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_11), term_j_22), x_11), term_j_22);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL;
  n_12 = t;
  if(match_cons(t, sym_FILE_1))
    {
      o_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_22 = NULL;
        t = n_12;
        t = k_0(t);
        e_22 = t;
        {
          ATerm o_22 = t;
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
              t = o_22;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(o_12, e_22);
          t = (ATerm) ATmakeAppl(sym_FILE_1, o_12);
        }
        ;
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
        {
          ATerm r_22 = t;
          int s_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_22 = NULL;
              t = n_12;
              t = k_0(t);
              k_22 = t;
              {
                ATerm t_22 = t;
                if((PushChoice() == 0))
                  {
                    ATerm u_22 = t;
                    int v_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(v_22);
                      }
                    else
                      {
                        t = u_22;
                        {
                          ATerm x_22 = t;
                          int y_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(y_22);
                            }
                          else
                            {
                              t = x_22;
                              {
                                ATerm l_22 = NULL;
                                l_22 = t;
                                if((o_12 != t))
                                  {
                                    _fail(t);
                                  }
                                t = l_22;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_22;
                  }
                t = SSL_copy(o_12, k_22);
                t = (ATerm) ATmakeAppl(sym_FILE_1, o_12);
              }
              ;
              LocalPopChoice(s_22);
            }
          else
            {
              t = r_22;
              t = n_12;
              t = k_0(t);
              if((o_12 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_12);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
  if(match_cons(t, sym__2))
    {
      u_12 = ATgetArgument(t, 0);
      v_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_12, v_12);
  {
    ATerm z_22 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_22 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm c_23 = ATgetArgument(t, 0);
            ATerm d_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(u_12, v_12);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_23 = ATgetFirst((ATermList) t);
            p_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_22;
        ;
        LocalPopChoice(b_23);
      }
    else
      {
        t = z_22;
        t = (ATerm) ATempty;
      }
    w_12 = t;
    t = SSL_table_put(u_12, v_12, w_12);
    t = (ATerm) ATmakeAppl(sym__2, u_12, v_12);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm k_86 (ATerm), ATerm t)
{
  ATerm c_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL;
  c_13 = t;
  t = k_86(t);
  e_13 = t;
  {
    ATerm i_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(e_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = i_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_13 = ATgetFirst((ATermList) t);
        f_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(e_13, (ATerm)ATmakeAppl(sym_Scopes_0), f_13);
    t = g_13;
    {
      ATerm c_2 (ATerm t)
      {
        ATerm h_13 = NULL;
        h_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_13, h_13);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(c_2, t);
      t = c_13;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm t)
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_87(t);
      t = g_87(t);
      ;
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      t = g_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_86 (ATerm), ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
  k_13 = t;
  t = j_86(t);
  l_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_13, term_o_23);
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_23 = ATgetArgument(t, 0);
            ATerm s_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(l_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        t = (ATerm) ATempty;
      }
    m_13 = t;
    t = SSL_table_put(l_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(m_13), (ATerm) ATempty));
    t = k_13;
  }
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_q_16;
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_13 = NULL;
      x_13 = t;
      t = SSL_remove(x_13);
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_q_16;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm o_89 (ATerm), ATerm t)
{
  ATerm t_13 = NULL;
  t = begin_scope_1_0(d_2, t);
  {
    ATerm e_2 (ATerm t)
    {
      ATerm u_13 = NULL;
      u_13 = t;
      {
        ATerm v_23 = t;
        int w_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(w_23);
          }
        else
          {
            t = v_23;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((t_13 != NULL) && (t_13 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              t_13 = ATgetFirst((ATermList) t);
            {
              ATerm y_23 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(t_13);
        t = map_1_0(f_2, t);
        t = u_13;
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
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
      {
        ATerm c_24 = t;
        int d_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_23 = NULL;
            t = eval_config_0_0(t);
            a_23 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), a_23);
            t = a_23;
            ;
            LocalPopChoice(d_24);
          }
        else
          {
            t = c_24;
          }
      }
      ;
      LocalPopChoice(a_24);
    }
  else
    {
      t = z_23;
      t = term_e_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm p_89 (ATerm), ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_13 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm i_24 = t;
          int k_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_22 = NULL;
              t = eval_config_0_0(t);
              w_22 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), w_22);
              t = w_22;
              ;
              LocalPopChoice(k_24);
            }
          else
            {
              t = i_24;
            }
          z_13 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, z_13);
        }
        ;
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        t = term_z_5;
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
  ATerm a_14 = NULL,b_14 = NULL;
  a_14 = t;
  t = term_m_16;
  t = whoami_0_0(t);
  b_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), b_14), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = a_14;
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm d_14 = NULL;
  d_14 = t;
  if(match_string(t, "-k"))
    {
      t = d_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_14;
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL;
  e_14 = t;
  t = SSL_string_to_int(e_14);
  f_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), f_14);
  t = e_14;
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_l_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_2, k_2, l_2, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm h_14 = NULL;
  h_14 = t;
  if(match_string(t, "-S"))
    {
      t = h_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_14;
    }
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_p_24;
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_q_24;
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
  ATerm i_14 = NULL,j_14 = NULL;
  i_14 = t;
  t = SSL_string_to_int(i_14);
  j_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_14);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_14);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_r_24;
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
  t = term_s_24;
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_t_24;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_2, n_2, o_2, t);
      ;
      LocalPopChoice(v_24);
    }
  else
    {
      t = u_24;
      {
        ATerm w_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_2, q_2, r_2, t);
            ;
            LocalPopChoice(x_24);
          }
        else
          {
            t = w_24;
            t = Option_3_0(s_2, t_2, u_2, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm m_14 = NULL,o_14 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_14 = NULL;
      t = term_m_16;
      t = d_0(t);
      p_14 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_24, term_z_24, p_14);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_14 = ATgetFirst((ATermList) t);
          o_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_14;
      t = a_0(t);
      t = term_m_16;
      t = b_0(t);
      s_14 = t;
      t = (ATerm) ATinsert(CheckATermList(o_14), s_14);
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm u_14 = NULL;
  u_14 = t;
  if(match_string(t, "-o"))
    {
      t = u_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_14;
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm v_14 = NULL;
  v_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), v_14);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_14);
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_2, x_2, z_2, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL;
  if(match_cons(t, sym__3))
    {
      y_14 = ATgetArgument(t, 0);
      z_14 = ATgetArgument(t, 1);
      a_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_14, z_14);
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_25 = ATgetArgument(t, 0);
            ATerm e_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(y_14, z_14);
        ;
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        t = (ATerm) ATempty;
      }
    b_15 = t;
    t = SSL_table_put(y_14, z_14, (ATerm) ATinsert(CheckATermList(b_15), a_15));
    t = (ATerm) ATmakeAppl(sym__3, y_14, z_14, a_15);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_15 = NULL;
      t = term_m_16;
      t = j_0(t);
      o_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_24, term_z_24, o_15);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_15 = ATgetFirst((ATermList) t);
          l_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_15;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_15 = ATgetFirst((ATermList) t);
          n_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_15;
      t = h_0(t);
      t = m_15;
      t = i_0(t);
      s_15 = t;
      t = (ATerm) ATinsert(CheckATermList(n_15), s_15);
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm u_15 = NULL;
  u_15 = t;
  if(match_string(t, "-i"))
    {
      t = u_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_15;
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm v_15 = NULL;
  v_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), v_15);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_15);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_f_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_3, d_3, e_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_16;
  t = whoami_0_0(t);
  w_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), w_15));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm h_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_23 = NULL;
        t = eval_config_0_0(t);
        e_23 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_23);
        t = e_23;
        ;
        LocalPopChoice(i_25);
      }
    else
      {
        t = h_25;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm t)
{
  ATerm j_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_82(t);
      ;
      LocalPopChoice(k_25);
    }
  else
    {
      t = j_25;
      {
        ATerm z_15 = NULL,a_16 = NULL,d_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_15 = ATgetFirst((ATermList) t);
            a_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_16;
        t = foldr_2_0(m_82, n_82, t);
        d_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_15, d_16);
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
  t = term_o_24;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL;
  if(match_cons(t, sym__2))
    {
      j_23 = ATgetArgument(t, 0);
      k_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(j_23, k_23);
        ;
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        t = SSL_addr(j_23, k_23);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_16 = NULL,f_23 = NULL,g_23 = NULL;
  t = times_0_0(t);
  f_23 = t;
  t = SSL_explode_term(f_23);
  if(match_cons(t, sym__2))
    {
      ATerm n_25 = ATgetArgument(t, 0);
      g_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_23;
  t = foldr_2_0(f_3, g_3, t);
  g_16 = t;
  t = SSL_TicksToSeconds(g_16);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
  r_16 = t;
  if(match_cons(t, sym__2))
    {
      s_16 = ATgetArgument(t, 0);
      t_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_16;
        if((s_16 != t))
          {
            _fail(t);
          }
        t = r_16;
        ;
        LocalPopChoice(p_25);
      }
    else
      {
        t = o_25;
        t = r_16;
        {
          ATerm q_25 = t;
          int r_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_16, t_16);
              ;
              LocalPopChoice(r_25);
            }
          else
            {
              t = q_25;
              t = SSL_gtr(s_16, t_16);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_16, t_16);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_16 = NULL,y_16 = NULL;
      w_16 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm u_25 = t;
        int v_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_23 = NULL;
            t = eval_config_0_0(t);
            x_23 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), x_23);
            t = x_23;
            ;
            LocalPopChoice(v_25);
          }
        else
          {
            t = u_25;
          }
        y_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_16, term_o_6);
        t = geq_0_0(t);
        t = w_16;
        t = r_87(t);
      }
      ;
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL;
  t = run_time_0_0(t);
  a_17 = t;
  t = term_m_16;
  t = whoami_0_0(t);
  b_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), a_17), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), b_17));
  t = (ATerm) ATmakeAppl(sym__2, term_j_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_25), a_17), term_j_6), b_17));
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
  ATerm x_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(z_25);
    }
  else
    {
      t = x_25;
      {
        ATerm a_26 = t;
        int b_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(b_26);
          }
        else
          {
            t = a_26;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_91 (ATerm), ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm e_26 = t;
        int g_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_24 = NULL;
            t = eval_config_0_0(t);
            b_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), b_24);
            t = b_24;
            ;
            LocalPopChoice(g_26);
          }
        else
          {
            t = e_26;
          }
      }
      ;
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      t = fetch_1_0(k_3, t);
    }
  t = q_91(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_17 = ATgetFirst((ATermList) t);
      f_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_17 = NULL,k_17 = NULL;
        t = f_17;
        t = g_0(t);
        j_17 = t;
        t = e_17;
        t = f_0(t);
        k_17 = t;
        t = f_17;
        {
          ATerm l_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(j_17), k_17);
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
      t = term_m_16;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm t_68 (ATerm), ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL;
  o_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_17);
  l_17 = t;
  t = m_17;
  t = t_68(t);
  n_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, n_17), l_17);
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
  ATerm r_17 = NULL;
  r_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_17), term_h_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm k_26 = t;
        int l_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_24 = NULL;
            t = eval_config_0_0(t);
            f_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_24);
            t = f_24;
            ;
            LocalPopChoice(l_26);
          }
        else
          {
            t = k_26;
          }
      }
      ;
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      t = fetch_1_0(n_3, t);
    }
  t = term_m_26;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, o_3, t);
  t = map_1_0(p_3, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm u_68 (ATerm), ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL;
  v_17 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      t_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_17);
  s_17 = t;
  t = t_17;
  t = u_68(t);
  u_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, u_17), s_17);
  return(t);
}
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm y_17 (ATerm t)
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_76, _id, t);
        ;
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = Cons_2_0(_id, y_17, t);
      }
    return(t);
  }
  t = y_17(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL;
  a_18 = t;
  {
    ATerm p_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_18;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_26 = ATgetFirst((ATermList) t);
                ATerm s_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_18;
          }
        ;
        LocalPopChoice(q_26);
      }
    else
      {
        t = p_26;
        t = (ATerm) ATinsert(ATempty, a_18);
      }
    b_18 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), b_18);
    t = a_18;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm t_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_24 = NULL;
        t = eval_config_0_0(t);
        j_24 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), j_24);
        t = j_24;
        ;
        LocalPopChoice(u_26);
      }
    else
      {
        t = t_26;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(w_26);
    }
  else
    {
      t = v_26;
      {
        ATerm h_18 = NULL,i_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_18 = ATgetFirst((ATermList) t);
            i_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_18;
        {
          ATerm q_3 (ATerm t)
          {
            t = i_18;
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
  ATerm o_18 (ATerm t)
  {
    ATerm x_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, o_18, t);
        ;
        LocalPopChoice(y_26);
      }
    else
      {
        t = x_26;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_76(t);
      }
    return(t);
  }
  t = o_18(t);
  return(t);
}
ATerm _2_0 (ATerm y_58 (ATerm), ATerm z_58 (ATerm), ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
  v_18 = t;
  if(match_cons(t, sym__2))
    {
      r_18 = ATgetArgument(t, 0);
      s_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_18);
  q_18 = t;
  t = r_18;
  t = y_58(t);
  t_18 = t;
  t = s_18;
  t = z_58(t);
  u_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, t_18, u_18), q_18);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm a_19 = NULL;
  a_19 = t;
  t = SSL_explode_string(a_19);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm b_19 = NULL;
  b_19 = t;
  t = SSL_explode_string(b_19);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm z_18 = NULL;
  t = _2_0(r_3, s_3, t);
  {
    ATerm z_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_19 = NULL,e_19 = NULL;
        if(match_cons(t, sym__2))
          {
            d_19 = ATgetArgument(t, 0);
            e_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_19;
        {
          ATerm t_3 (ATerm t)
          {
            t = e_19;
            return(t);
          }
          t = at_end_1_0(t_3, t);
        }
        ;
        LocalPopChoice(a_27);
      }
    else
      {
        t = z_26;
        {
          ATerm m_24 = NULL,n_24 = NULL;
          m_24 = t;
          t = SSL_explode_term(m_24);
          if(match_cons(t, sym__2))
            {
              ATerm b_27 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) b_27) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              n_24 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_24;
          t = concat_0_0(t);
        }
      }
    z_18 = t;
    t = SSL_implode_string(z_18);
  }
  return(t);
}
ATerm map_1_0 (ATerm v_75 (ATerm), ATerm t)
{
  ATerm j_19 (ATerm t)
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
        t = Cons_2_0(v_75, j_19, t);
      }
    return(t);
  }
  t = j_19(t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_19 = NULL;
      p_19 = t;
      t = SSL_is_string(p_19);
      ;
      LocalPopChoice(h_27);
    }
  else
    {
      t = g_27;
      {
        ATerm i_27 = t;
        int j_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(u_3, t);
            ;
            LocalPopChoice(j_27);
          }
        else
          {
            t = i_27;
            {
              ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL;
              t_19 = t;
              if(match_cons(t, sym_Path_1))
                {
                  u_19 = ATgetArgument(t, 0);
                  t = u_19;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      u_19 = ATgetArgument(t, 0);
                      t = u_19;
                      {
                        ATerm k_27 = t;
                        int l_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), u_19);
                            {
                              ATerm m_27 = t;
                              int n_27 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm g_25 = NULL;
                                  t = eval_config_0_0(t);
                                  g_25 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), u_19, g_25);
                                  t = g_25;
                                  ;
                                  LocalPopChoice(n_27);
                                }
                              else
                                {
                                  t = m_27;
                                }
                            }
                            ;
                            LocalPopChoice(l_27);
                          }
                        else
                          {
                            t = k_27;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_19), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = u_19;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm z_19 = NULL,a_20 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          u_19 = ATgetArgument(t, 0);
                          v_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_19;
                      t = eval_config_0_0(t);
                      z_19 = t;
                      t = v_19;
                      t = eval_config_0_0(t);
                      a_20 = t;
                      t = (ATerm) ATmakeAppl(sym__2, z_19, a_20);
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
  t = term_q_27;
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_r_27;
  return(t);
}
ATerm a_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_s_27;
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_t_27;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_3, x_3, y_3, t);
      ;
      LocalPopChoice(v_27);
    }
  else
    {
      t = u_27;
      t = Option_3_0(a_4, c_4, e_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
  l_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_20 = ATgetFirst((ATermList) t);
      i_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_20);
  g_20 = t;
  t = h_20;
  t = n_63(t);
  j_20 = t;
  t = i_20;
  t = o_63(t);
  k_20 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(k_20), j_20), g_20);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm q_20 = NULL;
  q_20 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_20);
  t = (ATerm) ATmakeAppl(sym_Program_1, q_20);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_93 (ATerm), ATerm t)
{
  ATerm p_20 = NULL;
  p_20 = t;
  {
    ATerm w_27 = t;
    int x_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_27;
        t = o_93(t);
        ;
        LocalPopChoice(x_27);
      }
    else
      {
        t = w_27;
      }
    t = p_20;
    {
      ATerm h_4 (ATerm t)
      {
        ATerm z_27 = t;
        int a_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_28 = t;
            int c_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(c_28);
              }
            else
              {
                t = b_28;
                t = o_93(t);
                t = Cons_2_0(_id, h_4, t);
              }
            ;
            LocalPopChoice(a_28);
          }
        else
          {
            t = z_27;
            {
              ATerm s_20 = NULL,t_20 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_20 = ATgetFirst((ATermList) t);
                  t_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_20), (ATerm) ATmakeAppl(sym_Undefined_1, s_20));
            }
          }
        return(t);
      }
      t = Cons_2_0(g_4, h_4, t);
    }
  }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm d_21 = NULL;
  d_21 = t;
  if(match_string(t, "--help"))
    {
      t = d_21;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_21;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_21;
        }
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_d_28;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_e_28;
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
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
  a_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = a_21;
  {
    ATerm l_4 (ATerm t)
    {
      ATerm f_28 = t;
      int g_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_93(t);
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
                t = Option_3_0(m_4, n_4, o_4, t);
                ;
                LocalPopChoice(i_28);
              }
            else
              {
                t = h_28;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_4, t);
    {
      ATerm j_28 = t;
      int k_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_21 = NULL;
          i_21 = t;
          {
            ATerm l_28 = t;
            int m_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = i_21;
                {
                  ATerm n_28 = t;
                  int o_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm p_28 = t;
                        int q_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm y_25 = NULL;
                            t = eval_config_0_0(t);
                            y_25 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), y_25);
                            t = y_25;
                            ;
                            LocalPopChoice(q_28);
                          }
                        else
                          {
                            t = p_28;
                          }
                      }
                      ;
                      LocalPopChoice(o_28);
                    }
                  else
                    {
                      t = n_28;
                      t = fetch_1_0(r_4, t);
                    }
                  t = i_21;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(m_28);
              }
            else
              {
                t = l_28;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm r_28 = t;
                  int s_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_26 = NULL;
                      t = eval_config_0_0(t);
                      f_26 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), f_26);
                      t = f_26;
                      ;
                      LocalPopChoice(s_28);
                    }
                  else
                    {
                      t = r_28;
                    }
                  t = i_21;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(k_28);
        }
      else
        {
          t = j_28;
          {
            ATerm t_28 = t;
            int u_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_4 (ATerm t)
                {
                  ATerm t_4 (ATerm t)
                  {
                    if(((b_21 != NULL) && (b_21 != t)))
                      _fail(t);
                    else
                      b_21 = t;
                    return(t);
                  }
                  t = Undefined_1_0(t_4, t);
                  return(t);
                }
                t = fetch_1_0(s_4, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(b_21)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_j_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_21)), term_v_28));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(u_28);
              }
            else
              {
                t = t_28;
              }
          }
        }
      c_21 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = c_21;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm t)
{
  ATerm l_21 = NULL;
  t = parse_options_1_0(s_91, t);
  l_21 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), l_21);
  t = l_21;
  t = u_91(t);
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_91, t);
        ;
        LocalPopChoice(x_28);
      }
    else
      {
        t = w_28;
        {
          ATerm y_28 = t;
          int z_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_91(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(z_28);
            }
          else
            {
              t = y_28;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm a_29 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(b_29);
    }
  else
    {
      t = a_29;
      {
        ATerm c_29 = t;
        int d_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(d_29);
          }
        else
          {
            t = c_29;
            {
              ATerm e_29 = t;
              int f_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(d_5, e_5, h_5, t);
                  ;
                  LocalPopChoice(f_29);
                }
              else
                {
                  t = e_29;
                  {
                    ATerm g_29 = t;
                    int h_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(h_29);
                      }
                    else
                      {
                        t = g_29;
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
ATerm b_5 (ATerm t)
{
  t = xtc_io_1_0(k_5, t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_i_29;
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_j_29;
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm k_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_29 = t;
      int n_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(n_29);
        }
      else
        {
          t = m_29;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(l_29);
      t = xtc_transform_file_2_0(l_5, q_5, t);
    }
  else
    {
      t = k_29;
      t = xtc_transform_term_2_0(r_5, s_5, t);
    }
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_29 = t;
        int r_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(r_29);
          }
        else
          {
            t = q_29;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(p_29);
        t = xtc_transform_file_2_0(t_5, build_pp_tables_0_0, t);
      }
    else
      {
        t = o_29;
        t = xtc_transform_term_2_0(u_5, build_pp_tables_0_0, t);
      }
    {
      ATerm s_29 = t;
      int t_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_29 = t;
          int v_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(v_29);
            }
          else
            {
              t = u_29;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(t_29);
          t = xtc_transform_file_2_0(v_5, w_5, t);
        }
      else
        {
          t = s_29;
          t = xtc_transform_term_2_0(x_5, y_5, t);
        }
    }
  }
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_w_29;
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_w_29;
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_x_29;
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_x_29;
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_y_29;
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_y_29;
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(x_4, default_usage_0_0, _id, b_5, t);
  return(t);
}
