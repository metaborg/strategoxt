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
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_y_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_q_26;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_m_25;
ATerm term_j_25;
ATerm term_z_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_p_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_y_23;
ATerm term_o_23;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_i_22;
ATerm term_e_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_t_21;
ATerm term_q_21;
ATerm term_n_21;
ATerm term_k_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_l_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_w_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_l_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_k_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_r_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_k_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_d_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
void init_constant_terms (void)
{
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("visamb.pp.af", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.pp.af", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_8, term_r_8, term_t_8);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_8, term_x_8, term_k_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_9, term_a_10, term_b_10);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_10, term_i_10, term_j_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_10, term_t_10, term_u_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_10, term_x_10, term_y_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_11, term_b_11, term_c_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_11, term_h_11, term_i_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_11, term_p_11, term_q_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_t_11, term_u_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_11, term_x_11, term_y_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_12, term_b_12, term_e_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_h_12, term_i_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_12, term_o_12, term_p_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_12, term_x_12, term_y_12);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_e_13, term_f_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_p_13, term_q_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_x_13, term_a_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_14, term_i_14, term_j_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_s_14, term_v_14);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_e_15, term_f_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_j_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_m_15, term_n_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_t_15, term_w_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_d_16, term_e_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_n_16, term_o_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_16, term_w_16, term_y_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_17, term_d_17, term_e_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_24);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__3, term_v_26, term_w_26, term_l_22);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Vis-amb", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_1_0 (ATerm k_83 (ATerm), ATerm);
ATerm build_pp_tables_0_0 (ATerm);
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
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm r_79 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm q_79 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm v_82 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm w_82 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
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
ATerm xtc_io_wrap_2_0 (ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm);
ATerm xtc_io_wrap_1_0 (ATerm z_82 (ATerm), ATerm);
ATerm main_visamb_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm xtc_transform_1_0 (ATerm k_83 (ATerm), ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2_0(k_83, c_0, t);
  return(t);
}
ATerm build_pp_tables_0_0 (ATerm t)
{
  ATerm d_1 = NULL,g_1 = NULL;
  t = term_z_7;
  t = xtc_find_0_0(t);
  d_1 = t;
  t = term_a_8;
  t = xtc_find_0_0(t);
  g_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_1), term_b_8), d_1), term_b_8);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL;
  l_1 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = l_1;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          m_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(m_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm k_65 (ATerm), ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,u_1 = NULL;
  if(match_cons(t, sym__2))
    {
      o_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_1, term_d_8);
  t = open_stream_0_0(t);
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_1, p_1);
  t = k_65(t);
  t = fclose_0_0(t);
  t = p_1;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm e_8 = ATgetArgument(t, 0);
        if(match_cons(e_8, sym_Stream_1))
          {
            d_2 = ATgetArgument(e_8, 0);
          }
        else
          _fail(t);
        e_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(d_2, e_2);
    f_2 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, f_2);
    return(t);
  }
  t = WriteToFile_1_0(e_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL;
  i_2 = t;
  t = xtc_new_file_0_0(t);
  j_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_2, i_2);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(j_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, j_2);
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
  ATerm k_2 = NULL;
  ATerm n_0 (ATerm t)
  {
    ATerm l_2 = NULL;
    l_2 = t;
    t = SSL_explode_string(l_2);
    return(t);
  }
  t = map_1_0(n_0, t);
  t = concat_0_0(t);
  k_2 = t;
  t = SSL_implode_string(k_2);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL;
  h_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      i_3 = ATgetArgument(t, 0);
      {
        ATerm r_0 = NULL;
        t = SSL_int_to_string(i_3);
        r_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_8), r_0), term_f_8);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm z_0 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          i_3 = ATgetArgument(t, 0);
          j_3 = ATgetArgument(t, 1);
          k_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(j_3);
      z_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_3), term_k_8), z_0), term_h_8), i_3);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm p_69 (ATerm), ATerm t)
{
  ATerm p_3 = NULL;
  ATerm o_0 (ATerm t)
  {
    t = p_69(t);
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
    ATerm l_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_17), term_z_16), term_u_16), term_f_16), term_z_15), term_q_15), term_k_15), term_g_15), term_w_14), term_l_14), term_b_14), term_v_13), term_k_13), term_c_13), term_q_12), term_m_12), term_f_12), term_z_11), term_v_11), term_r_11), term_n_11), term_d_11), term_z_10), term_v_10), term_p_10), term_c_10), term_l_9), term_u_8);
        {
          ATerm p_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm g_17 = ATgetArgument(t, 0);
                if((q_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm h_17 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(p_0, t);
        }
        ;
        LocalPopChoice(p_8);
      }
    else
      {
        t = l_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, q_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm r_3 = NULL;
  r_3 = t;
  {
    ATerm q_0 (ATerm t)
    {
      ATerm s_3 = NULL,v_3 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm k_17 = ATgetArgument(t, 0);
          s_3 = ATgetArgument(t, 1);
          {
            ATerm l_17 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = s_3;
      {
        ATerm m_17 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_17;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        v_3 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_3), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATempty, v_3), term_z_17));
      }
      return(t);
    }
    t = try_1_0(q_0, t);
    t = r_3;
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
  ATerm y_3 = NULL,z_3 = NULL;
  y_3 = t;
  t = fork_0_0(t);
  z_3 = t;
  {
    ATerm a_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = y_3;
        t = x_63(t);
        ;
        LocalPopChoice(h_18);
      }
    else
      {
        t = a_18;
        t = (ATerm) ATmakeAppl(sym__2, z_3, y_3);
        t = y_63(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm z_63 (ATerm), ATerm t)
{
  ATerm b_4 = NULL;
  ATerm s_0 (ATerm t)
  {
    ATerm d_4 = NULL;
    if(match_cons(t, sym__2))
      {
        d_4 = ATgetArgument(t, 0);
        b_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(d_4);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm i_18 = ATgetArgument(t, 0);
        if(((ATgetType(i_18) != AT_INT) || (ATgetInt((ATermInt) i_18) != 0)))
          _fail(t);
        {
          ATerm j_18 = ATgetArgument(t, 1);
        }
        {
          ATerm k_18 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = b_4;
    return(t);
  }
  t = fork_2_0(z_63, s_0, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL;
  if(match_cons(t, sym__2))
    {
      g_4 = ATgetArgument(t, 0);
      h_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_0 (ATerm t)
    {
      t = SSL_execvp(g_4, h_4);
      return(t);
    }
    t = fork_and_wait_1_0(t_0, t);
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm i_4 = NULL;
  i_4 = t;
  t = SSL_table_keys(i_4);
  {
    ATerm u_0 (ATerm t)
    {
      ATerm k_4 = NULL,l_4 = NULL;
      k_4 = t;
      t = SSL_table_get(i_4, k_4);
      l_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_4, l_4);
      return(t);
    }
    t = map_1_0(u_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_80 (ATerm), ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    ATerm m_4 = NULL,n_4 = NULL;
    m_4 = t;
    t = term_l_18;
    t = get_config_0_0(t);
    n_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_4, term_d_16);
    t = geq_0_0(t);
    t = m_4;
    t = v_80(t);
    return(t);
  }
  t = try_1_0(v_0, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL;
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, s_4));
  {
    ATerm w_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((t_4 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          u_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(w_0, t);
    t = not_null(u_4);
  }
  return(t);
}
ATerm filter_1_0 (ATerm w_76 (ATerm), ATerm t)
{
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
      {
        ATerm p_18 = t;
        int t_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_0 (ATerm t)
            {
              t = filter_1_0(w_76, t);
              return(t);
            }
            t = Cons_2_0(w_76, x_0, t);
            ;
            LocalPopChoice(t_18);
          }
        else
          {
            t = p_18;
            {
              ATerm m_5 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm u_18 = ATgetFirst((ATermList) t);
                  m_5 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = m_5;
              t = filter_1_0(w_76, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm q_78 (ATerm), ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    ATerm y_0 (ATerm t)
    {
      t = q_78(t);
      t = u_5(t);
      return(t);
    }
    t = try_1_0(y_0, t);
    return(t);
  }
  t = u_5(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm w_5 = NULL;
  w_5 = t;
  {
    ATerm a_1 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm v_18 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = v_18;
          }
      }
      return(t);
    }
    t = repeat_1_0(a_1, t);
    t = w_5;
  }
  return(t);
}
ATerm say_1_0 (ATerm a_65 (ATerm), ATerm t)
{
  ATerm b_6 = NULL,b_1 = NULL;
  b_6 = t;
  t = a_65(t);
  b_1 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, b_1));
  t = b_6;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_80 (ATerm), ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm c_6 = NULL,e_6 = NULL;
    c_6 = t;
    t = term_l_18;
    t = get_config_0_0(t);
    e_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_6, term_b_12);
    t = geq_0_0(t);
    t = c_6;
    t = u_80(t);
    return(t);
  }
  t = try_1_0(c_1, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm h_6 = NULL,i_6 = NULL;
    h_6 = t;
    t = term_l_18;
    t = get_config_0_0(t);
    i_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_6, term_i_10);
    t = geq_0_0(t);
    t = h_6;
    t = w_80(t);
    return(t);
  }
  t = try_1_0(e_1, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_6 = ATgetFirst((ATermList) t);
      u_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_73(t);
  {
    ATerm f_1 (ATerm t)
    {
      ATerm x_6 = NULL;
      x_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_6, x_6);
      t = k_73(t);
      return(t);
    }
    t = fetch_1_0(f_1, t);
    t = u_6;
  }
  return(t);
}
ATerm union_1_0 (ATerm g_73 (ATerm), ATerm t)
{
  ATerm y_6 = NULL,a_7 = NULL;
  if(match_cons(t, sym__2))
    {
      a_7 = ATgetArgument(t, 0);
      y_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7;
  {
    ATerm b_7 (ATerm t)
    {
      ATerm y_18 = t;
      int z_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = y_6;
          ;
          LocalPopChoice(z_18);
        }
      else
        {
          t = y_18;
          {
            ATerm c_19 = t;
            int d_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_1 (ATerm t)
                {
                  t = y_6;
                  return(t);
                }
                t = HdMember_p__2_0(g_73, h_1, t);
                t = b_7(t);
                ;
                LocalPopChoice(d_19);
              }
            else
              {
                t = c_19;
                t = Cons_2_0(_id, b_7, t);
              }
          }
        }
      return(t);
    }
    t = b_7(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm c_7 = NULL;
    if(match_cons(t, sym__2))
      {
        c_7 = ATgetArgument(t, 0);
        if((c_7 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(i_1, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL;
  if(match_cons(t, sym__3))
    {
      f_7 = ATgetArgument(t, 0);
      g_7 = ATgetArgument(t, 1);
      h_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_7, g_7);
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_19 = ATgetArgument(t, 0);
            ATerm l_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(f_7, g_7);
        ;
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        t = (ATerm) ATempty;
      }
    i_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_7, h_7);
    t = union_0_0(t);
    j_7 = t;
    t = SSL_table_put(f_7, g_7, j_7);
    t = (ATerm) ATmakeAppl(sym__3, f_7, g_7, h_7);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm f_81 (ATerm), ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL;
  if(match_cons(t, sym__2))
    {
      l_7 = ATgetArgument(t, 0);
      k_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7;
  {
    ATerm j_1 (ATerm t)
    {
      ATerm m_7 = NULL,n_7 = NULL;
      if(match_cons(t, sym__2))
        {
          m_7 = ATgetArgument(t, 0);
          n_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, l_7, m_7, n_7);
      t = f_81(t);
      return(t);
    }
    t = map_1_0(j_1, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_8 (ATerm c_8, ATerm t)
  {
    t = SSL_fclose(c_8);
    return(t);
  }
  ATerm i_8 = NULL,j_8 = NULL;
  j_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_8 = ATgetArgument(t, 0);
      {
        ATerm n_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_8);
            ;
            LocalPopChoice(r_19);
          }
        else
          {
            t = n_19;
            t = m_8(j_8, t);
          }
      }
    }
  else
    {
      t = m_8(j_8, t);
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
      ATerm s_19 = ATgetArgument(t, 0);
      ATerm u_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_19 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_2 = NULL,h_2 = NULL;
        g_2 = t;
        t = SSL_explode_term(g_2);
        if(match_cons(t, sym__2))
          {
            ATerm e_20 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_20) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm f_20 = ATgetArgument(t, 1);
              if(((ATgetType(f_20) == AT_LIST) && !(ATisEmpty(f_20))))
                {
                  h_2 = ATgetFirst((ATermList) f_20);
                  {
                    ATerm g_20 = (ATerm) ATgetNext((ATermList) f_20);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = h_2;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(d_20);
      }
    else
      {
        t = v_19;
        {
          ATerm h_20 = t;
          int i_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL;
              ATerm k_1 (ATerm t)
              {
                ATerm b_9 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    b_9 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = b_9;
                return(t);
              }
              t = _2_0(k_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  y_8 = ATgetArgument(t, 0);
                  z_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(y_8, z_8);
              a_9 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, a_9);
              ;
              LocalPopChoice(i_20);
            }
          else
            {
              t = h_20;
              {
                ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
                ATerm n_1 (ATerm t)
                {
                  ATerm f_9 = NULL;
                  f_9 = t;
                  t = SSL_is_string(f_9);
                  return(t);
                }
                t = _2_0(n_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    c_9 = ATgetArgument(t, 0);
                    d_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(c_9, d_9);
                e_9 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, e_9);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL;
  ATerm l_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_9 = NULL;
      j_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_9, term_p_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(o_20);
    }
  else
    {
      t = l_20;
      {
        ATerm q_1 (ATerm t)
        {
          t = term_q_20;
          return(t);
        }
        t = debug_1_0(q_1, t);
        _fail(t);
      }
    }
  g_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(i_9);
  h_9 = t;
  t = g_9;
  t = fclose_0_0(t);
  t = h_9;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_2 = NULL;
      n_2 = t;
      t = SSL_access(n_2, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(s_20);
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
            ATerm y_20 = t;
            if((PushChoice() == 0))
              {
                ATerm t_2 = NULL;
                t_2 = t;
                t = SSL_access(t_2, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = y_20;
              }
            {
              ATerm r_1 (ATerm t)
              {
                t = term_z_20;
                return(t);
              }
              t = debug_1_0(r_1, t);
            }
            ;
            LocalPopChoice(w_20);
          }
        else
          {
            t = v_20;
            {
              ATerm s_1 (ATerm t)
              {
                t = term_a_21;
                return(t);
              }
              t = debug_1_0(s_1, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
  m_9 = t;
  {
    ATerm t_1 (ATerm t)
    {
      ATerm v_1 (ATerm t)
      {
        t = term_b_21;
        return(t);
      }
      t = debug_1_0(v_1, t);
      return(t);
    }
    t = if_verbose5_1_0(t_1, t);
    {
      ATerm c_21 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, m_9));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = c_21;
        }
      n_9 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, m_9));
      t = n_9;
      {
        ATerm w_1 (ATerm t)
        {
          ATerm x_1 (ATerm t)
          {
            t = term_d_21;
            return(t);
          }
          t = debug_1_0(x_1, t);
          return(t);
        }
        t = if_verbose4_1_0(w_1, t);
        t = read_repository_file_0_0(t);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm z_1 (ATerm t)
            {
              t = term_e_21;
              return(t);
            }
            t = say_1_0(z_1, t);
            return(t);
          }
          t = if_verbose6_1_0(y_1, t);
          o_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_g_21, o_9);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm a_2 (ATerm t)
            {
              ATerm b_2 (ATerm t)
              {
                t = term_h_21;
                return(t);
              }
              t = say_1_0(b_2, t);
              return(t);
            }
            t = if_verbose6_1_0(a_2, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, m_9), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_g_21, (ATerm)ATmakeAppl(sym_Imported_1, m_9), (ATerm) ATempty);
            {
              ATerm c_2 (ATerm t)
              {
                ATerm m_2 (ATerm t)
                {
                  t = term_e_21;
                  return(t);
                }
                t = say_1_0(m_2, t);
                return(t);
              }
              t = if_verbose4_1_0(c_2, t);
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
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_21);
    }
  else
    {
      t = i_21;
      {
        ATerm l_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(m_21);
          }
        else
          {
            t = l_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm p_9 = NULL;
  ATerm o_2 (ATerm t)
  {
    ATerm p_2 (ATerm t)
    {
      t = term_n_21;
      return(t);
    }
    t = debug_1_0(p_2, t);
    return(t);
  }
  t = if_verbose5_1_0(o_2, t);
  p_9 = t;
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = p_9;
    {
      ATerm q_2 (ATerm t)
      {
        ATerm r_2 (ATerm t)
        {
          t = term_q_21;
          return(t);
        }
        t = debug_1_0(r_2, t);
        return(t);
      }
      t = if_verbose5_1_0(q_2, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 (ATerm t)
      {
        ATerm u_2 (ATerm t)
        {
          t = term_t_21;
          return(t);
        }
        t = debug_1_0(u_2, t);
        return(t);
      }
      t = if_verbose5_1_0(s_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
            {
              ATerm y_2 = NULL,b_3 = NULL;
              y_2 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, y_2));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm w_21 = ATgetFirst((ATermList) t);
                  if(match_cons(w_21, sym__2))
                    {
                      ATerm y_21 = ATgetArgument(w_21, 0);
                      b_3 = ATgetArgument(w_21, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm x_21 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = b_3;
            }
          }
        {
          ATerm v_2 (ATerm t)
          {
            ATerm w_2 (ATerm t)
            {
              t = term_t_21;
              return(t);
            }
            t = debug_1_0(w_2, t);
            return(t);
          }
          t = if_verbose5_1_0(v_2, t);
        }
      }
      ;
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
      {
        ATerm q_9 = NULL;
        q_9 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), q_9), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_22), q_9), term_z_21);
        {
          ATerm x_2 (ATerm t)
          {
            t = term_g_21;
            t = table_getlist_0_0(t);
            {
              ATerm z_2 (ATerm t)
              {
                t = term_b_22;
                return(t);
              }
              t = debug_1_0(z_2, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(x_2, t);
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
  ATerm s_9 = NULL,t_9 = NULL;
  s_9 = t;
  t = j_83(t);
  t = xtc_find_warning_0_0(t);
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_9, s_9);
  t = call_0_0(t);
  t = s_9;
  return(t);
}
ATerm assert_1_0 (ATerm u_79 (ATerm), ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL;
  if(match_cons(t, sym__2))
    {
      u_9 = ATgetArgument(t, 0);
      v_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_79(t);
  w_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_9, u_9, v_9);
  t = table_push_0_0(t);
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(w_9, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(d_22);
      }
    else
      {
        t = c_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_9 = ATgetFirst((ATermList) t);
        y_9 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(w_9, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(y_9), (ATerm) ATinsert(CheckATermList(x_9), u_9)));
    t = (ATerm) ATmakeAppl(sym__2, u_9, v_9);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm d_65 (ATerm), ATerm t)
{
  ATerm z_9 = NULL;
  z_9 = t;
  t = d_65(t);
  {
    ATerm a_3 (ATerm t)
    {
      t = term_e_22;
      return(t);
    }
    t = debug_1_0(a_3, t);
    t = z_9;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm n_10 (ATerm d_10, ATerm t)
  {
    t = d_10;
    {
      ATerm f_22 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm g_22 = ATgetArgument(t, 0);
              ATerm h_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_22;
        }
      {
        ATerm c_3 (ATerm t)
        {
          t = term_i_22;
          return(t);
        }
        t = obsolete_1_0(c_3, t);
        t = (ATerm) ATmakeAppl(sym__2, d_10, term_d_8);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm o_10 (ATerm f_10, ATerm g_10, ATerm h_10, ATerm t)
  {
    t = SSL_open_file(f_10, g_10);
    return(t);
  }
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL;
  k_10 = t;
  if(match_cons(t, sym__2))
    {
      l_10 = ATgetArgument(t, 0);
      m_10 = ATgetArgument(t, 1);
      {
        ATerm j_22 = t;
        int k_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_10(k_10, t);
            ;
            LocalPopChoice(k_22);
          }
        else
          {
            t = j_22;
            t = o_10(l_10, m_10, k_10, t);
          }
      }
    }
  else
    {
      t = n_10(k_10, t);
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
  ATerm q_10 = NULL;
  t = term_l_22;
  t = new_0_0(t);
  q_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_10, term_m_22);
  t = conc_strings_0_0(t);
  {
    ATerm d_3 (ATerm t)
    {
      ATerm t_3 = NULL;
      t_3 = t;
      t = SSL_access(t_3, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(d_3, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm s_10 = NULL;
  t = new_file_0_0(t);
  s_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_10, term_d_8);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, s_10, term_l_22);
  {
    ATerm e_3 (ATerm t)
    {
      t = term_n_22;
      return(t);
    }
    t = assert_1_0(e_3, t);
    t = s_10;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  e_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm w_3 = NULL,x_3 = NULL;
      t = e_11;
      t = xtc_new_file_0_0(t);
      w_3 = t;
      t = m_0(t);
      x_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_3, (ATerm) ATinsert(ATinsert(ATempty, w_3), term_o_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(w_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_3);
    }
  else
    {
      ATerm j_4 = NULL,o_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          f_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_11;
      t = xtc_new_file_0_0(t);
      j_4 = t;
      t = m_0(t);
      o_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_4), term_o_22), f_11), term_p_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(j_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, j_4);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm u_61 (ATerm), ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL;
  m_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      k_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_11);
  j_11 = t;
  t = k_11;
  t = u_61(t);
  l_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, l_11), j_11);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm t)
{
  ATerm q_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_22 = t;
      int t_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(t_22);
        }
      else
        {
          t = s_22;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(r_22);
      t = xtc_transform_file_2_0(l_83, m_83, t);
    }
  else
    {
      t = q_22;
      t = xtc_transform_term_2_0(l_83, m_83, t);
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL;
  c_12 = t;
  if(match_cons(t, sym_FILE_1))
    {
      d_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_5 = NULL;
        t = c_12;
        t = k_0(t);
        a_5 = t;
        {
          ATerm w_22 = t;
          int x_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(x_22);
            }
          else
            {
              t = w_22;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(d_12, a_5);
          t = (ATerm) ATmakeAppl(sym_FILE_1, d_12);
        }
        ;
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        {
          ATerm y_22 = t;
          int z_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_5 = NULL;
              t = c_12;
              t = k_0(t);
              e_5 = t;
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
                          ATerm d_23 = t;
                          int e_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(e_23);
                            }
                          else
                            {
                              t = d_23;
                              {
                                ATerm f_5 = NULL;
                                f_5 = t;
                                if((d_12 != t))
                                  {
                                    _fail(t);
                                  }
                                t = f_5;
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
                t = SSL_copy(d_12, e_5);
                t = (ATerm) ATmakeAppl(sym_FILE_1, d_12);
              }
              ;
              LocalPopChoice(z_22);
            }
          else
            {
              t = y_22;
              t = c_12;
              t = k_0(t);
              if((d_12 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_12);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
  if(match_cons(t, sym__2))
    {
      j_12 = ATgetArgument(t, 0);
      k_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_5 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm h_23 = ATgetArgument(t, 0);
            ATerm i_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_12, k_12);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_23 = ATgetFirst((ATermList) t);
            h_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_5;
        ;
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        t = (ATerm) ATempty;
      }
    l_12 = t;
    t = SSL_table_put(j_12, k_12, l_12);
    t = (ATerm) ATmakeAppl(sym__2, j_12, k_12);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_79 (ATerm), ATerm t)
{
  ATerm r_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL;
  r_12 = t;
  t = r_79(t);
  t_12 = t;
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(t_12, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_12 = ATgetFirst((ATermList) t);
        u_12 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(t_12, (ATerm)ATmakeAppl(sym_Scopes_0), u_12);
    t = v_12;
    {
      ATerm f_3 (ATerm t)
      {
        ATerm w_12 = NULL;
        w_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_12, w_12);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(f_3, t);
      t = r_12;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm t)
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_80(t);
      t = n_80(t);
      ;
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      t = n_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_79 (ATerm), ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL;
  z_12 = t;
  t = q_79(t);
  a_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_13, term_o_23);
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
        t = SSL_table_get(a_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        t = (ATerm) ATempty;
      }
    b_13 = t;
    t = SSL_table_put(a_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(b_13), (ATerm) ATempty));
    t = z_12;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm v_82 (ATerm), ATerm t)
{
  ATerm g_13 = NULL;
  ATerm g_3 (ATerm t)
  {
    t = term_n_22;
    return(t);
  }
  t = begin_scope_1_0(g_3, t);
  {
    ATerm l_3 (ATerm t)
    {
      ATerm h_13 = NULL;
      h_13 = t;
      {
        ATerm t_23 = t;
        int u_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(u_23);
          }
        else
          {
            t = t_23;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_13 = ATgetFirst((ATermList) t);
            {
              ATerm v_23 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = g_13;
        {
          ATerm m_3 (ATerm t)
          {
            ATerm n_3 (ATerm t)
            {
              ATerm i_13 = NULL;
              i_13 = t;
              t = SSL_remove(i_13);
              return(t);
            }
            t = try_1_0(n_3, t);
            return(t);
          }
          t = map_1_0(m_3, t);
          t = h_13;
          {
            ATerm o_3 (ATerm t)
            {
              t = term_n_22;
              return(t);
            }
            t = end_scope_1_0(o_3, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(v_82, l_3, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_13 = NULL;
        t = term_p_22;
        t = get_config_0_0(t);
        j_13 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_13);
        ;
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
        t = term_y_23;
      }
    t = w_82(t);
    {
      ATerm a_4 (ATerm t)
      {
        ATerm z_23 = t;
        int a_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_o_22;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(a_24);
          }
        else
          {
            t = z_23;
            t = term_b_24;
          }
        return(t);
      }
      t = copy_to_1_0(a_4, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(u_3, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm c_4 (ATerm t)
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
  ATerm e_4 (ATerm t)
  {
    ATerm m_13 = NULL,n_13 = NULL;
    m_13 = t;
    t = SSL_string_to_int(m_13);
    n_13 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), n_13);
    t = m_13;
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    t = term_c_24;
    return(t);
  }
  t = ArgOption_3_0(c_4, e_4, f_4, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_4 (ATerm t)
      {
        ATerm r_13 = NULL;
        r_13 = t;
        if(match_string(t, "-S"))
          {
            t = r_13;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = r_13;
          }
        return(t);
      }
      ATerm q_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_g_24;
        return(t);
      }
      ATerm r_4 (ATerm t)
      {
        t = term_h_24;
        return(t);
      }
      t = Option_3_0(p_4, q_4, r_4, t);
      ;
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
      {
        ATerm i_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_4 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm w_4 (ATerm t)
            {
              ATerm t_13 = NULL,u_13 = NULL;
              t_13 = t;
              t = SSL_string_to_int(t_13);
              u_13 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), u_13);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, t_13);
              return(t);
            }
            ATerm x_4 (ATerm t)
            {
              t = term_k_24;
              return(t);
            }
            t = ArgOption_3_0(v_4, w_4, x_4, t);
            ;
            LocalPopChoice(j_24);
          }
        else
          {
            t = i_24;
            {
              ATerm y_4 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm z_4 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_l_24;
                return(t);
              }
              ATerm b_5 (ATerm t)
              {
                t = term_m_24;
                return(t);
              }
              t = Option_3_0(y_4, z_4, b_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm n_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(o_24);
    }
  else
    {
      t = n_24;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm y_13 = NULL;
    y_13 = t;
    if(match_string(t, "-o"))
      {
        t = y_13;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = y_13;
      }
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    ATerm z_13 = NULL;
    z_13 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), z_13);
    t = (ATerm) ATmakeAppl(sym_Output_1, z_13);
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    t = term_p_24;
    return(t);
  }
  t = ArgOption_3_0(c_5, d_5, g_5, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(r_24);
    }
  else
    {
      t = q_24;
      {
        ATerm i_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm j_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_s_24;
          return(t);
        }
        ATerm k_5 (ATerm t)
        {
          t = term_t_24;
          return(t);
        }
        t = Option_3_0(i_5, j_5, k_5, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  c_14 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = c_14;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm k_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_14 = ATgetFirst((ATermList) t);
          e_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_14 = ATgetFirst((ATermList) t);
          g_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_14;
      t = h_0(t);
      t = f_14;
      t = i_0(t);
      k_14 = t;
      t = (ATerm) ATinsert(CheckATermList(g_14), k_14);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm l_5 (ATerm t)
  {
    ATerm m_14 = NULL;
    m_14 = t;
    if(match_string(t, "-i"))
      {
        t = m_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = m_14;
      }
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    ATerm n_14 = NULL;
    n_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), n_14);
    t = (ATerm) ATmakeAppl(sym_Input_1, n_14);
    return(t);
  }
  ATerm o_5 (ATerm t)
  {
    t = term_u_24;
    return(t);
  }
  t = ArgOption_3_0(l_5, n_5, o_5, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm v_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(w_24);
    }
  else
    {
      t = v_24;
      {
        ATerm x_24 = t;
        int y_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(y_24);
          }
        else
          {
            t = x_24;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL;
  o_14 = t;
  t = term_l_22;
  t = whoami_0_0(t);
  p_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), p_14), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = o_14;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_14 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_22;
  t = whoami_0_0(t);
  q_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), q_14));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_24;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm t)
{
  ATerm a_25 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_75(t);
      ;
      LocalPopChoice(b_25);
    }
  else
    {
      t = a_25;
      {
        ATerm t_14 = NULL,u_14 = NULL,x_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_14 = ATgetFirst((ATermList) t);
            u_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_14;
        t = foldr_2_0(t_75, u_75, t);
        x_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_14, x_14);
        t = u_75(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL;
  y_14 = t;
  t = SSL_explode_term(y_14);
  if(match_cons(t, sym__2))
    {
      ATerm c_25 = ATgetArgument(t, 0);
      z_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_14;
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
  ATerm a_15 = NULL;
  t = times_0_0(t);
  {
    ATerm p_5 (ATerm t)
    {
      t = term_f_24;
      return(t);
    }
    ATerm q_5 (ATerm t)
    {
      ATerm b_15 = NULL,c_15 = NULL;
      if(match_cons(t, sym__2))
        {
          b_15 = ATgetArgument(t, 0);
          c_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm d_25 = t;
        int e_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(b_15, c_15);
            ;
            LocalPopChoice(e_25);
          }
        else
          {
            t = d_25;
            t = SSL_addr(b_15, c_15);
          }
      }
      return(t);
    }
    t = crush_2_0(p_5, q_5, t);
    a_15 = t;
    t = SSL_TicksToSeconds(a_15);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,r_15 = NULL;
  o_15 = t;
  if(match_cons(t, sym__2))
    {
      p_15 = ATgetArgument(t, 0);
      r_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_15;
        if((p_15 != t))
          {
            _fail(t);
          }
        t = o_15;
        ;
        LocalPopChoice(g_25);
      }
    else
      {
        t = f_25;
        t = o_15;
        {
          ATerm h_25 = t;
          int i_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_15, r_15);
              ;
              LocalPopChoice(i_25);
            }
          else
            {
              t = h_25;
              t = SSL_gtr(p_15, r_15);
            }
          t = (ATerm) ATmakeAppl(sym__2, p_15, r_15);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_80 (ATerm), ATerm t)
{
  ATerm r_5 (ATerm t)
  {
    ATerm u_15 = NULL,v_15 = NULL;
    u_15 = t;
    t = term_l_18;
    t = get_config_0_0(t);
    v_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_15, term_r_8);
    t = geq_0_0(t);
    t = u_15;
    t = r_80(t);
    return(t);
  }
  t = try_1_0(r_5, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm x_15 = NULL,y_15 = NULL;
    t = run_time_0_0(t);
    x_15 = t;
    t = term_l_22;
    t = whoami_0_0(t);
    y_15 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), x_15), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), y_15));
    t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_25), x_15), term_h_8), y_15));
    return(t);
  }
  t = if_verbose1_1_0(s_5, t);
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
  ATerm k_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_25);
    }
  else
    {
      t = k_25;
      {
        ATerm t_5 (ATerm t)
        {
          ATerm n_25 = t;
          int o_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(o_25);
            }
          else
            {
              t = n_25;
              {
                ATerm p_25 = t;
                int q_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(q_25);
                  }
                else
                  {
                    t = p_25;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(t_5, t);
      }
    }
  t = x_84(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_16 = ATgetFirst((ATermList) t);
      c_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_16 = NULL,h_16 = NULL;
        t = c_16;
        t = g_0(t);
        g_16 = t;
        t = b_16;
        t = f_0(t);
        h_16 = t;
        t = c_16;
        {
          ATerm v_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(g_16), h_16);
            return(t);
          }
          t = reverse_acc_2_0(f_0, v_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_22;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, x_5, t);
  return(t);
}
ATerm Program_1_0 (ATerm b_62 (ATerm), ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL;
  l_16 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_16);
  i_16 = t;
  t = j_16;
  t = b_62(t);
  k_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, k_16), i_16);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
      {
        ATerm y_5 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(y_5, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_t_25;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm z_5 (ATerm t)
    {
      ATerm p_16 = NULL;
      p_16 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, p_16), term_u_25);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(z_5, t);
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
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
  t_16 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      r_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_16);
  q_16 = t;
  t = r_16;
  t = c_62(t);
  s_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, s_16), q_16);
  return(t);
}
ATerm fetch_1_0 (ATerm n_69 (ATerm), ATerm t)
{
  ATerm x_16 (ATerm t)
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(n_69, _id, t);
        ;
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
        t = Cons_2_0(_id, x_16, t);
      }
    return(t);
  }
  t = x_16(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm s_85 (ATerm), ATerm t)
{
  t = fetch_1_0(s_85, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL;
  b_17 = t;
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_17;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_25 = ATgetFirst((ATermList) t);
                ATerm a_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_17;
          }
        ;
        LocalPopChoice(y_25);
      }
    else
      {
        t = x_25;
        t = (ATerm) ATinsert(ATempty, b_17);
      }
    c_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), c_17);
    t = b_17;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_24;
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
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      {
        ATerm i_17 = NULL,j_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_17 = ATgetFirst((ATermList) t);
            j_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_17;
        {
          ATerm a_6 (ATerm t)
          {
            t = j_17;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(a_6, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL;
  n_17 = t;
  t = SSL_explode_term(n_17);
  if(match_cons(t, sym__2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_17;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm t_69 (ATerm), ATerm t)
{
  ATerm p_17 (ATerm t)
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, p_17, t);
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_69(t);
      }
    return(t);
  }
  t = p_17(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL;
  if(match_cons(t, sym__2))
    {
      r_17 = ATgetArgument(t, 0);
      q_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_17;
  {
    ATerm d_6 (ATerm t)
    {
      t = q_17;
      return(t);
    }
    t = at_end_1_0(d_6, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(h_26);
    }
  else
    {
      t = g_26;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm m_55 (ATerm), ATerm n_55 (ATerm), ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL;
  x_17 = t;
  if(match_cons(t, sym__2))
    {
      t_17 = ATgetArgument(t, 0);
      u_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_17);
  s_17 = t;
  t = t_17;
  t = m_55(t);
  v_17 = t;
  t = u_17;
  t = n_55(t);
  w_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, v_17, w_17), s_17);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm b_18 = NULL;
  ATerm f_6 (ATerm t)
  {
    ATerm c_18 = NULL;
    c_18 = t;
    t = SSL_explode_string(c_18);
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    ATerm d_18 = NULL;
    d_18 = t;
    t = SSL_explode_string(d_18);
    return(t);
  }
  t = _2_0(f_6, g_6, t);
  t = conc_0_0(t);
  b_18 = t;
  t = SSL_implode_string(b_18);
  return(t);
}
ATerm debug_1_0 (ATerm w_64 (ATerm), ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL;
  e_18 = t;
  t = w_64(t);
  f_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_18), f_18));
  t = e_18;
  return(t);
}
ATerm map_1_0 (ATerm d_69 (ATerm), ATerm t)
{
  ATerm g_18 (ATerm t)
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(j_26);
      }
    else
      {
        t = i_26;
        t = Cons_2_0(d_69, g_18, t);
      }
    return(t);
  }
  t = g_18(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_18 = NULL;
      m_18 = t;
      t = SSL_is_string(m_18);
      ;
      LocalPopChoice(l_26);
    }
  else
    {
      t = k_26;
      {
        ATerm m_26 = t;
        int n_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_6 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(j_6, t);
            ;
            LocalPopChoice(n_26);
          }
        else
          {
            t = m_26;
            {
              ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
              q_18 = t;
              if(match_cons(t, sym_Path_1))
                {
                  r_18 = ATgetArgument(t, 0);
                  t = r_18;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      r_18 = ATgetArgument(t, 0);
                      t = r_18;
                      {
                        ATerm o_26 = t;
                        int p_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_26);
                          }
                        else
                          {
                            t = o_26;
                            {
                              ATerm k_6 (ATerm t)
                              {
                                t = term_q_26;
                                return(t);
                              }
                              t = debug_1_0(k_6, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm w_18 = NULL,x_18 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          r_18 = ATgetArgument(t, 0);
                          s_18 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = r_18;
                      t = eval_config_0_0(t);
                      w_18 = t;
                      t = s_18;
                      t = eval_config_0_0(t);
                      x_18 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_18, x_18);
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
  ATerm a_19 = NULL;
  a_19 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), a_19);
  {
    ATerm l_6 (ATerm t)
    {
      ATerm b_19 = NULL;
      t = eval_config_0_0(t);
      b_19 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), a_19, b_19);
      t = b_19;
      return(t);
    }
    t = try_1_0(l_6, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm x_79 (ATerm), ATerm t)
{
  ATerm r_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_79(t);
      ;
      LocalPopChoice(s_26);
    }
  else
    {
      t = r_26;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_6 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm n_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_x_26;
        return(t);
      }
      ATerm o_6 (ATerm t)
      {
        t = term_y_26;
        return(t);
      }
      t = Option_3_0(m_6, n_6, o_6, t);
      ;
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
      {
        ATerm p_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm q_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_z_26;
          return(t);
        }
        ATerm r_6 (ATerm t)
        {
          t = term_a_27;
          return(t);
        }
        t = Option_3_0(p_6, q_6, r_6, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL;
  if(match_cons(t, sym__3))
    {
      e_19 = ATgetArgument(t, 0);
      f_19 = ATgetArgument(t, 1);
      g_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_19, f_19);
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_27 = ATgetArgument(t, 0);
            ATerm e_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_19, f_19);
        ;
        LocalPopChoice(c_27);
      }
    else
      {
        t = b_27;
        t = (ATerm) ATempty;
      }
    h_19 = t;
    t = SSL_table_put(e_19, f_19, (ATerm) ATinsert(CheckATermList(h_19), g_19));
    t = (ATerm) ATmakeAppl(sym__3, e_19, f_19, g_19);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm m_19 = NULL;
  t = term_l_22;
  t = x_86(t);
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_27, term_g_27, m_19);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
  o_19 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = o_19;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm t_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_19 = ATgetFirst((ATermList) t);
          q_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_19;
      t = a_0(t);
      t = term_l_22;
      t = b_0(t);
      t_19 = t;
      t = (ATerm) ATinsert(CheckATermList(q_19), t_19);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    ATerm w_19 = NULL;
    w_19 = t;
    if(match_string(t, "--help"))
      {
        t = w_19;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = w_19;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = w_19;
          }
      }
    return(t);
  }
  ATerm v_6 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_h_27;
    return(t);
  }
  ATerm w_6 (ATerm t)
  {
    t = term_i_27;
    return(t);
  }
  t = Option_3_0(s_6, v_6, w_6, t);
  return(t);
}
ATerm Cons_2_0 (ATerm v_56 (ATerm), ATerm w_56 (ATerm), ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL;
  c_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_19 = ATgetFirst((ATermList) t);
      z_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_20);
  x_19 = t;
  t = y_19;
  t = v_56(t);
  a_20 = t;
  t = z_19;
  t = w_56(t);
  b_20 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(b_20), a_20), x_19);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm j_20 = NULL;
  j_20 = t;
  {
    ATerm z_6 (ATerm t)
    {
      t = term_j_27;
      t = v_86(t);
      return(t);
    }
    t = try_1_0(z_6, t);
    t = j_20;
    {
      ATerm d_7 (ATerm t)
      {
        ATerm k_20 = NULL;
        k_20 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), k_20);
        t = (ATerm) ATmakeAppl(sym_Program_1, k_20);
        return(t);
      }
      ATerm e_7 (ATerm t)
      {
        ATerm k_27 = t;
        int l_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_27 = t;
            int n_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(n_27);
              }
            else
              {
                t = m_27;
                t = v_86(t);
                t = Cons_2_0(_id, e_7, t);
              }
            ;
            LocalPopChoice(l_27);
          }
        else
          {
            t = k_27;
            {
              ATerm m_20 = NULL,n_20 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_20 = ATgetFirst((ATermList) t);
                  n_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(n_20), (ATerm) ATmakeAppl(sym_Undefined_1, m_20));
            }
          }
        return(t);
      }
      t = Cons_2_0(d_7, e_7, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm u_86 (ATerm), ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,x_20 = NULL;
  t_20 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = t_20;
  {
    ATerm o_7 (ATerm t)
    {
      ATerm o_27 = t;
      int p_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_86(t);
          ;
          LocalPopChoice(p_27);
        }
      else
        {
          t = o_27;
          {
            ATerm q_27 = t;
            int r_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(r_27);
              }
            else
              {
                t = q_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_7, t);
    {
      ATerm p_7 (ATerm t)
      {
        ATerm s_27 = t;
        int t_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_21 = NULL;
            f_21 = t;
            {
              ATerm u_27 = t;
              int v_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_21;
                  {
                    ATerm w_27 = t;
                    int x_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_m_25;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(x_27);
                      }
                    else
                      {
                        t = w_27;
                        {
                          ATerm q_7 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(q_7, t);
                        }
                      }
                    t = f_21;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(v_27);
                }
              else
                {
                  t = u_27;
                  t = term_w_26;
                  t = get_config_0_0(t);
                  t = f_21;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(t_27);
          }
        else
          {
            t = s_27;
            {
              ATerm r_7 (ATerm t)
              {
                ATerm s_7 (ATerm t)
                {
                  u_20 = t;
                  return(t);
                }
                t = Undefined_1_0(s_7, t);
                return(t);
              }
              t = option_defined_1_0(r_7, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(u_20)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_20)), term_y_27));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(p_7, t);
      x_20 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = x_20;
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
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_85, t);
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        {
          ATerm b_28 = t;
          int c_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(c_28);
            }
          else
            {
              t = b_28;
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
ATerm xtc_io_wrap_2_0 (ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm t)
{
  ATerm t_7 (ATerm t)
  {
    ATerm d_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_83(t);
        ;
        LocalPopChoice(e_28);
      }
    else
      {
        t = d_28;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm u_7 (ATerm t)
  {
    t = xtc_io_1_0(b_83, t);
    return(t);
  }
  t = option_wrap_2_0(t_7, u_7, t);
  return(t);
}
ATerm xtc_io_wrap_1_0 (ATerm z_82 (ATerm), ATerm t)
{
  t = xtc_io_wrap_2_0(_fail, z_82, t);
  return(t);
}
ATerm main_visamb_0_0 (ATerm t)
{
  ATerm v_7 (ATerm t)
  {
    ATerm w_7 (ATerm t)
    {
      t = term_f_28;
      return(t);
    }
    t = xtc_transform_1_0(w_7, t);
    {
      ATerm x_7 (ATerm t)
      {
        t = term_g_28;
        return(t);
      }
      t = xtc_transform_2_0(x_7, build_pp_tables_0_0, t);
      {
        ATerm y_7 (ATerm t)
        {
          t = term_h_28;
          return(t);
        }
        t = xtc_transform_1_0(y_7, t);
      }
    }
    return(t);
  }
  t = xtc_io_wrap_1_0(v_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = main_visamb_0_0(t);
  return(t);
}
