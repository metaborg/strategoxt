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
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_x_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_a_27;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_d_26;
ATerm term_y_25;
ATerm term_n_25;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_r_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_t_23;
ATerm term_f_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_g_21;
ATerm term_u_20;
ATerm term_r_20;
ATerm term_h_20;
ATerm term_f_20;
ATerm term_c_18;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_b_14;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_h_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_t_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_p_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_y_8;
ATerm term_w_8;
ATerm term_u_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_k_8;
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
ATerm term_j_7;
ATerm term_h_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_z_6;
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
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_c_6;
void init_constant_terms (void)
{
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_6, term_o_6, term_p_6);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_6, term_s_6, term_t_6);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_6, term_w_6, term_x_6);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_6, term_c_7, term_d_7);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_7, term_k_7, term_l_7);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_7, term_o_7, term_q_7);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_7, term_u_7, term_v_7);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_7, term_b_8, term_d_8);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_8, term_k_8, term_q_8);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_8, term_u_8, term_w_8);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_9, term_g_9, term_h_9);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_9, term_l_9, term_m_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_9, term_v_9, term_w_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_9, term_l_10, term_m_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_10, term_x_10, term_y_10);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_11, term_f_11, term_g_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_11, term_k_11, term_l_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_11, term_q_11, term_r_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_11, term_b_12, term_c_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_l_12, term_m_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_r_12, term_s_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_w_12, term_x_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_g_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_j_13, term_l_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_13, term_r_13, term_s_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_b_14, term_f_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_14, term_i_14, term_j_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_14, term_q_14, term_t_14);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_24);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym__3, term_m_26, term_n_26, term_u_21);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("unpack", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.tbl", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2sig", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("dummy.pp", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm m_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm r_70 (ATerm), ATerm);
ATerm if_verbose5_1_0 (ATerm v_87 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm u_87 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm w_87 (ATerm), ATerm);
ATerm union_1_0 (ATerm a_80 (ATerm), ATerm);
ATerm r_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm p_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm j_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm c_1 (ATerm);
ATerm e_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm q_9 (ATerm k_9, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm c_72 (ATerm), ATerm);
ATerm k_1 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm);
ATerm assert_1_0 (ATerm n_86 (ATerm), ATerm);
ATerm t_5 (ATerm u_4, ATerm);
ATerm u_5 (ATerm w_4, ATerm y_4, ATerm z_4, ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm l_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm m_68 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm _2_0 (ATerm y_58 (ATerm), ATerm z_58 (ATerm), ATerm);
ATerm r_1 (ATerm);
ATerm t_1 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm v_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm k_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm j_86 (ATerm), ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm e_2 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm o_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm i_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm z_2 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_87 (ATerm), ATerm);
ATerm a_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm b_3 (ATerm);
ATerm need_help_1_0 (ATerm q_91 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_75 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm t_68 (ATerm), ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm u_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm);
ATerm o_3 (ATerm);
ATerm parse_options_p__1_0 (ATerm o_93 (ATerm), ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm b_4 (ATerm);
ATerm parse_options_1_0 (ATerm n_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm v_4 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm v_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm d_6 (ATerm);
ATerm sdf_to_sig_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm m_0 (ATerm t)
{
  ATerm e_0 = NULL;
  e_0 = t;
  t = SSL_explode_string(e_0);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm c_0 = NULL;
  t = map_1_0(m_0, t);
  t = concat_0_0(t);
  c_0 = t;
  t = SSL_implode_string(c_0);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_1 = NULL,y_1 = NULL,c_2 = NULL,d_2 = NULL;
  w_1 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      y_1 = ATgetArgument(t, 0);
      {
        ATerm q_0 = NULL;
        t = SSL_int_to_string(y_1);
        q_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_6), q_0), term_c_6);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm f_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          y_1 = ATgetArgument(t, 0);
          c_2 = ATgetArgument(t, 1);
          d_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(c_2);
      f_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_2), term_j_6), f_1), term_i_6), y_1);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm j_2 = NULL;
  ATerm n_0 (ATerm t)
  {
    t = i_76(t);
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
    ATerm l_6 = t;
    int m_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_14), term_n_14), term_g_14), term_t_13), term_p_13), term_h_13), term_b_13), term_u_12), term_n_12), term_h_12), term_s_11), term_o_11), term_i_11), term_a_11), term_t_10), term_x_9), term_p_9), term_i_9), term_y_8), term_r_8), term_e_8), term_w_7), term_s_7), term_m_7), term_h_7), term_y_6), term_u_6), term_q_6);
        {
          ATerm o_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm x_14 = ATgetArgument(t, 0);
                if((k_2 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm a_15 = ATgetArgument(t, 2);
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
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, k_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm n_2 = NULL;
  n_2 = t;
  {
    ATerm b_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_2 = NULL,s_1 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_15 = ATgetArgument(t, 0);
            y_2 = ATgetArgument(t, 1);
            {
              ATerm j_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = y_2;
        {
          ATerm k_15 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = k_15;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          s_1 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_1), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_q_15, (ATerm) ATinsert(ATinsert(ATempty, s_1), term_r_15));
        }
        ;
        LocalPopChoice(f_15);
      }
    else
      {
        t = b_15;
      }
    t = n_2;
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
  ATerm d_3 = NULL,e_3 = NULL;
  d_3 = t;
  t = fork_0_0(t);
  e_3 = t;
  {
    ATerm s_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = d_3;
        t = r_70(t);
        ;
        LocalPopChoice(u_15);
      }
    else
      {
        t = s_15;
        t = SSL_waitpid(e_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm w_15 = ATgetArgument(t, 0);
            if(((ATgetType(w_15) != AT_INT) || (ATgetInt((ATermInt) w_15) != 0)))
              _fail(t);
            {
              ATerm x_15 = ATgetArgument(t, 1);
            }
            {
              ATerm c_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = d_3;
      }
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_7 = NULL,r_7 = NULL;
      p_7 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm i_16 = t;
        int j_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_6 = NULL;
            t = eval_config_0_0(t);
            k_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_6);
            t = k_6;
            ;
            LocalPopChoice(j_16);
          }
        else
          {
            t = i_16;
          }
        r_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_7, term_r_13);
        t = geq_0_0(t);
        t = p_7;
        t = v_87(t);
      }
      ;
      LocalPopChoice(g_16);
    }
  else
    {
      t = f_16;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_87 (ATerm), ATerm t)
{
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_7 = NULL,z_7 = NULL;
      x_7 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm n_16 = t;
        int o_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_8 = NULL;
            t = eval_config_0_0(t);
            j_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_8);
            t = j_8;
            ;
            LocalPopChoice(o_16);
          }
        else
          {
            t = n_16;
          }
        z_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_7, term_l_9);
        t = geq_0_0(t);
        t = x_7;
        t = u_87(t);
      }
      ;
      LocalPopChoice(m_16);
    }
  else
    {
      t = l_16;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_8 = NULL,c_8 = NULL;
      a_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm r_16 = t;
        int s_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_9 = NULL;
            t = eval_config_0_0(t);
            a_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), a_9);
            t = a_9;
            ;
            LocalPopChoice(s_16);
          }
        else
          {
            t = r_16;
          }
        c_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_8, term_c_7);
        t = geq_0_0(t);
        t = a_8;
        t = w_87(t);
      }
      ;
      LocalPopChoice(q_16);
    }
  else
    {
      t = p_16;
    }
  return(t);
}
ATerm union_1_0 (ATerm a_80 (ATerm), ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL;
  if(match_cons(t, sym__2))
    {
      g_8 = ATgetArgument(t, 0);
      h_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_8;
  {
    ATerm i_8 (ATerm t)
    {
      ATerm t_16 = t;
      int u_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_8;
          ;
          LocalPopChoice(u_16);
        }
      else
        {
          t = t_16;
          {
            ATerm w_16 = t;
            int z_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_9 = NULL,d_9 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    c_9 = ATgetFirst((ATermList) t);
                    d_9 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = h_8;
                {
                  ATerm p_0 (ATerm t)
                  {
                    ATerm e_9 = NULL;
                    e_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, c_9, e_9);
                    t = a_80(t);
                    return(t);
                  }
                  t = fetch_1_0(p_0, t);
                  t = d_9;
                  t = i_8(t);
                }
                ;
                LocalPopChoice(z_16);
              }
            else
              {
                t = w_16;
                t = Cons_2_0(_id, i_8, t);
              }
          }
        }
      return(t);
    }
    t = i_8(t);
  }
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm t_8 = NULL;
  if(match_cons(t, sym__2))
    {
      t_8 = ATgetArgument(t, 0);
      if((t_8 != ATgetArgument(t, 1)))
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
  ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL;
  if(match_cons(t, sym__3))
    {
      l_8 = ATgetArgument(t, 0);
      m_8 = ATgetArgument(t, 1);
      n_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_8, m_8);
  {
    ATerm a_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_17 = ATgetArgument(t, 0);
            ATerm i_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(l_8, m_8);
        ;
        LocalPopChoice(c_17);
      }
    else
      {
        t = a_17;
        t = (ATerm) ATempty;
      }
    o_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_8, n_8);
    t = union_1_0(r_0, t);
    p_8 = t;
    t = SSL_table_put(l_8, m_8, p_8);
    t = (ATerm) ATmakeAppl(sym__3, l_8, m_8, n_8);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm v_8 = NULL,x_8 = NULL;
  if(match_cons(t, sym__2))
    {
      x_8 = ATgetArgument(t, 0);
      v_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_8;
  {
    ATerm s_0 (ATerm t)
    {
      ATerm z_8 = NULL,b_9 = NULL;
      if(match_cons(t, sym__2))
        {
          z_8 = ATgetArgument(t, 0);
          b_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, x_8, z_8, b_9);
      t = y_87(t);
      return(t);
    }
    t = map_1_0(s_0, t);
  }
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm l_17 = t;
  int m_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_10 = NULL;
      n_10 = t;
      t = SSL_access(n_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(m_17);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = l_17;
      {
        ATerm n_17 = t;
        int u_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_13 = NULL;
            ATerm v_17 = t;
            if((PushChoice() == 0))
              {
                ATerm o_10 = NULL;
                o_10 = t;
                t = SSL_access(o_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_17;
              }
            k_13 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_13), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = k_13;
            ;
            LocalPopChoice(u_17);
          }
        else
          {
            t = n_17;
            {
              ATerm a_14 = NULL;
              a_14 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, a_14), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = a_14;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm k_14 = NULL;
  k_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_14), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
  t = k_14;
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm w_14 = NULL;
  w_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_14), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
  t = w_14;
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm s_10 = NULL;
  s_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = s_10;
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm u_10 = NULL;
  u_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
  t = u_10;
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm v_10 = NULL;
  v_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = v_10;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
  p_10 = t;
  t = if_verbose5_1_0(t_0, t);
  {
    ATerm b_18 = t;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, p_10));
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_18;
      }
    q_10 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, p_10));
    t = q_10;
    t = if_verbose4_1_0(u_0, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(v_0, t);
    r_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_c_18, r_10);
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(w_0, t);
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, p_10), (ATerm) ATempty);
    t = (ATerm) ATmakeAppl(sym__3, term_c_18, (ATerm)ATmakeAppl(sym_Imported_1, p_10), (ATerm) ATempty);
    t = if_verbose4_1_0(x_0, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm p_83 (ATerm), ATerm t)
{
  ATerm d_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(i_18);
    }
  else
    {
      t = d_18;
      {
        ATerm j_18 = t;
        int k_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              t = filter_1_0(p_83, t);
              return(t);
            }
            t = Cons_2_0(p_83, y_0, t);
            ;
            LocalPopChoice(k_18);
          }
        else
          {
            t = j_18;
            {
              ATerm z_10 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm r_18 = ATgetFirst((ATermList) t);
                  z_10 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = z_10;
              t = filter_1_0(p_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm j_85 (ATerm), ATerm t)
{
  ATerm b_11 (ATerm t)
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_85(t);
        t = b_11(t);
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
      }
    return(t);
  }
  t = b_11(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm u_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm w_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_15 = NULL;
            t = eval_config_0_0(t);
            h_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), h_15);
            t = h_15;
            ;
            LocalPopChoice(a_19);
          }
        else
          {
            t = w_18;
          }
      }
      ;
      LocalPopChoice(v_18);
    }
  else
    {
      t = u_18;
      {
        ATerm b_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(j_19);
          }
        else
          {
            t = b_19;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm i_15 = NULL;
  i_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_15), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
  t = i_15;
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm k_19 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_19;
      }
  }
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm v_15 = NULL;
  v_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_15), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
  t = v_15;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm c_11 = NULL;
  t = if_verbose5_1_0(z_0, t);
  c_11 = t;
  {
    ATerm l_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(p_19);
      }
    else
      {
        t = l_19;
        {
          ATerm d_11 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          d_11 = t;
          t = repeat_1_0(a_1, t);
          t = d_11;
        }
      }
    t = c_11;
    t = if_verbose5_1_0(b_1, t);
  }
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm b_16 = NULL;
  b_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_16), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = b_16;
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm w_19 = NULL;
  w_19 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_19), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = w_19;
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm n_21 = NULL;
  t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
  t = map_1_0(h_1, t);
  n_21 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_21), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
  t = n_21;
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL;
  l_21 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), l_21);
  m_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_21, m_21);
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(c_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm u_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_18 = NULL,l_18 = NULL,m_18 = NULL;
            if(match_cons(t, sym__2))
              {
                f_18 = ATgetArgument(t, 0);
                l_18 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, f_18));
            {
              ATerm d_1 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((l_18 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((m_18 != NULL) && (m_18 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      m_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(d_1, t);
              t = not_null(m_18);
            }
            ;
            LocalPopChoice(x_19);
          }
        else
          {
            t = u_19;
            {
              ATerm o_19 = NULL,v_19 = NULL;
              o_19 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, o_19));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm c_20 = ATgetFirst((ATermList) t);
                  if(match_cons(c_20, sym__2))
                    {
                      ATerm e_20 = ATgetArgument(c_20, 0);
                      v_19 = ATgetArgument(c_20, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm d_20 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = v_19;
            }
          }
        t = if_verbose5_1_0(e_1, t);
      }
      ;
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      {
        ATerm h_11 = NULL;
        h_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), h_11), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_20), h_11), term_f_20);
        t = if_verbose5_1_0(g_1, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
  ATerm i_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_10 = NULL;
      k_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_10, term_r_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(o_20);
    }
  else
    {
      t = i_20;
      {
        ATerm p_12 = NULL;
        p_12 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_12), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = p_12;
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
ATerm read_from_0_0 (ATerm t)
{
  ATerm p_3 = NULL,u_3 = NULL;
  p_3 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_u_20;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          u_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(u_3, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm q_9 (ATerm k_9, ATerm t)
{
  t = SSL_fclose(k_9);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL;
  o_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_9 = ATgetArgument(t, 0);
      {
        ATerm v_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_9);
            ;
            LocalPopChoice(w_20);
          }
        else
          {
            t = v_20;
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
ATerm i_1 (ATerm t)
{
  ATerm c_10 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      c_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_10;
  return(t);
}
ATerm j_1 (ATerm t)
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
      ATerm x_20 = ATgetArgument(t, 0);
      ATerm y_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_12 = NULL,o_12 = NULL;
        d_12 = t;
        t = SSL_explode_term(d_12);
        if(match_cons(t, sym__2))
          {
            ATerm b_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm c_21 = ATgetArgument(t, 1);
              if(((ATgetType(c_21) == AT_LIST) && !(ATisEmpty(c_21))))
                {
                  o_12 = ATgetFirst((ATermList) c_21);
                  {
                    ATerm d_21 = (ATerm) ATgetNext((ATermList) c_21);
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
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
        {
          ATerm e_21 = t;
          int f_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL;
              t = _2_0(i_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  z_9 = ATgetArgument(t, 0);
                  a_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(z_9, a_10);
              b_10 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, b_10);
              ;
              LocalPopChoice(f_21);
            }
          else
            {
              t = e_21;
              {
                ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL;
                t = _2_0(j_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    d_10 = ATgetArgument(t, 0);
                    e_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(d_10, e_10);
                f_10 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, f_10);
              }
            }
        }
      }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm c_72 (ATerm), ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL;
  if(match_cons(t, sym__2))
    {
      w_3 = ATgetArgument(t, 0);
      x_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_3, term_g_21);
  t = open_stream_0_0(t);
  y_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_3, x_3);
  t = c_72(t);
  t = fclose_0_0(t);
  t = x_3;
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL,h_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_21 = ATgetArgument(t, 0);
      if(match_cons(h_21, sym_Stream_1))
        {
          f_4 = ATgetArgument(h_21, 0);
        }
      else
        _fail(t);
      g_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(f_4, g_4);
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_4);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL;
  z_3 = t;
  t = xtc_new_file_0_0(t);
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_4, z_3);
  t = WriteToFile_1_0(k_1, t);
  t = SSL_close_file(a_4);
  t = (ATerm) ATmakeAppl(sym_FILE_1, a_4);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(l_90, m_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm assert_1_0 (ATerm n_86 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL;
  if(match_cons(t, sym__2))
    {
      i_4 = ATgetArgument(t, 0);
      j_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_86(t);
  m_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_4, i_4, j_4);
  t = table_push_0_0(t);
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(m_4, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_4 = ATgetFirst((ATermList) t);
        o_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(m_4, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(o_4), (ATerm) ATinsert(CheckATermList(n_4), i_4)));
    t = (ATerm) ATmakeAppl(sym__2, i_4, j_4);
  }
  return(t);
}
ATerm t_5 (ATerm u_4, ATerm t)
{
  t = u_4;
  {
    ATerm k_21 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_21 = ATgetArgument(t, 0);
            ATerm p_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_21;
      }
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
    t = (ATerm) ATmakeAppl(sym__2, u_4, term_g_21);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm u_5 (ATerm w_4, ATerm y_4, ATerm z_4, ATerm t)
{
  t = SSL_open_file(w_4, y_4);
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm e_5 = NULL,r_5 = NULL,s_5 = NULL;
  e_5 = t;
  if(match_cons(t, sym__2))
    {
      r_5 = ATgetArgument(t, 0);
      s_5 = ATgetArgument(t, 1);
      {
        ATerm q_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_5(e_5, t);
            ;
            LocalPopChoice(r_21);
          }
        else
          {
            t = q_21;
            t = u_5(r_5, s_5, e_5, t);
          }
      }
    }
  else
    {
      t = t_5(e_5, t);
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
  t = term_u_21;
  t = new_0_0(t);
  y_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_5, term_v_21);
  t = conc_strings_0_0(t);
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_6 = NULL;
        b_6 = t;
        t = SSL_access(b_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
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
ATerm l_1 (ATerm t)
{
  t = term_y_21;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm e_6 = NULL;
  t = new_file_0_0(t);
  e_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_6, term_g_21);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, e_6, term_u_21);
  t = assert_1_0(l_1, t);
  t = e_6;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL;
  a_7 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm c_4 = NULL,d_4 = NULL,x_4 = NULL,a_5 = NULL;
      t = a_7;
      t = xtc_new_file_0_0(t);
      c_4 = t;
      t = l_0(t);
      d_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_4, (ATerm) ATinsert(ATinsert(ATempty, c_4), term_z_21));
      {
        ATerm a_22 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm c_22 = ATgetArgument(t, 0);
                ATerm d_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = d_4;
            {
              ATerm m_1 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, c_4), term_z_21);
                return(t);
              }
              t = at_end_1_0(m_1, t);
            }
            ;
            LocalPopChoice(b_22);
          }
        else
          {
            t = a_22;
            {
              ATerm t_4 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, d_4, (ATerm) ATinsert(ATinsert(ATempty, c_4), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm e_22 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) e_22) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  t_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_4;
              t = concat_0_0(t);
            }
          }
        x_4 = t;
        t = k_0(t);
        t = xtc_find_0_0(t);
        a_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_5, x_4);
        {
          ATerm n_1 (ATerm t)
          {
            t = SSL_execvp(a_5, x_4);
            return(t);
          }
          t = fork_and_wait_1_0(n_1, t);
          t = SSL_close_file(c_4);
          t = (ATerm) ATmakeAppl(sym_FILE_1, c_4);
        }
      }
    }
  else
    {
      ATerm i_5 = NULL,j_5 = NULL,x_5 = NULL,f_6 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          b_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_7;
      t = xtc_new_file_0_0(t);
      i_5 = t;
      t = l_0(t);
      j_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_5), term_z_21), b_7), term_f_22));
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm i_22 = ATgetArgument(t, 0);
                ATerm j_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = j_5;
            {
              ATerm o_1 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_5), term_z_21), b_7), term_f_22);
                return(t);
              }
              t = at_end_1_0(o_1, t);
            }
            ;
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
            {
              ATerm w_5 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, j_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_5), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), b_7), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm k_22 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) k_22) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  w_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_5;
              t = concat_0_0(t);
            }
          }
        x_5 = t;
        t = k_0(t);
        t = xtc_find_0_0(t);
        f_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_6, x_5);
        {
          ATerm p_1 (ATerm t)
          {
            t = SSL_execvp(f_6, x_5);
            return(t);
          }
          t = fork_and_wait_1_0(p_1, t);
          t = SSL_close_file(i_5);
          t = (ATerm) ATmakeAppl(sym_FILE_1, i_5);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm m_68 (ATerm), ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL,i_7 = NULL;
  i_7 = t;
  if(match_cons(t, sym_FILE_1))
    {
      f_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_7);
  e_7 = t;
  t = f_7;
  t = m_68(t);
  g_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, g_7), e_7);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(n_22);
    }
  else
    {
      t = l_22;
      {
        ATerm m_11 = NULL,n_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_11 = ATgetFirst((ATermList) t);
            n_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_11;
        {
          ATerm q_1 (ATerm t)
          {
            t = n_11;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(q_1, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm t_11 (ATerm t)
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, t_11, t);
        ;
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_76(t);
      }
    return(t);
  }
  t = t_11(t);
  return(t);
}
ATerm _2_0 (ATerm y_58 (ATerm), ATerm z_58 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,a_12 = NULL;
  a_12 = t;
  if(match_cons(t, sym__2))
    {
      v_11 = ATgetArgument(t, 0);
      w_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_12);
  u_11 = t;
  t = v_11;
  t = y_58(t);
  x_11 = t;
  t = w_11;
  t = z_58(t);
  y_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, x_11, y_11), u_11);
  return(t);
}
ATerm r_1 (ATerm t)
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
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm e_12 = NULL;
  t = _2_0(r_1, t_1, t);
  {
    ATerm q_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_12 = NULL,j_12 = NULL;
        if(match_cons(t, sym__2))
          {
            i_12 = ATgetArgument(t, 0);
            j_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_12;
        {
          ATerm u_1 (ATerm t)
          {
            t = j_12;
            return(t);
          }
          t = at_end_1_0(u_1, t);
        }
        ;
        LocalPopChoice(s_22);
      }
    else
      {
        t = q_22;
        {
          ATerm s_21 = NULL,t_21 = NULL;
          s_21 = t;
          t = SSL_explode_term(s_21);
          if(match_cons(t, sym__2))
            {
              ATerm t_22 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) t_22) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              t_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_21;
          t = concat_0_0(t);
        }
      }
    e_12 = t;
    t = SSL_implode_string(e_12);
  }
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_12 = NULL;
      t_12 = t;
      t = SSL_is_string(t_12);
      ;
      LocalPopChoice(x_22);
    }
  else
    {
      t = w_22;
      {
        ATerm b_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(v_1, t);
            ;
            LocalPopChoice(c_23);
          }
        else
          {
            t = b_23;
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
                        ATerm f_23 = t;
                        int g_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), z_12);
                            {
                              ATerm h_23 = t;
                              int i_23 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm m_22 = NULL;
                                  t = eval_config_0_0(t);
                                  m_22 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), z_12, m_22);
                                  t = m_22;
                                  ;
                                  LocalPopChoice(i_23);
                                }
                              else
                                {
                                  t = h_23;
                                }
                            }
                            ;
                            LocalPopChoice(g_23);
                          }
                        else
                          {
                            t = f_23;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_12), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = z_12;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm e_13 = NULL,f_13 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_12 = ATgetArgument(t, 0);
                          a_13 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_12;
                      t = eval_config_0_0(t);
                      e_13 = t;
                      t = a_13;
                      t = eval_config_0_0(t);
                      f_13 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_13, f_13);
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
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
  if(match_cons(t, sym__2))
    {
      m_13 = ATgetArgument(t, 0);
      n_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_13, n_13);
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_22 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm l_23 = ATgetArgument(t, 0);
            ATerm m_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(m_13, n_13);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_23 = ATgetFirst((ATermList) t);
            r_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_22;
        ;
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        t = (ATerm) ATempty;
      }
    o_13 = t;
    t = SSL_table_put(m_13, n_13, o_13);
    t = (ATerm) ATmakeAppl(sym__2, m_13, n_13);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm k_86 (ATerm), ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL;
  v_13 = t;
  t = k_86(t);
  w_13 = t;
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(w_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_13 = ATgetFirst((ATermList) t);
        x_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(w_13, (ATerm)ATmakeAppl(sym_Scopes_0), x_13);
    t = y_13;
    {
      ATerm x_1 (ATerm t)
      {
        ATerm z_13 = NULL;
        z_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_13, z_13);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(x_1, t);
      t = v_13;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm t)
{
  ATerm q_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_87(t);
      t = g_87(t);
      ;
      LocalPopChoice(s_23);
    }
  else
    {
      t = q_23;
      t = g_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_86 (ATerm), ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL;
  c_14 = t;
  t = j_86(t);
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_14, term_t_23);
  {
    ATerm u_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_23 = ATgetArgument(t, 0);
            ATerm y_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(d_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(w_23);
      }
    else
      {
        t = u_23;
        t = (ATerm) ATempty;
      }
    e_14 = t;
    t = SSL_table_put(d_14, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(e_14), (ATerm) ATempty));
    t = c_14;
  }
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_y_21;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_14 = NULL;
      p_14 = t;
      t = SSL_remove(p_14);
      ;
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
    }
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_y_21;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm o_89 (ATerm), ATerm t)
{
  ATerm l_14 = NULL;
  t = begin_scope_1_0(z_1, t);
  {
    ATerm a_2 (ATerm t)
    {
      ATerm m_14 = NULL;
      m_14 = t;
      {
        ATerm c_24 = t;
        int e_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(e_24);
          }
        else
          {
            t = c_24;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((l_14 != NULL) && (l_14 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              l_14 = ATgetFirst((ATermList) t);
            {
              ATerm f_24 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(l_14);
        t = map_1_0(b_2, t);
        t = m_14;
        t = end_scope_1_0(e_2, t);
      }
      return(t);
    }
    t = restore_always_2_0(o_89, a_2, t);
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL;
  r_14 = t;
  t = term_u_21;
  t = whoami_0_0(t);
  s_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), s_14), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = r_14;
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm u_14 = NULL;
  u_14 = t;
  if(match_string(t, "-k"))
    {
      t = u_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_14;
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL;
  y_14 = t;
  t = SSL_string_to_int(y_14);
  z_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), z_14);
  t = y_14;
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_g_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_2, g_2, h_2, t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm c_15 = NULL;
  c_15 = t;
  if(match_string(t, "-S"))
    {
      t = c_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_15;
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_i_24;
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_j_24;
  return(t);
}
ATerm o_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL;
  d_15 = t;
  t = SSL_string_to_int(d_15);
  e_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_15);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_15);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_k_24;
  return(t);
}
ATerm r_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_l_24;
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_m_24;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_2, l_2, m_2, t);
      ;
      LocalPopChoice(o_24);
    }
  else
    {
      t = n_24;
      {
        ATerm p_24 = t;
        int q_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_2, p_2, q_2, t);
            ;
            LocalPopChoice(q_24);
          }
        else
          {
            t = p_24;
            t = Option_3_0(r_2, s_2, t_2, t);
          }
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_15 = NULL;
      t = term_u_21;
      t = j_0(t);
      p_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_24, term_t_24, p_15);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm t_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_15 = ATgetFirst((ATermList) t);
          m_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_15;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_15 = ATgetFirst((ATermList) t);
          o_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_15;
      t = h_0(t);
      t = n_15;
      t = i_0(t);
      t_15 = t;
      t = (ATerm) ATinsert(CheckATermList(o_15), t_15);
    }
  return(t);
}
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
  t = term_u_24;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
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
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_22 = NULL;
        t = eval_config_0_0(t);
        y_22 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), y_22);
        t = y_22;
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm t)
{
  ATerm x_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_82(t);
      ;
      LocalPopChoice(y_24);
    }
  else
    {
      t = x_24;
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
        t = foldr_2_0(m_82, n_82, t);
        h_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_16, h_16);
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
ATerm x_2 (ATerm t)
{
  t = term_h_24;
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL;
  if(match_cons(t, sym__2))
    {
      d_23 = ATgetArgument(t, 0);
      e_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(d_23, e_23);
        ;
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        t = SSL_addr(d_23, e_23);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_16 = NULL,z_22 = NULL,a_23 = NULL;
  t = times_0_0(t);
  z_22 = t;
  t = SSL_explode_term(z_22);
  if(match_cons(t, sym__2))
    {
      ATerm c_25 = ATgetArgument(t, 0);
      a_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_23;
  t = foldr_2_0(x_2, z_2, t);
  k_16 = t;
  t = SSL_TicksToSeconds(k_16);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_16 = NULL,x_16 = NULL,y_16 = NULL;
  v_16 = t;
  if(match_cons(t, sym__2))
    {
      x_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_16;
        if((x_16 != t))
          {
            _fail(t);
          }
        t = v_16;
        ;
        LocalPopChoice(g_25);
      }
    else
      {
        t = e_25;
        t = v_16;
        {
          ATerm h_25 = t;
          int i_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_16, y_16);
              ;
              LocalPopChoice(i_25);
            }
          else
            {
              t = h_25;
              t = SSL_gtr(x_16, y_16);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_16, y_16);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm j_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_17 = NULL,d_17 = NULL;
      b_17 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm l_25 = t;
        int m_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_23 = NULL;
            t = eval_config_0_0(t);
            r_23 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_23);
            t = r_23;
            ;
            LocalPopChoice(m_25);
          }
        else
          {
            t = l_25;
          }
        d_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_17, term_o_6);
        t = geq_0_0(t);
        t = b_17;
        t = r_87(t);
      }
      ;
      LocalPopChoice(k_25);
    }
  else
    {
      t = j_25;
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL;
  t = run_time_0_0(t);
  f_17 = t;
  t = term_u_21;
  t = whoami_0_0(t);
  g_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), f_17), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), g_17));
  t = (ATerm) ATmakeAppl(sym__2, term_q_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_25), f_17), term_i_6), g_17));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(p_25);
    }
  else
    {
      t = o_25;
      {
        ATerm q_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(r_25);
          }
        else
          {
            t = q_25;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_91 (ATerm), ATerm t)
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
            ATerm v_23 = NULL;
            t = eval_config_0_0(t);
            v_23 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), v_23);
            t = v_23;
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
      t = fetch_1_0(b_3, t);
    }
  t = q_91(t);
  return(t);
}
ATerm map_1_0 (ATerm v_75 (ATerm), ATerm t)
{
  ATerm h_17 (ATerm t)
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        t = Cons_2_0(v_75, h_17, t);
      }
    return(t);
  }
  t = h_17(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_17 = ATgetFirst((ATermList) t);
      k_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_17 = NULL,p_17 = NULL;
        t = k_17;
        t = g_0(t);
        o_17 = t;
        t = j_17;
        t = f_0(t);
        p_17 = t;
        t = k_17;
        {
          ATerm c_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(o_17), p_17);
            return(t);
          }
          t = reverse_acc_2_0(f_0, c_3, t);
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
ATerm Program_1_0 (ATerm t_68 (ATerm), ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL;
  t_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_17);
  q_17 = t;
  t = r_17;
  t = t_68(t);
  s_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, s_17), q_17);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm w_17 = NULL;
  w_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_17), term_y_25);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm b_26 = t;
        int c_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_23 = NULL;
            t = eval_config_0_0(t);
            z_23 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_23);
            t = z_23;
            ;
            LocalPopChoice(c_26);
          }
        else
          {
            t = b_26;
          }
      }
      ;
      LocalPopChoice(a_26);
    }
  else
    {
      t = z_25;
      t = fetch_1_0(f_3, t);
    }
  t = term_d_26;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, g_3, t);
  t = map_1_0(h_3, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm u_68 (ATerm), ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  a_18 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      y_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_18);
  x_17 = t;
  t = y_17;
  t = u_68(t);
  z_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, z_17), x_17);
  return(t);
}
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm e_18 (ATerm t)
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_76, _id, t);
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
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
    ATerm g_26 = t;
    int h_26 = stack_ptr;
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
                ATerm i_26 = ATgetFirst((ATermList) t);
                ATerm j_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_18;
          }
        ;
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
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
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_24 = NULL;
        t = eval_config_0_0(t);
        d_24 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_24);
        t = d_24;
        ;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm i_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_o_26;
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm l_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_q_26;
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_r_26;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_3, j_3, k_3, t);
      ;
      LocalPopChoice(t_26);
    }
  else
    {
      t = s_26;
      t = Option_3_0(l_3, m_3, n_3, t);
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
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_26 = ATgetArgument(t, 0);
            ATerm x_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_18, o_18);
        ;
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        t = (ATerm) ATempty;
      }
    q_18 = t;
    t = SSL_table_put(n_18, o_18, (ATerm) ATinsert(CheckATermList(q_18), p_18));
    t = (ATerm) ATmakeAppl(sym__3, n_18, o_18, p_18);
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_18 = NULL;
      t = term_u_21;
      t = d_0(t);
      z_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_24, term_t_24, z_18);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm c_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_18 = ATgetFirst((ATermList) t);
          y_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_18;
      t = a_0(t);
      t = term_u_21;
      t = b_0(t);
      c_19 = t;
      t = (ATerm) ATinsert(CheckATermList(y_18), c_19);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
  i_19 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_19 = ATgetFirst((ATermList) t);
      f_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_19);
  d_19 = t;
  t = e_19;
  t = n_63(t);
  g_19 = t;
  t = f_19;
  t = o_63(t);
  h_19 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(h_19), g_19), d_19);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm n_19 = NULL;
  n_19 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_19);
  t = (ATerm) ATmakeAppl(sym_Program_1, n_19);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_93 (ATerm), ATerm t)
{
  ATerm m_19 = NULL;
  m_19 = t;
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_27;
        t = o_93(t);
        ;
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
      }
    t = m_19;
    {
      ATerm q_3 (ATerm t)
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_27 = t;
            int e_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(e_27);
              }
            else
              {
                t = d_27;
                t = o_93(t);
                t = Cons_2_0(_id, q_3, t);
              }
            ;
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
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
      t = Cons_2_0(o_3, q_3, t);
    }
  }
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm b_20 = NULL;
  b_20 = t;
  if(match_string(t, "--help"))
    {
      t = b_20;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_20;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_20;
        }
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_27;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm b_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_93 (ATerm), ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
  y_19 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = y_19;
  {
    ATerm r_3 (ATerm t)
    {
      ATerm h_27 = t;
      int i_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_93(t);
          ;
          LocalPopChoice(i_27);
        }
      else
        {
          t = h_27;
          {
            ATerm j_27 = t;
            int k_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_3, t_3, v_3, t);
                ;
                LocalPopChoice(k_27);
              }
            else
              {
                t = j_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_3, t);
    {
      ATerm l_27 = t;
      int m_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_20 = NULL;
          g_20 = t;
          {
            ATerm n_27 = t;
            int o_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = g_20;
                {
                  ATerm p_27 = t;
                  int q_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm r_27 = t;
                        int s_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm s_24 = NULL;
                            t = eval_config_0_0(t);
                            s_24 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), s_24);
                            t = s_24;
                            ;
                            LocalPopChoice(s_27);
                          }
                        else
                          {
                            t = r_27;
                          }
                      }
                      ;
                      LocalPopChoice(q_27);
                    }
                  else
                    {
                      t = p_27;
                      t = fetch_1_0(b_4, t);
                    }
                  t = g_20;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(o_27);
              }
            else
              {
                t = n_27;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm t_27 = t;
                  int u_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_24 = NULL;
                      t = eval_config_0_0(t);
                      z_24 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), z_24);
                      t = z_24;
                      ;
                      LocalPopChoice(u_27);
                    }
                  else
                    {
                      t = t_27;
                    }
                  t = g_20;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(m_27);
        }
      else
        {
          t = l_27;
          {
            ATerm v_27 = t;
            int w_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_4 (ATerm t)
                {
                  ATerm k_4 (ATerm t)
                  {
                    if(((z_19 != NULL) && (z_19 != t)))
                      _fail(t);
                    else
                      z_19 = t;
                    return(t);
                  }
                  t = Undefined_1_0(k_4, t);
                  return(t);
                }
                t = fetch_1_0(e_4, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(z_19)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_q_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_19)), term_x_27));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(w_27);
              }
            else
              {
                t = v_27;
              }
          }
        }
      a_20 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = a_20;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm t)
{
  ATerm j_20 = NULL;
  t = parse_options_1_0(s_91, t);
  j_20 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), j_20);
  t = j_20;
  t = u_91(t);
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_91, t);
        ;
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        {
          ATerm a_28 = t;
          int b_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_91(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(b_28);
            }
          else
            {
              t = a_28;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(d_28);
    }
  else
    {
      t = c_28;
      {
        ATerm e_28 = t;
        int f_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = verbose_option_0_0(t);
            ;
            LocalPopChoice(f_28);
          }
        else
          {
            t = e_28;
            t = keep_option_0_0(t);
          }
      }
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = xtc_temp_files_1_0(q_4, t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm k_20 = NULL,f_25 = NULL;
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_20 = NULL;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
      {
        ATerm i_28 = t;
        int j_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_25 = NULL;
            t = eval_config_0_0(t);
            d_25 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), d_25);
            t = d_25;
            ;
            LocalPopChoice(j_28);
          }
        else
          {
            t = i_28;
          }
        l_20 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_20);
      }
      ;
      LocalPopChoice(h_28);
    }
  else
    {
      t = g_28;
      t = term_u_20;
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
        t = xtc_transform_file_2_0(r_4, s_4, t);
      }
    else
      {
        t = k_28;
        t = xtc_transform_term_2_0(v_4, b_5, t);
      }
    {
      ATerm o_28 = t;
      int p_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_28 = t;
          int r_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(r_28);
            }
          else
            {
              t = q_28;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(p_28);
          t = xtc_transform_file_2_0(c_5, d_5, t);
        }
      else
        {
          t = o_28;
          t = xtc_transform_term_2_0(f_5, g_5, t);
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
            t = xtc_transform_file_2_0(h_5, k_5, t);
          }
        else
          {
            t = s_28;
            t = xtc_transform_term_2_0(l_5, m_5, t);
          }
        {
          ATerm w_28 = t;
          int x_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_28 = t;
              int z_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FILE_1_0(_id, t);
                  ;
                  LocalPopChoice(z_28);
                }
              else
                {
                  t = y_28;
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                }
              LocalPopChoice(x_28);
              t = xtc_transform_file_2_0(n_5, o_5, t);
            }
          else
            {
              t = w_28;
              t = xtc_transform_term_2_0(p_5, q_5, t);
            }
          {
            ATerm a_29 = t;
            int b_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_29 = t;
                int d_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = FILE_1_0(_id, t);
                    ;
                    LocalPopChoice(d_29);
                  }
                else
                  {
                    t = c_29;
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                  }
                LocalPopChoice(b_29);
                t = xtc_transform_file_2_0(v_5, z_5, t);
              }
            else
              {
                t = a_29;
                t = xtc_transform_term_2_0(a_6, d_6, t);
              }
            if(match_cons(t, sym_FILE_1))
              {
                k_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = term_e_29;
            t = xtc_find_0_0(t);
            f_25 = t;
            t = (ATerm) ATmakeAppl(sym__2, f_25, (ATerm) ATinsert(ATinsert(ATempty, term_f_29), k_20));
            {
              ATerm g_6 (ATerm t)
              {
                t = SSL_execvp(f_25, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue))), k_20));
                return(t);
              }
              t = fork_and_wait_1_0(g_6, t);
              t = (ATerm) ATinsert(ATinsert(ATempty, term_f_29), k_20);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_g_29;
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm m_20 = NULL;
  t = term_h_29;
  t = xtc_find_0_0(t);
  m_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_20), term_j_29), term_i_29);
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_g_29;
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm n_20 = NULL;
  t = term_h_29;
  t = xtc_find_0_0(t);
  n_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_20), term_j_29), term_i_29);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_k_29;
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_k_29;
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_l_29;
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_l_29;
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_m_29;
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL;
  t = term_n_29;
  t = xtc_find_0_0(t);
  p_20 = t;
  t = term_o_29;
  t = xtc_find_0_0(t);
  q_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_20), term_j_29), p_20), term_j_29);
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_m_29;
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL;
  t = term_n_29;
  t = xtc_find_0_0(t);
  s_20 = t;
  t = term_o_29;
  t = xtc_find_0_0(t);
  t_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_20), term_j_29), s_20), term_j_29);
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_p_29;
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_p_29;
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm sdf_to_sig_0_0 (ATerm t)
{
  t = option_wrap_4_0(l_4, default_usage_0_0, _id, p_4, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = sdf_to_sig_0_0(t);
  return(t);
}
