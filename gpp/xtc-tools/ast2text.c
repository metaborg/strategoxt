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
ATerm term_y_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_r_27;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_n_26;
ATerm term_k_26;
ATerm term_a_26;
ATerm term_x_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_s_24;
ATerm term_i_24;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_d_23;
ATerm term_z_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_o_22;
ATerm term_l_22;
ATerm term_i_22;
ATerm term_f_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_w_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_t_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_g_15;
ATerm term_d_15;
ATerm term_a_15;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_n_12;
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
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_d_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_l_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_e_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_y_8;
ATerm term_w_8;
ATerm term_t_8;
ATerm term_r_8;
ATerm term_n_8;
ATerm term_k_8;
ATerm term_j_8;
void init_constant_terms (void)
{
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_9, term_n_8, term_i_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_9, term_x_9, term_d_10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_10, term_o_10, term_q_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_10, term_b_11, term_d_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_11, term_h_11, term_i_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_l_11, term_m_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_11, term_p_11, term_s_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_z_11, term_a_12);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_d_12, term_e_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_h_12, term_i_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_l_12, term_m_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_r_12, term_s_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_12, term_y_12, term_z_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_c_13, term_j_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_p_13, term_q_13);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_d_14, term_j_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_n_14, term_o_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_u_14, term_v_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_d_15, term_g_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_q_15, term_r_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_e_16, term_f_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_m_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_r_16, term_u_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_z_16, term_a_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_17, term_j_17, term_p_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_17, term_t_17, term_w_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_17, term_z_17, term_a_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_25);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym__3, term_a_25, term_w_27, term_t_8);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm pass_width_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_abox2text_1_0 (ATerm t_83 (ATerm), ATerm);
ATerm read_from_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm r_65 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm w_69 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm e_64 (ATerm), ATerm f_64 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm g_64 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm d_93 (ATerm), ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm d_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm x_78 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm say_1_0 (ATerm h_65 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm c_93 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm e_93 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm);
ATerm union_1_0 (ATerm n_73 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm y_80 (ATerm), ATerm);
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
ATerm xtc_command_1_0 (ATerm c_83 (ATerm), ATerm);
ATerm assert_1_0 (ATerm b_80 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm k_65 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm b_62 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm y_79 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm t_80 (ATerm), ATerm u_80 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm x_79 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm o_82 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm p_82 (ATerm), ATerm);
ATerm ast2text_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm pp_options_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm abox2text_options_0_0 (ATerm);
ATerm ast2text_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm a_76 (ATerm), ATerm b_76 (ATerm), ATerm);
ATerm crush_2_0 (ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_92 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm w_84 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm i_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm j_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm u_69 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm r_85 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm a_70 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm d_65 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_69 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm try_1_0 (ATerm e_80 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm w_86 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm u_86 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm t_86 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm);
ATerm io_ast2text_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_width_0_0 (ATerm t)
{
  ATerm g_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_8;
      t = get_config_0_0(t);
      LocalPopChoice(i_8);
      {
        ATerm c_1 = NULL;
        c_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, c_1), term_j_8);
      }
    }
  else
    {
      t = g_8;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm e_1 = NULL,g_1 = NULL,j_1 = NULL;
  t = term_k_8;
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
        t = term_n_8;
      }
    e_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_1, term_n_8);
    {
      ATerm o_8 = t;
      int q_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(e_1, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(q_8);
        }
      else
        {
          t = o_8;
          t = SSL_subtr(e_1, (ATerm) ATmakeInt(1));
        }
      j_1 = t;
      t = SSL_int_to_string(j_1);
      g_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, g_1), term_k_8);
    }
  }
  return(t);
}
ATerm xtc_abox2text_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = term_r_8;
    return(t);
  }
  ATerm e_0 (ATerm t)
  {
    ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL;
    t = term_t_8;
    t = t_83(t);
    p_1 = t;
    t = SSL_int_to_string(p_1);
    o_1 = t;
    t = term_t_8;
    t = pass_verbose_0_0(t);
    q_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, o_1), term_j_8), q_1);
    t = conc_0_0(t);
    return(t);
  }
  t = xtc_transform_2_0(c_0, e_0, t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm s_1 = NULL,x_1 = NULL;
  s_1 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = s_1;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          x_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(x_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm r_65 (ATerm), ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,l_2 = NULL;
  if(match_cons(t, sym__2))
    {
      h_2 = ATgetArgument(t, 0);
      i_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_2, term_w_8);
  t = open_stream_0_0(t);
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_2, i_2);
  t = r_65(t);
  t = fclose_0_0(t);
  t = i_2;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm x_8 = ATgetArgument(t, 0);
        if(match_cons(x_8, sym_Stream_1))
          {
            m_2 = ATgetArgument(x_8, 0);
          }
        else
          _fail(t);
        n_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(m_2, n_2);
    o_2 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, o_2);
    return(t);
  }
  t = WriteToFile_1_0(n_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL;
  p_2 = t;
  t = xtc_new_file_0_0(t);
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_2, p_2);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(q_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_2);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(l_83, m_83, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm r_2 = NULL;
  ATerm o_0 (ATerm t)
  {
    ATerm s_2 = NULL;
    s_2 = t;
    t = SSL_explode_string(s_2);
    return(t);
  }
  t = map_1_0(o_0, t);
  t = concat_0_0(t);
  r_2 = t;
  t = SSL_implode_string(r_2);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL,t_3 = NULL,u_3 = NULL;
  q_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      r_3 = ATgetArgument(t, 0);
      {
        ATerm r_0 = NULL;
        t = SSL_int_to_string(r_3);
        r_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), r_0), term_y_8);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm z_0 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          r_3 = ATgetArgument(t, 0);
          t_3 = ATgetArgument(t, 1);
          u_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(t_3);
      z_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_3), term_e_9), z_0), term_c_9), r_3);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm w_69 (ATerm), ATerm t)
{
  ATerm z_3 = NULL;
  ATerm p_0 (ATerm t)
  {
    t = w_69(t);
    z_3 = t;
    return(t);
  }
  t = fetch_1_0(p_0, t);
  t = not_null(z_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm a_4 = NULL;
  a_4 = t;
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_18), term_x_17), term_q_17), term_h_17), term_v_16), term_n_16), term_g_16), term_c_16), term_y_15), term_m_15), term_w_14), term_p_14), term_k_14), term_r_13), term_k_13), term_a_13), term_t_12), term_n_12), term_j_12), term_f_12), term_b_12), term_t_11), term_n_11), term_j_11), term_f_11), term_u_10), term_m_10), term_l_9);
        {
          ATerm q_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm c_18 = ATgetArgument(t, 0);
                if((a_4 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm f_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(q_0, t);
        }
        ;
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, a_4);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm b_4 = NULL;
  b_4 = t;
  {
    ATerm s_0 (ATerm t)
    {
      ATerm e_4 = NULL,g_4 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm g_18 = ATgetArgument(t, 0);
          e_4 = ATgetArgument(t, 1);
          {
            ATerm h_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = e_4;
      {
        ATerm t_18 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = t_18;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        g_4 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_4), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_u_18, (ATerm) ATinsert(ATinsert(ATempty, g_4), term_v_18));
      }
      return(t);
    }
    t = try_1_0(s_0, t);
    t = b_4;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm e_64 (ATerm), ATerm f_64 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL;
  i_4 = t;
  t = fork_0_0(t);
  j_4 = t;
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = i_4;
        t = e_64(t);
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        t = (ATerm) ATmakeAppl(sym__2, j_4, i_4);
        t = f_64(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm g_64 (ATerm), ATerm t)
{
  ATerm m_4 = NULL;
  ATerm t_0 (ATerm t)
  {
    ATerm p_4 = NULL;
    if(match_cons(t, sym__2))
      {
        p_4 = ATgetArgument(t, 0);
        m_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(p_4);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm e_19 = ATgetArgument(t, 0);
        if(((ATgetType(e_19) != AT_INT) || (ATgetInt((ATermInt) e_19) != 0)))
          _fail(t);
        {
          ATerm f_19 = ATgetArgument(t, 1);
        }
        {
          ATerm g_19 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = m_4;
    return(t);
  }
  t = fork_2_0(g_64, t_0, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL;
  if(match_cons(t, sym__2))
    {
      q_4 = ATgetArgument(t, 0);
      r_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_0 (ATerm t)
    {
      t = SSL_execvp(q_4, r_4);
      return(t);
    }
    t = fork_and_wait_1_0(u_0, t);
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm t_4 = NULL;
  t_4 = t;
  t = SSL_table_keys(t_4);
  {
    ATerm v_0 (ATerm t)
    {
      ATerm u_4 = NULL,v_4 = NULL;
      u_4 = t;
      t = SSL_table_get(t_4, u_4);
      v_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_4, v_4);
      return(t);
    }
    t = map_1_0(v_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm d_93 (ATerm), ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm w_4 = NULL,y_4 = NULL;
    w_4 = t;
    t = term_k_8;
    t = get_config_0_0(t);
    y_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_4, term_z_16);
    t = geq_0_0(t);
    t = w_4;
    t = d_93(t);
    return(t);
  }
  t = try_1_0(w_0, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL;
  if(match_cons(t, sym__2))
    {
      c_5 = ATgetArgument(t, 0);
      d_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, c_5));
  {
    ATerm x_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((d_5 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          e_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(x_0, t);
    t = not_null(e_5);
  }
  return(t);
}
ATerm filter_1_0 (ATerm d_77 (ATerm), ATerm t)
{
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      {
        ATerm k_19 = t;
        int o_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              t = filter_1_0(d_77, t);
              return(t);
            }
            t = Cons_2_0(d_77, y_0, t);
            ;
            LocalPopChoice(o_19);
          }
        else
          {
            t = k_19;
            {
              ATerm r_5 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm p_19 = ATgetFirst((ATermList) t);
                  r_5 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = r_5;
              t = filter_1_0(d_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm x_78 (ATerm), ATerm t)
{
  ATerm f_6 (ATerm t)
  {
    ATerm a_1 (ATerm t)
    {
      t = x_78(t);
      t = f_6(t);
      return(t);
    }
    t = try_1_0(a_1, t);
    return(t);
  }
  t = f_6(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm l_6 = NULL;
  l_6 = t;
  {
    ATerm d_1 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm q_19 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_19;
          }
      }
      return(t);
    }
    t = repeat_1_0(d_1, t);
    t = l_6;
  }
  return(t);
}
ATerm say_1_0 (ATerm h_65 (ATerm), ATerm t)
{
  ATerm r_6 = NULL,b_1 = NULL;
  r_6 = t;
  t = h_65(t);
  b_1 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, b_1));
  t = r_6;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm c_93 (ATerm), ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm s_6 = NULL,t_6 = NULL;
    s_6 = t;
    t = term_k_8;
    t = get_config_0_0(t);
    t_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_6, term_r_12);
    t = geq_0_0(t);
    t = s_6;
    t = c_93(t);
    return(t);
  }
  t = try_1_0(f_1, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm e_93 (ATerm), ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm v_6 = NULL,y_6 = NULL;
    v_6 = t;
    t = term_k_8;
    t = get_config_0_0(t);
    y_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_6, term_b_11);
    t = geq_0_0(t);
    t = v_6;
    t = e_93(t);
    return(t);
  }
  t = try_1_0(h_1, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_7 = ATgetFirst((ATermList) t);
      j_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_73(t);
  {
    ATerm i_1 (ATerm t)
    {
      ATerm k_7 = NULL;
      k_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_7, k_7);
      t = r_73(t);
      return(t);
    }
    t = fetch_1_0(i_1, t);
    t = j_7;
  }
  return(t);
}
ATerm union_1_0 (ATerm n_73 (ATerm), ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL;
  if(match_cons(t, sym__2))
    {
      m_7 = ATgetArgument(t, 0);
      l_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7;
  {
    ATerm n_7 (ATerm t)
    {
      ATerm t_19 = t;
      int u_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = l_7;
          ;
          LocalPopChoice(u_19);
        }
      else
        {
          t = t_19;
          {
            ATerm x_19 = t;
            int y_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_1 (ATerm t)
                {
                  t = l_7;
                  return(t);
                }
                t = HdMember_p__2_0(n_73, k_1, t);
                t = n_7(t);
                ;
                LocalPopChoice(y_19);
              }
            else
              {
                t = x_19;
                t = Cons_2_0(_id, n_7, t);
              }
          }
        }
      return(t);
    }
    t = n_7(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm o_7 = NULL;
    if(match_cons(t, sym__2))
      {
        o_7 = ATgetArgument(t, 0);
        if((o_7 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(l_1, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL;
  if(match_cons(t, sym__3))
    {
      r_7 = ATgetArgument(t, 0);
      s_7 = ATgetArgument(t, 1);
      t_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_7, s_7);
  {
    ATerm z_19 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_20 = ATgetArgument(t, 0);
            ATerm g_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(r_7, s_7);
        ;
        LocalPopChoice(e_20);
      }
    else
      {
        t = z_19;
        t = (ATerm) ATempty;
      }
    u_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_7, t_7);
    t = union_0_0(t);
    v_7 = t;
    t = SSL_table_put(r_7, s_7, v_7);
    t = (ATerm) ATmakeAppl(sym__3, r_7, s_7, t_7);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm y_80 (ATerm), ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL;
  if(match_cons(t, sym__2))
    {
      x_7 = ATgetArgument(t, 0);
      w_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_7;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm y_7 = NULL,z_7 = NULL;
      if(match_cons(t, sym__2))
        {
          y_7 = ATgetArgument(t, 0);
          z_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, x_7, y_7, z_7);
      t = y_80(t);
      return(t);
    }
    t = map_1_0(m_1, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_8 (ATerm h_8, ATerm t)
  {
    t = SSL_fclose(h_8);
    return(t);
  }
  ATerm p_8 = NULL,s_8 = NULL;
  s_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_8 = ATgetArgument(t, 0);
      {
        ATerm h_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_8);
            ;
            LocalPopChoice(j_20);
          }
        else
          {
            t = h_20;
            t = u_8(s_8, t);
          }
      }
    }
  else
    {
      t = u_8(s_8, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_8 = NULL;
  t = SSL_stdin_stream();
  v_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_8 = NULL;
  t = SSL_stdout_stream();
  z_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_9 = NULL;
  t = SSL_stderr_stream();
  a_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_9);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm d_9 = NULL;
  d_9 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_9;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_9;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_9;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_20 = ATgetArgument(t, 0);
      ATerm o_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_2 = NULL,f_2 = NULL;
        e_2 = t;
        t = SSL_explode_term(e_2);
        if(match_cons(t, sym__2))
          {
            ATerm z_20 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_20) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm a_21 = ATgetArgument(t, 1);
              if(((ATgetType(a_21) == AT_LIST) && !(ATisEmpty(a_21))))
                {
                  f_2 = ATgetFirst((ATermList) a_21);
                  {
                    ATerm b_21 = (ATerm) ATgetNext((ATermList) a_21);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = f_2;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(y_20);
      }
    else
      {
        t = q_20;
        {
          ATerm c_21 = t;
          int d_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_9 = NULL,k_9 = NULL,m_9 = NULL;
              ATerm n_1 (ATerm t)
              {
                ATerm n_9 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    n_9 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = n_9;
                return(t);
              }
              t = _2_0(n_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  j_9 = ATgetArgument(t, 0);
                  k_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(j_9, k_9);
              m_9 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, m_9);
              ;
              LocalPopChoice(d_21);
            }
          else
            {
              t = c_21;
              {
                ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL;
                ATerm r_1 (ATerm t)
                {
                  ATerm r_9 = NULL;
                  r_9 = t;
                  t = SSL_is_string(r_9);
                  return(t);
                }
                t = _2_0(r_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    o_9 = ATgetArgument(t, 0);
                    p_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(o_9, p_9);
                q_9 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, q_9);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_9 = NULL;
      v_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_9, term_g_21);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_21);
    }
  else
    {
      t = e_21;
      {
        ATerm t_1 (ATerm t)
        {
          t = term_h_21;
          return(t);
        }
        t = debug_1_0(t_1, t);
        _fail(t);
      }
    }
  s_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(u_9);
  t_9 = t;
  t = s_9;
  t = fclose_0_0(t);
  t = t_9;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm i_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_2 = NULL;
      k_2 = t;
      t = SSL_access(k_2, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(l_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = i_21;
      {
        ATerm o_21 = t;
        int p_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_21 = t;
            if((PushChoice() == 0))
              {
                ATerm u_2 = NULL;
                u_2 = t;
                t = SSL_access(u_2, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_21;
              }
            {
              ATerm u_1 (ATerm t)
              {
                t = term_r_21;
                return(t);
              }
              t = debug_1_0(u_1, t);
            }
            ;
            LocalPopChoice(p_21);
          }
        else
          {
            t = o_21;
            {
              ATerm v_1 (ATerm t)
              {
                t = term_s_21;
                return(t);
              }
              t = debug_1_0(v_1, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL;
  y_9 = t;
  {
    ATerm w_1 (ATerm t)
    {
      ATerm y_1 (ATerm t)
      {
        t = term_w_21;
        return(t);
      }
      t = debug_1_0(y_1, t);
      return(t);
    }
    t = if_verbose5_1_0(w_1, t);
    {
      ATerm x_21 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, y_9));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = x_21;
        }
      z_9 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, y_9));
      t = z_9;
      {
        ATerm z_1 (ATerm t)
        {
          ATerm a_2 (ATerm t)
          {
            t = term_y_21;
            return(t);
          }
          t = debug_1_0(a_2, t);
          return(t);
        }
        t = if_verbose4_1_0(z_1, t);
        t = read_repository_file_0_0(t);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm c_2 (ATerm t)
            {
              t = term_z_21;
              return(t);
            }
            t = say_1_0(c_2, t);
            return(t);
          }
          t = if_verbose6_1_0(b_2, t);
          a_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_22, a_10);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm d_2 (ATerm t)
            {
              ATerm g_2 (ATerm t)
              {
                t = term_c_22;
                return(t);
              }
              t = say_1_0(g_2, t);
              return(t);
            }
            t = if_verbose6_1_0(d_2, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, y_9), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_b_22, (ATerm)ATmakeAppl(sym_Imported_1, y_9), (ATerm) ATempty);
            {
              ATerm j_2 (ATerm t)
              {
                ATerm t_2 (ATerm t)
                {
                  t = term_z_21;
                  return(t);
                }
                t = say_1_0(t_2, t);
                return(t);
              }
              t = if_verbose4_1_0(j_2, t);
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
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_22);
    }
  else
    {
      t = d_22;
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm b_10 = NULL;
  ATerm v_2 (ATerm t)
  {
    ATerm w_2 (ATerm t)
    {
      t = term_i_22;
      return(t);
    }
    t = debug_1_0(w_2, t);
    return(t);
  }
  t = if_verbose5_1_0(v_2, t);
  b_10 = t;
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = b_10;
    {
      ATerm y_2 (ATerm t)
      {
        ATerm a_3 (ATerm t)
        {
          t = term_l_22;
          return(t);
        }
        t = debug_1_0(a_3, t);
        return(t);
      }
      t = if_verbose5_1_0(y_2, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm m_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_3 (ATerm t)
      {
        ATerm c_3 (ATerm t)
        {
          t = term_o_22;
          return(t);
        }
        t = debug_1_0(c_3, t);
        return(t);
      }
      t = if_verbose5_1_0(b_3, t);
      t = xtc_load_0_0(t);
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(q_22);
          }
        else
          {
            t = p_22;
            {
              ATerm x_2 = NULL,z_2 = NULL;
              x_2 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, x_2));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm r_22 = ATgetFirst((ATermList) t);
                  if(match_cons(r_22, sym__2))
                    {
                      ATerm t_22 = ATgetArgument(r_22, 0);
                      z_2 = ATgetArgument(r_22, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm s_22 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = z_2;
            }
          }
        {
          ATerm d_3 (ATerm t)
          {
            ATerm e_3 (ATerm t)
            {
              t = term_o_22;
              return(t);
            }
            t = debug_1_0(e_3, t);
            return(t);
          }
          t = if_verbose5_1_0(d_3, t);
        }
      }
      ;
      LocalPopChoice(n_22);
    }
  else
    {
      t = m_22;
      {
        ATerm c_10 = NULL;
        c_10 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), c_10), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_22), c_10), term_u_22);
        {
          ATerm f_3 (ATerm t)
          {
            t = term_b_22;
            t = table_getlist_0_0(t);
            {
              ATerm g_3 (ATerm t)
              {
                t = term_w_22;
                return(t);
              }
              t = debug_1_0(g_3, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(f_3, t);
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
ATerm xtc_command_1_0 (ATerm c_83 (ATerm), ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL;
  e_10 = t;
  t = c_83(t);
  t = xtc_find_warning_0_0(t);
  f_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_10, e_10);
  t = call_0_0(t);
  t = e_10;
  return(t);
}
ATerm assert_1_0 (ATerm b_80 (ATerm), ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
  if(match_cons(t, sym__2))
    {
      g_10 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_80(t);
  i_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_10, g_10, h_10);
  t = table_push_0_0(t);
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(i_10, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_10 = ATgetFirst((ATermList) t);
        k_10 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(i_10, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(k_10), (ATerm) ATinsert(CheckATermList(j_10), g_10)));
    t = (ATerm) ATmakeAppl(sym__2, g_10, h_10);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm k_65 (ATerm), ATerm t)
{
  ATerm l_10 = NULL;
  l_10 = t;
  t = k_65(t);
  {
    ATerm h_3 (ATerm t)
    {
      t = term_z_22;
      return(t);
    }
    t = debug_1_0(h_3, t);
    t = l_10;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm z_10 (ATerm p_10, ATerm t)
  {
    t = p_10;
    {
      ATerm a_23 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm b_23 = ATgetArgument(t, 0);
              ATerm c_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = a_23;
        }
      {
        ATerm i_3 (ATerm t)
        {
          t = term_d_23;
          return(t);
        }
        t = obsolete_1_0(i_3, t);
        t = (ATerm) ATmakeAppl(sym__2, p_10, term_w_8);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm a_11 (ATerm r_10, ATerm s_10, ATerm t_10, ATerm t)
  {
    t = SSL_open_file(r_10, s_10);
    return(t);
  }
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
  w_10 = t;
  if(match_cons(t, sym__2))
    {
      x_10 = ATgetArgument(t, 0);
      y_10 = ATgetArgument(t, 1);
      {
        ATerm e_23 = t;
        int f_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_10(w_10, t);
            ;
            LocalPopChoice(f_23);
          }
        else
          {
            t = e_23;
            t = a_11(x_10, y_10, w_10, t);
          }
      }
    }
  else
    {
      t = z_10(w_10, t);
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
  ATerm c_11 = NULL;
  t = term_t_8;
  t = new_0_0(t);
  c_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_11, term_g_23);
  t = conc_strings_0_0(t);
  {
    ATerm j_3 (ATerm t)
    {
      ATerm l_3 = NULL;
      l_3 = t;
      t = SSL_access(l_3, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(j_3, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm e_11 = NULL;
  t = new_file_0_0(t);
  e_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_11, term_w_8);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, e_11, term_t_8);
  {
    ATerm k_3 (ATerm t)
    {
      t = term_h_23;
      return(t);
    }
    t = assert_1_0(k_3, t);
    t = e_11;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL;
  q_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm s_3 = NULL,v_3 = NULL;
      t = q_11;
      t = xtc_new_file_0_0(t);
      s_3 = t;
      t = m_0(t);
      v_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_3, (ATerm) ATinsert(ATinsert(ATempty, s_3), term_i_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(s_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, s_3);
    }
  else
    {
      ATerm f_4 = NULL,h_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          r_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_11;
      t = xtc_new_file_0_0(t);
      f_4 = t;
      t = m_0(t);
      h_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_4), term_i_23), r_11), term_j_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(f_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_4);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm b_62 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,y_11 = NULL;
  y_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      v_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_11);
  u_11 = t;
  t = v_11;
  t = b_62(t);
  w_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, w_11), u_11);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm t)
{
  ATerm k_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_23 = t;
      int n_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(n_23);
        }
      else
        {
          t = m_23;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(l_23);
      t = xtc_transform_file_2_0(e_83, f_83, t);
    }
  else
    {
      t = k_23;
      t = xtc_transform_term_2_0(e_83, f_83, t);
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL;
  o_12 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_4 = NULL;
        t = o_12;
        t = k_0(t);
        s_4 = t;
        {
          ATerm q_23 = t;
          int r_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(r_23);
            }
          else
            {
              t = q_23;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(p_12, s_4);
          t = (ATerm) ATmakeAppl(sym_FILE_1, p_12);
        }
        ;
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        {
          ATerm s_23 = t;
          int t_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_5 = NULL;
              t = o_12;
              t = k_0(t);
              h_5 = t;
              {
                ATerm u_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm v_23 = t;
                    int w_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(w_23);
                      }
                    else
                      {
                        t = v_23;
                        {
                          ATerm x_23 = t;
                          int y_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(y_23);
                            }
                          else
                            {
                              t = x_23;
                              {
                                ATerm j_5 = NULL;
                                j_5 = t;
                                if((p_12 != t))
                                  {
                                    _fail(t);
                                  }
                                t = j_5;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = u_23;
                  }
                t = SSL_copy(p_12, h_5);
                t = (ATerm) ATmakeAppl(sym_FILE_1, p_12);
              }
              ;
              LocalPopChoice(t_23);
            }
          else
            {
              t = s_23;
              t = o_12;
              t = k_0(t);
              if((p_12 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_12);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
  if(match_cons(t, sym__2))
    {
      v_12 = ATgetArgument(t, 0);
      w_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_5 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_24 = ATgetArgument(t, 0);
            ATerm c_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(v_12, w_12);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_24 = ATgetFirst((ATermList) t);
            l_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_5;
        ;
        LocalPopChoice(a_24);
      }
    else
      {
        t = z_23;
        t = (ATerm) ATempty;
      }
    x_12 = t;
    t = SSL_table_put(v_12, w_12, x_12);
    t = (ATerm) ATmakeAppl(sym__2, v_12, w_12);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm y_79 (ATerm), ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL;
  d_13 = t;
  t = y_79(t);
  e_13 = t;
  {
    ATerm e_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(e_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(f_24);
      }
    else
      {
        t = e_24;
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
      ATerm m_3 (ATerm t)
      {
        ATerm h_13 = NULL;
        h_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_13, h_13);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(m_3, t);
      t = d_13;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm t_80 (ATerm), ATerm u_80 (ATerm), ATerm t)
{
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_80(t);
      t = u_80(t);
      ;
      LocalPopChoice(h_24);
    }
  else
    {
      t = g_24;
      t = u_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm x_79 (ATerm), ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL;
  l_13 = t;
  t = x_79(t);
  m_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_13, term_i_24);
  {
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_24 = ATgetArgument(t, 0);
            ATerm m_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(m_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(k_24);
      }
    else
      {
        t = j_24;
        t = (ATerm) ATempty;
      }
    n_13 = t;
    t = SSL_table_put(m_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(n_13), (ATerm) ATempty));
    t = l_13;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm o_82 (ATerm), ATerm t)
{
  ATerm s_13 = NULL;
  ATerm n_3 (ATerm t)
  {
    t = term_h_23;
    return(t);
  }
  t = begin_scope_1_0(n_3, t);
  {
    ATerm o_3 (ATerm t)
    {
      ATerm t_13 = NULL;
      t_13 = t;
      {
        ATerm n_24 = t;
        int o_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(o_24);
          }
        else
          {
            t = n_24;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_13 = ATgetFirst((ATermList) t);
            {
              ATerm p_24 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = s_13;
        {
          ATerm p_3 (ATerm t)
          {
            ATerm w_3 (ATerm t)
            {
              ATerm u_13 = NULL;
              u_13 = t;
              t = SSL_remove(u_13);
              return(t);
            }
            t = try_1_0(w_3, t);
            return(t);
          }
          t = map_1_0(p_3, t);
          t = t_13;
          {
            ATerm x_3 (ATerm t)
            {
              t = term_h_23;
              return(t);
            }
            t = end_scope_1_0(x_3, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(o_82, o_3, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm p_82 (ATerm), ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_13 = NULL;
        t = term_j_23;
        t = get_config_0_0(t);
        v_13 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, v_13);
        ;
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        t = term_s_24;
      }
    t = p_82(t);
    {
      ATerm c_4 (ATerm t)
      {
        ATerm t_24 = t;
        int u_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_i_23;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(u_24);
          }
        else
          {
            t = t_24;
            t = term_v_24;
          }
        return(t);
      }
      t = copy_to_1_0(c_4, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(y_3, t);
  return(t);
}
ATerm ast2text_0_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm k_4 (ATerm t)
    {
      t = term_w_24;
      return(t);
    }
    ATerm l_4 (ATerm t)
    {
      t = term_x_24;
      t = get_config_0_0(t);
      {
        ATerm n_4 (ATerm t)
        {
          ATerm w_13 = NULL;
          w_13 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, w_13), term_x_24);
          return(t);
        }
        t = map_1_0(n_4, t);
        t = concat_0_0(t);
      }
      return(t);
    }
    t = xtc_transform_2_0(k_4, l_4, t);
    t = xtc_abox2text_1_0(pass_width_0_0, t);
    return(t);
  }
  t = xtc_io_1_0(d_4, t);
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL;
  if(match_cons(t, sym__2))
    {
      x_13 = ATgetArgument(t, 0);
      y_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_13;
  {
    ATerm y_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(z_24);
      }
    else
      {
        t = y_24;
        t = (ATerm) ATempty;
      }
    z_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_13, z_13);
    t = conc_0_0(t);
    a_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), x_13, a_14);
    t = (ATerm) ATmakeAppl(sym__3, term_a_25, x_13, a_14);
  }
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
      _fail(t);
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    ATerm b_14 = NULL;
    b_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_24, (ATerm) ATinsert(ATempty, b_14));
    t = extend_config_0_0(t);
    t = b_14;
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    t = term_b_25;
    return(t);
  }
  t = ArgOption_3_0(o_4, x_4, z_4, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL;
  e_14 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = e_14;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm m_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_14 = ATgetFirst((ATermList) t);
          g_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_14 = ATgetFirst((ATermList) t);
          i_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_14;
      t = h_0(t);
      t = h_14;
      t = i_0(t);
      m_14 = t;
      t = (ATerm) ATinsert(CheckATermList(i_14), m_14);
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm q_14 = NULL;
    q_14 = t;
    if(match_string(t, "-k"))
      {
        t = q_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = q_14;
      }
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    ATerm s_14 = NULL,t_14 = NULL;
    s_14 = t;
    t = SSL_string_to_int(s_14);
    t_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), t_14);
    t = s_14;
    return(t);
  }
  ATerm f_5 (ATerm t)
  {
    t = term_c_25;
    return(t);
  }
  t = ArgOption_3_0(a_5, b_5, f_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_5 (ATerm t)
      {
        ATerm x_14 = NULL;
        x_14 = t;
        if(match_string(t, "-S"))
          {
            t = x_14;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = x_14;
          }
        return(t);
      }
      ATerm i_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_g_25;
        return(t);
      }
      ATerm k_5 (ATerm t)
      {
        t = term_h_25;
        return(t);
      }
      t = Option_3_0(g_5, i_5, k_5, t);
      ;
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      {
        ATerm i_25 = t;
        int j_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_5 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm n_5 (ATerm t)
            {
              ATerm y_14 = NULL,z_14 = NULL;
              y_14 = t;
              t = SSL_string_to_int(y_14);
              z_14 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), z_14);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, y_14);
              return(t);
            }
            ATerm o_5 (ATerm t)
            {
              t = term_k_25;
              return(t);
            }
            t = ArgOption_3_0(m_5, n_5, o_5, t);
            ;
            LocalPopChoice(j_25);
          }
        else
          {
            t = i_25;
            {
              ATerm p_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm q_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_l_25;
                return(t);
              }
              ATerm s_5 (ATerm t)
              {
                t = term_m_25;
                return(t);
              }
              t = Option_3_0(p_5, q_5, s_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    ATerm b_15 = NULL;
    b_15 = t;
    if(match_string(t, "-o"))
      {
        t = b_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = b_15;
      }
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    ATerm c_15 = NULL;
    c_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), c_15);
    t = (ATerm) ATmakeAppl(sym_Output_1, c_15);
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    t = term_p_25;
    return(t);
  }
  t = ArgOption_3_0(t_5, u_5, v_5, t);
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    ATerm e_15 = NULL;
    e_15 = t;
    if(match_string(t, "-i"))
      {
        t = e_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = e_15;
      }
    return(t);
  }
  ATerm x_5 (ATerm t)
  {
    ATerm f_15 = NULL;
    f_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), f_15);
    t = (ATerm) ATmakeAppl(sym_Input_1, f_15);
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = term_q_25;
    return(t);
  }
  t = ArgOption_3_0(w_5, x_5, y_5, t);
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
      {
        ATerm t_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = general_options_0_0(t);
                  ;
                  LocalPopChoice(w_25);
                }
              else
                {
                  t = v_25;
                  {
                    ATerm z_5 (ATerm t)
                    {
                      ATerm h_15 = NULL;
                      h_15 = t;
                      if(match_string(t, "-w"))
                        {
                          t = h_15;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
                            _fail(t);
                          t = h_15;
                        }
                      return(t);
                    }
                    ATerm a_6 (ATerm t)
                    {
                      ATerm i_15 = NULL;
                      i_15 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue)), i_15);
                      t = i_15;
                      return(t);
                    }
                    ATerm b_6 (ATerm t)
                    {
                      t = term_x_25;
                      return(t);
                    }
                    t = ArgOption_3_0(z_5, a_6, b_6, t);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm ast2text_options_0_0 (ATerm t)
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2text_options_0_0(t);
      ;
      LocalPopChoice(z_25);
    }
  else
    {
      t = y_25;
      t = pp_options_0_0(t);
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL;
  j_15 = t;
  t = term_t_8;
  t = whoami_0_0(t);
  k_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), k_15), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = j_15;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_8;
  t = whoami_0_0(t);
  l_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), l_15));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_a_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm a_76 (ATerm), ATerm b_76 (ATerm), ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_76(t);
      ;
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      {
        ATerm o_15 = NULL,p_15 = NULL,s_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_15 = ATgetFirst((ATermList) t);
            p_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_15;
        t = foldr_2_0(a_76, b_76, t);
        s_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_15, s_15);
        t = b_76(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL;
  t_15 = t;
  t = SSL_explode_term(t_15);
  if(match_cons(t, sym__2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      u_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_15;
  t = foldr_2_0(y_73, z_73, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_15 = NULL;
  t = times_0_0(t);
  {
    ATerm c_6 (ATerm t)
    {
      t = term_f_25;
      return(t);
    }
    ATerm d_6 (ATerm t)
    {
      ATerm w_15 = NULL,x_15 = NULL;
      if(match_cons(t, sym__2))
        {
          w_15 = ATgetArgument(t, 0);
          x_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm e_26 = t;
        int f_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(w_15, x_15);
            ;
            LocalPopChoice(f_26);
          }
        else
          {
            t = e_26;
            t = SSL_addr(w_15, x_15);
          }
      }
      return(t);
    }
    t = crush_2_0(c_6, d_6, t);
    v_15 = t;
    t = SSL_TicksToSeconds(v_15);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL;
  j_16 = t;
  if(match_cons(t, sym__2))
    {
      k_16 = ATgetArgument(t, 0);
      l_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_16;
        if((k_16 != t))
          {
            _fail(t);
          }
        t = j_16;
        ;
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        t = j_16;
        {
          ATerm i_26 = t;
          int j_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_16, l_16);
              ;
              LocalPopChoice(j_26);
            }
          else
            {
              t = i_26;
              t = SSL_gtr(k_16, l_16);
            }
          t = (ATerm) ATmakeAppl(sym__2, k_16, l_16);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_92 (ATerm), ATerm t)
{
  ATerm e_6 (ATerm t)
  {
    ATerm o_16 = NULL,q_16 = NULL;
    o_16 = t;
    t = term_k_8;
    t = get_config_0_0(t);
    q_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_16, term_n_8);
    t = geq_0_0(t);
    t = o_16;
    t = z_92(t);
    return(t);
  }
  t = try_1_0(e_6, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    ATerm s_16 = NULL,t_16 = NULL;
    t = run_time_0_0(t);
    s_16 = t;
    t = term_t_8;
    t = whoami_0_0(t);
    t_16 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), s_16), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), t_16));
    t = (ATerm) ATmakeAppl(sym__2, term_u_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_26), s_16), term_c_9), t_16));
    return(t);
  }
  t = if_verbose1_1_0(g_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm w_84 (ATerm), ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      {
        ATerm h_6 (ATerm t)
        {
          ATerm o_26 = t;
          int p_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(p_26);
            }
          else
            {
              t = o_26;
              {
                ATerm q_26 = t;
                int r_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(r_26);
                  }
                else
                  {
                    t = q_26;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(h_6, t);
      }
    }
  t = w_84(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_16 = ATgetFirst((ATermList) t);
      x_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_17 = NULL,c_17 = NULL;
        t = x_16;
        t = g_0(t);
        b_17 = t;
        t = w_16;
        t = f_0(t);
        c_17 = t;
        t = x_16;
        {
          ATerm i_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(b_17), c_17);
            return(t);
          }
          t = reverse_acc_2_0(f_0, i_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_8;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, j_6, t);
  return(t);
}
ATerm Program_1_0 (ATerm i_62 (ATerm), ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
  g_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_17);
  d_17 = t;
  t = e_17;
  t = i_62(t);
  f_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, f_17), d_17);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_26);
    }
  else
    {
      t = s_26;
      {
        ATerm k_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(k_6, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_u_26;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm m_6 (ATerm t)
    {
      ATerm k_17 = NULL;
      k_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, k_17), term_v_26);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(m_6, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm j_62 (ATerm), ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL;
  o_17 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      m_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_17);
  l_17 = t;
  t = m_17;
  t = j_62(t);
  n_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, n_17), l_17);
  return(t);
}
ATerm fetch_1_0 (ATerm u_69 (ATerm), ATerm t)
{
  ATerm s_17 (ATerm t)
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(u_69, _id, t);
        ;
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
        t = Cons_2_0(_id, s_17, t);
      }
    return(t);
  }
  t = s_17(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm r_85 (ATerm), ATerm t)
{
  t = fetch_1_0(r_85, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL;
  u_17 = t;
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_17;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_27 = ATgetFirst((ATermList) t);
                ATerm b_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_17;
          }
        ;
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        t = (ATerm) ATinsert(ATempty, u_17);
      }
    v_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), v_17);
    t = u_17;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_a_26;
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
          ATerm n_6 (ATerm t)
          {
            t = e_18;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(n_6, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL;
  i_18 = t;
  t = SSL_explode_term(i_18);
  if(match_cons(t, sym__2))
    {
      ATerm e_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      j_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_18;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm a_70 (ATerm), ATerm t)
{
  ATerm k_18 (ATerm t)
  {
    ATerm f_27 = t;
    int g_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, k_18, t);
        ;
        LocalPopChoice(g_27);
      }
    else
      {
        t = f_27;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_70(t);
      }
    return(t);
  }
  t = k_18(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL;
  if(match_cons(t, sym__2))
    {
      m_18 = ATgetArgument(t, 0);
      l_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_18;
  {
    ATerm o_6 (ATerm t)
    {
      t = l_18;
      return(t);
    }
    t = at_end_1_0(o_6, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL;
  s_18 = t;
  if(match_cons(t, sym__2))
    {
      o_18 = ATgetArgument(t, 0);
      p_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_18);
  n_18 = t;
  t = o_18;
  t = t_55(t);
  q_18 = t;
  t = p_18;
  t = u_55(t);
  r_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, q_18, r_18), n_18);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm w_18 = NULL;
  ATerm p_6 (ATerm t)
  {
    ATerm x_18 = NULL;
    x_18 = t;
    t = SSL_explode_string(x_18);
    return(t);
  }
  ATerm q_6 (ATerm t)
  {
    ATerm y_18 = NULL;
    y_18 = t;
    t = SSL_explode_string(y_18);
    return(t);
  }
  t = _2_0(p_6, q_6, t);
  t = conc_0_0(t);
  w_18 = t;
  t = SSL_implode_string(w_18);
  return(t);
}
ATerm debug_1_0 (ATerm d_65 (ATerm), ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL;
  z_18 = t;
  t = d_65(t);
  a_19 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_18), a_19));
  t = z_18;
  return(t);
}
ATerm map_1_0 (ATerm k_69 (ATerm), ATerm t)
{
  ATerm b_19 (ATerm t)
  {
    ATerm j_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(k_27);
      }
    else
      {
        t = j_27;
        t = Cons_2_0(k_69, b_19, t);
      }
    return(t);
  }
  t = b_19(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_19 = NULL;
      h_19 = t;
      t = SSL_is_string(h_19);
      ;
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      {
        ATerm n_27 = t;
        int o_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_6 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(u_6, t);
            ;
            LocalPopChoice(o_27);
          }
        else
          {
            t = n_27;
            {
              ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
              l_19 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_19 = ATgetArgument(t, 0);
                  t = m_19;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_19 = ATgetArgument(t, 0);
                      t = m_19;
                      {
                        ATerm p_27 = t;
                        int q_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(q_27);
                          }
                        else
                          {
                            t = p_27;
                            {
                              ATerm w_6 (ATerm t)
                              {
                                t = term_r_27;
                                return(t);
                              }
                              t = debug_1_0(w_6, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm r_19 = NULL,s_19 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_19 = ATgetArgument(t, 0);
                          n_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_19;
                      t = eval_config_0_0(t);
                      r_19 = t;
                      t = n_19;
                      t = eval_config_0_0(t);
                      s_19 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_19, s_19);
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
  ATerm v_19 = NULL;
  v_19 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_19);
  {
    ATerm x_6 (ATerm t)
    {
      ATerm w_19 = NULL;
      t = eval_config_0_0(t);
      w_19 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_19, w_19);
      t = w_19;
      return(t);
    }
    t = try_1_0(x_6, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm e_80 (ATerm), ATerm t)
{
  ATerm s_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_80(t);
      ;
      LocalPopChoice(t_27);
    }
  else
    {
      t = s_27;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_6 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm a_7 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_x_27;
        return(t);
      }
      ATerm b_7 (ATerm t)
      {
        t = term_y_27;
        return(t);
      }
      t = Option_3_0(z_6, a_7, b_7, t);
      ;
      LocalPopChoice(v_27);
    }
  else
    {
      t = u_27;
      {
        ATerm c_7 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm d_7 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_z_27;
          return(t);
        }
        ATerm e_7 (ATerm t)
        {
          t = term_a_28;
          return(t);
        }
        t = Option_3_0(c_7, d_7, e_7, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL;
  if(match_cons(t, sym__3))
    {
      a_20 = ATgetArgument(t, 0);
      b_20 = ATgetArgument(t, 1);
      c_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_20, b_20);
  {
    ATerm b_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_28 = ATgetArgument(t, 0);
            ATerm e_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(a_20, b_20);
        ;
        LocalPopChoice(c_28);
      }
    else
      {
        t = b_28;
        t = (ATerm) ATempty;
      }
    d_20 = t;
    t = SSL_table_put(a_20, b_20, (ATerm) ATinsert(CheckATermList(d_20), c_20));
    t = (ATerm) ATmakeAppl(sym__3, a_20, b_20, c_20);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm w_86 (ATerm), ATerm t)
{
  ATerm i_20 = NULL;
  t = term_t_8;
  t = w_86(t);
  i_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_28, term_g_28, i_20);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
  k_20 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = k_20;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm p_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_20 = ATgetFirst((ATermList) t);
          m_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_20;
      t = a_0(t);
      t = term_t_8;
      t = b_0(t);
      p_20 = t;
      t = (ATerm) ATinsert(CheckATermList(m_20), p_20);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm f_7 (ATerm t)
  {
    ATerm r_20 = NULL;
    r_20 = t;
    if(match_string(t, "--help"))
      {
        t = r_20;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = r_20;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = r_20;
          }
      }
    return(t);
  }
  ATerm g_7 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_h_28;
    return(t);
  }
  ATerm h_7 (ATerm t)
  {
    t = term_i_28;
    return(t);
  }
  t = Option_3_0(f_7, g_7, h_7, t);
  return(t);
}
ATerm Cons_2_0 (ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL;
  x_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_20 = ATgetFirst((ATermList) t);
      u_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_20);
  s_20 = t;
  t = t_20;
  t = c_57(t);
  v_20 = t;
  t = u_20;
  t = d_57(t);
  w_20 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(w_20), v_20), s_20);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_86 (ATerm), ATerm t)
{
  ATerm j_21 = NULL;
  j_21 = t;
  {
    ATerm p_7 (ATerm t)
    {
      t = term_j_28;
      t = u_86(t);
      return(t);
    }
    t = try_1_0(p_7, t);
    t = j_21;
    {
      ATerm q_7 (ATerm t)
      {
        ATerm k_21 = NULL;
        k_21 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), k_21);
        t = (ATerm) ATmakeAppl(sym_Program_1, k_21);
        return(t);
      }
      ATerm a_8 (ATerm t)
      {
        ATerm k_28 = t;
        int l_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_28 = t;
            int n_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(n_28);
              }
            else
              {
                t = m_28;
                t = u_86(t);
                t = Cons_2_0(_id, a_8, t);
              }
            ;
            LocalPopChoice(l_28);
          }
        else
          {
            t = k_28;
            {
              ATerm m_21 = NULL,n_21 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_21 = ATgetFirst((ATermList) t);
                  n_21 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(n_21), (ATerm) ATmakeAppl(sym_Undefined_1, m_21));
            }
          }
        return(t);
      }
      t = Cons_2_0(q_7, a_8, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm t_86 (ATerm), ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
  t_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = t_21;
  {
    ATerm b_8 (ATerm t)
    {
      ATerm o_28 = t;
      int p_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_86(t);
          ;
          LocalPopChoice(p_28);
        }
      else
        {
          t = o_28;
          {
            ATerm q_28 = t;
            int r_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(r_28);
              }
            else
              {
                t = q_28;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_8, t);
    {
      ATerm c_8 (ATerm t)
      {
        ATerm s_28 = t;
        int t_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_22 = NULL;
            a_22 = t;
            {
              ATerm u_28 = t;
              int v_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_22;
                  {
                    ATerm w_28 = t;
                    int x_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_n_26;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(x_28);
                      }
                    else
                      {
                        t = w_28;
                        {
                          ATerm d_8 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(d_8, t);
                        }
                      }
                    t = a_22;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(v_28);
                }
              else
                {
                  t = u_28;
                  t = term_w_27;
                  t = get_config_0_0(t);
                  t = a_22;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(t_28);
          }
        else
          {
            t = s_28;
            {
              ATerm e_8 (ATerm t)
              {
                ATerm f_8 (ATerm t)
                {
                  u_21 = t;
                  return(t);
                }
                t = Undefined_1_0(f_8, t);
                return(t);
              }
              t = option_defined_1_0(e_8, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(u_21)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_u_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_21)), term_y_28));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(c_8, t);
      v_21 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = v_21;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm t)
{
  ATerm i_13 = NULL;
  t = parse_options_1_0(y_84, t);
  i_13 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), i_13);
  t = i_13;
  t = a_85(t);
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_84, t);
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
              t = b_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(c_29);
            }
          else
            {
              t = b_29;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm t)
{
  t = option_wrap_4_0(c_85, default_usage_0_0, _id, d_85, t);
  return(t);
}
ATerm io_ast2text_0_0 (ATerm t)
{
  t = option_wrap_2_0(ast2text_options_0_0, ast2text_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_ast2text_0_0(t);
  return(t);
}
