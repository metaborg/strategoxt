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
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_u_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_w_26;
ATerm term_t_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_v_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_e_25;
ATerm term_u_24;
ATerm term_z_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_d_23;
ATerm term_a_23;
ATerm term_x_22;
ATerm term_u_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_l_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_e_20;
ATerm term_s_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_n_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_b_18;
ATerm term_z_17;
ATerm term_w_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_r_15;
ATerm term_n_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_z_13;
ATerm term_y_13;
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
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_m_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_h_9;
ATerm term_c_9;
ATerm term_w_8;
ATerm term_k_5;
void init_constant_terms (void)
{
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_9, term_w_8, term_x_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_9, term_a_10, term_b_10);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_10, term_e_10, term_f_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_10, term_j_10, term_m_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_10, term_u_10, term_g_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_11, term_k_11, term_l_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_t_11, term_u_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_z_11, term_l_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_12, term_t_12, term_u_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_x_12, term_z_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_f_13, term_g_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_l_13, term_o_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_13, term_r_13, term_s_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_v_13, term_w_13);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_13, term_z_13, term_c_14);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_f_14, term_g_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_m_14, term_n_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_v_14, term_w_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_d_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_i_15, term_j_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_v_15, term_y_15);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_16, term_g_16, term_h_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_t_16, term_u_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_f_17, term_g_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_17, term_j_17, term_k_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_17, term_n_17, term_o_17);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_17, term_w_17, term_z_17);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_18, term_f_18, term_g_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_25);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-a | --abstract  source is abstract syntax", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations    print annotations on abstract syntax", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym__3, term_r_27, term_s_27, term_h_20);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("annos-to-term", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm r_65 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm x_69 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm e_64 (ATerm), ATerm f_64 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm g_64 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm r_83 (ATerm), ATerm);
ATerm assert_1_0 (ATerm c_80 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm k_65 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm b_62 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm d_81 (ATerm), ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm e_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm y_78 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm say_1_0 (ATerm h_65 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm c_81 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm e_81 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm);
ATerm union_1_0 (ATerm o_73 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm n_81 (ATerm), ATerm);
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
ATerm xtc_transform_1_0 (ATerm s_83 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm b_70 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm d_65 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm z_79 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm y_79 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm d_83 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm e_83 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm pp_stratego_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm);
ATerm crush_2_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_80 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm f_85 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_69 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm i_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm j_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm v_69 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm a_86 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm f_80 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm f_87 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm d_87 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm c_87 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm);
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
  t = term_k_5;
  {
    ATerm u_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(v_8);
      }
    else
      {
        t = u_8;
        t = term_w_8;
      }
    b_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_w_8);
    {
      ATerm y_8 = t;
      int b_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(b_0, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(b_9);
        }
      else
        {
          t = y_8;
          t = SSL_subtr(b_0, (ATerm) ATmakeInt(1));
        }
      n_0 = t;
      t = SSL_int_to_string(n_0);
      f_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, f_0), term_k_5);
    }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm q_0 = NULL,s_0 = NULL;
  q_0 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = q_0;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          s_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(s_0, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm r_65 (ATerm), ATerm t)
{
  ATerm u_0 = NULL,y_0 = NULL,z_0 = NULL;
  if(match_cons(t, sym__2))
    {
      u_0 = ATgetArgument(t, 0);
      y_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_0, term_c_9);
  t = open_stream_0_0(t);
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_0, y_0);
  t = r_65(t);
  t = fclose_0_0(t);
  t = y_0;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    ATerm a_1 = NULL,c_1 = NULL,d_1 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm g_9 = ATgetArgument(t, 0);
        if(match_cons(g_9, sym_Stream_1))
          {
            a_1 = ATgetArgument(g_9, 0);
          }
        else
          _fail(t);
        c_1 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(a_1, c_1);
    d_1 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, d_1);
    return(t);
  }
  t = WriteToFile_1_0(o_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm e_1 = NULL,g_1 = NULL;
  e_1 = t;
  t = xtc_new_file_0_0(t);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_1, e_1);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(g_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, g_1);
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
  ATerm h_1 = NULL;
  ATerm p_0 (ATerm t)
  {
    ATerm i_1 = NULL;
    i_1 = t;
    t = SSL_explode_string(i_1);
    return(t);
  }
  t = map_1_0(p_0, t);
  t = concat_0_0(t);
  h_1 = t;
  t = SSL_implode_string(h_1);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,v_2 = NULL,w_2 = NULL;
  s_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      t_2 = ATgetArgument(t, 0);
      {
        ATerm x_0 = NULL;
        t = SSL_int_to_string(t_2);
        x_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_9), x_0), term_h_9);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm p_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          t_2 = ATgetArgument(t, 0);
          v_2 = ATgetArgument(t, 1);
          w_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(v_2);
      p_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_2), term_n_9), p_1), term_m_9), t_2);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  ATerm z_2 = NULL;
  ATerm r_0 (ATerm t)
  {
    t = x_69(t);
    if(((z_2 != NULL) && (z_2 != t)))
      _fail(t);
    else
      z_2 = t;
    return(t);
  }
  t = fetch_1_0(r_0, t);
  t = not_null(z_2);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm a_3 = NULL;
  a_3 = t;
  {
    ATerm q_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_18), term_b_18), term_s_17), term_l_17), term_h_17), term_x_16), term_j_16), term_z_15), term_n_15), term_f_15), term_a_15), term_o_14), term_h_14), term_d_14), term_x_13), term_t_13), term_p_13), term_h_13), term_a_13), term_v_12), term_m_12), term_x_11), term_r_11), term_i_11), term_r_10), term_g_10), term_c_10), term_y_9);
        {
          ATerm t_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm o_18 = ATgetArgument(t, 0);
                if((a_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm u_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(t_0, t);
        }
        ;
        LocalPopChoice(v_9);
      }
    else
      {
        t = q_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, a_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm d_3 = NULL;
  d_3 = t;
  {
    ATerm v_0 (ATerm t)
    {
      ATerm f_3 = NULL,h_3 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm v_18 = ATgetArgument(t, 0);
          f_3 = ATgetArgument(t, 1);
          {
            ATerm x_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = f_3;
      {
        ATerm a_19 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = a_19;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        h_3 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_3), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_b_19, (ATerm) ATinsert(ATinsert(ATempty, h_3), term_c_19));
      }
      return(t);
    }
    t = try_1_0(v_0, t);
    t = d_3;
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
  ATerm k_3 = NULL,l_3 = NULL;
  k_3 = t;
  t = fork_0_0(t);
  l_3 = t;
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = k_3;
        t = e_64(t);
        ;
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = (ATerm) ATmakeAppl(sym__2, l_3, k_3);
        t = f_64(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm g_64 (ATerm), ATerm t)
{
  ATerm o_3 = NULL;
  ATerm w_0 (ATerm t)
  {
    ATerm p_3 = NULL;
    if(match_cons(t, sym__2))
      {
        p_3 = ATgetArgument(t, 0);
        if(((o_3 != NULL) && (o_3 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          o_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(p_3);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm j_19 = ATgetArgument(t, 0);
        if(((ATgetType(j_19) != AT_INT) || (ATgetInt((ATermInt) j_19) != 0)))
          _fail(t);
        {
          ATerm k_19 = ATgetArgument(t, 1);
        }
        {
          ATerm l_19 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = not_null(o_3);
    return(t);
  }
  t = fork_2_0(g_64, w_0, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL;
  if(match_cons(t, sym__2))
    {
      q_3 = ATgetArgument(t, 0);
      r_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_1 (ATerm t)
    {
      t = SSL_execvp(q_3, r_3);
      return(t);
    }
    t = fork_and_wait_1_0(b_1, t);
  }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm r_83 (ATerm), ATerm t)
{
  ATerm s_3 = NULL,u_3 = NULL;
  s_3 = t;
  t = r_83(t);
  t = xtc_find_warning_0_0(t);
  u_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_3, s_3);
  t = call_0_0(t);
  t = s_3;
  return(t);
}
ATerm assert_1_0 (ATerm c_80 (ATerm), ATerm t)
{
  ATerm v_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL;
  if(match_cons(t, sym__2))
    {
      v_3 = ATgetArgument(t, 0);
      z_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_80(t);
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_4, v_3, z_3);
  t = table_push_0_0(t);
  {
    ATerm m_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(a_4, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(o_19);
      }
    else
      {
        t = m_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_4 = ATgetFirst((ATermList) t);
        c_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(a_4, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(c_4), (ATerm) ATinsert(CheckATermList(b_4), v_3)));
    t = (ATerm) ATmakeAppl(sym__2, v_3, z_3);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm k_65 (ATerm), ATerm t)
{
  ATerm f_4 = NULL;
  f_4 = t;
  t = k_65(t);
  {
    ATerm f_1 (ATerm t)
    {
      t = term_s_19;
      return(t);
    }
    t = debug_1_0(f_1, t);
    t = f_4;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm x_4 (ATerm k_4, ATerm t)
  {
    t = k_4;
    {
      ATerm t_19 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm v_19 = ATgetArgument(t, 0);
              ATerm w_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = t_19;
        }
      {
        ATerm j_1 (ATerm t)
        {
          t = term_e_20;
          return(t);
        }
        t = obsolete_1_0(j_1, t);
        t = (ATerm) ATmakeAppl(sym__2, k_4, term_c_9);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm a_5 (ATerm n_4, ATerm q_4, ATerm r_4, ATerm t)
  {
    t = SSL_open_file(n_4, q_4);
    return(t);
  }
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL;
  u_4 = t;
  if(match_cons(t, sym__2))
    {
      v_4 = ATgetArgument(t, 0);
      w_4 = ATgetArgument(t, 1);
      {
        ATerm f_20 = t;
        int g_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_4(u_4, t);
            ;
            LocalPopChoice(g_20);
          }
        else
          {
            t = f_20;
            t = a_5(v_4, w_4, u_4, t);
          }
      }
    }
  else
    {
      t = x_4(u_4, t);
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
  ATerm b_5 = NULL;
  t = term_h_20;
  t = new_0_0(t);
  b_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_5, term_i_20);
  t = conc_strings_0_0(t);
  {
    ATerm k_1 (ATerm t)
    {
      ATerm s_1 = NULL;
      s_1 = t;
      t = SSL_access(s_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(k_1, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm m_5 = NULL;
  t = new_file_0_0(t);
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_5, term_c_9);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, m_5, term_h_20);
  {
    ATerm l_1 (ATerm t)
    {
      t = term_l_20;
      return(t);
    }
    t = assert_1_0(l_1, t);
    t = m_5;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL;
  s_6 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm v_1 = NULL,b_2 = NULL;
      t = s_6;
      t = xtc_new_file_0_0(t);
      v_1 = t;
      t = m_0(t);
      b_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_2, (ATerm) ATinsert(ATinsert(ATempty, v_1), term_o_20));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(v_1);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_1);
    }
  else
    {
      ATerm f_2 = NULL,h_2 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_6;
      t = xtc_new_file_0_0(t);
      f_2 = t;
      t = m_0(t);
      h_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_2), term_o_20), t_6), term_p_20));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(f_2);
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_2);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm b_62 (ATerm), ATerm t)
{
  ATerm y_6 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
  f_7 = t;
  if(match_cons(t, sym_FILE_1))
    {
      d_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_7);
  y_6 = t;
  t = d_7;
  t = b_62(t);
  e_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, e_7), y_6);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm t)
{
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_20 = t;
      int w_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(w_20);
        }
      else
        {
          t = s_20;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(r_20);
      t = xtc_transform_file_2_0(t_83, u_83, t);
    }
  else
    {
      t = q_20;
      t = xtc_transform_term_2_0(t_83, u_83, t);
    }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm i_7 = NULL;
  i_7 = t;
  t = SSL_table_keys(i_7);
  {
    ATerm m_1 (ATerm t)
    {
      ATerm k_7 = NULL,m_7 = NULL;
      k_7 = t;
      t = SSL_table_get(i_7, k_7);
      m_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_7, m_7);
      return(t);
    }
    t = map_1_0(m_1, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm p_7 = NULL,q_7 = NULL;
    p_7 = t;
    t = term_k_5;
    t = get_config_0_0(t);
    q_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_7, term_j_17);
    t = geq_0_0(t);
    t = p_7;
    t = d_81(t);
    return(t);
  }
  t = try_1_0(n_1, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
  if(match_cons(t, sym__2))
    {
      y_7 = ATgetArgument(t, 0);
      z_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, y_7));
  {
    ATerm o_1 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((z_7 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          if(((a_8 != NULL) && (a_8 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            a_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(o_1, t);
    t = not_null(a_8);
  }
  return(t);
}
ATerm filter_1_0 (ATerm e_77 (ATerm), ATerm t)
{
  ATerm x_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_20);
    }
  else
    {
      t = x_20;
      {
        ATerm z_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              t = filter_1_0(e_77, t);
              return(t);
            }
            t = Cons_2_0(e_77, q_1, t);
            ;
            LocalPopChoice(a_21);
          }
        else
          {
            t = z_20;
            {
              ATerm e_8 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm b_21 = ATgetFirst((ATermList) t);
                  e_8 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = e_8;
              t = filter_1_0(e_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm y_78 (ATerm), ATerm t)
{
  ATerm g_8 (ATerm t)
  {
    ATerm r_1 (ATerm t)
    {
      t = y_78(t);
      t = g_8(t);
      return(t);
    }
    t = try_1_0(r_1, t);
    return(t);
  }
  t = g_8(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm h_8 = NULL;
  h_8 = t;
  {
    ATerm t_1 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm c_21 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_21;
          }
      }
      return(t);
    }
    t = repeat_1_0(t_1, t);
    t = h_8;
  }
  return(t);
}
ATerm say_1_0 (ATerm h_65 (ATerm), ATerm t)
{
  ATerm j_8 = NULL,j_2 = NULL;
  j_8 = t;
  t = h_65(t);
  j_2 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, j_2));
  t = j_8;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm c_81 (ATerm), ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm k_8 = NULL,l_8 = NULL;
    k_8 = t;
    t = term_k_5;
    t = get_config_0_0(t);
    l_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_8, term_l_13);
    t = geq_0_0(t);
    t = k_8;
    t = c_81(t);
    return(t);
  }
  t = try_1_0(u_1, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm e_81 (ATerm), ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    ATerm m_8 = NULL,n_8 = NULL;
    m_8 = t;
    t = term_k_5;
    t = get_config_0_0(t);
    n_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_8, term_j_10);
    t = geq_0_0(t);
    t = m_8;
    t = e_81(t);
    return(t);
  }
  t = try_1_0(w_1, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm t)
{
  ATerm s_8 = NULL,x_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_8 = ATgetFirst((ATermList) t);
      x_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_73(t);
  {
    ATerm x_1 (ATerm t)
    {
      ATerm z_8 = NULL;
      z_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_8, z_8);
      t = s_73(t);
      return(t);
    }
    t = fetch_1_0(x_1, t);
    t = x_8;
  }
  return(t);
}
ATerm union_1_0 (ATerm o_73 (ATerm), ATerm t)
{
  ATerm a_9 = NULL,d_9 = NULL;
  if(match_cons(t, sym__2))
    {
      d_9 = ATgetArgument(t, 0);
      a_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_9;
  {
    ATerm e_9 (ATerm t)
    {
      ATerm d_21 = t;
      int e_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = a_9;
          ;
          LocalPopChoice(e_21);
        }
      else
        {
          t = d_21;
          {
            ATerm g_21 = t;
            int h_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_1 (ATerm t)
                {
                  t = a_9;
                  return(t);
                }
                t = HdMember_p__2_0(o_73, y_1, t);
                t = e_9(t);
                ;
                LocalPopChoice(h_21);
              }
            else
              {
                t = g_21;
                t = Cons_2_0(_id, e_9, t);
              }
          }
        }
      return(t);
    }
    t = e_9(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm f_9 = NULL;
    if(match_cons(t, sym__2))
      {
        f_9 = ATgetArgument(t, 0);
        if((f_9 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(z_1, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,o_9 = NULL,p_9 = NULL;
  if(match_cons(t, sym__3))
    {
      i_9 = ATgetArgument(t, 0);
      j_9 = ATgetArgument(t, 1);
      k_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_9, j_9);
  {
    ATerm j_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_21 = ATgetArgument(t, 0);
            ATerm p_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(i_9, j_9);
        ;
        LocalPopChoice(l_21);
      }
    else
      {
        t = j_21;
        t = (ATerm) ATempty;
      }
    o_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_9, k_9);
    t = union_0_0(t);
    p_9 = t;
    t = SSL_table_put(i_9, j_9, p_9);
    t = (ATerm) ATmakeAppl(sym__3, i_9, j_9, k_9);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm n_81 (ATerm), ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL;
  if(match_cons(t, sym__2))
    {
      s_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9;
  {
    ATerm a_2 (ATerm t)
    {
      ATerm t_9 = NULL,u_9 = NULL;
      if(match_cons(t, sym__2))
        {
          t_9 = ATgetArgument(t, 0);
          u_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, s_9, t_9, u_9);
      t = n_81(t);
      return(t);
    }
    t = map_1_0(a_2, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_10 (ATerm h_10, ATerm t)
  {
    t = SSL_fclose(h_10);
    return(t);
  }
  ATerm k_10 = NULL,l_10 = NULL;
  l_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_10 = ATgetArgument(t, 0);
      {
        ATerm q_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_10);
            ;
            LocalPopChoice(r_21);
          }
        else
          {
            t = q_21;
            t = n_10(l_10, t);
          }
      }
    }
  else
    {
      t = n_10(l_10, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_10 = NULL;
  t = SSL_stdin_stream();
  o_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_10 = NULL;
  t = SSL_stdout_stream();
  p_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_10 = NULL;
  t = SSL_stderr_stream();
  q_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_10);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm s_10 = NULL;
  s_10 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_10;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_10;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_10;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_21 = ATgetArgument(t, 0);
      ATerm t_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_4 = NULL,g_4 = NULL;
        e_4 = t;
        t = SSL_explode_term(e_4);
        if(match_cons(t, sym__2))
          {
            ATerm w_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm x_21 = ATgetArgument(t, 1);
              if(((ATgetType(x_21) == AT_LIST) && !(ATisEmpty(x_21))))
                {
                  g_4 = ATgetFirst((ATermList) x_21);
                  {
                    ATerm y_21 = (ATerm) ATgetNext((ATermList) x_21);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_4;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        {
          ATerm z_21 = t;
          int a_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
              ATerm c_2 (ATerm t)
              {
                ATerm y_10 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    y_10 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = y_10;
                return(t);
              }
              t = _2_0(c_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  v_10 = ATgetArgument(t, 0);
                  w_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(v_10, w_10);
              x_10 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, x_10);
              ;
              LocalPopChoice(a_22);
            }
          else
            {
              t = z_21;
              {
                ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL;
                ATerm d_2 (ATerm t)
                {
                  ATerm c_11 = NULL;
                  c_11 = t;
                  t = SSL_is_string(c_11);
                  return(t);
                }
                t = _2_0(d_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    z_10 = ATgetArgument(t, 0);
                    a_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(z_10, a_11);
                b_11 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, b_11);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL;
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_11 = NULL;
      h_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_11, term_d_22);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      {
        ATerm e_2 (ATerm t)
        {
          t = term_e_22;
          return(t);
        }
        t = debug_1_0(e_2, t);
        _fail(t);
      }
    }
  d_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(f_11);
  e_11 = t;
  t = d_11;
  t = fclose_0_0(t);
  t = e_11;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm f_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_4 = NULL;
      i_4 = t;
      t = SSL_access(i_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(g_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = f_22;
      {
        ATerm h_22 = t;
        int i_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_22 = t;
            if((PushChoice() == 0))
              {
                ATerm m_4 = NULL;
                m_4 = t;
                t = SSL_access(m_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_22;
              }
            {
              ATerm g_2 (ATerm t)
              {
                t = term_k_22;
                return(t);
              }
              t = debug_1_0(g_2, t);
            }
            ;
            LocalPopChoice(i_22);
          }
        else
          {
            t = h_22;
            {
              ATerm i_2 (ATerm t)
              {
                t = term_l_22;
                return(t);
              }
              t = debug_1_0(i_2, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL;
  m_11 = t;
  {
    ATerm k_2 (ATerm t)
    {
      ATerm l_2 (ATerm t)
      {
        t = term_m_22;
        return(t);
      }
      t = debug_1_0(l_2, t);
      return(t);
    }
    t = if_verbose5_1_0(k_2, t);
    {
      ATerm n_22 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, m_11));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = n_22;
        }
      n_11 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, m_11));
      t = n_11;
      {
        ATerm m_2 (ATerm t)
        {
          ATerm n_2 (ATerm t)
          {
            t = term_o_22;
            return(t);
          }
          t = debug_1_0(n_2, t);
          return(t);
        }
        t = if_verbose4_1_0(m_2, t);
        t = read_repository_file_0_0(t);
        {
          ATerm o_2 (ATerm t)
          {
            ATerm p_2 (ATerm t)
            {
              t = term_p_22;
              return(t);
            }
            t = say_1_0(p_2, t);
            return(t);
          }
          t = if_verbose6_1_0(o_2, t);
          o_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_22, o_11);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm q_2 (ATerm t)
            {
              ATerm r_2 (ATerm t)
              {
                t = term_r_22;
                return(t);
              }
              t = say_1_0(r_2, t);
              return(t);
            }
            t = if_verbose6_1_0(q_2, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, m_11), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_q_22, (ATerm)ATmakeAppl(sym_Imported_1, m_11), (ATerm) ATempty);
            {
              ATerm u_2 (ATerm t)
              {
                ATerm x_2 (ATerm t)
                {
                  t = term_p_22;
                  return(t);
                }
                t = say_1_0(x_2, t);
                return(t);
              }
              t = if_verbose4_1_0(u_2, t);
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
  ATerm s_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_22);
    }
  else
    {
      t = s_22;
      {
        ATerm v_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(w_22);
          }
        else
          {
            t = v_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm p_11 = NULL;
  ATerm y_2 (ATerm t)
  {
    ATerm b_3 (ATerm t)
    {
      t = term_x_22;
      return(t);
    }
    t = debug_1_0(b_3, t);
    return(t);
  }
  t = if_verbose5_1_0(y_2, t);
  p_11 = t;
  {
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(z_22);
      }
    else
      {
        t = y_22;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = p_11;
    {
      ATerm c_3 (ATerm t)
      {
        ATerm e_3 (ATerm t)
        {
          t = term_a_23;
          return(t);
        }
        t = debug_1_0(e_3, t);
        return(t);
      }
      t = if_verbose5_1_0(c_3, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_3 (ATerm t)
      {
        ATerm i_3 (ATerm t)
        {
          t = term_d_23;
          return(t);
        }
        t = debug_1_0(i_3, t);
        return(t);
      }
      t = if_verbose5_1_0(g_3, t);
      t = xtc_load_0_0(t);
      {
        ATerm e_23 = t;
        int f_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(f_23);
          }
        else
          {
            t = e_23;
            {
              ATerm y_4 = NULL,z_4 = NULL;
              y_4 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, y_4));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm g_23 = ATgetFirst((ATermList) t);
                  if(match_cons(g_23, sym__2))
                    {
                      ATerm i_23 = ATgetArgument(g_23, 0);
                      z_4 = ATgetArgument(g_23, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm h_23 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = z_4;
            }
          }
        {
          ATerm j_3 (ATerm t)
          {
            ATerm m_3 (ATerm t)
            {
              t = term_d_23;
              return(t);
            }
            t = debug_1_0(m_3, t);
            return(t);
          }
          t = if_verbose5_1_0(j_3, t);
        }
      }
      ;
      LocalPopChoice(c_23);
    }
  else
    {
      t = b_23;
      {
        ATerm q_11 = NULL;
        q_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), q_11), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_23), q_11), term_j_23);
        {
          ATerm n_3 (ATerm t)
          {
            t = term_q_22;
            t = table_getlist_0_0(t);
            {
              ATerm t_3 (ATerm t)
              {
                t = term_l_23;
                return(t);
              }
              t = debug_1_0(t_3, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(n_3, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm xtc_transform_1_0 (ATerm s_83 (ATerm), ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2_0(s_83, w_3, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
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
          ATerm x_3 (ATerm t)
          {
            t = w_11;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(x_3, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL;
  a_12 = t;
  t = SSL_explode_term(a_12);
  if(match_cons(t, sym__2))
    {
      ATerm o_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_12;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm b_70 (ATerm), ATerm t)
{
  ATerm c_12 (ATerm t)
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, c_12, t);
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_70(t);
      }
    return(t);
  }
  t = c_12(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL;
  if(match_cons(t, sym__2))
    {
      e_12 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_12;
  {
    ATerm y_3 (ATerm t)
    {
      t = d_12;
      return(t);
    }
    t = at_end_1_0(y_3, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
  k_12 = t;
  if(match_cons(t, sym__2))
    {
      g_12 = ATgetArgument(t, 0);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_12);
  f_12 = t;
  t = g_12;
  t = t_55(t);
  i_12 = t;
  t = h_12;
  t = u_55(t);
  j_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, i_12, j_12), f_12);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm n_12 = NULL;
  ATerm d_4 (ATerm t)
  {
    ATerm o_12 = NULL;
    o_12 = t;
    t = SSL_explode_string(o_12);
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    ATerm p_12 = NULL;
    p_12 = t;
    t = SSL_explode_string(p_12);
    return(t);
  }
  t = _2_0(d_4, h_4, t);
  t = conc_0_0(t);
  n_12 = t;
  t = SSL_implode_string(n_12);
  return(t);
}
ATerm debug_1_0 (ATerm d_65 (ATerm), ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL;
  q_12 = t;
  t = d_65(t);
  r_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_12), r_12));
  t = q_12;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_12 = NULL;
      y_12 = t;
      t = SSL_is_string(y_12);
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      {
        ATerm v_23 = t;
        int w_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_4 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(j_4, t);
            ;
            LocalPopChoice(w_23);
          }
        else
          {
            t = v_23;
            {
              ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
              c_13 = t;
              if(match_cons(t, sym_Path_1))
                {
                  d_13 = ATgetArgument(t, 0);
                  t = d_13;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_13 = ATgetArgument(t, 0);
                      t = d_13;
                      {
                        ATerm x_23 = t;
                        int y_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(y_23);
                          }
                        else
                          {
                            t = x_23;
                            {
                              ATerm l_4 (ATerm t)
                              {
                                t = term_z_23;
                                return(t);
                              }
                              t = debug_1_0(l_4, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm i_13 = NULL,j_13 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_13 = ATgetArgument(t, 0);
                          e_13 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_13;
                      t = eval_config_0_0(t);
                      i_13 = t;
                      t = e_13;
                      t = eval_config_0_0(t);
                      j_13 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_13, j_13);
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
  ATerm m_13 = NULL;
  m_13 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), m_13);
  {
    ATerm o_4 (ATerm t)
    {
      ATerm n_13 = NULL;
      t = eval_config_0_0(t);
      n_13 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), m_13, n_13);
      t = n_13;
      return(t);
    }
    t = try_1_0(o_4, t);
  }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL;
  a_14 = t;
  if(match_cons(t, sym_FILE_1))
    {
      b_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_5 = NULL;
        t = a_14;
        t = k_0(t);
        o_5 = t;
        {
          ATerm c_24 = t;
          int d_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(d_24);
            }
          else
            {
              t = c_24;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(b_14, o_5);
          t = (ATerm) ATmakeAppl(sym_FILE_1, b_14);
        }
        ;
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        {
          ATerm e_24 = t;
          int f_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_5 = NULL;
              t = a_14;
              t = k_0(t);
              s_5 = t;
              {
                ATerm g_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm h_24 = t;
                    int i_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(i_24);
                      }
                    else
                      {
                        t = h_24;
                        {
                          ATerm j_24 = t;
                          int k_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(k_24);
                            }
                          else
                            {
                              t = j_24;
                              {
                                ATerm t_5 = NULL;
                                t_5 = t;
                                if((b_14 != t))
                                  {
                                    _fail(t);
                                  }
                                t = t_5;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_24;
                  }
                t = SSL_copy(b_14, s_5);
                t = (ATerm) ATmakeAppl(sym_FILE_1, b_14);
              }
              ;
              LocalPopChoice(f_24);
            }
          else
            {
              t = e_24;
              t = a_14;
              t = k_0(t);
              if((b_14 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_14);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  if(match_cons(t, sym__2))
    {
      i_14 = ATgetArgument(t, 0);
      j_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_5 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_24 = ATgetArgument(t, 0);
            ATerm o_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(i_14, j_14);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_24 = ATgetFirst((ATermList) t);
            v_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_5;
        ;
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
        t = (ATerm) ATempty;
      }
    k_14 = t;
    t = SSL_table_put(i_14, j_14, k_14);
    t = (ATerm) ATmakeAppl(sym__2, i_14, j_14);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm z_79 (ATerm), ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL;
  q_14 = t;
  t = z_79(t);
  r_14 = t;
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(r_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_14 = ATgetFirst((ATermList) t);
        s_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(r_14, (ATerm)ATmakeAppl(sym_Scopes_0), s_14);
    t = t_14;
    {
      ATerm p_4 (ATerm t)
      {
        ATerm u_14 = NULL;
        u_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_14, u_14);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(p_4, t);
      t = q_14;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm t)
{
  ATerm s_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_80(t);
      t = v_80(t);
      ;
      LocalPopChoice(t_24);
    }
  else
    {
      t = s_24;
      t = v_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm y_79 (ATerm), ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL;
  x_14 = t;
  t = y_79(t);
  y_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_14, term_u_24);
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_24 = ATgetArgument(t, 0);
            ATerm y_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(y_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        t = (ATerm) ATempty;
      }
    z_14 = t;
    t = SSL_table_put(y_14, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(z_14), (ATerm) ATempty));
    t = x_14;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  ATerm h_15 = NULL;
  ATerm s_4 (ATerm t)
  {
    t = term_l_20;
    return(t);
  }
  t = begin_scope_1_0(s_4, t);
  {
    ATerm t_4 (ATerm t)
    {
      ATerm k_15 = NULL;
      k_15 = t;
      {
        ATerm z_24 = t;
        int a_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(a_25);
          }
        else
          {
            t = z_24;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((h_15 != NULL) && (h_15 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              h_15 = ATgetFirst((ATermList) t);
            {
              ATerm b_25 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(h_15);
        {
          ATerm c_5 (ATerm t)
          {
            ATerm d_5 (ATerm t)
            {
              ATerm l_15 = NULL;
              l_15 = t;
              t = SSL_remove(l_15);
              return(t);
            }
            t = try_1_0(d_5, t);
            return(t);
          }
          t = map_1_0(c_5, t);
          t = k_15;
          {
            ATerm e_5 (ATerm t)
            {
              t = term_l_20;
              return(t);
            }
            t = end_scope_1_0(e_5, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(d_83, t_4, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm e_83 (ATerm), ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_15 = NULL;
        t = term_p_20;
        t = get_config_0_0(t);
        m_15 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_15);
        ;
        LocalPopChoice(d_25);
      }
    else
      {
        t = c_25;
        t = term_e_25;
      }
    t = e_83(t);
    {
      ATerm g_5 (ATerm t)
      {
        ATerm f_25 = t;
        int g_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_o_20;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(g_25);
          }
        else
          {
            t = f_25;
            t = term_h_25;
          }
        return(t);
      }
      t = copy_to_1_0(g_5, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(f_5, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm o_15 = NULL;
    o_15 = t;
    if(match_string(t, "-k"))
      {
        t = o_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = o_15;
      }
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    ATerm p_15 = NULL,q_15 = NULL;
    p_15 = t;
    t = SSL_string_to_int(p_15);
    q_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), q_15);
    t = p_15;
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    t = term_i_25;
    return(t);
  }
  t = ArgOption_3_0(h_5, i_5, j_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_5 (ATerm t)
      {
        ATerm s_15 = NULL;
        s_15 = t;
        if(match_string(t, "-S"))
          {
            t = s_15;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = s_15;
          }
        return(t);
      }
      ATerm n_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_m_25;
        return(t);
      }
      ATerm p_5 (ATerm t)
      {
        t = term_n_25;
        return(t);
      }
      t = Option_3_0(l_5, n_5, p_5, t);
      ;
      LocalPopChoice(k_25);
    }
  else
    {
      t = j_25;
      {
        ATerm o_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_5 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm r_5 (ATerm t)
            {
              ATerm t_15 = NULL,u_15 = NULL;
              t_15 = t;
              t = SSL_string_to_int(t_15);
              u_15 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), u_15);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, t_15);
              return(t);
            }
            ATerm u_5 (ATerm t)
            {
              t = term_q_25;
              return(t);
            }
            t = ArgOption_3_0(q_5, r_5, u_5, t);
            ;
            LocalPopChoice(p_25);
          }
        else
          {
            t = o_25;
            {
              ATerm w_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm x_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_r_25;
                return(t);
              }
              ATerm y_5 (ATerm t)
              {
                t = term_s_25;
                return(t);
              }
              t = Option_3_0(w_5, x_5, y_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm w_15 = NULL;
    w_15 = t;
    if(match_string(t, "-o"))
      {
        t = w_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = w_15;
      }
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    ATerm x_15 = NULL;
    x_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), x_15);
    t = (ATerm) ATmakeAppl(sym_Output_1, x_15);
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    t = term_v_25;
    return(t);
  }
  t = ArgOption_3_0(z_5, a_6, b_6, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
      {
        ATerm c_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm d_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_y_25;
          return(t);
        }
        ATerm e_6 (ATerm t)
        {
          t = term_z_25;
          return(t);
        }
        t = Option_3_0(c_6, d_6, e_6, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL;
  a_16 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = a_16;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm i_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_16 = ATgetFirst((ATermList) t);
          c_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_16;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_16 = ATgetFirst((ATermList) t);
          e_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_16;
      t = h_0(t);
      t = d_16;
      t = i_0(t);
      i_16 = t;
      t = (ATerm) ATinsert(CheckATermList(e_16), i_16);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm f_6 (ATerm t)
  {
    ATerm k_16 = NULL;
    k_16 = t;
    if(match_string(t, "-i"))
      {
        t = k_16;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = k_16;
      }
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    ATerm l_16 = NULL;
    l_16 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), l_16);
    t = (ATerm) ATmakeAppl(sym_Input_1, l_16);
    return(t);
  }
  ATerm h_6 (ATerm t)
  {
    t = term_a_26;
    return(t);
  }
  t = ArgOption_3_0(f_6, g_6, h_6, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      {
        ATerm d_26 = t;
        int e_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(e_26);
          }
        else
          {
            t = d_26;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm pp_stratego_options_0_0 (ATerm t)
{
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_6 (ATerm t)
      {
        ATerm n_16 = NULL;
        n_16 = t;
        if(match_string(t, "-a"))
          {
            t = n_16;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--abstract", 0, ATtrue)))
              _fail(t);
            t = n_16;
          }
        return(t);
      }
      ATerm j_6 (ATerm t)
      {
        ATerm o_16 = NULL;
        o_16 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = o_16;
        return(t);
      }
      ATerm k_6 (ATerm t)
      {
        t = term_h_26;
        return(t);
      }
      t = Option_3_0(i_6, j_6, k_6, t);
      ;
      LocalPopChoice(g_26);
    }
  else
    {
      t = f_26;
      {
        ATerm l_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--annotations", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm m_6 (ATerm t)
        {
          ATerm p_16 = NULL;
          p_16 = t;
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = p_16;
          return(t);
        }
        ATerm n_6 (ATerm t)
        {
          t = term_i_26;
          return(t);
        }
        t = Option_3_0(l_6, m_6, n_6, t);
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL;
  q_16 = t;
  t = term_h_20;
  t = whoami_0_0(t);
  r_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), r_16), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = q_16;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_16 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_20;
  t = whoami_0_0(t);
  s_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), s_16));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm t)
{
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_76(t);
      ;
      LocalPopChoice(l_26);
    }
  else
    {
      t = k_26;
      {
        ATerm v_16 = NULL,w_16 = NULL,z_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_16 = ATgetFirst((ATermList) t);
            w_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_16;
        t = foldr_2_0(b_76, c_76, t);
        z_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_16, z_16);
        t = c_76(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL;
  a_17 = t;
  t = SSL_explode_term(a_17);
  if(match_cons(t, sym__2))
    {
      ATerm m_26 = ATgetArgument(t, 0);
      b_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_17;
  t = foldr_2_0(z_73, a_74, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_17 = NULL;
  t = times_0_0(t);
  {
    ATerm o_6 (ATerm t)
    {
      t = term_l_25;
      return(t);
    }
    ATerm p_6 (ATerm t)
    {
      ATerm d_17 = NULL,e_17 = NULL;
      if(match_cons(t, sym__2))
        {
          d_17 = ATgetArgument(t, 0);
          e_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm n_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(d_17, e_17);
            ;
            LocalPopChoice(o_26);
          }
        else
          {
            t = n_26;
            t = SSL_addr(d_17, e_17);
          }
      }
      return(t);
    }
    t = crush_2_0(o_6, p_6, t);
    c_17 = t;
    t = SSL_TicksToSeconds(c_17);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
  p_17 = t;
  if(match_cons(t, sym__2))
    {
      q_17 = ATgetArgument(t, 0);
      r_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_17;
        if((q_17 != t))
          {
            _fail(t);
          }
        t = p_17;
        ;
        LocalPopChoice(q_26);
      }
    else
      {
        t = p_26;
        t = p_17;
        {
          ATerm r_26 = t;
          int s_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_17, r_17);
              ;
              LocalPopChoice(s_26);
            }
          else
            {
              t = r_26;
              t = SSL_gtr(q_17, r_17);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_17, r_17);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  ATerm q_6 (ATerm t)
  {
    ATerm u_17 = NULL,v_17 = NULL;
    u_17 = t;
    t = term_k_5;
    t = get_config_0_0(t);
    v_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_17, term_w_8);
    t = geq_0_0(t);
    t = u_17;
    t = z_80(t);
    return(t);
  }
  t = try_1_0(q_6, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm r_6 (ATerm t)
  {
    ATerm x_17 = NULL,y_17 = NULL;
    t = run_time_0_0(t);
    x_17 = t;
    t = term_h_20;
    t = whoami_0_0(t);
    y_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), x_17), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), y_17));
    t = (ATerm) ATmakeAppl(sym__2, term_b_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_26), x_17), term_m_9), y_17));
    return(t);
  }
  t = if_verbose1_1_0(r_6, t);
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
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_26);
    }
  else
    {
      t = u_26;
      {
        ATerm u_6 (ATerm t)
        {
          ATerm x_26 = t;
          int y_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(y_26);
            }
          else
            {
              t = x_26;
              {
                ATerm z_26 = t;
                int a_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(a_27);
                  }
                else
                  {
                    t = z_26;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(u_6, t);
      }
    }
  t = f_85(t);
  return(t);
}
ATerm map_1_0 (ATerm k_69 (ATerm), ATerm t)
{
  ATerm a_18 (ATerm t)
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(c_27);
      }
    else
      {
        t = b_27;
        t = Cons_2_0(k_69, a_18, t);
      }
    return(t);
  }
  t = a_18(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_18 = ATgetFirst((ATermList) t);
      d_18 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_18 = NULL,i_18 = NULL;
        t = d_18;
        t = g_0(t);
        h_18 = t;
        t = c_18;
        t = e_0(t);
        i_18 = t;
        t = d_18;
        {
          ATerm v_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(h_18), i_18);
            return(t);
          }
          t = reverse_acc_2_0(e_0, v_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_20;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm w_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, w_6, t);
  return(t);
}
ATerm Program_1_0 (ATerm i_62 (ATerm), ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL;
  m_18 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_18);
  j_18 = t;
  t = k_18;
  t = i_62(t);
  l_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, l_18), j_18);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_27);
    }
  else
    {
      t = d_27;
      {
        ATerm x_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(x_6, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_f_27;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm z_6 (ATerm t)
    {
      ATerm p_18 = NULL;
      p_18 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, p_18), term_g_27);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(z_6, t);
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
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL;
  t_18 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      r_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_18);
  q_18 = t;
  t = r_18;
  t = j_62(t);
  s_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, s_18), q_18);
  return(t);
}
ATerm fetch_1_0 (ATerm v_69 (ATerm), ATerm t)
{
  ATerm w_18 (ATerm t)
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(v_69, _id, t);
        ;
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        t = Cons_2_0(_id, w_18, t);
      }
    return(t);
  }
  t = w_18(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm a_86 (ATerm), ATerm t)
{
  t = fetch_1_0(a_86, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL;
  y_18 = t;
  {
    ATerm j_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_18;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_27 = ATgetFirst((ATermList) t);
                ATerm m_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_18;
          }
        ;
        LocalPopChoice(k_27);
      }
    else
      {
        t = j_27;
        t = (ATerm) ATinsert(ATempty, y_18);
      }
    z_18 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), z_18);
    t = y_18;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm f_80 (ATerm), ATerm t)
{
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_80(t);
      ;
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_27 = t;
  int q_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_7 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm b_7 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_t_27;
        return(t);
      }
      ATerm c_7 (ATerm t)
      {
        t = term_u_27;
        return(t);
      }
      t = Option_3_0(a_7, b_7, c_7, t);
      ;
      LocalPopChoice(q_27);
    }
  else
    {
      t = p_27;
      {
        ATerm g_7 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm h_7 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_v_27;
          return(t);
        }
        ATerm j_7 (ATerm t)
        {
          t = term_w_27;
          return(t);
        }
        t = Option_3_0(g_7, h_7, j_7, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
  if(match_cons(t, sym__3))
    {
      f_19 = ATgetArgument(t, 0);
      g_19 = ATgetArgument(t, 1);
      h_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_19, g_19);
  {
    ATerm x_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_27 = ATgetArgument(t, 0);
            ATerm a_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(f_19, g_19);
        ;
        LocalPopChoice(y_27);
      }
    else
      {
        t = x_27;
        t = (ATerm) ATempty;
      }
    i_19 = t;
    t = SSL_table_put(f_19, g_19, (ATerm) ATinsert(CheckATermList(i_19), h_19));
    t = (ATerm) ATmakeAppl(sym__3, f_19, g_19, h_19);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm f_87 (ATerm), ATerm t)
{
  ATerm n_19 = NULL;
  t = term_h_20;
  t = f_87(t);
  n_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_28, term_c_28, n_19);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
  p_19 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = p_19;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm u_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_19 = ATgetFirst((ATermList) t);
          r_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_19;
      t = a_0(t);
      t = term_h_20;
      t = c_0(t);
      u_19 = t;
      t = (ATerm) ATinsert(CheckATermList(r_19), u_19);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm l_7 (ATerm t)
  {
    ATerm x_19 = NULL;
    x_19 = t;
    if(match_string(t, "--help"))
      {
        t = x_19;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = x_19;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = x_19;
          }
      }
    return(t);
  }
  ATerm n_7 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_d_28;
    return(t);
  }
  ATerm o_7 (ATerm t)
  {
    t = term_e_28;
    return(t);
  }
  t = Option_3_0(l_7, n_7, o_7, t);
  return(t);
}
ATerm Cons_2_0 (ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL;
  d_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_19 = ATgetFirst((ATermList) t);
      a_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_20);
  y_19 = t;
  t = z_19;
  t = c_57(t);
  b_20 = t;
  t = a_20;
  t = d_57(t);
  c_20 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(c_20), b_20), y_19);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_87 (ATerm), ATerm t)
{
  ATerm j_20 = NULL;
  j_20 = t;
  {
    ATerm r_7 (ATerm t)
    {
      t = term_f_28;
      t = d_87(t);
      return(t);
    }
    t = try_1_0(r_7, t);
    t = j_20;
    {
      ATerm s_7 (ATerm t)
      {
        ATerm k_20 = NULL;
        k_20 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), k_20);
        t = (ATerm) ATmakeAppl(sym_Program_1, k_20);
        return(t);
      }
      ATerm t_7 (ATerm t)
      {
        ATerm g_28 = t;
        int h_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_28 = t;
            int j_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(j_28);
              }
            else
              {
                t = i_28;
                t = d_87(t);
                t = Cons_2_0(_id, t_7, t);
              }
            ;
            LocalPopChoice(h_28);
          }
        else
          {
            t = g_28;
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
      t = Cons_2_0(s_7, t_7, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm c_87 (ATerm), ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  t_20 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = t_20;
  {
    ATerm u_7 (ATerm t)
    {
      ATerm k_28 = t;
      int l_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_87(t);
          ;
          LocalPopChoice(l_28);
        }
      else
        {
          t = k_28;
          {
            ATerm m_28 = t;
            int n_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(n_28);
              }
            else
              {
                t = m_28;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_7, t);
    {
      ATerm v_7 (ATerm t)
      {
        ATerm o_28 = t;
        int p_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_21 = NULL;
            f_21 = t;
            {
              ATerm q_28 = t;
              int r_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_21;
                  {
                    ATerm s_28 = t;
                    int t_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_w_26;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(t_28);
                      }
                    else
                      {
                        t = s_28;
                        {
                          ATerm w_7 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(w_7, t);
                        }
                      }
                    t = f_21;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(r_28);
                }
              else
                {
                  t = q_28;
                  t = term_s_27;
                  t = get_config_0_0(t);
                  t = f_21;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(p_28);
          }
        else
          {
            t = o_28;
            {
              ATerm x_7 (ATerm t)
              {
                ATerm b_8 (ATerm t)
                {
                  if(((u_20 != NULL) && (u_20 != t)))
                    _fail(t);
                  else
                    u_20 = t;
                  return(t);
                }
                t = Undefined_1_0(b_8, t);
                return(t);
              }
              t = option_defined_1_0(x_7, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(u_20)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_b_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_20)), term_u_28));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(v_7, t);
      v_20 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = v_20;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm t)
{
  ATerm e_15 = NULL;
  t = parse_options_1_0(h_85, t);
  e_15 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), e_15);
  t = e_15;
  t = j_85(t);
  {
    ATerm v_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_85, t);
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
              t = k_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(y_28);
            }
          else
            {
              t = x_28;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm t)
{
  t = option_wrap_4_0(l_85, default_usage_0_0, _id, m_85, t);
  return(t);
}
ATerm pp_stratego_0_0 (ATerm t)
{
  ATerm c_8 (ATerm t)
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_stratego_options_0_0(t);
        ;
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm d_8 (ATerm t)
  {
    ATerm f_8 (ATerm t)
    {
      ATerm b_29 = t;
      int c_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_21 = NULL;
          i_21 = t;
          t = term_d_29;
          t = get_config_0_0(t);
          t = i_21;
          ;
          LocalPopChoice(c_29);
        }
      else
        {
          t = b_29;
          {
            ATerm i_8 (ATerm t)
            {
              t = term_e_29;
              return(t);
            }
            t = xtc_transform_1_0(i_8, t);
          }
        }
      {
        ATerm o_8 (ATerm t)
        {
          t = term_f_29;
          return(t);
        }
        t = xtc_transform_1_0(o_8, t);
        {
          ATerm g_29 = t;
          int h_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_21 = NULL;
              k_21 = t;
              t = term_i_29;
              t = get_config_0_0(t);
              t = k_21;
              ;
              LocalPopChoice(h_29);
            }
          else
            {
              t = g_29;
              {
                ATerm p_8 (ATerm t)
                {
                  t = term_j_29;
                  return(t);
                }
                t = xtc_transform_1_0(p_8, t);
              }
            }
          {
            ATerm q_8 (ATerm t)
            {
              t = term_k_29;
              return(t);
            }
            ATerm r_8 (ATerm t)
            {
              ATerm n_21 = NULL,o_21 = NULL;
              t = pass_verbose_0_0(t);
              n_21 = t;
              t = term_l_29;
              t = xtc_find_0_0(t);
              o_21 = t;
              t = (ATerm) ATinsert(ATinsert(CheckATermList(n_21), o_21), term_m_29);
              return(t);
            }
            t = xtc_transform_2_0(q_8, r_8, t);
            {
              ATerm t_8 (ATerm t)
              {
                t = term_n_29;
                return(t);
              }
              t = xtc_transform_2_0(t_8, pass_verbose_0_0, t);
            }
          }
        }
      }
      return(t);
    }
    t = xtc_io_1_0(f_8, t);
    return(t);
  }
  t = option_wrap_2_0(c_8, d_8, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pp_stratego_0_0(t);
  return(t);
}
