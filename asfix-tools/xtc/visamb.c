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
ATerm term_y_29;
ATerm term_t_29;
ATerm term_o_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_v_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_y_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_y_25;
ATerm term_i_25;
ATerm term_d_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_i_24;
ATerm term_t_23;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_z_20;
ATerm term_n_20;
ATerm term_p_17;
ATerm term_z_16;
ATerm term_x_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_a_16;
ATerm term_x_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_l_14;
ATerm term_g_14;
ATerm term_c_14;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_i_13;
ATerm term_d_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_y_10;
ATerm term_v_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_g_10;
ATerm term_d_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_v_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_f_9;
ATerm term_a_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_q_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_h_8;
ATerm term_e_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_w_7;
ATerm term_u_7;
ATerm term_s_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
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
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_e_6;
void init_constant_terms (void)
{
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
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
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_7, term_b_7, term_c_7);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_7, term_f_7, term_i_7);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_7, term_p_7, term_q_7);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_7, term_w_7, term_y_7);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_8, term_b_8, term_c_8);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_8, term_j_8, term_k_8);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_8, term_w_8, term_x_8);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_9, term_f_9, term_h_9);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_9, term_l_9, term_m_9);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_9, term_p_9, term_r_9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_9, term_a_10, term_b_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_10, term_r_10, term_t_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_10, term_d_11, term_e_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_11, term_k_11, term_m_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_t_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_11, term_a_12, term_b_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_f_12, term_g_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_12, term_j_12, term_k_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_12, term_p_12, term_q_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_12, term_t_12, term_x_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_a_13, term_b_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_n_13, term_o_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_13, term_u_13, term_v_13);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_g_14, term_l_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_w_14, term_x_14);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_e_15, term_f_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("visamb.pp.af", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.pp.af", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym__3, term_q_27, term_r_27, term_p_16);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Vis-amb", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
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
ATerm build_pp_tables_0_0 (ATerm);
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
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm i_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm j_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm v_69 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm b_70 (ATerm), ATerm);
ATerm _2_0 (ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm k_69 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm d_87 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm c_87 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm);
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
      t = t_0;
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
  t = (ATerm) ATmakeAppl(sym__2, c_1, term_e_6);
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
  ATerm l_1 = NULL,m_1 = NULL;
  l_1 = t;
  t = xtc_new_file_0_0(t);
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_1, l_1);
  {
    ATerm b_0 (ATerm t)
    {
      ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm l_6 = ATgetArgument(t, 0);
          if(match_cons(l_6, sym_Stream_1))
            {
              n_1 = ATgetArgument(l_6, 0);
            }
          else
            _fail(t);
          o_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_write_term_to_stream_baf(n_1, o_1);
      p_1 = t;
      t = (ATerm) ATmakeAppl(sym_Stream_1, p_1);
      return(t);
    }
    t = WriteToFile_1_0(b_0, t);
    t = SSL_close_file(m_1);
    t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
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
  ATerm u_1 = NULL;
  ATerm f_0 (ATerm t)
  {
    ATerm d_2 = NULL;
    d_2 = t;
    t = SSL_explode_string(d_2);
    return(t);
  }
  t = map_1_0(f_0, t);
  t = concat_0_0(t);
  u_1 = t;
  t = SSL_implode_string(u_1);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,c_3 = NULL,d_3 = NULL;
  z_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      a_3 = ATgetArgument(t, 0);
      {
        ATerm y_0 = NULL;
        t = SSL_int_to_string(a_3);
        y_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_6), y_0), term_m_6);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm j_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          a_3 = ATgetArgument(t, 0);
          c_3 = ATgetArgument(t, 1);
          d_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(c_3);
      j_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_3), term_p_6), j_1), term_o_6), a_3);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  ATerm h_3 = NULL;
  ATerm n_0 (ATerm t)
  {
    t = x_69(t);
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
  ATerm j_3 = NULL;
  j_3 = t;
  {
    ATerm q_6 = t;
    int r_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_15), term_c_15), term_p_14), term_x_13), term_p_13), term_d_13), term_y_12), term_r_12), term_l_12), term_h_12), term_d_12), term_v_11), term_p_11), term_f_11), term_v_10), term_d_10), term_s_9), term_n_9), term_i_9), term_y_8), term_l_8), term_e_8), term_z_7), term_s_7), term_j_7), term_d_7), term_z_6), term_v_6);
        {
          ATerm o_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm h_15 = ATgetArgument(t, 0);
                if((j_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm i_15 = ATgetArgument(t, 2);
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
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, j_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm n_3 = NULL;
  n_3 = t;
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_3 = NULL,r_1 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm q_15 = ATgetArgument(t, 0);
            x_3 = ATgetArgument(t, 1);
            {
              ATerm s_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = x_3;
        {
          ATerm w_15 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_15;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          r_1 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_1), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_x_15, (ATerm) ATinsert(ATinsert(ATempty, r_1), term_a_16));
        }
        ;
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
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
ATerm fork_and_wait_1_0 (ATerm g_64 (ATerm), ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL;
  g_4 = t;
  t = fork_0_0(t);
  h_4 = t;
  {
    ATerm b_16 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = g_4;
        t = g_64(t);
        ;
        LocalPopChoice(d_16);
      }
    else
      {
        t = b_16;
        t = SSL_waitpid(h_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm e_16 = ATgetArgument(t, 0);
            if(((ATgetType(e_16) != AT_INT) || (ATgetInt((ATermInt) e_16) != 0)))
              _fail(t);
            {
              ATerm g_16 = ATgetArgument(t, 1);
            }
            {
              ATerm h_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = g_4;
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm c_80 (ATerm), ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL;
  if(match_cons(t, sym__2))
    {
      m_4 = ATgetArgument(t, 0);
      n_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_80(t);
  q_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_4, m_4, n_4);
  t = table_push_0_0(t);
  {
    ATerm i_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(q_4, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(j_16);
      }
    else
      {
        t = i_16;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_4 = ATgetFirst((ATermList) t);
        s_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(q_4, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(s_4), (ATerm) ATinsert(CheckATermList(r_4), m_4)));
    t = (ATerm) ATmakeAppl(sym__2, m_4, n_4);
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm u_5 (ATerm z_4, ATerm t)
  {
    t = z_4;
    {
      ATerm k_16 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm l_16 = ATgetArgument(t, 0);
              ATerm m_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = k_16;
        }
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
      t = (ATerm) ATmakeAppl(sym__2, z_4, term_e_6);
      t = open_file_0_0(t);
    }
    return(t);
  }
  ATerm v_5 (ATerm j_5, ATerm k_5, ATerm n_5, ATerm t)
  {
    t = SSL_open_file(j_5, k_5);
    return(t);
  }
  ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL;
  r_5 = t;
  if(match_cons(t, sym__2))
    {
      s_5 = ATgetArgument(t, 0);
      t_5 = ATgetArgument(t, 1);
      {
        ATerm n_16 = t;
        int o_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_5(r_5, t);
            ;
            LocalPopChoice(o_16);
          }
        else
          {
            t = n_16;
            t = v_5(s_5, t_5, r_5, t);
          }
      }
    }
  else
    {
      t = u_5(r_5, t);
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
  ATerm x_5 = NULL;
  t = term_p_16;
  t = new_0_0(t);
  x_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_5, term_q_16);
  t = conc_strings_0_0(t);
  {
    ATerm u_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_6 = NULL;
        a_6 = t;
        t = SSL_access(a_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(v_16);
      }
    else
      {
        t = u_16;
      }
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm g_6 = NULL;
  t = new_file_0_0(t);
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_6, term_e_6);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, g_6, term_p_16);
  {
    ATerm p_0 (ATerm t)
    {
      t = term_x_16;
      return(t);
    }
    t = assert_1_0(p_0, t);
    t = g_6;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL;
  g_7 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm f_3 = NULL,i_3 = NULL,y_3 = NULL,b_4 = NULL;
      t = g_7;
      t = xtc_new_file_0_0(t);
      f_3 = t;
      t = m_0(t);
      i_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_3, (ATerm) ATinsert(ATinsert(ATempty, f_3), term_z_16));
      {
        ATerm c_17 = t;
        int f_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm g_17 = ATgetArgument(t, 0);
                ATerm h_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = i_3;
            {
              ATerm q_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, f_3), term_z_16);
                return(t);
              }
              t = at_end_1_0(q_0, t);
            }
            ;
            LocalPopChoice(f_17);
          }
        else
          {
            t = c_17;
            {
              ATerm w_3 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, i_3, (ATerm) ATinsert(ATinsert(ATempty, f_3), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm o_17 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) o_17) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  w_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_3;
              t = concat_0_0(t);
            }
          }
        y_3 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        b_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_4, y_3);
        {
          ATerm r_0 (ATerm t)
          {
            t = SSL_execvp(b_4, y_3);
            return(t);
          }
          t = fork_and_wait_1_0(r_0, t);
          t = SSL_close_file(f_3);
          t = (ATerm) ATmakeAppl(sym_FILE_1, f_3);
        }
      }
    }
  else
    {
      ATerm j_4 = NULL,o_4 = NULL,a_5 = NULL,b_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          h_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_7;
      t = xtc_new_file_0_0(t);
      j_4 = t;
      t = m_0(t);
      o_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_4), term_z_16), h_7), term_p_17));
      {
        ATerm t_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm x_17 = ATgetArgument(t, 0);
                ATerm z_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_4;
            {
              ATerm s_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_4), term_z_16), h_7), term_p_17);
                return(t);
              }
              t = at_end_1_0(s_0, t);
            }
            ;
            LocalPopChoice(w_17);
          }
        else
          {
            t = t_17;
            {
              ATerm y_4 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, o_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_4), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), h_7), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm c_18 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) c_18) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  y_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_4;
              t = concat_0_0(t);
            }
          }
        a_5 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        b_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_5, a_5);
        {
          ATerm v_0 (ATerm t)
          {
            t = SSL_execvp(b_5, a_5);
            return(t);
          }
          t = fork_and_wait_1_0(v_0, t);
          t = SSL_close_file(j_4);
          t = (ATerm) ATmakeAppl(sym_FILE_1, j_4);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm b_62 (ATerm), ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL;
  n_7 = t;
  if(match_cons(t, sym_FILE_1))
    {
      l_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_7);
  k_7 = t;
  t = l_7;
  t = b_62(t);
  m_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, m_7), k_7);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm d_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_7 = NULL,x_7 = NULL;
      v_7 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm f_18 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_5 = NULL;
            t = eval_config_0_0(t);
            h_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_5);
            t = h_5;
            ;
            LocalPopChoice(g_18);
          }
        else
          {
            t = f_18;
          }
        x_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_7, term_u_13);
        t = geq_0_0(t);
        t = v_7;
        t = d_81(t);
      }
      ;
      LocalPopChoice(e_18);
    }
  else
    {
      t = d_18;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm c_81 (ATerm), ATerm t)
{
  ATerm j_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_8 = NULL,f_8 = NULL;
      d_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm l_18 = t;
        int m_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_5 = NULL;
            t = eval_config_0_0(t);
            p_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), p_5);
            t = p_5;
            ;
            LocalPopChoice(m_18);
          }
        else
          {
            t = l_18;
          }
        f_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_8, term_p_9);
        t = geq_0_0(t);
        t = d_8;
        t = c_81(t);
      }
      ;
      LocalPopChoice(k_18);
    }
  else
    {
      t = j_18;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm e_81 (ATerm), ATerm t)
{
  ATerm n_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_8 = NULL,i_8 = NULL;
      g_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm w_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_6 = NULL;
            t = eval_config_0_0(t);
            d_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), d_6);
            t = d_6;
            ;
            LocalPopChoice(x_18);
          }
        else
          {
            t = w_18;
          }
        i_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_8, term_f_7);
        t = geq_0_0(t);
        t = g_8;
        t = e_81(t);
      }
      ;
      LocalPopChoice(v_18);
    }
  else
    {
      t = n_18;
    }
  return(t);
}
ATerm union_1_0 (ATerm o_73 (ATerm), ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL;
  if(match_cons(t, sym__2))
    {
      n_8 = ATgetArgument(t, 0);
      m_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_8;
  {
    ATerm o_8 (ATerm t)
    {
      ATerm b_19 = t;
      int e_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = m_8;
          ;
          LocalPopChoice(e_19);
        }
      else
        {
          t = b_19;
          {
            ATerm f_19 = t;
            int g_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_6 = NULL,i_6 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    h_6 = ATgetFirst((ATermList) t);
                    i_6 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = m_8;
                {
                  ATerm w_0 (ATerm t)
                  {
                    ATerm j_6 = NULL;
                    j_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, h_6, j_6);
                    t = o_73(t);
                    return(t);
                  }
                  t = fetch_1_0(w_0, t);
                  t = i_6;
                  t = o_8(t);
                }
                ;
                LocalPopChoice(g_19);
              }
            else
              {
                t = f_19;
                t = Cons_2_0(_id, o_8, t);
              }
          }
        }
      return(t);
    }
    t = o_8(t);
  }
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL;
  if(match_cons(t, sym__3))
    {
      r_8 = ATgetArgument(t, 0);
      s_8 = ATgetArgument(t, 1);
      t_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_8, s_8);
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_19 = ATgetArgument(t, 0);
            ATerm l_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(r_8, s_8);
        ;
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
        t = (ATerm) ATempty;
      }
    u_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_8, t_8);
    {
      ATerm x_0 (ATerm t)
      {
        ATerm z_8 = NULL;
        if(match_cons(t, sym__2))
          {
            z_8 = ATgetArgument(t, 0);
            if((z_8 != ATgetArgument(t, 1)))
              {
                _fail(ATgetArgument(t, 1));
              }
          }
        else
          _fail(t);
        return(t);
      }
      t = union_1_0(x_0, t);
      v_8 = t;
      t = SSL_table_put(r_8, s_8, v_8);
      t = (ATerm) ATmakeAppl(sym__3, r_8, s_8, t_8);
    }
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm n_81 (ATerm), ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL;
  if(match_cons(t, sym__2))
    {
      c_9 = ATgetArgument(t, 0);
      b_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_9;
  {
    ATerm z_0 (ATerm t)
    {
      ATerm d_9 = NULL,e_9 = NULL;
      if(match_cons(t, sym__2))
        {
          d_9 = ATgetArgument(t, 0);
          e_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, c_9, d_9, e_9);
      t = n_81(t);
      return(t);
    }
    t = map_1_0(z_0, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_9 (ATerm q_9, ATerm t)
  {
    t = SSL_fclose(q_9);
    return(t);
  }
  ATerm t_9 = NULL,u_9 = NULL;
  u_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_9 = ATgetArgument(t, 0);
      {
        ATerm n_19 = t;
        int o_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_9);
            ;
            LocalPopChoice(o_19);
          }
        else
          {
            t = n_19;
            t = w_9(u_9, t);
          }
      }
    }
  else
    {
      t = w_9(u_9, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_9 = NULL;
  t = SSL_stdin_stream();
  x_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_9);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_9 = NULL;
  t = SSL_stdout_stream();
  y_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_9);
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
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_7 = NULL,t_7 = NULL;
        r_7 = t;
        t = SSL_explode_term(r_7);
        if(match_cons(t, sym__2))
          {
            ATerm y_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_19) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm z_19 = ATgetArgument(t, 1);
              if(((ATgetType(z_19) == AT_LIST) && !(ATisEmpty(z_19))))
                {
                  t_7 = ATgetFirst((ATermList) z_19);
                  {
                    ATerm c_20 = (ATerm) ATgetNext((ATermList) z_19);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = t_7;
        if(match_cons(t, sym_stderr_0))
          {
            t = t_7;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = t_7;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = t_7;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(x_19);
      }
    else
      {
        t = s_19;
        {
          ATerm d_20 = t;
          int e_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_10 = NULL,f_10 = NULL,h_10 = NULL;
              ATerm a_1 (ATerm t)
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
              t = _2_0(a_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  e_10 = ATgetArgument(t, 0);
                  f_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(e_10, f_10);
              h_10 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, h_10);
              ;
              LocalPopChoice(e_20);
            }
          else
            {
              t = d_20;
              {
                ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
                ATerm b_1 (ATerm t)
                {
                  ATerm m_10 = NULL;
                  m_10 = t;
                  t = SSL_is_string(m_10);
                  return(t);
                }
                t = _2_0(b_1, _id, t);
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
  ATerm f_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_10 = NULL;
      q_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_10, term_n_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_20);
    }
  else
    {
      t = f_20;
      {
        ATerm p_8 = NULL;
        p_8 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_8), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = p_8;
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
  ATerm r_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_10 = NULL;
      s_10 = t;
      t = SSL_access(s_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(u_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = r_20;
      {
        ATerm v_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_9 = NULL;
            ATerm x_20 = t;
            if((PushChoice() == 0))
              {
                ATerm w_10 = NULL;
                w_10 = t;
                t = SSL_access(w_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_20;
              }
            g_9 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_9), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = g_9;
            ;
            LocalPopChoice(w_20);
          }
        else
          {
            t = v_20;
            {
              ATerm j_9 = NULL;
              j_9 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, j_9), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = j_9;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm x_10 = NULL,z_10 = NULL,a_11 = NULL;
  x_10 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm c_10 = NULL;
      c_10 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_10), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
      t = c_10;
      return(t);
    }
    t = if_verbose5_1_0(f_1, t);
    {
      ATerm y_20 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, x_10));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = y_20;
        }
      z_10 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, x_10));
      t = z_10;
      {
        ATerm g_1 (ATerm t)
        {
          ATerm u_10 = NULL;
          u_10 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_10), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
          t = u_10;
          return(t);
        }
        t = if_verbose4_1_0(g_1, t);
        t = read_repository_file_0_0(t);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm b_11 = NULL;
            b_11 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
            t = b_11;
            return(t);
          }
          t = if_verbose6_1_0(h_1, t);
          a_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_z_20, a_11);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm i_1 (ATerm t)
            {
              ATerm c_11 = NULL;
              c_11 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
              t = c_11;
              return(t);
            }
            t = if_verbose6_1_0(i_1, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, x_10), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_z_20, (ATerm)ATmakeAppl(sym_Imported_1, x_10), (ATerm) ATempty);
            {
              ATerm k_1 (ATerm t)
              {
                ATerm g_11 = NULL;
                g_11 = t;
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
                t = g_11;
                return(t);
              }
              t = if_verbose4_1_0(k_1, t);
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
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(f_21);
    }
  else
    {
      t = e_21;
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              t = filter_1_0(e_77, t);
              return(t);
            }
            t = Cons_2_0(e_77, q_1, t);
            ;
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
            {
              ATerm l_11 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm j_21 = ATgetFirst((ATermList) t);
                  l_11 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = l_11;
              t = filter_1_0(e_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm y_78 (ATerm), ATerm t)
{
  ATerm n_11 (ATerm t)
  {
    ATerm k_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_78(t);
        t = n_11(t);
        ;
        LocalPopChoice(m_21);
      }
    else
      {
        t = k_21;
      }
    return(t);
  }
  t = n_11(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm n_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm q_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_11 = NULL;
            t = eval_config_0_0(t);
            h_11 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), h_11);
            t = h_11;
            ;
            LocalPopChoice(r_21);
          }
        else
          {
            t = q_21;
          }
      }
      ;
      LocalPopChoice(p_21);
    }
  else
    {
      t = n_21;
      {
        ATerm u_21 = t;
        int w_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(w_21);
          }
        else
          {
            t = u_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm o_11 = NULL;
  ATerm s_1 (ATerm t)
  {
    ATerm i_11 = NULL;
    i_11 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_11), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
    t = i_11;
    return(t);
  }
  t = if_verbose5_1_0(s_1, t);
  o_11 = t;
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        {
          ATerm q_11 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          q_11 = t;
          {
            ATerm t_1 (ATerm t)
            {
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
              t = filter_1_0(xtc_read_0_0, t);
              {
                ATerm z_21 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = z_21;
                  }
              }
              return(t);
            }
            t = repeat_1_0(t_1, t);
            t = q_11;
          }
        }
      }
    t = o_11;
    {
      ATerm v_1 (ATerm t)
      {
        ATerm x_11 = NULL;
        x_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_11), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
        t = x_11;
        return(t);
      }
      t = if_verbose5_1_0(v_1, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm a_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
      {
        ATerm c_12 = NULL;
        c_12 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_12), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
        t = c_12;
        return(t);
      }
      t = if_verbose5_1_0(w_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm d_22 = t;
        int e_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_13 = NULL,r_13 = NULL,z_13 = NULL;
            if(match_cons(t, sym__2))
              {
                j_13 = ATgetArgument(t, 0);
                r_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, j_13));
            {
              ATerm x_1 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((r_13 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((z_13 != NULL) && (z_13 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      z_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(x_1, t);
              t = not_null(z_13);
            }
            ;
            LocalPopChoice(e_22);
          }
        else
          {
            t = d_22;
            {
              ATerm k_14 = NULL,s_14 = NULL;
              k_14 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, k_14));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm g_22 = ATgetFirst((ATermList) t);
                  if(match_cons(g_22, sym__2))
                    {
                      ATerm i_22 = ATgetArgument(g_22, 0);
                      s_14 = ATgetArgument(g_22, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm h_22 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = s_14;
            }
          }
        {
          ATerm y_1 (ATerm t)
          {
            ATerm u_14 = NULL;
            u_14 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_14), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
            t = u_14;
            return(t);
          }
          t = if_verbose5_1_0(y_1, t);
        }
      }
      ;
      LocalPopChoice(c_22);
    }
  else
    {
      t = a_22;
      {
        ATerm u_11 = NULL;
        u_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), u_11), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_22), u_11), term_m_22);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm o_20 = NULL;
            t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
            {
              ATerm a_2 (ATerm t)
              {
                ATerm m_19 = NULL,w_19 = NULL;
                m_19 = t;
                t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), m_19);
                w_19 = t;
                t = (ATerm) ATmakeAppl(sym__2, m_19, w_19);
                return(t);
              }
              t = map_1_0(a_2, t);
              o_20 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_20), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
              t = o_20;
            }
            return(t);
          }
          t = if_verbose5_1_0(z_1, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm build_pp_tables_0_0 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL;
  t = term_q_22;
  t = xtc_find_0_0(t);
  y_11 = t;
  t = term_r_22;
  t = xtc_find_0_0(t);
  z_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_11), term_s_22), y_11), term_s_22);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL;
  m_12 = t;
  if(match_cons(t, sym_FILE_1))
    {
      n_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_21 = NULL;
        t = m_12;
        t = k_0(t);
        o_21 = t;
        {
          ATerm v_22 = t;
          int w_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(w_22);
            }
          else
            {
              t = v_22;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(n_12, o_21);
          t = (ATerm) ATmakeAppl(sym_FILE_1, n_12);
        }
        ;
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
        {
          ATerm x_22 = t;
          int y_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_21 = NULL;
              t = m_12;
              t = k_0(t);
              s_21 = t;
              {
                ATerm a_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm b_23 = t;
                    int c_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(c_23);
                      }
                    else
                      {
                        t = b_23;
                        {
                          ATerm e_23 = t;
                          int f_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(f_23);
                            }
                          else
                            {
                              t = e_23;
                              {
                                ATerm t_21 = NULL;
                                t_21 = t;
                                if((n_12 != t))
                                  {
                                    _fail(t);
                                  }
                                t = t_21;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_23;
                  }
                t = SSL_copy(n_12, s_21);
                t = (ATerm) ATmakeAppl(sym_FILE_1, n_12);
              }
              ;
              LocalPopChoice(y_22);
            }
          else
            {
              t = x_22;
              t = m_12;
              t = k_0(t);
              if((n_12 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_12);
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
  {
    ATerm g_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_21 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm j_23 = ATgetArgument(t, 0);
            ATerm k_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(u_12, v_12);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm m_23 = ATgetFirst((ATermList) t);
            v_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_21;
        ;
        LocalPopChoice(i_23);
      }
    else
      {
        t = g_23;
        t = (ATerm) ATempty;
      }
    w_12 = t;
    t = SSL_table_put(u_12, v_12, w_12);
    t = (ATerm) ATmakeAppl(sym__2, u_12, v_12);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm z_79 (ATerm), ATerm t)
{
  ATerm c_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL;
  c_13 = t;
  t = z_79(t);
  e_13 = t;
  {
    ATerm n_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(e_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = n_23;
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
      ATerm b_2 (ATerm t)
      {
        ATerm h_13 = NULL;
        h_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_13, h_13);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(b_2, t);
      t = c_13;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm t)
{
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_80(t);
      t = v_80(t);
      ;
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      t = v_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm y_79 (ATerm), ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
  k_13 = t;
  t = y_79(t);
  l_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_13, term_t_23);
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_23 = ATgetArgument(t, 0);
            ATerm x_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(l_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        t = (ATerm) ATempty;
      }
    m_13 = t;
    t = SSL_table_put(l_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(m_13), (ATerm) ATempty));
    t = k_13;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  ATerm s_13 = NULL;
  ATerm c_2 (ATerm t)
  {
    t = term_x_16;
    return(t);
  }
  t = begin_scope_1_0(c_2, t);
  {
    ATerm e_2 (ATerm t)
    {
      ATerm t_13 = NULL;
      t_13 = t;
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((s_13 != NULL) && (s_13 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              s_13 = ATgetFirst((ATermList) t);
            {
              ATerm a_24 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(s_13);
        {
          ATerm f_2 (ATerm t)
          {
            ATerm b_24 = t;
            int c_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_13 = NULL;
                w_13 = t;
                t = SSL_remove(w_13);
                ;
                LocalPopChoice(c_24);
              }
            else
              {
                t = b_24;
              }
            return(t);
          }
          t = map_1_0(f_2, t);
          t = t_13;
          {
            ATerm g_2 (ATerm t)
            {
              t = term_x_16;
              return(t);
            }
            t = end_scope_1_0(g_2, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(d_83, e_2, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm e_83 (ATerm), ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_13 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm g_24 = t;
          int h_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_22 = NULL;
              t = eval_config_0_0(t);
              b_22 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), b_22);
              t = b_22;
              ;
              LocalPopChoice(h_24);
            }
          else
            {
              t = g_24;
            }
          y_13 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, y_13);
        }
        ;
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        t = term_i_24;
      }
    t = e_83(t);
    {
      ATerm i_2 (ATerm t)
      {
        ATerm j_24 = t;
        int k_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
            {
              ATerm l_24 = t;
              int m_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_22 = NULL;
                  t = eval_config_0_0(t);
                  f_22 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), f_22);
                  t = f_22;
                  ;
                  LocalPopChoice(m_24);
                }
              else
                {
                  t = l_24;
                }
            }
            ;
            LocalPopChoice(k_24);
          }
        else
          {
            t = j_24;
            t = term_n_24;
          }
        return(t);
      }
      t = copy_to_1_0(i_2, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(h_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL;
  a_14 = t;
  t = term_p_16;
  t = whoami_0_0(t);
  b_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), b_14), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = a_14;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
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
    t = term_o_24;
    return(t);
  }
  t = ArgOption_3_0(j_2, k_2, l_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
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
        t = term_s_24;
        return(t);
      }
      ATerm o_2 (ATerm t)
      {
        t = term_t_24;
        return(t);
      }
      t = Option_3_0(m_2, n_2, o_2, t);
      ;
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
      {
        ATerm u_24 = t;
        int v_24 = stack_ptr;
        if((PushChoice() == 0))
          {
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
              t = term_x_24;
              return(t);
            }
            t = ArgOption_3_0(p_2, q_2, r_2, t);
            ;
            LocalPopChoice(v_24);
          }
        else
          {
            t = u_24;
            {
              ATerm s_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm t_2 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_y_24;
                return(t);
              }
              ATerm u_2 (ATerm t)
              {
                t = term_z_24;
                return(t);
              }
              t = Option_3_0(s_2, t_2, u_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_14 = NULL;
      t = term_p_16;
      t = d_0(t);
      o_14 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_25, term_b_25, o_14);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm r_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_14 = ATgetFirst((ATermList) t);
          n_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_14;
      t = a_0(t);
      t = term_p_16;
      t = c_0(t);
      r_14 = t;
      t = (ATerm) ATinsert(CheckATermList(n_14), r_14);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm t_14 = NULL;
    t_14 = t;
    if(match_string(t, "-o"))
      {
        t = t_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = t_14;
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    ATerm v_14 = NULL;
    v_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), v_14);
    t = (ATerm) ATmakeAppl(sym_Output_1, v_14);
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_d_25;
    return(t);
  }
  t = ArgOption_3_0(v_2, w_2, x_2, t);
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
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_25 = ATgetArgument(t, 0);
            ATerm h_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(y_14, z_14);
        ;
        LocalPopChoice(f_25);
      }
    else
      {
        t = e_25;
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
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_15 = NULL;
      t = term_p_16;
      t = j_0(t);
      n_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_25, term_b_25, n_15);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm r_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_15 = ATgetFirst((ATermList) t);
          k_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_15;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_15 = ATgetFirst((ATermList) t);
          m_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_15;
      t = h_0(t);
      t = l_15;
      t = i_0(t);
      r_15 = t;
      t = (ATerm) ATinsert(CheckATermList(m_15), r_15);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm t_15 = NULL;
    t_15 = t;
    if(match_string(t, "-i"))
      {
        t = t_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = t_15;
      }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    ATerm u_15 = NULL;
    u_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), u_15);
    t = (ATerm) ATmakeAppl(sym_Input_1, u_15);
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_i_25;
    return(t);
  }
  t = ArgOption_3_0(y_2, b_3, e_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_16;
  t = whoami_0_0(t);
  v_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), v_15));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_22 = NULL;
        t = eval_config_0_0(t);
        j_22 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), j_22);
        t = j_22;
        ;
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm t)
{
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_76(t);
      ;
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
      {
        ATerm y_15 = NULL,z_15 = NULL,c_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_15 = ATgetFirst((ATermList) t);
            z_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_15;
        t = foldr_2_0(b_76, c_76, t);
        c_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_15, c_16);
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
  ATerm f_16 = NULL,k_22 = NULL,l_22 = NULL;
  t = times_0_0(t);
  k_22 = t;
  t = SSL_explode_term(k_22);
  if(match_cons(t, sym__2))
    {
      ATerm n_25 = ATgetArgument(t, 0);
      l_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_22;
  {
    ATerm g_3 (ATerm t)
    {
      t = term_r_24;
      return(t);
    }
    ATerm k_3 (ATerm t)
    {
      ATerm o_22 = NULL,p_22 = NULL;
      if(match_cons(t, sym__2))
        {
          o_22 = ATgetArgument(t, 0);
          p_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm o_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(o_22, p_22);
            ;
            LocalPopChoice(p_25);
          }
        else
          {
            t = o_25;
            t = SSL_addr(o_22, p_22);
          }
      }
      return(t);
    }
    t = foldr_2_0(g_3, k_3, t);
    f_16 = t;
    t = SSL_TicksToSeconds(f_16);
  }
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
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_16;
        if((s_16 != t))
          {
            _fail(t);
          }
        t = r_16;
        ;
        LocalPopChoice(r_25);
      }
    else
      {
        t = q_25;
        t = r_16;
        {
          ATerm s_25 = t;
          int t_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_16, t_16);
              ;
              LocalPopChoice(t_25);
            }
          else
            {
              t = s_25;
              t = SSL_gtr(s_16, t_16);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_16, t_16);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_16 = NULL,y_16 = NULL;
      w_16 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm w_25 = t;
        int x_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_22 = NULL;
            t = eval_config_0_0(t);
            z_22 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), z_22);
            t = z_22;
            ;
            LocalPopChoice(x_25);
          }
        else
          {
            t = w_25;
          }
        y_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_16, term_t_6);
        t = geq_0_0(t);
        t = w_16;
        t = z_80(t);
      }
      ;
      LocalPopChoice(v_25);
    }
  else
    {
      t = u_25;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm a_17 = NULL,b_17 = NULL;
    t = run_time_0_0(t);
    a_17 = t;
    t = term_p_16;
    t = whoami_0_0(t);
    b_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), a_17), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), b_17));
    t = (ATerm) ATmakeAppl(sym__2, term_x_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_25), a_17), term_o_6), b_17));
    return(t);
  }
  t = if_verbose1_1_0(l_3, t);
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
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm b_26 = t;
        int c_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_23 = NULL;
            t = eval_config_0_0(t);
            d_23 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), d_23);
            t = d_23;
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
      {
        ATerm m_3 (ATerm t)
        {
          ATerm d_26 = t;
          int e_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(e_26);
            }
          else
            {
              t = d_26;
              {
                ATerm f_26 = t;
                int g_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(g_26);
                  }
                else
                  {
                    t = f_26;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(m_3, t);
      }
    }
  t = f_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_17 = ATgetFirst((ATermList) t);
      e_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_17 = NULL,j_17 = NULL;
        t = e_17;
        t = g_0(t);
        i_17 = t;
        t = d_17;
        t = e_0(t);
        j_17 = t;
        t = e_17;
        {
          ATerm o_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(i_17), j_17);
            return(t);
          }
          t = reverse_acc_2_0(e_0, o_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_16;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm i_62 (ATerm), ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
  n_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_17);
  k_17 = t;
  t = l_17;
  t = i_62(t);
  m_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, m_17), k_17);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm j_26 = t;
        int k_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_23 = NULL;
            t = eval_config_0_0(t);
            h_23 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_23);
            t = h_23;
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
      {
        ATerm p_3 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(p_3, t);
      }
    }
  t = term_l_26;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm q_3 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, q_3, t);
    {
      ATerm r_3 (ATerm t)
      {
        ATerm q_17 = NULL;
        q_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, q_17), term_m_26);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(r_3, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm j_62 (ATerm), ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,u_17 = NULL,v_17 = NULL;
  v_17 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      s_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_17);
  r_17 = t;
  t = s_17;
  t = j_62(t);
  u_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, u_17), r_17);
  return(t);
}
ATerm fetch_1_0 (ATerm v_69 (ATerm), ATerm t)
{
  ATerm y_17 (ATerm t)
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(v_69, _id, t);
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
        ATerm l_23 = NULL;
        t = eval_config_0_0(t);
        l_23 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_23);
        t = l_23;
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
          ATerm s_3 (ATerm t)
          {
            t = i_18;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(s_3, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm b_70 (ATerm), ATerm t)
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
        t = b_70(t);
      }
    return(t);
  }
  t = o_18(t);
  return(t);
}
ATerm _2_0 (ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL;
  u_18 = t;
  if(match_cons(t, sym__2))
    {
      q_18 = ATgetArgument(t, 0);
      r_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_18);
  p_18 = t;
  t = q_18;
  t = t_55(t);
  s_18 = t;
  t = r_18;
  t = u_55(t);
  t_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, s_18, t_18), p_18);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm y_18 = NULL;
  ATerm t_3 (ATerm t)
  {
    ATerm z_18 = NULL;
    z_18 = t;
    t = SSL_explode_string(z_18);
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    ATerm a_19 = NULL;
    a_19 = t;
    t = SSL_explode_string(a_19);
    return(t);
  }
  t = _2_0(t_3, u_3, t);
  {
    ATerm z_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_19 = NULL,d_19 = NULL;
        if(match_cons(t, sym__2))
          {
            c_19 = ATgetArgument(t, 0);
            d_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_19;
        {
          ATerm v_3 (ATerm t)
          {
            t = d_19;
            return(t);
          }
          t = at_end_1_0(v_3, t);
        }
        ;
        LocalPopChoice(a_27);
      }
    else
      {
        t = z_26;
        {
          ATerm o_23 = NULL,p_23 = NULL;
          o_23 = t;
          t = SSL_explode_term(o_23);
          if(match_cons(t, sym__2))
            {
              ATerm b_27 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) b_27) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              p_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_23;
          t = concat_0_0(t);
        }
      }
    y_18 = t;
    t = SSL_implode_string(y_18);
  }
  return(t);
}
ATerm map_1_0 (ATerm k_69 (ATerm), ATerm t)
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
        t = Cons_2_0(k_69, j_19, t);
      }
    return(t);
  }
  t = j_19(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_19 = NULL;
      p_19 = t;
      t = SSL_is_string(p_19);
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
            ATerm z_3 (ATerm t)
            {
              ATerm i_27 = t;
              int j_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(j_27);
                }
              else
                {
                  t = i_27;
                }
              return(t);
            }
            t = map_1_0(z_3, t);
            ;
            LocalPopChoice(h_27);
          }
        else
          {
            t = g_27;
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
                                  ATerm f_24 = NULL;
                                  t = eval_config_0_0(t);
                                  f_24 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), u_19, f_24);
                                  t = f_24;
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
                      ATerm a_20 = NULL,b_20 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          u_19 = ATgetArgument(t, 0);
                          v_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_19;
                      t = eval_config_0_0(t);
                      a_20 = t;
                      t = v_19;
                      t = eval_config_0_0(t);
                      b_20 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_20, b_20);
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
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm c_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_s_27;
        return(t);
      }
      ATerm d_4 (ATerm t)
      {
        t = term_t_27;
        return(t);
      }
      t = Option_3_0(a_4, c_4, d_4, t);
      ;
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      {
        ATerm e_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm f_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_u_27;
          return(t);
        }
        ATerm i_4 (ATerm t)
        {
          t = term_v_27;
          return(t);
        }
        t = Option_3_0(e_4, f_4, i_4, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm t)
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
  t = c_57(t);
  j_20 = t;
  t = i_20;
  t = d_57(t);
  k_20 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(k_20), j_20), g_20);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_87 (ATerm), ATerm t)
{
  ATerm p_20 = NULL;
  p_20 = t;
  {
    ATerm w_27 = t;
    int x_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_27;
        t = d_87(t);
        ;
        LocalPopChoice(x_27);
      }
    else
      {
        t = w_27;
      }
    t = p_20;
    {
      ATerm k_4 (ATerm t)
      {
        ATerm q_20 = NULL;
        q_20 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_20);
        t = (ATerm) ATmakeAppl(sym_Program_1, q_20);
        return(t);
      }
      ATerm l_4 (ATerm t)
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
                t = d_87(t);
                t = Cons_2_0(_id, l_4, t);
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
      t = Cons_2_0(k_4, l_4, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm c_87 (ATerm), ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
  a_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = a_21;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm d_28 = t;
      int e_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_87(t);
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
                ATerm t_4 (ATerm t)
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
                ATerm u_4 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_h_28;
                  return(t);
                }
                ATerm v_4 (ATerm t)
                {
                  t = term_i_28;
                  return(t);
                }
                t = Option_3_0(t_4, u_4, v_4, t);
                ;
                LocalPopChoice(g_28);
              }
            else
              {
                t = f_28;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_4, t);
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
                            ATerm w_24 = NULL;
                            t = eval_config_0_0(t);
                            w_24 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), w_24);
                            t = w_24;
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
                      {
                        ATerm w_4 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(w_4, t);
                      }
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
                      ATerm c_25 = NULL;
                      t = eval_config_0_0(t);
                      c_25 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), c_25);
                      t = c_25;
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
                ATerm x_4 (ATerm t)
                {
                  ATerm c_5 (ATerm t)
                  {
                    if(((b_21 != NULL) && (b_21 != t)))
                      _fail(t);
                    else
                      b_21 = t;
                    return(t);
                  }
                  t = Undefined_1_0(c_5, t);
                  return(t);
                }
                t = fetch_1_0(x_4, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(b_21)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_x_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_21)), term_v_28));
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
ATerm option_wrap_4_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm t)
{
  ATerm l_21 = NULL;
  t = parse_options_1_0(h_85, t);
  l_21 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), l_21);
  t = l_21;
  t = j_85(t);
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_85, t);
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
              t = k_85(t);
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
ATerm main_0_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
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
                    ATerm f_5 (ATerm t)
                    {
                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                        _fail(t);
                      return(t);
                    }
                    ATerm g_5 (ATerm t)
                    {
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                      t = term_g_29;
                      return(t);
                    }
                    ATerm i_5 (ATerm t)
                    {
                      t = term_h_29;
                      return(t);
                    }
                    t = Option_3_0(f_5, g_5, i_5, t);
                    ;
                    LocalPopChoice(f_29);
                  }
                else
                  {
                    t = e_29;
                    {
                      ATerm i_29 = t;
                      int j_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = verbose_option_0_0(t);
                          ;
                          LocalPopChoice(j_29);
                        }
                      else
                        {
                          t = i_29;
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
  ATerm e_5 (ATerm t)
  {
    ATerm l_5 (ATerm t)
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
          {
            ATerm m_5 (ATerm t)
            {
              t = term_o_29;
              return(t);
            }
            ATerm o_5 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = xtc_transform_file_2_0(m_5, o_5, t);
          }
        }
      else
        {
          t = k_29;
          {
            ATerm q_5 (ATerm t)
            {
              t = term_o_29;
              return(t);
            }
            ATerm w_5 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = xtc_transform_term_2_0(q_5, w_5, t);
          }
        }
      {
        ATerm p_29 = t;
        int q_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_29 = t;
            int s_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(s_29);
              }
            else
              {
                t = r_29;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(q_29);
            {
              ATerm y_5 (ATerm t)
              {
                t = term_t_29;
                return(t);
              }
              t = xtc_transform_file_2_0(y_5, build_pp_tables_0_0, t);
            }
          }
        else
          {
            t = p_29;
            {
              ATerm z_5 (ATerm t)
              {
                t = term_t_29;
                return(t);
              }
              t = xtc_transform_term_2_0(z_5, build_pp_tables_0_0, t);
            }
          }
        {
          ATerm u_29 = t;
          int v_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_29 = t;
              int x_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FILE_1_0(_id, t);
                  ;
                  LocalPopChoice(x_29);
                }
              else
                {
                  t = w_29;
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                }
              LocalPopChoice(v_29);
              {
                ATerm b_6 (ATerm t)
                {
                  t = term_y_29;
                  return(t);
                }
                ATerm c_6 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = xtc_transform_file_2_0(b_6, c_6, t);
              }
            }
          else
            {
              t = u_29;
              {
                ATerm f_6 (ATerm t)
                {
                  t = term_y_29;
                  return(t);
                }
                ATerm k_6 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = xtc_transform_term_2_0(f_6, k_6, t);
              }
            }
        }
      }
      return(t);
    }
    t = xtc_io_1_0(l_5, t);
    return(t);
  }
  t = option_wrap_4_0(d_5, default_usage_0_0, _id, e_5, t);
  return(t);
}
