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
ATerm term_m_30;
ATerm term_h_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_s_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_v_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_v_26;
ATerm term_f_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_f_25;
ATerm term_q_24;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_w_21;
ATerm term_j_21;
ATerm term_v_18;
ATerm term_a_18;
ATerm term_r_17;
ATerm term_o_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_e_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_g_14;
ATerm term_c_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_v_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_v_10;
ATerm term_h_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_r_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_l_8;
ATerm term_i_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_a_8;
ATerm term_y_7;
ATerm term_w_7;
ATerm term_u_7;
ATerm term_q_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_r_6;
ATerm term_o_6;
ATerm term_g_6;
void init_constant_terms (void)
{
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_6, term_o_6, term_a_7);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_7, term_d_7, term_e_7);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_7, term_n_7, term_o_7);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_7, term_w_7, term_y_7);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_8, term_d_8, term_e_8);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_8, term_i_8, term_l_8);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_8, term_p_8, term_r_8);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_8, term_b_9, term_c_9);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_9, term_g_9, term_l_9);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_9, term_o_9, term_p_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_9, term_s_9, term_u_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_9, term_d_10, term_e_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_10, term_e_11, term_f_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_11, term_m_11, term_n_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_v_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_11, term_b_12, term_c_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_f_12, term_g_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_12, term_j_12, term_l_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_12, term_p_12, term_q_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_x_12, term_y_12);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_g_13, term_l_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_13, term_o_13, term_p_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_s_13, term_v_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_z_13, term_c_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_14, term_p_14, term_q_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_x_14, term_y_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_e_15, term_m_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_p_15, term_q_15);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_25);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym__3, term_n_28, term_o_28, term_g_17);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("C.tbl", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
}
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm v_65 (ATerm), ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm b_70 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm k_64 (ATerm), ATerm);
ATerm assert_1_0 (ATerm g_80 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm f_62 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm f_81 (ATerm), ATerm);
ATerm pass_v_verbose_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm h_81 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm g_81 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm i_81 (ATerm), ATerm);
ATerm union_1_0 (ATerm s_73 (ATerm), ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm r_81 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm i_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm c_79 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_sglr_1_0 (ATerm s_93 (ATerm), ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm d_80 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm c_80 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm h_83 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm i_83 (ATerm), ATerm);
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
ATerm if_verbose1_1_0 (ATerm d_81 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm j_85 (ATerm), ATerm);
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
ATerm parse_options_p__1_0 (ATerm h_87 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm g_87 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,p_0 = NULL;
  t = term_g_6;
  {
    ATerm h_6 = t;
    int j_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
        {
          ATerm k_6 = t;
          int m_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_0 = NULL;
              t = eval_config_0_0(t);
              s_0 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), s_0);
              t = s_0;
              ;
              LocalPopChoice(m_6);
            }
          else
            {
              t = k_6;
            }
        }
        ;
        LocalPopChoice(j_6);
      }
    else
      {
        t = h_6;
        t = term_o_6;
      }
    b_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_o_6);
    {
      ATerm p_6 = t;
      int q_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(b_0, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(q_6);
        }
      else
        {
          t = p_6;
          t = SSL_subtr(b_0, (ATerm) ATmakeInt(1));
        }
      p_0 = t;
      t = SSL_int_to_string(p_0);
      f_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, f_0), term_g_6);
    }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL;
  g_1 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = g_1;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          h_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(h_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm v_65 (ATerm), ATerm t)
{
  ATerm q_1 = NULL,w_1 = NULL,x_1 = NULL;
  if(match_cons(t, sym__2))
    {
      q_1 = ATgetArgument(t, 0);
      w_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_1, term_r_6);
  t = open_stream_0_0(t);
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_1, w_1);
  t = v_65(t);
  t = fclose_0_0(t);
  t = w_1;
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL;
  z_1 = t;
  t = xtc_new_file_0_0(t);
  a_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_2, z_1);
  {
    ATerm n_0 (ATerm t)
    {
      ATerm b_2 = NULL,f_2 = NULL,g_2 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm s_6 = ATgetArgument(t, 0);
          if(match_cons(s_6, sym_Stream_1))
            {
              b_2 = ATgetArgument(s_6, 0);
            }
          else
            _fail(t);
          f_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_write_term_to_stream_baf(b_2, f_2);
      g_2 = t;
      t = (ATerm) ATmakeAppl(sym_Stream_1, g_2);
      return(t);
    }
    t = WriteToFile_1_0(n_0, t);
    t = SSL_close_file(a_2);
    t = (ATerm) ATmakeAppl(sym_FILE_1, a_2);
  }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(e_84, f_84, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm h_2 = NULL;
  ATerm o_0 (ATerm t)
  {
    ATerm k_2 = NULL;
    k_2 = t;
    t = SSL_explode_string(k_2);
    return(t);
  }
  t = map_1_0(o_0, t);
  t = concat_0_0(t);
  h_2 = t;
  t = SSL_implode_string(h_2);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL,k_3 = NULL;
  g_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      h_3 = ATgetArgument(t, 0);
      {
        ATerm a_1 = NULL;
        t = SSL_int_to_string(h_3);
        a_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_6), a_1), term_t_6);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm m_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          h_3 = ATgetArgument(t, 0);
          i_3 = ATgetArgument(t, 1);
          k_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(i_3);
      m_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_3), term_w_6), m_1), term_v_6), h_3);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm b_70 (ATerm), ATerm t)
{
  ATerm o_3 = NULL;
  ATerm q_0 (ATerm t)
  {
    t = b_70(t);
    if(((o_3 != NULL) && (o_3 != t)))
      _fail(t);
    else
      o_3 = t;
    return(t);
  }
  t = fetch_1_0(q_0, t);
  t = not_null(o_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm q_3 = NULL;
  q_3 = t;
  {
    ATerm x_6 = t;
    int y_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_15), term_n_15), term_z_14), term_s_14), term_g_14), term_w_13), term_q_13), term_m_13), term_z_12), term_v_12), term_n_12), term_h_12), term_d_12), term_y_11), term_o_11), term_g_11), term_h_10), term_v_9), term_q_9), term_m_9), term_d_9), term_u_8), term_n_8), term_f_8), term_a_8), term_q_7), term_h_7), term_b_7);
        {
          ATerm r_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm u_15 = ATgetArgument(t, 0);
                if((q_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm a_16 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(r_0, t);
        }
        ;
        LocalPopChoice(y_6);
      }
    else
      {
        t = x_6;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, q_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm u_3 = NULL;
  u_3 = t;
  {
    ATerm b_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_4 = NULL,r_1 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm i_16 = ATgetArgument(t, 0);
            f_4 = ATgetArgument(t, 1);
            {
              ATerm j_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = f_4;
        {
          ATerm m_16 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_16;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          r_1 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_1), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, r_1), term_p_16));
        }
        ;
        LocalPopChoice(c_16);
      }
    else
      {
        t = b_16;
      }
    t = u_3;
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
  ATerm o_4 = NULL,p_4 = NULL;
  o_4 = t;
  t = fork_0_0(t);
  p_4 = t;
  {
    ATerm q_16 = t;
    int s_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = o_4;
        t = k_64(t);
        ;
        LocalPopChoice(s_16);
      }
    else
      {
        t = q_16;
        t = SSL_waitpid(p_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm t_16 = ATgetArgument(t, 0);
            if(((ATgetType(t_16) != AT_INT) || (ATgetInt((ATermInt) t_16) != 0)))
              _fail(t);
            {
              ATerm u_16 = ATgetArgument(t, 1);
            }
            {
              ATerm v_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = o_4;
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm g_80 (ATerm), ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL,y_4 = NULL,z_4 = NULL;
  if(match_cons(t, sym__2))
    {
      u_4 = ATgetArgument(t, 0);
      v_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_80(t);
  w_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_4, u_4, v_4);
  t = table_push_0_0(t);
  {
    ATerm w_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(w_4, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(x_16);
      }
    else
      {
        t = w_16;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_4 = ATgetFirst((ATermList) t);
        z_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(w_4, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(z_4), (ATerm) ATinsert(CheckATermList(y_4), u_4)));
    t = (ATerm) ATmakeAppl(sym__2, u_4, v_4);
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm a_6 (ATerm m_5, ATerm t)
  {
    t = m_5;
    {
      ATerm y_16 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm z_16 = ATgetArgument(t, 0);
              ATerm a_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = y_16;
        }
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
      t = (ATerm) ATmakeAppl(sym__2, m_5, term_r_6);
      t = open_file_0_0(t);
    }
    return(t);
  }
  ATerm b_6 (ATerm q_5, ATerm r_5, ATerm t_5, ATerm t)
  {
    t = SSL_open_file(q_5, r_5);
    return(t);
  }
  ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL;
  x_5 = t;
  if(match_cons(t, sym__2))
    {
      y_5 = ATgetArgument(t, 0);
      z_5 = ATgetArgument(t, 1);
      {
        ATerm b_17 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_6(x_5, t);
            ;
            LocalPopChoice(c_17);
          }
        else
          {
            t = b_17;
            t = b_6(y_5, z_5, x_5, t);
          }
      }
    }
  else
    {
      t = a_6(x_5, t);
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
  ATerm f_6 = NULL;
  t = term_g_17;
  t = new_0_0(t);
  f_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_6, term_h_17);
  t = conc_strings_0_0(t);
  {
    ATerm j_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_6 = NULL;
        i_6 = t;
        t = SSL_access(i_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(l_17);
      }
    else
      {
        t = j_17;
      }
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm l_6 = NULL;
  t = new_file_0_0(t);
  l_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_6, term_r_6);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, l_6, term_g_17);
  {
    ATerm t_0 (ATerm t)
    {
      t = term_o_17;
      return(t);
    }
    t = assert_1_0(t_0, t);
    t = l_6;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL;
  f_7 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm m_3 = NULL,p_3 = NULL,c_4 = NULL,g_4 = NULL;
      t = f_7;
      t = xtc_new_file_0_0(t);
      m_3 = t;
      t = m_0(t);
      p_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_3, (ATerm) ATinsert(ATinsert(ATempty, m_3), term_r_17));
      {
        ATerm s_17 = t;
        int t_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm w_17 = ATgetArgument(t, 0);
                ATerm x_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = p_3;
            {
              ATerm u_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, m_3), term_r_17);
                return(t);
              }
              t = at_end_1_0(u_0, t);
            }
            ;
            LocalPopChoice(t_17);
          }
        else
          {
            t = s_17;
            {
              ATerm a_4 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, p_3, (ATerm) ATinsert(ATinsert(ATempty, m_3), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm z_17 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) z_17) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  a_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = a_4;
              t = concat_0_0(t);
            }
          }
        c_4 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        g_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_4, c_4);
        {
          ATerm v_0 (ATerm t)
          {
            t = SSL_execvp(g_4, c_4);
            return(t);
          }
          t = fork_and_wait_1_0(v_0, t);
          t = SSL_close_file(m_3);
          t = (ATerm) ATmakeAppl(sym_FILE_1, m_3);
        }
      }
    }
  else
    {
      ATerm n_4 = NULL,t_4 = NULL,g_5 = NULL,h_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          g_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_7;
      t = xtc_new_file_0_0(t);
      n_4 = t;
      t = m_0(t);
      t_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_4), term_r_17), g_7), term_a_18));
      {
        ATerm b_18 = t;
        int d_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm g_18 = ATgetArgument(t, 0);
                ATerm h_18 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = t_4;
            {
              ATerm w_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_4), term_r_17), g_7), term_a_18);
                return(t);
              }
              t = at_end_1_0(w_0, t);
            }
            ;
            LocalPopChoice(d_18);
          }
        else
          {
            t = b_18;
            {
              ATerm f_5 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, t_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_4), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), g_7), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm n_18 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) n_18) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  f_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_5;
              t = concat_0_0(t);
            }
          }
        g_5 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        h_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_5, g_5);
        {
          ATerm x_0 (ATerm t)
          {
            t = SSL_execvp(h_5, g_5);
            return(t);
          }
          t = fork_and_wait_1_0(x_0, t);
          t = SSL_close_file(n_4);
          t = (ATerm) ATmakeAppl(sym_FILE_1, n_4);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm f_62 (ATerm), ATerm t)
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
  t = f_62(t);
  l_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, l_7), j_7);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm f_81 (ATerm), ATerm t)
{
  ATerm o_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_7 = NULL,s_7 = NULL;
      p_7 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm r_18 = t;
        int u_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_5 = NULL;
            t = eval_config_0_0(t);
            n_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_5);
            t = n_5;
            ;
            LocalPopChoice(u_18);
          }
        else
          {
            t = r_18;
          }
        s_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_7, term_n_7);
        t = geq_0_0(t);
        t = p_7;
        t = f_81(t);
      }
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = o_18;
    }
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  {
    ATerm y_0 (ATerm t)
    {
      t = (ATerm) ATinsert(ATempty, term_v_18);
      return(t);
    }
    t = if_verbose3_1_0(y_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm h_81 (ATerm), ATerm t)
{
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_7 = NULL,b_8 = NULL;
      z_7 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm y_18 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_6 = NULL;
            t = eval_config_0_0(t);
            c_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), c_6);
            t = c_6;
            ;
            LocalPopChoice(b_19);
          }
        else
          {
            t = y_18;
          }
        b_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_8, term_p_14);
        t = geq_0_0(t);
        t = z_7;
        t = h_81(t);
      }
      ;
      LocalPopChoice(x_18);
    }
  else
    {
      t = w_18;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm g_81 (ATerm), ATerm t)
{
  ATerm c_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_8 = NULL,j_8 = NULL;
      h_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm e_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_6 = NULL;
            t = eval_config_0_0(t);
            n_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_6);
            t = n_6;
            ;
            LocalPopChoice(f_19);
          }
        else
          {
            t = e_19;
          }
        j_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_8, term_d_10);
        t = geq_0_0(t);
        t = h_8;
        t = g_81(t);
      }
      ;
      LocalPopChoice(d_19);
    }
  else
    {
      t = c_19;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm i_81 (ATerm), ATerm t)
{
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_8 = NULL,m_8 = NULL;
      k_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm p_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_7 = NULL;
            t = eval_config_0_0(t);
            r_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_7);
            t = r_7;
            ;
            LocalPopChoice(t_19);
          }
        else
          {
            t = p_19;
          }
        m_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_8, term_w_7);
        t = geq_0_0(t);
        t = k_8;
        t = i_81(t);
      }
      ;
      LocalPopChoice(o_19);
    }
  else
    {
      t = n_19;
    }
  return(t);
}
ATerm union_1_0 (ATerm s_73 (ATerm), ATerm t)
{
  ATerm q_8 = NULL,s_8 = NULL;
  if(match_cons(t, sym__2))
    {
      s_8 = ATgetArgument(t, 0);
      q_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_8;
  {
    ATerm t_8 (ATerm t)
    {
      ATerm w_19 = t;
      int x_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = q_8;
          ;
          LocalPopChoice(x_19);
        }
      else
        {
          t = w_19;
          {
            ATerm y_19 = t;
            int z_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_7 = NULL,v_7 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    t_7 = ATgetFirst((ATermList) t);
                    v_7 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = q_8;
                {
                  ATerm z_0 (ATerm t)
                  {
                    ATerm x_7 = NULL;
                    x_7 = t;
                    t = (ATerm) ATmakeAppl(sym__2, t_7, x_7);
                    t = s_73(t);
                    return(t);
                  }
                  t = fetch_1_0(z_0, t);
                  t = v_7;
                  t = t_8(t);
                }
                ;
                LocalPopChoice(z_19);
              }
            else
              {
                t = y_19;
                t = Cons_2_0(_id, t_8, t);
              }
          }
        }
      return(t);
    }
    t = t_8(t);
  }
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL;
  if(match_cons(t, sym__3))
    {
      w_8 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
      y_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_8, x_8);
  {
    ATerm a_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_20 = ATgetArgument(t, 0);
            ATerm h_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(w_8, x_8);
        ;
        LocalPopChoice(c_20);
      }
    else
      {
        t = a_20;
        t = (ATerm) ATempty;
      }
    z_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_8, y_8);
    {
      ATerm b_1 (ATerm t)
      {
        ATerm e_9 = NULL;
        if(match_cons(t, sym__2))
          {
            e_9 = ATgetArgument(t, 0);
            if((e_9 != ATgetArgument(t, 1)))
              {
                _fail(ATgetArgument(t, 1));
              }
          }
        else
          _fail(t);
        return(t);
      }
      t = union_1_0(b_1, t);
      a_9 = t;
      t = SSL_table_put(w_8, x_8, a_9);
      t = (ATerm) ATmakeAppl(sym__3, w_8, x_8, y_8);
    }
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm r_81 (ATerm), ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL;
  if(match_cons(t, sym__2))
    {
      i_9 = ATgetArgument(t, 0);
      h_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_9;
  {
    ATerm c_1 (ATerm t)
    {
      ATerm j_9 = NULL,k_9 = NULL;
      if(match_cons(t, sym__2))
        {
          j_9 = ATgetArgument(t, 0);
          k_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, i_9, j_9, k_9);
      t = r_81(t);
      return(t);
    }
    t = map_1_0(c_1, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_9 (ATerm t_9, ATerm t)
  {
    t = SSL_fclose(t_9);
    return(t);
  }
  ATerm w_9 = NULL,x_9 = NULL;
  x_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_9 = ATgetArgument(t, 0);
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_9);
            ;
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            t = z_9(x_9, t);
          }
      }
    }
  else
    {
      t = z_9(x_9, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_10 = NULL;
  t = SSL_stdin_stream();
  a_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_10 = NULL;
  t = SSL_stdout_stream();
  b_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_10 = NULL;
  t = SSL_stderr_stream();
  c_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_10);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_20 = ATgetArgument(t, 0);
      ATerm p_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_10 = NULL,g_10 = NULL;
        f_10 = t;
        t = SSL_explode_term(f_10);
        if(match_cons(t, sym__2))
          {
            ATerm u_20 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_20) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm v_20 = ATgetArgument(t, 1);
              if(((ATgetType(v_20) == AT_LIST) && !(ATisEmpty(v_20))))
                {
                  g_10 = ATgetFirst((ATermList) v_20);
                  {
                    ATerm w_20 = (ATerm) ATgetNext((ATermList) v_20);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_10;
        if(match_cons(t, sym_stderr_0))
          {
            t = g_10;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = g_10;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = g_10;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(r_20);
      }
    else
      {
        t = q_20;
        {
          ATerm x_20 = t;
          int e_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL;
              ATerm d_1 (ATerm t)
              {
                ATerm l_10 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    l_10 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = l_10;
                return(t);
              }
              t = _2_0(d_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  i_10 = ATgetArgument(t, 0);
                  j_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(i_10, j_10);
              k_10 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, k_10);
              ;
              LocalPopChoice(e_21);
            }
          else
            {
              t = x_20;
              {
                ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL;
                ATerm e_1 (ATerm t)
                {
                  ATerm p_10 = NULL;
                  p_10 = t;
                  t = SSL_is_string(p_10);
                  return(t);
                }
                t = _2_0(e_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    m_10 = ATgetArgument(t, 0);
                    n_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(m_10, n_10);
                o_10 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, o_10);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL;
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_10 = NULL;
      t_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_10, term_j_21);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(g_21);
    }
  else
    {
      t = f_21;
      {
        ATerm u_10 = NULL;
        u_10 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_10), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = u_10;
        _fail(t);
      }
    }
  q_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(s_10);
  r_10 = t;
  t = q_10;
  t = fclose_0_0(t);
  t = r_10;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_10 = NULL;
      w_10 = t;
      t = SSL_access(w_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(n_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = m_21;
      {
        ATerm o_21 = t;
        int p_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_11 = NULL;
            ATerm q_21 = t;
            if((PushChoice() == 0))
              {
                ATerm x_10 = NULL;
                x_10 = t;
                t = SSL_access(x_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_21;
              }
            q_11 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_11), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = q_11;
            ;
            LocalPopChoice(p_21);
          }
        else
          {
            t = o_21;
            {
              ATerm a_12 = NULL;
              a_12 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, a_12), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = a_12;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL;
  y_10 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm r_12 = NULL;
      r_12 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_12), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
      t = r_12;
      return(t);
    }
    t = if_verbose5_1_0(f_1, t);
    {
      ATerm r_21 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, y_10));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_21;
        }
      z_10 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, y_10));
      t = z_10;
      {
        ATerm i_1 (ATerm t)
        {
          ATerm h_13 = NULL;
          h_13 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_13), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
          t = h_13;
          return(t);
        }
        t = if_verbose4_1_0(i_1, t);
        t = read_repository_file_0_0(t);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm b_11 = NULL;
            b_11 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
            t = b_11;
            return(t);
          }
          t = if_verbose6_1_0(j_1, t);
          a_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_w_21, a_11);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm k_1 (ATerm t)
            {
              ATerm c_11 = NULL;
              c_11 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
              t = c_11;
              return(t);
            }
            t = if_verbose6_1_0(k_1, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, y_10), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_w_21, (ATerm)ATmakeAppl(sym_Imported_1, y_10), (ATerm) ATempty);
            {
              ATerm l_1 (ATerm t)
              {
                ATerm d_11 = NULL;
                d_11 = t;
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
                t = d_11;
                return(t);
              }
              t = if_verbose4_1_0(l_1, t);
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
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
      {
        ATerm z_21 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              t = filter_1_0(i_77, t);
              return(t);
            }
            t = Cons_2_0(i_77, n_1, t);
            ;
            LocalPopChoice(b_22);
          }
        else
          {
            t = z_21;
            {
              ATerm h_11 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm c_22 = ATgetFirst((ATermList) t);
                  h_11 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = h_11;
              t = filter_1_0(i_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm c_79 (ATerm), ATerm t)
{
  ATerm j_11 (ATerm t)
  {
    ATerm e_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_79(t);
        t = j_11(t);
        ;
        LocalPopChoice(g_22);
      }
    else
      {
        t = e_22;
      }
    return(t);
  }
  t = j_11(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm l_22 = t;
        int n_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_14 = NULL;
            t = eval_config_0_0(t);
            a_14 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), a_14);
            t = a_14;
            ;
            LocalPopChoice(n_22);
          }
        else
          {
            t = l_22;
          }
      }
      ;
      LocalPopChoice(i_22);
    }
  else
    {
      t = h_22;
      {
        ATerm o_22 = t;
        int p_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(p_22);
          }
        else
          {
            t = o_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm k_11 = NULL;
  ATerm o_1 (ATerm t)
  {
    ATerm b_14 = NULL;
    b_14 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_14), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
    t = b_14;
    return(t);
  }
  t = if_verbose5_1_0(o_1, t);
  k_11 = t;
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        {
          ATerm l_11 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          l_11 = t;
          {
            ATerm p_1 (ATerm t)
            {
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
              t = filter_1_0(xtc_read_0_0, t);
              {
                ATerm t_22 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_22;
                  }
              }
              return(t);
            }
            t = repeat_1_0(p_1, t);
            t = l_11;
          }
        }
      }
    t = k_11;
    {
      ATerm s_1 (ATerm t)
      {
        ATerm k_14 = NULL;
        k_14 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_14), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
        t = k_14;
        return(t);
      }
      t = if_verbose5_1_0(s_1, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 (ATerm t)
      {
        ATerm r_14 = NULL;
        r_14 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_14), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
        t = r_14;
        return(t);
      }
      t = if_verbose5_1_0(t_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm x_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
            if(match_cons(t, sym__2))
              {
                f_15 = ATgetArgument(t, 0);
                g_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, f_15));
            {
              ATerm u_1 (ATerm t)
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
              t = fetch_1_0(u_1, t);
              t = not_null(h_15);
            }
            ;
            LocalPopChoice(y_22);
          }
        else
          {
            t = x_22;
            {
              ATerm s_15 = NULL,t_15 = NULL;
              s_15 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, s_15));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm z_22 = ATgetFirst((ATermList) t);
                  if(match_cons(z_22, sym__2))
                    {
                      ATerm e_23 = ATgetArgument(z_22, 0);
                      t_15 = ATgetArgument(z_22, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm d_23 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = t_15;
            }
          }
        {
          ATerm v_1 (ATerm t)
          {
            ATerm e_16 = NULL;
            e_16 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_16), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
            t = e_16;
            return(t);
          }
          t = if_verbose5_1_0(v_1, t);
        }
      }
      ;
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      {
        ATerm p_11 = NULL;
        p_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), p_11), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_23), p_11), term_h_23);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm f_20 = NULL;
            t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
            {
              ATerm c_2 (ATerm t)
              {
                ATerm d_20 = NULL,e_20 = NULL;
                d_20 = t;
                t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), d_20);
                e_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, d_20, e_20);
                return(t);
              }
              t = map_1_0(c_2, t);
              f_20 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_20), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
              t = f_20;
            }
            return(t);
          }
          t = if_verbose5_1_0(y_1, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm xtc_sglr_1_0 (ATerm s_93 (ATerm), ATerm t)
{
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_23 = t;
      int m_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(m_23);
        }
      else
        {
          t = l_23;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(k_23);
      {
        ATerm d_2 (ATerm t)
        {
          t = term_n_23;
          return(t);
        }
        ATerm e_2 (ATerm t)
        {
          ATerm t_11 = NULL,u_11 = NULL;
          t = term_g_17;
          t = s_93(t);
          t = xtc_find_0_0(t);
          t_11 = t;
          t = term_g_17;
          t = pass_v_verbose_0_0(t);
          u_11 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_11), t_11), term_p_23), term_o_23);
          return(t);
        }
        t = xtc_transform_file_2_0(d_2, e_2, t);
      }
    }
  else
    {
      t = j_23;
      {
        ATerm i_2 (ATerm t)
        {
          t = term_n_23;
          return(t);
        }
        ATerm j_2 (ATerm t)
        {
          ATerm w_11 = NULL,x_11 = NULL;
          t = term_g_17;
          t = s_93(t);
          t = xtc_find_0_0(t);
          w_11 = t;
          t = term_g_17;
          t = pass_v_verbose_0_0(t);
          x_11 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_11), w_11), term_p_23), term_o_23);
          return(t);
        }
        t = xtc_transform_term_2_0(i_2, j_2, t);
      }
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm k_12 = NULL,m_12 = NULL;
  k_12 = t;
  if(match_cons(t, sym_FILE_1))
    {
      m_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_22 = NULL;
        t = k_12;
        t = k_0(t);
        f_22 = t;
        {
          ATerm t_23 = t;
          int v_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(v_23);
            }
          else
            {
              t = t_23;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(m_12, f_22);
          t = (ATerm) ATmakeAppl(sym_FILE_1, m_12);
        }
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        {
          ATerm w_23 = t;
          int x_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_22 = NULL;
              t = k_12;
              t = k_0(t);
              j_22 = t;
              {
                ATerm z_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm a_24 = t;
                    int b_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(b_24);
                      }
                    else
                      {
                        t = a_24;
                        {
                          ATerm d_24 = t;
                          int e_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(e_24);
                            }
                          else
                            {
                              t = d_24;
                              {
                                ATerm k_22 = NULL;
                                k_22 = t;
                                if((m_12 != t))
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
                    t = z_23;
                  }
                t = SSL_copy(m_12, j_22);
                t = (ATerm) ATmakeAppl(sym_FILE_1, m_12);
              }
              ;
              LocalPopChoice(x_23);
            }
          else
            {
              t = w_23;
              t = k_12;
              t = k_0(t);
              if((m_12 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_12);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
  if(match_cons(t, sym__2))
    {
      s_12 = ATgetArgument(t, 0);
      t_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_22 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm j_24 = ATgetArgument(t, 0);
            ATerm k_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(s_12, t_12);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm l_24 = ATgetFirst((ATermList) t);
            m_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_22;
        ;
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        t = (ATerm) ATempty;
      }
    u_12 = t;
    t = SSL_table_put(s_12, t_12, u_12);
    t = (ATerm) ATmakeAppl(sym__2, s_12, t_12);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm d_80 (ATerm), ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,e_13 = NULL;
  a_13 = t;
  t = d_80(t);
  b_13 = t;
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(b_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_13 = ATgetFirst((ATermList) t);
        c_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(b_13, (ATerm)ATmakeAppl(sym_Scopes_0), c_13);
    t = e_13;
    {
      ATerm l_2 (ATerm t)
      {
        ATerm f_13 = NULL;
        f_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_13, f_13);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(l_2, t);
      t = a_13;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm t)
{
  ATerm o_24 = t;
  int p_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_80(t);
      t = z_80(t);
      ;
      LocalPopChoice(p_24);
    }
  else
    {
      t = o_24;
      t = z_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm c_80 (ATerm), ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
  i_13 = t;
  t = c_80(t);
  j_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_13, term_q_24);
  {
    ATerm r_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_24 = ATgetArgument(t, 0);
            ATerm u_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(s_24);
      }
    else
      {
        t = r_24;
        t = (ATerm) ATempty;
      }
    k_13 = t;
    t = SSL_table_put(j_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(k_13), (ATerm) ATempty));
    t = i_13;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm h_83 (ATerm), ATerm t)
{
  ATerm t_13 = NULL;
  ATerm m_2 (ATerm t)
  {
    t = term_o_17;
    return(t);
  }
  t = begin_scope_1_0(m_2, t);
  {
    ATerm n_2 (ATerm t)
    {
      ATerm u_13 = NULL;
      u_13 = t;
      {
        ATerm v_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(x_24);
          }
        else
          {
            t = v_24;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((t_13 != NULL) && (t_13 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              t_13 = ATgetFirst((ATermList) t);
            {
              ATerm y_24 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(t_13);
        {
          ATerm o_2 (ATerm t)
          {
            ATerm z_24 = t;
            int a_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_13 = NULL;
                y_13 = t;
                t = SSL_remove(y_13);
                ;
                LocalPopChoice(a_25);
              }
            else
              {
                t = z_24;
              }
            return(t);
          }
          t = map_1_0(o_2, t);
          t = u_13;
          {
            ATerm p_2 (ATerm t)
            {
              t = term_o_17;
              return(t);
            }
            t = end_scope_1_0(p_2, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(h_83, n_2, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm i_83 (ATerm), ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_14 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm d_25 = t;
          int e_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_22 = NULL;
              t = eval_config_0_0(t);
              s_22 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), s_22);
              t = s_22;
              ;
              LocalPopChoice(e_25);
            }
          else
            {
              t = d_25;
            }
          d_14 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, d_14);
        }
        ;
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        t = term_f_25;
      }
    t = i_83(t);
    {
      ATerm r_2 (ATerm t)
      {
        ATerm g_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
            {
              ATerm i_25 = t;
              int j_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_22 = NULL;
                  t = eval_config_0_0(t);
                  w_22 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), w_22);
                  t = w_22;
                  ;
                  LocalPopChoice(j_25);
                }
              else
                {
                  t = i_25;
                }
            }
            ;
            LocalPopChoice(h_25);
          }
        else
          {
            t = g_25;
            t = term_k_25;
          }
        return(t);
      }
      t = copy_to_1_0(r_2, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(q_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL;
  e_14 = t;
  t = term_g_17;
  t = whoami_0_0(t);
  f_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), f_14), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = e_14;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm h_14 = NULL;
    h_14 = t;
    if(match_string(t, "-k"))
      {
        t = h_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = h_14;
      }
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    ATerm i_14 = NULL,j_14 = NULL;
    i_14 = t;
    t = SSL_string_to_int(i_14);
    j_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), j_14);
    t = i_14;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_l_25;
    return(t);
  }
  t = ArgOption_3_0(s_2, t_2, u_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_2 (ATerm t)
      {
        ATerm l_14 = NULL;
        l_14 = t;
        if(match_string(t, "-S"))
          {
            t = l_14;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = l_14;
          }
        return(t);
      }
      ATerm w_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_q_25;
        return(t);
      }
      ATerm x_2 (ATerm t)
      {
        t = term_r_25;
        return(t);
      }
      t = Option_3_0(v_2, w_2, x_2, t);
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = m_25;
      {
        ATerm s_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm z_2 (ATerm t)
            {
              ATerm m_14 = NULL,n_14 = NULL;
              m_14 = t;
              t = SSL_string_to_int(m_14);
              n_14 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_14);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, m_14);
              return(t);
            }
            ATerm a_3 (ATerm t)
            {
              t = term_v_25;
              return(t);
            }
            t = ArgOption_3_0(y_2, z_2, a_3, t);
            ;
            LocalPopChoice(u_25);
          }
        else
          {
            t = s_25;
            {
              ATerm b_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm c_3 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_w_25;
                return(t);
              }
              ATerm d_3 (ATerm t)
              {
                t = term_x_25;
                return(t);
              }
              t = Option_3_0(b_3, c_3, d_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_14 = NULL;
      t = term_g_17;
      t = d_0(t);
      v_14 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_25, term_z_25, v_14);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm a_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_14 = ATgetFirst((ATermList) t);
          u_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_14;
      t = a_0(t);
      t = term_g_17;
      t = c_0(t);
      a_15 = t;
      t = (ATerm) ATinsert(CheckATermList(u_14), a_15);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm c_15 = NULL;
    c_15 = t;
    if(match_string(t, "-o"))
      {
        t = c_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = c_15;
      }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    ATerm d_15 = NULL;
    d_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), d_15);
    t = (ATerm) ATmakeAppl(sym_Output_1, d_15);
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = term_a_26;
    return(t);
  }
  t = ArgOption_3_0(e_3, f_3, j_3, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL;
  if(match_cons(t, sym__3))
    {
      i_15 = ATgetArgument(t, 0);
      j_15 = ATgetArgument(t, 1);
      k_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_15, j_15);
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_26 = ATgetArgument(t, 0);
            ATerm e_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(i_15, j_15);
        ;
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        t = (ATerm) ATempty;
      }
    l_15 = t;
    t = SSL_table_put(i_15, j_15, (ATerm) ATinsert(CheckATermList(l_15), k_15));
    t = (ATerm) ATmakeAppl(sym__3, i_15, j_15, k_15);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_15 = NULL;
      t = term_g_17;
      t = j_0(t);
      z_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_25, term_z_25, z_15);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm d_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_15 = ATgetFirst((ATermList) t);
          w_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_15;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_15 = ATgetFirst((ATermList) t);
          y_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_15;
      t = h_0(t);
      t = x_15;
      t = i_0(t);
      d_16 = t;
      t = (ATerm) ATinsert(CheckATermList(y_15), d_16);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm f_16 = NULL;
    f_16 = t;
    if(match_string(t, "-i"))
      {
        t = f_16;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = f_16;
      }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    ATerm g_16 = NULL;
    g_16 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), g_16);
    t = (ATerm) ATmakeAppl(sym_Input_1, g_16);
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    t = term_f_26;
    return(t);
  }
  t = ArgOption_3_0(l_3, n_3, r_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_16 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_17;
  t = whoami_0_0(t);
  h_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), h_16));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_23 = NULL;
        t = eval_config_0_0(t);
        a_23 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), a_23);
        t = a_23;
        ;
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm t)
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_76(t);
      ;
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      {
        ATerm k_16 = NULL,l_16 = NULL,o_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_16 = ATgetFirst((ATermList) t);
            l_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_16;
        t = foldr_2_0(f_76, g_76, t);
        o_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_16, o_16);
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
  ATerm r_16 = NULL,b_23 = NULL,c_23 = NULL;
  t = times_0_0(t);
  b_23 = t;
  t = SSL_explode_term(b_23);
  if(match_cons(t, sym__2))
    {
      ATerm k_26 = ATgetArgument(t, 0);
      c_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_23;
  {
    ATerm s_3 (ATerm t)
    {
      t = term_p_25;
      return(t);
    }
    ATerm t_3 (ATerm t)
    {
      ATerm f_23 = NULL,g_23 = NULL;
      if(match_cons(t, sym__2))
        {
          f_23 = ATgetArgument(t, 0);
          g_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm l_26 = t;
        int m_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(f_23, g_23);
            ;
            LocalPopChoice(m_26);
          }
        else
          {
            t = l_26;
            t = SSL_addr(f_23, g_23);
          }
      }
      return(t);
    }
    t = foldr_2_0(s_3, t_3, t);
    r_16 = t;
    t = SSL_TicksToSeconds(r_16);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  d_17 = t;
  if(match_cons(t, sym__2))
    {
      e_17 = ATgetArgument(t, 0);
      f_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_17;
        if((e_17 != t))
          {
            _fail(t);
          }
        t = d_17;
        ;
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = d_17;
        {
          ATerm p_26 = t;
          int q_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_17, f_17);
              ;
              LocalPopChoice(q_26);
            }
          else
            {
              t = p_26;
              t = SSL_gtr(e_17, f_17);
            }
          t = (ATerm) ATmakeAppl(sym__2, e_17, f_17);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm r_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_17 = NULL,k_17 = NULL;
      i_17 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm t_26 = t;
        int u_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_23 = NULL;
            t = eval_config_0_0(t);
            q_23 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), q_23);
            t = q_23;
            ;
            LocalPopChoice(u_26);
          }
        else
          {
            t = t_26;
          }
        k_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_17, term_o_6);
        t = geq_0_0(t);
        t = i_17;
        t = d_81(t);
      }
      ;
      LocalPopChoice(s_26);
    }
  else
    {
      t = r_26;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm m_17 = NULL,n_17 = NULL;
    t = run_time_0_0(t);
    m_17 = t;
    t = term_g_17;
    t = whoami_0_0(t);
    n_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), m_17), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), n_17));
    t = (ATerm) ATmakeAppl(sym__2, term_n_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_26), m_17), term_v_6), n_17));
    return(t);
  }
  t = if_verbose1_1_0(v_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm j_85 (ATerm), ATerm t)
{
  ATerm w_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm y_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_23 = NULL;
            t = eval_config_0_0(t);
            u_23 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), u_23);
            t = u_23;
            ;
            LocalPopChoice(z_26);
          }
        else
          {
            t = y_26;
          }
      }
      ;
      LocalPopChoice(x_26);
    }
  else
    {
      t = w_26;
      {
        ATerm w_3 (ATerm t)
        {
          ATerm a_27 = t;
          int b_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(b_27);
            }
          else
            {
              t = a_27;
              {
                ATerm c_27 = t;
                int d_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(d_27);
                  }
                else
                  {
                    t = c_27;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(w_3, t);
      }
    }
  t = j_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_17 = ATgetFirst((ATermList) t);
      q_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_17 = NULL,v_17 = NULL;
        t = q_17;
        t = g_0(t);
        u_17 = t;
        t = p_17;
        t = e_0(t);
        v_17 = t;
        t = q_17;
        {
          ATerm x_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(u_17), v_17);
            return(t);
          }
          t = reverse_acc_2_0(e_0, x_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_17;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm m_62 (ATerm), ATerm t)
{
  ATerm y_17 = NULL,c_18 = NULL,e_18 = NULL,f_18 = NULL;
  f_18 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_18);
  y_17 = t;
  t = c_18;
  t = m_62(t);
  e_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, e_18), y_17);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm g_27 = t;
        int h_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_23 = NULL;
            t = eval_config_0_0(t);
            y_23 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), y_23);
            t = y_23;
            ;
            LocalPopChoice(h_27);
          }
        else
          {
            t = g_27;
          }
      }
      ;
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
      {
        ATerm y_3 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(y_3, t);
      }
    }
  t = term_i_27;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm z_3 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, z_3, t);
    {
      ATerm b_4 (ATerm t)
      {
        ATerm i_18 = NULL;
        i_18 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, i_18), term_j_27);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(b_4, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm n_62 (ATerm), ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL;
  m_18 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      k_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_18);
  j_18 = t;
  t = k_18;
  t = n_62(t);
  l_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, l_18), j_18);
  return(t);
}
ATerm fetch_1_0 (ATerm z_69 (ATerm), ATerm t)
{
  ATerm p_18 (ATerm t)
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(z_69, _id, t);
        ;
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        t = Cons_2_0(_id, p_18, t);
      }
    return(t);
  }
  t = p_18(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL;
  s_18 = t;
  {
    ATerm m_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_18;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_27 = ATgetFirst((ATermList) t);
                ATerm p_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_18;
          }
        ;
        LocalPopChoice(n_27);
      }
    else
      {
        t = m_27;
        t = (ATerm) ATinsert(ATempty, s_18);
      }
    t_18 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), t_18);
    t = s_18;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_24 = NULL;
        t = eval_config_0_0(t);
        c_24 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_24);
        t = c_24;
        ;
        LocalPopChoice(r_27);
      }
    else
      {
        t = q_27;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(t_27);
    }
  else
    {
      t = s_27;
      {
        ATerm z_18 = NULL,a_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_18 = ATgetFirst((ATermList) t);
            a_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_18;
        {
          ATerm d_4 (ATerm t)
          {
            t = a_19;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(d_4, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm f_70 (ATerm), ATerm t)
{
  ATerm g_19 (ATerm t)
  {
    ATerm u_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, g_19, t);
        ;
        LocalPopChoice(v_27);
      }
    else
      {
        t = u_27;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_70(t);
      }
    return(t);
  }
  t = g_19(t);
  return(t);
}
ATerm _2_0 (ATerm x_55 (ATerm), ATerm y_55 (ATerm), ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL;
  m_19 = t;
  if(match_cons(t, sym__2))
    {
      i_19 = ATgetArgument(t, 0);
      j_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_19);
  h_19 = t;
  t = i_19;
  t = x_55(t);
  k_19 = t;
  t = j_19;
  t = y_55(t);
  l_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, k_19, l_19), h_19);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm q_19 = NULL;
  ATerm e_4 (ATerm t)
  {
    ATerm r_19 = NULL;
    r_19 = t;
    t = SSL_explode_string(r_19);
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    ATerm s_19 = NULL;
    s_19 = t;
    t = SSL_explode_string(s_19);
    return(t);
  }
  t = _2_0(e_4, h_4, t);
  {
    ATerm w_27 = t;
    int x_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_19 = NULL,v_19 = NULL;
        if(match_cons(t, sym__2))
          {
            u_19 = ATgetArgument(t, 0);
            v_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_19;
        {
          ATerm i_4 (ATerm t)
          {
            t = v_19;
            return(t);
          }
          t = at_end_1_0(i_4, t);
        }
        ;
        LocalPopChoice(x_27);
      }
    else
      {
        t = w_27;
        {
          ATerm f_24 = NULL,g_24 = NULL;
          f_24 = t;
          t = SSL_explode_term(f_24);
          if(match_cons(t, sym__2))
            {
              ATerm y_27 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) y_27) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              g_24 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_24;
          t = concat_0_0(t);
        }
      }
    q_19 = t;
    t = SSL_implode_string(q_19);
  }
  return(t);
}
ATerm map_1_0 (ATerm o_69 (ATerm), ATerm t)
{
  ATerm b_20 (ATerm t)
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        t = Cons_2_0(o_69, b_20, t);
      }
    return(t);
  }
  t = b_20(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_20 = NULL;
      i_20 = t;
      t = SSL_is_string(i_20);
      ;
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
      {
        ATerm d_28 = t;
        int e_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_4 (ATerm t)
            {
              ATerm f_28 = t;
              int g_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(g_28);
                }
              else
                {
                  t = f_28;
                }
              return(t);
            }
            t = map_1_0(j_4, t);
            ;
            LocalPopChoice(e_28);
          }
        else
          {
            t = d_28;
            {
              ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL;
              m_20 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_20 = ATgetArgument(t, 0);
                  t = n_20;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_20 = ATgetArgument(t, 0);
                      t = n_20;
                      {
                        ATerm h_28 = t;
                        int i_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_20);
                            {
                              ATerm j_28 = t;
                              int k_28 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm w_24 = NULL;
                                  t = eval_config_0_0(t);
                                  w_24 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_20, w_24);
                                  t = w_24;
                                  ;
                                  LocalPopChoice(k_28);
                                }
                              else
                                {
                                  t = j_28;
                                }
                            }
                            ;
                            LocalPopChoice(i_28);
                          }
                        else
                          {
                            t = h_28;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_20), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = n_20;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm s_20 = NULL,t_20 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_20 = ATgetArgument(t, 0);
                          o_20 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_20;
                      t = eval_config_0_0(t);
                      s_20 = t;
                      t = o_20;
                      t = eval_config_0_0(t);
                      t_20 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_20, t_20);
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
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm l_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_p_28;
        return(t);
      }
      ATerm m_4 (ATerm t)
      {
        t = term_q_28;
        return(t);
      }
      t = Option_3_0(k_4, l_4, m_4, t);
      ;
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      {
        ATerm q_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm r_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_r_28;
          return(t);
        }
        ATerm s_4 (ATerm t)
        {
          t = term_s_28;
          return(t);
        }
        t = Option_3_0(q_4, r_4, s_4, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm g_57 (ATerm), ATerm h_57 (ATerm), ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL;
  d_21 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_20 = ATgetFirst((ATermList) t);
      a_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_21);
  y_20 = t;
  t = z_20;
  t = g_57(t);
  b_21 = t;
  t = a_21;
  t = h_57(t);
  c_21 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(c_21), b_21), y_20);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_87 (ATerm), ATerm t)
{
  ATerm h_21 = NULL;
  h_21 = t;
  {
    ATerm t_28 = t;
    int u_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_28;
        t = h_87(t);
        ;
        LocalPopChoice(u_28);
      }
    else
      {
        t = t_28;
      }
    t = h_21;
    {
      ATerm x_4 (ATerm t)
      {
        ATerm i_21 = NULL;
        i_21 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_21);
        t = (ATerm) ATmakeAppl(sym_Program_1, i_21);
        return(t);
      }
      ATerm a_5 (ATerm t)
      {
        ATerm w_28 = t;
        int x_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_28 = t;
            int z_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(z_28);
              }
            else
              {
                t = y_28;
                t = h_87(t);
                t = Cons_2_0(_id, a_5, t);
              }
            ;
            LocalPopChoice(x_28);
          }
        else
          {
            t = w_28;
            {
              ATerm k_21 = NULL,l_21 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_21 = ATgetFirst((ATermList) t);
                  l_21 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(l_21), (ATerm) ATmakeAppl(sym_Undefined_1, k_21));
            }
          }
        return(t);
      }
      t = Cons_2_0(x_4, a_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm g_87 (ATerm), ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
  s_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = s_21;
  {
    ATerm b_5 (ATerm t)
    {
      ATerm a_29 = t;
      int b_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_87(t);
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
                ATerm c_5 (ATerm t)
                {
                  ATerm v_21 = NULL;
                  v_21 = t;
                  if(match_string(t, "--help"))
                    {
                      t = v_21;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = v_21;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = v_21;
                        }
                    }
                  return(t);
                }
                ATerm d_5 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_e_29;
                  return(t);
                }
                ATerm e_5 (ATerm t)
                {
                  t = term_f_29;
                  return(t);
                }
                t = Option_3_0(c_5, d_5, e_5, t);
                ;
                LocalPopChoice(d_29);
              }
            else
              {
                t = c_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_5, t);
    {
      ATerm g_29 = t;
      int h_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_22 = NULL;
          a_22 = t;
          {
            ATerm i_29 = t;
            int j_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = a_22;
                {
                  ATerm k_29 = t;
                  int l_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm m_29 = t;
                        int n_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm n_25 = NULL;
                            t = eval_config_0_0(t);
                            n_25 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), n_25);
                            t = n_25;
                            ;
                            LocalPopChoice(n_29);
                          }
                        else
                          {
                            t = m_29;
                          }
                      }
                      ;
                      LocalPopChoice(l_29);
                    }
                  else
                    {
                      t = k_29;
                      {
                        ATerm i_5 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(i_5, t);
                      }
                    }
                  t = a_22;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(j_29);
              }
            else
              {
                t = i_29;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm o_29 = t;
                  int p_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_25 = NULL;
                      t = eval_config_0_0(t);
                      t_25 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), t_25);
                      t = t_25;
                      ;
                      LocalPopChoice(p_29);
                    }
                  else
                    {
                      t = o_29;
                    }
                  t = a_22;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(h_29);
        }
      else
        {
          t = g_29;
          {
            ATerm q_29 = t;
            int r_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_5 (ATerm t)
                {
                  ATerm k_5 (ATerm t)
                  {
                    if(((t_21 != NULL) && (t_21 != t)))
                      _fail(t);
                    else
                      t_21 = t;
                    return(t);
                  }
                  t = Undefined_1_0(k_5, t);
                  return(t);
                }
                t = fetch_1_0(j_5, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_21)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_21)), term_s_29));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(r_29);
              }
            else
              {
                t = q_29;
              }
          }
        }
      u_21 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = u_21;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm t)
{
  ATerm d_22 = NULL;
  t = parse_options_1_0(l_85, t);
  d_22 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), d_22);
  t = d_22;
  t = n_85(t);
  {
    ATerm t_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_85, t);
        ;
        LocalPopChoice(u_29);
      }
    else
      {
        t = t_29;
        {
          ATerm v_29 = t;
          int w_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(w_29);
            }
          else
            {
              t = v_29;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm l_5 (ATerm t)
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = input_option_0_0(t);
        ;
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
        {
          ATerm z_29 = t;
          int a_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = output_option_0_0(t);
              ;
              LocalPopChoice(a_30);
            }
          else
            {
              t = z_29;
              {
                ATerm b_30 = t;
                int c_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_5 (ATerm t)
                    {
                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                        _fail(t);
                      return(t);
                    }
                    ATerm s_5 (ATerm t)
                    {
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                      t = term_d_30;
                      return(t);
                    }
                    ATerm u_5 (ATerm t)
                    {
                      t = term_e_30;
                      return(t);
                    }
                    t = Option_3_0(p_5, s_5, u_5, t);
                    ;
                    LocalPopChoice(c_30);
                  }
                else
                  {
                    t = b_30;
                    {
                      ATerm f_30 = t;
                      int g_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = verbose_option_0_0(t);
                          ;
                          LocalPopChoice(g_30);
                        }
                      else
                        {
                          t = f_30;
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
  ATerm o_5 (ATerm t)
  {
    ATerm v_5 (ATerm t)
    {
      ATerm w_5 (ATerm t)
      {
        t = term_h_30;
        return(t);
      }
      t = xtc_sglr_1_0(w_5, t);
      {
        ATerm i_30 = t;
        int j_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_30 = t;
            int l_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(l_30);
              }
            else
              {
                t = k_30;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(j_30);
            {
              ATerm d_6 (ATerm t)
              {
                t = term_m_30;
                return(t);
              }
              t = xtc_transform_file_2_0(d_6, pass_verbose_0_0, t);
            }
          }
        else
          {
            t = i_30;
            {
              ATerm e_6 (ATerm t)
              {
                t = term_m_30;
                return(t);
              }
              t = xtc_transform_term_2_0(e_6, pass_verbose_0_0, t);
            }
          }
      }
      return(t);
    }
    t = xtc_io_1_0(v_5, t);
    return(t);
  }
  t = option_wrap_4_0(l_5, default_usage_0_0, _id, o_5, t);
  return(t);
}
