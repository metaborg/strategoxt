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
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_r_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_j_25;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_f_24;
ATerm term_c_24;
ATerm term_s_23;
ATerm term_p_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_r_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_w_21;
ATerm term_s_21;
ATerm term_o_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_q_20;
ATerm term_n_20;
ATerm term_k_20;
ATerm term_d_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_v_19;
ATerm term_t_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_x_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_a_17;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_t_12;
ATerm term_p_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_a_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_q_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_l_8;
ATerm term_g_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
void init_constant_terms (void)
{
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_7, term_a_8, term_c_8);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_8, term_l_8, term_n_8);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_8, term_v_8, term_w_8);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_9, term_f_9, term_g_9);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_9, term_o_9, term_p_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_9, term_a_10, term_e_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_10, term_n_10, term_p_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_10, term_s_10, term_t_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_10, term_w_10, term_x_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_a_11, term_d_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_11, term_k_11, term_l_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_11, term_r_11, term_s_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_11, term_v_11, term_b_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_h_12, term_i_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_p_12, term_t_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_12, term_b_13, term_c_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_13, term_i_13, term_j_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_n_13, term_t_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_y_13, term_f_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_14, term_i_14, term_j_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_m_14, term_q_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_t_14, term_u_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_b_15, term_c_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_h_15, term_o_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_15, term_w_15, term_x_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_d_16, term_e_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_h_16, term_k_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_n_16, term_o_16);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_23);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym__3, term_o_25, term_p_25, term_z_21);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.tbl", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2sig", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("dummy.pp", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("unpack", 0, ATtrue));
}
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm p_69 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm x_63 (ATerm), ATerm y_63 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm z_63 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm j_83 (ATerm), ATerm);
ATerm xtc_transform_1_0 (ATerm k_83 (ATerm), ATerm);
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
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm k_65 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm);
ATerm assert_1_0 (ATerm u_79 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm d_65 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm u_61 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm r_79 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm q_79 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm v_82 (ATerm), ATerm);
ATerm xtc_input_1_0 (ATerm y_82 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm input_options_0_0 (ATerm);
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
ATerm sdf_to_sig_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm d_1 = NULL;
  ATerm c_0 (ATerm t)
  {
    ATerm g_1 = NULL;
    g_1 = t;
    t = SSL_explode_string(g_1);
    return(t);
  }
  t = map_1_0(c_0, t);
  t = concat_0_0(t);
  d_1 = t;
  t = SSL_implode_string(d_1);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL,p_2 = NULL,r_2 = NULL;
  l_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      m_2 = ATgetArgument(t, 0);
      {
        ATerm o_0 = NULL;
        t = SSL_int_to_string(m_2);
        o_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_7), o_0), term_t_7);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm w_0 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          m_2 = ATgetArgument(t, 0);
          p_2 = ATgetArgument(t, 1);
          r_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(p_2);
      w_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_2), term_w_7), w_0), term_v_7), m_2);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm p_69 (ATerm), ATerm t)
{
  ATerm w_2 = NULL;
  ATerm e_0 (ATerm t)
  {
    t = p_69(t);
    w_2 = t;
    return(t);
  }
  t = fetch_1_0(e_0, t);
  t = not_null(w_2);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm x_2 = NULL;
  x_2 = t;
  {
    ATerm x_7 = t;
    int y_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_17), term_l_16), term_f_16), term_y_15), term_p_15), term_f_15), term_x_14), term_r_14), term_k_14), term_g_14), term_u_13), term_k_13), term_e_13), term_x_12), term_j_12), term_c_12), term_t_11), term_m_11), term_e_11), term_y_10), term_u_10), term_q_10), term_f_10), term_w_9), term_h_9), term_x_8), term_o_8), term_d_8);
        {
          ATerm m_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm b_17 = ATgetArgument(t, 0);
                if((x_2 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm c_17 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(m_0, t);
        }
        ;
        LocalPopChoice(y_7);
      }
    else
      {
        t = x_7;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, x_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm y_2 = NULL;
  y_2 = t;
  {
    ATerm n_0 (ATerm t)
    {
      ATerm z_2 = NULL,a_3 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm j_17 = ATgetArgument(t, 0);
          z_2 = ATgetArgument(t, 1);
          {
            ATerm k_17 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = z_2;
      {
        ATerm l_17 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_17;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        a_3 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, a_3), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_m_17, (ATerm) ATinsert(ATinsert(ATempty, a_3), term_n_17));
      }
      return(t);
    }
    t = try_1_0(n_0, t);
    t = y_2;
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
  ATerm d_3 = NULL,f_3 = NULL;
  d_3 = t;
  t = fork_0_0(t);
  f_3 = t;
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = d_3;
        t = x_63(t);
        ;
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
        t = (ATerm) ATmakeAppl(sym__2, f_3, d_3);
        t = y_63(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm z_63 (ATerm), ATerm t)
{
  ATerm h_3 = NULL;
  ATerm p_0 (ATerm t)
  {
    ATerm i_3 = NULL;
    if(match_cons(t, sym__2))
      {
        i_3 = ATgetArgument(t, 0);
        h_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(i_3);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm r_17 = ATgetArgument(t, 0);
        if(((ATgetType(r_17) != AT_INT) || (ATgetInt((ATermInt) r_17) != 0)))
          _fail(t);
        {
          ATerm v_17 = ATgetArgument(t, 1);
        }
        {
          ATerm w_17 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = h_3;
    return(t);
  }
  t = fork_2_0(z_63, p_0, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm l_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym__2))
    {
      l_3 = ATgetArgument(t, 0);
      n_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_0 (ATerm t)
    {
      t = SSL_execvp(l_3, n_3);
      return(t);
    }
    t = fork_and_wait_1_0(q_0, t);
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
  ATerm o_3 = NULL,p_3 = NULL;
  o_3 = t;
  t = j_83(t);
  t = xtc_find_warning_0_0(t);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_3, o_3);
  t = call_0_0(t);
  t = o_3;
  return(t);
}
ATerm xtc_transform_1_0 (ATerm k_83 (ATerm), ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2_0(k_83, r_0, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm q_3 = NULL;
  q_3 = t;
  t = SSL_table_keys(q_3);
  {
    ATerm s_0 (ATerm t)
    {
      ATerm r_3 = NULL,t_3 = NULL;
      r_3 = t;
      t = SSL_table_get(q_3, r_3);
      t_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_3, t_3);
      return(t);
    }
    t = map_1_0(s_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_80 (ATerm), ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm w_3 = NULL,x_3 = NULL;
    w_3 = t;
    t = term_x_17;
    t = get_config_0_0(t);
    x_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_3, term_w_15);
    t = geq_0_0(t);
    t = w_3;
    t = v_80(t);
    return(t);
  }
  t = try_1_0(t_0, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,f_4 = NULL;
  if(match_cons(t, sym__2))
    {
      c_4 = ATgetArgument(t, 0);
      d_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, c_4));
  {
    ATerm u_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((d_4 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          f_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(u_0, t);
    t = not_null(f_4);
  }
  return(t);
}
ATerm filter_1_0 (ATerm w_76 (ATerm), ATerm t)
{
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(b_18);
    }
  else
    {
      t = a_18;
      {
        ATerm e_18 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              t = filter_1_0(w_76, t);
              return(t);
            }
            t = Cons_2_0(w_76, v_0, t);
            ;
            LocalPopChoice(f_18);
          }
        else
          {
            t = e_18;
            {
              ATerm j_4 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm k_18 = ATgetFirst((ATermList) t);
                  j_4 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = j_4;
              t = filter_1_0(w_76, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm q_78 (ATerm), ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    ATerm x_0 (ATerm t)
    {
      t = q_78(t);
      t = l_4(t);
      return(t);
    }
    t = try_1_0(x_0, t);
    return(t);
  }
  t = l_4(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm o_4 = NULL;
  o_4 = t;
  {
    ATerm z_0 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm l_18 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_18;
          }
      }
      return(t);
    }
    t = repeat_1_0(z_0, t);
    t = o_4;
  }
  return(t);
}
ATerm say_1_0 (ATerm a_65 (ATerm), ATerm t)
{
  ATerm v_4 = NULL,y_0 = NULL;
  v_4 = t;
  t = a_65(t);
  y_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, y_0));
  t = v_4;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_80 (ATerm), ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    ATerm x_4 = NULL,y_4 = NULL;
    x_4 = t;
    t = term_x_17;
    t = get_config_0_0(t);
    y_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_4, term_r_11);
    t = geq_0_0(t);
    t = x_4;
    t = u_80(t);
    return(t);
  }
  t = try_1_0(a_1, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm e_5 = NULL,g_5 = NULL;
    e_5 = t;
    t = term_x_17;
    t = get_config_0_0(t);
    g_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_5, term_f_9);
    t = geq_0_0(t);
    t = e_5;
    t = w_80(t);
    return(t);
  }
  t = try_1_0(b_1, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_5 = ATgetFirst((ATermList) t);
      s_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_73(t);
  {
    ATerm c_1 (ATerm t)
    {
      ATerm u_5 = NULL;
      u_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_5, u_5);
      t = k_73(t);
      return(t);
    }
    t = fetch_1_0(c_1, t);
    t = s_5;
  }
  return(t);
}
ATerm union_1_0 (ATerm g_73 (ATerm), ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL;
  if(match_cons(t, sym__2))
    {
      y_5 = ATgetArgument(t, 0);
      x_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5;
  {
    ATerm c_6 (ATerm t)
    {
      ATerm m_18 = t;
      int n_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = x_5;
          ;
          LocalPopChoice(n_18);
        }
      else
        {
          t = m_18;
          {
            ATerm p_18 = t;
            int t_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_1 (ATerm t)
                {
                  t = x_5;
                  return(t);
                }
                t = HdMember_p__2_0(g_73, e_1, t);
                t = c_6(t);
                ;
                LocalPopChoice(t_18);
              }
            else
              {
                t = p_18;
                t = Cons_2_0(_id, c_6, t);
              }
          }
        }
      return(t);
    }
    t = c_6(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm d_6 = NULL;
    if(match_cons(t, sym__2))
      {
        d_6 = ATgetArgument(t, 0);
        if((d_6 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(f_1, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm i_6 = NULL,l_6 = NULL,m_6 = NULL,p_6 = NULL,q_6 = NULL;
  if(match_cons(t, sym__3))
    {
      i_6 = ATgetArgument(t, 0);
      l_6 = ATgetArgument(t, 1);
      m_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_6, l_6);
  {
    ATerm u_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_19 = ATgetArgument(t, 0);
            ATerm f_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(i_6, l_6);
        ;
        LocalPopChoice(w_18);
      }
    else
      {
        t = u_18;
        t = (ATerm) ATempty;
      }
    p_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_6, m_6);
    t = union_0_0(t);
    q_6 = t;
    t = SSL_table_put(i_6, l_6, q_6);
    t = (ATerm) ATmakeAppl(sym__3, i_6, l_6, m_6);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm f_81 (ATerm), ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL;
  if(match_cons(t, sym__2))
    {
      u_6 = ATgetArgument(t, 0);
      t_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm v_6 = NULL,w_6 = NULL;
      if(match_cons(t, sym__2))
        {
          v_6 = ATgetArgument(t, 0);
          w_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, u_6, v_6, w_6);
      t = f_81(t);
      return(t);
    }
    t = map_1_0(h_1, t);
  }
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_1 = NULL;
      o_1 = t;
      t = SSL_access(o_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(h_19);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = g_19;
      {
        ATerm i_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_19 = t;
            if((PushChoice() == 0))
              {
                ATerm q_1 = NULL;
                q_1 = t;
                t = SSL_access(q_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_19;
              }
            {
              ATerm i_1 (ATerm t)
              {
                t = term_p_19;
                return(t);
              }
              t = debug_1_0(i_1, t);
            }
            ;
            LocalPopChoice(j_19);
          }
        else
          {
            t = i_19;
            {
              ATerm j_1 (ATerm t)
              {
                t = term_q_19;
                return(t);
              }
              t = debug_1_0(j_1, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL;
  y_6 = t;
  {
    ATerm k_1 (ATerm t)
    {
      ATerm l_1 (ATerm t)
      {
        t = term_r_19;
        return(t);
      }
      t = debug_1_0(l_1, t);
      return(t);
    }
    t = if_verbose5_1_0(k_1, t);
    {
      ATerm s_19 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, y_6));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_19;
        }
      z_6 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, y_6));
      t = z_6;
      {
        ATerm m_1 (ATerm t)
        {
          ATerm n_1 (ATerm t)
          {
            t = term_t_19;
            return(t);
          }
          t = debug_1_0(n_1, t);
          return(t);
        }
        t = if_verbose4_1_0(m_1, t);
        t = read_repository_file_0_0(t);
        {
          ATerm p_1 (ATerm t)
          {
            ATerm r_1 (ATerm t)
            {
              t = term_v_19;
              return(t);
            }
            t = say_1_0(r_1, t);
            return(t);
          }
          t = if_verbose6_1_0(p_1, t);
          a_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_y_19, a_7);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm s_1 (ATerm t)
            {
              ATerm t_1 (ATerm t)
              {
                t = term_z_19;
                return(t);
              }
              t = say_1_0(t_1, t);
              return(t);
            }
            t = if_verbose6_1_0(s_1, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, y_6), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_y_19, (ATerm)ATmakeAppl(sym_Imported_1, y_6), (ATerm) ATempty);
            {
              ATerm u_1 (ATerm t)
              {
                ATerm x_1 (ATerm t)
                {
                  t = term_v_19;
                  return(t);
                }
                t = say_1_0(x_1, t);
                return(t);
              }
              t = if_verbose4_1_0(u_1, t);
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
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_20);
    }
  else
    {
      t = a_20;
      {
        ATerm e_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(h_20);
          }
        else
          {
            t = e_20;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm f_7 = NULL;
  ATerm y_1 (ATerm t)
  {
    ATerm z_1 (ATerm t)
    {
      t = term_k_20;
      return(t);
    }
    t = debug_1_0(z_1, t);
    return(t);
  }
  t = if_verbose5_1_0(y_1, t);
  f_7 = t;
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = f_7;
    {
      ATerm a_2 (ATerm t)
      {
        ATerm b_2 (ATerm t)
        {
          t = term_n_20;
          return(t);
        }
        t = debug_1_0(b_2, t);
        return(t);
      }
      t = if_verbose5_1_0(a_2, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
      {
        ATerm d_2 (ATerm t)
        {
          t = term_q_20;
          return(t);
        }
        t = debug_1_0(d_2, t);
        return(t);
      }
      t = if_verbose5_1_0(c_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm r_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(s_20);
          }
        else
          {
            t = r_20;
            {
              ATerm v_1 = NULL,w_1 = NULL;
              v_1 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, v_1));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm t_20 = ATgetFirst((ATermList) t);
                  if(match_cons(t_20, sym__2))
                    {
                      ATerm v_20 = ATgetArgument(t_20, 0);
                      w_1 = ATgetArgument(t_20, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm u_20 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = w_1;
            }
          }
        {
          ATerm e_2 (ATerm t)
          {
            ATerm f_2 (ATerm t)
            {
              t = term_q_20;
              return(t);
            }
            t = debug_1_0(f_2, t);
            return(t);
          }
          t = if_verbose5_1_0(e_2, t);
        }
      }
      ;
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
      {
        ATerm h_7 = NULL;
        h_7 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), h_7), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_20), h_7), term_w_20);
        {
          ATerm g_2 (ATerm t)
          {
            t = term_y_19;
            t = table_getlist_0_0(t);
            {
              ATerm h_2 (ATerm t)
              {
                t = term_y_20;
                return(t);
              }
              t = debug_1_0(h_2, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(g_2, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL;
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_7 = NULL;
      o_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_7, term_b_21);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(a_21);
    }
  else
    {
      t = z_20;
      {
        ATerm i_2 (ATerm t)
        {
          t = term_c_21;
          return(t);
        }
        t = debug_1_0(i_2, t);
        _fail(t);
      }
    }
  l_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(n_7);
  m_7 = t;
  t = l_7;
  t = fclose_0_0(t);
  t = m_7;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL;
  r_7 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = r_7;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          s_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(s_7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_8 (ATerm b_8, ATerm t)
  {
    t = SSL_fclose(b_8);
    return(t);
  }
  ATerm e_8 = NULL,f_8 = NULL;
  f_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_8 = ATgetArgument(t, 0);
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_8);
            ;
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
            t = h_8(f_8, t);
          }
      }
    }
  else
    {
      t = h_8(f_8, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_8 = NULL;
  t = SSL_stdin_stream();
  i_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_8 = NULL;
  t = SSL_stdout_stream();
  j_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_8 = NULL;
  t = SSL_stderr_stream();
  k_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_8);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm m_8 = NULL;
  m_8 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_8;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_8;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_8;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_21 = ATgetArgument(t, 0);
      ATerm g_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_3 = NULL,e_3 = NULL;
        c_3 = t;
        t = SSL_explode_term(c_3);
        if(match_cons(t, sym__2))
          {
            ATerm j_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm k_21 = ATgetArgument(t, 1);
              if(((ATgetType(k_21) == AT_LIST) && !(ATisEmpty(k_21))))
                {
                  e_3 = ATgetFirst((ATermList) k_21);
                  {
                    ATerm l_21 = (ATerm) ATgetNext((ATermList) k_21);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = e_3;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        {
          ATerm m_21 = t;
          int n_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_8 = NULL,r_8 = NULL,s_8 = NULL;
              ATerm j_2 (ATerm t)
              {
                ATerm t_8 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    t_8 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = t_8;
                return(t);
              }
              t = _2_0(j_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  p_8 = ATgetArgument(t, 0);
                  r_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(p_8, r_8);
              s_8 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, s_8);
              ;
              LocalPopChoice(n_21);
            }
          else
            {
              t = m_21;
              {
                ATerm u_8 = NULL,y_8 = NULL,z_8 = NULL;
                ATerm k_2 (ATerm t)
                {
                  ATerm b_9 = NULL;
                  b_9 = t;
                  t = SSL_is_string(b_9);
                  return(t);
                }
                t = _2_0(k_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    u_8 = ATgetArgument(t, 0);
                    y_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(u_8, y_8);
                z_8 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, z_8);
              }
            }
        }
      }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm k_65 (ATerm), ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
  if(match_cons(t, sym__2))
    {
      c_9 = ATgetArgument(t, 0);
      d_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_9, term_o_21);
  t = open_stream_0_0(t);
  e_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_9, d_9);
  t = k_65(t);
  t = fclose_0_0(t);
  t = d_9;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm p_21 = ATgetArgument(t, 0);
        if(match_cons(p_21, sym_Stream_1))
          {
            i_9 = ATgetArgument(p_21, 0);
          }
        else
          _fail(t);
        j_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(i_9, j_9);
    k_9 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, k_9);
    return(t);
  }
  t = WriteToFile_1_0(n_2, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL;
  l_9 = t;
  t = xtc_new_file_0_0(t);
  m_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_9, l_9);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(m_9);
  t = (ATerm) ATmakeAppl(sym_FILE_1, m_9);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(s_83, t_83, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm assert_1_0 (ATerm u_79 (ATerm), ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      q_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_79(t);
  s_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_9, q_9, r_9);
  t = table_push_0_0(t);
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(s_9, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_9 = ATgetFirst((ATermList) t);
        u_9 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(s_9, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(u_9), (ATerm) ATinsert(CheckATermList(t_9), q_9)));
    t = (ATerm) ATmakeAppl(sym__2, q_9, r_9);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm d_65 (ATerm), ATerm t)
{
  ATerm v_9 = NULL;
  v_9 = t;
  t = d_65(t);
  {
    ATerm o_2 (ATerm t)
    {
      t = term_s_21;
      return(t);
    }
    t = debug_1_0(o_2, t);
    t = v_9;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm j_10 (ATerm z_9, ATerm t)
  {
    t = z_9;
    {
      ATerm t_21 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm u_21 = ATgetArgument(t, 0);
              ATerm v_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = t_21;
        }
      {
        ATerm q_2 (ATerm t)
        {
          t = term_w_21;
          return(t);
        }
        t = obsolete_1_0(q_2, t);
        t = (ATerm) ATmakeAppl(sym__2, z_9, term_o_21);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm k_10 (ATerm b_10, ATerm c_10, ATerm d_10, ATerm t)
  {
    t = SSL_open_file(b_10, c_10);
    return(t);
  }
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
  g_10 = t;
  if(match_cons(t, sym__2))
    {
      h_10 = ATgetArgument(t, 0);
      i_10 = ATgetArgument(t, 1);
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_10(g_10, t);
            ;
            LocalPopChoice(y_21);
          }
        else
          {
            t = x_21;
            t = k_10(h_10, i_10, g_10, t);
          }
      }
    }
  else
    {
      t = j_10(g_10, t);
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
  ATerm m_10 = NULL;
  t = term_z_21;
  t = new_0_0(t);
  m_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_10, term_a_22);
  t = conc_strings_0_0(t);
  {
    ATerm s_2 (ATerm t)
    {
      ATerm k_3 = NULL;
      k_3 = t;
      t = SSL_access(k_3, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(s_2, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm o_10 = NULL;
  t = new_file_0_0(t);
  o_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_10, term_o_21);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, o_10, term_z_21);
  {
    ATerm t_2 (ATerm t)
    {
      t = term_b_22;
      return(t);
    }
    t = assert_1_0(t_2, t);
    t = o_10;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL;
  b_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm s_3 = NULL,u_3 = NULL;
      t = b_11;
      t = xtc_new_file_0_0(t);
      s_3 = t;
      t = l_0(t);
      u_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_3, (ATerm) ATinsert(ATinsert(ATempty, s_3), term_c_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(k_0, t);
      t = SSL_close_file(s_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, s_3);
    }
  else
    {
      ATerm g_4 = NULL,m_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          c_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_11;
      t = xtc_new_file_0_0(t);
      g_4 = t;
      t = l_0(t);
      m_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_4), term_c_22), c_11), term_d_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(k_0, t);
      t = SSL_close_file(g_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_4);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm u_61 (ATerm), ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL;
  i_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      g_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_11);
  f_11 = t;
  t = g_11;
  t = u_61(t);
  h_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, h_11), f_11);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm t)
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_22 = t;
      int h_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(h_22);
        }
      else
        {
          t = g_22;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(f_22);
      t = xtc_transform_file_2_0(l_83, m_83, t);
    }
  else
    {
      t = e_22;
      t = xtc_transform_term_2_0(l_83, m_83, t);
    }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
  if(match_cons(t, sym__2))
    {
      o_11 = ATgetArgument(t, 0);
      p_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_4 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_22 = ATgetArgument(t, 0);
            ATerm l_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(o_11, p_11);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm m_22 = ATgetFirst((ATermList) t);
            q_4 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_4;
        ;
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
        t = (ATerm) ATempty;
      }
    q_11 = t;
    t = SSL_table_put(o_11, p_11, q_11);
    t = (ATerm) ATmakeAppl(sym__2, o_11, p_11);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_79 (ATerm), ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
  w_11 = t;
  t = r_79(t);
  x_11 = t;
  {
    ATerm n_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(x_11, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(o_22);
      }
    else
      {
        t = n_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_11 = ATgetFirst((ATermList) t);
        y_11 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(x_11, (ATerm)ATmakeAppl(sym_Scopes_0), y_11);
    t = z_11;
    {
      ATerm u_2 (ATerm t)
      {
        ATerm a_12 = NULL;
        a_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_11, a_12);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(u_2, t);
      t = w_11;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm t)
{
  ATerm p_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_80(t);
      t = n_80(t);
      ;
      LocalPopChoice(q_22);
    }
  else
    {
      t = p_22;
      t = n_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_79 (ATerm), ATerm t)
{
  ATerm d_12 = NULL,f_12 = NULL,g_12 = NULL;
  d_12 = t;
  t = q_79(t);
  f_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_12, term_r_22);
  {
    ATerm s_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_22 = ATgetArgument(t, 0);
            ATerm v_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(f_12, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(t_22);
      }
    else
      {
        t = s_22;
        t = (ATerm) ATempty;
      }
    g_12 = t;
    t = SSL_table_put(f_12, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(g_12), (ATerm) ATempty));
    t = d_12;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm v_82 (ATerm), ATerm t)
{
  ATerm l_12 = NULL;
  ATerm v_2 (ATerm t)
  {
    t = term_b_22;
    return(t);
  }
  t = begin_scope_1_0(v_2, t);
  {
    ATerm b_3 (ATerm t)
    {
      ATerm m_12 = NULL;
      m_12 = t;
      {
        ATerm w_22 = t;
        int x_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(x_22);
          }
        else
          {
            t = w_22;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_12 = ATgetFirst((ATermList) t);
            {
              ATerm y_22 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = l_12;
        {
          ATerm g_3 (ATerm t)
          {
            ATerm j_3 (ATerm t)
            {
              ATerm n_12 = NULL;
              n_12 = t;
              t = SSL_remove(n_12);
              return(t);
            }
            t = try_1_0(j_3, t);
            return(t);
          }
          t = map_1_0(g_3, t);
          t = m_12;
          {
            ATerm m_3 (ATerm t)
            {
              t = term_b_22;
              return(t);
            }
            t = end_scope_1_0(m_3, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(v_82, b_3, t);
  }
  return(t);
}
ATerm xtc_input_1_0 (ATerm y_82 (ATerm), ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_12 = NULL;
        t = term_d_22;
        t = get_config_0_0(t);
        o_12 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, o_12);
        ;
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
        t = term_b_23;
      }
    t = y_82(t);
    return(t);
  }
  t = xtc_temp_files_1_0(v_3, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm q_12 = NULL;
    q_12 = t;
    if(match_string(t, "-k"))
      {
        t = q_12;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = q_12;
      }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    ATerm r_12 = NULL,s_12 = NULL;
    r_12 = t;
    t = SSL_string_to_int(r_12);
    s_12 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), s_12);
    t = r_12;
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_c_23;
    return(t);
  }
  t = ArgOption_3_0(y_3, z_3, a_4, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_4 (ATerm t)
      {
        ATerm u_12 = NULL;
        u_12 = t;
        if(match_string(t, "-S"))
          {
            t = u_12;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = u_12;
          }
        return(t);
      }
      ATerm e_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_g_23;
        return(t);
      }
      ATerm h_4 (ATerm t)
      {
        t = term_h_23;
        return(t);
      }
      t = Option_3_0(b_4, e_4, h_4, t);
      ;
      LocalPopChoice(e_23);
    }
  else
    {
      t = d_23;
      {
        ATerm i_23 = t;
        int j_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_4 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm k_4 (ATerm t)
            {
              ATerm v_12 = NULL,w_12 = NULL;
              v_12 = t;
              t = SSL_string_to_int(v_12);
              w_12 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), w_12);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, v_12);
              return(t);
            }
            ATerm n_4 (ATerm t)
            {
              t = term_k_23;
              return(t);
            }
            t = ArgOption_3_0(i_4, k_4, n_4, t);
            ;
            LocalPopChoice(j_23);
          }
        else
          {
            t = i_23;
            {
              ATerm p_4 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm r_4 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_l_23;
                return(t);
              }
              ATerm s_4 (ATerm t)
              {
                t = term_m_23;
                return(t);
              }
              t = Option_3_0(p_4, r_4, s_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL,d_13 = NULL,f_13 = NULL,g_13 = NULL;
  z_12 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = z_12;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm m_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_13 = ATgetFirst((ATermList) t);
          d_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_13;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_13 = ATgetFirst((ATermList) t);
          g_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_13;
      t = h_0(t);
      t = f_13;
      t = i_0(t);
      m_13 = t;
      t = (ATerm) ATinsert(CheckATermList(g_13), m_13);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm t_4 (ATerm t)
  {
    ATerm o_13 = NULL;
    o_13 = t;
    if(match_string(t, "-i"))
      {
        t = o_13;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = o_13;
      }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    ATerm p_13 = NULL;
    p_13 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), p_13);
    t = (ATerm) ATmakeAppl(sym_Input_1, p_13);
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = term_p_23;
    return(t);
  }
  t = ArgOption_3_0(t_4, u_4, w_4, t);
  return(t);
}
ATerm input_options_0_0 (ATerm t)
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      t = general_options_0_0(t);
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL;
  q_13 = t;
  t = term_z_21;
  t = whoami_0_0(t);
  r_13 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), r_13), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = q_13;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_13 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_21;
  t = whoami_0_0(t);
  s_13 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), s_13));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_s_23;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_75(t);
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      {
        ATerm v_13 = NULL,w_13 = NULL,z_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_13 = ATgetFirst((ATermList) t);
            w_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_13;
        t = foldr_2_0(t_75, u_75, t);
        z_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_13, z_13);
        t = u_75(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL;
  a_14 = t;
  t = SSL_explode_term(a_14);
  if(match_cons(t, sym__2))
    {
      ATerm v_23 = ATgetArgument(t, 0);
      b_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_14;
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
  ATerm c_14 = NULL;
  t = times_0_0(t);
  {
    ATerm z_4 (ATerm t)
    {
      t = term_f_23;
      return(t);
    }
    ATerm a_5 (ATerm t)
    {
      ATerm d_14 = NULL,e_14 = NULL;
      if(match_cons(t, sym__2))
        {
          d_14 = ATgetArgument(t, 0);
          e_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm w_23 = t;
        int x_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(d_14, e_14);
            ;
            LocalPopChoice(x_23);
          }
        else
          {
            t = w_23;
            t = SSL_addr(d_14, e_14);
          }
      }
      return(t);
    }
    t = crush_2_0(z_4, a_5, t);
    c_14 = t;
    t = SSL_TicksToSeconds(c_14);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
  n_14 = t;
  if(match_cons(t, sym__2))
    {
      o_14 = ATgetArgument(t, 0);
      p_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_14;
        if((o_14 != t))
          {
            _fail(t);
          }
        t = n_14;
        ;
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        t = n_14;
        {
          ATerm a_24 = t;
          int b_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_14, p_14);
              ;
              LocalPopChoice(b_24);
            }
          else
            {
              t = a_24;
              t = SSL_gtr(o_14, p_14);
            }
          t = (ATerm) ATmakeAppl(sym__2, o_14, p_14);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_80 (ATerm), ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    ATerm v_14 = NULL,w_14 = NULL;
    v_14 = t;
    t = term_x_17;
    t = get_config_0_0(t);
    w_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_14, term_a_8);
    t = geq_0_0(t);
    t = v_14;
    t = r_80(t);
    return(t);
  }
  t = try_1_0(b_5, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm y_14 = NULL,z_14 = NULL;
    t = run_time_0_0(t);
    y_14 = t;
    t = term_z_21;
    t = whoami_0_0(t);
    z_14 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), y_14), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), z_14));
    t = (ATerm) ATmakeAppl(sym__2, term_m_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_24), y_14), term_v_7), z_14));
    return(t);
  }
  t = if_verbose1_1_0(c_5, t);
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
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
      {
        ATerm d_5 (ATerm t)
        {
          ATerm g_24 = t;
          int h_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
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
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(j_24);
                  }
                else
                  {
                    t = i_24;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(d_5, t);
      }
    }
  t = x_84(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_15 = ATgetFirst((ATermList) t);
      e_15 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_15 = NULL,j_15 = NULL;
        t = e_15;
        t = g_0(t);
        i_15 = t;
        t = d_15;
        t = f_0(t);
        j_15 = t;
        t = e_15;
        {
          ATerm f_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(i_15), j_15);
            return(t);
          }
          t = reverse_acc_2_0(f_0, f_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_21;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, h_5, t);
  return(t);
}
ATerm Program_1_0 (ATerm b_62 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
  n_15 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_15);
  k_15 = t;
  t = l_15;
  t = b_62(t);
  m_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, m_15), k_15);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_24);
    }
  else
    {
      t = k_24;
      {
        ATerm i_5 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(i_5, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_m_24;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm j_5 (ATerm t)
    {
      ATerm r_15 = NULL;
      r_15 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, r_15), term_n_24);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(j_5, t);
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
  ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL;
  v_15 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      t_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_15);
  s_15 = t;
  t = t_15;
  t = c_62(t);
  u_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, u_15), s_15);
  return(t);
}
ATerm fetch_1_0 (ATerm n_69 (ATerm), ATerm t)
{
  ATerm z_15 (ATerm t)
  {
    ATerm o_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(n_69, _id, t);
        ;
        LocalPopChoice(p_24);
      }
    else
      {
        t = o_24;
        t = Cons_2_0(_id, z_15, t);
      }
    return(t);
  }
  t = z_15(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm s_85 (ATerm), ATerm t)
{
  t = fetch_1_0(s_85, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL;
  b_16 = t;
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_16;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_24 = ATgetFirst((ATermList) t);
                ATerm t_24 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_16;
          }
        ;
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        t = (ATerm) ATinsert(ATempty, b_16);
      }
    c_16 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), c_16);
    t = b_16;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_s_23;
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
  ATerm u_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_24);
    }
  else
    {
      t = u_24;
      {
        ATerm i_16 = NULL,j_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_16 = ATgetFirst((ATermList) t);
            j_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_16;
        {
          ATerm k_5 (ATerm t)
          {
            t = j_16;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(k_5, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL;
  p_16 = t;
  t = SSL_explode_term(p_16);
  if(match_cons(t, sym__2))
    {
      ATerm w_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_16;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm t_69 (ATerm), ATerm t)
{
  ATerm r_16 (ATerm t)
  {
    ATerm x_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, r_16, t);
        ;
        LocalPopChoice(y_24);
      }
    else
      {
        t = x_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_69(t);
      }
    return(t);
  }
  t = r_16(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL;
  if(match_cons(t, sym__2))
    {
      t_16 = ATgetArgument(t, 0);
      s_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_16;
  {
    ATerm l_5 (ATerm t)
    {
      t = s_16;
      return(t);
    }
    t = at_end_1_0(l_5, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(a_25);
    }
  else
    {
      t = z_24;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm m_55 (ATerm), ATerm n_55 (ATerm), ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL;
  z_16 = t;
  if(match_cons(t, sym__2))
    {
      v_16 = ATgetArgument(t, 0);
      w_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_16);
  u_16 = t;
  t = v_16;
  t = m_55(t);
  x_16 = t;
  t = w_16;
  t = n_55(t);
  y_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, x_16, y_16), u_16);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm d_17 = NULL;
  ATerm m_5 (ATerm t)
  {
    ATerm e_17 = NULL;
    e_17 = t;
    t = SSL_explode_string(e_17);
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    ATerm f_17 = NULL;
    f_17 = t;
    t = SSL_explode_string(f_17);
    return(t);
  }
  t = _2_0(m_5, n_5, t);
  t = conc_0_0(t);
  d_17 = t;
  t = SSL_implode_string(d_17);
  return(t);
}
ATerm debug_1_0 (ATerm w_64 (ATerm), ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  g_17 = t;
  t = w_64(t);
  h_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_17), h_17));
  t = g_17;
  return(t);
}
ATerm map_1_0 (ATerm d_69 (ATerm), ATerm t)
{
  ATerm i_17 (ATerm t)
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        t = Cons_2_0(d_69, i_17, t);
      }
    return(t);
  }
  t = i_17(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_17 = NULL;
      o_17 = t;
      t = SSL_is_string(o_17);
      ;
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      {
        ATerm f_25 = t;
        int g_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_5 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(o_5, t);
            ;
            LocalPopChoice(g_25);
          }
        else
          {
            t = f_25;
            {
              ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
              s_17 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_17 = ATgetArgument(t, 0);
                  t = t_17;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_17 = ATgetArgument(t, 0);
                      t = t_17;
                      {
                        ATerm h_25 = t;
                        int i_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(i_25);
                          }
                        else
                          {
                            t = h_25;
                            {
                              ATerm p_5 (ATerm t)
                              {
                                t = term_j_25;
                                return(t);
                              }
                              t = debug_1_0(p_5, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm y_17 = NULL,z_17 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_17 = ATgetArgument(t, 0);
                          u_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_17;
                      t = eval_config_0_0(t);
                      y_17 = t;
                      t = u_17;
                      t = eval_config_0_0(t);
                      z_17 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_17, z_17);
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
  ATerm c_18 = NULL;
  c_18 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_18);
  {
    ATerm q_5 (ATerm t)
    {
      ATerm d_18 = NULL;
      t = eval_config_0_0(t);
      d_18 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_18, d_18);
      t = d_18;
      return(t);
    }
    t = try_1_0(q_5, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm x_79 (ATerm), ATerm t)
{
  ATerm k_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_79(t);
      ;
      LocalPopChoice(l_25);
    }
  else
    {
      t = k_25;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_5 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm v_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_q_25;
        return(t);
      }
      ATerm w_5 (ATerm t)
      {
        t = term_r_25;
        return(t);
      }
      t = Option_3_0(t_5, v_5, w_5, t);
      ;
      LocalPopChoice(n_25);
    }
  else
    {
      t = m_25;
      {
        ATerm z_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm a_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_s_25;
          return(t);
        }
        ATerm b_6 (ATerm t)
        {
          t = term_t_25;
          return(t);
        }
        t = Option_3_0(z_5, a_6, b_6, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL;
  if(match_cons(t, sym__3))
    {
      g_18 = ATgetArgument(t, 0);
      h_18 = ATgetArgument(t, 1);
      i_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_18, h_18);
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_25 = ATgetArgument(t, 0);
            ATerm x_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(g_18, h_18);
        ;
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        t = (ATerm) ATempty;
      }
    j_18 = t;
    t = SSL_table_put(g_18, h_18, (ATerm) ATinsert(CheckATermList(j_18), i_18));
    t = (ATerm) ATmakeAppl(sym__3, g_18, h_18, i_18);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm o_18 = NULL;
  t = term_z_21;
  t = x_86(t);
  o_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_25, term_z_25, o_18);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  q_18 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = q_18;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm v_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_18 = ATgetFirst((ATermList) t);
          s_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_18;
      t = a_0(t);
      t = term_z_21;
      t = b_0(t);
      v_18 = t;
      t = (ATerm) ATinsert(CheckATermList(s_18), v_18);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm e_6 (ATerm t)
  {
    ATerm x_18 = NULL;
    x_18 = t;
    if(match_string(t, "--help"))
      {
        t = x_18;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = x_18;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = x_18;
          }
      }
    return(t);
  }
  ATerm f_6 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_a_26;
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    t = term_b_26;
    return(t);
  }
  t = Option_3_0(e_6, f_6, g_6, t);
  return(t);
}
ATerm Cons_2_0 (ATerm v_56 (ATerm), ATerm w_56 (ATerm), ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL;
  d_19 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_18 = ATgetFirst((ATermList) t);
      a_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_19);
  y_18 = t;
  t = z_18;
  t = v_56(t);
  b_19 = t;
  t = a_19;
  t = w_56(t);
  c_19 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(c_19), b_19), y_18);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm k_19 = NULL;
  k_19 = t;
  {
    ATerm h_6 (ATerm t)
    {
      t = term_c_26;
      t = v_86(t);
      return(t);
    }
    t = try_1_0(h_6, t);
    t = k_19;
    {
      ATerm j_6 (ATerm t)
      {
        ATerm l_19 = NULL;
        l_19 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_19);
        t = (ATerm) ATmakeAppl(sym_Program_1, l_19);
        return(t);
      }
      ATerm k_6 (ATerm t)
      {
        ATerm d_26 = t;
        int e_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_26 = t;
            int g_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(g_26);
              }
            else
              {
                t = f_26;
                t = v_86(t);
                t = Cons_2_0(_id, k_6, t);
              }
            ;
            LocalPopChoice(e_26);
          }
        else
          {
            t = d_26;
            {
              ATerm n_19 = NULL,o_19 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_19 = ATgetFirst((ATermList) t);
                  o_19 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_19), (ATerm) ATmakeAppl(sym_Undefined_1, n_19));
            }
          }
        return(t);
      }
      t = Cons_2_0(j_6, k_6, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm u_86 (ATerm), ATerm t)
{
  ATerm u_19 = NULL,w_19 = NULL,x_19 = NULL;
  u_19 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = u_19;
  {
    ATerm n_6 (ATerm t)
    {
      ATerm h_26 = t;
      int i_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_86(t);
          ;
          LocalPopChoice(i_26);
        }
      else
        {
          t = h_26;
          {
            ATerm j_26 = t;
            int k_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(k_26);
              }
            else
              {
                t = j_26;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_6, t);
    {
      ATerm o_6 (ATerm t)
      {
        ATerm l_26 = t;
        int m_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_20 = NULL;
            c_20 = t;
            {
              ATerm n_26 = t;
              int o_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_20;
                  {
                    ATerm p_26 = t;
                    int q_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_f_24;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(q_26);
                      }
                    else
                      {
                        t = p_26;
                        {
                          ATerm r_6 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(r_6, t);
                        }
                      }
                    t = c_20;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(o_26);
                }
              else
                {
                  t = n_26;
                  t = term_p_25;
                  t = get_config_0_0(t);
                  t = c_20;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(m_26);
          }
        else
          {
            t = l_26;
            {
              ATerm s_6 (ATerm t)
              {
                ATerm x_6 (ATerm t)
                {
                  w_19 = t;
                  return(t);
                }
                t = Undefined_1_0(x_6, t);
                return(t);
              }
              t = option_defined_1_0(s_6, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(w_19)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_m_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_19)), term_r_26));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(o_6, t);
      x_19 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = x_19;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm t)
{
  ATerm y_9 = NULL;
  t = parse_options_1_0(z_84, t);
  y_9 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), y_9);
  t = y_9;
  t = b_85(t);
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_85, t);
        ;
        LocalPopChoice(t_26);
      }
    else
      {
        t = s_26;
        {
          ATerm u_26 = t;
          int v_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(v_26);
            }
          else
            {
              t = u_26;
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
ATerm sdf_to_sig_0_0 (ATerm t)
{
  ATerm b_7 (ATerm t)
  {
    ATerm c_7 (ATerm t)
    {
      ATerm f_20 = NULL;
      ATerm d_7 (ATerm t)
      {
        t = term_w_26;
        return(t);
      }
      ATerm e_7 (ATerm t)
      {
        ATerm g_20 = NULL;
        t = term_x_26;
        t = xtc_find_0_0(t);
        g_20 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_20), term_z_26), term_y_26);
        return(t);
      }
      t = xtc_transform_2_0(d_7, e_7, t);
      {
        ATerm g_7 (ATerm t)
        {
          t = term_a_27;
          return(t);
        }
        t = xtc_transform_1_0(g_7, t);
        {
          ATerm i_7 (ATerm t)
          {
            t = term_b_27;
            return(t);
          }
          t = xtc_transform_1_0(i_7, t);
          {
            ATerm j_7 (ATerm t)
            {
              t = term_c_27;
              return(t);
            }
            ATerm k_7 (ATerm t)
            {
              ATerm i_20 = NULL,j_20 = NULL;
              t = term_d_27;
              t = xtc_find_0_0(t);
              i_20 = t;
              t = term_e_27;
              t = xtc_find_0_0(t);
              j_20 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_20), term_z_26), i_20), term_z_26);
              return(t);
            }
            t = xtc_transform_2_0(j_7, k_7, t);
            {
              ATerm p_7 (ATerm t)
              {
                t = term_f_27;
                return(t);
              }
              t = xtc_transform_1_0(p_7, t);
              if(match_cons(t, sym_FILE_1))
                {
                  f_20 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATempty, term_g_27), f_20);
              {
                ATerm q_7 (ATerm t)
                {
                  t = term_h_27;
                  return(t);
                }
                t = xtc_command_1_0(q_7, t);
              }
            }
          }
        }
      }
      return(t);
    }
    t = xtc_input_1_0(c_7, t);
    return(t);
  }
  t = option_wrap_2_0(input_options_0_0, b_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = sdf_to_sig_0_0(t);
  return(t);
}
